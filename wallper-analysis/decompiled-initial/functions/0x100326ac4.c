// rea decompile_all
// name: FUN_100326ac4
// address: 0x100326ac4
// body: available
// range: 0x100326ac4-0x1003270a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100326ac4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined *puVar2;
  URL UVar3;
  Color CVar4;
  Color CVar5;
  UnitPoint UVar6;
  Gradient gradient;
  UnitPoint startPoint;
  UnitPoint endPoint;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar7;
  long extraout_x12;
  long extraout_x12_00;
  CGFloat url;
  long lVar8;
  Color CVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long alStack_1c0 [3];
  undefined *local_1a8;
  undefined *local_1a0;
  long local_198;
  long local_190;
  long local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  
  puVar2 = &DAT_10055c618;
  local_188 = param_1;
  FUN_100002f94(&DAT_10055c618,&DAT_100431418);
  alStack_1c0[2] = *(long *)(puVar2 + -8);
  local_1a0 = puVar2;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(alStack_1c0[2] + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_10055c620;
  alStack_1c0[1] = (long)alStack_1c0 - extraout_x8;
  FUN_100002f94(&DAT_10055c620,&DAT_100431420);
  local_1a8 = puVar2;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = (undefined8 *)(((long)alStack_1c0 - extraout_x8) - extraout_x8_00);
  puVar2 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  url.unknown = (undefined *)((long)puVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100521118)();
  CVar9.unknown = url.unknown + -extraout_x12;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar8 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar8 + 0x40));
  lVar12 = (long)CVar9.unknown - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_10055c628;
  FUN_100002f94(&DAT_10055c628,&DAT_100431428);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  lVar7 = lVar12 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  local_190 = lVar7;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_198 = lVar7 - extraout_x12_00;
  FUN_1000087e4(param_2,CVar9.unknown,&DAT_100553d90,&DAT_10041bf10);
  puVar2 = CVar9.unknown;
  (**(code **)(lVar8 + 0x30))(CVar9.unknown,1,UVar3.unknown);
  if ((int)puVar2 == 1) {
    FUN_10002a29c(CVar9.unknown,&DAT_100553d90,&DAT_10041bf10);
    CVar9 = SwiftUI::Color::get_black(CVar9);
    *puVar10 = CVar9.unknown;
    _swift_storeEnumTagMultiPayload(puVar10,local_1a8,1);
    FUN_1000087a0(&DAT_10055c630,&DAT_10055c618,&DAT_100431418,
                  PTR_SwiftUI__SwiftUI__AsyncImage<undefined>_>SwiftUI__View_100521b88);
    lVar11 = local_198;
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar10);
  }
  else {
    (**(code **)(lVar8 + 0x20))(lVar12,CVar9.unknown,UVar3.unknown);
    (**(code **)(lVar8 + 0x10))(url.unknown,lVar12,UVar3.unknown);
    (**(code **)(lVar8 + 0x38))(url.unknown,0,1,UVar3.unknown);
    puVar2 = &DAT_10053aaa8;
    _swift_allocObject(&DAT_10053aaa8,0x108,7);
    uVar13 = param_3[0x18];
    uVar15 = param_3[0x1b];
    uVar14 = param_3[0x1a];
    *(undefined8 *)(puVar2 + 0xd8) = param_3[0x19];
    *(undefined8 *)(puVar2 + 0xd0) = uVar13;
    *(undefined8 *)(puVar2 + 0xe8) = uVar15;
    *(undefined8 *)(puVar2 + 0xe0) = uVar14;
    uVar13 = param_3[0x1c];
    *(undefined8 *)(puVar2 + 0xf8) = param_3[0x1d];
    *(undefined8 *)(puVar2 + 0xf0) = uVar13;
    *(undefined8 *)(puVar2 + 0x100) = param_3[0x1e];
    uVar13 = param_3[0x10];
    uVar15 = param_3[0x13];
    uVar14 = param_3[0x12];
    *(undefined8 *)(puVar2 + 0x98) = param_3[0x11];
    *(undefined8 *)(puVar2 + 0x90) = uVar13;
    *(undefined8 *)(puVar2 + 0xa8) = uVar15;
    *(undefined8 *)(puVar2 + 0xa0) = uVar14;
    uVar13 = param_3[0x14];
    uVar15 = param_3[0x17];
    uVar14 = param_3[0x16];
    *(undefined8 *)(puVar2 + 0xb8) = param_3[0x15];
    *(undefined8 *)(puVar2 + 0xb0) = uVar13;
    *(undefined8 *)(puVar2 + 200) = uVar15;
    *(undefined8 *)(puVar2 + 0xc0) = uVar14;
    uVar13 = param_3[8];
    uVar15 = param_3[0xb];
    uVar14 = param_3[10];
    *(undefined8 *)(puVar2 + 0x58) = param_3[9];
    *(undefined8 *)(puVar2 + 0x50) = uVar13;
    *(undefined8 *)(puVar2 + 0x68) = uVar15;
    *(undefined8 *)(puVar2 + 0x60) = uVar14;
    uVar13 = param_3[0xc];
    uVar15 = param_3[0xf];
    uVar14 = param_3[0xe];
    *(undefined8 *)(puVar2 + 0x78) = param_3[0xd];
    *(undefined8 *)(puVar2 + 0x70) = uVar13;
    *(undefined8 *)(puVar2 + 0x88) = uVar15;
    *(undefined8 *)(puVar2 + 0x80) = uVar14;
    uVar13 = *param_3;
    uVar15 = param_3[3];
    uVar14 = param_3[2];
    *(undefined8 *)(puVar2 + 0x18) = param_3[1];
    *(undefined8 *)(puVar2 + 0x10) = uVar13;
    *(undefined8 *)(puVar2 + 0x28) = uVar15;
    *(undefined8 *)(puVar2 + 0x20) = uVar14;
    uVar13 = param_3[4];
    uVar15 = param_3[7];
    uVar14 = param_3[6];
    *(undefined8 *)(puVar2 + 0x38) = param_3[5];
    *(undefined8 *)(puVar2 + 0x30) = uVar13;
    *(undefined8 *)(puVar2 + 0x48) = uVar15;
    *(undefined8 *)(puVar2 + 0x40) = uVar14;
    FUN_100327eb8(param_3,&local_180);
    FUN_100002f94(&DAT_10055c640,&DAT_100431440);
    FUN_10032a6e8();
    lVar7 = alStack_1c0[1];
    SwiftUI::AsyncImage::_init(url,(Transaction)0x0);
    puVar2 = local_1a0;
    lVar1 = alStack_1c0[2];
    (**(code **)(alStack_1c0[2] + 0x10))(puVar10,lVar7,local_1a0);
    _swift_storeEnumTagMultiPayload(puVar10,local_1a8,0);
    FUN_1000087a0(&DAT_10055c630,&DAT_10055c618,&DAT_100431418,
                  PTR_SwiftUI__SwiftUI__AsyncImage<undefined>_>SwiftUI__View_100521b88);
    lVar11 = local_198;
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar10);
    (**(code **)(lVar1 + 8))(lVar7,puVar2);
    (**(code **)(lVar8 + 8))(lVar12,UVar3.unknown);
  }
  CVar9.unknown = &DAT_10054af98;
  FUN_100002f94(&DAT_10054af98,&DAT_10041c1a0);
  startPoint.unknown = (undefined *)0x38;
  endPoint.unknown = (undefined *)0x7;
  _swift_allocObject();
  *(undefined8 *)(CVar9.unknown + 0x18) = 6;
  *(undefined8 *)(CVar9.unknown + 0x10) = 3;
  CVar4 = SwiftUI::Color::get_black(CVar9);
  CVar5 = SwiftUI::Color::opacity(0.75,CVar4);
  _swift_release();
  *(undefined **)(CVar9.unknown + 0x20) = CVar5.unknown;
  CVar4 = SwiftUI::Color::get_black(CVar4);
  CVar5 = SwiftUI::Color::opacity(0.25,CVar4);
  _swift_release();
  *(undefined **)(CVar9.unknown + 0x28) = CVar5.unknown;
  UVar6.unknown = (undefined *)SwiftUI::Color::get_black(CVar4);
  CVar5 = SwiftUI::Color::opacity(0.85,(Color)UVar6.unknown);
  _swift_release();
  *(undefined **)(CVar9.unknown + 0x30) = CVar5.unknown;
  UVar6 = SwiftUI::UnitPoint::get_top(UVar6);
  SwiftUI::UnitPoint::get_bottom(UVar6);
  gradient = SwiftUI::Gradient::init();
  SwiftUI::LinearGradient::init(gradient,startPoint,endPoint);
  lVar7 = local_190;
  FUN_1000087e4(lVar11,local_190,&DAT_10055c628,&DAT_100431428);
  lVar8 = local_188;
  FUN_1000087e4(lVar7,local_188,&DAT_10055c628,&DAT_100431428);
  puVar2 = &DAT_10055c638;
  FUN_100002f94(&DAT_10055c638,&DAT_100431438);
  puVar10 = (undefined8 *)(lVar8 + *(int *)(puVar2 + 0x30));
  *puVar10 = local_180;
  puVar10[4] = uStack_160;
  puVar10[3] = local_168;
  puVar10[2] = uStack_170;
  puVar10[1] = local_178;
  _swift_bridgeObjectRetain(local_180);
  FUN_10002a29c(lVar11,&DAT_10055c628,&DAT_100431428);
  _swift_bridgeObjectRelease(local_180);
  FUN_10002a29c(lVar7,&DAT_10055c628,&DAT_100431428);
  return;
}

