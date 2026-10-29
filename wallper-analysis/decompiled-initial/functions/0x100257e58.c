// rea decompile_all
// name: FUN_100257e58
// address: 0x100257e58
// body: available
// range: 0x100257e58-0x100257fd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100257f74 to 0x10041478c _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100257e58(undefined8 param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ID IVar3;
  NSString *pNVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  FUN_100257150();
  puVar6 = PTR___swiftEmptyArrayStorage_100524190;
  if ((param_3 & 0xff) != 1) {
    puVar2 = (undefined *)0x0;
    FUN_1001c512c(0,1,1,PTR___swiftEmptyArrayStorage_100524190);
    uVar1 = *(ulong *)(puVar2 + 0x10);
    puVar6 = puVar2;
    if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
      puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar2 + 0x18));
      FUN_1001c512c(puVar6,uVar1 + 1,1,puVar2);
    }
    *(ulong *)(puVar6 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar6 + uVar1 * 0x10 + 0x20) = param_1;
    *(undefined8 *)(puVar6 + uVar1 * 0x10 + 0x28) = param_2;
  }
  IVar3 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar3 = NSUserDefaults::boolForKey_(IVar3,pNVar4);
  if ((int)IVar3 != 0) {
    puVar2 = puVar6;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar5 = puVar6;
    if (((ulong)puVar2 & 1) == 0) {
      puVar5 = (undefined *)0x0;
      FUN_1001c512c(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
    }
    uVar1 = *(ulong *)(puVar5 + 0x10);
    puVar6 = puVar5;
    if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
      puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
      FUN_1001c512c(puVar6,uVar1 + 1,1,puVar5);
    }
    *(ulong *)(puVar6 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar6 + uVar1 * 0x10 + 0x28) = 0x4090e00000000000;
    *(undefined8 *)(puVar6 + uVar1 * 0x10 + 0x20) = 0x409e000000000000;
  }
  FUN_10029d2c4(puVar6);
  _swift_bridgeObjectRelease(puVar6);
  return;
}

