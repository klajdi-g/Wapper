// rea decompile_all
// name: FUN_1002ee288
// address: 0x1002ee288
// body: available
// range: 0x1002ee288-0x1002ee5bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002ee288(undefined8 *param_1,long param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  LocalizedStringKey LVar7;
  Button<Text> BVar8;
  State SVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long extraout_x8;
  ulong uVar12;
  long extraout_x12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined1 *puVar16;
  String stringLiteral;
  String stringLiteral_00;
  undefined8 uStack_d0;
  undefined2 auStack_c8 [4];
  undefined1 auStack_c0 [8];
  long local_b8;
  long local_b0;
  long local_a8;
  undefined *local_a0;
  uint local_94;
  undefined8 local_90;
  undefined *puStack_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar5 = 0;
  FUN_1002f58d4();
  lVar13 = *(long *)(lVar5 + -8);
  lVar15 = *(long *)(lVar13 + 0x40);
  local_b8 = lVar5;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar16 = auStack_c0 + -(lVar15 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_10054b518;
  FUN_100002f94(&DAT_10054b518,&DAT_10042e600);
  local_a0 = puVar6;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar5 = (long)puVar16 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_a8 = lVar5;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar5 = lVar5 - extraout_x12;
  uVar11 = 0x80000001004e5e10;
  stringLiteral.bridgeObject = (void *)0x80000001004e5e10;
  stringLiteral.str = (char *)0xd000000000000010;
  local_b0 = lVar5;
  LVar7 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  *(undefined2 *)(lVar5 + -8) = 0x100;
  *(undefined8 *)(lVar5 + -0x10) = 0;
  param_4 = param_4 & 1;
  puStack_88 = (undefined *)SwiftUI::Text::_init(LVar7);
  stringLiteral_00.bridgeObject = (void *)0xa800000000000000;
  stringLiteral_00.str = (char *)0xa680e27261656c43;
  local_94 = param_4;
  local_90 = uVar11;
  local_80 = param_5;
  LVar7 = SwiftUI::LocalizedStringKey::init(stringLiteral_00);
  FUN_100029504(param_2,puVar16,FUN_1002f58d4);
  uVar12 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar14 = uVar12 + 0x10 & (uVar12 ^ 0xffffffffffffffff);
  puVar6 = &DAT_1005397d0;
  _swift_allocObject(&DAT_1005397d0,uVar14 + lVar15,uVar12 | 7);
  lVar5 = local_b0;
  FUN_100007e64(puVar16,puVar6 + uVar14,FUN_1002f58d4);
  BVar8 = (extension_SwiftUI)::SwiftUI::Button::_init(LVar7);
  FUN_1002ea5f0();
  lVar13 = *(long *)(BVar8.unknown + 0x10);
  _swift_bridgeObjectRelease();
  if (lVar13 == 0) {
    puVar1 = (undefined8 *)(param_2 + *(int *)(local_b8 + 0x30));
    uStack_68 = puVar1[1];
    local_70 = *puVar1;
    SVar9.unknown = &DAT_10054ba40;
    FUN_100002f94(&DAT_10054ba40,&DAT_100423be0);
    SwiftUI::State::get_wrappedValue(SVar9);
    bVar4 = local_78 == 0;
  }
  else {
    bVar4 = false;
  }
  puVar6 = &DAT_10042fb88;
  _swift_getKeyPath();
  puVar10 = &DAT_1005397f8;
  _swift_allocObject(&DAT_1005397f8,0x11,7);
  lVar13 = local_a8;
  puVar10[0x10] = bVar4;
  puVar1 = (undefined8 *)(lVar5 + *(int *)(local_a0 + 0x24));
  *puVar1 = puVar6;
  puVar1[1] = thunk_FUN_10006bca0;
  puVar1[2] = puVar10;
  FUN_1000087e4(lVar5,local_a8,&DAT_10054b518,&DAT_10042e600);
  uVar3 = local_80;
  puVar10 = puStack_88;
  uVar11 = local_90;
  uVar2 = local_94;
  *param_1 = puStack_88;
  param_1[1] = local_90;
  *(char *)(param_1 + 2) = (char)local_94;
  param_1[3] = local_80;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  puVar6 = &DAT_10055a528;
  FUN_100002f94(&DAT_10055a528,&DAT_10042e458);
  FUN_1000087e4(lVar13,(long)param_1 + (long)*(int *)(puVar6 + 0x40),&DAT_10054b518,&DAT_10042e600);
  FUN_100007b14(puVar10,uVar11,uVar2);
  _swift_bridgeObjectRetain(uVar3);
  FUN_10002a29c(lVar5,&DAT_10054b518,&DAT_10042e600);
  FUN_10002a29c(lVar13,&DAT_10054b518,&DAT_10042e600);
  FUN_100025b34(puVar10,uVar11,uVar2);
  _swift_bridgeObjectRelease(uVar3);
  return;
}

