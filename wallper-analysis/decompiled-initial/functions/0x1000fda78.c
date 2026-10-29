// rea decompile_all
// name: FUN_1000fda78
// address: 0x1000fda78
// body: available
// range: 0x1000fda78-0x1000fdc03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_1000fda78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  ID self;
  undefined *self_00;
  ID IVar3;
  ID self_01;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_98 [24];
  
  _swift_getObjectType();
  lVar5 = 4;
  *(undefined8 *)
   (unaff_x20 + _TtC7WallperP33_5363C4867DD4E85C8D4034D5527F5B0A13AudioBarsView::barCount) = 4;
  *(undefined **)(unaff_x20 + _TtC7WallperP33_5363C4867DD4E85C8D4034D5527F5B0A13AudioBarsView::bars)
       = PTR___swiftEmptyArrayStorage_100524190;
  *(undefined1 *)
   (unaff_x20 + _TtC7WallperP33_5363C4867DD4E85C8D4034D5527F5B0A13AudioBarsView::isAnimating) = 0;
  self = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff80,"initWithFrame:",param_1,param_2
                             ,param_3,param_4);
  objc_stub::setWantsLayer_(self,1);
  lVar2 = _TtC7WallperP33_5363C4867DD4E85C8D4034D5527F5B0A13AudioBarsView::bars;
  do {
    self_00 = &_OBJC_CLASS___CALayer;
    _objc_allocWithZone();
    IVar3 = objc_stub::init((ID)self_00);
    self_01 = objc_stub::layer(self);
    objc_stub::addSublayer_(self_01,IVar3);
    _swift_beginAccess(self + lVar2,auStack_98,0x21,0);
    Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
    uVar4 = *(ulong *)(self + lVar2) & 0xffffffffffffff8;
    uVar1 = *(ulong *)(uVar4 + 0x10);
    uVar4 = *(ulong *)(uVar4 + 0x18);
    if (uVar4 >> 1 <= uVar1) {
      Swift::Array<undefined>::__createNewBuffer(1 < uVar4,uVar1 + 1,1);
    }
    Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(uVar1,IVar3);
    _swift_endAccess(auStack_98);
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return self;
}

