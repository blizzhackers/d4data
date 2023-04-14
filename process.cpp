/**
 * Diablo 4 JSON and Texture Compiler.
 *
 * Requires libpng dev package:
 *   sudo apt install libpng++-dev
 *
 * .skl structure adapted from https://github.com/mfloob/diablo4-data-harvest
 * .stl structure adapted from https://github.com/mfloob/diablo4-data-harvest
 * .tex structure from research by ejt
 */

#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <set>
#include <filesystem>
#include <png++/png.hpp>
#include <math.h>
#include <sys/stat.h>
#include <chrono>

#include "DirectX/bc.h"

#pragma pack(push,1)

template <class A>
A clamp(A minimum, A value, A maximum) {
  return value < minimum ? minimum : value > maximum ? maximum : value;
}

float gammaCorrect(float c) {
  return c <= 0.0031308 ?
    clamp<float>(0, 12.92f * c, 1) :
    clamp<float>(0, 1.055f * pow(c, 1.f / 2.4f) - 0.055f, 1);
}

float gammaUnCorrect(float c) {
  return c <= 0.040449936 ?
    clamp<float>(0, c / 12.92, 1) :
    clamp<float>(0, pow((c + 0.055f) / 1.055f, 2.4f), 1);
}

inline bool file_exists(const std::string& name) {
  struct stat buffer;
  return (stat (name.c_str(), &buffer) == 0);
}

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
  int32_t unk_a;
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
    uint32_t uid;
    uint32_t unused_0x14;
    FileChunk powers;
    FileChunk ints;
    FileChunk skill_tree;
    FileChunk unk_0x48;
    int32_t unk_0x58; // always unique
    float unk_0x5c; // Looks like skill tree position data
    float unk_0x60; // Looks like skill tree position data
    float unk_0x64; // Looks like skill tree position data
    float unk_0x68; // Looks like skill tree position data
    int32_t unk_0x6c; // unused
    int32_t unk_0x70; // unused
    int32_t unk_0x74; // unused
    int32_t unk_0x78; // unused
    int32_t unk_0x7c; // unused
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
    uint32_t uid;
    uint32_t unk_b[4];
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

enum class TexFormat : uint32_t {
  B8G8R8A8_UNORM_SRGB = 0,
  R8_UNORM = 7,  // XXX: looks like one of either R8_UNORM or A8_UNORM
  BC1_UNORM_SRGB_128_ALIGNED = 9,
  BC1_UNORM_SRGB_128_ALIGNED2 = 10,
  BC3_UNORM_SRGB = 12,
  R8_UNORM_128_ALIGNED = 23, // R8_UNORM or A8_UNORM
  R16G16B16A16_UNORM = 25,  // XXX: wrong, right?
  BC4_UNORM = 41,
  BC5_UNORM = 42,
  BC6H_SF16 = 43,
  BC7_UNORM_SRGB = 44,
  B8G8R8A8_UNORM = 45,
  BC1_UNORM = 46,
  BC1_UNORM_128_ALIGNED = 47,
  BC2_UNORM = 48,
  BC3_UNORM = 49,
  BC7_UNORM = 50,
  BC6H_UF16 = 51,
};

struct TexUnkChunk {
  uint32_t unk_a;
  float unk_b[8];
};

uint32_t align(uint32_t value, uint32_t alignment) {
  return ceil(double(value) / double(alignment)) * alignment;
}

struct TexFile : virtual public JsonInterface {
  struct {
    FileHeader header;
    uint32_t uid;
    uint8_t unk_a[3];
    uint8_t AlphaDepth;
    TexFormat Format;
    uint32_t unk_b;
    uint16_t width;
    uint16_t height;
    uint32_t unk_c[11];
    FileChunk chunk1;
    FileChunk chunk2;
    uint32_t unk_d[6];
  } header;

  uint32_t aligned_width;
  uint32_t aligned_height;

  TexFile(const char *filename) {
    std::ifstream file(filename, std::fstream::binary);
    file.read((char*)&header, sizeof(header));
    if (
      header.Format == TexFormat::BC1_UNORM ||
      header.Format == TexFormat::BC1_UNORM_SRGB_128_ALIGNED ||
      header.Format == TexFormat::BC1_UNORM_SRGB_128_ALIGNED2 ||
      header.Format == TexFormat::R8_UNORM_128_ALIGNED ||
      header.Format == TexFormat::BC1_UNORM_128_ALIGNED
    ) {
      aligned_width = align(header.width, 128);
      aligned_height = align(header.height, 128);
    } else {
      aligned_width = align(header.width, 64);
      aligned_height = align(header.height, 64);
    }
  }

