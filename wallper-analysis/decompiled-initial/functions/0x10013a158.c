// rea decompile_all
// name: FUN_10013a158
// address: 0x10013a158
// body: available
// range: 0x10013a158-0x10013a24f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10013a24c to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10013a158(void)

{
  undefined *puVar1;
  URLRequest UVar2;
  ulong uVar3;
  URL UVar4;
  ulong uVar5;
  MainActor *pMVar6;
  undefined8 *puVar7;
  UnownedSerialExecutor UVar8;
  long lVar9;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = unaff_x20;
  UVar2 = Foundation::URLRequest::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0xa8) = UVar2.unknown;
  lVar9 = *(long *)(UVar2.unknown + -8);
  *(long *)(unaff_x22 + 0xb0) = lVar9;
  uVar3 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb8) = uVar3;
  UVar4 = Foundation::URL::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0xc0) = UVar4.unknown;
  lVar9 = *(long *)(UVar4.unknown + -8);
  *(long *)(unaff_x22 + 200) = lVar9;
  uVar3 = *(long *)(lVar9 + 0x40) + 0xf;
  uVar5 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd0) = uVar5;
  uVar5 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd8) = uVar5;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xe0) = uVar3;
  pMVar6 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_1005246d8;
  pMVar6 = Swift::MainActor::get_shared(pMVar6,pMVar6);
  *(MainActor **)(unaff_x22 + 0xe8) = pMVar6;
  puVar7 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  UVar8 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0xf0) = UVar8.unknown;
  *(undefined8 **)(unaff_x22 + 0xf8) = puVar7;
  _swift_task_switch(FUN_10013a250,UVar8.unknown,puVar7);
  return;
}

