// rea decompile_all
// name: FUN_10000ac74
// address: 0x10000ac74
// body: available
// range: 0x10000ac74-0x10000adbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000ac74(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  long lVar4;
  byte local_51;
  State local_50;
  undefined8 uStack_48;
  
  FUN_10000a834();
  if (param_2 == 0) {
    uStack_48 = *(undefined8 *)(unaff_x20 + 0xa0);
    local_50.unknown = *(undefined **)(unaff_x20 + 0x98);
    local_51 = 0;
  }
  else {
    lVar4 = *(long *)(unaff_x20 + 0x18);
    if (lVar4 == 0) {
      FUN_100279594(0);
      FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
      SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10000adbc);
      (*pcVar1)();
    }
    puVar2 = &DAT_10041bec0;
    _swift_getKeyPath(&DAT_10041bec0);
    puVar3 = &DAT_10041bee8;
    _swift_getKeyPath(&DAT_10041bee8);
    _swift_retain(lVar4);
    Combine::Published::_get_subscript(&local_50);
    _swift_release(puVar2);
    _swift_release(puVar3);
    FUN_1002165a4(param_1,param_2,local_50.unknown);
    _swift_bridgeObjectRelease(param_2);
    _swift_release(lVar4);
    _swift_bridgeObjectRelease(local_50.unknown);
    uStack_48 = *(undefined8 *)(unaff_x20 + 0xa0);
    local_50.unknown = *(undefined **)(unaff_x20 + 0x98);
    local_51 = (byte)param_1 & 1;
  }
  puVar2 = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::set_wrappedValue(&local_50,&local_51,puVar2);
  return;
}

