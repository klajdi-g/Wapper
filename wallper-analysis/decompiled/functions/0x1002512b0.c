// rea decompile_all
// name: FUN_1002512b0
// address: 0x1002512b0
// body: available
// range: 0x1002512b0-0x10025140f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1002512b0(long param_1,ulong param_2)

{
  ID IVar1;
  long lVar2;
  long unaff_x20;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_48 [24];
  
  lVar2 = _TtC7Wallper21VideoWallpaperManager::windows;
  _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::windows,auStack_48,0,0);
  lVar2 = *(long *)(unaff_x20 + lVar2);
  if (*(long *)(lVar2 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar2);
    FUN_10000464c();
    if ((param_2 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar2);
    }
    else {
      IVar1 = *(ID *)(*(long *)(lVar2 + 0x38) + param_1 * 8);
      _swift_bridgeObjectRelease(lVar2);
      IVar1 = objc_stub::contentView(IVar1);
      if (((IVar1 != 0) && (IVar1 = objc_stub::layer(IVar1), IVar1 != 0)) &&
         (_swift_dynamicCastObjCClass(IVar1,&_OBJC_CLASS___AVPlayerLayer), IVar1 != 0)) {
        CATransaction::begin((ID)&_OBJC_CLASS___CATransaction);
        CATransaction::setDisableActions_((ID)&_OBJC_CLASS___CATransaction,1);
        uStack_88 = *(undefined8 *)(PTR__CATransform3DIdentity_100521a68 + 0x48);
        local_90 = *(undefined8 *)(PTR__CATransform3DIdentity_100521a68 + 0x40);
        uStack_78 = *(undefined8 *)(PTR__CATransform3DIdentity_100521a68 + 0x58);
        uStack_80 = *(undefined8 *)(PTR__CATransform3DIdentity_100521a68 + 0x50);
        uStack_68 = *(undefined8 *)(PTR__CATransform3DIdentity_100521a68 + 0x68);
        local_70 = *(undefined8 *)(PTR__CATransform3DIdentity_100521a68 + 0x60);
        uStack_58 = *(undefined8 *)(PTR__CATransform3DIdentity_100521a68 + 0x78);
        uStack_60 = *(undefined8 *)(PTR__CATransform3DIdentity_100521a68 + 0x70);
        uStack_c8 = *(undefined8 *)(PTR__CATransform3DIdentity_100521a68 + 8);
        local_d0 = *(undefined8 *)PTR__CATransform3DIdentity_100521a68;
        uStack_b8 = *(undefined8 *)(PTR__CATransform3DIdentity_100521a68 + 0x18);
        uStack_c0 = *(undefined8 *)(PTR__CATransform3DIdentity_100521a68 + 0x10);
        uStack_a8 = *(undefined8 *)(PTR__CATransform3DIdentity_100521a68 + 0x28);
        local_b0 = *(undefined8 *)(PTR__CATransform3DIdentity_100521a68 + 0x20);
        uStack_98 = *(undefined8 *)(PTR__CATransform3DIdentity_100521a68 + 0x38);
        uStack_a0 = *(undefined8 *)(PTR__CATransform3DIdentity_100521a68 + 0x30);
        objc_stub::setTransform_(IVar1,&local_d0);
        CATransaction::commit((ID)&_OBJC_CLASS___CATransaction);
      }
    }
  }
  return;
}

