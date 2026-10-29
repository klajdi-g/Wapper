// rea decompile_all
// name: FUN_10027dd18
// address: 0x10027dd18
// body: available
// range: 0x10027dd18-0x10027e04f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10027deb8 to 0x100413d60 /usr/lib/swift/libswift_Concurrency.dylib::Swift::$withCheckedThrowingContinuation (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10027e04c to 0x1004147c8 _swift_continuation_await (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10027dd18(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  URLRequest UVar5;
  URLRequest *this;
  URL UVar6;
  long *plVar7;
  ulong uVar8;
  UnsafeContinuation<undefined,undefined> continuation;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  NSURLRequest *pNVar12;
  ID IVar13;
  long lVar14;
  long lVar15;
  long unaff_x22;
  ulong uVar16;
  long lVar17;
  undefined1 auVar18 [16];
  String SVar19;
  String isolation;
  String function;
  
  UVar5 = Foundation::URLRequest::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x98) = UVar5.unknown;
  lVar14 = *(long *)(UVar5.unknown + -8);
  *(long *)(unaff_x22 + 0xa0) = lVar14;
  this = (URLRequest *)(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_task_alloc();
  *(URLRequest **)(unaff_x22 + 0xa8) = this;
  UVar6 = Foundation::URL::typeMetadataAccessor();
  auVar18 = *(undefined1 (*) [16])(unaff_x22 + 0x80);
  *(undefined **)(unaff_x22 + 0xb0) = UVar6.unknown;
  lVar14 = *(long *)(UVar6.unknown + -8);
  *(long *)(unaff_x22 + 0xb8) = lVar14;
  uVar8 = *(long *)(lVar14 + 0x40) + 0xf;
  UVar6.unknown = (undefined *)(uVar8 & 0xfffffffffffffff0);
  _swift_task_alloc();
  (**(code **)(lVar14 + 0x10))();
  Foundation::URLRequest::init(UVar6,(NSURLRequestCachePolicy)0x0,60.0);
  _swift_task_dealloc(UVar6.unknown);
  Foundation::URLRequest::set_cachePolicy(this,(NSURLRequestCachePolicy)0x1);
  SVar19.bridgeObject = (void *)0xe800000000000000;
  SVar19.str = (char *)0x797469746e656469;
  Foundation::URLRequest::_setValue(SVar19,(URLRequest)0x452d747065636341);
  auVar18 = NEON_ext(auVar18,auVar18,8,1);
  *(long *)(unaff_x22 + 0x68) = auVar18._8_8_;
  *(long *)(unaff_x22 + 0x60) = auVar18._0_8_;
  *(URLRequest **)(unaff_x22 + 0x70) = this;
  bVar4 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar4 & 1) != 0) {
    plVar7 = (long *)(ulong)*(uint *)(PTR__withCheckedThrowingContinuation_1005247a8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xc0) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_10027e050;
    isolation.str = *(ulong *)(unaff_x22 + 0x78);
    isolation.bridgeObject = (void *)0x0;
    Swift::_withCheckedThrowingContinuation(isolation);
    return;
  }
  IVar13 = *(ID *)(unaff_x22 + 0x80);
  lVar14 = *(long *)(unaff_x22 + 0x88);
  uVar8 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 200) = uVar8;
  *(ulong *)(unaff_x22 + 0x38) = uVar8;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_10027e0ac;
  continuation.unknown = (undefined *)(unaff_x22 + 0x10);
  _swift_continuation_init(continuation.unknown,1);
  puVar9 = &DAT_100558bf8;
  FUN_100002f94(&DAT_100558bf8,&DAT_10042d268);
  lVar17 = *(long *)(puVar9 + -8);
  lVar15 = *(long *)(lVar17 + 0x40);
  uVar8 = lVar15 + 0xf;
  uVar10 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar10);
  FUN_100002f94(&DAT_100558c00,&DAT_10042b170);
  function.bridgeObject = (void *)0x80000001004e2fb0;
  function.str = (char *)0xd00000000000002b;
  Swift::CheckedContinuation::init(continuation,function);
  UVar5.unknown = (undefined *)(uVar8 & 0xfffffffffffffff0);
  _swift_task_alloc();
  (**(code **)(lVar17 + 0x10))();
  uVar8 = (ulong)*(byte *)(lVar17 + 0x50);
  uVar16 = uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff);
  puVar11 = &DAT_1005361d8;
  _swift_allocObject(&DAT_1005361d8,uVar16 + lVar15,uVar8 | 7);
  (**(code **)(lVar17 + 0x20))(puVar11 + uVar16,UVar5.unknown,puVar9);
  puVar1 = (undefined8 *)
           (lVar14 + _TtC7WallperP33_4537C798EE20D91316D9ABA5C600337924DownloadProgressDelegate::
                     onComplete);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = thunk_FUN_10027f68c;
  puVar1[1] = puVar11;
  FUN_10002f6dc(uVar2,uVar3);
  _swift_task_dealloc();
  pNVar12 = Foundation::URLRequest::_bridgeToObjectiveC(UVar5);
  IVar13 = objc_stub::downloadTaskWithRequest_(IVar13,pNVar12);
  objc_stub::resume(IVar13);
  (**(code **)(lVar17 + 8))(uVar10,puVar9);
  _swift_task_dealloc(uVar10);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}

