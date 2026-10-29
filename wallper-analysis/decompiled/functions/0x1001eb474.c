// rea decompile_all
// name: FUN_1001eb474
// address: 0x1001eb474
// body: available
// range: 0x1001eb474-0x1001eb5bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001eb5bc to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001001eb53c) */

void FUN_1001eb474(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  Data DVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  undefined8 *puVar5;
  code *pcVar6;
  long unaff_x22;
  
  DVar2.unknown = *(undefined **)(unaff_x22 + 0x80);
  if (DVar2.unknown != (undefined *)0x0) {
    FUN_1001ecaec();
    *(undefined **)(unaff_x22 + 0x88) = DVar2.unknown;
    *(ulong *)(unaff_x22 + 0x90) = param_2;
    if (param_2 >> 0x3c < 0xf) {
      Foundation::Data::_write
                ((URL)*(undefined **)(unaff_x22 + 0x68),(NSDataWritingOptions)0x1,DVar2);
      *(undefined8 *)(unaff_x22 + 0x98) = 0;
      pMVar3 = Swift::MainActor::typeMetadataAccessor();
      puVar1 = PTR_typeMetadataAccessor_1005246d8;
      pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
      *(MainActor **)(unaff_x22 + 0xa0) = pMVar3;
      puVar5 = &DAT_100558b80;
      FUN_100047f94(&DAT_100558b80,0xff,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
      UVar4 = Swift::Actor::get_unownedExecutor();
      pcVar6 = FUN_1001eb5c0;
      goto LAB_1001eb5a4;
    }
  }
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_1005246d8;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  *(MainActor **)(unaff_x22 + 0xa8) = pMVar3;
  puVar5 = &DAT_100558b80;
  FUN_100047f94(&DAT_100558b80,0xff,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  UVar4 = Swift::Actor::get_unownedExecutor();
  pcVar6 = FUN_1001eb69c;
LAB_1001eb5a4:
  _swift_task_switch(pcVar6,UVar4.unknown,puVar5);
  return;
}

