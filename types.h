#pragma once
#include <fstream>
#include <string>
#include <vector>

#pragma pack(push,1)

struct ComplexRead {
  virtual void read(const char* base, char* &ptr) = 0;
};

template<class T>
void readData(T *data, const char* base, char* &ptr) {
  if constexpr (std::is_base_of_v<ComplexRead, T>) {
    data->read(base, ptr);
  } else {
    *data = *(T*)ptr;
    ptr += sizeof(T);
  }
}

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
  Ui = 46,
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

template <class T, int32_t len>
class DT_FIXEDARRAY : public ComplexRead {
  T elements[len];

  public:

  void read(const char *base, char* &ptr) {
    for (int c = 0; c < len; c++) {
      readData(&elements[c], base, ptr);
    }
  }

  T operator [](uint32_t index) {
    if (index < 0 || index >= len) {
      throw "Invalid index!";
    }

    return elements[index];
  }

  uint32_t length() {
    return len;
  }
};

template <int32_t len>
class DT_CHARARRAY : public ComplexRead {
  char elements[len];

  public:

  void read(const char *base, char* &ptr) {
    for (int c = 0; c < len; c++) {
      readData(&elements[c], base, ptr);
    }
  }

  char operator [](uint32_t index) {
    if (index < 0 || index >= len) {
      return 0;
    }

    return elements[index];
  }

  operator char*() {
    return elements;
  }

  uint32_t length() {
    return len;
  }
};

template <class T>
class DT_VARIABLEARRAY : public ComplexRead {
  uint32_t unk[2];
  uint32_t offset;
  uint32_t size;
  std::vector<T> elements;

  public:

  void read(const char *base, char* &ptr) {
    uint32_t *p = (uint32_t *)ptr;
    ptr += sizeof(uint32_t) * 4;

    unk[0] = p[0];
    unk[1] = p[1];
    offset = p[2];
    size = p[3];

    char *pSrc = (char*)base + p[2];

    for (int c = 0; c < size / sizeof(T); c++) {
      T tmp;
      readData(&tmp, base, pSrc);
      elements.push_back(tmp);
    }
  }

  T operator [](uint32_t index) {
    if (index < 0 || index >= length()) {
      throw "Invalid index!";
    }

    return elements[index];
  }

  uint32_t length() {
    return elements.length();
  }
};

template<class T = int32_t>
using DT_ENUM = T;

template <uint32_t gbgroup = 0x0>
using DT_GBID = int32_t;

template <SnoGroup group>
using DT_SNO = uint32_t;

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
using DT_STRING_FORMULA = DT_CHARARRAY<32>;
using DT_ACD_NETWORK_NAME = DT_UINT64;
using DT_SHARED_SERVER_DATA_ID = DT_UINT64;
using DT_SNO_NAME = DT_FIXEDARRAY<DT_BYTE, 8>;
using DT_CSTRING = DT_CHARARRAY<16>;
using DT_POLYMORPHIC_VARIABLEARRAY = DT_FIXEDARRAY<DT_UINT, 6>;
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
  DT_UINT fileType;
  DT_UINT unk;
  DT_UINT hash;
  DT_UINT uid;
  T contents;

  D4File(const char *fileName) {
    std::ifstream file(fileName);
    std::string data((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
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
};

#pragma pop(pack)
