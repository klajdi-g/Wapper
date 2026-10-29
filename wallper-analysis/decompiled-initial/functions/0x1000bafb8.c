// rea decompile_all
// name: FUN_1000bafb8
// address: 0x1000bafb8
// body: available
// range: 0x1000bafb8-0x1000bb247 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000bafb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  VerticalAlignment VVar5;
  undefined *puVar6;
  Set _all;
  Set SVar7;
  Alignment AVar8;
  Set SVar9;
  OS_os_log *pOVar10;
  long extraout_x8;
  undefined *unaff_x20;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  double dVar17;
  undefined8 uStack_110;
  undefined1 auStack_108 [8];
  undefined8 uStack_100;
  undefined1 auStack_f8 [8];
  undefined8 auStack_f0 [2];
  undefined *local_e0 [2];
  undefined8 local_d0 [3];
  undefined8 auStack_b8 [11];
  
  puVar4 = &DAT_100550a08;
  FUN_100002f94(&DAT_100550a08,&DAT_1004224f8);
  VVar5.unknown = puVar4;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = -extraout_x8;
  SVar9.unknown = (undefined *)((long)local_e0 + lVar3);
  VVar5 = SwiftUI::VerticalAlignment::get_center(VVar5);
  *(undefined **)SVar9.unknown = VVar5.unknown;
  *(undefined8 *)((long)local_e0 + lVar3 + 8) = 0x4028000000000000;
  *(undefined1 *)((long)local_d0 + lVar3) = 0;
  puVar6 = &DAT_100550a10;
  FUN_100002f94(&DAT_100550a10,&DAT_100422500);
  SVar7.unknown = unaff_x20;
  FUN_1000bb248((long)SVar9.unknown + (long)*(int *)(puVar6 + 0x2c));
  _all = SwiftUI::Edge::Set::get_horizontal(SVar7);
  uVar11 = 0x4032000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  SVar7.unknown = &DAT_100550a18;
  uVar14 = param_3;
  uVar13 = param_4;
  uVar15 = param_5;
  FUN_100002f94(&DAT_100550a18,&DAT_100434260);
  puVar1 = (undefined1 *)((long)SVar9.unknown + (long)*(int *)(SVar7.unknown + 0x24));
  *puVar1 = (char)_all.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar11;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  SVar7 = SwiftUI::Edge::Set::get_vertical(SVar7);
  uVar12 = 0x4028000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar7.unknown);
  AVar8.unknown = &DAT_100550a20;
  puVar6 = &DAT_100422510;
  uVar11 = uVar13;
  uVar16 = uVar15;
  FUN_100002f94();
  puVar1 = (undefined1 *)((long)SVar9.unknown + (long)*(int *)(AVar8.unknown + 0x24));
  *puVar1 = (char)SVar7.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar12;
  *(undefined8 *)(puVar1 + 0x10) = uVar14;
  *(undefined8 *)(puVar1 + 0x18) = uVar13;
  *(undefined8 *)(puVar1 + 0x20) = uVar15;
  puVar1[0x28] = 0;
  dVar17 = *(double *)(unaff_x20 + 0x38);
  AVar8 = SwiftUI::Alignment::get_center(AVar8);
  if (NAN(dVar17)) {
    local_e0[0] = puVar6;
    local_e0[1] = AVar8.unknown;
    static_(extension_in_os):__C.os_log_type_t.fault.getter_:___C.os_log_type_t::_get_fault();
    pOVar10 = SwiftUI::Log::get_runtimeIssuesLog((Log)(__int8)AVar8.unknown);
    os::_os_log(AVar8.unknown,0x100000000,pOVar10,"Contradictory frame constraints specified.",0x2a,
                2,PTR___swiftEmptyArrayStorage_100524190);
    AVar8.unknown = local_e0[1];
    puVar6 = local_e0[0];
  }
  *(undefined **)((long)auStack_f0 + lVar3) = AVar8.unknown;
  *(undefined **)((long)auStack_f0 + lVar3 + 8) = puVar6;
  auStack_f8[lVar3] = 1;
  *(undefined8 *)((long)&uStack_100 + lVar3) = 0;
  auStack_108[lVar3] = 1;
  *(undefined8 *)((long)&uStack_110 + lVar3) = 0;
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  puVar2 = (undefined8 *)((long)SVar9.unknown + (long)*(int *)(puVar4 + 0x24));
  puVar2[9] = auStack_b8[6];
  puVar2[8] = auStack_b8[5];
  puVar2[0xb] = auStack_b8[8];
  puVar2[10] = auStack_b8[7];
  puVar2[0xd] = auStack_b8[10];
  puVar2[0xc] = auStack_b8[9];
  puVar2[1] = local_d0[1];
  *puVar2 = local_d0[0];
  puVar2[3] = auStack_b8[0];
  puVar2[2] = local_d0[2];
  puVar2[5] = auStack_b8[2];
  puVar2[4] = auStack_b8[1];
  puVar2[7] = auStack_b8[4];
  puVar2[6] = auStack_b8[3];
  FUN_10035042c(param_1);
  FUN_10002a29c(SVar9.unknown,&DAT_100550a08,&DAT_1004224f8);
  SVar7 = SwiftUI::Edge::Set::get_bottom(SVar9);
  uVar13 = 0x4032000000000000;
  uVar14 = auStack_b8[1];
  SwiftUI::EdgeInsets::init((CGFloat)SVar7.unknown);
  puVar4 = &DAT_100550a28;
  FUN_100002f94(&DAT_100550a28,&DAT_100422518);
  puVar1 = (undefined1 *)(param_1 + *(int *)(puVar4 + 0x24));
  *puVar1 = (char)SVar7.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar13;
  *(undefined8 *)(puVar1 + 0x10) = uVar14;
  *(undefined8 *)(puVar1 + 0x18) = uVar11;
  *(undefined8 *)(puVar1 + 0x20) = uVar16;
  puVar1[0x28] = 0;
  return;
}

