// rea decompile_all
// name: FUN_1003a5bb4
// address: 0x1003a5bb4
// body: available
// range: 0x1003a5bb4-0x1003a5d2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003a5c54 to 0x1004149e4 _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003a5bb4(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  UUID UVar4;
  long extraout_x8;
  undefined1 *puVar5;
  long lVar6;
  
  puVar2 = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &stack0xffffffffffffffc0 + -extraout_x8;
  lVar3 = 0;
  FUN_1003a67f8();
  lVar6 = *(long *)(param_1 + *(int *)(lVar3 + 0x1c));
  if (*(char *)(param_1 + *(int *)(lVar3 + 0x18)) == '\x01') {
    if (lVar6 != 0) {
      _swift_retain(lVar6);
      FUN_1001b4358(1);
      _swift_release(lVar6);
      return;
    }
  }
  else if (lVar6 != 0) {
    UVar4 = Foundation::UUID::typeMetadataAccessor();
    lVar3 = *(long *)(UVar4.unknown + -8);
    (**(code **)(lVar3 + 0x10))(puVar5,param_1,UVar4.unknown);
    (**(code **)(lVar3 + 0x38))(puVar5,0,1,UVar4.unknown);
    _swift_retain(lVar6);
    FUN_1001b3850(puVar5,0,0);
    _swift_release(lVar6);
    FUN_10002a29c(puVar5,&DAT_10054a9c8,&DAT_10041bbe0);
    return;
  }
  FUN_1001b7378(0);
  FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003a5d2c);
  (*pcVar1)();
}

