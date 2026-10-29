// rea decompile_all
// name: FUN_1000d3714
// address: 0x1000d3714
// body: available
// range: 0x1000d3714-0x1000d37cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000d3714(AccessibilityAdjustmentDirection param_1,long param_2)

{
  undefined8 uVar1;
  AccessibilityAdjustmentDirection AVar2;
  bool bVar3;
  undefined7 extraout_var;
  long lVar5;
  long extraout_x8;
  undefined1 *puVar6;
  long lVar7;
  long lVar4;
  
  AVar2 = SwiftUI::AccessibilityAdjustmentDirection::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var,AVar2.value);
  lVar7 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar7 + 0x40));
  puVar6 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = lVar4;
  (**(code **)(lVar7 + 0x68))
            (puVar6,*(undefined4 *)
                     PTR___enum_case_for_SwiftUI_AccessibilityAdjustmentDirection_increment_SwiftUI_AccessibilityAdjustmentDirection_Type___>_SwiftUI_AccessibilityAdjustmentDirection_100522c00
            );
  bVar3 = SwiftUI::AccessibilityAdjustmentDirection::___infix
                    (param_1,(AccessibilityAdjustmentDirection)(__int8)puVar6,
                     (AccessibilityAdjustmentDirection)(__int8)lVar5);
  (**(code **)(lVar7 + 8))(puVar6,lVar4);
  uVar1 = 0xffffffffffffffff;
  if (bVar3) {
    uVar1 = 1;
  }
  FUN_1000d30ec(uVar1,*(undefined8 *)(param_2 + 0x110),*(undefined8 *)(param_2 + 0x118));
  return;
}

