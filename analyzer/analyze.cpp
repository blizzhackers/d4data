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
#include <string>
#include <vector>
#include <map>
#include <set>
#include <filesystem>
#include <fstream>
#include <algorithm>
#include <cmath>
#include <sys/stat.h>

long GetFileSize(std::string filename) {
    struct stat stat_buf;
    int rc = stat(filename.c_str(), &stat_buf);
    return rc == 0 ? stat_buf.st_size : -1;
}

using std::min;
using std::max;
using std::isfinite;

#pragma pack(push,1)

union field {
  uint32_t u;
  int32_t s;
  char c[4];
  uint8_t b[4];
  float f;
};

typedef std::set<std::string> fileCount;

struct stats {
  struct {
    uint32_t min, max;
  } u;

  struct {
    int32_t min, max;
    std::map<int32_t, fileCount> count;
  } s;

  struct {
    float min, max;
  } f;

  uint32_t fileChunkPossibleHits = 0;
  uint32_t fileChunkHits = 0;

  uint32_t stringPossibleHits = 0;
  uint32_t stringHits = 0;
};

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

bool isReasonableFloat(float v) {
  if (!isfinite(v)) {
    return false;
  }

  if (v == 0.f) {
    return true;
  }

  v = v < 0 ? -v : v;
  return v < 1e14 && v >= 1e-14;
}

bool isStringChar(unsigned char c) {
  return c == 0 || c == 10 || c == 13 || (c >= 32 && c < 127);
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
    char ch[2] = { c };

    switch (c) {
      case '"':
      case '\'':
      case '\\':
        ret += "\\";
        ret += ch;
        break;

      default:
        if (c >= 0 && c < 32) {
          ret += hexLookup[c];
        }
        else {
          ret += ch;
        }
    }
  }

  return ret;
}

std::string formatFloat(float v) {
  std::string ret = std::to_string(v);

  return ret;
}

