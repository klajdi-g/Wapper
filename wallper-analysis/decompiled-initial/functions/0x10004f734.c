// rea decompile_all
// name: FUN_10004f734
// address: 0x10004f734
// body: available
// range: 0x10004f734-0x10004fa2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10004f734(undefined1 *param_1,CGFloat param_2,long param_3)

{
  long lVar1;
  Design DVar2;
  undefined *puVar3;
  Alignment AVar4;
  undefined *puVar5;
  char *pcVar6;
  LocalizedStringKey LVar7;
  Text TVar8;
  undefined7 extraout_var;
  Font FVar9;
  Text TVar10;
  void *pvVar11;
  Text TVar12;
  uint uVar13;
  undefined *puVar14;
  ulong uVar15;
  void *pvVar16;
  undefined8 uVar17;
  ulong uVar18;
  long extraout_x8;
  undefined8 uVar19;
  String stringLiteral;
  undefined8 uStack_e0;
  undefined2 auStack_d8 [4];
  undefined1 auStack_d0 [8];
  undefined8 local_c8;
  undefined8 uStack_c0;
  uint local_b4;
  undefined8 local_b0;
  uint local_a4;
  undefined8 local_a0;
  uint local_98;
  char local_91;
  byte local_90;
  undefined7 uStack_8f;
  byte local_88;
  undefined8 local_80;
  byte local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar3 = &DAT_10054a828;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = -extraout_x8;
  uVar19 = *(undefined8 *)(param_3 + 0xb8);
  puVar3 = &DAT_10041e620;
  _swift_getKeyPath(&DAT_10041e620);
  AVar4.unknown = &DAT_10041e648;
  _swift_getKeyPath();
  Combine::Published::_get_subscript(&local_90,uVar19,puVar3,AVar4.unknown);
  _swift_release(puVar3);
  _swift_release();
  local_98 = (uint)local_90;
  SwiftUI::Alignment::get_center(AVar4);
  uVar17 = 0;
  SwiftUI::_FrameLayout::_init((Alignment)0x4028000000000000);
  local_a0 = CONCAT71(uStack_8f,local_90);
  local_a4 = (uint)local_88;
  local_b0 = local_80;
  local_b4 = (uint)local_78;
  local_c8 = uStack_68;
  uStack_c0 = local_70;
  puVar3 = &DAT_10041e260;
  _swift_getKeyPath(&DAT_10041e260);
  puVar5 = &DAT_10041e288;
  _swift_getKeyPath();
  puVar14 = puVar5;
  Combine::Published::_get_subscript(&local_91,uVar19,puVar3);
  uVar13 = (uint)puVar14;
  _swift_release(puVar3);
  _swift_release(puVar5);
  if (local_91 == '\x01') {
    pvVar11 = (void *)0x80000001004dc520;
    pcVar6 = (char *)0xd000000000000011;
  }
  else {
    pcVar6 = (char *)0x6f74207463616552;
    pvVar11 = (void *)0xee00636973756d20;
  }
  stringLiteral.bridgeObject = pvVar11;
  stringLiteral.str = pcVar6;
  LVar7 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  *(undefined2 *)((long)auStack_d8 + lVar1) = 0x100;
  *(undefined8 *)((long)&uStack_e0 + lVar1) = 0;
  uVar15 = (ulong)(uVar13 & 1);
  TVar8 = SwiftUI::Text::_init(LVar7);
  SwiftUI::Font::Weight::get_medium((Weight)TVar8.unknown);
  DVar2 = SwiftUI::Font::Design::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,DVar2.value) + -8) + 0x38))
            (auStack_d0 + lVar1,1,1,CONCAT71(extraout_var,DVar2.value));
  FVar9 = SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(auStack_d0 + lVar1,&DAT_10054a828,&DAT_10041e3c0);
  TVar12 = TVar8;
  pvVar16 = pvVar11;
  uVar18 = uVar15;
  TVar10 = SwiftUI::Text::_font(FVar9.unknown);
  _swift_release(FVar9.unknown);
  FUN_100025b34(TVar8.unknown,pvVar11,uVar15);
  _swift_bridgeObjectRelease(uVar17);
  *param_1 = (char)local_98;
  *(undefined8 *)(param_1 + 8) = local_a0;
  param_1[0x10] = (char)local_a4;
  *(undefined8 *)(param_1 + 0x18) = local_b0;
  param_1[0x20] = (char)local_b4;
  *(undefined8 *)(param_1 + 0x28) = uStack_c0;
  *(undefined8 *)(param_1 + 0x30) = local_c8;
  *(undefined **)(param_1 + 0x38) = TVar10.unknown;
  *(undefined **)(param_1 + 0x40) = TVar12.unknown;
  param_1[0x48] = (char)pvVar16;
  *(ulong *)(param_1 + 0x50) = uVar18;
  FUN_100007b14(TVar10.unknown,TVar12.unknown,pvVar16);
  _swift_bridgeObjectRetain(uVar18);
  FUN_100025b34(TVar10.unknown,TVar12.unknown,pvVar16);
  _swift_bridgeObjectRelease(uVar18);
  return;
}

