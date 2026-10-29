// rea decompile_all
// name: FUN_1000cf7f8
// address: 0x1000cf7f8
// body: available
// range: 0x1000cf7f8-0x1000cf943 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

bool FUN_1000cf7f8(void)

{
  undefined1 auVar1 [16];
  bool bVar2;
  Locale LVar3;
  Locale LVar4;
  Locale LVar5;
  NSLocale *pNVar6;
  ID IVar7;
  undefined8 uVar8;
  ulong extraout_x1;
  long extraout_x8;
  void *pvVar9;
  long lVar10;
  String SVar11;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  void *pvStack_58;
  
  LVar3 = Foundation::Locale::typeMetadataAccessor();
  lVar10 = *(long *)(LVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar10 + 0x40));
  LVar4.unknown = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  LVar5 = Foundation::Locale::get_current(LVar4);
  pNVar6 = Foundation::Locale::_bridgeToObjectiveC(LVar5);
  (**(code **)(lVar10 + 8))
            ((long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0),LVar3.unknown);
  IVar7 = NSDateFormatter::dateFormatFromTemplate_options_locale_
                    ((ID)&_OBJC_CLASS___NSDateFormatter,LVar4.unknown,0,pNVar6);
  if (IVar7 == 0) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = extraout_x1;
    SVar11 = (String)(auVar1 << 0x40);
    pvVar9 = (void *)0xe000000000000000;
  }
  else {
    SVar11 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pvVar9 = SVar11.bridgeObject;
  }
  local_60 = SVar11.str;
  uVar8 = 0;
  local_70 = 0x61;
  uStack_68 = 0xe100000000000000;
  pvStack_58 = pvVar9;
  FUN_100026df4(0);
  bVar2 = (extension_Foundation)::Swift::StringProtocol::_contains
                    (&local_70,PTR___type_metadata_for_Swift_String_100523a98,
                     PTR___type_metadata_for_Swift_String_100523a98,uVar8,uVar8);
  _swift_bridgeObjectRelease(pvVar9);
  return bVar2;
}

