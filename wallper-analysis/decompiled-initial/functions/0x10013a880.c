// rea decompile_all
// name: FUN_10013a880
// address: 0x10013a880
// body: available
// range: 0x10013a880-0x10013a9d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10013a9d0 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10013a880(void)

{
  undefined *puVar1;
  DateDecodingStrategy DVar2;
  KeyDecodingStrategy KVar3;
  undefined7 extraout_var;
  ulong uVar4;
  undefined7 extraout_var_00;
  URLRequest UVar5;
  URL UVar6;
  ulong uVar7;
  MainActor *pMVar8;
  undefined8 *puVar9;
  UnownedSerialExecutor UVar10;
  long lVar11;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  DVar2 = Foundation::JSONDecoder::DateDecodingStrategy::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x28) = CONCAT71(extraout_var,DVar2.value);
  lVar11 = *(long *)(CONCAT71(extraout_var,DVar2.value) + -8);
  *(long *)(unaff_x22 + 0x30) = lVar11;
  uVar4 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x38) = uVar4;
  KVar3 = Foundation::JSONDecoder::KeyDecodingStrategy::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x40) = CONCAT71(extraout_var_00,KVar3.value);
  lVar11 = *(long *)(CONCAT71(extraout_var_00,KVar3.value) + -8);
  *(long *)(unaff_x22 + 0x48) = lVar11;
  uVar4 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar4;
  UVar5 = Foundation::URLRequest::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x58) = UVar5.unknown;
  lVar11 = *(long *)(UVar5.unknown + -8);
  *(long *)(unaff_x22 + 0x60) = lVar11;
  uVar4 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar4;
  UVar6 = Foundation::URL::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x70) = UVar6.unknown;
  lVar11 = *(long *)(UVar6.unknown + -8);
  *(long *)(unaff_x22 + 0x78) = lVar11;
  uVar4 = *(long *)(lVar11 + 0x40) + 0xf;
  uVar7 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar7;
  uVar7 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar7;
  uVar7 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar7;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x98) = uVar4;
  pMVar8 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_1005246d8;
  pMVar8 = Swift::MainActor::get_shared(pMVar8,pMVar8);
  *(MainActor **)(unaff_x22 + 0xa0) = pMVar8;
  puVar9 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  UVar10 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0xa8) = UVar10.unknown;
  *(undefined8 **)(unaff_x22 + 0xb0) = puVar9;
  _swift_task_switch(FUN_10013a9d4,UVar10.unknown,puVar9);
  return;
}

