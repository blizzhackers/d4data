#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <unordered_set>
#include <unistd.h>
#include <algorithm>
#include <filesystem>

std::string rootPath = "";

uint32_t tmp[64]{ 0 };
uint32_t maxPos = sizeof(tmp) / sizeof(uint32_t);
uint32_t minPos = 0;

std::unordered_set<uint32_t> checksumMatch;
std::unordered_set<uint32_t> checksumMatchSecondary;
bool hashType = 0, outputLog = true;
bool paired = false, usingFieldTypeMap = false;

std::vector<std::string> prefix;
std::vector<std::string> dict;
std::vector<std::string> suffix;
std::unordered_map<std::string, bool> stringUsed;
std::unordered_map<uint32_t, std::vector<uint32_t>> fieldTypeMap;
std::unordered_map<uint32_t, std::unordered_set<std::string>> typePrefixes;

uint32_t checksum(std::string str, uint32_t hash = 0, uint32_t hashType = 0) {
  if (hashType == 2) { // gbid strings are lowercased
    std::transform(str.begin(), str.end(), str.begin(), [](unsigned char c){ return std::tolower(c); });
  }

  for (size_t i = 0; i < str.length(); i++) {
    hash = (hash << 5) + hash + (unsigned char)str[i];
  }

  // field names have an additional mask
  return hashType == 1 ? (hash & 0xfffffff) : hash;
}

auto getDictSize(long pos, long max) {
  if (pos == 0 && prefix.size() > 0) {
    return prefix.size();
  }

  if (pos == max - 1 && suffix.size() > 0) {
    return suffix.size();
  }

  return dict.size();
}

std::string getDictEntry(long index, long pos, long max) {
  if (pos == 0 && prefix.size() > 0) {
    return prefix[index];
  }

  if (pos == max - 1 && suffix.size() > 0) {
    return suffix[index];
  }

  return dict[index];
}

std::string getWord(int32_t max) {
  std::string ret = "";

  for (int32_t pos = 0; pos < max; pos++) {
    ret = ret + getDictEntry(tmp[pos], pos, max);
  }

  return ret;
}

bool hasCaps(std::string word) {
  for (uint32_t c = 0; c < word.size(); c++) {
    if (word[c] >= 'A' && word[c] <= 'Z') {
      return true;
    }
  }

  return false;
}

bool checkPaired(int32_t max) {
  if (!paired) {
    return true;
  }

  if (hashType == 0) {
    std::string word = getWord(max);
    uint32_t wordChecksum = checksum("t" + word, hashType);

    if (checksumMatchSecondary.count(wordChecksum) > 0) {
      return true;
    }

    wordChecksum = checksum("pt" + word, hashType);
    if (checksumMatchSecondary.count(wordChecksum) > 0) {
      return true;
    }

    wordChecksum = checksum("ar" + word, hashType);

    if (checksumMatchSecondary.count(wordChecksum) > 0) {
      return true;
    }

    wordChecksum = checksum("t" + word + "s", hashType);

    if (checksumMatchSecondary.count(wordChecksum) > 0) {
      return true;
    }

    wordChecksum = checksum("pt" + word + "s", hashType);

    if (checksumMatchSecondary.count(wordChecksum) > 0) {
      return true;
    }

    wordChecksum = checksum("ar" + word + "s", hashType);

    if (checksumMatchSecondary.count(wordChecksum) > 0) {
      return true;
    }
  }


  return false;
}

bool correctType(uint32_t currentChecksum) {
  if (!usingFieldTypeMap || prefix.size() < 1) {
    return true;
  }

  if (fieldTypeMap[currentChecksum].size() < 1) {
    currentChecksum = 0;
  }

  for (uint32_t typeHash : fieldTypeMap[currentChecksum]) {
    if (typePrefixes[typeHash].count(prefix[tmp[0]]) > 0) {
      return true;
    }
  }

  return false;
}

void collisions(long pos, long max, uint32_t currentChecksum = 0) {
  if (pos >= max) {
    if(checksumMatch.count(currentChecksum) > 0 && checkPaired(max) && correctType(currentChecksum)) {
      std::string word = getWord(max);
      std::cout << "  " << std::hex << currentChecksum << ": " << word << std::endl;

      if (outputLog) {
        std::stringstream outfilePath;

        if (hashType == 0) {
          outfilePath << "type/";
        }
        else if (hashType == 1) {
          outfilePath << "field/";
        }
        else if (hashType == 1) {
          outfilePath << "gbid/";
        }

        outfilePath << std::hex << currentChecksum << ".yml";

        std::ofstream outfile(outfilePath.str(), std::ios::app);
        outfile << std::hex << currentChecksum << ": " << word << std::endl;
        outfile.close();
      }
    }

    return;
  }

  long cmax = getDictSize(pos, max);

  for (long c = 0; c < cmax; c++) {
    tmp[pos] = c;
    uint32_t newChecksum = checksum(getDictEntry(c, pos, max), currentChecksum, hashType);
    collisions(pos + 1, max, newChecksum);
  }
}

