// rea decompile_all
// name: FUN_1002b9750
// address: 0x1002b9750
// body: available
// range: 0x1002b9750-0x1002b98d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002b9750(undefined8 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  ControlSize CVar4;
  undefined *puVar5;
  undefined7 extraout_var;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar6;
  long lVar7;
  
  puVar5 = &DAT_10054e748;
  FUN_100002f94(&DAT_10054e748,&DAT_10041f7f0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  puVar6 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar7 = (long)puVar6 - extraout_x12;
  (extension_SwiftUI)::SwiftUI::ProgressView::_init();
  iVar2 = *(int *)(puVar5 + 0x24);
  puVar5 = &DAT_10054b210;
  FUN_100002f94(&DAT_10054b210,&DAT_10041c420);
  iVar3 = *(int *)(puVar5 + 0x1c);
  uVar1 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_ControlSize_small_SwiftUI_ControlSize_Type___>_SwiftUI_ControlSize_100521cb0
  ;
  CVar4 = SwiftUI::ControlSize::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,CVar4.value) + -8) + 0x68))
            (lVar7 + iVar2 + (long)iVar3,uVar1,CONCAT71(extraout_var,CVar4.value));
  puVar5 = &DAT_10042e288;
  _swift_getKeyPath();
  *(undefined **)(lVar7 + iVar2) = puVar5;
  FUN_1000087e4(lVar7,puVar6,&DAT_10054e748,&DAT_10041f7f0);
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  puVar5 = &DAT_10055a3f0;
  FUN_100002f94(&DAT_10055a3f0,&DAT_10042e2b8);
  FUN_1000087e4(puVar6,(long)param_1 + (long)*(int *)(puVar5 + 0x30),&DAT_10054e748,&DAT_10041f7f0);
  iVar2 = *(int *)(puVar5 + 0x40);
  *(undefined8 *)((long)param_1 + (long)iVar2) = 0;
  *(undefined1 *)((undefined8 *)((long)param_1 + (long)iVar2) + 1) = 1;
  FUN_10002a29c(lVar7,&DAT_10054e748,&DAT_10041f7f0);
  FUN_10002a29c(puVar6,&DAT_10054e748,&DAT_10041f7f0);
  return;
}

