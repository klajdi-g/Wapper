// rea decompile_all
// name: FUN_1000ccbfc
// address: 0x1000ccbfc
// body: available
// range: 0x1000ccbfc-0x1000ccd8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000cccac */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined8 FUN_1000ccbfc(void)

{
  undefined8 uVar1;
  ID self;
  undefined *puVar2;
  UUID UVar3;
  undefined *puVar4;
  NSDictionary *pNVar5;
  
  self = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  if (DAT_100551168 != -1) {
    _swift_once(&DAT_100551168,FUN_1000c7ea8);
  }
  uVar1 = DAT_100577c08;
  puVar2 = &DAT_100561110;
  FUN_100002f94(&DAT_100561110,&DAT_100422d10);
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 2;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  Swift::AnyHashable::_init
            (puVar2 + 0x20,puVar2,PTR___type_metadata_for_Swift_String_100523a98,
             PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100523aa8);
  UVar3 = Foundation::UUID::typeMetadataAccessor();
  *(undefined **)(puVar2 + 0x60) = UVar3.unknown;
  FUN_1000ccd8c(puVar2 + 0x48);
  (**(code **)(*(long *)(UVar3.unknown + -8) + 0x10))();
  puVar4 = puVar2;
  FUN_100006798(puVar2);
  _swift_setDeallocating(puVar2);
  FUN_10002a29c(puVar2 + 0x20,&DAT_10054a120,&DAT_10041a1c8);
  pNVar5 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(puVar4);
  NSNotificationCenter::postNotificationName_object_userInfo_(self,uVar1,0,pNVar5);
  return 0;
}

