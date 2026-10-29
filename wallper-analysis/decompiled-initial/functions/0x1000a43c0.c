// rea decompile_all
// name: FUN_1000a43c0
// address: 0x1000a43c0
// body: available
// range: 0x1000a43c0-0x1000a452b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000a43c0(void)

{
  long lVar1;
  ImageRenderer IVar2;
  ImageRenderer IVar3;
  int iVar4;
  Alignment AVar5;
  ImageRenderer *pIVar6;
  ImageRenderer *this;
  undefined *self;
  ID IVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  Alignment width;
  
  lVar1 = *(long *)(unaff_x22 + 0x58);
  this = *(ImageRenderer **)(unaff_x22 + 0x60);
  width.unknown = *(undefined **)(unaff_x22 + 0x48);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x50);
  IVar2 = *(ImageRenderer *)(unaff_x22 + 0x81);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x40);
  IVar3 = *(ImageRenderer *)(unaff_x22 + 0x80);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x70));
  FUN_100029504(uVar8,this,FUN_10009e280);
  AVar5.unknown = (undefined *)0x0;
  FUN_1000aff7c();
  this[*(int *)(AVar5.unknown + 0x14)] = IVar2;
  iVar4 = *(int *)(AVar5.unknown + 0x18);
  *(undefined **)(this + iVar4) = width.unknown;
  *(undefined8 *)(this + iVar4 + 8) = uVar12;
  *(undefined2 *)(this + *(int *)(AVar5.unknown + 0x1c)) = 0;
  this[*(int *)(AVar5.unknown + 0x20)] = IVar3;
  SwiftUI::Alignment::get_center(AVar5);
  SwiftUI::_FrameLayout::_init(width);
  pIVar6 = this + *(int *)(lVar1 + 0x24);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x30);
  *(undefined8 *)(pIVar6 + 0x18) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(pIVar6 + 0x10) = uVar9;
  *(undefined8 *)(pIVar6 + 0x28) = uVar11;
  *(undefined8 *)(pIVar6 + 0x20) = uVar10;
  *(undefined8 *)(pIVar6 + 8) = uVar12;
  *(undefined8 *)pIVar6 = uVar8;
  pIVar6 = (ImageRenderer *)&DAT_10054fa28;
  FUN_100002f94(&DAT_10054fa28,&USHORT_100420fa0);
  _swift_allocObject();
  SwiftUI::ImageRenderer::_init(pIVar6);
  pIVar6 = this;
  SwiftUI::ImageRenderer::set_scale(this,(CGFloat)this);
  SwiftUI::ImageRenderer::_get_cgImage(pIVar6,this);
  if (this == (ImageRenderer *)0x0) {
    _swift_release(pIVar6);
    IVar7 = 0;
  }
  else {
    self = &_OBJC_CLASS___CIImage;
    _objc_allocWithZone();
    IVar7 = objc_stub::initWithCGImage_((ID)self,this);
    _swift_release(pIVar6);
  }
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x0001000a4528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(IVar7);
  return;
}

