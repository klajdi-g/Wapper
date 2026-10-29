// rea decompile_all
// name: FUN_1002761c8
// address: 0x1002761c8
// body: available
// range: 0x1002761c8-0x100276273 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100276270 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002761c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x228) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x220) = param_4;
  *(undefined8 *)(unaff_x22 + 0x218) = param_3;
  *(undefined8 *)(unaff_x22 + 0x210) = param_2;
  *(undefined8 *)(unaff_x22 + 0x208) = param_1;
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_1005246d8;
  *(MainActor **)(unaff_x22 + 0x230) = pMVar2;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  *(MainActor **)(unaff_x22 + 0x238) = pMVar2;
  puVar3 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  *(undefined8 **)(unaff_x22 + 0x240) = puVar3;
  UVar4 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0x248) = UVar4.unknown;
  *(undefined8 **)(unaff_x22 + 0x250) = puVar3;
  _swift_task_switch(FUN_100276274,UVar4.unknown,puVar3);
  return;
}

