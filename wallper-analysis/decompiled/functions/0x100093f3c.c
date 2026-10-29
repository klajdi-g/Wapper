// rea decompile_all
// name: FUN_100093f3c
// address: 0x100093f3c
// body: available
// range: 0x100093f3c-0x100093feb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100093f3c(long param_1)

{
  undefined8 uVar1;
  TimelineView TVar2;
  _ConditionalContent _Var3;
  undefined *puVar4;
  undefined *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  SwiftUI::PeriodicTimelineSchedule::typeMetadataAccessor();
  FUN_1000036d0(&DAT_10054eec8,PTR_typeMetadataAccessor_100522ab0,
                PTR_SwiftUI__SwiftUI__PeriodicTimelineSchedule_>SwiftUI__TimelineSchedule_100522aa8)
  ;
  TVar2 = SwiftUI::TimelineView::typeMetadataAccessor();
  _Var3 = SwiftUI::_ConditionalContent::typeMetadataAccessor();
  puVar4 = PTR__SwiftUI__SwiftUI__TimelineView<undefined,undefined>_>SwiftUI__View_100521e50;
  local_38 = uVar1;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__TimelineView<undefined,undefined>_>SwiftUI__View_100521e50,
             TVar2.unknown,&local_38);
  local_48 = puVar4;
  uStack_40 = uVar1;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830
             ,_Var3.unknown,&local_48);
  return;
}

