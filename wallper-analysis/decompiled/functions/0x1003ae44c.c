// rea decompile_all
// name: FUN_1003ae44c
// address: 0x1003ae44c
// body: available
// range: 0x1003ae44c-0x1003af08f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003ae8e4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003ae44c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  EnvironmentObject<undefined> EVar12;
  undefined8 uVar13;
  ObservedObject<undefined> OVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  code *pcVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  code *pcVar20;
  long lVar21;
  code *pcVar22;
  code *pcVar23;
  code *pcVar24;
  code *local_290 [3];
  long local_278;
  long local_270;
  long local_268;
  undefined *local_260;
  long local_258;
  long local_250;
  long local_248;
  long local_240;
  long local_238;
  long local_230;
  long local_228;
  long local_220;
  long local_218;
  long local_210;
  long local_208;
  undefined *local_200;
  long local_1f8;
  ulong local_1f0;
  long local_1e8;
  long local_1e0;
  undefined *local_1d8;
  long local_1d0;
  long local_1c8;
  undefined *local_1c0;
  long local_1b8;
  undefined *local_1b0;
  undefined *local_1a8;
  undefined *local_1a0;
  undefined1 local_191;
  undefined *local_190;
  undefined8 *local_188;
  undefined *local_180;
  undefined8 uStack_178;
  undefined1 local_170;
  undefined8 local_168;
  
  puVar8 = &DAT_10055fb08;
  local_220 = param_1;
  FUN_100002f94(&DAT_10055fb08,&DAT_100435310);
  local_1c8 = *(long *)(puVar8 + -8);
  local_230 = *(long *)(local_1c8 + 0x40);
  local_1c0 = puVar8;
  (*(code *)PTR____chkstk_darwin_100521118)(local_230 + 0xfU & 0xfffffffffffffff0);
  lVar17 = (long)local_290 - extraout_x8;
  puVar8 = &DAT_100549f08;
  FUN_100002f94(&DAT_100549f08,&DAT_100419f68);
  lVar18 = *(long *)(puVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = lVar17 - extraout_x8_00;
  FUN_10032c5d0(&local_190);
  puVar9 = &DAT_10054b570;
  FUN_100002f94(&DAT_10054b570,&DAT_100433140);
  FUN_1003b1578();
  puVar10 = &DAT_10054b568;
  FUN_1000087a0(&DAT_10054b568,&DAT_10054b570,&DAT_100433140,
                PTR_SwiftUI__SwiftUI__Label<undefined,undefined>_>SwiftUI__View_100523358);
  local_1a8 = puVar10;
  local_1a0 = puVar9;
  (extension_SwiftUI)::SwiftUI::View::_tabItem();
  FUN_1003b1818(&local_190);
  bVar7 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0x1a,0,0,0x1a,0,0);
  if ((bVar7 & 1) == 0) {
    puVar9 = &DAT_100549f00;
    FUN_100002f94(&DAT_100549f00,&DAT_100419f60);
    iVar1 = *(int *)(puVar9 + 0x24);
    *(undefined8 *)(lVar17 + iVar1) = 0;
    *(undefined1 *)((undefined8 *)(lVar17 + iVar1) + 1) = 0;
    (**(code **)(lVar18 + 0x20))(lVar17,lVar16,puVar8);
    puVar8 = &DAT_100549f10;
    FUN_100002f94(&DAT_100549f10,&DAT_100419f70);
    iVar1 = *(int *)(puVar8 + 0x24);
    *(undefined8 *)(lVar17 + iVar1) = 0;
    *(undefined2 *)((undefined8 *)(lVar17 + iVar1) + 1) = 0;
  }
  else {
    puVar9 = &DAT_100549f18;
    FUN_100002f94(&DAT_100549f18,&DAT_100435380);
    iVar1 = *(int *)(puVar9 + 0x24);
    *(undefined8 *)(lVar17 + iVar1) = 0;
    *(undefined1 *)((undefined8 *)(lVar17 + iVar1) + 1) = 1;
    (**(code **)(lVar18 + 0x20))(lVar17,lVar16,puVar8);
  }
  puVar8 = &DAT_10055fb10;
  FUN_100002f94(&DAT_10055fb10,&DAT_100435318);
  local_1e0 = *(long *)(puVar8 + -8);
  local_240 = *(long *)(local_1e0 + 0x40);
  local_228 = lVar16;
  local_1d8 = puVar8;
  (*(code *)PTR____chkstk_darwin_100521118)(local_240 + 0xfU & 0xfffffffffffffff0);
  lVar16 = lVar16 - extraout_x8_01;
  puVar8 = &DAT_100549f28;
  FUN_100002f94(&DAT_100549f28,&DAT_100435320);
  lVar18 = *(long *)(puVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1003205b4(&local_190);
  FUN_1003b15b8();
  (extension_SwiftUI)::SwiftUI::View::_tabItem();
  FUN_1003b1714(&local_190);
  local_1f0 = CONCAT44(local_1f0._4_4_,(int)CONCAT71((int7)((ulong)puVar10 >> 8),bVar7));
  local_1d0 = lVar17;
  if ((bVar7 & 1) == 0) {
    puVar9 = &DAT_100549f20;
    FUN_100002f94(&DAT_100549f20,&DAT_100419f80);
    iVar1 = *(int *)(puVar9 + 0x24);
    *(undefined8 *)(lVar16 + iVar1) = 1;
    *(undefined1 *)((undefined8 *)(lVar16 + iVar1) + 1) = 0;
    (**(code **)(lVar18 + 0x20))(lVar16,lVar16 - extraout_x8_02,puVar8);
    puVar8 = &DAT_100549f30;
    FUN_100002f94(&DAT_100549f30,&DAT_100419f90);
    iVar1 = *(int *)(puVar8 + 0x24);
    *(undefined8 *)(lVar16 + iVar1) = 1;
    *(undefined2 *)((undefined8 *)(lVar16 + iVar1) + 1) = 0;
  }
  else {
    puVar9 = &DAT_100549f38;
    FUN_100002f94(&DAT_100549f38,&DAT_100419f98);
    iVar1 = *(int *)(puVar9 + 0x24);
    *(undefined8 *)(lVar16 + iVar1) = 1;
    *(undefined1 *)((undefined8 *)(lVar16 + iVar1) + 1) = 1;
    (**(code **)(lVar18 + 0x20))(lVar16,lVar16 - extraout_x8_02,puVar8);
  }
  puVar8 = &DAT_10055fb18;
  local_1e8 = lVar16;
  FUN_100002f94(&DAT_10055fb18,&DAT_100435328);
  local_1f8 = *(long *)(puVar8 + -8);
  local_248 = *(long *)(local_1f8 + 0x40);
  local_238 = lVar16;
  local_1b0 = puVar8;
  (*(code *)PTR____chkstk_darwin_100521118)(local_248 + 0xfU & 0xfffffffffffffff0);
  lVar16 = lVar16 - extraout_x8_03;
  puVar8 = &DAT_100549f48;
  local_1b8 = lVar16;
  FUN_100002f94(&DAT_100549f48,&DAT_100435330);
  lVar18 = *(long *)(puVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100279594(0);
  puVar11 = &DAT_100553dd0;
  FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
  EVar12 = SwiftUI::EnvironmentObject::init();
  if (DAT_100557fe0 != -1) {
    _swift_once(&DAT_100557fe0,FUN_10025cd74);
  }
  uVar2 = DAT_100577d70;
  uVar13 = 0;
  FUN_10025e124();
  puVar9 = &DAT_10055fae0;
  FUN_1000036d0(&DAT_10055fae0,FUN_10025e124,&TargetProtocolConformanceDescriptor_10042c1f0);
  _swift_retain(uVar2);
  OVar14 = SwiftUI::ObservedObject::init(puVar9,uVar13,puVar9);
  local_191 = 0;
  SwiftUI::State::init(&local_190,OVar14.unknown,&DAT_10053b6f8);
  puVar6 = local_188;
  local_170 = local_190._0_1_;
  local_168 = local_188;
  local_190 = EVar12.unknown;
  local_188 = puVar11;
  local_180 = OVar14.unknown;
  uStack_178 = uVar13;
  FUN_1003b1688();
  (extension_SwiftUI)::SwiftUI::View::_tabItem();
  _swift_release(uVar13);
  _swift_release(EVar12.unknown);
  _swift_release(puVar6);
  if ((local_1f0 & 1) == 0) {
    puVar9 = &DAT_100549f40;
    FUN_100002f94(&DAT_100549f40,&DAT_100419fa0);
    lVar17 = local_1b8;
    iVar1 = *(int *)(puVar9 + 0x24);
    *(undefined8 *)(local_1b8 + iVar1) = 2;
    *(undefined1 *)((undefined8 *)(local_1b8 + iVar1) + 1) = 0;
    (**(code **)(lVar18 + 0x20))(local_1b8,lVar16 - extraout_x8_04,puVar8);
    puVar8 = &DAT_100549f50;
    FUN_100002f94(&DAT_100549f50,&DAT_100419fb0);
    iVar1 = *(int *)(puVar8 + 0x24);
    *(undefined8 *)(lVar17 + iVar1) = 2;
    *(undefined2 *)((undefined8 *)(lVar17 + iVar1) + 1) = 0;
  }
  else {
    puVar9 = &DAT_100549f58;
    FUN_100002f94(&DAT_100549f58,&DAT_100435370);
    iVar1 = *(int *)(puVar9 + 0x24);
    *(undefined8 *)(local_1b8 + iVar1) = 2;
    *(undefined1 *)((undefined8 *)(local_1b8 + iVar1) + 1) = 1;
    (**(code **)(lVar18 + 0x20))(local_1b8,lVar16 - extraout_x8_04,puVar8);
  }
  puVar8 = &DAT_10055fb20;
  FUN_100002f94(&DAT_10055fb20,&DAT_100435338);
  local_208 = *(long *)(puVar8 + -8);
  local_270 = *(long *)(local_208 + 0x40);
  local_250 = lVar16;
  local_200 = puVar8;
  (*(code *)PTR____chkstk_darwin_100521118)(local_270 + 0xfU & 0xfffffffffffffff0);
  lVar16 = lVar16 - extraout_x8_05;
  puVar8 = &DAT_100549f68;
  FUN_100002f94(&DAT_100549f68,&DAT_100435340);
  lVar21 = *(long *)(puVar8 + -8);
  local_218 = lVar16;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar21 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = lVar16 - extraout_x8_06;
  lVar18 = 0;
  FUN_10039c2bc();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar18 + -8) + 0x40));
  lVar18 = lVar17 - (extraout_x8_07 + 0xfU & 0xfffffffffffffff0);
  FUN_1003a3b90(lVar18);
  FUN_1000036d0(&DAT_10055fad0,FUN_10039c2bc,&TargetProtocolConformanceDescriptor_1004349f8);
  (extension_SwiftUI)::SwiftUI::View::_tabItem();
  FUN_100029548(lVar18,FUN_10039c2bc);
  uVar3 = local_1f0;
  local_210 = lVar16;
  if ((local_1f0 & 1) == 0) {
    puVar9 = &DAT_100549f60;
    FUN_100002f94(&DAT_100549f60,&DAT_100419fc0);
    iVar1 = *(int *)(puVar9 + 0x24);
    *(undefined8 *)(lVar16 + iVar1) = 3;
    *(undefined1 *)((undefined8 *)(lVar16 + iVar1) + 1) = 0;
    (**(code **)(lVar21 + 0x20))(lVar16,lVar17,puVar8);
    puVar8 = &DAT_100549f70;
    FUN_100002f94(&DAT_100549f70,&DAT_100419fd0);
    iVar1 = *(int *)(puVar8 + 0x24);
    *(undefined8 *)(lVar16 + iVar1) = 3;
    *(undefined2 *)((undefined8 *)(lVar16 + iVar1) + 1) = 0;
  }
  else {
    puVar9 = &DAT_100549f78;
    FUN_100002f94(&DAT_100549f78,&DAT_100419fd8);
    iVar1 = *(int *)(puVar9 + 0x24);
    *(undefined8 *)(lVar16 + iVar1) = 3;
    *(undefined1 *)((undefined8 *)(lVar16 + iVar1) + 1) = 1;
    (**(code **)(lVar21 + 0x20))(lVar16,lVar17,puVar8);
  }
  lVar16 = local_218;
  puVar8 = &DAT_10055fb28;
  FUN_100002f94(&DAT_10055fb28,&DAT_100435348);
  local_258 = lVar16;
  local_218 = *(long *)(puVar8 + -8);
  lVar18 = *(long *)(local_218 + 0x40);
  local_260 = puVar8;
  (*(code *)PTR____chkstk_darwin_100521118)(lVar18 + 0xfU & 0xfffffffffffffff0);
  lVar16 = lVar16 - extraout_x8_08;
  puVar8 = &DAT_100549f88;
  FUN_100002f94(&DAT_100549f88,&DAT_100435350);
  lVar17 = *(long *)(puVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100343370(&local_190);
  FUN_1003b16c8();
  (extension_SwiftUI)::SwiftUI::View::_tabItem();
  FUN_100343964(&local_190);
  if ((uVar3 & 1) == 0) {
    puVar9 = &DAT_100549f80;
    FUN_100002f94(&DAT_100549f80,&DAT_100419fe0);
    iVar1 = *(int *)(puVar9 + 0x24);
    *(undefined8 *)(lVar16 + iVar1) = 4;
    *(undefined1 *)((undefined8 *)(lVar16 + iVar1) + 1) = 0;
    (**(code **)(lVar17 + 0x20))(lVar16,lVar16 - extraout_x8_09,puVar8);
    puVar8 = &DAT_100549f90;
    FUN_100002f94(&DAT_100549f90,&DAT_100419ff0);
    iVar1 = *(int *)(puVar8 + 0x24);
    *(undefined8 *)(lVar16 + iVar1) = 4;
    *(undefined2 *)((undefined8 *)(lVar16 + iVar1) + 1) = 0;
  }
  else {
    puVar9 = &DAT_100549f98;
    FUN_100002f94(&DAT_100549f98,&DAT_100435360);
    iVar1 = *(int *)(puVar9 + 0x24);
    *(undefined8 *)(lVar16 + iVar1) = 4;
    *(undefined1 *)((undefined8 *)(lVar16 + iVar1) + 1) = 1;
    (**(code **)(lVar17 + 0x20))(lVar16,lVar16 - extraout_x8_09,puVar8);
  }
  lVar17 = local_210;
  local_268 = lVar16;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar8 = local_1c0;
  lVar19 = lVar16 - (extraout_x12 + 0xfU & 0xfffffffffffffff0);
  local_290[2] = *(code **)(local_1c8 + 0x10);
  local_278 = lVar19;
  (*local_290[2])(lVar19,local_1d0,local_1c0);
  local_230 = lVar19;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar21 = lVar19 - (extraout_x12_00 + 0xfU & 0xfffffffffffffff0);
  pcVar22 = *(code **)(local_1e0 + 0x10);
  local_1a0 = (undefined *)lVar21;
  (*pcVar22)(lVar21,local_1e8,local_1d8);
  local_240 = lVar21;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar21 = lVar21 - (extraout_x12_01 + 0xfU & 0xfffffffffffffff0);
  local_290[1] = *(code **)(local_1f8 + 0x10);
  local_1a8 = (undefined *)lVar21;
  (*local_290[1])(lVar21,local_1b8,local_1b0);
  local_248 = lVar21;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar10 = local_200;
  lVar21 = lVar21 - (extraout_x12_02 + 0xfU & 0xfffffffffffffff0);
  local_290[0] = *(code **)(local_208 + 0x10);
  local_1f0 = lVar21;
  (*local_290[0])(lVar21,lVar17,local_200);
  local_270 = lVar21;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar9 = local_260;
  lVar21 = lVar21 - (lVar18 + 0xfU & 0xfffffffffffffff0);
  pcVar15 = *(code **)(local_218 + 0x10);
  (*pcVar15)(lVar21,lVar16,local_260);
  lVar18 = local_220;
  (*local_290[2])(local_220,lVar19,puVar8);
  puVar8 = &DAT_10055fb30;
  FUN_100002f94(&DAT_10055fb30,&DAT_100435358);
  puVar4 = local_1d8;
  (*pcVar22)(lVar18 + *(int *)(puVar8 + 0x30),local_1a0,local_1d8);
  puVar5 = local_1b0;
  (*local_290[1])(lVar18 + *(int *)(puVar8 + 0x40),local_1a8,local_1b0);
  (*local_290[0])(lVar18 + *(int *)(puVar8 + 0x50),local_1f0,puVar10);
  (*pcVar15)(lVar18 + *(int *)(puVar8 + 0x60),lVar21,puVar9);
  pcVar15 = *(code **)(local_218 + 8);
  (*pcVar15)(lVar16,puVar9);
  pcVar22 = *(code **)(local_208 + 8);
  (*pcVar22)(local_210,puVar10);
  pcVar20 = *(code **)(local_1f8 + 8);
  (*pcVar20)(local_1b8,puVar5);
  pcVar23 = *(code **)(local_1e0 + 8);
  (*pcVar23)(local_1e8,puVar4);
  puVar8 = local_1c0;
  pcVar24 = *(code **)(local_1c8 + 8);
  (*pcVar24)(local_1d0,local_1c0);
  (*pcVar15)(lVar21,puVar9);
  (*pcVar22)(local_1f0,local_200);
  (*pcVar20)(local_1a8,local_1b0);
  (*pcVar23)(local_1a0,puVar4);
  (*pcVar24)(local_278,puVar8);
  return;
}

