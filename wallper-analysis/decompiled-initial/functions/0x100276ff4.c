// rea decompile_all
// name: FUN_100276ff4
// address: 0x100276ff4
// body: available
// range: 0x100276ff4-0x100277113 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002770a8 to 0x10041382c /usr/lib/swift/libswiftAVFoundation.dylib::(extension_AVFoundation)::__C::AVAsynchronousKeyValueLoading::$load (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100277110 to 0x1002a2578 FUN_1002a2578 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100276ff4(void)

{
  char cVar1;
  AVPartialAsyncProperty *pAVar2;
  long *plVar3;
  MainActor *pMVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  cVar1 = *(char *)(unaff_x22 + 0x388);
  pMVar4 = *(MainActor **)(unaff_x22 + 0x230);
  pAVar2 = (AVPartialAsyncProperty *)&DAT_100558e80;
  FUN_100002f94(&DAT_100558e80,&DAT_10042d788);
  (extension_AVFoundation)::AVFoundation::AVPartialAsyncProperty::_get_preferredTransform(pAVar2);
  *(AVPartialAsyncProperty **)(unaff_x22 + 0x2d8) = pAVar2;
  pMVar4 = Swift::MainActor::get_shared(pMVar4,(MainActor *)pAVar2);
  *(MainActor **)(unaff_x22 + 0x2e0) = pMVar4;
  if (cVar1 == '\x01') {
    plVar3 = (long *)(ulong)*(uint *)(PTR__load_100523940 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x2f0) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_1002776e8;
    (extension_AVFoundation)::__C::AVAsynchronousKeyValueLoading::_load();
    return;
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x240);
  plVar3 = (long *)0x100;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x2f8) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100277784;
  FUN_1002a2578(plVar3,unaff_x22 + 0x90,pAVar2,pMVar4,uVar5);
  return;
}