int main(int argc, char *argv[]) {
  if (argc < 4) {
    std::cerr << "Usage: " << argv[0] << " [header_size] [extension] [directory]" << std::endl;
    return 1;
  }

  long headerSize = std::stol(argv[1]);

  if (headerSize % 4) {
    std::cerr << "Header size must be divisible by 4!" << std::endl;
  }

  headerSize /= 4;
  std::string targetExtension = argv[2];
  std::transform(targetExtension.begin(), targetExtension.end(), targetExtension.begin(), [](unsigned char c){ return std::tolower(c); });
  std::string searchPath = argv[3];

  if (targetExtension[0] != '.') {
    targetExtension = "." + targetExtension;
  }

  std::vector<stats> data;
  size_t fileCount = 0;

  for (const auto &entry : std::filesystem::recursive_directory_iterator(searchPath)) {
    if (entry.is_directory()) {
      continue;
    }

    long fileSize = GetFileSize(entry.path().c_str());
    std::string fileExtension = entry.path().extension();
    std::transform(fileExtension.begin(), fileExtension.end(), fileExtension.begin(), [](unsigned char c){ return std::tolower(c); });

    if (fileExtension != targetExtension) {
      continue;
    }

    std::ifstream file(entry.path(), std::fstream::binary);
    field v;
    int32_t p[3];

    fileCount++;

    for (int pos = 0; pos < headerSize && file.read((char*)&v, sizeof(v)) && !file.eof(); pos++) {
      if (data.size() < pos + 1) {
        stats tmp;

        tmp.u.min = v.u;
        tmp.u.max = v.u;
        tmp.s.min = v.s;
        tmp.s.max = v.s;

        if (tmp.s.count.count(v.s) == 0) {
          tmp.s.count[v.s].insert(entry.path().filename());
        }

        tmp.f.min = std::isfinite(v.f) ? v.f : INFINITY;
        tmp.f.max = std::isfinite(v.f) ? v.f : -INFINITY;

        data.push_back(tmp);
      }

      data[pos].u.min = min(data[pos].u.min, v.u);
      data[pos].u.max = max(data[pos].u.max, v.u);
      data[pos].s.min = min(data[pos].s.min, v.s);
      data[pos].s.max = max(data[pos].s.max, v.s);
      data[pos].s.count[v.s].insert(entry.path().filename());

      if (pos >= 7) {
        if (p[0] == 0 && p[1] == 0 && (p[2] == 0 || p[2] >= headerSize) && v.u == 0) {
          data[pos - 3].fileChunkPossibleHits++;
        }
        else if (
          p[0] == 0 &&
          p[1] == 0 &&
          p[2] >= headerSize &&
          v.s > 0 &&
          p[2] + v.s < fileSize
        ) {
          data[pos - 3].fileChunkHits++;
        }
      }

      if (v.u == 0) {
        data[pos].stringPossibleHits++;
      }
      else if (isStringChar(v.b[0]) && isStringChar(v.b[1]) && isStringChar(v.b[2]) && isStringChar(v.b[3])) {
        data[pos].stringHits++;
      }

      if (isfinite(v.f)) {
        data[pos].f.min = min(data[pos].f.min, v.f);
        data[pos].f.max = max(data[pos].f.max, v.f);
      }

      p[0] = p[1];
      p[1] = p[2];
      p[2] = v.s;
    }
  }

  for (int pos = 0; pos < headerSize && pos < data.size(); pos++) {
    std::cout << "0x" << std::hex << pos * 4 << std::dec << ": ";

    if (data[pos].s.min == 0 && data[pos].s.max == 0) {
      if (data[pos].fileChunkHits > 0 && data[pos].fileChunkHits + data[pos].fileChunkPossibleHits == fileCount) {
        if (data[pos + 3].s.min == data[pos + 3].s.max) {
          std::cout << "FileChunk # likely file chunk, " << max(1.f, roundf(100.f * float(data[pos].fileChunkHits) / float(fileCount))) << "% saturation, size " << data[pos + 3].s.min << std::endl;
        }
        else {
          std::cout << "FileChunk # likely file chunk, " << max(1.f, roundf(100.f * float(data[pos].fileChunkHits) / float(fileCount))) << "% saturation, size " << data[pos + 3].s.min << " to " << data[pos + 3].s.max << std::endl;
        }

        pos += 3;
      }
      else {
        std::cout << "null # unused" << std::endl;
      }
    }
    else if (data[pos].s.min == 0 && data[pos].s.max == 1) {
      std::cout << "bool32" << std::endl;
    }
    else {
      if (data[pos].s.min == data[pos].s.max) {
        if (pos < 4) {
          std::cout << "0x" << std::hex << data[pos].s.min << std::dec << " # always this value" << std::endl;
        }
        else if (isReasonableFloat(data[pos].f.min)) {
          std::cout << formatFloat(data[pos].f.min) << " # always this value" << std::endl;
        }
        else if (data[pos].stringHits > 0 && data[pos].stringHits + data[pos].stringPossibleHits == fileCount) {
          field tmp[2];
          tmp[0].s = data[pos].s.min;
          tmp[1].u = 0;
          std::cout << "string: \"" << escape(tmp[0].c) << "\" # always this value" << std::endl;
        }
        else {
          std::cout << data[pos].s.min << " # always this value" << std::endl;
        }
      }
      else {
        if (pos < 4) {
          std::cout << "[0x" << std::hex << data[pos].s.min << ", " << "0x" << std::hex << data[pos].s.max << "]" << std::dec << std::endl;
        }
        else if (isReasonableFloat(data[pos].f.min) && isReasonableFloat(data[pos].f.max)) {
          std::cout << "[" << formatFloat(data[pos].f.min) << ", " << formatFloat(data[pos].f.max) << "] # range of values" << std::endl;
        }
        else if (data[pos].stringHits > 0 && data[pos].stringHits + data[pos].stringPossibleHits == fileCount) {
          std::cout << "string # likely string, " << max(1.f, roundf(100.f * float(data[pos].stringHits) / float(fileCount))) << "% saturation" << std::endl;
        }
        else {
          bool isUnique = true;

          for (const auto &entry : data[pos].s.count) {
            if (entry.second.size() > 1) {
              isUnique = false;
            }
          }

          if (isUnique) {
            std::cout << "[" << data[pos].s.min << ", " << data[pos].s.max << "] # always unique" << std::endl;
          }
          else {
            std::cout << std::endl << "  occurrences: # Value: File" << std::endl;

            for (const auto &entry : data[pos].s.count) {
              if (entry.second.size() == 1) {
                std::cout << "    " << entry.first << ": ";

                for (const auto &filename : entry.second) {
                  std::cout << filename << std::endl;
                }

              }
              else if (entry.second.size() <= 5) {
                std::cout << "    " << entry.first << ":" << std::endl;

                for (const auto &filename : entry.second) {
                  std::cout << "      - " << filename << std::endl;
                }
              }
              else {
                std::cout << "    " << entry.first << ": (" << entry.second.size() << " files)" << std::endl;
              }
            }
          }
        }
      }
    }
  }

  return 0;
}

#pragma pack(pop)
