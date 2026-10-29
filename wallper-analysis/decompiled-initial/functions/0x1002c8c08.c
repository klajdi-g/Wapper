// rea decompile_all
// name: FUN_1002c8c08
// address: 0x1002c8c08
// body: available
// range: 0x1002c8c08-0x1002c8faf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002c8c08(undefined8 *param_1,long param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  LocalizedStringKey LVar7;
  URL UVar8;
  URL UVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar12;
  long extraout_x12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  String stringLiteral;
  String stringLiteral_00;
  undefined8 uStack_c0;
  undefined2 auStack_b8 [4];
  undefined8 *apuStack_b0 [2];
  long local_a0;
  undefined *local_98;
  undefined *local_90;
  uint local_84;
  undefined8 local_80;
  undefined *puStack_78;
  undefined8 local_70;
  long local_68;
  
  puVar5 = &DAT_100553d90;
  apuStack_b0[1] = param_1;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  local_98 = (undefined *)((long)apuStack_b0 - extraout_x8);
  FUN_100170d98();
  lVar14 = *(long *)(lVar6 + -8);
  lVar13 = *(long *)(lVar14 + 0x40);
  local_a0 = lVar6;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar16 = ((long)apuStack_b0 - extraout_x8) - (lVar13 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_10054b518;
  FUN_100002f94(&DAT_10054b518,&DAT_10042e600);
  local_90 = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar6 = lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_68 = lVar6;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar6 = lVar6 - extraout_x12;
  uVar11 = 0x80000001004e4080;
  stringLiteral.bridgeObject = (void *)0x80000001004e4080;
  stringLiteral.str = (char *)0xd000000000000013;
  LVar7 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  *(undefined2 *)(lVar6 + -8) = 0x100;
  *(undefined8 *)(lVar6 + -0x10) = 0;
  param_4 = param_4 & 1;
  puStack_78 = (undefined *)SwiftUI::Text::_init(LVar7);
  stringLiteral_00.bridgeObject = (void *)0xe400000000000000;
  stringLiteral_00.str = (char *)0x776f6853;
  local_84 = param_4;
  local_80 = uVar11;
  local_70 = param_5;
  LVar7 = SwiftUI::LocalizedStringKey::init(stringLiteral_00);
  FUN_100029504(param_2,lVar16,FUN_100170d98);
  uVar12 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar15 = uVar12 + 0x10 & (uVar12 ^ 0xffffffffffffffff);
  puVar5 = &DAT_100538008;
  _swift_allocObject(&DAT_100538008,uVar15 + lVar13,uVar12 | 7);
  FUN_100007e64(lVar16,puVar5 + uVar15,FUN_100170d98);
  (extension_SwiftUI)::SwiftUI::Button::_init(LVar7);
  puVar5 = local_98;
  FUN_1000087e4(param_2 + *(int *)(local_a0 + 0x24),local_98,&DAT_100553d90,&DAT_10041bf10);
  UVar8 = Foundation::URL::typeMetadataAccessor();
  lVar13 = *(long *)(UVar8.unknown + -8);
  UVar9.unknown = puVar5;
  (**(code **)(lVar13 + 0x30))(puVar5,1,UVar8.unknown);
  if ((int)UVar9.unknown == 1) {
    FUN_10002a29c(puVar5,&DAT_100553d90,&DAT_10041bf10);
    bVar4 = true;
  }
  else {
    bVar4 = Foundation::URL::get_isFileURL(UVar9);
    (**(code **)(lVar13 + 8))(puVar5,UVar8.unknown);
    bVar4 = !bVar4;
  }
  puVar5 = &DAT_10042e608;
  _swift_getKeyPath();
  puVar10 = &DAT_100538030;
  _swift_allocObject(&DAT_100538030,0x11,7);
  puVar10[0x10] = bVar4;
  puVar1 = (undefined8 *)(lVar6 + *(int *)(local_90 + 0x24));
  *puVar1 = puVar5;
  puVar1[1] = FUN_10006bca0;
  puVar1[2] = puVar10;
  lVar13 = local_68;
  FUN_1000087e4(lVar6,local_68,&DAT_10054b518,&DAT_10042e600);
  uVar3 = local_70;
  puVar10 = puStack_78;
  uVar11 = local_80;
  uVar2 = local_84;
  puVar1 = apuStack_b0[1];
  *apuStack_b0[1] = puStack_78;
  apuStack_b0[1][1] = local_80;
  *(char *)(apuStack_b0[1] + 2) = (char)local_84;
  apuStack_b0[1][3] = local_70;
  apuStack_b0[1][4] = 0;
  *(undefined1 *)(apuStack_b0[1] + 5) = 1;
  puVar5 = &DAT_10055a528;
  FUN_100002f94(&DAT_10055a528,&DAT_10042e458);
  FUN_1000087e4(lVar13,(long)puVar1 + (long)*(int *)(puVar5 + 0x40),&DAT_10054b518,&DAT_10042e600);
  FUN_100007b14(puVar10,uVar11,uVar2);
  _swift_bridgeObjectRetain(uVar3);
  FUN_10002a29c(lVar6,&DAT_10054b518,&DAT_10042e600);
  FUN_10002a29c(lVar13,&DAT_10054b518,&DAT_10042e600);
  FUN_100025b34(puVar10,uVar11,uVar2);
  _swift_bridgeObjectRelease(uVar3);
  return;
}

