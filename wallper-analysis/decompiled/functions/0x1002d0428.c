// rea decompile_all
// name: FUN_1002d0428
// address: 0x1002d0428
// body: available
// range: 0x1002d0428-0x1002d070b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002d0428(void)

{
  String SVar1;
  code *pcVar2;
  StringInterpolation SVar3;
  undefined *puVar4;
  undefined *puVar5;
  State SVar6;
  char *pcVar7;
  void *pvVar8;
  long extraout_x8;
  long lVar9;
  long *unaff_x20;
  String SVar10;
  String SVar11;
  String stringLiteral;
  undefined1 auStack_60 [15];
  byte local_51;
  byte local_50;
  undefined7 uStack_4f;
  void *pvStack_48;
  
  SVar3 = SwiftUI::LocalizedStringKey::StringInterpolation::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(SVar3.unknown + -8) + 0x40));
  lVar9 = *unaff_x20;
  if (lVar9 == 0) {
    FUN_1001373cc(0);
    FUN_1000036d0(&DAT_100553de0,FUN_1001373cc,&TargetProtocolConformanceDescriptor_100426ef0);
    SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002d070c);
    (*pcVar2)();
  }
  puVar4 = &DAT_10042eb38;
  _swift_getKeyPath(&DAT_10042eb38);
  puVar5 = &DAT_10042eb60;
  _swift_getKeyPath();
  _swift_retain_n(lVar9,2);
  SVar3.unknown = puVar5;
  Combine::Published::_get_subscript(&local_50);
  _swift_release(lVar9);
  _swift_release(puVar4);
  _swift_release(puVar5);
  if ((local_50 & 1) != 0) {
    SwiftUI::LocalizedStringKey::StringInterpolation::init(0x15,1);
    SVar10.bridgeObject = (void *)0xe800000000000000;
    SVar10.str = (char *)0x206e6f6973726556;
    SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral(SVar10,SVar3);
    puVar4 = &DAT_10042ec00;
    _swift_getKeyPath(&DAT_10042ec00);
    puVar5 = &DAT_10042ec28;
    _swift_getKeyPath();
    SVar3.unknown = puVar5;
    Combine::Published::_get_subscript(&local_50,lVar9,puVar4);
    _swift_release(puVar4);
    _swift_release(puVar5);
    _swift_release(lVar9);
    SVar1.str._1_7_ = uStack_4f;
    SVar1.str._0_1_ = local_50;
    SVar1.bridgeObject = pvStack_48;
    SwiftUI::LocalizedStringKey::StringInterpolation::appendInterpolation(SVar1,SVar3);
    _swift_bridgeObjectRelease(pvStack_48);
    SVar11.bridgeObject = (void *)0xed0000656c62616c;
    SVar11.str = (char *)0x6961766120736920;
    SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral(SVar11,SVar3);
    SwiftUI::LocalizedStringKey::init
              ((StringInterpolation)(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)));
    return;
  }
  pvStack_48 = (void *)unaff_x20[0x14];
  local_50 = (byte)unaff_x20[0x13];
  uStack_4f = (undefined7)((ulong)unaff_x20[0x13] >> 8);
  SVar6.unknown = &DAT_10055a960;
  FUN_100002f94(&DAT_10055a960,&DAT_10042ecb0);
  SwiftUI::State::get_wrappedValue(SVar6);
  if ((local_51 == 2) || ((local_51 & 1) != 0)) {
    puVar4 = &DAT_10042ecb8;
    _swift_getKeyPath(&DAT_10042ecb8);
    puVar5 = &DAT_10042ece0;
    _swift_getKeyPath(&DAT_10042ece0);
    Combine::Published::_get_subscript(&local_50,lVar9,puVar4,puVar5);
    _swift_release(puVar4);
    _swift_release(puVar5);
    _swift_release(lVar9);
    if ((local_50 & 1) == 0) {
      pvStack_48 = (void *)unaff_x20[0x14];
      local_50 = (byte)unaff_x20[0x13];
      uStack_4f = (undefined7)((ulong)unaff_x20[0x13] >> 8);
      SwiftUI::State::get_wrappedValue(SVar6);
      if ((local_51 & 1) == 0) {
        pcVar7 = (char *)0x6365686320746f4e;
        pvVar8 = (void *)0xef7465792064656b;
        goto LAB_1002d06a8;
      }
    }
    pcVar7 = (char *)0x6164206f74207055;
    pvVar8 = (void *)0xea00000000006574;
  }
  else {
    _swift_release(lVar9);
    pvVar8 = (void *)0x80000001004e4b70;
    pcVar7 = (char *)0xd000000000000020;
  }
LAB_1002d06a8:
  stringLiteral.bridgeObject = pvVar8;
  stringLiteral.str = pcVar7;
  SwiftUI::LocalizedStringKey::init(stringLiteral);
  return;
}

