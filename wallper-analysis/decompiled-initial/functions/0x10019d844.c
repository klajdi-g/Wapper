// rea decompile_all
// name: FUN_10019d844
// address: 0x10019d844
// body: available
// range: 0x10019d844-0x10019d9b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10019d9b0 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10019d844(undefined8 param_1,ContiguousArray param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  Color CVar4;
  MainActor *pMVar5;
  undefined8 *puVar6;
  UnownedSerialExecutor UVar7;
  ContiguousArray CVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x22;
  long lVar11;
  ContiguousArray oldCount;
  code *pcVar12;
  double *pdVar13;
  double red;
  double green;
  double blue;
  
  lVar3 = *(long *)(unaff_x22 + 0x30);
  FUN_1001aeef8();
  *(long *)(unaff_x22 + 0x58) = lVar3;
  puVar2 = PTR___swiftEmptyArrayStorage_100524190;
  lVar9 = *(long *)(lVar3 + 0x10);
  if (lVar9 != 0) {
    lVar11 = *(long *)(unaff_x22 + 0x48);
    Swift::ContiguousArray::_reserveCapacity(lVar9,param_2);
    uVar1 = *(uint *)
             PTR___enum_case_for_SwiftUI_Color_RGBColorSpace_sRGB_SwiftUI_Color_RGBColorSpace_Type___>_SwiftUI_Color_RGBColorSpace_1005231e0
    ;
    pcVar12 = *(code **)(lVar11 + 0x68);
    pdVar13 = (double *)(lVar3 + 0x30);
    do {
      uVar10 = *(undefined8 *)(unaff_x22 + 0x50);
      red = pdVar13[-2];
      green = pdVar13[-1];
      blue = *pdVar13;
      CVar8.unknown = (undefined *)(ulong)uVar1;
      (*pcVar12)(uVar10,(undefined *)(ulong)uVar1,*(undefined8 *)(unaff_x22 + 0x40));
      CVar4 = SwiftUI::Color::init((RGBColorSpace)(__int8)uVar10,red,green,blue,1.0);
      Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique
                ((ContiguousArray)CVar4.unknown);
                    /* WARNING: Load size is inaccurate */
      oldCount.unknown = puVar2[0x10];
      Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer((__int64)oldCount.unknown,CVar8)
      ;
      Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity(oldCount.unknown,CVar4.unknown)
      ;
      Swift::ContiguousArray::__endMutation(oldCount);
      lVar9 = lVar9 + -1;
      pdVar13 = pdVar13 + 3;
    } while (lVar9 != 0);
  }
  *(undefined **)(unaff_x22 + 0x60) = puVar2;
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  puVar2 = PTR_typeMetadataAccessor_1005246d8;
  pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
  *(MainActor **)(unaff_x22 + 0x68) = pMVar5;
  puVar6 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar2,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  UVar7 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_10019d9b4,UVar7.unknown,puVar6);
  return;
}

