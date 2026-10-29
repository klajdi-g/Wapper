// rea decompile_all
// name: FUN_1003f6500
// address: 0x1003f6500
// body: available
// range: 0x1003f6500-0x1003f65bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003f65bc to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003f6500(void)

{
  undefined *puVar1;
  ulong uVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  undefined8 in_x3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = in_x3;
  puVar1 = &DAT_1005610a0;
  FUN_100002f94(&DAT_1005610a0,&DAT_100436df0);
  *(undefined **)(unaff_x22 + 0x88) = puVar1;
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar2;
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_1005246d8;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  *(MainActor **)(unaff_x22 + 0x98) = pMVar3;
  puVar4 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  UVar5 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0xa0) = UVar5.unknown;
  *(undefined8 **)(unaff_x22 + 0xa8) = puVar4;
  _swift_task_switch(FUN_1003f65c0,UVar5.unknown,puVar4);
  return;
}

