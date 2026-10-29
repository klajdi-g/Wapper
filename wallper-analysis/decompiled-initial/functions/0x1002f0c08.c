// rea decompile_all
// name: FUN_1002f0c08
// address: 0x1002f0c08
// body: available
// range: 0x1002f0c08-0x1002f0e7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002f0c08(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  LocalizedStringKey LVar4;
  undefined *puVar5;
  undefined8 uVar6;
  uint uVar8;
  long extraout_x8;
  ulong uVar9;
  long lVar10;
  long extraout_x12;
  code *pcVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  String stringLiteral;
  String stringLiteral_00;
  undefined8 uStack_c0;
  undefined2 auStack_b8 [4];
  undefined8 local_b0;
  uint local_a4;
  undefined8 local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined8 local_68;
  undefined8 uVar7;
  
  lVar2 = 0;
  local_88 = param_2;
  local_70 = param_3;
  local_68 = param_4;
  FUN_1002f58d4();
  uVar8 = (uint)param_4;
  lVar2 = *(long *)(lVar2 + -8);
  lVar13 = *(long *)(lVar2 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = (long)&local_b0 - (lVar13 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_10054def0;
  FUN_100002f94(&DAT_10054def0,&DAT_100422df0);
  local_78 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_78 + 0x40));
  lVar10 = lVar12 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_80 = lVar10;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = lVar10 - extraout_x12;
  uVar6 = 0xee007265646e6946;
  stringLiteral.bridgeObject = (void *)0xee007265646e6946;
  stringLiteral.str = (char *)0x206e6920776f6853;
  LVar4 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  *(undefined2 *)(lVar10 + -8) = 0x100;
  *(undefined8 *)(lVar10 + -0x10) = 0;
  uVar8 = uVar8 & 1;
  puStack_98 = (undefined *)SwiftUI::Text::_init(LVar4);
  stringLiteral_00.bridgeObject = (void *)0xe400000000000000;
  stringLiteral_00.str = (char *)0x776f6853;
  uVar7 = 0xe400000000000000;
  local_a4 = uVar8;
  local_a0 = uVar6;
  local_90 = param_5;
  LVar4 = SwiftUI::LocalizedStringKey::init(stringLiteral_00);
  local_b0 = uVar7;
  FUN_100029504(local_88,lVar12,FUN_1002f58d4);
  uVar9 = (ulong)*(byte *)(lVar2 + 0x50);
  uVar14 = uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff);
  lVar2 = local_70;
  _swift_allocObject(local_70,uVar14 + lVar13,uVar9 | 7);
  FUN_100007e64(lVar12,lVar2 + uVar14,FUN_1002f58d4);
  (extension_SwiftUI)::SwiftUI::Button::_init(LVar4);
  lVar12 = local_78;
  lVar2 = local_80;
  pcVar11 = *(code **)(local_78 + 0x10);
  (*pcVar11)(local_80,lVar10,puVar3);
  uVar7 = local_90;
  puVar1 = puStack_98;
  uVar6 = local_a0;
  uVar8 = local_a4;
  *param_1 = puStack_98;
  param_1[1] = local_a0;
  *(char *)(param_1 + 2) = (char)local_a4;
  param_1[3] = local_90;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  puVar5 = &DAT_10055aaa0;
  FUN_100002f94(&DAT_10055aaa0,&DAT_10042fb50);
  (*pcVar11)((long)param_1 + (long)*(int *)(puVar5 + 0x40),lVar2,puVar3);
  FUN_100007b14(puVar1,uVar6,uVar8);
  pcVar11 = *(code **)(lVar12 + 8);
  _swift_bridgeObjectRetain(uVar7);
  (*pcVar11)(lVar10,puVar3);
  (*pcVar11)(lVar2,puVar3);
  FUN_100025b34(puVar1,uVar6,uVar8);
  _swift_bridgeObjectRelease(uVar7);
  return;
}

