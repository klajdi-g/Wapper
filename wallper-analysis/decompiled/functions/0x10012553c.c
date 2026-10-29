// rea decompile_all
// name: FUN_10012553c
// address: 0x10012553c
// body: available
// range: 0x10012553c-0x10012564b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100125648 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10012553c(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  MainActor *pMVar5;
  undefined8 *puVar6;
  UnownedSerialExecutor UVar7;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = in_x4;
  *(undefined8 *)(unaff_x22 + 0x50) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x40) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  lVar1 = 0;
  FUN_100126a5c();
  *(long *)(unaff_x22 + 0x58) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x60) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar2;
  puVar3 = &DAT_100551e50;
  FUN_100002f94(&DAT_100551e50,&DAT_100429e60);
  uVar2 = *(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xf;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x78) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar4;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar2;
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  puVar3 = PTR_typeMetadataAccessor_1005246d8;
  pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
  *(MainActor **)(unaff_x22 + 0x90) = pMVar5;
  puVar6 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar3,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  UVar7 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0x98) = UVar7.unknown;
  *(undefined8 **)(unaff_x22 + 0xa0) = puVar6;
  _swift_task_switch(FUN_10012564c,UVar7.unknown,puVar6);
  return;
}

