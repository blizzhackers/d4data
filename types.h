#pragma once
#include <fstream>
#include <string>
#include <cstring>
#include <vector>

#pragma pack(push,1)

enum class TexFormat : int32_t {
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

enum class SnoGroup : int32_t {
  Unknown = -3,
  Code = -2,
  None = -1,
  Actor = 1,
  NpcComponentSet = 2,
  AiBehavior = 3,
  AiState = 4,
  AmbientSound = 5,
  Animation = 6,
  Animation2D = 7,
  AnimSet = 8,
  Appearance = 9,
  Hero = 10,
  Cloth = 11,
  Conversation = 12,
  ConverationList = 13,
  EffectGroup = 14,
  Encounter = 15,
  Explosion = 17,
  FlagSet = 18,
  Font = 19,
  GameBalance = 20,
  Global = 21,
  LevelArea = 22,
  Light = 23,
  MarkerSet = 24,
  Observer = 26,
  Particle = 27,
  Physics = 28,
  Power = 29,
  Quest = 31,
  Rope = 32,
  Scene = 33,
  Script = 35,
  ShaderMap = 36,
  Shader = 37,
  Shake = 38,
  SkillKit = 39,
  Sound = 40,
  StringList = 42,
  Surface = 43,
  Texture = 44,
  Trail = 45,
  UI = 46,
  Weather = 47,
  World = 48,
  Recipe = 49,
  Condition = 51,
  TreasureClass = 52,
  Account = 53,
  Material = 57,
  Lore = 59,
  Reverb = 60,
  Music = 62,
  Tutorial = 63,
  AnimTree = 67,
  Vibration = 68,
  wWiseSoundBank = 71,
  Speaker = 72,
  Item = 73,
  PlayerClass = 74,
  FogVolume = 76,
  Biome = 77,
  Wall = 78,
  SoundTable = 79,
  SubZone = 80,
  MaterialValue = 81,
  MonsterFamily = 82,
  TileSet = 83,
  Population = 84,
  MaterialValueSet = 85,
  WorldState = 86,
  Schedule = 87,
  VectorField = 88,
  StoryBoard = 90,
  Territory = 92,
  AudioContext = 93,
  VoProcess = 94,
  DemonScroll = 95,
  QuestChain = 96,
  LoudnessPreset = 97,
  ItemType = 98,
  Achievement = 99,
  Crafter = 100,
  HoudiniParticleSim = 101,
  Movie = 102,
  TiledStyle = 103,
  Affix = 104,
  Reputation = 105,
  ParagonNode = 106,
  MonsterAffix = 107,
  ParagonBoard = 108,
  SetItemBonus = 109,
  StoreProduct = 110,
  ParagonGlyph = 111,
  ParagonGlyphAffix = 112,
  Challenge = 114,
  MarkingShape = 115,
  ItemRequirement = 116,
  Boost = 117,
  Emote = 118,
  Jewelry = 119,
  PlayerTitle = 120,
  Emblem = 121,
  Dye = 122,
  FogofWar = 123,
  ParagonThreshold = 124,
  AiAwareness = 125,
  TrackedReward = 126,
  CollisionSettings = 127,
  Aspect = 128,
  AbTest = 129,
  Stagger = 130,
  EyeColor = 131,
  Makeup = 132,
  MarkingColor = 133,
  HairColor = 134,
  DungeonAffix = 135,
  Activity = 136,
  HairStyle = 138,
  FacialHair = 139,
  Face = 140,
  MaxSnoGroups = 141,
};

enum class D4DataType : uint32_t {
  ABTest = 0x662A2096,
  Achievement = 0x63CFE94B,
  Actor = 0x52132929,
  Activity = 0x28D46A2C,
  Affix = 0x6CCA3827,
  AmbientSound = 0x2586356E,
  Anim2D = 0xA1C3DB4B,
  Anim = 0xB4893876,
  AnimSet = 0x227F4A92,
  AnimTree = 0x4FB8B3DC,
  Appearance = 0xF1E17243,
  Aspect = 0x903E859F,
  AudioContext = 0xAA92CD9A,
  Biome = 0xA5387E0F,
  Boost = 0x59BB7738,
  Challenge = 0x7D7B70E6,
  Cloth = 0xBD4A23E6,
  Condition = 0xB33B5D4C,
  Conversation = 0x91FA003,
  CollisionSettings = 0xD0E9F00A,
  Crafter = 0x21753D53,
  DungeonAffix = 0xFBE69FD5,
  DemonScroll = 0x7076D5D8,
  Dye = 0x3303DF37,
  EffectGroup = 0x50D0CDA0,
  Emblem = 0xD93022F1,
  Emote = 0x2CB54509,
  Encounter = 0xF4FD7791,
  EyeColor = 0x92C6B888,
  Face = 0xD12ED4C3,
  FacialHair = 0x2C9CBC23,
  FlagSet = 0x394E1220,
  Font = 0x6B7CF43D,
  FogVolume = 0xC24D28DC,
  FogOfWar = 0xD9885328,
  ParagonGlyphAffix = 0x456DB743,
  GameBalance = 0xCA3FD8A1,
  Global = 0x89238CAF,
  ParagonGlyph = 0x74F841B,
  HairStyle = 0x4BC3F828,
  HairColor = 0x53332438,
  HoudiniParticlesSim = 0xA22B28E5,
  ItemRequirement = 0x6148402A,
  Item = 0xC3396F78,
  ItemType = 0x672435BB,
  Jewelry = 0xCAE08715,
  Light = 0xB1AB434F,
  Lore = 0x603CD52B,
  LevelArea = 0x4C8367D1,
  MonsterAffix = 0x3580DF4C,
  Makeup = 0x2D08ED12,
  Material = 0xB885B6ED,
  MarkingColor = 0x69E2ACE4,
  MonsterFamily = 0x3A0EBA81,
  MarkerSet = 0x50953856,
  MarkingShape = 0x23E27AF4,
  MaterialValue = 0x3E39C656,
  Music = 0x626BEA4,
  MaterialValueSet = 0x2B792BBF,
  NPCComponentSet = 0x6936F46A,
  Observer = 0x538AACE1,
  ParagonBoard = 0x652665A,
  PlayerClass = 0x93BF70C2,
  ParagonNode = 0x1B2C3E66,
  Physics = 0x4589A3C,
  Power = 0x77B9C481,
  StoreProduct = 0xA7C6CAE3,
  Particle = 0xF1202F2B,
  PlayerTitle =  0xDA7B8916,
  ParagonThreshold = 0x9EBCFAF3,
  QuestChain =  0x82A26990,
  Quest = 0x1648F857,
  Recipe = 0xF65B63C0,
  Reputation = 0xE2E34320,
  Reverb = 0x4A6678A,
  Rope = 0x13568C4B,
  Subzone = 0xC6728896,
  Scene = 0x703FD70A,
  SoundTable = 0x75DA10D,
  SetItemBonus = 0x6C2A1B,
  Shader = 0xD9C39BAC,
  Shake = 0xD25048A2,
  ShaderMap = 0x83C748AB,
  SkillKit = 0x83D037D,
  Sound = 0x13E65970,
  Speaker = 0xBF2C02D7,
  Surface = 0x86A6A028,
  Storyboard = 0xB4A2D202,
  Stagger = 0x9C60B334,
  StringList = 0x4FE48576,
  Territory = 0xA74ED120,
  Texture = 0xFC2EC4E0,
  TrackedReward = 0x77CFFBB7,
  Trail = 0x22C0E93A,
  TiledStyle = 0xA1438466,
  Tutorial = 0xA0C4AE75,
  UI =  0x3A57B8EC,
  VectorField = 0x813EA8CC,
  Vibration = 0x5FFF292D,
  Movie = 0x67EFD8D0,
  Wall = 0x81FE2166,
  World = 0x3751CD09,
  wWiseSoundBank = 0xB54FBAA8,
  WorldState = 0xCFDEDE48,
  Weather = 0xC40847A6,
  Explosion = 0xF2096E31,
};

struct ComplexRead {
  virtual void read(const char* base, char* &ptr) = 0;
};

template<class T>
void readData(T *data, const char* base, char* &ptr) {
  if constexpr (std::is_base_of_v<ComplexRead, T>) {
    data->read(base, ptr);
  } else {
    std::memcpy(data, ptr, sizeof(T));
    ptr += sizeof(T);
  }
}

template <class T, int32_t len>
struct DT_FIXEDARRAY : public ComplexRead {
  T elements[len];

