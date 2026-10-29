// rea decompile_all
// name: FUN_10009d2c0
// address: 0x10009d2c0
// body: available
// range: 0x10009d2c0-0x10009d5ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10009d2c0(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *self;
  ID IVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long local_a0 [3];
  undefined1 auStack_88 [24];
  
  lVar3 = param_1;
  _CGImageGetWidth();
  lVar8 = param_1;
  _CGImageGetHeight(param_1);
  self = &_OBJC_CLASS___NSImage;
  _objc_allocWithZone();
  IVar4 = objc_stub::initWithCGImage_size_((ID)self,(double)lVar3,(double)lVar8,param_1);
  if (DAT_10054f738 != -1) {
    _swift_once(&DAT_10054f738,FUN_10009a974);
  }
  _swift_beginAccess(&DAT_10054f740,auStack_88,0x20,0);
  lVar3 = DAT_10054f740;
  lVar8 = *(long *)(DAT_10054f740 + 0x10);
  _swift_bridgeObjectRetain_n(param_3,2);
  if (lVar8 != 0) {
    _swift_bridgeObjectRetain(lVar3);
    uVar7 = param_3;
    FUN_10000464c();
    if ((uVar7 & 1) != 0) {
      _swift_endAccess(auStack_88);
      _swift_bridgeObjectRelease(param_3);
      _swift_bridgeObjectRelease(lVar3);
      goto LAB_10009d434;
    }
    _swift_bridgeObjectRelease(lVar3);
  }
  _swift_endAccess(auStack_88);
  if (DAT_10054f748 != -1) {
    _swift_once(&DAT_10054f748,FUN_10009a988);
  }
  _swift_beginAccess(&DAT_10054f750,auStack_88,0x21,0);
  uVar7 = DAT_10054f750;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar5 = uVar7;
  if ((DAT_10054f750 & 1) == 0) {
    uVar5 = 0;
    DAT_10054f750 = uVar7;
    FUN_1001c432c(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
  }
  uVar7 = *(ulong *)(uVar5 + 0x10);
  uVar6 = uVar5;
  if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar7) {
    uVar6 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
    DAT_10054f750 = uVar5;
    FUN_1001c432c(uVar6,uVar7 + 1,1,uVar5);
  }
  *(ulong *)(uVar6 + 0x10) = uVar7 + 1;
  lVar3 = uVar6 + uVar7 * 0x10;
  *(undefined8 *)(lVar3 + 0x20) = param_2;
  *(ulong *)(lVar3 + 0x28) = param_3;
  DAT_10054f750 = uVar6;
  _swift_endAccess(auStack_88);
LAB_10009d434:
  _swift_beginAccess(&DAT_10054f740,auStack_88,0x21,0);
  lVar3 = DAT_10054f740;
  _swift_isUniquelyReferenced_nonNull_native(DAT_10054f740);
  local_a0[0] = DAT_10054f740;
  DAT_10054f740 = 0x8000000000000000;
  FUN_100340cbc(IVar4,param_2,param_3,lVar3);
  _swift_bridgeObjectRelease(param_3);
  DAT_10054f740 = local_a0[0];
  _swift_endAccess(auStack_88);
  if (DAT_10054f748 != -1) {
    _swift_once(&DAT_10054f748,FUN_10009a988);
  }
  _swift_beginAccess(&DAT_10054f750,auStack_88,0,0);
  uVar7 = DAT_10054f750;
  if (4 < *(ulong *)(DAT_10054f750 + 0x10)) {
    _swift_beginAccess(&DAT_10054f750,local_a0,0x21,0);
    uVar1 = *(undefined8 *)(uVar7 + 0x20);
    uVar2 = *(undefined8 *)(uVar7 + 0x28);
    _swift_bridgeObjectRetain(uVar2);
    FUN_100288288(0,1);
    _swift_endAccess(local_a0);
    _swift_beginAccess(&DAT_10054f740,local_a0,0x21,0);
    FUN_10027f2f0(uVar1,uVar2);
    _swift_endAccess(local_a0);
    _swift_bridgeObjectRelease(uVar2);
  }
  return IVar4;
}

