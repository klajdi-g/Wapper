// rea decompile_all
// name: FUN_1000743f4
// address: 0x1000743f4
// body: available
// range: 0x1000743f4-0x100074543 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_1000743f4(void)

{
  undefined *puVar1;
  ID IVar2;
  Dictionary<undefined,undefined> DVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long local_38;
  
  uVar5 = 0;
  IVar2 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  IVar2 = NSBundle::infoDictionary(IVar2);
  puVar1 = PTR___type_metadata_for_Any_100524178;
  if (IVar2 == 0) {
    uStack_48 = 0;
    local_50 = 0;
    local_38 = 0;
    uStack_40 = 0;
LAB_100074510:
    FUN_10002a29c(&local_50,&DAT_10054d428,&DAT_100420300);
  }
  else {
    DVar3 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
    if (*(long *)(DVar3.unknown + 0x10) == 0) {
LAB_100074500:
      uStack_48 = 0;
      local_50 = 0;
      local_38 = 0;
      uStack_40 = 0;
      _swift_bridgeObjectRelease(DVar3.unknown);
      goto LAB_100074510;
    }
    _swift_bridgeObjectRetain(DVar3.unknown);
    uVar6 = 0;
    lVar4 = -0x2fffffffffffffe6;
    FUN_10000464c(0xd00000000000001a);
    if ((uVar6 & 1) == 0) {
      _swift_bridgeObjectRelease(DVar3.unknown);
      goto LAB_100074500;
    }
    FUN_1000280d4(*(long *)(DVar3.unknown + 0x38) + lVar4 * 0x20,&local_50);
    _swift_bridgeObjectRelease_n(DVar3.unknown,2);
    if (local_38 == 0) goto LAB_100074510;
    _swift_dynamicCast(&local_60,&local_50,puVar1 + 8,PTR___type_metadata_for_Swift_String_100523a98
                       ,6);
    if ((uVar5 & 1) != 0) goto LAB_100074530;
  }
  uStack_58 = 0xe100000000000000;
  local_60 = 0x3f;
LAB_100074530:
  auVar7._8_8_ = uStack_58;
  auVar7._0_8_ = local_60;
  return auVar7;
}

