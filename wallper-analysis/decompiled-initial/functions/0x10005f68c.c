// rea decompile_all
// name: FUN_10005f68c
// address: 0x10005f68c
// body: available
// range: 0x10005f68c-0x10005f8c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10005f68c(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  UUID UVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 auStack_60 [15];
  byte local_51;
  
  puVar2 = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_60 + -extraout_x8;
  UVar3 = Foundation::UUID::typeMetadataAccessor();
  lVar9 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar9 + 0x40));
  lVar6 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar7 = *(long *)(unaff_x20 + 0x40);
  if (lVar7 == 0) {
    FUN_1001b7378(0);
    FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
    SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10005f8c8);
    (*pcVar1)();
  }
  puVar2 = &DAT_10041ee68;
  _swift_getKeyPath(&DAT_10041ee68);
  puVar4 = &DAT_10041ee90;
  _swift_getKeyPath(&DAT_10041ee90);
  _swift_retain(lVar7);
  Combine::Published::_get_subscript(&local_51);
  _swift_release(puVar2);
  _swift_release(puVar4);
  _swift_release(lVar7);
  if ((local_51 & 1) == 0) {
    puVar2 = &DAT_10041ef10;
    _swift_getKeyPath(&DAT_10041ef10);
    puVar4 = &DAT_10041ef38;
    _swift_getKeyPath(&DAT_10041ef38);
    _swift_retain(lVar7);
    Combine::Published::_get_subscript(puVar8);
    _swift_release(puVar2);
    _swift_release(puVar4);
    puVar5 = puVar8;
    (**(code **)(lVar9 + 0x30))(puVar8,1,UVar3.unknown);
    if ((int)puVar5 != 1) {
      (**(code **)(lVar9 + 0x20))(lVar6,puVar8,UVar3.unknown);
      FUN_1001b6e74(param_1,lVar6);
      _swift_release(lVar7);
      (**(code **)(lVar9 + 8))(lVar6,UVar3.unknown);
      return;
    }
    _swift_release(lVar7);
    FUN_10002a29c(puVar8,&DAT_10054a9c8,&DAT_10041bbe0);
  }
  lVar6 = 0;
  FUN_10025ee04();
  (**(code **)(*(long *)(lVar6 + -8) + 0x38))(param_1,1,1,lVar6);
  return;
}

