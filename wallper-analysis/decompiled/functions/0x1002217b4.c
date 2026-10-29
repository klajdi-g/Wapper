// rea decompile_all
// name: FUN_1002217b4
// address: 0x1002217b4
// body: available
// range: 0x1002217b4-0x1002218ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002218fc to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002217b4(void)

{
  undefined *puVar1;
  ulong uVar2;
  URL UVar3;
  CharacterSet CVar4;
  ulong uVar5;
  MainActor *pMVar6;
  undefined8 *puVar7;
  UnownedSerialExecutor UVar8;
  long lVar9;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = unaff_x20;
  puVar1 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar2;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x88) = UVar3.unknown;
  lVar9 = *(long *)(UVar3.unknown + -8);
  *(long *)(unaff_x22 + 0x90) = lVar9;
  uVar2 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x98) = uVar2;
  CVar4 = Foundation::CharacterSet::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0xa0) = CVar4.unknown;
  lVar9 = *(long *)(CVar4.unknown + -8);
  *(long *)(unaff_x22 + 0xa8) = lVar9;
  uVar2 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb0) = uVar2;
  lVar9 = 0;
  FUN_10040211c();
  *(long *)(unaff_x22 + 0xb8) = lVar9;
  lVar9 = *(long *)(lVar9 + -8);
  *(long *)(unaff_x22 + 0xc0) = lVar9;
  uVar2 = *(long *)(lVar9 + 0x40) + 0xf;
  uVar5 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 200) = uVar5;
  uVar5 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd0) = uVar5;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd8) = uVar2;
  pMVar6 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_1005246d8;
  pMVar6 = Swift::MainActor::get_shared(pMVar6,pMVar6);
  *(MainActor **)(unaff_x22 + 0xe0) = pMVar6;
  puVar7 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  UVar8 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_100221900,UVar8.unknown,puVar7);
  return;
}

