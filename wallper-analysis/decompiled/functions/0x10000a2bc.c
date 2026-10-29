// rea decompile_all
// name: FUN_10000a2bc
// address: 0x10000a2bc
// body: available
// range: 0x10000a2bc-0x10000a473 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10000a2bc(long param_1,ulong param_2)

{
  ID IVar1;
  NSString *pNVar2;
  Dictionary<undefined,undefined> DVar3;
  Dictionary<undefined,undefined> DVar4;
  undefined *puVar5;
  ulong uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 local_68;
  State local_60;
  undefined8 uStack_58;
  
  FUN_100009f74();
  if (param_2 == 0) {
    uStack_58 = *(undefined8 *)(unaff_x20 + 0xe8);
    local_60.unknown = *(undefined **)(unaff_x20 + 0xe0);
    local_68 = 0x3ff0000000000000;
    goto LAB_10000a41c;
  }
  if (DAT_100557bb0 != -1) {
    _swift_once(&DAT_100557bb0,FUN_100233158);
  }
  IVar1 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar1 = NSUserDefaults::dictionaryForKey_(IVar1,pNVar2);
  if (IVar1 == 0) {
LAB_10000a3b4:
    DVar4.unknown = PTR___swiftEmptyArrayStorage_100524190;
    FUN_100005c3c();
  }
  else {
    DVar3 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
    DVar4 = DVar3;
    FUN_10017dc34();
    _swift_bridgeObjectRelease(DVar3.unknown);
    if (DVar4.unknown == (undefined *)0x0) goto LAB_10000a3b4;
  }
  uVar7 = 0x3ff0000000000000;
  if ((*(long *)(DVar4.unknown + 0x10) != 0) && (uVar6 = param_2, FUN_10000464c(), (uVar6 & 1) != 0)
     ) {
    uVar7 = *(undefined8 *)(*(long *)(DVar4.unknown + 0x38) + param_1 * 8);
  }
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(DVar4.unknown);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0xe8);
  local_60.unknown = *(undefined **)(unaff_x20 + 0xe0);
  local_68 = uVar7;
LAB_10000a41c:
  puVar5 = &DAT_10054ac50;
  FUN_100002f94(&DAT_10054ac50,&DAT_10041dd60);
  SwiftUI::State::set_wrappedValue(&local_60,&local_68,puVar5);
  return;
}

