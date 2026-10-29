// rea decompile_all
// name: FUN_1002a332c
// address: 0x1002a332c
// body: available
// range: 0x1002a332c-0x1002a3453 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002a332c(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  code *pcVar1;
  Status SVar2;
  _StringGuts _Var3;
  String SVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  undefined8 local_40;
  byte local_38;
  
  (extension_AVFoundation)::__C::AVAsynchronousKeyValueLoading::_status();
  _Var3.unknown = (undefined *)(ulong)local_38;
  if (local_38 != 0) {
    if (local_38 != 1) {
      FUN_1002a4ae4(local_40);
      Swift::_StringGuts::grow(0x16,_Var3);
      _swift_bridgeObjectRelease(0xe000000000000000);
      SVar2.value = 0x58;
      FUN_100002f94(&DAT_100559c58,&DAT_10042de58);
      SVar4 = AVFoundation::AVAsyncProperty::Status::get_description(SVar2);
      SVar6.bridgeObject = param_4;
      SVar6.str = param_3;
      Swift::String::append(SVar4,SVar6);
      _swift_bridgeObjectRelease(SVar4.bridgeObject);
      SVar4.bridgeObject = (void *)0xe100000000000000;
      SVar4.str = (char *)0x29;
      SVar7.bridgeObject = param_4;
      SVar7.str = param_3;
      Swift::String::append(SVar4,SVar7);
      SVar5.bridgeObject = (void *)0x2;
      SVar5.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x1004dc328,SVar5,(StaticString)0xd000000000000013,0x80000001004e3a10
                 ,0x4e3a00);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1002a3454);
      (*pcVar1)();
    }
    _swift_willThrow();
  }
  return;
}

