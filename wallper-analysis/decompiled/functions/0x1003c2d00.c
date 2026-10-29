// rea decompile_all
// name: FUN_1003c2d00
// address: 0x1003c2d00
// body: available
// range: 0x1003c2d00-0x1003c2ee3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003c2d00(undefined8 param_1,double param_2,undefined8 param_3,double param_4,byte param_5,
                  undefined8 param_6,undefined8 param_7)

{
  ModifiedContent x;
  ModifiedContent MVar1;
  CGFloat y;
  Animation AVar2;
  Animation AVar3;
  undefined *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined *puStack_a0;
  byte local_91;
  undefined8 local_90;
  undefined *puStack_88;
  
  local_b0 = param_1;
  x = SwiftUI::ModifiedContent::typeMetadataAccessor();
  lVar5 = *(long *)(x.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  AVar2.unknown = (undefined *)((long)&local_b0 - extraout_x8);
  MVar1 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  lVar7 = *(long *)(MVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)AVar2.unknown - extraout_x8_00;
  dVar8 = 1.0;
  if ((param_5 & 1) == 0) {
    dVar8 = 0.0;
  }
  (extension_SwiftUI)::SwiftUI::View::_opacity(dVar8);
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
  puStack_88 = 
  PTR___protocol_witness_table_for_SwiftUI__OpacityEffect___SwiftUI_ViewModifier_in_SwiftUI_100522190
  ;
  y.unknown = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
  local_90 = param_7;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
             x.unknown,&local_90);
  (extension_SwiftUI)::SwiftUI::View::_offset((CGFloat)x.unknown,y);
  (**(code **)(lVar5 + 8))(AVar2.unknown,x.unknown);
  AVar2 = SwiftUI::Animation::easeOut(param_4,AVar2);
  AVar3 = SwiftUI::Animation::delay(param_2,AVar2);
  _swift_release(AVar2.unknown);
  puStack_a0 = 
  PTR___protocol_witness_table_for_SwiftUI__OffsetEffect___SwiftUI_ViewModifier_in_SwiftUI_100521ff0
  ;
  local_a8 = y.unknown;
  local_91 = param_5;
  _swift_getWitnessTable(puVar4,MVar1.unknown,&local_a8);
  (extension_SwiftUI)::SwiftUI::View::_animation
            (local_b0,AVar3.unknown,&local_91,MVar1.unknown,
             PTR___type_metadata_for_Swift_Bool_100523b70,puVar4,
             PTR___protocol_witness_table_for_Swift_Bool___Swift_Equatable_in_Swift_100523b78);
  _swift_release(AVar3.unknown);
  (**(code **)(lVar7 + 8))(lVar6,MVar1.unknown);
  return;
}

