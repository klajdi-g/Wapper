// rea decompile_all
// name: FUN_10036513c
// address: 0x10036513c
// body: available
// range: 0x10036513c-0x10036549b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10036513c(void)

{
  code *pcVar1;
  long lVar2;
  Locale LVar3;
  LocalizationValue LVar4;
  undefined *puVar5;
  undefined *puVar6;
  char *pcVar7;
  LocalizedStringKey LVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 in_x3;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar11;
  long unaff_x20;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  String stringLiteral;
  String SVar16;
  String stringLiteral_00;
  String local_90;
  char local_80 [8];
  undefined8 uStack_78;
  code *local_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  FUN_100386f18();
  lVar15 = *(long *)(lVar2 + -8);
  lVar13 = *(long *)(lVar15 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = (long)&local_90 - (lVar13 + 0xfU & 0xfffffffffffffff0);
  LVar3 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar3.unknown + -8) + 0x40));
  LVar4 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar4.unknown + -8) + 0x40));
  lVar2 = *(long *)(unaff_x20 + *(int *)(lVar2 + 0x1c));
  if (lVar2 != 0) {
    puVar5 = &DAT_100433b10;
    _swift_getKeyPath(&DAT_100433b10);
    puVar6 = &DAT_100433b38;
    _swift_getKeyPath(&DAT_100433b38);
    _swift_retain(lVar2);
    Combine::Published::_get_subscript(&local_90);
    _swift_release(puVar5);
    _swift_release(puVar6);
    _swift_release(lVar2);
    if ((byte)local_90.str == '\0') {
      stringLiteral.bridgeObject = (void *)0xef796c6c61756e61;
      stringLiteral.str = (char *)0x4d2065676e616843;
      LVar4 = LocalizationValue::_init(stringLiteral);
      Foundation::Locale::get_current((Locale)LVar4.unknown);
      in_x3 = 0;
      SVar16 = (extension_Foundation)::Swift::String::_init
                         ((undefined *)
                          ((lVar12 - (extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
                          (extraout_x8_00 + 0xfU & 0xfffffffffffffff0)),(Locale)0x0);
    }
    else {
      puVar5 = &DAT_100433b10;
      _swift_getKeyPath();
      puVar6 = &DAT_100433b38;
      _swift_getKeyPath(&DAT_100433b38);
      _swift_retain(lVar2);
      puVar9 = puVar5;
      Combine::Published::_get_subscript(&local_90);
      _swift_release(puVar5);
      _swift_release(puVar6);
      _swift_release(lVar2);
      pcVar7 = (char *)(ulong)(byte)local_90.str;
      FUN_100215cec();
      SVar16.bridgeObject = puVar9;
      SVar16.str = pcVar7;
    }
    FUN_100029504();
    uVar11 = (ulong)*(byte *)(lVar15 + 0x50);
    uVar14 = uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff);
    puVar5 = &DAT_10053c070;
    _swift_allocObject(&DAT_10053c070,uVar14 + lVar13,uVar11 | 7);
    FUN_100007e64(lVar12,puVar5 + uVar14,FUN_100386f18);
    uStack_78 = 0xe700000000000000;
    builtin_strncpy(local_80,"shuffle",8);
    local_70 = FUN_1003894e4;
    uVar10 = 0x80000001004dc6c0;
    stringLiteral_00.bridgeObject = (void *)0x80000001004dc6c0;
    stringLiteral_00.str = (char *)0xd00000000000001f;
    local_90 = SVar16;
    puStack_68 = puVar5;
    LVar8 = SwiftUI::LocalizedStringKey::init(stringLiteral_00);
    FUN_100002f94(&DAT_10055e218,&DAT_100433b58);
    FUN_1000087a0(&DAT_10055e220,&DAT_10055e218,&DAT_100433b58,
                  &TargetProtocolConformanceDescriptor_100433dd0);
    (extension_SwiftUI)::SwiftUI::View::_help(LVar8);
    _swift_release(puVar5);
    _swift_bridgeObjectRelease(SVar16.bridgeObject);
    _swift_bridgeObjectRelease(in_x3);
    _swift_bridgeObjectRelease(uVar10);
    return;
  }
  FUN_100226ac0(0);
  FUN_1000036d0(&DAT_10054aa48,FUN_100226ac0,&TargetProtocolConformanceDescriptor_10042b420);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10036549c);
  (*pcVar1)();
}

