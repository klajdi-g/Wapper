// rea decompile_all
// name: FUN_1001a7a2c
// address: 0x1001a7a2c
// body: available
// range: 0x1001a7a2c-0x1001a7c07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001a7c04 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001a7a2c(void)

{
  undefined *puVar1;
  bool bVar2;
  ulong uVar3;
  MainActor *pMVar4;
  undefined8 *puVar5;
  UnownedSerialExecutor UVar6;
  void *pvVar7;
  long lVar8;
  ID IVar9;
  String *pSVar10;
  long unaff_x22;
  String SVar11;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar8 = *(long *)(unaff_x22 + 0xb8);
  IVar9 = *(ID *)(lVar8 + 8);
  *(ID *)(unaff_x22 + 200) = IVar9;
  FUN_100029548(lVar8,FUN_10028e828);
  _swift_task_dealloc(lVar8);
  if (IVar9 == 0) {
    *(undefined8 *)(unaff_x22 + 0x78) = 0;
    *(undefined8 *)(unaff_x22 + 0x70) = 0;
    *(undefined8 *)(unaff_x22 + 0x88) = 0;
    *(undefined8 *)(unaff_x22 + 0x80) = 0;
LAB_1001a7b70:
    FUN_10002a29c(unaff_x22 + 0x70,&DAT_10054d428,&DAT_100420300);
  }
  else {
    SVar11 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pvVar7 = SVar11.bridgeObject;
    pSVar10 = (String *)(unaff_x22 + 0x90);
    *pSVar10 = SVar11;
    _swift_bridgeObjectRetain(pvVar7);
    Swift::__bridgeAnythingNonVerbatimToObjectiveC
              (pSVar10,PTR___type_metadata_for_Swift_String_100523a98);
    IVar9 = objc_stub::__swift_objectForKeyedSubscript_(IVar9,pSVar10);
    _swift_unknownObjectRelease(pSVar10);
    if (IVar9 == 0) {
      _swift_bridgeObjectRelease(pvVar7);
      uStack_48 = 0;
      local_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
    }
    else {
      Swift::__bridgeAnyObjectToAny();
      _swift_bridgeObjectRelease(pvVar7);
      _swift_unknownObjectRelease(IVar9);
    }
    *(undefined8 *)(unaff_x22 + 0x78) = uStack_48;
    *(undefined8 *)(unaff_x22 + 0x70) = local_50;
    *(undefined8 *)(unaff_x22 + 0x88) = uStack_38;
    *(undefined8 *)(unaff_x22 + 0x80) = uStack_40;
    if (*(long *)(unaff_x22 + 0x88) == 0) goto LAB_1001a7b70;
    uVar3 = unaff_x22 + 0xa0;
    _swift_dynamicCast(uVar3,unaff_x22 + 0x70,PTR___type_metadata_for_Any_100524178 + 8,
                       PTR___type_metadata_for_Swift_Int_100523bd8,6);
    if ((uVar3 & 1) != 0) {
      bVar2 = *(long *)(unaff_x22 + 0xa0) == -0x6cf;
      goto LAB_1001a7b8c;
    }
  }
  bVar2 = false;
LAB_1001a7b8c:
  *(bool *)(unaff_x22 + 0xe0) = bVar2;
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_1005246d8;
  pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  *(MainActor **)(unaff_x22 + 0xd0) = pMVar4;
  puVar5 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  UVar6 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_1001a7c08,UVar6.unknown,puVar5);
  return;
}

