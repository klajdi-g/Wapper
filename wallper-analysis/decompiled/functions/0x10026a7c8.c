// rea decompile_all
// name: FUN_10026a7c8
// address: 0x10026a7c8
// body: available
// range: 0x10026a7c8-0x10026abd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


String FUN_10026a7c8(long *param_1)

{
  String *pSVar1;
  undefined8 *puVar2;
  char *pcVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  Locale LVar7;
  LocalizationValue LVar8;
  CharacterSet CVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  CharacterSet CVar13;
  LocalizationValue LVar14;
  undefined8 uVar15;
  ulong uVar16;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar18;
  long extraout_x8_01;
  long unaff_x20;
  long lVar19;
  char *pcVar20;
  long lVar21;
  undefined *puVar22;
  undefined1 *puVar23;
  String SVar24;
  String SVar25;
  undefined1 auStack_a0 [8];
  undefined1 *local_98;
  LocalizationValue local_90;
  long local_88;
  undefined8 local_80;
  String local_78;
  void *pvVar17;
  
  LVar7 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar7.unknown + -8) + 0x40));
  puVar23 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  LVar8 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar8.unknown + -8) + 0x40));
  puVar18 = puVar23 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_90.unknown = puVar18;
  CVar9 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar21 = *(long *)(CVar9.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar21 + 0x40));
  lVar5 = _TtC7Wallper17VideoLibraryStore::titleCache;
  _swift_beginAccess(unaff_x20 + _TtC7Wallper17VideoLibraryStore::titleCache,&local_78,0x20,0);
  lVar19 = *(long *)(unaff_x20 + lVar5);
  lVar12 = *param_1;
  uVar4 = param_1[1];
  if (*(long *)(lVar19 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar19);
    lVar10 = lVar12;
    uVar16 = uVar4;
    FUN_10000464c();
    if ((uVar16 & 1) != 0) {
      pSVar1 = (String *)(*(long *)(lVar19 + 0x38) + lVar10 * 0x10);
      SVar24 = *pSVar1;
      _swift_bridgeObjectRetain(pSVar1->bridgeObject);
      _swift_endAccess(&local_78);
      _swift_bridgeObjectRelease(lVar19);
      return SVar24;
    }
    _swift_bridgeObjectRelease(lVar19);
  }
  local_98 = puVar23;
  local_88 = lVar12;
  _swift_endAccess(&local_78);
  if (DAT_100557fe0 != -1) {
    _swift_once(&DAT_100557fe0,FUN_10025cd74);
  }
  uVar15 = DAT_100577d70;
  puVar22 = &DAT_10042d2e0;
  _swift_getKeyPath(&DAT_10042d2e0);
  puVar11 = &DAT_10042d308;
  _swift_getKeyPath(&DAT_10042d308);
  Combine::Published::_get_subscript(&local_78,uVar15,puVar22,puVar11);
  _swift_release(puVar22);
  _swift_release(puVar11);
  pcVar6 = local_78.str;
  pcVar20 = pcVar6;
  if (*(long *)(local_78.str + 0x10) != 0) {
    _swift_bridgeObjectRetain(local_78.str);
    lVar12 = local_88;
    uVar16 = uVar4;
    FUN_10000464c();
    if ((uVar16 & 1) == 0) {
      _swift_bridgeObjectRelease(pcVar6);
    }
    else {
      pSVar1 = (String *)(*(long *)(pcVar6 + 0x38) + lVar12 * 0x10);
      pcVar3 = pSVar1->str;
      pcVar20 = pSVar1->bridgeObject;
      SVar24 = *pSVar1;
      _swift_bridgeObjectRetain(pcVar20);
      _swift_bridgeObjectRelease_n(pcVar6,2);
      uVar16 = (ulong)pcVar3 & 0xffffffffffff;
      if (((ulong)pcVar20 & 0x2000000000000000) != 0) {
        uVar16 = (ulong)pcVar20 >> 0x38 & 0xf;
      }
      if (uVar16 != 0) goto LAB_10026ab28;
    }
  }
  _swift_bridgeObjectRelease(pcVar20);
  lVar12 = 0;
  FUN_10040211c();
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar12 + 0x3c));
  CVar13.unknown = (undefined *)puVar2[1];
  if (CVar13.unknown == (undefined *)0x0) {
    local_78.str = (char *)0x0;
    puVar22 = (undefined *)0xe000000000000000;
  }
  else {
    local_78.str = (char *)*puVar2;
    puVar22 = CVar13.unknown;
  }
  local_78.bridgeObject = puVar22;
  _swift_bridgeObjectRetain();
  Foundation::CharacterSet::get_whitespacesAndNewlines(CVar13);
  FUN_100026df4();
  SVar24 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters
                     ((CharacterSet)(puVar18 + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0)));
  pvVar17 = SVar24.bridgeObject;
  (**(code **)(lVar21 + 8))(puVar18 + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0),CVar9.unknown);
  _swift_bridgeObjectRelease(puVar22);
  uVar16 = (ulong)SVar24.str & 0xffffffffffff;
  if (((ulong)pvVar17 & 0x2000000000000000) != 0) {
    uVar16 = (ulong)pvVar17 >> 0x38 & 0xf;
  }
  if (uVar16 == 0) {
    _swift_bridgeObjectRelease(pvVar17);
    LVar8.unknown = local_90.unknown;
    SVar24.bridgeObject = (void *)0xed00006f65646956;
    SVar24.str = (char *)0x2065746176697250;
    LVar14 = LocalizationValue::_init(SVar24);
    Foundation::Locale::get_current((Locale)LVar14.unknown);
    SVar24 = (extension_Foundation)::Swift::String::_init(LVar8,(Locale)0x0);
  }
  else {
    SVar25 = Swift::String::lowercased(SVar24);
    _swift_bridgeObjectRelease(pvVar17);
    local_78 = SVar25;
    SVar24 = (extension_Foundation)::Swift::StringProtocol::get_capitalized();
    _swift_bridgeObjectRelease(SVar25.bridgeObject);
  }
LAB_10026ab28:
  _swift_bridgeObjectRetain(SVar24.bridgeObject);
  _swift_beginAccess(unaff_x20 + lVar5,&local_78,0x21,0);
  _swift_bridgeObjectRetain(uVar4);
  uVar15 = *(undefined8 *)(unaff_x20 + lVar5);
  _swift_isUniquelyReferenced_nonNull_native(uVar15);
  local_80 = *(undefined8 *)(unaff_x20 + lVar5);
  *(undefined8 *)(unaff_x20 + lVar5) = 0x8000000000000000;
  FUN_10034091c(SVar24.str,SVar24.bridgeObject,local_88,uVar4,uVar15);
  _swift_bridgeObjectRelease(uVar4);
  *(undefined8 *)(unaff_x20 + lVar5) = local_80;
  _swift_endAccess(&local_78);
  return SVar24;
}

