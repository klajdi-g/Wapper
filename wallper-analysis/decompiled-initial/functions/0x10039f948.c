// rea decompile_all
// name: FUN_10039f948
// address: 0x10039f948
// body: available
// range: 0x10039f948-0x10039fb83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10039f948(long *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined *puVar3;
  UUID UVar4;
  long lVar5;
  State SVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  puVar3 = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  puVar7 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar8 = (long)puVar7 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar9 = lVar8 - extraout_x12_00;
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  lVar11 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar11 + 0x40));
  lVar10 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  FUN_10039c2bc();
  iVar1 = *(int *)(lVar5 + 0x20);
  SVar6.unknown = &DAT_10054dd90;
  FUN_100002f94(&DAT_10054dd90,&DAT_10041ec00);
  SwiftUI::State::get_wrappedValue(SVar6);
  lVar5 = lVar9;
  (**(code **)(lVar11 + 0x30))(lVar9,1,UVar4.unknown);
  if ((int)lVar5 == 1) {
    FUN_10002a29c(lVar9,&DAT_10054a9c8,&DAT_10041bbe0);
  }
  else {
    (**(code **)(lVar11 + 0x20))(lVar10,lVar9,UVar4.unknown);
    lVar5 = *param_1;
    if (lVar5 == 0) {
      FUN_1001b7378(0);
      FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
      SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10039fb84);
      (*pcVar2)();
    }
    _swift_retain(lVar5);
    FUN_1001b4de0(lVar10);
    _swift_release(lVar5);
    (**(code **)(lVar11 + 8))(lVar10,UVar4.unknown);
  }
  (**(code **)(lVar11 + 0x38))(lVar8,1,1,UVar4.unknown);
  FUN_1000087e4(lVar8,puVar7,&DAT_10054a9c8,&DAT_10041bbe0);
  SwiftUI::State::set_wrappedValue((State *)((long)param_1 + (long)iVar1),puVar7,SVar6.unknown);
  FUN_10002a29c(lVar8,&DAT_10054a9c8,&DAT_10041bbe0);
  return;
}

