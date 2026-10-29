// rea decompile_all
// name: FUN_1000e9bc8
// address: 0x1000e9bc8
// body: available
// range: 0x1000e9bc8-0x1000e9d23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000e9bc8(long param_1)

{
  code *pcVar1;
  State SVar2;
  undefined *puVar3;
  long lVar4;
  char local_68 [8];
  State local_60;
  undefined8 uStack_58;
  undefined *local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  
  uStack_48 = *(undefined8 *)(param_1 + 0xa0);
  local_50 = *(undefined **)(param_1 + 0x98);
  uStack_58 = *(undefined8 *)(param_1 + 0xa0);
  local_60.unknown = *(undefined **)(param_1 + 0x98);
  local_38 = uStack_48;
  FUN_1000087e4(&local_38,local_68,&DAT_10054b608,&DAT_10041c9a0);
  SVar2.unknown = &DAT_10054ab50;
  puVar3 = &DAT_10041d0f0;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar2);
  if (local_68[0] == '\x01') {
    lVar4 = *(long *)(param_1 + 0x10);
    if (lVar4 == 0) {
      FUN_100279594(0);
      FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
      SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000e9d24);
      (*pcVar1)();
    }
    _swift_retain(lVar4);
    FUN_1000e3868();
    FUN_10026b00c();
    _swift_release(lVar4);
    _swift_bridgeObjectRelease(puVar3);
    uStack_58 = uStack_48;
    local_60.unknown = local_50;
    local_68[0] = '\0';
    SwiftUI::State::set_wrappedValue(&local_60,local_68,SVar2.unknown);
    FUN_10002a29c(&local_50,&DAT_10054ab50,&DAT_10041d0f0);
  }
  else {
    FUN_10002a29c(&local_50,&DAT_10054ab50,&DAT_10041d0f0);
    FUN_1000e9d24();
  }
  return;
}

