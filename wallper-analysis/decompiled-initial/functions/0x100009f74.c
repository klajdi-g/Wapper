// rea decompile_all
// name: FUN_100009f74
// address: 0x100009f74
// body: available
// range: 0x100009f74-0x10000a1c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

String FUN_100009f74(void)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  UUID UVar3;
  State SVar4;
  StateObject SVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  _ArrayBuffer self;
  UUID UVar9;
  long extraout_x8;
  long unaff_x20;
  long lVar10;
  String SVar11;
  char *local_80;
  void *local_78;
  _ArrayBuffer local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  UVar3 = Foundation::UUID::typeMetadataAccessor();
  lVar10 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar10 + 0x40));
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x78);
  local_70.unknown = *(undefined **)(unaff_x20 + 0x70);
  local_60 = *(undefined8 *)(unaff_x20 + 0x80);
  SVar4.unknown = &DAT_10054ab90;
  FUN_100002f94(&DAT_10054ab90,&DAT_10041bdb0);
  SwiftUI::State::get_wrappedValue(SVar4);
  if (local_78 == (void *)0x0) {
    SVar5.unknown = *(undefined **)(unaff_x20 + 0x48);
    FUN_10016ed68(0);
    FUN_1000036d0(&DAT_10054aba0,FUN_10016ed68,&TargetProtocolConformanceDescriptor_1004295e8);
    SwiftUI::StateObject::get_wrappedValue(SVar5);
    puVar6 = &DAT_10041bdb8;
    _swift_getKeyPath(&DAT_10041bdb8);
    puVar7 = &DAT_10041bde0;
    _swift_getKeyPath(&DAT_10041bde0);
    Combine::Published::_get_subscript(&local_70,SVar5.unknown,puVar6,puVar7);
    _swift_release(puVar6);
    _swift_release(puVar7);
    _swift_release(SVar5.unknown);
    self.unknown = local_70.unknown;
    if ((ulong)local_70.unknown >> 0x3e == 0) {
      lVar8 = *(long *)(((ulong)local_70.unknown & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var1.unknown = local_70.unknown & 0xffffffffffffff8;
      if ((undefined *)0x7fffffffffffffff < local_70.unknown) {
        _Var1.unknown = local_70.unknown;
      }
      lVar8 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    }
    if (lVar8 == 0) {
      _swift_bridgeObjectRelease(self.unknown);
      SVar11 = (String)ZEXT816(0);
    }
    else {
      if (((ulong)self.unknown & 0xc000000000000001) == 0) {
        if (*(long *)(((ulong)self.unknown & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10000a1c8);
          (*pcVar2)();
        }
      }
      else {
        Swift::_ArrayBuffer::__getElementSlowPath(0,self);
      }
      _swift_bridgeObjectRelease();
      FUN_100174ed8();
      if (self.unknown == (undefined *)0x0) {
        UVar9 = Foundation::UUID::init();
        SVar11 = Foundation::UUID::get_uuidString(UVar9);
        (**(code **)(lVar10 + 8))
                  ((long)&local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar3.unknown);
      }
      else {
        objc_stub::stringValue((ID)self.unknown);
        SVar11 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      }
    }
  }
  else {
    SVar11.bridgeObject = local_78;
    SVar11.str = local_80;
  }
  return SVar11;
}

