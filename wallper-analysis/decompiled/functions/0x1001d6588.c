// rea decompile_all
// name: FUN_1001d6588
// address: 0x1001d6588
// body: available
// range: 0x1001d6588-0x1001d682b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001d6828 to 0x10025eed8 FUN_10025eed8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


String FUN_1001d6588(undefined8 param_1,void *param_2,StringInterpolation param_3)

{
  byte bVar1;
  Locale LVar2;
  LocalizationValue LVar3;
  StringInterpolation SVar4;
  long lVar5;
  LocalizationValue LVar6;
  void *pvVar7;
  char *pcVar8;
  void *pvVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  char *pcVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  char *local_50;
  void *pvStack_48;
  
  LVar2 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  LVar3 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar3.unknown + -8) + 0x40));
  LVar3.unknown =
       (undefined *)
       ((long)&local_50 +
       (-(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) - (extraout_x8 + 0xfU & 0xfffffffffffffff0)));
  SVar4 = LocalizationValue::StringInterpolation::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(SVar4.unknown + -8) + 0x40));
  lVar5 = 0;
  FUN_10025ee04();
  bVar1 = *(byte *)(unaff_x20 + *(int *)(lVar5 + 0x1c));
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      pcVar10 = (char *)0x1;
LAB_1001d6814:
      FUN_10025eed8(pcVar10);
      SVar15.bridgeObject = param_2;
      SVar15.str = pcVar10;
      return SVar15;
    }
    pcVar10 = *(char **)(*(long *)(unaff_x20 + *(int *)(lVar5 + 0x20)) + 0x10);
    LocalizationValue::StringInterpolation::_init(0xb,1);
    LocalizationValue::StringInterpolation::_appendLiteral
              ((String)(ZEXT816(0xe000000000000000) << 0x40),param_3);
    SVar4.unknown = (undefined *)0xe400000000000000;
    local_50 = pcVar10;
    LocalizationValue::StringInterpolation::_appendInterpolation
              (&local_50,0x646c6c25,0xe400000000000000,PTR___type_metadata_for_Swift_Int_100523bd8,
               PTR___protocol_witness_table_for_Swift_Int___Foundation__FormatSpecifiable_in_Foundation_100520e60
              );
    SVar11.bridgeObject = (void *)0xeb00000000737265;
    SVar11.str = (char *)0x7061706c6c617720;
    LocalizationValue::StringInterpolation::_appendLiteral(SVar11,SVar4);
    LVar6 = LocalizationValue::_init(LVar3.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
    Foundation::Locale::get_current((Locale)LVar6.unknown);
    SVar12 = (extension_Foundation)::Swift::String::_init(LVar3,(Locale)0x0);
  }
  else {
    if (bVar1 != 2) {
      pcVar10 = (char *)0x3;
      goto LAB_1001d6814;
    }
    LocalizationValue::StringInterpolation::_init(6,1);
    LocalizationValue::StringInterpolation::_appendLiteral
              ((String)(ZEXT816(0xe000000000000000) << 0x40),param_3);
    local_50 = *(char **)(*(long *)(unaff_x20 + *(int *)(lVar5 + 0x34)) + 0x10);
    SVar4.unknown = (undefined *)0xe400000000000000;
    LocalizationValue::StringInterpolation::_appendInterpolation
              (&local_50,0x646c6c25,0xe400000000000000,PTR___type_metadata_for_Swift_Int_100523bd8,
               PTR___protocol_witness_table_for_Swift_Int___Foundation__FormatSpecifiable_in_Foundation_100520e60
              );
    SVar13.bridgeObject = (void *)0xe600000000000000;
    SVar13.str = (char *)0x73656d697420;
    LocalizationValue::StringInterpolation::_appendLiteral(SVar13,SVar4);
    LVar6 = LocalizationValue::_init(LVar3.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
    Foundation::Locale::get_current((Locale)LVar6.unknown);
    pcVar8 = (char *)0x0;
    pvVar9 = (void *)0x0;
    SVar12 = (extension_Foundation)::Swift::String::_init(LVar3,(Locale)0x0);
    pcVar10 = (char *)0x2;
    pvVar7 = SVar12.bridgeObject;
    FUN_10025eed8();
    SVar14.bridgeObject = (void *)0xa400000000000000;
    SVar14.str = (char *)0x20b7c220;
    SVar16.bridgeObject = pvVar9;
    SVar16.str = pcVar8;
    local_50 = pcVar10;
    pvStack_48 = pvVar7;
    Swift::String::append(SVar14,SVar16);
    SVar17.bridgeObject = pvVar9;
    SVar17.str = pcVar8;
    Swift::String::append(SVar12,SVar17);
    _swift_bridgeObjectRelease(SVar12.bridgeObject);
    SVar12.bridgeObject = pvStack_48;
    SVar12.str = local_50;
  }
  return SVar12;
}

