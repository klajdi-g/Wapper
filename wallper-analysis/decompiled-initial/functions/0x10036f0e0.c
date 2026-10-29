// rea decompile_all
// name: FUN_10036f0e0
// address: 0x10036f0e0
// body: available
// range: 0x10036f0e0-0x10036f3d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


String FUN_10036f0e0(void)

{
  String SVar1;
  String SVar2;
  void *pvVar3;
  code *pcVar4;
  long lVar5;
  Locale LVar6;
  LocalizationValue LVar7;
  char *pcVar8;
  void *pvVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar10;
  long lVar11;
  long unaff_x20;
  ulong uVar12;
  LocalizationValue LVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  String stringLiteral;
  String SVar19;
  String stringLiteral_00;
  String SVar20;
  String SVar21;
  long lStack_b0;
  LocalizationValue local_a8;
  long local_a0;
  void *local_98;
  char *pcStack_90;
  long local_88;
  char *local_80;
  void *pvStack_78;
  String local_70;
  
  lVar5 = 0;
  FUN_1001d59ac();
  lVar18 = *(long *)(lVar5 + -8);
  local_88 = lVar5;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar18 + 0x40));
  lVar17 = (long)&lStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar16 = lVar17 - extraout_x12;
  LVar6 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar6.unknown + -8) + 0x40));
  lVar10 = lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  LVar7 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar7.unknown + -8) + 0x40));
  LVar13.unknown = (undefined *)(lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  stringLiteral.bridgeObject = (void *)0x80000001004e6bc0;
  stringLiteral.str = (char *)0xd00000000000002d;
  LVar7 = LocalizationValue::_init(stringLiteral);
  Foundation::Locale::get_current((Locale)LVar7.unknown);
  SVar19 = (extension_Foundation)::Swift::String::_init(LVar13,(Locale)0x0);
  lVar5 = 0;
  local_70 = SVar19;
  FUN_100387eec();
  lVar5 = *(long *)(unaff_x20 + *(int *)(lVar5 + 0x14));
  uVar12 = *(ulong *)(lVar5 + 0x10);
  if (1 < uVar12) {
    uVar14 = 0;
    local_a8.unknown = LVar13.unknown;
    local_a0 = lVar10;
    do {
      local_98 = SVar19.bridgeObject;
      pcStack_90 = SVar19.str;
      if (uVar12 == uVar14) {
        return SVar19;
      }
      if (*(ulong *)(lVar5 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10036f3d0);
        (*pcVar4)();
      }
      lVar10 = lVar5 + ((ulong)*(byte *)(lVar18 + 0x50) + 0x20 &
                       ((ulong)*(byte *)(lVar18 + 0x50) ^ 0xffffffffffffffff));
      lVar15 = *(long *)(lVar18 + 0x48);
      FUN_100029504(lVar10 + lVar15 * uVar14,lVar16,FUN_1001d59ac);
      uVar14 = uVar14 + 1;
      lVar11 = *(long *)(*(long *)(lVar16 + *(int *)(local_88 + 0x24)) + 0x10);
      FUN_100029548(lVar16,FUN_1001d59ac);
      SVar19.bridgeObject = local_98;
      SVar19.str = pcStack_90;
    } while (lVar11 != 0);
    lVar16 = *(long *)(lVar5 + 0x10);
    uVar12 = 0xffffffffffffffff;
    do {
      SVar2.bridgeObject = local_98;
      SVar2.str = pcStack_90;
      if (uVar12 - lVar16 == -1) {
        return SVar2;
      }
      uVar12 = uVar12 + 1;
      if (*(ulong *)(lVar5 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10036f3d4);
        (*pcVar4)();
      }
      FUN_100029504(lVar10,lVar17,FUN_1001d59ac);
      lVar18 = *(long *)(*(long *)(lVar17 + *(int *)(local_88 + 0x24)) + 0x10);
      FUN_100029548(lVar17,FUN_1001d59ac);
      LVar7.unknown = local_a8.unknown;
      lVar10 = lVar10 + lVar15;
    } while (lVar18 == 0);
    stringLiteral_00.bridgeObject = (void *)0x80000001004e6bf0;
    stringLiteral_00.str = &DAT_d000000000000030;
    LVar13 = LocalizationValue::_init(stringLiteral_00);
    Foundation::Locale::get_current((Locale)LVar13.unknown);
    pcVar8 = (char *)0x0;
    pvVar9 = (void *)0x0;
    SVar19 = (extension_Foundation)::Swift::String::_init(LVar7,(Locale)0x0);
    local_80 = (char *)0x20;
    pvStack_78 = (void *)0xe100000000000000;
    SVar20.bridgeObject = pvVar9;
    SVar20.str = pcVar8;
    Swift::String::append(SVar19,SVar20);
    _swift_bridgeObjectRelease(SVar19.bridgeObject);
    pvVar3 = pvStack_78;
    SVar1.bridgeObject = pvStack_78;
    SVar1.str = local_80;
    SVar21.bridgeObject = pvVar9;
    SVar21.str = pcVar8;
    Swift::String::append(SVar1,SVar21);
    _swift_bridgeObjectRelease(pvVar3);
    SVar19 = local_70;
  }
  return SVar19;
}

