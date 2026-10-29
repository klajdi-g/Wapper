// rea decompile_all
// name: FUN_10004384c
// address: 0x10004384c
// body: available
// range: 0x10004384c-0x1000439bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10004384c(undefined8 param_1,long param_2,ContiguousArray param_3)

{
  uint uVar1;
  RGBColorSpace RVar2;
  undefined7 extraout_var;
  Color CVar3;
  ContiguousArray CVar4;
  long extraout_x8;
  long lVar5;
  long lVar6;
  ContiguousArray oldCount;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_90 [8];
  undefined *local_88;
  
  RVar2 = SwiftUI::Color::RGBColorSpace::typeMetadataAccessor();
  lVar6 = *(long *)(CONCAT71(extraout_var,RVar2.value) + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar6 + 0x40));
  FUN_100043268(param_1);
  lVar5 = *(long *)(param_2 + 0x10);
  if (lVar5 == 0) {
    _swift_bridgeObjectRelease(param_2);
    local_88 = PTR___swiftEmptyArrayStorage_100524190;
  }
  else {
    local_88 = PTR___swiftEmptyArrayStorage_100524190;
    Swift::ContiguousArray::_reserveCapacity(lVar5,param_3);
    uVar1 = *(uint *)
             PTR___enum_case_for_SwiftUI_Color_RGBColorSpace_sRGB_SwiftUI_Color_RGBColorSpace_Type___>_SwiftUI_Color_RGBColorSpace_1005231e0
    ;
    pcVar7 = *(code **)(lVar6 + 0x68);
    lVar6 = 0x20;
    do {
      uVar9 = ((undefined8 *)(param_2 + lVar6))[1];
      uVar8 = *(undefined8 *)(param_2 + lVar6);
      CVar4.unknown = (undefined *)(ulong)uVar1;
      (*pcVar7)(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),(undefined *)(ulong)uVar1,
                CONCAT71(extraout_var,RVar2.value));
      CVar3 = SwiftUI::Color::init
                        ((RGBColorSpace)
                         (__int8)(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)),
                         (double)(float)uVar8,(double)(float)((ulong)uVar8 >> 0x20),
                         (double)(float)uVar9,1.0);
      Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique
                ((ContiguousArray)CVar3.unknown);
                    /* WARNING: Load size is inaccurate */
      oldCount.unknown = local_88[0x10];
      Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer((__int64)oldCount.unknown,CVar4)
      ;
      Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity(oldCount.unknown,CVar3.unknown)
      ;
      Swift::ContiguousArray::__endMutation(oldCount);
      lVar6 = lVar6 + 0x10;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    _swift_bridgeObjectRelease(param_2);
  }
  return local_88;
}

