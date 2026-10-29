// rea decompile_all
// name: FUN_100091048
// address: 0x100091048
// body: available
// range: 0x100091048-0x1000911cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100091048(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  Context CVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  code *pcStack_78;
  undefined8 local_70;
  undefined8 local_68;
  
  puVar2 = &DAT_10054eed0;
  local_88 = param_2;
  local_80 = param_4;
  pcStack_78 = param_3;
  local_70 = param_1;
  local_68 = param_8;
  FUN_100002f94(&DAT_10054eed0,&DAT_1004211b0);
  lVar5 = *(long *)(puVar2 + -8);
  lVar6 = *(long *)(lVar5 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)(lVar6 + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_6 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar8 + 0x40));
  lVar9 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar7 = lVar9 - extraout_x12;
  CVar3 = SwiftUI::TimelineView::Context::typeMetadataAccessor();
  if (*(long *)(*(long *)(CVar3.unknown + -8) + 0x40) == lVar6) {
    (**(code **)(lVar5 + 0x10))(puVar10,local_88,puVar2);
    (*pcStack_78)(lVar9,puVar10);
    (**(code **)(lVar5 + 8))(puVar10,puVar2);
    uVar1 = local_68;
    thunk_FUN_1000bdaa4(lVar7,lVar9,param_6,local_68);
    pcVar4 = *(code **)(lVar8 + 8);
    (*pcVar4)(lVar9,param_6);
    thunk_FUN_1000bdaa4(local_70,lVar7,param_6,uVar1);
    (*pcVar4)(lVar7,param_6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1000911d0);
  (*pcVar4)();
}