  void read(const char *base, char* &ptr) {
    for (int c = 0; c < len; c++) {
      readData(&elements[c], base, ptr);
    }
  }
};

template <class T>
struct DT_VARIABLEARRAY : public ComplexRead {
  std::vector<T> elements;

  void read(const char *base, char* &ptr) {
    int32_t offset;
    int32_t size;
    uint32_t p[4]{ 0 };
    uint32_t typeSize = sizeof(T);
    std::memcpy(p, ptr, sizeof(p));
    ptr += sizeof(p);

    offset = p[2];
    size = p[3];

    if (p[0] != 0 || p[1] != 0) {
      throw "Something messed up!";
    }

    if (offset < 0 || size < 0) {
      return;
    }

    char *pSrc = (char*)base + p[2];
    char *pEnd = (char*)base + p[2] + p[3];

    while (pSrc < pEnd) {
      T tmp;

      if (pSrc <= pEnd) {
        readData(&tmp, base, pSrc);
        elements.push_back(tmp);
      }
    }
  }
};

template <int32_t len>
struct DT_CHARARRAY : public ComplexRead {
  std::string value;

  void read(const char *base, char* &ptr) {
    char elements[len + 1]{ 0 };

    for (int c = 0; c < len; c++) {
      readData(&elements[c], base, ptr);
    }

    value = elements;
  }
};

struct DT_CSTRING : public ComplexRead {
  std::string value;
  void read(const char *base, char* &ptr);
};

struct DT_STRING_FORMULA : public ComplexRead {
  std::string value;
  std::string binaryFormula;
  void read(const char *base, char* &ptr);
};

struct DT_POLYMORPHIC_VARIABLEARRAY : public ComplexRead {
  uint32_t unk_a;
  uint32_t unk_b;
  int32_t offset;
  int32_t size;
  uint32_t typeHash;

