/**
 * Diablo 4 JSON Compiler.
 *
 * .skl structure adapted from https://github.com/mfloob/diablo4-data-harvest
 */

#include <iostream>
#include <fstream>
#include <vector>
#include <unordered_map>
#include <filesystem>

const char *hexLookup[] = {
  "\\0",
  "\\x01",
  "\\x02",
  "\\x03",
  "\\x04",
  "\\x05",
  "\\x06",
  "\\a",
  "\\b",
  "\\t",
  "\\n",
  "\\v",
  "\\f",
  "\\r",
  "\\x0E",
  "\\x0F",
  "\\x10",
  "\\x11",
  "\\x12",
  "\\x13",
  "\\x14",
  "\\x15",
  "\\x16",
  "\\x17",
  "\\x18",
  "\\x19",
  "\\x1A",
  "\\x1B",
  "\\x1C",
  "\\x1D",
  "\\x1E",
  "\\x1F",
};

std::string escape(std::string str) {
  std::string ret = "";

  for (char &c : str) {

    switch (c) {
      case '"':
      case '\\':
        ret += "\\" + c;
        break;

      default:
        if (c >= 0 && c < 32) {
          ret += hexLookup[c];
        }
        else {
          ret += c;
        }
    }
  }

  return ret;
}

class JsonInterface {
  public:
    virtual void OutputJSON(std::ofstream &out) = 0;
};

struct SklField {
  uint32_t id, reward_hash;
  uint32_t padding_a;
  float x, y;
  uint32_t is_root;
  uint32_t req_points;
  uint32_t padding_b[3];
  uint32_t connection_offset, connection_len;
  uint32_t padding_c[4];
  std::vector<uint32_t> connections;
};

struct SklFile : virtual public JsonInterface {
  struct {
    uint32_t deadbeef, fileType;
    uint8_t padding_a[4];
    uint32_t hash_id;
    uint8_t padding_b[48];
    uint32_t skill_tree_offset, skill_tree_len;
    uint8_t padding_c[8];
    uint32_t something_offset, something_len, idk;
  } header;

  std::vector<SklField> fields;

  SklFile(const char *filename) {
    uint32_t data[4];
    std::ifstream file(filename, std::fstream::binary);

    file.read((char*)&header, sizeof(header));
    file.seekg(header.skill_tree_offset);
    file.read((char*)&data, 16);

    for (long c = 0; c < header.skill_tree_len; c += 64) {
      SklField tmp;
      file.read((char*)&tmp, 64);
      fields.push_back(tmp);
    }

    for (SklField &tmp : fields) {
      file.seekg(tmp.connection_offset);
      uint32_t cdata[4];
      file.read((char*)&cdata, 16);
      for (long c = 0; c < tmp.connection_len; c += 4) {
        uint32_t connection;
        file.read((char*)&connection, 4);
        tmp.connections.push_back(connection);
      }
    }
  }

  void OutputJSON(std::ofstream &out) {
    out << "[\n";
    int c = 0;

    for (const auto &skill : fields) {
      if (c > 0) {
        out << ",\n";
      }

      out << "  {\n";
      out << "    \"id\": " << skill.id << ",\n";
      out << "    \"is_root\": " << skill.is_root << ",\n";
      out << "    \"x\": " << skill.x << ",\n";
      out << "    \"y\": " << skill.y << ",\n";
      out << "    \"req_points\": " << skill.req_points << ",\n";
      out << "    \"connections\": [";

      int d = 0;

      for (const auto &connection : skill.connections) {
        if (d > 0) {
          out << ", ";
        }

        out << connection;
        d++;
      }

      out << "]\n  }";
      c++;
    }
    out << "\n]\n";
  }
};

struct StlField {
  uint32_t padding_a[2], key_offset, key_len, padding_b[2], val_offset, val_len, padding_c[2];
};

struct StlFile : virtual public JsonInterface {
  struct {
    uint32_t deadbeef, padding_a[2], hash_id, padding_b[5], info_len, padding_c[2];
  } header;

  std::unordered_map<std::string, std::string> strings;

  StlFile(const char *filename) {
    std::ifstream file(filename, std::fstream::binary);
    file.read((char*)&header, sizeof(header));
    int num_pairs = header.info_len / 40;
    std::vector<StlField> fields;

    while(num_pairs--) {
      StlField field;
      file.read((char*)&field, sizeof(field));
      fields.push_back(field);
    }

    for (const StlField &field : fields) {
      char key[field.key_len + 1]{0};
      char val[field.val_len + 1]{0};

      file.seekg(field.key_offset + 16);
      file.read(key, field.key_len);
      file.seekg(field.val_offset + 16);
      file.read(val, field.val_len);
      strings[key] = val;
    }
  }

  void OutputJSON(std::ofstream &out) {
    out << "{\n";

    int count = 0;

    for (const auto &entry : strings) {
      if (count) {
        out << ",\n";
      }
      out << "  \"" << escape(entry.first) << "\": \"" << escape(entry.second) << "\"";
      count++;
    }

    out << "\n}\n";
  }
};

int main() {
  for (const auto &entry : std::filesystem::directory_iterator("data/")) {
    std::string path = entry.path();
    std::string name = entry.path().filename();
    std::string ext = entry.path().extension();

    if (ext == ".skl") {
      std::cout << "Compiling skl file: " << path << ".json" << std::endl;
      std::ofstream out("json/skl/" + name + ".json");
      SklFile(path.c_str()).OutputJSON(out);
    }
    else if (ext == ".stl") {
      std::cout << "Compiling stl file: " << path << ".json" << std::endl;
      std::ofstream out("json/stl/" + name + ".json");
      StlFile(path.c_str()).OutputJSON(out);
    }
  }

  for (const auto &entry : std::filesystem::directory_iterator("json")) {
    if (entry.is_directory()) {
      std::string path = entry.path();
      std::ofstream findex(path + ".json");
      findex << "[\n";
      int count = 0;

      for (const auto &subentry : std::filesystem::directory_iterator(path)) {
        if (count > 0) {
          findex << ",\n";
        }

        std::string subpath = subentry.path();

        findex << "  \"" << escape(subpath.substr(5)) << "\"";
        count++;
      }

      findex << "\n]\n";
    }
  }

  return 0;
}
