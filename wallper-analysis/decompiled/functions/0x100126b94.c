// rea decompile_all
// name: FUN_100126b94
// address: 0x100126b94
// body: available
// range: 0x100126b94-0x100126ea3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100126d10 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100126b94(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long unaff_x20;
  long lVar5;
  code *pcVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *local_90;
  undefined *local_88;
  long local_80;
  long local_78;
  undefined *local_70;
  undefined *local_68;
  
  puVar2 = &DAT_1005539c8;
  FUN_100002f94(&DAT_1005539c8,&DAT_100426a60);
  local_78 = *(long *)(puVar2 + -8);
  local_70 = puVar2;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_78 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100551e50;
  local_80 = (long)&local_90 - extraout_x8;
  FUN_100002f94(&DAT_100551e50,&DAT_100429e60);
  local_88 = puVar2;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  lVar9 = ((long)&local_90 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = lVar9 - extraout_x12;
  puVar2 = &DAT_1005539d0;
  FUN_100002f94(&DAT_1005539d0,&DAT_100426a68);
  lVar8 = *(long *)(puVar2 + -8);
  local_90 = puVar2;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar10 - extraout_x8_01;
  puVar2 = &DAT_1005539d8;
  FUN_100002f94(&DAT_1005539d8,&DAT_100426a70);
  lVar5 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = _TtC7Wallper18ActivityController::_activeIDs;
  puVar4 = PTR___swiftEmptyArrayStorage_100524190;
  local_68 = PTR___swiftEmptyArrayStorage_100524190;
  puVar3 = &DAT_100553858;
  FUN_100002f94(&DAT_100553858,&DAT_100429e10);
  Combine::Published::init(lVar11 - extraout_x8_02,puVar3,puVar3);
  (**(code **)(lVar5 + 0x20))(unaff_x20 + lVar1,lVar11 - extraout_x8_02,puVar2);
  lVar1 = _TtC7Wallper18ActivityController::_items;
  FUN_100006188();
  puVar2 = &DAT_100553868;
  local_68 = puVar4;
  FUN_100002f94(&DAT_100553868,&DAT_100426810);
  Combine::Published::init(lVar11,puVar2,puVar2);
  (**(code **)(lVar8 + 0x20))(unaff_x20 + lVar1,lVar11,local_90);
  lVar1 = _TtC7Wallper18ActivityController::_lastCompleted;
  lVar8 = 0;
  FUN_100126a5c();
  pcVar6 = *(code **)(*(long *)(lVar8 + -8) + 0x38);
  (*pcVar6)(lVar10,1,1,lVar8);
  FUN_1000087e4(lVar10,lVar9,&DAT_100551e50,&DAT_100429e60);
  lVar5 = local_80;
  puVar2 = local_88;
  Combine::Published::init(local_80,lVar8,local_88);
  FUN_10002a29c(lVar10,&DAT_100551e50,&DAT_100429e60);
  puVar3 = local_70;
  pcVar7 = *(code **)(local_78 + 0x20);
  (*pcVar7)(unaff_x20 + lVar1,lVar5,local_70);
  lVar1 = _TtC7Wallper18ActivityController::_lastFailed;
  (*pcVar6)(lVar10,1,1,lVar8);
  FUN_1000087e4(lVar10,lVar9,&DAT_100551e50,&DAT_100429e60);
  Combine::Published::init(lVar5,lVar8,puVar2);
  FUN_10002a29c(lVar10,&DAT_100551e50,&DAT_100429e60);
  (*pcVar7)(unaff_x20 + lVar1,lVar5,puVar3);
  return;
}

