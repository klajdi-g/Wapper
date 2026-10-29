// rea decompile_all
// name: FUN_10019ae44
// address: 0x10019ae44
// body: available
// range: 0x10019ae44-0x10019af13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10019af10 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10019ae44(void)

{
  UnownedSerialExecutor UVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long unaff_x20;
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0xd0));
  if (unaff_x20 == 0) {
    puVar2 = &DAT_100558b80;
    FUN_1000036d0(&DAT_100558b80,PTR_typeMetadataAccessor_1005246d8,
                  PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
    UVar1 = Swift::Actor::get_unownedExecutor();
    pcVar3 = FUN_10019af14;
  }
  else {
    _swift_errorRelease();
    puVar2 = &DAT_100558b80;
    FUN_1000036d0(&DAT_100558b80,PTR_typeMetadataAccessor_1005246d8,
                  PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
    UVar1 = Swift::Actor::get_unownedExecutor();
    pcVar3 = thunk_FUN_10019af14;
  }
  _swift_task_switch(pcVar3,UVar1.unknown,puVar2);
  return;
}

