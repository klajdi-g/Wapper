// rea decompile_all
// name: FUN_10008dfdc
// address: 0x10008dfdc
// body: available
// range: 0x10008dfdc-0x10008e0df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10008e0dc to 0x100413d9c /usr/lib/swift/libswift_Concurrency.dylib::Swift::Clock::$sleep (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10008dfdc(void)

{
  undefined8 uVar1;
  long *plVar2;
  code *pcVar3;
  long unaff_x22;
  undefined8 uVar4;
  long lVar5;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x110);
  lVar5 = *(long *)(unaff_x22 + 0x108);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xe8);
  FUN_1000036d0(&DAT_10054f368,PTR_typeMetadataAccessor_100524780,
                PTR_Swift__Swift__ContinuousClock_>Swift__Clock_100524788);
  Swift::Clock::_get_now();
  FUN_1000036d0(&DAT_10054f370,PTR_typeMetadataAccessor_100524770,
                PTR_Swift__Swift__ContinuousClock__Instant_>Swift__InstantProtocol_100524778);
  Swift::InstantProtocol::_advanced();
  pcVar3 = *(code **)(lVar5 + 8);
  *(code **)(unaff_x22 + 0x208) = pcVar3;
  (*pcVar3)(uVar1,uVar4);
  plVar2 = (long *)(ulong)*(uint *)(PTR__sleep_1005247c0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x210) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10008e0e0;
  Swift::Clock::_sleep();
  return;
}

