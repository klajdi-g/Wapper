// rea decompile_all
// name: FUN_1002f08c8
// address: 0x1002f08c8
// body: available
// range: 0x1002f08c8-0x1002f0b3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002f08c8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  LocalizedStringKey LVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long extraout_x8;
  ulong uVar9;
  long lVar10;
  long extraout_x12;
  ulong uVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  String stringLiteral;
  String stringLiteral_00;
  undefined8 uStack_b0;
  undefined2 auStack_a8 [4];
  LocalizedStringKey local_a0;
  uint local_94;
  undefined8 local_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  long local_68;
  
  lVar4 = 0;
  local_78 = param_2;
  FUN_1002f58d4();
  lVar4 = *(long *)(lVar4 + -8);
  lVar13 = *(long *)(lVar4 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = (long)&local_a0 - (lVar13 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_10054def0;
  FUN_100002f94(&DAT_10054def0,&DAT_100422df0);
  local_68 = *(long *)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_68 + 0x40));
  lVar10 = lVar14 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_70 = lVar10;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = lVar10 - extraout_x12;
  uVar8 = 0xea00000000006c6c;
  stringLiteral.bridgeObject = (void *)0xea00000000006c6c;
  stringLiteral.str = (char *)0x61206574656c6544;
  LVar6 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  *(undefined2 *)(lVar10 + -8) = 0x100;
  *(undefined8 *)(lVar10 + -0x10) = 0;
  param_4 = param_4 & 1;
  puStack_88 = (undefined *)SwiftUI::Text::_init(LVar6);
  stringLiteral_00.bridgeObject = (void *)0xe600000000000000;
  stringLiteral_00.str = (char *)0x6574656c6544;
  local_94 = param_4;
  local_90 = uVar8;
  local_80 = param_5;
  local_a0 = SwiftUI::LocalizedStringKey::init(stringLiteral_00);
  FUN_100029504(local_78,lVar14,FUN_1002f58d4);
  uVar9 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar11 = uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff);
  puVar7 = &DAT_1005396e0;
  _swift_allocObject(&DAT_1005396e0,uVar11 + lVar13,uVar9 | 7);
  FUN_100007e64(lVar14,puVar7 + uVar11,FUN_1002f58d4);
  (extension_SwiftUI)::SwiftUI::Button::_init(local_a0);
  lVar13 = local_68;
  lVar4 = local_70;
  pcVar12 = *(code **)(local_68 + 0x10);
  (*pcVar12)(local_70,lVar10,puVar5);
  uVar3 = local_80;
  puVar2 = puStack_88;
  uVar8 = local_90;
  uVar1 = local_94;
  *param_1 = puStack_88;
  param_1[1] = local_90;
  *(char *)(param_1 + 2) = (char)local_94;
  param_1[3] = local_80;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  puVar7 = &DAT_10055aaa0;
  FUN_100002f94(&DAT_10055aaa0,&DAT_10042fb50);
  (*pcVar12)((long)param_1 + (long)*(int *)(puVar7 + 0x40),lVar4,puVar5);
  FUN_100007b14(puVar2,uVar8,uVar1);
  pcVar12 = *(code **)(lVar13 + 8);
  _swift_bridgeObjectRetain(uVar3);
  (*pcVar12)(lVar10,puVar5);
  (*pcVar12)(lVar4,puVar5);
  FUN_100025b34(puVar2,uVar8,uVar1);
  _swift_bridgeObjectRelease(uVar3);
  return;
}

