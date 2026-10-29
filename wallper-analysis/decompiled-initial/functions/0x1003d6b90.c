// rea decompile_all
// name: FUN_1003d6b90
// address: 0x1003d6b90
// body: available
// range: 0x1003d6b90-0x1003d6dbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003d6b90(undefined8 param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined *puVar3;
  URL UVar4;
  long lVar5;
  State SVar6;
  URL UVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar9;
  undefined *puVar10;
  code *pcVar11;
  long lVar12;
  _StringGuts local_90;
  _StringGuts _Stack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar3 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)&local_90 - extraout_x8;
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar12 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar12 + 0x40));
  puVar10 = (undefined *)(lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  lVar5 = 0;
  FUN_1003e4bc8();
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(lVar5 + 0x40));
  local_70 = puVar1[2];
  uStack_78 = puVar1[1];
  local_80 = *puVar1;
  SVar6.unknown = &DAT_10054ab90;
  puVar3 = &DAT_10041bdb0;
  FUN_100002f94();
  SwiftUI::State::get_wrappedValue(SVar6);
  FUN_1003cffb8();
  if (_Stack_88.unknown == (undefined *)0x0) {
    _swift_bridgeObjectRelease(puVar3);
  }
  else {
    if ((local_90.unknown == SVar6.unknown) && (_Stack_88.unknown == puVar3)) {
      _swift_bridgeObjectRelease(_Stack_88.unknown);
      _swift_bridgeObjectRelease(puVar3);
    }
    else {
      bVar2 = Swift::_stringCompareWithSmolCheck
                        (local_90,_Stack_88,(_StringComparisonResult)(__int8)SVar6.unknown);
      _swift_bridgeObjectRelease(_Stack_88.unknown);
      _swift_bridgeObjectRelease(puVar3);
      if (!bVar2) goto LAB_1003d6d70;
    }
    SVar6.unknown = &DAT_100560760;
    FUN_100002f94(&DAT_100560760,&DAT_100436168);
    SwiftUI::State::get_wrappedValue(SVar6);
    lVar5 = lVar9;
    (**(code **)(lVar12 + 0x30))(lVar9,1,UVar4.unknown);
    if ((int)lVar5 == 1) {
      FUN_10002a29c(lVar9,&DAT_100553d90,&DAT_10041bf10);
    }
    else {
      pcVar11 = *(code **)(lVar12 + 0x20);
      UVar7.unknown = puVar10;
      (*pcVar11)(puVar10,lVar9,UVar4.unknown);
      bVar2 = Foundation::URL::get_isFileURL(UVar7);
      if (!bVar2) {
        (*pcVar11)(param_1,puVar10,UVar4.unknown);
        uVar8 = 0;
        goto LAB_1003d6d74;
      }
      (**(code **)(lVar12 + 8))(puVar10,UVar4.unknown);
    }
  }
LAB_1003d6d70:
  uVar8 = 1;
LAB_1003d6d74:
  (**(code **)(lVar12 + 0x38))(param_1,uVar8,1,UVar4.unknown);
  return;
}

