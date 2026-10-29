// rea decompile_all
// name: FUN_100292900
// address: 0x100292900
// body: available
// range: 0x100292900-0x100292aef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

String FUN_100292900(void)

{
  CharacterSet CVar1;
  Encoding EVar2;
  char *pcVar3;
  NSString *pNVar4;
  ulong uVar5;
  long lVar6;
  long extraout_x8;
  ulong uVar7;
  long lVar8;
  String SVar9;
  undefined1 auStack_80 [8];
  Encoding local_78;
  long lStack_70;
  ulong local_68;
  
  CVar1 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar8 = *(long *)(CVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar8 + 0x40));
  EVar2 = Encoding::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(EVar2.unknown + -8) + 0x40));
  uVar7 = (ulong)*(uint *)PTR__kIOMainPortDefault_100521998;
  pcVar3 = "IOPlatformExpertDevice";
  _IOServiceMatching("IOPlatformExpertDevice");
  _IOServiceGetMatchingService(uVar7,pcVar3);
  if ((int)uVar7 != 0) {
    pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    uVar5 = uVar7;
    _IORegistryEntryCreateCFProperty
              (uVar7,pNVar4,*(undefined8 *)PTR__kCFAllocatorDefault_1005215b0,0);
    if (uVar5 != 0) {
      EVar2.unknown = (undefined *)&local_78;
      local_68 = uVar5;
      _swift_dynamicCast(EVar2.unknown,&local_68,
                         PTR___type_metadata_for_Swift_AnyObject_100524170 + 8,
                         PTR___type_metadata_for_Foundation_Data_100520ae0,6);
      if (((ulong)EVar2.unknown & 1) != 0) {
        Encoding::_get_utf8(EVar2);
        EVar2.unknown = local_78.unknown;
        lVar6 = lStack_70;
        (extension_Foundation)::Swift::String::_init(local_78);
        if (lVar6 != 0) {
          Foundation::CharacterSet::get_controlCharacters((CharacterSet)EVar2.unknown);
          FUN_100026df4();
          SVar9 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters
                            ((CharacterSet)(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0))
                            );
          FUN_100093624(local_78.unknown,lStack_70);
          (**(code **)(lVar8 + 8))
                    (auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),CVar1.unknown);
          _swift_bridgeObjectRelease(lVar6);
          goto LAB_100292ac0;
        }
        FUN_100093624(local_78.unknown,lStack_70);
      }
    }
  }
  SVar9 = (String)(ZEXT816(0xe000000000000000) << 0x40);
LAB_100292ac0:
  _IOObjectRelease(uVar7);
  return SVar9;
}