  void OutputJSON(std::ofstream &out) {
    out << "{";
    out << "\n  \"id\": " << uint32_t(header.uid) << ",";
    out << "\n  \"format\": " << uint32_t(header.Format) << ",";
    out << "\n  \"width\": " << header.width << ",";
    out << "\n  \"height\": " << header.height << ",";
    out << "\n  \"alignedWidth\": " << aligned_width << ",";
    out << "\n  \"alignedHeight\": " << aligned_height << "";
    out << "\n}";
  }

  size_t Decode(DirectX::XMVECTOR *pColor, uint8_t *&pBC) {
    switch (header.Format) {
      case TexFormat::BC1_UNORM:
      case TexFormat::BC1_UNORM_128_ALIGNED:
      case TexFormat::BC1_UNORM_SRGB_128_ALIGNED:
      case TexFormat::BC1_UNORM_SRGB_128_ALIGNED2:
        DirectX::D3DXDecodeBC1(pColor, pBC);
        pBC += 8;
        return 8;

      case TexFormat::BC2_UNORM:
        DirectX::D3DXDecodeBC2(pColor, pBC);
        pBC += 16;
        return 16;

      case TexFormat::BC3_UNORM:
      case TexFormat::BC3_UNORM_SRGB:
        DirectX::D3DXDecodeBC3(pColor, pBC);
        pBC += 16;
        return 16;

      case TexFormat::BC4_UNORM:
        DirectX::D3DXDecodeBC4U(pColor, pBC);
        pBC += 8;
        return 8;

      case TexFormat::BC5_UNORM:
        DirectX::D3DXDecodeBC5U(pColor, pBC);
        pBC += 16;
        return 16;

      case TexFormat::BC6H_SF16:
        DirectX::D3DXDecodeBC6HS(pColor, pBC);
        pBC += 16;
        return 16;

      case TexFormat::BC6H_UF16:
        DirectX::D3DXDecodeBC6HU(pColor, pBC);
        pBC += 16;
        return 16;

      case TexFormat::BC7_UNORM:
      case TexFormat::BC7_UNORM_SRGB:
        DirectX::D3DXDecodeBC7(pColor, pBC);
        pBC += 16;
        return 16;

      case TexFormat::B8G8R8A8_UNORM_SRGB:
      case TexFormat::R8_UNORM:
      case TexFormat::R8_UNORM_128_ALIGNED:
      case TexFormat::R16G16B16A16_UNORM:
      case TexFormat::B8G8R8A8_UNORM:      
      default:
        throw "Unknown format!";
    }

    return 0;
  }

