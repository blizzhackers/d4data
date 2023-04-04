/**
 * Diablo 4 JSON Compiler.
 *
 * .skl structure adapted from https://github.com/mfloob/diablo4-data-harvest
 */

#include <iostream>
#include <fstream>
#include <vector>
#include <unordered_map>

struct SklHeader {
  uint32_t deadbeef, fileType;
  uint8_t padding_a[4];
  uint32_t hash_id;
  uint8_t padding_b[48];
  uint32_t skill_tree_offset, skill_tree_len;
  uint8_t padding_c[8];
  uint32_t something_offset, something_len, idk;
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

class SklFile {
  std::ifstream file;
public:
  SklHeader header;
  std::vector<SklField> fields;

  SklFile(const char *filename) {
    uint32_t data[4];

    file.open(filename, std::fstream::binary);
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
};

int main() {
  std::unordered_map<std::string, SklFile*> files;

  files["Barbarian"] = new SklFile("data/Barbarian.skl");
  files["Druid"] = new SklFile("data/Druid.skl");
  files["Necromancer"] = new SklFile("data/Necromancer.skl");
  files["Rogue"] = new SklFile("data/Rogue.skl");
  files["Sorcerer"] = new SklFile("data/Sorcerer.skl");

  for (const std::pair<const std::string, SklFile*> &sklfile : files) {
    std::ofstream out("json/" + sklfile.first + ".skl.json");
    out << "[\n";
    int c = 0;

    for (const auto &skill : sklfile.second->fields) {
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

  return 0;
}
