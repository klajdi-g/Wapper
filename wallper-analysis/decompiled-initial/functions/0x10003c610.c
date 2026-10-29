// rea decompile_all
// name: FUN_10003c610
// address: 0x10003c610
// body: available
// range: 0x10003c610-0x10003d00b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10003cbb8 to 0x1000afb1c FUN_1000afb1c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10003cf4c to 0x1000405c8 FUN_1000405c8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10003cff4 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010003cea0) */
/* WARNING: Removing unreachable block (ram,0x00010003cc68) */

void FUN_10003c610(void)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  NSString *pNVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  NSDictionary *pNVar16;
  ID IVar17;
  long *plVar18;
  MainActor *pMVar19;
  undefined8 *puVar20;
  UnownedSerialExecutor UVar21;
  ulong uVar22;
  undefined8 uVar23;
  long unaff_x22;
  undefined8 uVar24;
  code *pcVar25;
  long lVar26;
  long lVar27;
  double dVar28;
  double dVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  String SVar32;
  
  bVar4 = Swift::_stdlib_isOSVersionAtLeast(0xf,0,0);
  if ((bVar4 & 1) == 0) {
    puVar15 = &DAT_10054c048;
    FUN_100002f94("InteractiveVideoRenderer",&DAT_10054c048,&DAT_10041d7b0);
    _swift_initStackObject();
    *(undefined8 *)(puVar15 + 0x18) = 2;
    *(undefined8 *)(puVar15 + 0x10) = 1;
    SVar32 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    *(char **)(puVar15 + 0x20) = SVar32.str;
    *(undefined **)(puVar15 + 0x48) = PTR___type_metadata_for_Swift_String_100523a98;
    *(void **)(puVar15 + 0x28) = SVar32.bridgeObject;
    *(undefined8 *)(puVar15 + 0x30) = 0xd00000000000001c;
    *(undefined8 *)(puVar15 + 0x38) = 0x80000001004dbfb0;
    puVar8 = puVar15;
    FUN_100005b10(puVar15);
    _swift_setDeallocating(puVar15);
    FUN_10002a29c(puVar15 + 0x20,&DAT_10054a1c0,&DAT_10041a250);
    puVar15 = &_OBJC_CLASS___NSError;
    _objc_allocWithZone();
    pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    pNVar16 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(puVar8);
    objc_stub::initWithDomain_code_userInfo_((ID)puVar15,pNVar9,2,pNVar16);
    _swift_willThrow(0);
                    /* WARNING: Could not recover jumptable at 0x00010003ccac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar24 = *(undefined8 *)(unaff_x22 + 0x528);
  puVar15 = &DAT_10054c040;
  FUN_100002f94(&DAT_10054c040,&DAT_100420500);
  uVar13 = *(long *)(*(long *)(puVar15 + -8) + 0x40) + 0xf;
  uVar5 = uVar13 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar5);
  lVar6 = 0;
  FUN_10009e280();
  lVar27 = *(long *)(lVar6 + -8);
  (**(code **)(lVar27 + 0x38))(uVar5,1,1,lVar6);
  puVar15 = &DAT_10054c060;
  FUN_100002f94(&DAT_10054c060,&DAT_10041d7d8);
  uVar7 = *(long *)(*(long *)(puVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  lVar26 = (long)*(int *)(puVar15 + 0x30);
  FUN_1000087e4(uVar24,uVar7,&DAT_10054c040,&DAT_100420500);
  FUN_1000087e4(uVar5,uVar7 + lVar26,&DAT_10054c040,&DAT_100420500);
  pcVar25 = *(code **)(lVar27 + 0x30);
  uVar22 = uVar7;
  (*pcVar25)(uVar7,1,lVar6);
  if ((int)uVar22 == 1) {
    FUN_10002a29c(uVar5,&DAT_10054c040,&DAT_100420500);
    lVar26 = uVar7 + lVar26;
    (*pcVar25)(lVar26,1,lVar6);
    if ((int)lVar26 == 1) {
      FUN_10002a29c(uVar7,&DAT_10054c040,&DAT_100420500);
      _swift_task_dealloc(uVar7);
      _swift_task_dealloc(uVar5);
LAB_10003ca30:
      bVar3 = false;
      dVar29 = 10.0;
      uVar22 = 0x1e;
      goto LAB_10003ca3c;
    }
LAB_10003c920:
    FUN_10002a29c(uVar7,&DAT_10054c060,&DAT_10041d7d8);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar5);
  }
  else {
    uVar22 = uVar13 & 0xfffffffffffffff0;
    _swift_task_alloc();
    FUN_1000087e4(uVar7,uVar22,&DAT_10054c040,&DAT_100420500);
    lVar10 = uVar7 + lVar26;
    (*pcVar25)(lVar10,1,lVar6);
    if ((int)lVar10 == 1) {
      FUN_10002a29c(uVar5,&DAT_10054c040,&DAT_100420500);
      FUN_100029548(uVar22,FUN_10009e280);
      _swift_task_dealloc(uVar22);
      goto LAB_10003c920;
    }
    uVar11 = *(long *)(lVar27 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc(uVar11);
    FUN_100043db0(uVar7 + lVar26,uVar11);
    uVar12 = uVar22;
    FUN_1000a19c8(uVar22,uVar11);
    FUN_100029548(uVar11,FUN_10009e280);
    FUN_10002a29c(uVar5,&DAT_10054c040,&DAT_100420500);
    FUN_100029548(uVar22,FUN_10009e280);
    _swift_task_dealloc(uVar11);
    _swift_task_dealloc(uVar22);
    FUN_10002a29c(uVar7,&DAT_10054c040,&DAT_100420500);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar5);
    if ((uVar12 & 1) != 0) goto LAB_10003ca30;
  }
  uVar22 = (ulong)*(byte *)(unaff_x22 + 0x764);
  FUN_100077bcc();
  dVar29 = 1.801801801801802;
  bVar3 = (uVar22 & 1) != 0;
  uVar22 = 0x3c;
  if (!bVar3) {
    uVar22 = 0x1e;
    dVar29 = 10.0;
  }
LAB_10003ca3c:
  *(bool *)(unaff_x22 + 0x765) = bVar3;
  *(double *)(unaff_x22 + 0x590) = dVar29;
  *(ulong *)(unaff_x22 + 0x588) = uVar22;
  dVar28 = (double)(long)(dVar29 * (double)uVar22);
  *(double *)(unaff_x22 + 0x598) = dVar28;
  if ((dVar28 == INFINITY) || (NAN(dVar28))) {
                    /* WARNING: Does not return */
    pcVar25 = (code *)SoftwareBreakpoint(1,0x10003cffc);
    (*pcVar25)();
  }
  if (dVar28 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar25 = (code *)SoftwareBreakpoint(1,0x10003d000);
    (*pcVar25)();
  }
  if (9.223372036854776e+18 <= dVar28) {
                    /* WARNING: Does not return */
    pcVar25 = (code *)SoftwareBreakpoint(1,0x10003d004);
    (*pcVar25)();
  }
  uVar24 = *(undefined8 *)(unaff_x22 + 0x528);
  *(long *)(unaff_x22 + 0x5a0) =
       (long)((*(double *)(unaff_x22 + 0x538) * 960.0) / *(double *)(unaff_x22 + 0x530));
  uVar5 = *(long *)(lVar27 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x5a8) = uVar5;
  uVar13 = uVar13 & 0xfffffffffffffff0;
  _swift_task_alloc();
  FUN_1000087e4(uVar24,uVar13,&DAT_10054c040,&DAT_100420500);
  uVar22 = uVar13;
  (*pcVar25)(uVar13,1,lVar6);
  if ((int)uVar22 == 1) {
    FUN_10002a29c(uVar13,&DAT_10054c040,&DAT_100420500);
    _swift_task_dealloc(uVar13);
  }
  else {
    cVar2 = *(char *)(unaff_x22 + 0x764);
    FUN_100043db0(uVar13,uVar5);
    _swift_task_dealloc(uVar13);
    if (cVar2 != '\0') {
      plVar18 = (long *)0xb0;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x5b0) = plVar18;
      *plVar18 = unaff_x22;
      plVar18[1] = (long)FUN_10003d00c;
      FUN_1000afb1c(plVar18,*(undefined8 *)(unaff_x22 + 0x530),*(undefined8 *)(unaff_x22 + 0x538),
                    unaff_x22 + 0x390,uVar5,*(undefined1 *)(unaff_x22 + 0x764));
      return;
    }
    FUN_100029548(uVar5,FUN_10009e280);
  }
  _swift_task_dealloc(uVar5);
  uVar30 = *(undefined8 *)(unaff_x22 + 0x538);
  *(long *)(unaff_x22 + 0x630) = (long)((dVar29 * 33.3) / 60.0);
  *(undefined8 *)(unaff_x22 + 0x610) = 0;
  *(undefined8 *)(unaff_x22 + 0x608) = 0;
  *(undefined8 *)(unaff_x22 + 0x620) = 0;
  *(undefined8 *)(unaff_x22 + 0x618) = 0;
  *(undefined8 *)(unaff_x22 + 0x628) = 0;
  *(undefined8 *)(unaff_x22 + 0x600) = 1;
  *(undefined8 *)(unaff_x22 + 0x5f8) = uVar30;
  *(undefined8 *)(unaff_x22 + 0x5f0) = 0;
  *(undefined8 *)(unaff_x22 + 0x5e8) = 0;
  uVar23 = *(undefined8 *)(unaff_x22 + 0x588);
  uVar31 = *(undefined8 *)(unaff_x22 + 0x530);
  uVar24 = 0;
  FUN_100042468();
  _swift_allocObject();
  FUN_1000416d0(uVar31,uVar30,uVar23,600,uVar24);
  *(undefined8 *)(unaff_x22 + 0x638) = uVar23;
  puVar15 = &DAT_10054c068;
  FUN_100002f94(&DAT_10054c068,&DAT_10041d7e0);
  _swift_initStackObject();
  *(undefined8 *)(puVar15 + 0x18) = 4;
  *(undefined8 *)(puVar15 + 0x10) = 2;
  *(undefined8 *)(puVar15 + 0x20) = *(undefined8 *)PTR__kCIContextCacheIntermediates_1005217c8;
  puVar8 = PTR___type_metadata_for_Swift_Bool_100523b70;
  puVar15[0x28] = 0;
  uVar24 = *(undefined8 *)PTR__kCIContextWorkingFormat_1005217d0;
  *(undefined **)(puVar15 + 0x40) = puVar8;
  *(undefined8 *)(puVar15 + 0x48) = uVar24;
  uVar1 = *(undefined4 *)PTR__kCIFormatRGBA8_1005217d8;
  *(undefined4 *)(unaff_x22 + 0x760) = uVar1;
  uVar24 = 0;
  FUN_1000080cc();
  *(undefined8 *)(puVar15 + 0x68) = uVar24;
  *(undefined4 *)(puVar15 + 0x50) = uVar1;
  puVar14 = puVar15;
  FUN_1000069f4(puVar15);
  _swift_setDeallocating(puVar15);
  puVar8 = &DAT_10054a1b0;
  FUN_100002f94(&DAT_10054a1b0,&DAT_10041a240);
  _swift_arrayDestroy(puVar15 + 0x20,2,puVar8);
  puVar15 = &_OBJC_CLASS___CIContext;
  _objc_allocWithZone();
  FUN_1000080e0(0);
  FUN_1000036d0(&DAT_10054a620,FUN_1000080e0,&TargetProtocolConformanceDescriptor_10041b4d8);
  pNVar16 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(puVar14);
  IVar17 = objc_stub::initWithOptions_((ID)puVar15,pNVar16);
  *(ID *)(unaff_x22 + 0x640) = IVar17;
  lVar26 = *(long *)PTR__kCGColorSpaceSRGB_1005217a8;
  _CGColorSpaceCreateWithName();
  *(long *)(unaff_x22 + 0x648) = lVar26;
  if (lVar26 == 0) {
                    /* WARNING: Does not return */
    pcVar25 = (code *)SoftwareBreakpoint(1,0x10003d00c);
    (*pcVar25)();
  }
  lVar26 = (long)*(double *)(unaff_x22 + 0x598);
  if (lVar26 < 0) {
                    /* WARNING: Does not return */
    pcVar25 = (code *)SoftwareBreakpoint(1,0x10003d008);
    (*pcVar25)();
  }
  *(undefined8 *)(unaff_x22 + 0x650) =
       _TtC7WallperP33_54D9350386DEC93E9C9165595326A3B612FrameEncoder::sink;
  *(undefined8 *)(unaff_x22 + 0x658) =
       _TtC7WallperP33_54D9350386DEC93E9C9165595326A3B612FrameEncoder::submitted;
  if (lVar26 != 0) {
    *(undefined8 *)(unaff_x22 + 0x660) = *(undefined8 *)PTR__kCIInputTargetImageKey_100521820;
    *(undefined8 *)(unaff_x22 + 0x668) = *(undefined8 *)PTR__kCIInputTimeKey_100521828;
    puVar15 = PTR__kCIInputAspectRatioKey_1005217e8;
    *(undefined8 *)(unaff_x22 + 0x670) = *(undefined8 *)PTR__kCIInputScaleKey_100521818;
    *(undefined8 *)(unaff_x22 + 0x678) = *(undefined8 *)puVar15;
    *(undefined8 *)(unaff_x22 + 0x428) = 0;
    *(undefined8 *)(unaff_x22 + 0x420) = 0;
    *(undefined8 *)(unaff_x22 + 0x438) = *(undefined8 *)(unaff_x22 + 0x538);
    *(undefined8 *)(unaff_x22 + 0x430) = *(undefined8 *)(unaff_x22 + 0x530);
    *(undefined8 *)(unaff_x22 + 0x680) = 0;
    *(long *)(unaff_x22 + 0x688) = lVar26;
    *(undefined8 *)(unaff_x22 + 0x690) = 0;
    *(undefined8 *)(unaff_x22 + 0x6a0) = 0;
    *(undefined8 *)(unaff_x22 + 0x698) = 0;
    (extension_Swift)::Swift::Task::_checkCancellation();
    *(undefined8 *)(unaff_x22 + 0x6a8) = 0;
    if (*(code **)(unaff_x22 + 0x548) != (code *)0x0) {
      (**(code **)(unaff_x22 + 0x548))(0.0 / (double)(ulong)(long)*(double *)(unaff_x22 + 0x598));
    }
    pMVar19 = Swift::MainActor::typeMetadataAccessor();
    puVar15 = PTR_typeMetadataAccessor_1005246d8;
    pMVar19 = Swift::MainActor::get_shared(pMVar19,pMVar19);
    *(MainActor **)(unaff_x22 + 0x6b0) = pMVar19;
    puVar20 = &DAT_100558b80;
    FUN_1000036d0(&DAT_100558b80,puVar15,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
    UVar21 = Swift::Actor::get_unownedExecutor();
    _swift_task_switch(FUN_10003d504,UVar21.unknown,puVar20);
    return;
  }
  *(undefined8 *)(unaff_x22 + 0x740) = 0;
  *(undefined8 *)(unaff_x22 + 0x738) = 0;
  *(undefined8 *)(unaff_x22 + 0x730) = 0;
  plVar18 = (long *)0x300;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x748) = plVar18;
  *plVar18 = unaff_x22;
  plVar18[1] = (long)FUN_10003eebc;
  FUN_1000405c8(plVar18,*(undefined8 *)(unaff_x22 + 0x518));
  return;
}