  void read(const char *base, char* &ptr) {
    struct {
      uint32_t unk_a;
      uint32_t unk_b;
      int32_t offset;
      int32_t size;
      uint32_t unk_c;
      uint32_t unk_d;
    } raw;

    struct {
      uint32_t padding[2];
      uint32_t dwType;
      uint32_t dwPad;
    } typeInfo;

    readData(&raw, base, ptr);
    char *target = (char *)base + raw.offset;
    readData(&unk_a, target, target);
    readData(&unk_b, target, target);
    readData(&typeInfo, target, target);

    offset = raw.offset + sizeof(unk_a) + sizeof(unk_b);
    size = raw.size - sizeof(unk_a) - sizeof(unk_b);
    typeHash = typeInfo.dwType;
  }
};

template<class T = int32_t>
using DT_ENUM = T;

template <uint32_t gbgroup = 0x0>
using DT_GBID = int32_t;

template <SnoGroup group>
using DT_SNO = int32_t;

using DT_CHAR = char;
using DT_BYTE = unsigned char;
using DT_NULL = void;
using DT_UINT = uint32_t;
using DT_INT = int32_t;
using DT_INT64 = int64_t;
using DT_UINT64 = uint64_t;
using DT_WORD = int16_t;
using DT_FLOAT = float;
using DT_STARTLOC_NAME = DT_UINT;
using DT_ACD_NETWORK_NAME = DT_UINT64;
using DT_SHARED_SERVER_DATA_ID = DT_UINT64;
using DT_SNO_NAME = DT_FIXEDARRAY<DT_BYTE, 8>;
using DT_BCVEC2I = DT_FIXEDARRAY<DT_UINT, 3>;

struct DT_RGBACOLOR {
  DT_BYTE r, g, b, a;
};

struct DT_RGBACOLORVALUE {
  DT_UINT r, g, b, a;
};

template <class T>
struct DT_OPTIONAL : public ComplexRead {
  DT_INT unk;
  T value;

  void read(const char *base, char* &ptr) {
    readData(&unk, base, ptr);
    readData(&value, base, ptr);
  }
};

struct DT_VECTOR2D {
  DT_FLOAT x, y;
};

struct DT_VECTOR3D {
  DT_FLOAT x, y, z;
};

struct DT_VECTOR4D {
  DT_FLOAT x, y, z, w;
};

template <class T>
struct DT_TAGMAP : public ComplexRead {
  T unk[4];

  void read(const char *base, char* &ptr) {
    readData(&unk[0], base, ptr);
    readData(&unk[1], base, ptr);
    readData(&unk[2], base, ptr);
    readData(&unk[3], base, ptr);
  }
};

template <class T>
struct DT_RANGE : public ComplexRead {
  T start, end;

  void read(const char *base, char* &ptr) {
    readData(&start, base, ptr);
    readData(&end, base, ptr);
  }
};

template <class T>
struct D4File {
  DT_UINT deadbeef;
  D4DataType fileType;
  DT_UINT unk;
  DT_UINT hash;
  DT_UINT uid;
  T contents;
  std::string data;

  D4File(const char *fileName) {
    std::ifstream file(fileName);
    data = std::string((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
    char *base = (char*)data.c_str();

    readData(&deadbeef, base, base);

    if (deadbeef != 0xdeadbeef) {
      throw std::string("File lacks 0xdeadbeef signature!");
    }

    readData(&fileType, base, base);
    readData(&unk, base, base);
    readData(&hash, base, base);

    char *ptr = base;
    readData(&uid, base, ptr);
    ptr = base;
    readData(&contents, base, ptr);
  }

  template <class RT>
  RT read(uint32_t offset) {
    RT ret;
    const char *base = data.c_str() + 16;
    char *ptr = (char *)data.c_str() + 16 + offset;
    readData(&ret, base, ptr);
    return ret;
  }
};

#pragma pop(pack)
