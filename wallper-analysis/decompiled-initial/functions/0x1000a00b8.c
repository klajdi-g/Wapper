// rea decompile_all
// name: FUN_1000a00b8
// address: 0x1000a00b8
// body: available
// range: 0x1000a00b8-0x1000a0173 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000a0170 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000a00b8(void)

{
  undefined *puVar1;
  URL UVar2;
  ulong uVar3;
  MainActor *pMVar4;
  undefined8 *puVar5;
  UnownedSerialExecutor UVar6;
  undefined1 in_w3;
  undefined1 in_w4;
  long lVar7;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0xb9) = in_w4;
  *(undefined1 *)(unaff_x22 + 0xb8) = in_w3;
  UVar2 = Foundation::URL::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x10) = UVar2.unknown;
  lVar7 = *(long *)(UVar2.unknown + -8);
  *(long *)(unaff_x22 + 0x18) = lVar7;
  uVar3 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x20) = uVar3;
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_1005246d8;
  pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  *(MainActor **)(unaff_x22 + 0x28) = pMVar4;
  puVar5 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  UVar6 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0x30) = UVar6.unknown;
  *(undefined8 **)(unaff_x22 + 0x38) = puVar5;
  _swift_task_switch(FUN_1000a0174,UVar6.unknown,puVar5);
  return;
}

