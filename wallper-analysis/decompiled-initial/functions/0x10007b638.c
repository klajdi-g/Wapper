// rea decompile_all
// name: FUN_10007b638
// address: 0x10007b638
// body: available
// range: 0x10007b638-0x10007ba7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10007b638(undefined8 param_1,uint param_2,code *param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  PeriodicTimelineSchedule PVar1;
  undefined *puVar2;
  TimelineView TVar3;
  Date DVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar7;
  long lVar8;
  Date from;
  code *pcVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  uint local_cc;
  undefined *local_c8;
  code *local_c0;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  
  local_e0 = *(long *)(param_5 + -8);
  local_cc = param_2;
  local_c0 = param_3;
  local_b8 = param_4;
  local_98 = param_6;
  local_90 = param_1;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_e0 + 0x40));
  lVar14 = (long)&local_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_d8 = lVar14 - extraout_x12;
  local_c8 = (undefined *)Foundation::Date::typeMetadataAccessor();
  lVar7 = *(long *)(local_c8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar7 + 0x40));
  from.unknown = (undefined *)
                 ((lVar14 - extraout_x12) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = (long)from.unknown - extraout_x12_00;
  PVar1 = SwiftUI::PeriodicTimelineSchedule::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(undefined8 *)(*(long *)(PVar1.unknown + -8) + 0x40),PVar1.unknown,
             PTR_typeMetadataAccessor_100522ab0);
  lVar12 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_10054eec8;
  FUN_1000036d0();
  local_f0 = puVar2;
  TVar3 = SwiftUI::TimelineView::typeMetadataAccessor();
  local_e8 = *(long *)(TVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_e8 + 0x40));
  lVar13 = lVar12 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar8 = lVar13 - extraout_x12_01;
  DVar4.unknown = (undefined *)SwiftUI::_ConditionalContent::typeMetadataAccessor();
  local_a8 = *(long *)(DVar4.unknown + -8);
  local_a0 = DVar4.unknown;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_b0 = lVar8 - extraout_x8_03;
  if ((local_cc & 1) == 0) {
    Foundation::Date::init();
    (*local_c0)(lVar14,lVar10);
    (**(code **)(lVar7 + 8))(lVar10,local_c8);
    uVar11 = local_98;
    lVar7 = local_d8;
    thunk_FUN_1000bdaa4(local_d8,lVar14,param_5,local_98);
    pcVar9 = *(code **)(local_e0 + 8);
    (*pcVar9)(lVar14,param_5);
    thunk_FUN_1000bdaa4(lVar14,lVar7,param_5,uVar11);
    local_68 = uVar11;
    puVar2 = PTR__SwiftUI__SwiftUI__TimelineView<undefined,undefined>_>SwiftUI__View_100521e50;
    _swift_getWitnessTable
              (PTR__SwiftUI__SwiftUI__TimelineView<undefined,undefined>_>SwiftUI__View_100521e50,
               TVar3.unknown,&local_68);
    lVar10 = local_b0;
    FUN_100008acc(local_b0,lVar14,TVar3.unknown,param_5,puVar2,uVar11);
    (*pcVar9)(lVar14,param_5);
    (*pcVar9)(lVar7,param_5);
  }
  else {
    Foundation::Date::get_now(DVar4);
    puVar2 = local_c8;
    (**(code **)(lVar7 + 0x10))(from.unknown,lVar10,local_c8);
    SwiftUI::PeriodicTimelineSchedule::init(from,0.5);
    (**(code **)(lVar7 + 8))(lVar10,puVar2);
    puVar2 = &DAT_100528068;
    _swift_allocObject(&DAT_100528068,0x38,7);
    uVar11 = local_98;
    *(long *)(puVar2 + 0x10) = param_5;
    *(undefined8 *)(puVar2 + 0x18) = local_98;
    puVar2[0x20] = 1;
    *(code **)(puVar2 + 0x28) = local_c0;
    *(undefined8 *)(puVar2 + 0x30) = local_b8;
    _swift_retain();
    FUN_10007bbd4(lVar13,lVar12,FUN_1000936c8,puVar2,PVar1.unknown,param_5,local_f0,uVar11);
    local_88 = uVar11;
    puVar2 = PTR__SwiftUI__SwiftUI__TimelineView<undefined,undefined>_>SwiftUI__View_100521e50;
    _swift_getWitnessTable
              (PTR__SwiftUI__SwiftUI__TimelineView<undefined,undefined>_>SwiftUI__View_100521e50,
               TVar3.unknown,&local_88);
    thunk_FUN_1000bdaa4(lVar8,lVar13,TVar3.unknown,puVar2);
    pcVar9 = *(code **)(local_e8 + 8);
    (*pcVar9)(lVar13,TVar3.unknown);
    thunk_FUN_1000bdaa4(lVar13,lVar8,TVar3.unknown,puVar2);
    lVar10 = local_b0;
    FUN_100008a08(local_b0,lVar13,TVar3.unknown,param_5,puVar2,uVar11);
    (*pcVar9)(lVar13,TVar3.unknown);
    (*pcVar9)(lVar8,TVar3.unknown);
  }
  puVar5 = PTR__SwiftUI__SwiftUI__TimelineView<undefined,undefined>_>SwiftUI__View_100521e50;
  local_70 = uVar11;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__TimelineView<undefined,undefined>_>SwiftUI__View_100521e50,
             TVar3.unknown,&local_70);
  puVar2 = local_a0;
  puVar6 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830;
  local_80 = puVar5;
  uStack_78 = uVar11;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830
             ,local_a0,&local_80);
  thunk_FUN_1000bdaa4(local_90,lVar10,puVar2,puVar6);
  (**(code **)(local_a8 + 8))(lVar10,puVar2);
  return;
}

