// rea decompile_all
// name: FUN_1002d0db0
// address: 0x1002d0db0
// body: available
// range: 0x1002d0db0-0x1002d102b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002d0db0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  LocalizedStringKey LVar5;
  Text TVar6;
  Text TVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  char *pcVar14;
  long lVar15;
  undefined8 uVar16;
  String stringLiteral;
  String stringLiteral_00;
  byte local_61;
  
  lVar15 = *(long *)(param_2 + 0x10);
  if (lVar15 == 0) {
    FUN_100231228(0);
    FUN_1000036d0(&DAT_10054d6a8,FUN_100231228,&TargetProtocolConformanceDescriptor_10042bb2c);
    SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1002d102c);
    (*pcVar1)();
  }
  puVar2 = &DAT_10042eab0;
  _swift_getKeyPath(&DAT_10042eab0);
  puVar3 = &DAT_10042ead8;
  _swift_getKeyPath();
  _swift_retain(lVar15);
  puVar10 = puVar3;
  Combine::Published::_get_subscript(&local_61);
  uVar9 = (uint)puVar10;
  _swift_release(puVar2);
  _swift_release(puVar3);
  _swift_release(lVar15);
  if (local_61 < 2) {
    pcVar4 = (char *)0xd000000000000033;
    pcVar14 = "ew version from wallper.app.";
    if (local_61 != 0) {
      pcVar4 = (char *)0xd00000000000005c;
      pcVar14 = "o it wasn\'t installed.";
    }
  }
  else if (local_61 == 2) {
    pcVar4 = (char *)0xd000000000000046;
    pcVar14 = "er than the one you have.";
  }
  else {
    if (local_61 != 3) {
      TVar6.unknown = (undefined *)0x0;
      stringLiteral.bridgeObject = (void *)0x0;
      uVar11 = 0;
      uVar16 = 0;
      uVar13 = param_5;
      goto LAB_1002d0ee8;
    }
    pcVar4 = (char *)0xd000000000000039;
    pcVar14 = "How often the wallpaper changes";
  }
  stringLiteral.bridgeObject = (void *)((ulong)pcVar14 | 0x8000000000000000);
  stringLiteral.str = pcVar4;
  LVar5 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  uVar11 = (ulong)(uVar9 & 1);
  TVar6 = SwiftUI::Text::_init(LVar5);
  uVar9 = (uint)uVar11;
  uVar11 = uVar11 & 0xff;
  uVar13 = param_5;
  FUN_100007b14();
  _swift_bridgeObjectRetain(param_5);
  uVar16 = param_5;
LAB_1002d0ee8:
  uVar8 = 0x80000001004e4ad0;
  stringLiteral_00.bridgeObject = (void *)0x80000001004e4ad0;
  stringLiteral_00.str = (char *)0xd000000000000056;
  LVar5 = SwiftUI::LocalizedStringKey::init(stringLiteral_00);
  uVar12 = (ulong)(uVar9 & 1);
  TVar7 = SwiftUI::Text::_init(LVar5);
  FUN_10006953c(TVar6.unknown,stringLiteral.bridgeObject,uVar11,uVar16);
  FUN_100007b14(TVar7.unknown,uVar8,uVar12);
  _swift_bridgeObjectRetain(uVar13);
  FUN_100069568(TVar6.unknown,stringLiteral.bridgeObject,uVar11,uVar16);
  *param_1 = TVar6.unknown;
  param_1[1] = stringLiteral.bridgeObject;
  param_1[2] = uVar11;
  param_1[3] = uVar16;
  param_1[4] = TVar7.unknown;
  param_1[5] = uVar8;
  *(char *)(param_1 + 6) = (char)uVar12;
  param_1[7] = uVar13;
  FUN_100025b34(TVar7.unknown,uVar8,uVar12);
  _swift_bridgeObjectRelease(uVar13);
  FUN_100069568(TVar6.unknown,stringLiteral.bridgeObject,uVar11,uVar16);
  return;
}

