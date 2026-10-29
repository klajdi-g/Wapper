// rea decompile_all
// name: FUN_1002c1d8c
// address: 0x1002c1d8c
// body: available
// range: 0x1002c1d8c-0x1002c2127 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002c1d8c(undefined8 *param_1,long param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  LocalizedStringKey LVar5;
  ButtonRole BVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar10;
  long extraout_x12;
  byte bVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  String stringLiteral;
  String stringLiteral_00;
  undefined8 uStack_c0;
  undefined2 auStack_b8 [4];
  LocalizedStringKey aLStack_b0 [3];
  long local_98;
  undefined *local_90;
  uint local_84;
  undefined8 local_80;
  undefined *puStack_78;
  undefined8 local_70;
  long local_68;
  undefined8 uVar9;
  
  lVar3 = 0;
  FUN_1002c3644();
  lVar12 = *(long *)(lVar3 + -8);
  lVar14 = *(long *)(lVar12 + 0x40);
  local_98 = lVar3;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar15 = (long)aLStack_b0 - (lVar14 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_10054dee8;
  FUN_100002f94(&DAT_10054dee8,&DAT_10041ed20);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_10054b518;
  FUN_100002f94(&DAT_10054b518,&DAT_10042e600);
  local_90 = puVar4;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar3 = (lVar15 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_68 = lVar3;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar3 = lVar3 - extraout_x12;
  uVar8 = 0x80000001004e4060;
  stringLiteral.bridgeObject = (void *)0x80000001004e4060;
  stringLiteral.str = (char *)0xd000000000000012;
  LVar5 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  *(undefined2 *)(lVar3 + -8) = 0x100;
  *(undefined8 *)(lVar3 + -0x10) = 0;
  param_4 = param_4 & 1;
  puStack_78 = (undefined *)SwiftUI::Text::_init(LVar5);
  stringLiteral_00.bridgeObject = (void *)0xe600000000000000;
  stringLiteral_00.str = (char *)0x6b6e696c6e55;
  uVar9 = 0xe600000000000000;
  local_84 = param_4;
  local_80 = uVar8;
  local_70 = param_5;
  aLStack_b0[2] = SwiftUI::LocalizedStringKey::init(stringLiteral_00);
  aLStack_b0[1].unknown = (undefined *)uVar9;
  SwiftUI::ButtonRole::get_destructive((ButtonRole)aLStack_b0[2].unknown);
  BVar6 = SwiftUI::ButtonRole::typeMetadataAccessor();
  (**(code **)(*(long *)(BVar6.unknown + -8) + 0x38))(lVar15 - extraout_x8,0,1,BVar6.unknown);
  FUN_100029504(param_2,lVar15,FUN_1002c3644);
  uVar10 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar13 = uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff);
  puVar4 = &DAT_100537e80;
  _swift_allocObject(&DAT_100537e80,uVar13 + lVar14,uVar10 | 7);
  FUN_100007e64(lVar15,puVar4 + uVar13,FUN_1002c3644);
  (extension_SwiftUI)::SwiftUI::Button::_init(aLStack_b0[2]);
  bVar11 = 1;
  if ((((*(byte *)(param_2 + *(int *)(local_98 + 0x1c)) & 1) == 0) &&
      (*(char *)(param_2 + *(int *)(local_98 + 0x20)) != '\x01')) &&
     (*(char *)(param_2 + *(int *)(local_98 + 0x24)) == '\x01')) {
    if (*(char *)(param_2 + *(int *)(local_98 + 0x14)) == '\x01') {
      bVar11 = *(byte *)(param_2 + *(int *)(local_98 + 0x18)) ^ 1;
    }
    else {
      bVar11 = 0;
    }
  }
  puVar4 = &DAT_10042e428;
  _swift_getKeyPath();
  puVar7 = &DAT_100537ea8;
  _swift_allocObject(&DAT_100537ea8,0x11,7);
  puVar7[0x10] = bVar11 & 1;
  puVar1 = (undefined8 *)(lVar3 + *(int *)(local_90 + 0x24));
  *puVar1 = puVar4;
  puVar1[1] = FUN_10006bca0;
  puVar1[2] = puVar7;
  lVar12 = local_68;
  FUN_1000087e4(lVar3,local_68,&DAT_10054b518,&DAT_10042e600);
  uVar9 = local_70;
  puVar7 = puStack_78;
  uVar8 = local_80;
  uVar2 = local_84;
  *param_1 = puStack_78;
  param_1[1] = local_80;
  *(char *)(param_1 + 2) = (char)local_84;
  param_1[3] = local_70;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  puVar4 = &DAT_10055a528;
  FUN_100002f94(&DAT_10055a528,&DAT_10042e458);
  FUN_1000087e4(lVar12,(long)param_1 + (long)*(int *)(puVar4 + 0x40),&DAT_10054b518,&DAT_10042e600);
  FUN_100007b14(puVar7,uVar8,uVar2);
  _swift_bridgeObjectRetain(uVar9);
  FUN_10002a29c(lVar3,&DAT_10054b518,&DAT_10042e600);
  FUN_10002a29c(lVar12,&DAT_10054b518,&DAT_10042e600);
  FUN_100025b34(puVar7,uVar8,uVar2);
  _swift_bridgeObjectRelease(uVar9);
  return;
}

