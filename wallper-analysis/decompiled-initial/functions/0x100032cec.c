// rea decompile_all
// name: FUN_100032cec
// address: 0x100032cec
// body: available
// range: 0x100032cec-0x100033153 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100032cec(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  int iVar4;
  code *pcVar5;
  Alignment AVar6;
  HorizontalAlignment HVar7;
  undefined *puVar8;
  Set SVar9;
  undefined *puVar10;
  long lVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined8 *unaff_x20;
  undefined1 *puVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uStack_140;
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  undefined1 auStack_128 [8];
  undefined8 auStack_120 [2];
  undefined1 auStack_110 [8];
  undefined *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  
  AVar6.unknown = (undefined *)0x0;
  FUN_100030a44();
  lVar16 = *(long *)(AVar6.unknown + -8);
  lVar15 = *(long *)(lVar16 + 0x40);
  local_108 = AVar6.unknown;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar11 = -(lVar15 + 0xfU & 0xfffffffffffffff0);
  puVar14 = auStack_110 + lVar11;
  AVar6 = SwiftUI::Alignment::get_bottomLeading(AVar6);
  *param_1 = AVar6.unknown;
  param_1[1] = param_7;
  HVar7.unknown = &DAT_10054b9f8;
  FUN_100002f94(&DAT_10054b9f8,&BYTE_10041d010);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(HVar7.unknown + 0x2c));
  HVar7 = SwiftUI::HorizontalAlignment::get_leading(HVar7);
  *puVar1 = HVar7.unknown;
  puVar1[1] = 0x4000000000000000;
  *(undefined1 *)(puVar1 + 2) = 0;
  puVar8 = &DAT_10054ba00;
  FUN_100002f94(&DAT_10054ba00,&BYTE_10041d018);
  SVar9.unknown = (undefined *)unaff_x20;
  FUN_100033154((long)puVar1 + (long)*(int *)(puVar8 + 0x2c));
  SVar9 = SwiftUI::Edge::Set::get_all(SVar9);
  uVar19 = 0x4054000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar9.unknown);
  AVar6.unknown = &DAT_10054ba08;
  pbVar12 = &BYTE_10041d020;
  FUN_100002f94();
  puVar2 = (undefined1 *)((long)puVar1 + (long)*(int *)(AVar6.unknown + 0x24));
  *puVar2 = (char)SVar9.unknown;
  *(undefined8 *)(puVar2 + 8) = uVar19;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  puVar2[0x28] = 0;
  AVar6 = SwiftUI::Alignment::get_bottomLeading(AVar6);
  *(undefined **)((long)auStack_120 + lVar11) = AVar6.unknown;
  *(byte **)((long)auStack_120 + lVar11 + 8) = pbVar12;
  auStack_128[lVar11] = 0;
  *(undefined8 *)((long)&uStack_130 + lVar11) = 0x7ff0000000000000;
  auStack_138[lVar11] = 1;
  *(undefined8 *)((long)&uStack_140 + lVar11) = 0;
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  puVar8 = &DAT_10054ba10;
  FUN_100002f94(&DAT_10054ba10,&BYTE_10041d028);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar8 + 0x24));
  puVar1[9] = uStack_b0;
  puVar1[8] = local_b8;
  puVar1[0xb] = uStack_a0;
  puVar1[10] = local_a8;
  puVar1[0xd] = uStack_90;
  puVar1[0xc] = local_98;
  puVar1[1] = uStack_f0;
  *puVar1 = local_f8;
  puVar1[3] = uStack_e0;
  puVar1[2] = local_e8;
  puVar1[5] = uStack_d0;
  puVar1[4] = local_d8;
  puVar1[7] = uStack_c0;
  puVar1[6] = local_c8;
  puVar8 = &DAT_10054ba18;
  FUN_100002f94(&DAT_10054ba18,&BYTE_10041d030);
  *(undefined1 *)((long)param_1 + (long)*(int *)(puVar8 + 0x24)) = 0;
  FUN_100029504();
  uVar18 = (ulong)*(byte *)(lVar16 + 0x50);
  uVar17 = uVar18 + 0x10 & (uVar18 ^ 0xffffffffffffffff);
  puVar8 = &DAT_100526098;
  _swift_allocObject(&DAT_100526098,uVar17 + lVar15,uVar18 | 7);
  FUN_100007e64(puVar14,puVar8 + uVar17,FUN_100030a44);
  puVar10 = &DAT_10054ba20;
  FUN_100002f94(&DAT_10054ba20,&BYTE_10041d038);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar10 + 0x24));
  *puVar1 = FUN_100036b24;
  puVar1[1] = puVar8;
  puVar1[2] = 0;
  puVar1[3] = 0;
  FUN_100029504();
  puVar8 = &DAT_1005260c0;
  _swift_allocObject(&DAT_1005260c0,uVar17 + lVar15,uVar18 | 7);
  FUN_100007e64(puVar14,puVar8 + uVar17,FUN_100030a44);
  uVar19 = *unaff_x20;
  uVar3 = unaff_x20[1];
  puVar10 = &DAT_10054ba28;
  FUN_100002f94(&DAT_10054ba28,&BYTE_10041d040);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar10 + 0x24));
  *puVar1 = uVar19;
  puVar1[1] = uVar3;
  puVar1[2] = thunk_FUN_100036cec;
  puVar1[3] = puVar8;
  lVar11 = 0;
  FUN_10040211c();
  iVar4 = *(int *)(lVar11 + 0x20);
  FUN_100029504();
  puVar8 = &DAT_1005260e8;
  _swift_allocObject(&DAT_1005260e8,uVar17 + lVar15,uVar18 | 7);
  FUN_100007e64(puVar14,puVar8 + uVar17,FUN_100030a44);
  uVar19 = *(undefined8 *)((long)unaff_x20 + (long)iVar4);
  puVar10 = &DAT_10054ba30;
  FUN_100002f94(&DAT_10054ba30,&BYTE_10041d048);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar10 + 0x24));
  *puVar1 = uVar19;
  puVar1[1] = thunk_FUN_100036cec;
  puVar1[2] = puVar8;
  lVar11 = *(long *)((long)unaff_x20 + (long)*(int *)(local_108 + 0x14));
  if (lVar11 != 0) {
    pbVar12 = &BYTE_10041d050;
    _swift_getKeyPath(&BYTE_10041d050);
    pbVar13 = &BYTE_10041d078;
    _swift_getKeyPath(&BYTE_10041d078);
    _swift_bridgeObjectRetain(uVar3);
    _swift_retain(lVar11);
    Combine::Published::_get_subscript(&local_100);
    _swift_release(pbVar12);
    _swift_release(pbVar13);
    _swift_release(lVar11);
    FUN_100029504();
    puVar8 = &DAT_100526110;
    _swift_allocObject(&DAT_100526110,uVar17 + lVar15,uVar18 | 7);
    FUN_100007e64(puVar14,puVar8 + uVar17,FUN_100030a44);
    puVar10 = &DAT_10054ba38;
    FUN_100002f94(&DAT_10054ba38,&DAT_10041d098);
    param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar10 + 0x24));
    *param_1 = local_100;
    param_1[1] = thunk_FUN_100036cec;
    param_1[2] = puVar8;
    return;
  }
  FUN_100279594(0);
  FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
  _swift_bridgeObjectRetain(uVar3);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x100033154);
  (*pcVar5)();
}

