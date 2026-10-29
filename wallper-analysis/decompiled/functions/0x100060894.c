// rea decompile_all
// name: FUN_100060894
// address: 0x100060894
// body: available
// range: 0x100060894-0x10006099f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100060894(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  UUID UVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  puVar2 = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffd0 + -extraout_x8;
  lVar5 = *(long *)(param_1 + 0x40);
  if (lVar5 != 0) {
    UVar3 = Foundation::UUID::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar3.unknown + -8) + 0x38))(puVar4,1,1,UVar3.unknown);
    _swift_retain(lVar5);
    FUN_1001b3850(puVar4,0,0);
    _swift_release(lVar5);
    FUN_10002a29c(puVar4,&DAT_10054a9c8,&DAT_10041bbe0);
    return;
  }
  FUN_1001b7378(0);
  FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000609a0);
  (*pcVar1)();
}

