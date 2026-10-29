// rea decompile_all
// name: FUN_1001ece10
// address: 0x1001ece10
// body: available
// range: 0x1001ece10-0x1001ecfb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001ecfb4 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001ece10(void)

{
  Alignment width;
  Alignment AVar1;
  ImageRenderer *pIVar2;
  undefined *puVar3;
  ID IVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ImageRenderer *this;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x100);
  puVar3 = *(undefined **)(unaff_x22 + 0xf0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xd8);
  width.unknown = *(undefined **)(unaff_x22 + 0xa0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xe0);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x108));
  _swift_bridgeObjectRetain(uVar8);
  _swift_bridgeObjectRetain(uVar10);
  _swift_bridgeObjectRetain(uVar9);
  AVar1.unknown = puVar3;
  _swift_bridgeObjectRetain();
  SwiftUI::Alignment::get_center(AVar1);
  SwiftUI::_FrameLayout::_init(width);
  this = (ImageRenderer *)(unaff_x22 + 0x10);
  *(undefined8 *)this = uVar6;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar10;
  *(undefined **)(unaff_x22 + 0x38) = puVar3;
  pIVar2 = (ImageRenderer *)&DAT_100556f88;
  FUN_100002f94(&DAT_100556f88,&DAT_10042aec8);
  _swift_allocObject();
  SwiftUI::ImageRenderer::_init(pIVar2);
  pIVar2 = this;
  SwiftUI::ImageRenderer::set_scale(this,(CGFloat)this);
  SwiftUI::ImageRenderer::_get_cgImage(pIVar2,this);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xe0);
  if (this == (ImageRenderer *)0x0) {
    _swift_bridgeObjectRelease(uVar9);
    _swift_bridgeObjectRelease(uVar6);
    _swift_bridgeObjectRelease(uVar8);
    _swift_release(pIVar2);
    _swift_bridgeObjectRelease(uVar7);
    uVar6 = *(undefined8 *)(unaff_x22 + 200);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xd0);
    pcVar5 = FUN_1001ecfec;
  }
  else {
    uVar11 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar10 = *(undefined8 *)(unaff_x22 + 0xa8);
    puVar3 = &_OBJC_CLASS___NSImage;
    _objc_allocWithZone();
    IVar4 = objc_stub::initWithCGImage_size_((ID)puVar3,uVar11,uVar10,this);
    *(ID *)(unaff_x22 + 0x110) = IVar4;
    _swift_bridgeObjectRelease(uVar7);
    _swift_bridgeObjectRelease(uVar9);
    _swift_bridgeObjectRelease(uVar6);
    _swift_bridgeObjectRelease(uVar8);
    _swift_release(pIVar2);
    uVar6 = *(undefined8 *)(unaff_x22 + 200);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xd0);
    pcVar5 = FUN_1001ecfb8;
  }
  _swift_task_switch(pcVar5,uVar6,uVar7);
  return;
}

