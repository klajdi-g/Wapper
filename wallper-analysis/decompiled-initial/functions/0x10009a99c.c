// rea decompile_all
// name: FUN_10009a99c
// address: 0x10009a99c
// body: available
// range: 0x10009a99c-0x10009af8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010009adbc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10009a99c(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  long lVar5;
  Animation AVar6;
  State SVar7;
  MainActor *pMVar8;
  MainActor *pMVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  TaskPriority TVar12;
  TaskPriority TVar13;
  undefined *puVar14;
  undefined *puVar15;
  _StringGuts _Var16;
  char *pcVar17;
  ulong uVar18;
  long extraout_x8;
  long lVar19;
  long unaff_x20;
  ulong uVar20;
  undefined1 *puVar21;
  undefined8 ****ppppuVar22;
  long lVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  String SVar27;
  String SVar28;
  undefined8 auStack_190 [2];
  undefined1 auStack_180 [8];
  long local_178;
  long local_170;
  long local_168;
  undefined *local_160;
  long local_158;
  undefined1 *local_150;
  undefined8 ***local_148;
  undefined1 *local_140;
  undefined8 local_138;
  undefined *local_130;
  undefined8 **local_128;
  undefined8 local_120;
  undefined8 local_118;
  uint local_10c;
  undefined8 local_108;
  undefined1 *local_100;
  undefined8 local_f8;
  undefined8 ***local_f0;
  long lStack_e8;
  undefined8 local_e0;
  byte local_d8;
  undefined8 ***local_c8;
  long lStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 ***local_a0;
  long lStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  
  lVar5 = 0;
  FUN_10009a6f8();
  puVar10 = (undefined8 *)(unaff_x20 + *(int *)(lVar5 + 0x14));
  uVar25 = *puVar10;
  uVar26 = puVar10[1];
  puVar10 = (undefined8 *)(unaff_x20 + *(int *)(lVar5 + 0x1c));
  FUN_1003282a4(*puVar10,*(undefined1 *)(puVar10 + 1));
  FUN_10009b770(&local_c8,uVar25,uVar26,param_2);
  lVar3 = lStack_c0;
  ppppuVar22 = (undefined8 ****)local_c8;
  if (lStack_c0 == 0) {
    AVar6.unknown = (undefined *)0x0;
  }
  else {
    local_a0 = local_c8;
    lStack_98 = lStack_c0;
    local_90 = local_b8;
    uStack_80 = uStack_a8;
    local_88 = uStack_b0;
    if (*(char *)(unaff_x20 + *(int *)(lVar5 + 0x18)) == '\x01') {
      AVar6.unknown = (undefined *)&local_a0;
      FUN_10009d600();
    }
    else {
      AVar6.unknown = (undefined *)local_c8;
      FUN_10009be30(local_c8,lStack_c0);
    }
  }
  local_148 = (undefined8 ***)AVar6.unknown;
  FUN_10009af8c(&local_f0);
  local_128 = local_f0;
  local_120 = lStack_e8;
  local_118 = local_e0;
  local_10c = (uint)local_d8;
  local_130 = (undefined *)SwiftUI::Animation::easeOut(0.35,AVar6);
  puVar10 = (undefined8 *)(unaff_x20 + *(int *)(lVar5 + 0x20));
  lStack_e8 = puVar10[1];
  local_f0 = (undefined8 ***)*puVar10;
  SVar7.unknown = &DAT_10054eed8;
  FUN_100002f94(&DAT_10054eed8,&DAT_1004249f0);
  SwiftUI::State::get_wrappedValue(SVar7);
  local_138 = local_100;
  if (lVar3 == 0) {
    ppppuVar22 = (undefined8 ****)0x0;
  }
  else {
    _swift_bridgeObjectRetain(lVar3);
  }
  lVar5 = *(long *)(lVar5 + -8);
  lVar23 = *(long *)(lVar5 + 0x40);
  local_140 = auStack_180;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar21 = auStack_180 + -(lVar23 + 0xfU & 0xfffffffffffffff0);
  FUN_10009bc10();
  pMVar8 = Swift::MainActor::typeMetadataAccessor();
  puVar11 = PTR_typeMetadataAccessor_1005246d8;
  puVar15 = &DAT_100420c00;
  pMVar9 = (MainActor *)&local_c8;
  FUN_1000087e4(pMVar9,&local_f0,&DAT_10054f730);
  pMVar8 = Swift::MainActor::get_shared(pMVar8,pMVar9);
  puVar10 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar11,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  uVar18 = (ulong)*(byte *)(lVar5 + 0x50);
  uVar20 = uVar18 + 0x20 & (uVar18 ^ 0xffffffffffffffff);
  uVar24 = lVar23 + uVar20 + 7 & 0xfffffffffffffff8;
  puVar11 = &DAT_100528760;
  _swift_allocObject(&DAT_100528760,uVar24 + 0x28,uVar18 | 7);
  *(MainActor **)(puVar11 + 0x10) = pMVar8;
  *(undefined8 **)(puVar11 + 0x18) = puVar10;
  FUN_10009bd5c(puVar21,puVar11 + uVar20);
  puVar10 = (undefined8 *)(puVar11 + uVar24);
  puVar10[1] = lStack_c0;
  *puVar10 = local_c8;
  puVar10[3] = uStack_b0;
  puVar10[2] = local_b8;
  puVar10[4] = uStack_a8;
  TVar12 = Swift::TaskPriority::typeMetadataAccessor();
  lVar5 = *(long *)(TVar12.unknown + -8);
  lVar23 = *(long *)(lVar5 + 0x40);
  TVar13 = TVar12;
  local_150 = puVar21;
  (*(code *)PTR____chkstk_darwin_100521118)();
  uVar18 = lVar23 + 0xfU & 0xfffffffffffffff0;
  lVar23 = (long)puVar21 - uVar18;
  Swift::TaskPriority::get_userInitiated(TVar13);
  pcVar17 = (char *)0x0;
  bVar4 = Swift::_stdlib_isOSVersionAtLeast(0x1a,4,0);
  if ((bVar4 & 1) == 0) {
    FUN_10002a29c(&local_c8,&DAT_10054f730,&DAT_100420c00);
    puVar15 = &DAT_100549d98;
    FUN_100002f94(&DAT_100549d98,&DAT_100419eb8);
    puVar10 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar15 + 0x24));
    puVar15 = &DAT_100549da0;
    FUN_100002f94(&DAT_100549da0,&DAT_100419ec0);
    iVar1 = *(int *)(puVar15 + 0x28);
    *(undefined8 *)((long)puVar10 + (long)iVar1) = ppppuVar22;
    ((undefined8 *)((long)puVar10 + (long)iVar1))[1] = lVar3;
    (**(code **)(lVar5 + 0x20))
              ((long)puVar10 + (long)*(int *)(puVar15 + 0x24),lVar23,TVar12.unknown);
    *puVar10 = &DAT_100420c08;
    puVar10[1] = puVar11;
    *param_1 = local_128;
    param_1[1] = local_120;
    param_1[2] = local_118;
    *(char *)(param_1 + 3) = (char)local_10c;
    param_1[4] = local_130;
    param_1[5] = local_138;
  }
  else {
    puVar14 = &DAT_100549da8;
    _Var16.unknown = &DAT_100419ec8;
    FUN_100002f94();
    local_168 = *(long *)(puVar14 + -8);
    local_160 = puVar14;
    local_158 = lVar23;
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(local_168 + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar19 = lVar23 - extraout_x8;
    lStack_e8 = lVar3;
    local_100 = (undefined1 *)0x0;
    local_f8 = 0xe000000000000000;
    local_170 = lVar19;
    local_f0 = ppppuVar22;
    _swift_bridgeObjectRetain(lVar3);
    Swift::_StringGuts::grow(0x11,_Var16);
    _swift_bridgeObjectRelease(local_f8);
    local_100 = &DAT_d000000000000028;
    local_f8 = 0x80000001004dcd40;
    local_108 = 0xaa;
    SVar27 = Swift::CustomStringConvertible::get_description();
    SVar28.bridgeObject = puVar15;
    SVar28.str = pcVar17;
    Swift::String::append(SVar27,SVar28);
    _swift_bridgeObjectRelease(SVar27.bridgeObject);
    uVar25 = local_f8;
    puVar21 = local_100;
    local_178 = lVar19;
    (*(code *)PTR____chkstk_darwin_100521118)();
    lVar19 = lVar19 - uVar18;
    (**(code **)(lVar5 + 0x10))(lVar19,lVar23,TVar12.unknown);
    puVar15 = &DAT_100549db0;
    FUN_100002f94(&DAT_100549db0,&DAT_100419ed0);
    puVar14 = puVar15;
    FUN_10000384c();
    *(undefined **)(lVar19 + -0x10) = puVar15;
    *(undefined **)(lVar19 + -8) = puVar14;
    lVar2 = local_170;
    SwiftUI::_TaskValueModifier2::_init
              (local_170,puVar14,puVar21,uVar25,0,0,lVar19,&DAT_100420c08,puVar11);
    _swift_bridgeObjectRelease(lVar3);
    FUN_10002a29c(&local_c8,&DAT_10054f730,&DAT_100420c00);
    (**(code **)(lVar5 + 8))(lVar23,TVar12.unknown);
    puVar15 = &DAT_100549dc0;
    FUN_100002f94(&DAT_100549dc0,&DAT_100419ed8);
    (**(code **)(local_168 + 0x20))((long)param_1 + (long)*(int *)(puVar15 + 0x24),lVar2,local_160);
    *param_1 = local_128;
    param_1[1] = local_120;
    param_1[2] = local_118;
    *(char *)(param_1 + 3) = (char)local_10c;
    param_1[4] = local_130;
    param_1[5] = local_138;
  }
  return;
}

