/**
 * Diablo 4 JSON Compiler.
 *
 * .skl structure adapted from https://github.com/mfloob/diablo4-data-harvest
 */

#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <set>
#include <filesystem>

#include "DirectX/bc.h"

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

struct FileHeader {
  uint32_t deadbeef;
  uint32_t fileType;
  uint32_t unk_a;
  uint32_t hash_id;
};

struct FileChunk {
  uint32_t unk[2];
  uint32_t offset;
  uint32_t length;
};

class JsonInterface {
  public:
    virtual void OutputJSON(std::ofstream &out) = 0;
};

struct SklField {
  uint32_t id;
  uint32_t unk_hash;
  uint32_t unk_a;
  float x, y;
  uint32_t is_root;
  uint32_t req_points;
  uint32_t unk_b;
  FileChunk connection;
  uint32_t unk_c[4];
  std::vector<uint32_t> connections;
};

struct SklFile : virtual public JsonInterface {
  struct {
    FileHeader header;
    uint32_t unk_b[10];
    FileChunk skill_tree;
    FileChunk something;
    uint32_t unk_d;
  } header;

  std::vector<SklField> fields;

  SklFile(const char *filename) {
    uint32_t data[4];
    std::ifstream file(filename, std::fstream::binary);

    file.read((char*)&header, sizeof(header));
    file.seekg(header.skill_tree.offset);
    file.read((char*)&data, 16);

    for (long c = 0; c < header.skill_tree.length; c += 64) {
      SklField tmp;
      file.read((char*)&tmp, 64);
      fields.push_back(tmp);
    }

    for (SklField &tmp : fields) {
      file.seekg(tmp.connection.offset);
      uint32_t cdata[4];
      file.read((char*)&cdata, 16);
      for (long c = 0; c < tmp.connection.length; c += 4) {
        uint32_t connection;
        file.read((char*)&connection, 4);
        tmp.connections.push_back(connection);
      }
    }
  }

  void OutputJSON(std::ofstream &out) {
    out << "[";
    int c = 0;

    for (const auto &skill : fields) {
      if (c > 0) {
        out << ",";
      }

      out << "\n  {";
      out << "\n    \"id\": " << skill.id << ",";
      out << "\n    \"is_root\": " << skill.is_root << ",";
      out << "\n    \"x\": " << skill.x << ",";
      out << "\n    \"y\": " << skill.y << ",";
      out << "\n    \"req_points\": " << skill.req_points << ",";
      out << "\n    \"connections\": [";

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
  FileChunk key;
  FileChunk value;
  uint32_t hash;
  uint32_t unk;
};

struct StlFile : virtual public JsonInterface {
  struct {
    FileHeader header;
    uint32_t unk_b[5];
    uint32_t info_len;
    uint32_t unk_c[2];
  } header;

  std::map<std::string, std::map<std::string, std::string>> strings;

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
      char key[field.key.length + 1]{0};
      char val[field.value.length + 1]{0};
      char hash[9]{0};

      sprintf(hash, "%08X", field.hash);

      file.seekg(field.key.offset + 16);
      file.read(key, field.key.length);
      file.seekg(field.value.offset + 16);
      file.read(val, field.value.length);
      strings[hash][key] = val;
    }
  }

  void OutputJSON(std::ofstream &out) {
    out << "{";

    int c = 0;

    for (const auto &hash_entry : strings) {
      if (c) {
        out << ",";
      }

      out << "\n  \"" << hash_entry.first << "\": {";

      int d = 0;
      for (const auto &entry : hash_entry.second) {
        if (d) {
          out << ",";
        }

        out << "\n    \"" << escape(entry.first) << "\": \"" << escape(entry.second) << "\"";
        d++;
      }

      out << "\n  }";

      c++;
    }

    out << "\n}\n";
  }
};

int main() {
  for (const auto &entry : std::filesystem::directory_iterator("data/Base/meta/SkillKit")) {
    std::string path = entry.path();
    std::string name = entry.path().filename();
    std::string ext = entry.path().extension();

    if (ext == ".skl") {
      std::cout << "Compiling skl file: " << path << ".json" << std::endl;
      std::ofstream out("json/skl/" + name + ".json");
      SklFile(path.c_str()).OutputJSON(out);
    }
  }

  for (const auto &entry : std::filesystem::directory_iterator("data/enUS_Text/meta/StringList")) {
    std::string path = entry.path();
    std::string name = entry.path().filename();
    std::string ext = entry.path().extension();

    if (ext == ".stl") {
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

      std::set<std::filesystem::path> sorted;

      for (const auto &subentry : std::filesystem::directory_iterator(path)) {
        sorted.insert(subentry);
      }

      for (const std::string &subpath : sorted) {
        if (count > 0) {
          findex << ",\n";
        }

        findex << "  \"" << escape(subpath.substr(5)) << "\"";
        count++;
      }

      findex << "\n]\n";
    }
  }

  return 0;
}
