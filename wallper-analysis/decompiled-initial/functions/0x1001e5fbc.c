// rea decompile_all
// name: FUN_1001e5fbc
// address: 0x1001e5fbc
// body: available
// range: 0x1001e5fbc-0x1001e6083 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001e6080 to 0x1004137f0 /usr/lib/swift/libswiftAVFoundation.dylib::(extension_AVFoundation)::__C::AVAssetImageGenerator::$image (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001e5fbc(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  double dVar5;
  double dVar6;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x398);
  uVar4 = CONCAT44(*(undefined4 *)(unaff_x22 + 0x430),*(undefined4 *)(unaff_x22 + 0x434));
  uVar2 = uVar4;
  dVar5 = (extension_in_CoreMedia):__C.CMTime.seconds.getter_:_Swift.Double::_get_seconds();
  dVar6 = 1.0;
  if (dVar5 <= 2.0) {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x398);
    dVar6 = (extension_in_CoreMedia):__C.CMTime.seconds.getter_:_Swift.Double::_get_seconds();
    dVar6 = dVar6 * 0.1;
    uVar2 = uVar4;
  }
  uVar4 = 600;
  ___extension_in_CoreMedia____C_CMTime_init_seconds__Swift_Double_preferredTimescale__Swift_Int32___>___C_CMTime
            (dVar6,600);
  plVar1 = (long *)(ulong)*(uint *)(PTR__image_100523930 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x3b0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1001e6b20;
  (extension_AVFoundation)::__C::AVAssetImageGenerator::_image(uVar4,uVar2,uVar3);
  return;
}

