// rea decompile_all
// name: FUN_1003156c0
// address: 0x1003156c0
// body: available
// range: 0x1003156c0-0x100315a3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003158b4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003156c0(long param_1,undefined8 param_2,void *param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  VerticalAlignment VVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ForEach<undefined,undefined,undefined> FVar10;
  long extraout_x8;
  long lVar11;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 auStack_1f0 [2];
  long local_1e0;
  undefined *local_1d8 [2];
  long local_1c8;
  undefined *local_1c0;
  undefined8 local_1b8;
  long local_1b0;
  long local_1a8;
  long local_1a0;
  undefined1 auStack_198 [296];
  undefined8 local_70;
  
  VVar5.unknown = &DAT_10055c0d0;
  local_1b8 = param_4;
  local_1a0 = param_1;
  FUN_100002f94(&DAT_10055c0d0,&DAT_100430e00);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(VVar5.unknown + -8) + 0x40));
  lVar11 = (long)&local_1e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_1a8 = lVar11;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar11 = lVar11 - extraout_x12;
  local_1b0 = lVar11;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar12 = (undefined8 *)(lVar11 - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar13 = (undefined8 *)((long)puVar12 - extraout_x12_01);
  VVar5 = SwiftUI::VerticalAlignment::get_center(VVar5);
  *puVar13 = VVar5.unknown;
  puVar13[1] = 0x4020000000000000;
  *(undefined1 *)(puVar13 + 2) = 0;
  puVar6 = &DAT_10055c0d8;
  FUN_100002f94(&DAT_10055c0d8,&DAT_100430e08);
  local_1c8 = (long)*(int *)(puVar6 + 0x2c);
  puVar7 = &DAT_100430e10;
  local_1c0 = puVar6;
  local_70 = param_2;
  _swift_getKeyPath();
  puVar6 = &DAT_10053a698;
  local_1d8[1] = puVar7;
  _swift_allocObject(&DAT_10053a698,0x131,7);
  _memcpy(puVar6 + 0x10,param_3,0x121);
  _swift_bridgeObjectRetain(param_2);
  FUN_1003181f4(param_3,auStack_198);
  puVar7 = &DAT_10055c0e0;
  FUN_100002f94(&DAT_10055c0e0,&DAT_100430e30);
  lVar11 = 0;
  local_1d8[0] = puVar7;
  FUN_10031cb80();
  puVar8 = &DAT_10055c0e8;
  local_1e0 = lVar11;
  FUN_1000087a0(&DAT_10055c0e8,&DAT_10055c0e0,&DAT_100430e30,
                PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100523b60);
  puVar9 = &DAT_10055c0f0;
  FUN_1000036d0(&DAT_10055c0f0,FUN_10031cb80,&TargetProtocolConformanceDescriptor_100430fa8);
  puVar13[-2] = puVar9;
  FVar10 = (extension_SwiftUI)::SwiftUI::ForEach::_init
                     ((long)puVar13 + local_1c8,puVar9,local_1d8[1],FUN_10031cb58,puVar6,puVar7,
                      lVar11,puVar8,
                      PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100523aa8
                     );
  VVar5 = SwiftUI::VerticalAlignment::get_center(FVar10.unknown);
  *puVar12 = VVar5.unknown;
  puVar12[1] = 0x4020000000000000;
  *(undefined1 *)(puVar12 + 2) = 0;
  uVar2 = local_1b8;
  iVar1 = *(int *)(local_1c0 + 0x2c);
  local_70 = local_1b8;
  puVar6 = &DAT_100430e10;
  _swift_getKeyPath(&DAT_100430e10);
  puVar7 = &DAT_10053a6c0;
  _swift_allocObject(&DAT_10053a6c0,0x131,7);
  _memcpy(puVar7 + 0x10,param_3,0x121);
  FUN_1003181f4(param_3,auStack_198);
  _swift_bridgeObjectRetain(uVar2);
  puVar13[-2] = puVar9;
  (extension_SwiftUI)::SwiftUI::ForEach::_init
            ((long)puVar12 + (long)iVar1,puVar7,puVar6,FUN_10031cb94,puVar7,local_1d8[0],local_1e0,
             puVar8,
             PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100523aa8);
  lVar11 = local_1b0;
  FUN_1000087e4(puVar13,local_1b0,&DAT_10055c0d0,&DAT_100430e00);
  lVar3 = local_1a8;
  FUN_1000087e4(puVar12,local_1a8,&DAT_10055c0d0,&DAT_100430e00);
  lVar4 = local_1a0;
  FUN_1000087e4(lVar11,local_1a0,&DAT_10055c0d0,&DAT_100430e00);
  puVar6 = &DAT_10055c0f8;
  FUN_100002f94(&DAT_10055c0f8,&DAT_100430e38);
  FUN_1000087e4(lVar3,lVar4 + *(int *)(puVar6 + 0x30),&DAT_10055c0d0,&DAT_100430e00);
  FUN_10002a29c(puVar12,&DAT_10055c0d0,&DAT_100430e00);
  FUN_10002a29c(puVar13,&DAT_10055c0d0,&DAT_100430e00);
  FUN_10002a29c(lVar3,&DAT_10055c0d0,&DAT_100430e00);
  FUN_10002a29c(lVar11,&DAT_10055c0d0,&DAT_100430e00);
  return;
}

