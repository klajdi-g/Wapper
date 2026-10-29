// rea decompile_all
// name: FUN_100276274
// address: 0x100276274
// body: available
// range: 0x100276274-0x10027639f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100276344 to 0x10041382c /usr/lib/swift/libswiftAVFoundation.dylib::(extension_AVFoundation)::__C::AVAsynchronousKeyValueLoading::$load (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10027639c to 0x1002a2a54 FUN_1002a2a54 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100276274(void)

{
  byte bVar1;
  AVPartialAsyncProperty *pAVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x22;
  MainActor *pMVar5;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x240);
  pMVar5 = *(MainActor **)(unaff_x22 + 0x230);
  pAVar2 = (AVPartialAsyncProperty *)&DAT_100558e68;
  FUN_100002f94(&DAT_100558e68,&DAT_10042d770);
  (extension_AVFoundation)::AVFoundation::AVPartialAsyncProperty::_get_duration(pAVar2);
  *(AVPartialAsyncProperty **)(unaff_x22 + 600) = pAVar2;
  pMVar5 = Swift::MainActor::get_shared(pMVar5,(MainActor *)pAVar2);
  *(MainActor **)(unaff_x22 + 0x260) = pMVar5;
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0x1a,0,0,0x1a,0,0);
  *(byte *)(unaff_x22 + 0x388) = bVar1 & 1;
  if ((bVar1 & 1) != 0) {
    plVar3 = (long *)(ulong)*(uint *)(PTR__load_100523940 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x268) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_1002763a0;
    (extension_AVFoundation)::__C::AVAsynchronousKeyValueLoading::_load();
    return;
  }
  plVar3 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x270) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100276440;
  FUN_1002a2a54(pAVar2,pMVar5,uVar4);
  return;
}