std::vector<std::string> defaultDict {
  "0",
  "1",
  "2",
  "3",
  "4",
  "5",
  "6",
  "7",
  "8",
  "9",
  "_",
  "a",
  "b",
  "c",
  "d",
  "e",
  "f",
  "g",
  "h",
  "i",
  "j",
  "k",
  "l",
  "m",
  "n",
  "o",
  "p",
  "q",
  "r",
  "s",
  "t",
  "u",
  "v",
  "w",
  "x",
  "y",
  "z",
  "A",
  "B",
  "C",
  "D",
  "E",
  "F",
  "G",
  "H",
  "I",
  "J",
  "K",
  "L",
  "M",
  "N",
  "O",
  "P",
  "Q",
  "R",
  "S",
  "T",
  "U",
  "V",
  "W",
  "X",
  "Y",
  "Z",
};

std::vector<std::string> getDict(bool english = false) {
  std::vector<std::string> ret;

  {
    std::ifstream dict("../dict.txt");
    std::string tmp;

    dict >> tmp;
    while (dict) {
      ret.push_back(tmp);
      dict >> tmp;
    }
  }

  if (english) {
    std::ifstream dict("../english_dict.txt");
    std::string tmp;

    dict >> tmp;
    while (dict) {
      ret.push_back(tmp);
      dict >> tmp;
    }
  }

  return ret;
}

std::vector<std::string> getPrefixes() {
  std::ifstream prefixes("../prefix.txt");
  std::string tmp;
  std::vector<std::string> ret;

  prefixes >> tmp;
  while (prefixes) {
    ret.push_back(tmp);
    prefixes >> tmp;
  }

  return ret;
}

bool isAllCaps(std::string elem) {
  if (elem.length() < 2) {
    return false;
  }

  for (int i = 0; i < elem.length(); i++) {
    if (elem[i] >= 'a' && elem[i] <= 'z') {
      return false;
    }
  }

  return true;
}

