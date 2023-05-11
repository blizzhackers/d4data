/**
 * Definition: t11a18e87
 * Hash: 11a18e87
 */

#pragma once

#include "../types.h"
#include "StringLabelHandleEx.h"
#include "UIEffect.h"
#include "t6b1c5d9c.h"

#pragma push(pack, 1)

struct t11a18e87 : public ComplexRead {
  DT_INT nLeft;
  DT_INT nTop;
  DT_INT nWidth;
  DT_INT nHeight;
  DT_INT nRight;
  DT_INT nBottom;
  DT_INT nMaxWidth;
  DT_INT nMaxHeight;
  DT_INT nMinWidth;
  DT_INT nMinHeight;
  StringLabelHandleEx hTooltipText;
  DT_ENUM<DT_INT> eTooltipTextJustify;
  DT_CSTRING nTooltip;
  DT_INT nTooltipOffsetX;
  DT_INT nTooltipOffsetY;
  DT_ENUM<DT_INT> unk_b9b10c5;
  DT_ENUM<DT_INT> unk_f68f8f5;
  DT_INT nTooltipWidth;
  DT_FLOAT unk_bffade6;
  DT_BYTE dwAlpha;
  DT_ENUM<DT_INT> unk_cdd5397;
  DT_SNO<SnoGroup::Shader> snoShader;
  UIEffect unk_b25bd2f;
  UIEffect unk_9cf9482;
  UIEffect unk_53346c4;
  DT_INT unk_4c24000;
  t6b1c5d9c hImageFrame;
  t6b1c5d9c unk_6124e57;
  t6b1c5d9c unk_ca5933c;
  DT_INT unk_902601b;
  t6b1c5d9c unk_878e49e;
  DT_SNO<SnoGroup::TiledStyle> unk_bebd93b;
  DT_SNO<SnoGroup::Animation2D> unk_7cf5f9e;
  DT_INT unk_d98fd69;
  DT_INT unk_849b3d9;
  DT_INT unk_f9614a9;
  DT_ENUM<DT_INT> unk_37cc53d;
  DT_INT unk_9025b89;
  DT_INT unk_d547694;
  DT_INT unk_b0ab75a;
  DT_INT unk_f6e00c8;
  DT_INT unk_ab7c81f;
  DT_INT unk_90fbd84;
  DT_INT unk_28714d;
  DT_INT unk_81bc013;
  DT_INT nInputFocusOrder;
  DT_ENUM<DT_INT> unk_cc2b674;
  DT_SNO<SnoGroup::TiledStyle> snoTiledStyle;
  DT_SNO<SnoGroup::TiledStyle> unk_d04e8cf;
  DT_INT unk_3dc9f06;
  DT_INT unk_3dc9f07;
  DT_INT unk_438e5c1;
  DT_ENUM<DT_INT> unk_d0d3583;
  DT_INT unk_bdc3d9e;
  DT_CSTRING szOnClick;
  DT_CSTRING unk_f19b822;
  DT_INT unk_c6ae8ed;
  DT_CSTRING szOnDoubleClick;
  DT_CSTRING szOnRightClick;
  DT_CSTRING unk_cf724a8;
  DT_INT unk_1894e73;
  DT_CSTRING unk_64741bf;
  DT_CSTRING szOnDragStart;
  DT_CSTRING szOnDrag;
  DT_CSTRING unk_ae4056e;
  DT_INT bIsDragTarget;
  DT_CSTRING unk_4530f50;
  DT_CSTRING szOnContextMenu;
  DT_INT unk_d31cd22;
  DT_INT unk_37f7289;
  DT_INT unk_354e749;
  DT_CSTRING unk_341729d;
  DT_FLOAT flRotation;
  DT_VECTOR2D vecPivot;
  DT_INT bMirrorX;
  DT_INT bMirrorY;
  DT_INT bNoSnap;
  DT_ENUM<DT_INT> unk_93cbaa8;
  DT_ENUM<DT_INT> unk_3d55658;
  DT_RGBACOLOR rgbaTint;
  DT_RGBACOLOR unk_957cb7;
  DT_RGBACOLOR unk_8b9d9cf;
  DT_RGBACOLOR rgbaDropShadow;
  DT_RGBACOLOR unk_3a57c1f;
  DT_RGBACOLOR unk_1e6c137;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
