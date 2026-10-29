// rea decompile_all
// name: FUN_100043114
// address: 0x100043114
// body: available
// range: 0x100043114-0x100043267 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100043114(long param_1,ContiguousArray param_2)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  RGBColorSpace RVar4;
  undefined7 extraout_var;
  Color CVar5;
  ContiguousArray CVar6;
  long extraout_x8;
  double *pdVar7;
  ContiguousArray oldCount;
  long lVar8;
  long lVar9;
  long lVar10;
  double red;
  double green;
  double blue;
  undefined1 auStack_90 [8];
  undefined *local_88;
  
  RVar4 = SwiftUI::Color::RGBColorSpace::typeMetadataAccessor();
  lVar8 = *(long *)(CONCAT71(extraout_var,RVar4.value) + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar8 + 0x40));
  local_88 = PTR___swiftEmptyArrayStorage_100524190;
  Swift::ContiguousArray::_reserveCapacity(9,param_2);
  lVar9 = *(long *)(param_1 + 0x10) + -1;
  uVar2 = *(uint *)
           PTR___enum_case_for_SwiftUI_Color_RGBColorSpace_sRGB_SwiftUI_Color_RGBColorSpace_Type___>_SwiftUI_Color_RGBColorSpace_1005231e0
  ;
  lVar10 = 0x28;
  while( true ) {
    lVar1 = lVar9;
    if (*(long *)(lVar10 + 0x10054d068) <= lVar9) {
      lVar1 = *(long *)(lVar10 + 0x10054d068);
    }
    if (lVar1 < 0) break;
    pdVar7 = (double *)(param_1 + 0x20 + lVar1 * 0x18);
    red = *pdVar7;
    green = pdVar7[1];
    blue = pdVar7[2];
    CVar6.unknown = (undefined *)(ulong)uVar2;
    (**(code **)(lVar8 + 0x68))
              (auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),(undefined *)(ulong)uVar2,
               CONCAT71(extraout_var,RVar4.value));
    CVar5 = SwiftUI::Color::init
                      ((RGBColorSpace)
                       (__int8)(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)),red,green,
                       blue,1.0);
    Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique
              ((ContiguousArray)CVar5.unknown);
                    /* WARNING: Load size is inaccurate */
    oldCount.unknown = local_88[0x10];
    Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer((__int64)oldCount.unknown,CVar6);
    Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity(oldCount.unknown,CVar5.unknown);
    Swift::ContiguousArray::__endMutation(oldCount);
    lVar10 = lVar10 + 8;
    if (lVar10 == 0x70) {
      return local_88;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100043268);
  (*pcVar3)();
}

