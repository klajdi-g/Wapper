// rea decompile_all
// name: FUN_10003d068
// address: 0x10003d068
// body: available
// range: 0x10003d068-0x10003d503 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10003d450 to 0x1000405c8 FUN_1000405c8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10003d4f8 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010003d3a8) */
/* WARNING: Removing unreachable block (ram,0x00010003d170) */
/* WARNING: Removing unreachable block (ram,0x00010003d18c) */

void FUN_10003d068(void)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  NSDictionary *pNVar6;
  ID IVar7;
  long lVar8;
  long *plVar9;
  MainActor *pMVar10;
  undefined8 *puVar11;
  UnownedSerialExecutor UVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x22;
  double dVar15;
  undefined8 uVar16;
  double dVar17;
  undefined8 uVar18;
  
  uVar13 = *(undefined8 *)(unaff_x22 + 0x5a8);
  dVar15 = *(double *)(unaff_x22 + 0x590);
  dVar17 = *(double *)(unaff_x22 + 0x538);
  FUN_100029548(uVar13,FUN_10009e280);
  _swift_task_dealloc(uVar13);
  *(long *)(unaff_x22 + 0x630) = (long)((dVar15 * 33.3) / 60.0);
  *(undefined8 *)(unaff_x22 + 0x628) = *(undefined8 *)(unaff_x22 + 0x5e0);
  *(undefined8 *)(unaff_x22 + 0x620) = *(undefined8 *)(unaff_x22 + 0x5d8);
  *(undefined8 *)(unaff_x22 + 0x618) = *(undefined8 *)(unaff_x22 + 0x5d0);
  *(undefined8 *)(unaff_x22 + 0x610) = *(undefined8 *)(unaff_x22 + 0x5c8);
  *(undefined8 *)(unaff_x22 + 0x608) = *(undefined8 *)(unaff_x22 + 0x5c0);
  *(undefined8 *)(unaff_x22 + 0x600) = *(undefined8 *)(unaff_x22 + 0x5b8);
  *(double *)(unaff_x22 + 0x5f8) = dVar17 - *(double *)(unaff_x22 + 0x3b0);
  *(undefined8 *)(unaff_x22 + 0x5f0) = *(undefined8 *)(unaff_x22 + 0x3a8);
  *(undefined8 *)(unaff_x22 + 0x5e8) = *(undefined8 *)(unaff_x22 + 0x3b8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x588);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x538);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x530);
  uVar13 = 0;
  FUN_100042468();
  _swift_allocObject();
  FUN_1000416d0(uVar18,uVar16,uVar14,600,uVar13);
  *(undefined8 *)(unaff_x22 + 0x638) = uVar14;
  puVar5 = &DAT_10054c068;
  FUN_100002f94(&DAT_10054c068,&DAT_10041d7e0);
  _swift_initStackObject();
  *(undefined8 *)(puVar5 + 0x18) = 4;
  *(undefined8 *)(puVar5 + 0x10) = 2;
  *(undefined8 *)(puVar5 + 0x20) = *(undefined8 *)PTR__kCIContextCacheIntermediates_1005217c8;
  puVar4 = PTR___type_metadata_for_Swift_Bool_100523b70;
  puVar5[0x28] = 0;
  uVar13 = *(undefined8 *)PTR__kCIContextWorkingFormat_1005217d0;
  *(undefined **)(puVar5 + 0x40) = puVar4;
  *(undefined8 *)(puVar5 + 0x48) = uVar13;
  uVar1 = *(undefined4 *)PTR__kCIFormatRGBA8_1005217d8;
  *(undefined4 *)(unaff_x22 + 0x760) = uVar1;
  uVar13 = 0;
  FUN_1000080cc();
  *(undefined8 *)(puVar5 + 0x68) = uVar13;
  *(undefined4 *)(puVar5 + 0x50) = uVar1;
  puVar3 = puVar5;
  FUN_1000069f4(puVar5);
  _swift_setDeallocating(puVar5);
  puVar4 = &DAT_10054a1b0;
  FUN_100002f94(&DAT_10054a1b0,&DAT_10041a240);
  _swift_arrayDestroy(puVar5 + 0x20,2,puVar4);
  puVar5 = &_OBJC_CLASS___CIContext;
  _objc_allocWithZone();
  FUN_1000080e0(0);
  FUN_1000036d0(&DAT_10054a620,FUN_1000080e0,&TargetProtocolConformanceDescriptor_10041b4d8);
  pNVar6 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(puVar3);
  IVar7 = objc_stub::initWithOptions_((ID)puVar5,pNVar6);
  *(ID *)(unaff_x22 + 0x640) = IVar7;
  lVar8 = *(long *)PTR__kCGColorSpaceSRGB_1005217a8;
  _CGColorSpaceCreateWithName();
  *(long *)(unaff_x22 + 0x648) = lVar8;
  if (lVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10003d504);
    (*pcVar2)();
  }
  lVar8 = (long)*(double *)(unaff_x22 + 0x598);
  if (-1 < lVar8) {
    *(undefined8 *)(unaff_x22 + 0x650) =
         _TtC7WallperP33_54D9350386DEC93E9C9165595326A3B612FrameEncoder::sink;
    *(undefined8 *)(unaff_x22 + 0x658) =
         _TtC7WallperP33_54D9350386DEC93E9C9165595326A3B612FrameEncoder::submitted;
    if (lVar8 != 0) {
      *(undefined8 *)(unaff_x22 + 0x660) = *(undefined8 *)PTR__kCIInputTargetImageKey_100521820;
      *(undefined8 *)(unaff_x22 + 0x668) = *(undefined8 *)PTR__kCIInputTimeKey_100521828;
      puVar5 = PTR__kCIInputAspectRatioKey_1005217e8;
      *(undefined8 *)(unaff_x22 + 0x670) = *(undefined8 *)PTR__kCIInputScaleKey_100521818;
      *(undefined8 *)(unaff_x22 + 0x678) = *(undefined8 *)puVar5;
      *(undefined8 *)(unaff_x22 + 0x428) = 0;
      *(undefined8 *)(unaff_x22 + 0x420) = 0;
      *(undefined8 *)(unaff_x22 + 0x438) = *(undefined8 *)(unaff_x22 + 0x538);
      *(undefined8 *)(unaff_x22 + 0x430) = *(undefined8 *)(unaff_x22 + 0x530);
      *(undefined8 *)(unaff_x22 + 0x680) = 0;
      *(long *)(unaff_x22 + 0x688) = lVar8;
      *(undefined8 *)(unaff_x22 + 0x690) = 0;
      *(undefined8 *)(unaff_x22 + 0x6a0) = 0;
      *(undefined8 *)(unaff_x22 + 0x698) = 0;
      (extension_Swift)::Swift::Task::_checkCancellation();
      *(undefined8 *)(unaff_x22 + 0x6a8) = 0;
      if (*(code **)(unaff_x22 + 0x548) != (code *)0x0) {
        (**(code **)(unaff_x22 + 0x548))(0.0 / (double)(ulong)(long)*(double *)(unaff_x22 + 0x598));
      }
      pMVar10 = Swift::MainActor::typeMetadataAccessor();
      puVar5 = PTR_typeMetadataAccessor_1005246d8;
      pMVar10 = Swift::MainActor::get_shared(pMVar10,pMVar10);
      *(MainActor **)(unaff_x22 + 0x6b0) = pMVar10;
      puVar11 = &DAT_100558b80;
      FUN_1000036d0(&DAT_100558b80,puVar5,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
      UVar12 = Swift::Actor::get_unownedExecutor();
      _swift_task_switch(FUN_10003d504,UVar12.unknown,puVar11);
      return;
    }
    *(undefined8 *)(unaff_x22 + 0x740) = 0;
    *(undefined8 *)(unaff_x22 + 0x738) = 0;
    *(undefined8 *)(unaff_x22 + 0x730) = 0;
    plVar9 = (long *)0x300;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x748) = plVar9;
    *plVar9 = unaff_x22;
    plVar9[1] = (long)FUN_10003eebc;
    FUN_1000405c8(plVar9,*(undefined8 *)(unaff_x22 + 0x518));
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10003d500);
  (*pcVar2)();
}

