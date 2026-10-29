// rea decompile_all
// name: FUN_10036b844
// address: 0x10036b844
// body: available
// range: 0x10036b844-0x10036bc6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10036b844(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined8 in_x3;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar7;
  long lVar8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar9;
  long unaff_x20;
  ulong uVar10;
  long lVar11;
  long lVar12;
  LocalizedStringKey LVar13;
  undefined1 *puVar14;
  long lVar15;
  long lVar16;
  String stringLiteral;
  String stringLiteral_00;
  undefined1 auStack_a0 [12];
  undefined4 local_94;
  undefined8 local_90;
  LocalizedStringKey local_88;
  LocalizedStringKey LStack_80;
  
  lVar2 = 0;
  FUN_10038ee8c();
  lVar15 = *(long *)(lVar2 + -8);
  lVar12 = *(long *)(lVar15 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar14 = auStack_a0 + -(lVar12 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  FUN_1001d537c();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar9 = (long)puVar14 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_10055ee88;
  FUN_100002f94(&DAT_10055ee88,&DAT_1004346b0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar11 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar16 = lVar11 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar8 = lVar16 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100521118)();
  LVar13.unknown = (undefined *)(lVar8 - extraout_x12_01);
  lVar2 = unaff_x20 + *(int *)(lVar2 + 0x14);
  uVar6 = 0x1d537c;
  FUN_100029504(lVar2,lVar9);
  lVar4 = lVar9;
  _swift_getEnumCaseMultiPayload(lVar9,lVar3);
  bVar1 = (int)lVar4 == 0;
  if (bVar1) {
    puVar5 = (undefined *)0xae00a680e2656d69;
    stringLiteral.bridgeObject = (void *)0xae00a680e2656d69;
    stringLiteral.str = (char *)0x542065676e616843;
    LStack_80 = SwiftUI::LocalizedStringKey::init(stringLiteral);
    local_94 = uVar6;
    local_90 = in_x3;
    local_88.unknown = puVar5;
    FUN_100029504();
    uVar7 = (ulong)*(byte *)(lVar15 + 0x50);
    uVar10 = uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff);
    puVar5 = &DAT_10053c5d8;
    _swift_allocObject(&DAT_10053c5d8,uVar10 + lVar12,uVar7 | 7);
    FUN_100007e64(puVar14,puVar5 + uVar10,FUN_10038ee8c);
    (extension_SwiftUI)::SwiftUI::Button::_init(LStack_80);
  }
  else {
    FUN_100029548(lVar9,FUN_1001d537c);
  }
  puVar5 = &DAT_10054def0;
  FUN_100002f94(&DAT_10054def0,&DAT_100422df0);
  (**(code **)(*(long *)(puVar5 + -8) + 0x38))(LVar13.unknown,!bVar1,1,puVar5);
  lVar4 = 0;
  FUN_1001d59ac();
  bVar1 = *(long *)(*(long *)(lVar2 + *(int *)(lVar4 + 0x24)) + 0x10) == 0;
  if (!bVar1) {
    stringLiteral_00.bridgeObject = (void *)0x80000001004e6cd0;
    stringLiteral_00.str = (char *)0xd000000000000010;
    local_88 = SwiftUI::LocalizedStringKey::init(stringLiteral_00);
    LStack_80.unknown = LVar13.unknown;
    FUN_100029504(unaff_x20,puVar14,FUN_10038ee8c);
    uVar7 = (ulong)*(byte *)(lVar15 + 0x50);
    uVar10 = uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff);
    puVar5 = &DAT_10053c5b0;
    _swift_allocObject(&DAT_10053c5b0,uVar10 + lVar12,uVar7 | 7);
    FUN_100007e64(puVar14,puVar5 + uVar10,FUN_10038ee8c);
    LVar13.unknown = LStack_80.unknown;
    (extension_SwiftUI)::SwiftUI::Button::_init(local_88);
  }
  puVar5 = &DAT_10054def0;
  FUN_100002f94(&DAT_10054def0,&DAT_100422df0);
  (**(code **)(*(long *)(puVar5 + -8) + 0x38))(lVar8,bVar1,1,puVar5);
  FUN_1000087e4(LVar13.unknown,lVar16,&DAT_10055ee88,&DAT_1004346b0);
  FUN_1000087e4(lVar8,lVar11,&DAT_10055ee88,&DAT_1004346b0);
  FUN_1000087e4(lVar16,param_1,&DAT_10055ee88,&DAT_1004346b0);
  puVar5 = &DAT_10055ee90;
  FUN_100002f94(&DAT_10055ee90,&DAT_1004346b8);
  FUN_1000087e4(lVar11,param_1 + *(int *)(puVar5 + 0x30),&DAT_10055ee88,&DAT_1004346b0);
  FUN_10002a29c(lVar8,&DAT_10055ee88,&DAT_1004346b0);
  FUN_10002a29c(LVar13.unknown,&DAT_10055ee88,&DAT_1004346b0);
  FUN_10002a29c(lVar11,&DAT_10055ee88,&DAT_1004346b0);
  FUN_10002a29c(lVar16,&DAT_10055ee88,&DAT_1004346b0);
  return;
}

