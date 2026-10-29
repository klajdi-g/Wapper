// rea decompile_all
// name: FUN_10007ba80
// address: 0x10007ba80
// body: available
// range: 0x10007ba80-0x10007bbd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10007ba80(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  Date DVar1;
  Context CVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 local_70;
  undefined8 local_68;
  
  local_70 = param_5;
  local_68 = param_1;
  DVar1 = Foundation::Date::typeMetadataAccessor();
  lVar4 = *(long *)(DVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar4 + 0x40));
  lVar6 = (long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = *(long *)(param_6 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar5 + 0x40));
  lVar7 = lVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar8 = lVar7 - extraout_x12;
  CVar2.unknown = &DAT_10054eed0;
  FUN_100002f94(&DAT_10054eed0,&DAT_1004211b0);
  SwiftUI::TimelineView::Context::get_date(CVar2);
  (*param_4)(lVar7,lVar6);
  (**(code **)(lVar4 + 8))(lVar6,DVar1.unknown);
  thunk_FUN_1000bdaa4(lVar8,lVar7,param_6,param_7);
  pcVar3 = *(code **)(lVar5 + 8);
  (*pcVar3)(lVar7,param_6);
  thunk_FUN_1000bdaa4(local_68,lVar8,param_6,param_7);
  (*pcVar3)(lVar8,param_6);
  return;
}

