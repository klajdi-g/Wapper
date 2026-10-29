// rea decompile_all
// name: FUN_10032488c
// address: 0x10032488c
// body: available
// range: 0x10032488c-0x100324aff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10032488c(void)

{
  Edge edge;
  ulong uVar1;
  StateObject SVar2;
  undefined *puVar3;
  undefined *puVar4;
  StateObject SVar5;
  undefined *puVar6;
  undefined *puVar7;
  AnyTransition AVar8;
  UnitPoint UVar9;
  AnyTransition AVar10;
  AnyTransition insertion;
  AnyTransition AVar11;
  AnyTransition AVar12;
  long unaff_x20;
  Edge edge_00;
  ulong local_68;
  
  SVar5.unknown = *(undefined **)(unaff_x20 + 0x10);
  FUN_10002ea18(0);
  FUN_1000036d0(&DAT_10055c5e8,FUN_10002ea18,&TargetProtocolConformanceDescriptor_10041cd50);
  SVar2.unknown = SVar5.unknown;
  SwiftUI::StateObject::get_wrappedValue(SVar5);
  puVar6 = &DAT_1004316f0;
  puVar3 = puVar6;
  _swift_getKeyPath(&DAT_1004316f0);
  puVar7 = &DAT_100431718;
  puVar4 = puVar7;
  _swift_getKeyPath(&DAT_100431718);
  Combine::Published::_get_subscript(&local_68,SVar2.unknown,puVar3,puVar4);
  _swift_release(puVar3);
  _swift_release(puVar4);
  _swift_release(SVar2.unknown);
  uVar1 = local_68;
  SwiftUI::StateObject::get_wrappedValue(SVar5);
  _swift_getKeyPath();
  _swift_getKeyPath();
  AVar11.unknown = puVar6;
  AVar12.unknown = puVar7;
  Combine::Published::_get_subscript(&local_68,SVar5.unknown);
  _swift_release(puVar6);
  _swift_release(puVar7);
  _swift_release(SVar5.unknown);
  edge_00.value = 3;
  edge.value = edge_00.value;
  if (0x7fffffffffffffff < uVar1) {
    edge.value = 1;
  }
  AVar8 = SwiftUI::AnyTransition::move(edge,AVar11);
  UVar9.unknown = (undefined *)SwiftUI::AnyTransition::get_opacity(AVar8);
  AVar11 = AVar8;
  AVar10 = SwiftUI::AnyTransition::combined((AnyTransition)UVar9.unknown,AVar8);
  _swift_release(AVar8.unknown);
  _swift_release();
  UVar9 = SwiftUI::UnitPoint::get_center(UVar9);
  AVar8 = SwiftUI::AnyTransition::scale(UVar9.unknown,AVar11.unknown,AVar12);
  AVar11 = AVar10;
  insertion = SwiftUI::AnyTransition::combined(AVar8,AVar10);
  _swift_release(AVar10.unknown);
  _swift_release(AVar8.unknown);
  if (-1 < (long)local_68) {
    edge_00.value = 1;
  }
  AVar8 = SwiftUI::AnyTransition::move(edge_00,AVar11);
  UVar9.unknown = (undefined *)SwiftUI::AnyTransition::get_opacity(AVar8);
  AVar11 = AVar8;
  AVar10 = SwiftUI::AnyTransition::combined((AnyTransition)UVar9.unknown,AVar8);
  _swift_release(AVar8.unknown);
  _swift_release();
  UVar9 = SwiftUI::UnitPoint::get_center(UVar9);
  AVar11 = SwiftUI::AnyTransition::scale(UVar9.unknown,AVar11.unknown,AVar12);
  AVar8 = SwiftUI::AnyTransition::combined(AVar11,AVar10);
  _swift_release(AVar10.unknown);
  _swift_release(AVar11.unknown);
  AVar11 = SwiftUI::AnyTransition::asymmetric(insertion,AVar8,AVar12);
  _swift_release(insertion.unknown);
  _swift_release(AVar8.unknown);
  return AVar11.unknown;
}

