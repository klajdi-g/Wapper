// rea decompile_all
// name: FUN_100092e18
// address: 0x100092e18
// body: available
// range: 0x100092e18-0x1000931c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100092f54 to 0x10041469c _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100092e18(undefined8 param_1,uint param_2)

{
  long lVar1;
  undefined8 uVar2;
  Alignment AVar3;
  ImageRenderer *pIVar4;
  ImageRenderer *pIVar5;
  ulong uVar6;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined2 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  param_2 = param_2 & 0xff;
  if (param_2 < 6) {
    if (param_2 == 3) {
      uVar2 = 0;
    }
    else {
      if (param_2 != 4) {
        if (param_2 == 5) {
          FUN_100091acc(0);
          FUN_1000921dc(param_1);
          FUN_100092cb0(param_1);
          return 0;
        }
        return param_1;
      }
      uVar2 = 1;
    }
    FUN_100091acc(uVar2);
    FUN_1000921dc(param_1);
    return 0;
  }
  if (1 < param_2 - 6) {
    return param_1;
  }
  if (DAT_10054ed30 != -1) {
    _swift_once(&DAT_10054ed30,FUN_1000787bc);
  }
  uVar6 = 0;
  _swift_beginAccess(&DAT_10054ed38,&local_d8,0x20,0);
  lVar1 = DAT_10054ed38;
  if (*(long *)(DAT_10054ed38 + 0x10) == 0) {
LAB_100092f60:
    AVar3.unknown = (undefined *)&local_d8;
    _swift_endAccess();
    SwiftUI::Alignment::get_center(AVar3);
    SwiftUI::_FrameLayout::_init((Alignment)0x4079000000000000);
    local_d8 = local_a0;
    local_d0 = local_98;
    local_c8 = local_90;
    local_c0 = local_88;
    uStack_b0 = uStack_78;
    local_b8 = local_80;
    local_a8 = 0;
    pIVar4 = (ImageRenderer *)&DAT_10054ee08;
    FUN_100002f94(&DAT_10054ee08,&DAT_1004202f0);
    _swift_allocObject();
    pIVar5 = (ImageRenderer *)&local_d8;
    SwiftUI::ImageRenderer::_init(pIVar4);
    pIVar4 = pIVar5;
    SwiftUI::ImageRenderer::set_scale(pIVar5,(CGFloat)pIVar5);
    SwiftUI::ImageRenderer::_get_nsImage(pIVar4,pIVar5);
    if (pIVar5 == (ImageRenderer *)0x0) {
      _swift_release(pIVar4);
    }
    else {
      FUN_1000913ac();
      _swift_release(pIVar4);
    }
  }
  else {
    _swift_bridgeObjectRetain(DAT_10054ed38);
    FUN_10000464c();
    if ((uVar6 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar1);
      goto LAB_100092f60;
    }
    _swift_endAccess(&local_d8);
    _swift_bridgeObjectRelease(lVar1);
    FUN_1000911d0(0x6168732d6b636564,0xeb00000000776f64);
  }
  _swift_beginAccess(&DAT_10054ed38,&local_d8,0x20,0);
  lVar1 = DAT_10054ed38;
  if (*(long *)(DAT_10054ed38 + 0x10) != 0) {
    _swift_bridgeObjectRetain(DAT_10054ed38);
    uVar6 = 0xea0000000000776f;
    FUN_10000464c();
    if ((uVar6 & 1) != 0) {
      _swift_endAccess(&local_d8);
      _swift_bridgeObjectRelease(lVar1);
      FUN_1000911d0(0x646168732d6d7261,0xea0000000000776f);
      goto LAB_100093174;
    }
    _swift_bridgeObjectRelease(lVar1);
  }
  AVar3.unknown = (undefined *)&local_d8;
  _swift_endAccess();
  SwiftUI::Alignment::get_center(AVar3);
  SwiftUI::_FrameLayout::_init((Alignment)0x4084000000000000);
  local_d8 = local_70;
  local_d0 = local_68;
  local_c8 = local_60;
  local_c0 = local_58;
  uStack_b0 = uStack_48;
  local_b8 = local_50;
  local_a8 = 0;
  pIVar4 = (ImageRenderer *)&DAT_10054ee10;
  FUN_100002f94(&DAT_10054ee10,&DAT_1004202f8);
  _swift_allocObject();
  pIVar5 = (ImageRenderer *)&local_d8;
  SwiftUI::ImageRenderer::_init(pIVar4);
  pIVar4 = pIVar5;
  SwiftUI::ImageRenderer::set_scale(pIVar5,(CGFloat)pIVar5);
  SwiftUI::ImageRenderer::_get_nsImage(pIVar4,pIVar5);
  if (pIVar5 == (ImageRenderer *)0x0) {
    _swift_release(pIVar4);
  }
  else {
    FUN_1000913ac();
    _swift_release(pIVar4);
  }
LAB_100093174:
  FUN_100091acc(0);
  FUN_1000921dc(param_1);
  FUN_100092cb0(param_1);
  return 0;
}

