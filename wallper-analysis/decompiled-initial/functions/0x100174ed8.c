// rea decompile_all
// name: FUN_100174ed8
// address: 0x100174ed8
// body: available
// range: 0x100174ed8-0x10017504f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100174ed8(void)

{
  undefined *puVar1;
  Dictionary<undefined,undefined> DVar2;
  NSString *pNVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ID unaff_x20;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long local_38;
  
  objc_stub::deviceDescription(unaff_x20);
  FUN_100008054(0);
  FUN_1000036d0(&DAT_10054a5e0,FUN_100008054,&TargetProtocolConformanceDescriptor_10041b40c);
  puVar1 = PTR___type_metadata_for_Any_100524178;
  DVar2 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  uVar6 = 0;
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  if (*(long *)(DVar2.unknown + 0x10) != 0) {
    _swift_bridgeObjectRetain(DVar2.unknown);
    thunk_FUN_1000046e0(pNVar3);
    if ((uVar6 & 1) != 0) {
      FUN_1000280d4(*(long *)(DVar2.unknown + 0x38) + (long)pNVar3 * 0x20,&local_50);
      _swift_bridgeObjectRelease_n(DVar2.unknown,2);
      if (local_38 != 0) {
        uVar4 = 0;
        FUN_100044230(0,&DAT_100558e60,&PTR__OBJC_CLASS___NSNumber_10053f960);
        puVar5 = &local_58;
        _swift_dynamicCast(puVar5,&local_50,puVar1 + 8,uVar4,6);
        if ((int)puVar5 != 0) {
          return local_58;
        }
        return 0;
      }
      goto LAB_100175020;
    }
    _swift_bridgeObjectRelease(DVar2.unknown);
  }
  uStack_48 = 0;
  local_50 = 0;
  local_38 = 0;
  uStack_40 = 0;
  _swift_bridgeObjectRelease(DVar2.unknown);
LAB_100175020:
  FUN_10002a29c(&local_50,&DAT_10054d428,&DAT_100420300);
  return 0;
}

