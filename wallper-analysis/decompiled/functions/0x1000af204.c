// rea decompile_all
// name: FUN_1000af204
// address: 0x1000af204
// body: available
// range: 0x1000af204-0x1000af40f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000af330 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000af204(undefined8 *param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,VerticalAlignment param_6,undefined8 param_7)

{
  undefined1 *puVar1;
  int iVar2;
  VerticalAlignment VVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ForEach<undefined,undefined,undefined> FVar9;
  Set _all;
  double dVar10;
  
  VVar3 = SwiftUI::VerticalAlignment::get_center(param_6);
  *param_1 = VVar3.unknown;
  param_1[1] = param_2 * 0.9;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar4 = &DAT_100550688;
  FUN_100002f94(&DAT_100550688,&DAT_100422020);
  iVar2 = *(int *)(puVar4 + 0x2c);
  puVar4 = &DAT_100422030;
  _swift_getKeyPath(&DAT_100422030);
  puVar5 = &DAT_100528ef8;
  _swift_allocObject(&DAT_100528ef8,0x28,7);
  *(double *)(puVar5 + 0x10) = param_2;
  puVar5[0x18] = (char)param_6.unknown;
  *(undefined8 *)(puVar5 + 0x20) = param_7;
  _swift_retain(param_7);
  puVar6 = &DAT_10054b788;
  FUN_100002f94(&DAT_10054b788,&DAT_100422290);
  puVar7 = &DAT_100550690;
  FUN_100002f94(&DAT_100550690,&DAT_100422050);
  puVar8 = puVar7;
  FUN_10002bf20();
  FUN_1000b530c();
  FVar9 = (extension_SwiftUI)::SwiftUI::ForEach::_init
                    ((long)param_1 + (long)iVar2,puVar8,puVar4,FUN_1000b52fc,puVar5,puVar6,puVar7,
                     puVar8,
                     PTR___protocol_witness_table_for_Swift_Int___Swift_Hashable_in_Swift_100523be0)
  ;
  _all = SwiftUI::Edge::Set::get_vertical(FVar9.unknown);
  dVar10 = param_2 * 1.2;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  puVar4 = &DAT_1005506d8;
  FUN_100002f94(&DAT_1005506d8,&DAT_100422070);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(puVar4 + 0x24));
  *puVar1 = (char)_all.unknown;
  *(double *)(puVar1 + 8) = dVar10;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  puVar4 = &DAT_100528f20;
  _swift_allocObject(&DAT_100528f20,0x28,7);
  *(double *)(puVar4 + 0x10) = param_2;
  puVar4[0x18] = (char)param_6.unknown;
  *(undefined8 *)(puVar4 + 0x20) = param_7;
  puVar5 = &DAT_1005506e0;
  FUN_100002f94(&DAT_1005506e0,&DAT_100422078);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar5 + 0x24));
  *param_1 = FUN_1000b554c;
  param_1[1] = puVar4;
  param_1[2] = 0;
  param_1[3] = 0;
  _swift_retain(param_7);
  return;
}

