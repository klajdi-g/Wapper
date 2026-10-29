// rea decompile_all
// name: FUN_10014595c
// address: 0x10014595c
// body: available
// range: 0x10014595c-0x100145acf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100145acc to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10014595c(void)

{
  Logger LVar1;
  ulong uVar2;
  DispatchWorkItemFlags DVar3;
  DispatchQoS DVar4;
  undefined *puVar5;
  Locale LVar6;
  LocalizationValue LVar7;
  MainActor *pMVar8;
  undefined8 *puVar9;
  UnownedSerialExecutor UVar10;
  long lVar11;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = unaff_x20;
  LVar1 = os::Logger::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x98) = LVar1.unknown;
  lVar11 = *(long *)(LVar1.unknown + -8);
  *(long *)(unaff_x22 + 0xa0) = lVar11;
  uVar2 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa8) = uVar2;
  DVar3 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0xb0) = DVar3.unknown;
  lVar11 = *(long *)(DVar3.unknown + -8);
  *(long *)(unaff_x22 + 0xb8) = lVar11;
  uVar2 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xc0) = uVar2;
  DVar4 = Dispatch::DispatchQoS::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 200) = DVar4.unknown;
  lVar11 = *(long *)(DVar4.unknown + -8);
  *(long *)(unaff_x22 + 0xd0) = lVar11;
  uVar2 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd8) = uVar2;
  puVar5 = &DAT_100554ab8;
  FUN_100002f94(&DAT_100554ab8,&DAT_100427d98);
  uVar2 = *(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xe0) = uVar2;
  LVar6 = Foundation::Locale::typeMetadataAccessor();
  uVar2 = *(long *)(*(long *)(LVar6.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xe8) = uVar2;
  LVar7 = LocalizationValue::_typeMetadataAccessor();
  uVar2 = *(long *)(*(long *)(LVar7.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf0) = uVar2;
  pMVar8 = Swift::MainActor::typeMetadataAccessor();
  puVar5 = PTR_typeMetadataAccessor_1005246d8;
  pMVar8 = Swift::MainActor::get_shared(pMVar8,pMVar8);
  *(MainActor **)(unaff_x22 + 0xf8) = pMVar8;
  puVar9 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar5,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  UVar10 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0x100) = UVar10.unknown;
  *(undefined8 **)(unaff_x22 + 0x108) = puVar9;
  _swift_task_switch(FUN_100145ad0,UVar10.unknown,puVar9);
  return;
}

