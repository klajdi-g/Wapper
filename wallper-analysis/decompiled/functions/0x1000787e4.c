// rea decompile_all
// name: FUN_1000787e4
// address: 0x1000787e4
// body: available
// range: 0x1000787e4-0x1000789b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ImageRenderer *
FUN_1000787e4(Alignment param_1,long param_2,ulong param_3,code *param_4,undefined8 param_5,
             ImageRenderer *param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  ImageRenderer *pIVar3;
  Alignment AVar4;
  ulong uVar5;
  ImageRenderer *this;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (DAT_10054ed30 != -1) {
    _swift_once(&DAT_10054ed30,FUN_1000787bc);
  }
  _swift_beginAccess(&DAT_10054ed38,&local_c8,0x20,0);
  lVar1 = DAT_10054ed38;
  if (*(long *)(DAT_10054ed38 + 0x10) != 0) {
    _swift_bridgeObjectRetain(DAT_10054ed38);
    lVar2 = param_2;
    uVar5 = param_3;
    FUN_10000464c();
    if ((uVar5 & 1) != 0) {
      pIVar3 = *(ImageRenderer **)(*(long *)(lVar1 + 0x38) + lVar2 * 8);
      _swift_endAccess(&local_c8);
      _swift_bridgeObjectRelease(lVar1);
      FUN_1000911d0(param_2,param_3);
      return pIVar3;
    }
    _swift_bridgeObjectRelease(lVar1);
  }
  AVar4.unknown = (undefined *)&local_c8;
  _swift_endAccess();
  (*param_4)();
  SwiftUI::Alignment::get_center(AVar4);
  SwiftUI::_FrameLayout::_init(param_1);
  local_c8 = local_90;
  local_c0 = local_88;
  local_b8 = local_80;
  local_b0 = local_78;
  uStack_a0 = uStack_68;
  local_a8 = local_70;
  local_98 = 0;
  FUN_100002f94(param_6,param_7);
  _swift_allocObject();
  pIVar3 = (ImageRenderer *)&local_c8;
  SwiftUI::ImageRenderer::_init(param_6);
  this = pIVar3;
  SwiftUI::ImageRenderer::set_scale(pIVar3,(CGFloat)pIVar3);
  SwiftUI::ImageRenderer::_get_nsImage(this,pIVar3);
  if (pIVar3 == (ImageRenderer *)0x0) {
    _swift_release(this);
    pIVar3 = (ImageRenderer *)0x0;
  }
  else {
    FUN_1000913ac();
    _swift_release(this);
  }
  return pIVar3;
}

