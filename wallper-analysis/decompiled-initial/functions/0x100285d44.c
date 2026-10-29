// rea decompile_all
// name: FUN_100285d44
// address: 0x100285d44
// body: available
// range: 0x100285d44-0x10028626b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100285d44(_StringGuts param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ID IVar4;
  char *pcVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  Date DVar9;
  Date DVar10;
  NSDate *pNVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  long extraout_x8;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  undefined1 auStack_a0 [8];
  long local_98;
  undefined1 auStack_90 [24];
  String local_78;
  
  DVar9 = Foundation::Date::typeMetadataAccessor();
  lVar16 = *(long *)(DVar9.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar16 + 0x40));
  puVar14 = DAT_100558f70.unknown;
  if ((DAT_100558f70.unknown != (undefined *)0x0) &&
     (((param_1.unknown == DAT_100558f68.unknown && DAT_100558f70.unknown == param_2.unknown ||
       (bVar8 = Swift::_stringCompareWithSmolCheck
                          (param_1,param_2,(_StringComparisonResult)(__int8)DAT_100558f68.unknown),
       bVar8)) && (uVar15 = DAT_100558fa0, DAT_100558fa8 != '\x01')))) {
    if (DAT_100558f90 != -1) {
      _swift_once(&DAT_100558f90,FUN_10028548c);
    }
    puVar14 = (undefined *)0x0;
    _swift_beginAccess(&DAT_100558f98,auStack_90,0);
    if ((long)uVar15 < *(long *)(DAT_100558f98 + 0x10)) {
      lVar1 = DAT_100558f78 + 1;
      if (SCARRY8(DAT_100558f78,1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100286230);
        (*pcVar7)();
      }
      DAT_100558f78 = lVar1;
      if (DAT_100558f80 != -1) {
        _swift_once(&DAT_100558f80,FUN_100285684);
      }
      IVar4 = DAT_100558f88;
      DVar10 = Foundation::Date::init();
      pNVar11 = Foundation::Date::_bridgeToObjectiveC(DVar10);
      (**(code **)(lVar16 + 8))
                (auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),DVar9.unknown);
      objc_stub::stringFromDate_(IVar4);
      local_78 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      SVar20.bridgeObject = (void *)0xe100000000000000;
      SVar20.str = (char *)0x20;
      SVar25.bridgeObject = puVar14;
      SVar25.str = (char *)pNVar11;
      Swift::String::append(SVar20,SVar25);
      SVar18.bridgeObject = param_2.unknown;
      SVar18.str = param_1.unknown;
      SVar26.bridgeObject = puVar14;
      SVar26.str = (char *)pNVar11;
      Swift::String::append(SVar18,SVar26);
      SVar19.bridgeObject = (void *)0xa500000000000000;
      SVar19.str = (char *)0x97c35b2020;
      SVar27.bridgeObject = puVar14;
      SVar27.str = (char *)pNVar11;
      Swift::String::append(SVar19,SVar27);
      local_98 = DAT_100558f78 + 1;
      if (SCARRY8(DAT_100558f78,1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10028624c);
        (*pcVar7)();
      }
      SVar20 = Swift::CustomStringConvertible::get_description();
      SVar28.bridgeObject = puVar14;
      SVar28.str = (char *)pNVar11;
      Swift::String::append(SVar20,SVar28);
      _swift_bridgeObjectRelease(SVar20.bridgeObject);
      SVar21.bridgeObject = (void *)0xe100000000000000;
      SVar21.str = (char *)0x5d;
      SVar29.bridgeObject = puVar14;
      SVar29.str = (char *)pNVar11;
      Swift::String::append(SVar21,SVar29);
      pcVar5 = local_78.str;
      pvVar6 = local_78.bridgeObject;
      _swift_beginAccess(&DAT_100558f98,&local_78,0x21,0);
      uVar12 = DAT_100558f98;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar13 = DAT_100558f98 & 1;
      DAT_100558f98 = uVar12;
      if (uVar13 == 0) {
        FUN_100287260();
        DAT_100558f98 = uVar12;
      }
      if ((long)uVar15 < 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100286268);
        (*pcVar7)();
      }
      if (*(ulong *)(DAT_100558f98 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10028626c);
        (*pcVar7)();
      }
      lVar16 = DAT_100558f98 + uVar15 * 0x10;
      uVar17 = *(undefined8 *)(lVar16 + 0x28);
      *(char **)(lVar16 + 0x20) = pcVar5;
      *(void **)(lVar16 + 0x28) = pvVar6;
      _swift_endAccess(&local_78);
      _swift_bridgeObjectRelease(uVar17);
      return;
    }
  }
  puVar3 = DAT_100558f70.unknown;
  DAT_100558f68.unknown = param_1.unknown;
  DAT_100558f70.unknown = param_2.unknown;
  _swift_bridgeObjectRelease(puVar3);
  lVar1 = DAT_100558f80;
  DAT_100558f78 = 0;
  _swift_bridgeObjectRetain(param_2.unknown);
  if (lVar1 != -1) {
    _swift_once(&DAT_100558f80,FUN_100285684);
  }
  IVar4 = DAT_100558f88;
  DVar10 = Foundation::Date::init();
  pNVar11 = Foundation::Date::_bridgeToObjectiveC(DVar10);
  (**(code **)(lVar16 + 8))(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),DVar9.unknown);
  objc_stub::stringFromDate_(IVar4);
  local_78 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  SVar22.bridgeObject = (void *)0xe100000000000000;
  SVar22.str = (char *)0x20;
  SVar30.bridgeObject = puVar14;
  SVar30.str = (char *)pNVar11;
  Swift::String::append(SVar22,SVar30);
  SVar23.bridgeObject = param_2.unknown;
  SVar23.str = param_1.unknown;
  SVar31.bridgeObject = puVar14;
  SVar31.str = (char *)pNVar11;
  Swift::String::append(SVar23,SVar31);
  SVar24.bridgeObject = param_4;
  SVar24.str = param_3;
  SVar32.bridgeObject = puVar14;
  SVar32.str = (char *)pNVar11;
  Swift::String::append(SVar24,SVar32);
  pcVar5 = local_78.str;
  pvVar6 = local_78.bridgeObject;
  if (DAT_100558f90 != -1) {
    _swift_once(&DAT_100558f90,FUN_10028548c);
  }
  _swift_beginAccess(&DAT_100558f98,&local_78,0x21,0);
  uVar15 = DAT_100558f98;
  _swift_bridgeObjectRetain(pvVar6);
  uVar13 = uVar15;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar12 = uVar15;
  if ((uVar13 & 1) == 0) {
    uVar12 = 0;
    DAT_100558f98 = uVar15;
    FUN_1001c432c(0,*(long *)(uVar15 + 0x10) + 1,1,uVar15);
  }
  uVar15 = *(ulong *)(uVar12 + 0x10);
  uVar13 = uVar12;
  if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar15) {
    uVar13 = (ulong)(1 < *(ulong *)(uVar12 + 0x18));
    DAT_100558f98 = uVar12;
    FUN_1001c432c(uVar13,uVar15 + 1,1,uVar12);
  }
  *(ulong *)(uVar13 + 0x10) = uVar15 + 1;
  lVar16 = uVar13 + uVar15 * 0x10;
  *(char **)(lVar16 + 0x20) = pcVar5;
  *(void **)(lVar16 + 0x28) = pvVar6;
  DAT_100558f98 = uVar13;
  _swift_endAccess(&local_78);
  FUN_100288cec(pcVar5,pvVar6);
  _swift_bridgeObjectRelease(pvVar6);
  uVar15 = *(ulong *)(DAT_100558f98 + 0x10);
  DAT_100558fa0 = uVar15 - 1;
  DAT_100558fa8 = '\0';
  lVar16 = DAT_100558fa0;
  if (5000 < uVar15) {
    lVar1 = uVar15 - 5000;
    _swift_beginAccess(&DAT_100558f98,&local_78,0x21,0);
    FUN_10028829c(0,lVar1,FUN_1001c432c,FUN_1002881cc);
    _swift_endAccess(&local_78);
    lVar2 = lVar1;
    if (DAT_100558fa8 != '\x01') {
      lVar2 = DAT_100558fa0;
    }
    lVar16 = lVar2 - lVar1;
    if (SBORROW8(lVar2,lVar1)) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100286214);
      (*pcVar7)();
    }
  }
  DAT_100558fa0 = lVar16;
  DAT_100558fa8 = 0;
  return;
}

