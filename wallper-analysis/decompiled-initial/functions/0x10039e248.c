// rea decompile_all
// name: FUN_10039e248
// address: 0x10039e248
// body: available
// range: 0x10039e248-0x10039e3c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10039e248(void)

{
  undefined8 *puVar1;
  _CocoaArrayWrapper _Var2;
  undefined *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  State SVar7;
  ID self;
  long unaff_x20;
  ulong uVar8;
  long lVar9;
  _ArrayBuffer local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined *local_70;
  undefined8 uStack_68;
  
  lVar6 = 0;
  FUN_10039c2bc();
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(lVar6 + 0x2c));
  puVar3 = (undefined *)*puVar1;
  uVar4 = puVar1[1];
  SVar7.unknown = &DAT_10055bd78;
  local_70 = puVar3;
  uStack_68 = uVar4;
  FUN_100002f94(&DAT_10055bd78,&DAT_100430b00);
  SwiftUI::State::get_wrappedValue(SVar7);
  if ((ulong)local_88.unknown >> 0x3e == 0) {
    lVar6 = *(long *)(((ulong)local_88.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var2.unknown = local_88.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < local_88.unknown) {
      _Var2.unknown = local_88.unknown;
    }
    lVar6 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  if (lVar6 != 0) {
    uVar8 = 0;
    do {
      if (((ulong)local_88.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)local_88.unknown & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10039e328);
          (*pcVar5)();
        }
        self = *(ID *)(local_88.unknown + uVar8 * 8 + 0x20);
      }
      else {
        self = uVar8;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar8,local_88);
      }
      if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10039e324);
        (*pcVar5)();
      }
      lVar9 = uVar8 + 1;
      objc_stub::invalidate(self);
      uVar8 = uVar8 + 1;
    } while (lVar9 != lVar6);
  }
  _swift_bridgeObjectRelease(local_88.unknown);
  local_70 = puVar3;
  uStack_68 = uVar4;
  _swift_retain(uVar4);
  _swift_bridgeObjectRetain(puVar3);
  SwiftUI::State::get_wrappedValue(SVar7);
  _swift_bridgeObjectRelease(local_78);
  local_78 = PTR___swiftEmptyArrayStorage_100524190;
  local_88.unknown = puVar3;
  local_80 = uVar4;
  SwiftUI::State::set_wrappedValue((State *)&local_88,&local_78,SVar7.unknown);
  _swift_release(uVar4);
  _swift_bridgeObjectRelease(puVar3);
  return;
}

