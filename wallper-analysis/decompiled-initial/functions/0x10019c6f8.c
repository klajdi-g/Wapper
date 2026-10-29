// rea decompile_all
// name: FUN_10019c6f8
// address: 0x10019c6f8
// body: available
// range: 0x10019c6f8-0x10019c8e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10019c8a4 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10019c6f8(void)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  MainActor *pMVar4;
  undefined8 *puVar5;
  UnownedSerialExecutor UVar6;
  void *pvVar7;
  undefined8 uVar8;
  ID IVar9;
  undefined8 uVar10;
  long unaff_x22;
  String SVar11;
  
  IVar9 = **(ID **)(unaff_x22 + 0x128);
  FUN_100029548(*(ID **)(unaff_x22 + 0x128),FUN_10028e828);
  if (IVar9 == 0) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x128);
  }
  else {
    IVar9 = objc_stub::stringValue(IVar9);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x128);
    if (IVar9 != 0) {
      SVar11 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      pvVar7 = SVar11.bridgeObject;
      _swift_task_dealloc(uVar8);
      uVar1 = (ulong)SVar11.str & 0xffffffffffff;
      if (((ulong)pvVar7 & 0x2000000000000000) != 0) {
        uVar1 = (ulong)pvVar7 >> 0x38 & 0xf;
      }
      if (uVar1 == 0) {
        _swift_bridgeObjectRelease(pvVar7);
      }
      else {
        *(String *)(unaff_x22 + 0xd0) = SVar11;
        *(undefined8 *)(unaff_x22 + 0xe0) = 0x7c7c7c;
        *(undefined8 *)(unaff_x22 + 0xe8) = 0xe300000000000000;
        FUN_100026df4();
        lVar3 = unaff_x22 + 0xe0;
        (extension_Foundation)::Swift::StringProtocol::_components
                  (lVar3,PTR___type_metadata_for_Swift_String_100523a98,
                   PTR___type_metadata_for_Swift_String_100523a98,uVar8,uVar8);
        _swift_bridgeObjectRelease(pvVar7);
        if (*(long *)(lVar3 + 0x10) == 3) {
          *(undefined1 *)(unaff_x22 + 0x174) = 1;
          *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(lVar3 + 0x20);
          *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(lVar3 + 0x28);
          *(undefined8 *)(unaff_x22 + 0x148) = *(undefined8 *)(lVar3 + 0x30);
          uVar8 = *(undefined8 *)(lVar3 + 0x38);
          *(undefined8 *)(unaff_x22 + 0x150) = uVar8;
          *(undefined8 *)(unaff_x22 + 0x158) = *(undefined8 *)(lVar3 + 0x40);
          uVar10 = *(undefined8 *)(lVar3 + 0x48);
          *(undefined8 *)(unaff_x22 + 0x160) = uVar10;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar8);
          _swift_bridgeObjectRetain(uVar10);
          _swift_bridgeObjectRelease(lVar3);
          pMVar4 = Swift::MainActor::typeMetadataAccessor();
          puVar2 = PTR_typeMetadataAccessor_1005246d8;
          pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
          *(MainActor **)(unaff_x22 + 0x168) = pMVar4;
          puVar5 = &DAT_100558b80;
          FUN_1000036d0(&DAT_100558b80,puVar2,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
          UVar6 = Swift::Actor::get_unownedExecutor();
          _swift_task_switch(FUN_10019c8e8,UVar6.unknown,puVar5);
          return;
        }
        _swift_bridgeObjectRelease(lVar3);
      }
      goto LAB_10019c8b8;
    }
  }
  _swift_task_dealloc(uVar8);
LAB_10019c8b8:
                    /* WARNING: Could not recover jumptable at 0x00010019c8cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

