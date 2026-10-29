// rea decompile_all
// name: FUN_100009c1c
// address: 0x100009c1c
// body: available
// range: 0x100009c1c-0x100009f73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100009c1c(void)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  UUID UVar3;
  State SVar4;
  StateObject SVar5;
  undefined *puVar6;
  undefined *puVar7;
  _ArrayBuffer self;
  UUID UVar8;
  long extraout_x8;
  double *pdVar9;
  double *pdVar10;
  long lVar11;
  long unaff_x20;
  long lVar12;
  long lVar13;
  double dVar14;
  String SVar15;
  undefined1 auStack_a0 [8];
  double local_98;
  State local_90;
  void *pvStack_88;
  _ArrayBuffer local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  
  UVar3 = Foundation::UUID::typeMetadataAccessor();
  lVar13 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar13 + 0x40));
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x78);
  local_80.unknown = *(undefined **)(unaff_x20 + 0x70);
  local_70 = *(undefined8 *)(unaff_x20 + 0x80);
  SVar4.unknown = &DAT_10054ab90;
  FUN_100002f94(&DAT_10054ab90,&DAT_10041bdb0);
  SwiftUI::State::get_wrappedValue(SVar4);
  if (pvStack_88 == (void *)0x0) {
    SVar5.unknown = *(undefined **)(unaff_x20 + 0x48);
    FUN_10016ed68(0);
    FUN_1000036d0(&DAT_10054aba0,FUN_10016ed68,&TargetProtocolConformanceDescriptor_1004295e8);
    SwiftUI::StateObject::get_wrappedValue(SVar5);
    puVar6 = &DAT_10041bdb8;
    _swift_getKeyPath(&DAT_10041bdb8);
    puVar7 = &DAT_10041bde0;
    _swift_getKeyPath(&DAT_10041bde0);
    Combine::Published::_get_subscript(&local_80,SVar5.unknown,puVar6,puVar7);
    _swift_release(puVar6);
    _swift_release(puVar7);
    _swift_release(SVar5.unknown);
    self.unknown = local_80.unknown;
    if ((ulong)local_80.unknown >> 0x3e == 0) {
      lVar12 = *(long *)(((ulong)local_80.unknown & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var1.unknown = local_80.unknown & 0xffffffffffffff8;
      if ((undefined *)0x7fffffffffffffff < local_80.unknown) {
        _Var1.unknown = local_80.unknown;
      }
      lVar12 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    }
    if (lVar12 == 0) goto LAB_100009f04;
    if (((ulong)self.unknown & 0xc000000000000001) == 0) {
      if (*(long *)(((ulong)self.unknown & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100009f70);
        (*pcVar2)();
      }
    }
    else {
      Swift::_ArrayBuffer::__getElementSlowPath(0,self);
    }
    _swift_bridgeObjectRelease();
    FUN_100174ed8();
    if (self.unknown == (undefined *)0x0) {
      UVar8 = Foundation::UUID::init();
      SVar15 = Foundation::UUID::get_uuidString(UVar8);
      (**(code **)(lVar13 + 8))
                (auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar3.unknown);
    }
    else {
      objc_stub::stringValue((ID)self.unknown);
      SVar15 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    }
  }
  else {
    SVar15.bridgeObject = pvStack_88;
    SVar15.str = local_90.unknown;
  }
  self.unknown = SVar15.bridgeObject;
  lVar12 = *(long *)(unaff_x20 + 0x100);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0xe8);
  local_80.unknown = *(undefined **)(unaff_x20 + 0xe0);
  pvStack_88 = *(void **)(unaff_x20 + 0xe8);
  local_90.unknown = *(undefined **)(unaff_x20 + 0xe0);
  local_68 = uStack_78;
  FUN_1000087e4(&local_68,&local_98,&DAT_10054b508,&DAT_10041c8a0);
  SVar4.unknown = &DAT_10054ac50;
  FUN_100002f94(&DAT_10054ac50,&DAT_10041dd60);
  SwiftUI::State::get_wrappedValue(SVar4);
  lVar13 = *(long *)(lVar12 + 0x10);
  if (lVar13 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100009f74);
    (*pcVar2)();
  }
  pdVar9 = (double *)(lVar12 + 0x20);
  lVar12 = 1;
  pdVar10 = pdVar9;
  lVar11 = lVar13;
  do {
    if (*pdVar10 == local_98) {
      if (lVar13 <= lVar12) {
        lVar12 = 0;
      }
      pdVar9 = pdVar9 + lVar12;
      break;
    }
    lVar12 = lVar12 + 1;
    lVar11 = lVar11 + -1;
    pdVar10 = pdVar10 + 1;
  } while (lVar11 != 0);
  dVar14 = *pdVar9;
  pvStack_88 = *(void **)(unaff_x20 + 0xe8);
  local_90.unknown = *(undefined **)(unaff_x20 + 0xe0);
  local_98 = dVar14;
  SwiftUI::State::set_wrappedValue(&local_90,&local_98,SVar4.unknown);
  FUN_10002a29c(&local_80,&DAT_10054ac50,&DAT_10041dd60);
  if (DAT_100557bb0 != -1) {
    _swift_once(&DAT_100557bb0,FUN_100233158);
  }
  FUN_100237f8c(dVar14,SVar15.str,self.unknown);
LAB_100009f04:
  _swift_bridgeObjectRelease(self.unknown);
  return;
}

