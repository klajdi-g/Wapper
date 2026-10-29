// rea decompile_all
// name: FUN_10001d094
// address: 0x10001d094
// body: available
// range: 0x10001d094-0x10001d363 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010001d2bc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10001d094(long param_1,void *param_2)

{
  int iVar1;
  VerticalAlignment VVar2;
  undefined *puVar3;
  StateObject SVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x12;
  long lVar10;
  undefined8 *puVar11;
  undefined8 auStack_1a0 [2];
  long alStack_190 [36];
  undefined8 local_70;
  
  VVar2.unknown = &DAT_10054b048;
  FUN_100002f94(&DAT_10054b048,&DAT_10041c250);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(VVar2.unknown + -8) + 0x40));
  lVar10 = (long)alStack_190 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar11 = (undefined8 *)(lVar10 - extraout_x12);
  VVar2 = SwiftUI::VerticalAlignment::get_center(VVar2);
  *puVar11 = VVar2.unknown;
  puVar11[1] = 0x4020000000000000;
  *(undefined1 *)(puVar11 + 2) = 0;
  puVar3 = &DAT_10054b050;
  FUN_100002f94(&DAT_10054b050,&DAT_10041c258);
  alStack_190[1] = (long)*(int *)(puVar3 + 0x2c);
  SVar4.unknown = *(undefined **)((long)param_2 + 0x48);
  FUN_10016ed68(0);
  FUN_1000036d0(&DAT_10054aba0,FUN_10016ed68,&TargetProtocolConformanceDescriptor_1004295e8);
  SwiftUI::StateObject::get_wrappedValue(SVar4);
  puVar3 = &DAT_10041bdb8;
  _swift_getKeyPath(&DAT_10041bdb8);
  puVar5 = &DAT_10041bde0;
  _swift_getKeyPath(&DAT_10041bde0);
  Combine::Published::_get_subscript(alStack_190 + 2,SVar4.unknown,puVar3,puVar5);
  _swift_release(puVar3);
  _swift_release(puVar5);
  _swift_release(SVar4.unknown);
  local_70 = alStack_190[2];
  puVar3 = &DAT_10041c260;
  _swift_getKeyPath(&DAT_10041c260);
  puVar5 = &DAT_100525780;
  _swift_allocObject(&DAT_100525780,0x120,7);
  _memcpy(puVar5 + 0x10,param_2,0x110);
  FUN_100027a7c(param_2,alStack_190 + 2);
  puVar6 = &DAT_10054b058;
  FUN_100002f94(&DAT_10054b058,&DAT_10041c288);
  puVar7 = &DAT_10054b060;
  FUN_100002f94(&DAT_10054b060,&DAT_10041c290);
  puVar8 = &DAT_10054b068;
  FUN_1000087a0(&DAT_10054b068,&DAT_10054b058,&DAT_10041c288,
                PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100523b60);
  puVar9 = puVar8;
  FUN_100029098();
  puVar11[-2] = puVar9;
  (extension_SwiftUI)::SwiftUI::ForEach::_init
            ((long)puVar11 + alStack_190[1],puVar9,puVar3,FUN_100029074,puVar5,puVar6,puVar7,puVar8,
             PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100523aa8);
  FUN_1000087e4(puVar11,lVar10,&DAT_10054b048,&DAT_10041c250);
  FUN_1000087e4(lVar10,param_1,&DAT_10054b048,&DAT_10041c250);
  puVar3 = &DAT_10054b0a8;
  FUN_100002f94(&DAT_10054b0a8,&DAT_10041c2a8);
  iVar1 = *(int *)(puVar3 + 0x30);
  *(undefined8 *)(param_1 + iVar1) = 0;
  *(undefined1 *)((undefined8 *)(param_1 + iVar1) + 1) = 1;
  FUN_10002a29c(puVar11,&DAT_10054b048,&DAT_10041c250);
  FUN_10002a29c(lVar10,&DAT_10054b048,&DAT_10041c250);
  return;
}

