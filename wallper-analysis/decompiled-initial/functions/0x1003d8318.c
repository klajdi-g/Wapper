// rea decompile_all
// name: FUN_1003d8318
// address: 0x1003d8318
// body: available
// range: 0x1003d8318-0x1003d83e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003d83e0 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003d8318(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  URL UVar4;
  MainActor *pMVar5;
  undefined8 *puVar6;
  UnownedSerialExecutor UVar7;
  long unaff_x22;
  long lVar8;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar8 = *(long *)(UVar4.unknown + -8);
  (**(code **)(lVar8 + 0x10))(uVar2,uVar1,UVar4.unknown);
  (**(code **)(lVar8 + 0x38))(uVar2,0,1,UVar4.unknown);
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  puVar3 = PTR_typeMetadataAccessor_1005246d8;
  pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
  *(MainActor **)(unaff_x22 + 0x38) = pMVar5;
  puVar6 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar3,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  UVar7 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_1003d83e4,UVar7.unknown,puVar6);
  return;
}

