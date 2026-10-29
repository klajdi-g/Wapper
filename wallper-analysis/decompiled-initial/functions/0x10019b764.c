// rea decompile_all
// name: FUN_10019b764
// address: 0x10019b764
// body: available
// range: 0x10019b764-0x10019b97f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10019b918 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10019b764(void)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  MainActor *pMVar5;
  UnownedSerialExecutor UVar6;
  undefined8 *puVar7;
  code *pcVar8;
  void *pvVar9;
  ID *pIVar10;
  ID IVar11;
  long unaff_x22;
  String SVar12;
  
  pIVar10 = *(ID **)(unaff_x22 + 0xa0);
  IVar11 = *pIVar10;
  *(ID *)(unaff_x22 + 0xb0) = IVar11;
  FUN_100029548(pIVar10,FUN_10028e828);
  _swift_task_dealloc(pIVar10);
  if ((IVar11 != 0) && (IVar11 = objc_stub::stringValue(IVar11), IVar11 != 0)) {
    SVar12 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pvVar9 = SVar12.bridgeObject;
    uVar3 = 0;
    uVar1 = (ulong)SVar12.str & 0xffffffffffff;
    if (((ulong)pvVar9 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)pvVar9 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      *(String *)(unaff_x22 + 0x70) = SVar12;
      *(undefined8 *)(unaff_x22 + 0x80) = 0x7c7c7c;
      *(undefined8 *)(unaff_x22 + 0x88) = 0xe300000000000000;
      FUN_100026df4(0);
      lVar4 = unaff_x22 + 0x80;
      (extension_Foundation)::Swift::StringProtocol::_components
                (lVar4,PTR___type_metadata_for_Swift_String_100523a98,
                 PTR___type_metadata_for_Swift_String_100523a98,uVar3,uVar3);
      *(long *)(unaff_x22 + 0xb8) = lVar4;
      _swift_bridgeObjectRelease(pvVar9);
      if (*(long *)(lVar4 + 0x10) == 3) {
        pMVar5 = Swift::MainActor::typeMetadataAccessor();
        puVar2 = PTR_typeMetadataAccessor_1005246d8;
        pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
        *(MainActor **)(unaff_x22 + 0xc0) = pMVar5;
        puVar7 = &DAT_100558b80;
        FUN_1000036d0(&DAT_100558b80,puVar2,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
        UVar6 = Swift::Actor::get_unownedExecutor();
        pcVar8 = FUN_10019b980;
      }
      else {
        _swift_bridgeObjectRelease(lVar4);
        pMVar5 = Swift::MainActor::typeMetadataAccessor();
        puVar2 = PTR_typeMetadataAccessor_1005246d8;
        pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
        *(MainActor **)(unaff_x22 + 200) = pMVar5;
        puVar7 = &DAT_100558b80;
        FUN_1000036d0(&DAT_100558b80,puVar2,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
        UVar6 = Swift::Actor::get_unownedExecutor();
        pcVar8 = FUN_10019ba34;
      }
      goto LAB_10019b900;
    }
    _swift_bridgeObjectRelease(pvVar9);
  }
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  puVar2 = PTR_typeMetadataAccessor_1005246d8;
  pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
  *(MainActor **)(unaff_x22 + 0xd0) = pMVar5;
  puVar7 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar2,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  UVar6 = Swift::Actor::get_unownedExecutor();
  pcVar8 = FUN_10019bb20;
LAB_10019b900:
  _swift_task_switch(pcVar8,UVar6.unknown,puVar7);
  return;
}

