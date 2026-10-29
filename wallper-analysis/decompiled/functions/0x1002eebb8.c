// rea decompile_all
// name: FUN_1002eebb8
// address: 0x1002eebb8
// body: available
// range: 0x1002eebb8-0x1002eeea7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002eebb8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  LocalizedStringKey LVar6;
  Button<Text> BVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long extraout_x8;
  ulong uVar10;
  long extraout_x12;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  ulong uVar14;
  String stringLiteral;
  String stringLiteral_00;
  undefined8 uStack_b0;
  undefined2 auStack_a8 [4];
  undefined1 auStack_a0 [8];
  long local_98;
  uint local_8c;
  undefined8 local_88;
  undefined *puStack_80;
  undefined8 local_78;
  long local_70;
  undefined *local_68;
  
  lVar4 = 0;
  FUN_1002f58d4();
  lVar13 = *(long *)(lVar4 + -8);
  lVar11 = *(long *)(lVar13 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar12 = auStack_a0 + -(lVar11 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_10054b518;
  FUN_100002f94(&DAT_10054b518,&DAT_10042e600);
  local_68 = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar4 = (long)puVar12 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_70 = lVar4;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar4 = lVar4 - extraout_x12;
  uVar9 = 0x80000001004e5d20;
  stringLiteral.bridgeObject = (void *)0x80000001004e5d20;
  stringLiteral.str = (char *)0xd000000000000014;
  local_98 = lVar4;
  LVar6 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  *(undefined2 *)(lVar4 + -8) = 0x100;
  *(undefined8 *)(lVar4 + -0x10) = 0;
  param_4 = param_4 & 1;
  puStack_80 = (undefined *)SwiftUI::Text::_init(LVar6);
  stringLiteral_00.bridgeObject = (void *)0xa9000000000000a6;
  stringLiteral_00.str = (char *)0x80e26574656c6544;
  local_8c = param_4;
  local_88 = uVar9;
  local_78 = param_5;
  LVar6 = SwiftUI::LocalizedStringKey::init(stringLiteral_00);
  FUN_100029504(param_2,puVar12,FUN_1002f58d4);
  uVar10 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar14 = uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff);
  puVar5 = &DAT_100539780;
  _swift_allocObject(&DAT_100539780,uVar14 + lVar11,uVar10 | 7);
  FUN_100007e64(puVar12,puVar5 + uVar14,FUN_1002f58d4);
  lVar4 = local_98;
  BVar7 = (extension_SwiftUI)::SwiftUI::Button::_init(LVar6);
  FUN_1002ea5f0();
  lVar13 = *(long *)(BVar7.unknown + 0x10);
  _swift_bridgeObjectRelease();
  puVar5 = &DAT_10042fb88;
  _swift_getKeyPath();
  puVar8 = &DAT_1005397a8;
  _swift_allocObject(&DAT_1005397a8,0x11,7);
  lVar11 = local_70;
  puVar8[0x10] = lVar13 == 0;
  puVar1 = (undefined8 *)(lVar4 + *(int *)(local_68 + 0x24));
  *puVar1 = puVar5;
  puVar1[1] = FUN_10006bca0;
  puVar1[2] = puVar8;
  FUN_1000087e4(lVar4,local_70,&DAT_10054b518,&DAT_10042e600);
  uVar3 = local_78;
  puVar8 = puStack_80;
  uVar9 = local_88;
  uVar2 = local_8c;
  *param_1 = puStack_80;
  param_1[1] = local_88;
  *(char *)(param_1 + 2) = (char)local_8c;
  param_1[3] = local_78;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  puVar5 = &DAT_10055a528;
  FUN_100002f94(&DAT_10055a528,&DAT_10042e458);
  FUN_1000087e4(lVar11,(long)param_1 + (long)*(int *)(puVar5 + 0x40),&DAT_10054b518,&DAT_10042e600);
  FUN_100007b14(puVar8,uVar9,uVar2);
  _swift_bridgeObjectRetain(uVar3);
  FUN_10002a29c(lVar4,&DAT_10054b518,&DAT_10042e600);
  FUN_10002a29c(lVar11,&DAT_10054b518,&DAT_10042e600);
  FUN_100025b34(puVar8,uVar9,uVar2);
  _swift_bridgeObjectRelease(uVar3);
  return;
}

