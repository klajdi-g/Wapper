// rea decompile_all
// name: FUN_1001f1e28
// address: 0x1001f1e28
// body: available
// range: 0x1001f1e28-0x1001f1ef7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001f1ef4 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001f1e28(URL param_1)

{
  undefined *puVar1;
  URL UVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  long lVar9;
  String SVar10;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x598);
  lVar9 = *(long *)(unaff_x22 + 0x550);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x548);
  UVar2 = Foundation::URL::deletingPathExtension(param_1);
  SVar10 = Foundation::URL::get_lastPathComponent(UVar2);
  *(String *)(unaff_x22 + 0x5a0) = SVar10;
  pcVar6 = *(code **)(lVar9 + 8);
  *(code **)(unaff_x22 + 0x5b0) = pcVar6;
  (*pcVar6)(uVar7,uVar8);
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_1005246d8;
  *(MainActor **)(unaff_x22 + 0x5b8) = pMVar3;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  *(MainActor **)(unaff_x22 + 0x5c0) = pMVar3;
  puVar4 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  *(undefined8 **)(unaff_x22 + 0x5c8) = puVar4;
  UVar5 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_1001f1ef8,UVar5.unknown,puVar4);
  return;
}

