// rea decompile_all
// name: FUN_1002a31e8
// address: 0x1002a31e8
// body: available
// range: 0x1002a31e8-0x1002a332b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1002a31e8(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  void *pvVar2;
  String SVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 local_58;
  
  (extension_AVFoundation)::__C::AVAsynchronousKeyValueLoading::_status();
  pvVar2 = (void *)(ulong)local_58;
  if (local_58 != 0) {
    if (local_58 != 1) {
      (*param_2)(local_70);
      Swift::_StringGuts::grow(0x16,uStack_68);
      _swift_bridgeObjectRelease(0xe000000000000000);
      FUN_100002f94(param_3,param_4);
      SVar3 = AVFoundation::AVAsyncProperty::Status::get_description((Status)(__int8)param_3);
      SVar5.bridgeObject = pvVar2;
      SVar5.str = local_60;
      Swift::String::append(SVar3,SVar5);
      _swift_bridgeObjectRelease(SVar3.bridgeObject);
      SVar3.bridgeObject = (void *)0xe100000000000000;
      SVar3.str = (char *)0x29;
      SVar6.bridgeObject = pvVar2;
      SVar6.str = local_60;
      Swift::String::append(SVar3,SVar6);
      SVar4.bridgeObject = (void *)0x2;
      SVar4.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x1004dc328,SVar4,(StaticString)0xd000000000000013,0x80000001004e3a10
                 ,0x4e3a00);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1002a332c);
      (*pcVar1)();
    }
    _swift_willThrow();
  }
  return local_70;
}

