// rea decompile_all
// name: FUN_1001e5d18
// address: 0x1001e5d18
// body: available
// range: 0x1001e5d18-0x1001e5e93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001e5e3c to 0x10041382c /usr/lib/swift/libswiftAVFoundation.dylib::(extension_AVFoundation)::__C::AVAsynchronousKeyValueLoading::$load (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1001e5e90 to 0x1002a22e0 FUN_1002a22e0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001e5d18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 uVar2;
  AVPartialAsyncProperty *pAVar3;
  long *plVar4;
  undefined8 extraout_x1;
  undefined8 uVar5;
  undefined8 extraout_x1_00;
  long lVar6;
  ID self;
  long unaff_x22;
  
  self = *(ID *)(unaff_x22 + 0x368);
  objc_stub::setMaximumSize_(self,0x408c200000000000,0x407fa00000000000);
  uVar2 = 600;
  uVar5 = extraout_x1;
  ___extension_in_CoreMedia____C_CMTime_init_seconds__Swift_Double_preferredTimescale__Swift_Int32___>___C_CMTime
            (0x3ff0000000000000);
  *(undefined8 *)(unaff_x22 + 1000) = uVar2;
  *(int *)(unaff_x22 + 0x3f0) = (int)uVar5;
  *(int *)(unaff_x22 + 0x3f4) = (int)((ulong)uVar5 >> 0x20);
  *(undefined8 *)(unaff_x22 + 0x3f8) = param_3;
  lVar6 = unaff_x22 + 1000;
  objc_stub::setRequestedTimeToleranceBefore_(self);
  uVar2 = 600;
  uVar5 = extraout_x1_00;
  ___extension_in_CoreMedia____C_CMTime_init_seconds__Swift_Double_preferredTimescale__Swift_Int32___>___C_CMTime
            (0x3ff0000000000000);
  *(undefined8 *)(unaff_x22 + 0x400) = uVar2;
  *(int *)(unaff_x22 + 0x408) = (int)uVar5;
  *(int *)(unaff_x22 + 0x40c) = (int)((ulong)uVar5 >> 0x20);
  *(long *)(unaff_x22 + 0x410) = lVar6;
  objc_stub::setRequestedTimeToleranceAfter_(self,unaff_x22 + 0x400);
  pAVar3 = (AVPartialAsyncProperty *)&DAT_100556fa0;
  FUN_100002f94(&DAT_100556fa0,&DAT_10042af10);
  (extension_AVFoundation)::AVFoundation::AVPartialAsyncProperty::_get_duration(pAVar3);
  *(AVPartialAsyncProperty **)(unaff_x22 + 0x380) = pAVar3;
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0x1a,0,0,0x1a,0,0);
  if ((bVar1 & 1) != 0) {
    plVar4 = (long *)(ulong)*(uint *)(PTR__load_100523940 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x388) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_1001e5e94;
    (extension_AVFoundation)::__C::AVAsynchronousKeyValueLoading::_load();
    return;
  }
  plVar4 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x390) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1001e5f20;
  FUN_1002a22e0(pAVar3,0,0);
  return;
}

