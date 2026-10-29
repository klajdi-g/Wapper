// rea decompile_all
// name: FUN_10003d6b8
// address: 0x10003d6b8
// body: available
// range: 0x10003d6b8-0x10003d7ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10003d7a4 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10003d6b8(void)

{
  code *pcVar1;
  undefined *puVar2;
  ID IVar3;
  MainActor *pMVar4;
  undefined8 *puVar5;
  UnownedSerialExecutor UVar6;
  long lVar7;
  long unaff_x22;
  
  lVar7 = *(long *)(unaff_x22 + 0x6b8);
  if (lVar7 == 0) {
    IVar3 = 0;
  }
  else {
    puVar2 = &_OBJC_CLASS___CIImage;
    _objc_allocWithZone();
    IVar3 = objc_stub::initWithCGImage_((ID)puVar2,lVar7);
  }
  *(ID *)(unaff_x22 + 0x6c0) = IVar3;
  lVar7 = (long)*(double *)(unaff_x22 + 0x598);
  if (*(char *)(unaff_x22 + 0x765) == '\0') {
    lVar7 = 5;
  }
  if (!SCARRY8(*(long *)(unaff_x22 + 0x690),lVar7)) {
    *(long *)(unaff_x22 + 0x6c8) = *(long *)(unaff_x22 + 0x690) + lVar7;
    pMVar4 = Swift::MainActor::typeMetadataAccessor();
    puVar2 = PTR_typeMetadataAccessor_1005246d8;
    pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
    *(MainActor **)(unaff_x22 + 0x6d0) = pMVar4;
    puVar5 = &DAT_100558b80;
    FUN_1000036d0(&DAT_100558b80,puVar2,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
    UVar6 = Swift::Actor::get_unownedExecutor();
    _swift_task_switch(FUN_10003d7ac,UVar6.unknown,puVar5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10003d7ac);
  (*pcVar1)();
}