  bool WritePNG(const std::string texturePayloadFilename, const std::string outFilename) {
    if (file_exists(texturePayloadFilename)) {
      std::ifstream in(texturePayloadFilename, std::ios::binary);
      png::image<png::rgba_pixel> image(header.width, header.height);
      std::string contents((std::istreambuf_iterator<char>(in)), std::istreambuf_iterator<char>());
      uint8_t *ptr = (uint8_t *)contents.c_str();
      DirectX::XMVECTOR res[NUM_PIXELS_PER_BLOCK]{0};

      for (uint32_t oy = 0; oy < aligned_height; oy += 4) {
        for (uint32_t ox = 0; ox < aligned_width; ox += 4) {
          if (!Decode(res, ptr)) {
            return false;
          }

          for (uint32_t y = 0; y < 4; y++) {
            for (uint32_t x = 0; x < 4; x++) {
              if (ox + x < header.width && oy + y < header.height) {
                uint32_t soff = x + y * 4;

                if (header.Format == TexFormat::BC4_UNORM) {
                  png::byte color = res[soff].vector4_f32[0] * 255;
                  png::rgba_pixel pixel(color,
                    color,
                    color,
                    res[soff].vector4_f32[3] * 255);

                  image.set_pixel(ox + x, oy + y, pixel);
                }
                else if (header.Format == TexFormat::BC6H_SF16 || header.Format == TexFormat::BC6H_UF16) {

                  png::rgba_pixel pixel(
                    gammaCorrect(res[soff].vector4_f32[0]) * 255,
                    gammaCorrect(res[soff].vector4_f32[1]) * 255,
                    gammaCorrect(res[soff].vector4_f32[2]) * 255,
                    clamp<float>(0, res[soff].vector4_f32[3], 1) * 255
                  );

                  image.set_pixel(ox + x, oy + y, pixel);
                }
                else if (
                  header.Format == TexFormat::B8G8R8A8_UNORM_SRGB ||
                  header.Format == TexFormat::BC1_UNORM_SRGB_128_ALIGNED ||
                  header.Format == TexFormat::BC1_UNORM_SRGB_128_ALIGNED2 ||
                  header.Format == TexFormat::BC3_UNORM_SRGB ||
                  header.Format == TexFormat::BC7_UNORM_SRGB
                ) {
                  png::rgba_pixel pixel(
                    gammaUnCorrect(res[soff].vector4_f32[0]) * 255,
                    gammaUnCorrect(res[soff].vector4_f32[1]) * 255,
                    gammaUnCorrect(res[soff].vector4_f32[2]) * 255,
                    clamp<float>(0, res[soff].vector4_f32[3], 1) * 255
                  );

                  image.set_pixel(ox + x, oy + y, pixel);
                }
                else {
                  png::rgba_pixel pixel(res[soff].vector4_f32[0] * 255,
                    res[soff].vector4_f32[1] * 255,
                    res[soff].vector4_f32[2] * 255,
                    res[soff].vector4_f32[3] * 255);

                  image.set_pixel(ox + x, oy + y, pixel);
                }
              }
            }
          }
        }
      }

      image.write(outFilename);

      return true;
    }

    return false;
  }
};

typedef int32_t bool32_t;

struct PowFile {
  FileHeader header;
  uint32_t uid;
};

int main() {
  auto start = std::chrono::high_resolution_clock::now();

  std::map<std::string, std::map<uint32_t, std::string>> json;

  for (const auto &entry : std::filesystem::directory_iterator("data/Base/meta/SkillKit")) {
    std::string path = entry.path();
    std::string name = entry.path().filename();
    std::string ext = entry.path().extension();

    if (ext == ".skl") {
      std::cout << "Compiling skl file: " << path << ".json" << std::endl;
      std::string outname = "json/skl/" + name + ".json";
      std::ofstream out(outname);
      SklFile tmp(path.c_str());
      tmp.OutputJSON(out);
      json["skl"][tmp.header.uid] = outname;
    }
  }

  for (const auto &entry : std::filesystem::directory_iterator("data/enUS_Text/meta/StringList")) {
    std::string path = entry.path();
    std::string name = entry.path().filename();
    std::string ext = entry.path().extension();

    if (ext == ".stl") {
      std::cout << "Compiling stl file: " << path << ".json" << std::endl;
      std::string outname = "json/stl/" + name + ".json";
      std::ofstream out(outname);
      StlFile tmp(path.c_str());
      tmp.OutputJSON(out);
      json["stl"][tmp.header.uid] = outname;
    }
  }

  for (const auto &entry : std::filesystem::directory_iterator("data/Base/meta/Texture")) {
    std::string path = entry.path();
    std::string name = entry.path().filename();
    std::string ext = entry.path().extension();

    if (ext == ".tex") {
      std::cout << "Compiling tex file: " << path << ".json" << std::endl;
      std::string outname = "json/tex/" + name + ".json";
      std::ofstream out(outname);
      TexFile tex(path.c_str());
      tex.OutputJSON(out);
      tex.WritePNG("data/Base/payload/Texture/" + name, "texture/" + name + ".png");
      json["tex"][tex.header.uid] = outname;
    }
  }

  size_t fileCount = 0;

  for (const auto &category : json) {
    std::ofstream findex("json/" + category.first + ".json");
    findex << "{\n";

    int count = 0;
    for (const auto &entry : category.second) {
      if (count > 0) {
        findex << ",\n";
      }

      findex << "  \"" << entry.first << "\": \"" << escape(entry.second.substr(5)) << "\"";
      fileCount++;
      count++;
    }

    findex << "\n}\n";
  }

  auto end = std::chrono::high_resolution_clock::now();
  auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

  std::cout << "Processed " << fileCount << " files in " << (duration.count() / 1000000.f) << " seconds." << std::endl;

  return 0;
}

#pragma pack(pop)
