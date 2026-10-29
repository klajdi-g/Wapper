// rea decompile_all
// name: FUN_100047800
// address: 0x100047800
// body: available
// range: 0x100047800-0x100047993 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100047800(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  float minimum;
  bool bVar4;
  NSViewRepresentableContext NVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  ID IVar7;
  float maximum;
  double dVar8;
  double dVar9;
  double dVar10;
  long local_68;
  
  NVar5.unknown = &DAT_10054d3f8;
  FUN_100002f94(&DAT_10054d3f8,&DAT_10041dc88);
  SwiftUI::NSViewRepresentableContext::_get_coordinator(NVar5);
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  dVar9 = (double)unaff_x20[2];
  dVar10 = (double)unaff_x20[3];
  bVar3 = *(byte *)(unaff_x20 + 4);
  dVar8 = (double)unaff_x20[5];
  if (dVar9 == *(double *)(local_68 + 0x30)) {
    bVar4 = dVar10 != *(double *)(local_68 + 0x38);
  }
  else {
    bVar4 = true;
  }
  uVar6 = *(undefined8 *)(local_68 + 0x20);
  *(undefined8 *)(local_68 + 0x20) = uVar1;
  _swift_release(uVar6);
  uVar6 = *(undefined8 *)(local_68 + 0x28);
  *(undefined8 *)(local_68 + 0x28) = uVar2;
  _swift_retain(uVar1);
  _swift_release(uVar6);
  *(double *)(local_68 + 0x30) = dVar9;
  *(double *)(local_68 + 0x38) = dVar10;
  *(byte *)(local_68 + 0x40) = bVar3;
  *(double *)(local_68 + 0x48) = dVar8;
  dVar9 = 0.008333333333333333;
  if (0.008333333333333333 < dVar8) {
    dVar9 = dVar8;
  }
  maximum = (float)(1.0 / dVar9);
  if ((maximum < 10.0) || (IVar7 = *(ID *)(local_68 + 0x18), IVar7 == 0)) {
    _swift_retain(uVar2);
    IVar7 = *(ID *)(local_68 + 0x18);
    if (IVar7 != 0) goto LAB_100047944;
LAB_10004792c:
    if ((bVar3 & 1) != 0) {
LAB_100047958:
      if (!bVar4 && ((*(byte *)(local_68 + 0x58) ^ 0xff) & 1) == 0) goto LAB_10004796c;
    }
  }
  else {
    minimum = maximum * 0.75;
    if (maximum * 0.75 <= 10.0) {
      minimum = 10.0;
    }
    _swift_retain(uVar2);
    (extension_QuartzCore)::__C::CAFrameRateRange::_init(minimum,maximum);
    objc_stub::setPreferredFrameRateRange_(IVar7);
    IVar7 = *(ID *)(local_68 + 0x18);
    if (IVar7 == 0) goto LAB_10004792c;
LAB_100047944:
    objc_stub::setPaused_(IVar7,(ulong)((bVar3 ^ 0xffffffff) & 1));
    if ((~bVar3 & 1) == 0) goto LAB_100047958;
  }
  _CACurrentMediaTime();
  FUN_1000454b8();
LAB_10004796c:
  _swift_release(local_68);
  return;
}

