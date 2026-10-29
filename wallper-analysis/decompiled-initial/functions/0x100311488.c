// rea decompile_all
// name: FUN_100311488
// address: 0x100311488
// body: available
// range: 0x100311488-0x10031163f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100311488(void)

{
  _CocoaArrayWrapper _Var1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  State SVar5;
  ID self;
  long unaff_x20;
  long lVar6;
  ulong uVar7;
  long lVar8;
  _ArrayBuffer local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined *puStack_68;
  
  puVar2 = *(undefined **)(unaff_x20 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x70);
  local_80 = puVar2;
  uStack_78 = uVar3;
  local_70 = uVar3;
  puStack_68 = puVar2;
  FUN_1000087e4(&puStack_68,&local_98,&DAT_10055bd80,&DAT_100430b08);
  FUN_1000087e4(&local_70,&local_98,&DAT_10055bd88,&DAT_100430b10);
  SVar5.unknown = &DAT_10055bd78;
  FUN_100002f94(&DAT_10055bd78,&DAT_100430b00);
  SwiftUI::State::get_wrappedValue(SVar5);
  if ((ulong)local_98.unknown >> 0x3e == 0) {
    lVar6 = *(long *)(((ulong)local_98.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = local_98.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < local_98.unknown) {
      _Var1.unknown = local_98.unknown;
    }
    lVar6 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar6 != 0) {
    uVar7 = 0;
    do {
      if (((ulong)local_98.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)local_98.unknown & 0xffffffffffffff8) + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100311594);
          (*pcVar4)();
        }
        self = *(ID *)(local_98.unknown + uVar7 * 8 + 0x20);
      }
      else {
        self = uVar7;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar7,local_98);
      }
      if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100311590);
        (*pcVar4)();
      }
      lVar8 = uVar7 + 1;
      objc_stub::invalidate(self);
      uVar7 = uVar7 + 1;
    } while (lVar8 != lVar6);
  }
  _swift_bridgeObjectRelease(local_98.unknown);
  local_80 = puVar2;
  uStack_78 = uVar3;
  SwiftUI::State::get_wrappedValue(SVar5);
  _swift_bridgeObjectRelease(local_88);
  local_88 = PTR___swiftEmptyArrayStorage_100524190;
  local_98.unknown = puVar2;
  local_90 = uVar3;
  SwiftUI::State::set_wrappedValue((State *)&local_98,&local_88,SVar5.unknown);
  FUN_10002a29c(&puStack_68,&DAT_10055bd80,&DAT_100430b08);
  FUN_10002a29c(&local_70,&DAT_10055bd88,&DAT_100430b10);
  return;
}

