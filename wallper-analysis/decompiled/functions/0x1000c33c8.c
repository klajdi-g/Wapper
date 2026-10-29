// rea decompile_all
// name: FUN_1000c33c8
// address: 0x1000c33c8
// body: available
// range: 0x1000c33c8-0x1000c373b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000c33c8(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  byte bVar1;
  GlassEffectContainer GVar2;
  undefined *puVar3;
  long extraout_x8;
  code *pcVar4;
  long lVar5;
  code *pcVar6;
  undefined1 *puVar7;
  code *pcVar8;
  code *pcVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined1 auStack_100 [8];
  undefined *local_f8;
  code *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  undefined *local_d8;
  long local_d0;
  undefined8 local_c8;
  long local_c0 [2];
  long local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *local_88;
  undefined8 uStack_80;
  
  local_e8 = param_3;
  local_c8 = param_1;
  local_d8 = (undefined *)SwiftUI::_ConditionalContent::typeMetadataAccessor();
  local_d0 = *(long *)(local_d8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_d0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_100 + -extraout_x8;
  bVar1 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  local_e0 = puVar7;
  if ((bVar1 & 1) == 0) {
    lVar12 = *(long *)(param_5 + -8);
    lVar5 = *(long *)(lVar12 + 0x40);
    (*(code *)PTR____chkstk_darwin_100521118)();
    uVar11 = lVar5 + 0xfU & 0xfffffffffffffff0;
    lVar10 = (long)puVar7 - uVar11;
    (*(code *)PTR____chkstk_darwin_100521118)();
    lVar5 = lVar10 - uVar11;
    (*local_e8)(lVar5);
    pcVar4 = *(code **)(lVar12 + 0x10);
    (*pcVar4)(lVar10,lVar5,param_5);
    pcVar6 = *(code **)(lVar12 + 8);
    (*pcVar6)(lVar5,param_5);
    (*(code *)PTR____chkstk_darwin_100521118)();
    lVar5 = lVar10 - uVar11;
    (*pcVar4)(lVar5,lVar10,param_5);
    FUN_100008acc(puVar7,lVar5,PTR___type_metadata_for_SwiftUI_AnyView_1005234f8,param_5,
                  PTR___protocol_witness_table_for_SwiftUI_AnyView___SwiftUI_View_in_SwiftUI_1005234e8
                  ,param_6);
    (*pcVar6)(lVar5,param_5);
    (*pcVar6)(lVar10,param_5);
  }
  else {
    GVar2 = SwiftUI::GlassEffectContainer::typeMetadataAccessor();
    lVar5 = *(long *)(GVar2.unknown + -8);
    lVar12 = *(long *)(lVar5 + 0x40);
    (*(code *)PTR____chkstk_darwin_100521118)();
    uVar11 = lVar12 + 0xfU & 0xfffffffffffffff0;
    pcVar9 = (code *)(puVar7 + -uVar11);
    local_f0 = pcVar9;
    (*(code *)PTR____chkstk_darwin_100521118)();
    local_98 = local_e8;
    local_b0 = param_5;
    uStack_a8 = param_6;
    local_a0 = param_2;
    SwiftUI::GlassEffectContainer::_init();
    puVar3 = PTR_SwiftUI__SwiftUI__GlassEffectContainer<undefined>_>SwiftUI__View_100522868;
    _swift_getWitnessTable
              (PTR_SwiftUI__SwiftUI__GlassEffectContainer<undefined>_>SwiftUI__View_100522868,
               GVar2.unknown);
    pcVar8 = *(code **)(lVar5 + 0x10);
    local_f8 = puVar3;
    (*pcVar8)(pcVar9,(long)pcVar9 - uVar11,GVar2.unknown);
    pcVar6 = *(code **)(lVar5 + 8);
    (*pcVar6)((long)pcVar9 - uVar11,GVar2.unknown);
    pcVar4 = local_f0;
    local_e8 = local_f0;
    (*(code *)PTR____chkstk_darwin_100521118)();
    lVar12 = (long)pcVar4 - uVar11;
    (*pcVar8)(lVar12,pcVar9,GVar2.unknown);
    lVar5 = lVar12;
    FUN_10000898c(lVar12,GVar2.unknown,local_f8);
    local_c0[0] = lVar5;
    FUN_100008a08(puVar7,local_c0,PTR___type_metadata_for_SwiftUI_AnyView_1005234f8,param_5,
                  PTR___protocol_witness_table_for_SwiftUI_AnyView___SwiftUI_View_in_SwiftUI_1005234e8
                  ,param_6);
    _swift_release(lVar5);
    (*pcVar6)(lVar12,GVar2.unknown);
    (*pcVar6)(pcVar9,GVar2.unknown);
  }
  puVar3 = local_d8;
  local_88 = PTR___protocol_witness_table_for_SwiftUI_AnyView___SwiftUI_View_in_SwiftUI_1005234e8;
  uStack_80 = param_6;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830
             ,local_d8,&local_88);
  lVar5 = local_d0;
  (**(code **)(local_d0 + 0x10))(local_c8,puVar7,puVar3);
  (**(code **)(lVar5 + 8))(puVar7,puVar3);
  return;
}

