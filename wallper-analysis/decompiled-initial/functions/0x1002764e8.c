// rea decompile_all
// name: FUN_1002764e8
// address: 0x1002764e8
// body: available
// range: 0x1002764e8-0x10027665b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10027664c to 0x1004147c8 _swift_continuation_await (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002764e8(void)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  ID self;
  long unaff_x22;
  double dVar6;
  
  dVar6 = (extension_in_CoreMedia):__C.CMTime.seconds.getter_:_Swift.Double::_get_seconds();
  if ((0x7fefffffffffffff < (ulong)ABS(dVar6)) ||
     (dVar6 = (extension_in_CoreMedia):__C.CMTime.seconds.getter_:_Swift.Double::_get_seconds(),
     dVar6 < 0.0)) {
    lVar3 = 0;
    uVar4 = 1;
  }
  else {
    dVar6 = (extension_in_CoreMedia):__C.CMTime.seconds.getter_:_Swift.Double::_get_seconds();
    if (0x7fefffffffffffff < (ulong)ABS(dVar6)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100276654);
      (*pcVar1)();
    }
    if (dVar6 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100276658);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= dVar6) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10027665c);
      (*pcVar1)();
    }
    uVar4 = 0;
    lVar3 = (long)dVar6;
  }
  *(undefined1 *)(unaff_x22 + 0x389) = uVar4;
  *(long *)(unaff_x22 + 0x290) = lVar3;
  self = *(ID *)(unaff_x22 + 0x218);
  uVar5 = *(undefined8 *)PTR__AVMediaTypeVideo_1005212b8;
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x1e0;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_100276c1c;
  lVar3 = unaff_x22 + 0x10;
  _swift_continuation_init(lVar3,1);
  puVar2 = &DAT_100558e70;
  FUN_100002f94(&DAT_100558e70,&DAT_10042ddf0);
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_100521110;
  *(undefined **)(unaff_x22 + 0x88) = puVar2;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(code **)(unaff_x22 + 0x60) = FUN_10029d4a8;
  *(undefined **)(unaff_x22 + 0x68) = &DAT_100536a28;
  *(long *)(unaff_x22 + 0x70) = lVar3;
  objc_stub::loadTracksWithMediaType_completionHandler_(self,uVar5);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}