void loadFieldTypeMap () {
  std::ifstream fieldTypes("../field_types.txt");
  uint32_t v1 = 0, v2 = 0;

  usingFieldTypeMap = true;

  fieldTypes >> std::hex >> v1 >> std::hex >> v2;

  while (fieldTypes) {
    fieldTypeMap[v1].push_back(v2);
    fieldTypes >> std::hex >> v1 >> std::hex >> v2;
  }

  fieldTypes.close();

  typePrefixes[0].insert(""); // ?
  typePrefixes[checksum("DT_FLOAT")].insert("a"); // DT_FLOAT
  typePrefixes[checksum("DT_INT64")].insert("m_a"); // DT_INT64
  typePrefixes[checksum("DT_VARIABLEARRAY")].insert("ar"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY
  typePrefixes[checksum("DT_VARIABLEARRAY")].insert("m_ar"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY
  typePrefixes[checksum("DT_VARIABLEARRAY")].insert("arn"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY
  typePrefixes[checksum("DT_VARIABLEARRAY")].insert("m_arn"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY
  typePrefixes[checksum("DT_VARIABLEARRAY")].insert("arr"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY
  typePrefixes[checksum("DT_VARIABLEARRAY")].insert("m_arr"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY
  typePrefixes[checksum("DT_POLYMORPHIC_VARIABLEARRAY")].insert("ar"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY
  typePrefixes[checksum("DT_POLYMORPHIC_VARIABLEARRAY")].insert("m_ar"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY
  typePrefixes[checksum("DT_POLYMORPHIC_VARIABLEARRAY")].insert("arn"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY
  typePrefixes[checksum("DT_POLYMORPHIC_VARIABLEARRAY")].insert("m_arn"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY
  typePrefixes[checksum("DT_POLYMORPHIC_VARIABLEARRAY")].insert("arr"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY
  typePrefixes[checksum("DT_POLYMORPHIC_VARIABLEARRAY")].insert("m_arr"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY
  typePrefixes[checksum("DT_FIXEDARRAY")].insert("ar"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY
  typePrefixes[checksum("DT_FIXEDARRAY")].insert("m_ar"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY
  typePrefixes[checksum("DT_FIXEDARRAY")].insert("arn"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY
  typePrefixes[checksum("DT_FIXEDARRAY")].insert("m_arn"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY
  typePrefixes[checksum("DT_FIXEDARRAY")].insert("arr"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY
  typePrefixes[checksum("DT_FIXEDARRAY")].insert("m_arr"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY
  typePrefixes[checksum("DT_INT")].insert("b"); // DT_INT
  typePrefixes[checksum("DT_INT")].insert("m_b"); // DT_INT
  typePrefixes[0].insert("bc"); // ?
  typePrefixes[0].insert("m_bc"); // ?
  typePrefixes[checksum("DT_WORD")].insert("bone"); // DT_WORD, DT_INT
  typePrefixes[checksum("DT_WORD")].insert("m_bone"); // DT_WORD, DT_INT
  typePrefixes[checksum("DT_INT")].insert("bone"); // DT_WORD, DT_INT
  typePrefixes[checksum("DT_INT")].insert("m_bone"); // DT_WORD, DT_INT
  typePrefixes[checksum("DT_INT64")].insert("cell"); // ?, DT_INT64, AICellData, AICellBytes, DT_FLOAT
  typePrefixes[checksum("DT_INT64")].insert("m_cell"); // ?, DT_INT64, AICellData, AICellBytes, DT_FLOAT
  typePrefixes[checksum("AICellData")].insert("cell"); // ?, DT_INT64, AICellData, AICellBytes, DT_FLOAT
  typePrefixes[checksum("AICellData")].insert("m_cell"); // ?, DT_INT64, AICellData, AICellBytes, DT_FLOAT
  typePrefixes[checksum("AICellBytes")].insert("cell"); // ?, DT_INT64, AICellData, AICellBytes, DT_FLOAT
  typePrefixes[checksum("AICellBytes")].insert("m_cell"); // ?, DT_INT64, AICellData, AICellBytes, DT_FLOAT
  typePrefixes[checksum("DT_FLOAT")].insert("cell"); // ?, DT_INT64, AICellData, AICellBytes, DT_FLOAT
  typePrefixes[checksum("DT_FLOAT")].insert("m_cell"); // ?, DT_INT64, AICellData, AICellBytes, DT_FLOAT
  typePrefixes[checksum("DT_INT")].insert("count"); // DT_INT
  typePrefixes[checksum("DT_INT")].insert("m_count"); // DT_INT
  typePrefixes[checksum("DT_UINT")].insert("dw"); // DT_UINT
  typePrefixes[checksum("DT_UINT")].insert("m_dw"); // DT_UINT
  typePrefixes[checksum("DT_ENUM")].insert("e"); // DT_ENUM
  typePrefixes[checksum("DT_ENUM")].insert("m_e"); // DT_ENUM
  typePrefixes[checksum("DT_WORD")].insert("end"); // DT_WORD
  typePrefixes[checksum("DT_WORD")].insert("m_end"); // DT_WORD
  typePrefixes[checksum("DT_INT")].insert("f"); // DT_INT
  typePrefixes[checksum("DT_INT")].insert("m_f"); // DT_INT
  typePrefixes[checksum("DT_FLOAT")].insert("fl"); // DT_FLOAT
  typePrefixes[checksum("DT_FLOAT")].insert("m_fl"); // DT_FLOAT
  typePrefixes[checksum("DT_BYTE")].insert("game"); // DT_BYTE
  typePrefixes[checksum("DT_BYTE")].insert("m_game"); // DT_BYTE
  typePrefixes[checksum("DT_GBID")].insert("gbid"); // DT_GBID
  typePrefixes[checksum("DT_GBID")].insert("m_gbid"); // DT_GBID
  typePrefixes[0].insert("h"); // ?, DT_UINT
  typePrefixes[0].insert("m_h"); // ?, DT_UINT
  typePrefixes[checksum("DT_UINT")].insert("h"); // ?, DT_UINT
  typePrefixes[checksum("DT_UINT")].insert("m_h"); // ?, DT_UINT
  typePrefixes[checksum("DT_INT")].insert("i"); // DT_INT
  typePrefixes[checksum("DT_INT")].insert("m_i"); // DT_INT
  typePrefixes[checksum("DT_ENUM")].insert("id"); // ?, DT_ENUM, DT_INT, DT_UINT, DT_SHARED_SERVER_DATA_ID
  typePrefixes[checksum("DT_ENUM")].insert("m_id"); // ?, DT_ENUM, DT_INT, DT_UINT, DT_SHARED_SERVER_DATA_ID
  typePrefixes[checksum("DT_INT")].insert("id"); // ?, DT_ENUM, DT_INT, DT_UINT, DT_SHARED_SERVER_DATA_ID
  typePrefixes[checksum("DT_INT")].insert("m_id"); // ?, DT_ENUM, DT_INT, DT_UINT, DT_SHARED_SERVER_DATA_ID
  typePrefixes[checksum("DT_UINT")].insert("id"); // ?, DT_ENUM, DT_INT, DT_UINT, DT_SHARED_SERVER_DATA_ID
  typePrefixes[checksum("DT_UINT")].insert("m_id"); // ?, DT_ENUM, DT_INT, DT_UINT, DT_SHARED_SERVER_DATA_ID
  typePrefixes[checksum("DT_SHARED_SERVER_DATA_ID")].insert("id"); // ?, DT_ENUM, DT_INT, DT_UINT, DT_SHARED_SERVER_DATA_ID
  typePrefixes[checksum("DT_SHARED_SERVER_DATA_ID")].insert("m_id"); // ?, DT_ENUM, DT_INT, DT_UINT, DT_SHARED_SERVER_DATA_ID
  typePrefixes[checksum("DT_VECTOR4D")].insert("inv"); // DT_VECTOR4D, DT_FLOAT
  typePrefixes[checksum("DT_VECTOR4D")].insert("m_inv"); // DT_VECTOR4D, DT_FLOAT
  typePrefixes[checksum("DT_FLOAT")].insert("inv"); // DT_VECTOR4D, DT_FLOAT
  typePrefixes[checksum("DT_FLOAT")].insert("m_inv"); // DT_VECTOR4D, DT_FLOAT
  typePrefixes[checksum("DT_INT")].insert("is"); // DT_INT
  typePrefixes[checksum("DT_INT")].insert("m_is"); // DT_INT
  typePrefixes[0].insert("l"); // ?
  typePrefixes[0].insert("m_l"); // ?
  typePrefixes[checksum("PRTransform")].insert("local"); // PRTransform, 0x5f527528
  typePrefixes[checksum("PRTransform")].insert("m_local"); // PRTransform, 0x5f527528
  typePrefixes[0x5f527528].insert("local"); // PRTransform, 0x5f527528
  typePrefixes[0x5f527528].insert("m_local"); // PRTransform, 0x5f527528
  typePrefixes[checksum("Matrix3x3")].insert("m"); // Matrix3x3
  typePrefixes[checksum("Matrix3x3")].insert("m_m"); // Matrix3x3
  typePrefixes[checksum("DT_WORD")].insert("max"); // DT_WORD
  typePrefixes[checksum("DT_WORD")].insert("m_max"); // DT_WORD
  typePrefixes[checksum("DT_INT")].insert("n"); // DT_INT, DT_UINT, DT_WORD, DT_INT64, DT_FLOAT
  typePrefixes[checksum("DT_INT")].insert("m_n"); // DT_INT, DT_UINT, DT_WORD, DT_INT64, DT_FLOAT
  typePrefixes[checksum("DT_UINT")].insert("n"); // DT_INT, DT_UINT, DT_WORD, DT_INT64, DT_FLOAT
  typePrefixes[checksum("DT_UINT")].insert("m_n"); // DT_INT, DT_UINT, DT_WORD, DT_INT64, DT_FLOAT
  typePrefixes[checksum("DT_WORD")].insert("n"); // DT_INT, DT_UINT, DT_WORD, DT_INT64, DT_FLOAT
  typePrefixes[checksum("DT_WORD")].insert("m_n"); // DT_INT, DT_UINT, DT_WORD, DT_INT64, DT_FLOAT
  typePrefixes[checksum("DT_INT64")].insert("n"); // DT_INT, DT_UINT, DT_WORD, DT_INT64, DT_FLOAT
  typePrefixes[checksum("DT_INT64")].insert("m_n"); // DT_INT, DT_UINT, DT_WORD, DT_INT64, DT_FLOAT
  typePrefixes[checksum("DT_FLOAT")].insert("n"); // DT_INT, DT_UINT, DT_WORD, DT_INT64, DT_FLOAT
  typePrefixes[checksum("DT_FLOAT")].insert("m_n"); // DT_INT, DT_UINT, DT_WORD, DT_INT64, DT_FLOAT
  typePrefixes[checksum("DT_VARIABLEARRAY")].insert("p"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY, DT_BCVEC2I
  typePrefixes[checksum("DT_VARIABLEARRAY")].insert("m_p"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY, DT_BCVEC2I
  typePrefixes[checksum("DT_POLYMORPHIC_VARIABLEARRAY")].insert("p"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY, DT_BCVEC2I
  typePrefixes[checksum("DT_POLYMORPHIC_VARIABLEARRAY")].insert("m_p"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY, DT_BCVEC2I
  typePrefixes[checksum("DT_FIXEDARRAY")].insert("p"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY, DT_BCVEC2I
  typePrefixes[checksum("DT_FIXEDARRAY")].insert("m_p"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY, DT_BCVEC2I
  typePrefixes[checksum("DT_BCVEC2I")].insert("p"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY, DT_BCVEC2I
  typePrefixes[checksum("DT_BCVEC2I")].insert("m_p"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY, DT_BCVEC2I
  typePrefixes[checksum("DT_INT64")].insert("parent"); // DT_INT64, DT_WORD
  typePrefixes[checksum("DT_INT64")].insert("m_parent"); // DT_INT64, DT_WORD
  typePrefixes[checksum("DT_WORD")].insert("parent"); // DT_INT64, DT_WORD
  typePrefixes[checksum("DT_WORD")].insert("m_parent"); // DT_INT64, DT_WORD
  typePrefixes[checksum("VectorPath")].insert("path"); // VectorPath, 0xcbfdd2ea, 0x560ae4cf, 0xcc354444
  typePrefixes[checksum("VectorPath")].insert("m_path"); // VectorPath, 0xcbfdd2ea, 0x560ae4cf, 0xcc354444
  typePrefixes[0xcbfdd2ea].insert("path"); // VectorPath, 0xcbfdd2ea, 0x560ae4cf, 0xcc354444
  typePrefixes[0xcbfdd2ea].insert("m_path"); // VectorPath, 0xcbfdd2ea, 0x560ae4cf, 0xcc354444
  typePrefixes[0x560ae4cf].insert("path"); // VectorPath, 0xcbfdd2ea, 0x560ae4cf, 0xcc354444
  typePrefixes[0x560ae4cf].insert("m_path"); // VectorPath, 0xcbfdd2ea, 0x560ae4cf, 0xcc354444
  typePrefixes[0xcc354444].insert("path"); // VectorPath, 0xcbfdd2ea, 0x560ae4cf, 0xcc354444
  typePrefixes[0xcc354444].insert("m_path"); // VectorPath, 0xcbfdd2ea, 0x560ae4cf, 0xcc354444
  typePrefixes[checksum("DT_VARIABLEARRAY")].insert("pdw"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY
  typePrefixes[checksum("DT_VARIABLEARRAY")].insert("m_pdw"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY
  typePrefixes[checksum("DT_POLYMORPHIC_VARIABLEARRAY")].insert("pdw"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY
  typePrefixes[checksum("DT_POLYMORPHIC_VARIABLEARRAY")].insert("m_pdw"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY
  typePrefixes[checksum("DT_FIXEDARRAY")].insert("pdw"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY
  typePrefixes[checksum("DT_FIXEDARRAY")].insert("m_pdw"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY
  typePrefixes[checksum("DT_GBID")].insert("pgbid"); // DT_GBID
  typePrefixes[checksum("DT_GBID")].insert("m_pgbid"); // DT_GBID
  typePrefixes[checksum("DT_WORD")].insert("plane"); // DT_WORD
  typePrefixes[checksum("DT_WORD")].insert("m_plane"); // DT_WORD
  typePrefixes[checksum("DT_INT64")].insert("pn"); // DT_INT64
  typePrefixes[checksum("DT_INT64")].insert("m_pn"); // DT_INT64
  typePrefixes[checksum("DT_VARIABLEARRAY")].insert("pt"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY, DT_INT64
  typePrefixes[checksum("DT_VARIABLEARRAY")].insert("m_pt"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY, DT_INT64
  typePrefixes[checksum("DT_VARIABLEARRAY")].insert("pwv"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY, DT_INT64
  typePrefixes[checksum("DT_VARIABLEARRAY")].insert("m_pwv"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY, DT_INT64
  typePrefixes[checksum("DT_POLYMORPHIC_VARIABLEARRAY")].insert("pt"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY, DT_INT64
  typePrefixes[checksum("DT_POLYMORPHIC_VARIABLEARRAY")].insert("m_pt"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY, DT_INT64
  typePrefixes[checksum("DT_POLYMORPHIC_VARIABLEARRAY")].insert("pwv"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY, DT_INT64
  typePrefixes[checksum("DT_POLYMORPHIC_VARIABLEARRAY")].insert("m_pwv"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY, DT_INT64
  typePrefixes[checksum("DT_FIXEDARRAY")].insert("pt"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY, DT_INT64
  typePrefixes[checksum("DT_FIXEDARRAY")].insert("m_pt"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY, DT_INT64
  typePrefixes[checksum("DT_FIXEDARRAY")].insert("pwv"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY, DT_INT64
  typePrefixes[checksum("DT_FIXEDARRAY")].insert("m_pwv"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY, DT_INT64
  typePrefixes[checksum("DT_INT64")].insert("pt"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY, DT_INT64
  typePrefixes[checksum("DT_INT64")].insert("m_pt"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY, DT_INT64
  typePrefixes[checksum("DT_INT64")].insert("pwv"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY, DT_INT64
  typePrefixes[checksum("DT_INT64")].insert("m_pwv"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY, DT_INT64
  typePrefixes[checksum("bcQuat")].insert("q"); // bcQuat
  typePrefixes[checksum("bcQuat")].insert("m_q"); // bcQuat
  typePrefixes[checksum("DT_RGBACOLOR")].insert("rgba"); // DT_RGBACOLOR
  typePrefixes[checksum("DT_RGBACOLOR")].insert("m_rgba"); // DT_RGBACOLOR
  typePrefixes[checksum("DT_RGBACOLORVALUE")].insert("rgbaval"); // DT_RGBACOLORVALUE
  typePrefixes[checksum("DT_RGBACOLORVALUE")].insert("m_rgbaval"); // DT_RGBACOLORVALUE
  typePrefixes[checksum("DT_UINT")].insert("s"); // DT_UINT, 0xcc139f31, 0xe562d892
  typePrefixes[checksum("DT_UINT")].insert("m_s"); // DT_UINT, 0xcc139f31, 0xe562d892
  typePrefixes[0xcc139f31].insert("s"); // DT_UINT, 0xcc139f31, 0xe562d892
  typePrefixes[0xcc139f31].insert("m_s"); // DT_UINT, 0xcc139f31, 0xe562d892
  typePrefixes[0xe562d892].insert("s"); // DT_UINT, 0xcc139f31, 0xe562d892
  typePrefixes[0xe562d892].insert("m_s"); // DT_UINT, 0xcc139f31, 0xe562d892
  typePrefixes[checksum("DT_INT")].insert("sample"); // DT_INT
  typePrefixes[checksum("DT_INT")].insert("m_sample"); // DT_INT
  typePrefixes[checksum("SerializeData")].insert("ser"); // SerializeData
  typePrefixes[checksum("SerializeData")].insert("m_ser"); // SerializeData
  typePrefixes[checksum("DT_SNO")].insert("sno"); // DT_SNO
  typePrefixes[checksum("DT_SNO")].insert("m_sno"); // DT_SNO
  typePrefixes[checksum("DT_WORD")].insert("start"); // DT_WORD
  typePrefixes[checksum("DT_WORD")].insert("m_start"); // DT_WORD
  typePrefixes[checksum("DT_CHARARRAY")].insert("sz"); // DT_CHARARRAY, DT_STRING_FORMULA, DT_CSTRING, DT_UINT
  typePrefixes[checksum("DT_CHARARRAY")].insert("m_sz"); // DT_CHARARRAY, DT_STRING_FORMULA, DT_CSTRING, DT_UINT
  typePrefixes[checksum("DT_STRING_FORMULA")].insert("sz"); // DT_CHARARRAY, DT_STRING_FORMULA, DT_CSTRING, DT_UINT
  typePrefixes[checksum("DT_STRING_FORMULA")].insert("m_sz"); // DT_CHARARRAY, DT_STRING_FORMULA, DT_CSTRING, DT_UINT
  typePrefixes[checksum("DT_CSTRING")].insert("sz"); // DT_CHARARRAY, DT_STRING_FORMULA, DT_CSTRING, DT_UINT
  typePrefixes[checksum("DT_CSTRING")].insert("m_sz"); // DT_CHARARRAY, DT_STRING_FORMULA, DT_CSTRING, DT_UINT
  typePrefixes[checksum("DT_UINT")].insert("sz"); // DT_CHARARRAY, DT_STRING_FORMULA, DT_CSTRING, DT_UINT
  typePrefixes[checksum("DT_UINT")].insert("m_sz"); // DT_CHARARRAY, DT_STRING_FORMULA, DT_CSTRING, DT_UINT
  typePrefixes[0].insert("t"); // ?, DT_ENUM
  typePrefixes[0].insert("m_t"); // ?, DT_ENUM
  typePrefixes[checksum("DT_ENUM")].insert("t"); // ?, DT_ENUM
  typePrefixes[checksum("DT_ENUM")].insert("m_t"); // ?, DT_ENUM
  typePrefixes[checksum("DT_STRING_FORMULA")].insert("t"); // ?, DT_ENUM
  typePrefixes[checksum("DT_STRING_FORMULA")].insert("m_t"); // ?, DT_ENUM
  typePrefixes[checksum("DT_TAGMAP")].insert("tag"); // DT_TAGMAP
  typePrefixes[checksum("DT_TAGMAP")].insert("m_tag"); // DT_TAGMAP
  typePrefixes[checksum("DT_BYTE")].insert("twin"); // DT_BYTE
  typePrefixes[checksum("DT_BYTE")].insert("m_twin"); // DT_BYTE
  typePrefixes[checksum("DT_UINT")].insert("u"); // DT_UINT, DT_STARTLOC_NAME, DT_WORD, DT_INT64, DT_BYTE
  typePrefixes[checksum("DT_UINT")].insert("m_u"); // DT_UINT, DT_STARTLOC_NAME, DT_WORD, DT_INT64, DT_BYTE
  typePrefixes[checksum("DT_STARTLOC_NAME")].insert("u"); // DT_UINT, DT_STARTLOC_NAME, DT_WORD, DT_INT64, DT_BYTE
  typePrefixes[checksum("DT_STARTLOC_NAME")].insert("m_u"); // DT_UINT, DT_STARTLOC_NAME, DT_WORD, DT_INT64, DT_BYTE
  typePrefixes[checksum("DT_WORD")].insert("u"); // DT_UINT, DT_STARTLOC_NAME, DT_WORD, DT_INT64, DT_BYTE
  typePrefixes[checksum("DT_WORD")].insert("m_u"); // DT_UINT, DT_STARTLOC_NAME, DT_WORD, DT_INT64, DT_BYTE
  typePrefixes[checksum("DT_INT64")].insert("u"); // DT_UINT, DT_STARTLOC_NAME, DT_WORD, DT_INT64, DT_BYTE
  typePrefixes[checksum("DT_INT64")].insert("m_u"); // DT_UINT, DT_STARTLOC_NAME, DT_WORD, DT_INT64, DT_BYTE
  typePrefixes[checksum("DT_BYTE")].insert("u"); // DT_UINT, DT_STARTLOC_NAME, DT_WORD, DT_INT64, DT_BYTE
  typePrefixes[checksum("DT_BYTE")].insert("m_u"); // DT_UINT, DT_STARTLOC_NAME, DT_WORD, DT_INT64, DT_BYTE
  typePrefixes[checksum("DT_VECTOR2D")].insert("v"); // DT_VECTOR2D, DT_VECTOR3D, DT_VECTOR4D, DT_INT, DT_BCVEC2I
  typePrefixes[checksum("DT_VECTOR2D")].insert("m_v"); // DT_VECTOR2D, DT_VECTOR3D, DT_VECTOR4D, DT_INT, DT_BCVEC2I
  typePrefixes[checksum("DT_VECTOR3D")].insert("v"); // DT_VECTOR2D, DT_VECTOR3D, DT_VECTOR4D, DT_INT, DT_BCVEC2I
  typePrefixes[checksum("DT_VECTOR3D")].insert("m_v"); // DT_VECTOR2D, DT_VECTOR3D, DT_VECTOR4D, DT_INT, DT_BCVEC2I
  typePrefixes[checksum("DT_VECTOR4D")].insert("v"); // DT_VECTOR2D, DT_VECTOR3D, DT_VECTOR4D, DT_INT, DT_BCVEC2I
  typePrefixes[checksum("DT_VECTOR4D")].insert("m_v"); // DT_VECTOR2D, DT_VECTOR3D, DT_VECTOR4D, DT_INT, DT_BCVEC2I
  typePrefixes[checksum("DT_INT")].insert("v"); // DT_VECTOR2D, DT_VECTOR3D, DT_VECTOR4D, DT_INT, DT_BCVEC2I
  typePrefixes[checksum("DT_INT")].insert("m_v"); // DT_VECTOR2D, DT_VECTOR3D, DT_VECTOR4D, DT_INT, DT_BCVEC2I
  typePrefixes[checksum("DT_BCVEC2I")].insert("v"); // DT_VECTOR2D, DT_VECTOR3D, DT_VECTOR4D, DT_INT, DT_BCVEC2I
  typePrefixes[checksum("DT_BCVEC2I")].insert("m_v"); // DT_VECTOR2D, DT_VECTOR3D, DT_VECTOR4D, DT_INT, DT_BCVEC2I
  typePrefixes[checksum("DT_VECTOR2D")].insert("vec"); // DT_VECTOR2D, DT_VECTOR3D, DT_VECTOR4D, DT_INT, DT_BCVEC2I
  typePrefixes[checksum("DT_VECTOR2D")].insert("m_vec"); // DT_VECTOR2D, DT_VECTOR3D, DT_VECTOR4D, DT_INT, DT_BCVEC2I
  typePrefixes[checksum("DT_VECTOR3D")].insert("vec"); // DT_VECTOR2D, DT_VECTOR3D, DT_VECTOR4D, DT_INT, DT_BCVEC2I
  typePrefixes[checksum("DT_VECTOR3D")].insert("m_vec"); // DT_VECTOR2D, DT_VECTOR3D, DT_VECTOR4D, DT_INT, DT_BCVEC2I
  typePrefixes[checksum("DT_VECTOR4D")].insert("vec"); // DT_VECTOR2D, DT_VECTOR3D, DT_VECTOR4D, DT_INT, DT_BCVEC2I
  typePrefixes[checksum("DT_VECTOR4D")].insert("m_vec"); // DT_VECTOR2D, DT_VECTOR3D, DT_VECTOR4D, DT_INT, DT_BCVEC2I
  typePrefixes[checksum("DT_INT")].insert("vec"); // DT_VECTOR2D, DT_VECTOR3D, DT_VECTOR4D, DT_INT, DT_BCVEC2I
  typePrefixes[checksum("DT_INT")].insert("m_vec"); // DT_VECTOR2D, DT_VECTOR3D, DT_VECTOR4D, DT_INT, DT_BCVEC2I
  typePrefixes[checksum("DT_BCVEC2I")].insert("vec"); // DT_VECTOR2D, DT_VECTOR3D, DT_VECTOR4D, DT_INT, DT_BCVEC2I
  typePrefixes[checksum("DT_BCVEC2I")].insert("m_vec"); // DT_VECTOR2D, DT_VECTOR3D, DT_VECTOR4D, DT_INT, DT_BCVEC2I
  typePrefixes[checksum("DT_WORD")].insert("vertex"); // DT_WORD
  typePrefixes[checksum("DT_WORD")].insert("m_vertex"); // DT_WORD
  typePrefixes[0].insert("vw"); // ?
  typePrefixes[0].insert("m_vw"); // ?
  typePrefixes[checksum("AxialCylinder")].insert("wcyl"); // AxialCylinder
  typePrefixes[checksum("AxialCylinder")].insert("m_wcyl"); // AxialCylinder
  typePrefixes[checksum("DT_FLOAT")].insert("wd"); // DT_FLOAT
  typePrefixes[checksum("DT_FLOAT")].insert("m_wd"); // DT_FLOAT
  typePrefixes[checksum("DT_VECTOR2D")].insert("wp"); // DT_VECTOR2D, DT_VECTOR3D
  typePrefixes[checksum("DT_VECTOR2D")].insert("m_wp"); // DT_VECTOR2D, DT_VECTOR3D
  typePrefixes[checksum("DT_VECTOR3D")].insert("wp"); // DT_VECTOR2D, DT_VECTOR3D
  typePrefixes[checksum("DT_VECTOR3D")].insert("m_wp"); // DT_VECTOR2D, DT_VECTOR3D
  typePrefixes[0].insert("wr"); // ?
  typePrefixes[0].insert("m_wr"); // ?
  typePrefixes[checksum("Sphere")].insert("ws"); // Sphere
  typePrefixes[checksum("Sphere")].insert("m_ws"); // Sphere
  typePrefixes[checksum("DT_VECTOR2D")].insert("wv"); // DT_VECTOR2D, DT_VECTOR3D
  typePrefixes[checksum("DT_VECTOR2D")].insert("m_wv"); // DT_VECTOR2D, DT_VECTOR3D
  typePrefixes[checksum("DT_VECTOR2D")].insert("wvp"); // DT_VECTOR2D, DT_VECTOR3D
  typePrefixes[checksum("DT_VECTOR2D")].insert("m_wvp"); // DT_VECTOR2D, DT_VECTOR3D
  typePrefixes[checksum("DT_VECTOR3D")].insert("wv"); // DT_VECTOR2D, DT_VECTOR3D
  typePrefixes[checksum("DT_VECTOR3D")].insert("m_wv"); // DT_VECTOR2D, DT_VECTOR3D
  typePrefixes[checksum("DT_VECTOR3D")].insert("wvp"); // DT_VECTOR2D, DT_VECTOR3D
  typePrefixes[checksum("DT_VECTOR3D")].insert("m_wvp"); // DT_VECTOR2D, DT_VECTOR3D
}

int main(int argc, char *argv[]) {
  bool gettingPrefix = false;
  bool gettingSuffix = false;
  bool gettingMin = false;
  bool gettingMax = false;
  bool useDict = true;
  bool wordsOnly = false;
  bool noPrefix = false;
  bool ignoreAllCaps = true;
  bool useEnglish = false;

  int pos = 0;

  for (int c = 0; argv[0][c] && c < 128; c++) {
    if (argv[0][c] == '/' || argv[0][c] == '\\') {
      pos = c;
    }
  }

  if (pos > 0) {
    rootPath = std::string(argv[0], pos);
    std::filesystem::current_path(rootPath);
  }

  if (argc > 1) {
    for (int c = 1; c < argc; c++) {
      std::string arg = argv[c];

      if(arg == "--field") {
        hashType = 1;
      }
      else if(arg == "--gbid") {
        hashType = 2;
      }
      else if(arg == "--prefix") {
        gettingPrefix = true;
      }
      else if(arg == "--suffix") {
        gettingSuffix = true;
      }
      else if(arg == "--no-prefix") {
        prefix.clear();
        noPrefix = true;
      }
      else if(arg == "--words-only") {
        wordsOnly = true;
      }
      else if(arg == "--allow-all-caps") {
        ignoreAllCaps = false;
      }
      else if(arg == "--min") {
        gettingMin = true;
      }
      else if(arg == "--max") {
        gettingMax = true;
      }
      else if(arg == "--no-log") {
        outputLog = false;
      }
      else if(arg == "--no-dict") {
        useDict = false;
      }
      else if(arg == "--paired") {
        paired = true;
      }
      else if(arg == "--english") {
        useEnglish = true;
      }
      else if(arg[0] == '-') {
        // discard unknown option
      }
      else if(gettingPrefix) {
        prefix.push_back(arg);
        gettingPrefix = false;
      }
      else if(gettingSuffix) {
        suffix.push_back(arg);
        gettingSuffix = false;
      }
      else if(gettingMin) {
        uint32_t uTmp = 0;
        std::stringstream ss;

        ss << arg;
        ss >> uTmp;

        if (uTmp >= 1 && uTmp < sizeof(tmp) / sizeof(uint32_t)) {
          minPos = uTmp - 1;
          std::cerr << "Using min of " << minPos << std::endl;
        }

        gettingMin = false;
      }
      else if(gettingMax) {
        uint32_t uTmp = 0;
        std::stringstream ss;

        ss << arg;
        ss >> uTmp;

        if (uTmp >= 1 && uTmp < sizeof(tmp) / sizeof(uint32_t)) {
          maxPos = uTmp;
          std::cerr << "Using max of " << maxPos << std::endl;
        }

        gettingMax = false;
      }
      else {
        uint32_t uTmp = 0;
        std::stringstream ss;

        ss << std::hex << arg;
        ss >> uTmp;
        checksumMatch.insert(uTmp);
      }
    }
  }

  if (!isatty(0)) {
    size_t uTmp;
    std::cin >> std::hex >> uTmp;

    while (std::cin) {
      checksumMatch.insert(uTmp);
      std::cin >> std::hex >> uTmp;
    }
  }

  if (hashType == 0 && checksumMatch.size() == 0) {
    std::ifstream hashes("../unfound_hashes.txt");
    size_t uTmp;
    hashes >> std::hex >> uTmp;

    while (hashes) {
      checksumMatch.insert(uTmp);
      hashes >> std::hex >> uTmp;
    }
  } else if(hashType == 1 && checksumMatch.size() == 0) {
    std::ifstream hashes("../unfound_field_hashes.txt");
    size_t uTmp;

    hashes >> std::hex >> uTmp;
    while (hashes) {
      checksumMatch.insert(uTmp);
      hashes >> std::hex >> uTmp;
    }
  }

  if (paired && hashType == 0) {
    std::ifstream hashes("../unfound_field_hashes.txt");
    size_t uTmp;

    hashes >> std::hex >> uTmp;
    while (hashes) {
      checksumMatchSecondary.insert(uTmp);
      hashes >> std::hex >> uTmp;
    }
  } else {
    paired = false;
  }

  int32_t dictmax = dict.size();
  std::unordered_map<std::string, bool> dictmap;

  if (!wordsOnly) {
    for (const auto baseelem : defaultDict) {
      dictmap[baseelem] = true;
    }
  }

  if (useDict) {
    for (const auto baseelem : (useDict ? getDict(useEnglish) : defaultDict)) {
      if (baseelem.length() > 1) {
        std::string elem = baseelem;
        std::string newelem = elem;
        std::string newelem2 = elem;

        std::transform(newelem.begin(), newelem.end(), newelem.begin(), [](unsigned char c){ return std::toupper(c); });
        std::transform(newelem2.begin(), newelem2.end(), newelem2.begin(), [](unsigned char c){ return std::tolower(c); });

        if (ignoreAllCaps && isAllCaps(elem)) {
          continue;
        }

        if (hashType == 2) {
          dictmap[newelem2] = true;
          continue;
        }

        if (elem == newelem2) {
          elem = newelem.substr(0, 1) + newelem2.substr(1);
        }

        dictmap[elem] = true;
      }
    }
  }

  for (const auto elem : dictmap) {
    dict.push_back(elem.first);
  }

  if (hashType == 1 && !noPrefix && prefix.size() < 1) {
    prefix = getPrefixes();
    prefix.push_back("");
  }

  if (hashType == 1) {
    loadFieldTypeMap();
  }

  if (checksumMatch.size()) {
    std::cerr << "Prefix size: " << prefix.size() << std::endl;
    std::cerr << "Dictionary size: " << dict.size() << std::endl;
    std::cerr << "Suffix size: " << suffix.size() << std::endl;
    std::cerr << "Matching " << checksumMatch.size() << " hashes." << std::endl;
    for (uint32_t c = minPos; c < maxPos; c++) {
      std::cerr << "Length: " << (c + 1) << std::endl;
      collisions(0, c + 1);
    }
  }

  return 0;
}
