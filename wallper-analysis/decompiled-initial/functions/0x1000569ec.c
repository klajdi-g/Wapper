// rea decompile_all
// name: FUN_1000569ec
// address: 0x1000569ec
// body: available
// range: 0x1000569ec-0x100056c4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100056bd4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000569ec(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,VerticalAlignment param_6)

{
  undefined1 *puVar1;
  int iVar2;
  VerticalAlignment VVar3;
  undefined *puVar4;
  StateObject SVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ForEach<undefined,undefined,undefined> FVar10;
  Set _all;
  undefined8 uVar11;
  undefined8 local_1e8 [43];
  undefined8 local_90;
  
  VVar3 = SwiftUI::VerticalAlignment::get_center(param_6);
  *param_1 = VVar3.unknown;
  param_1[1] = 0x4020000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar4 = &DAT_10054d750;
  FUN_100002f94(&DAT_10054d750,&DAT_10041e2c8);
  iVar2 = *(int *)(puVar4 + 0x2c);
                    /* WARNING: Load size is inaccurate */
  SVar5.unknown = param_6.unknown[0xd8];
  FUN_10016ed68(0);
  FUN_1000036d0(&DAT_10054aba0,FUN_10016ed68,&TargetProtocolConformanceDescriptor_1004295e8);
  SwiftUI::StateObject::get_wrappedValue(SVar5);
  puVar4 = &DAT_10041deb0;
  _swift_getKeyPath(&DAT_10041deb0);
  puVar6 = &DAT_10041ded8;
  _swift_getKeyPath(&DAT_10041ded8);
  Combine::Published::_get_subscript(local_1e8,SVar5.unknown,puVar4,puVar6);
  _swift_release(puVar4);
  _swift_release(puVar6);
  _swift_release(SVar5.unknown);
  local_90 = local_1e8[0];
  puVar4 = &DAT_10041e2d0;
  _swift_getKeyPath(&DAT_10041e2d0);
  puVar6 = &DAT_100526df0;
  _swift_allocObject(&DAT_100526df0,0x168,7);
  _memcpy(puVar6 + 0x10,param_6.unknown,0x158);
  FUN_100058a6c(param_6.unknown,local_1e8);
  puVar7 = &DAT_10054b058;
  FUN_100002f94(&DAT_10054b058,&DAT_10041c288);
  puVar8 = &DAT_10054d758;
  FUN_100002f94(&DAT_10054d758,&DAT_10041e300);
  puVar9 = &DAT_10054b068;
  FUN_1000087a0(&DAT_10054b068,&DAT_10054b058,&DAT_10041c288,
                PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100523b60);
  FUN_1000372f4(&DAT_10054d760,&DAT_10054d758,&DAT_10041e300,FUN_100058f94);
  FVar10 = (extension_SwiftUI)::SwiftUI::ForEach::_init
                     ((long)param_1 + (long)iVar2,puVar9,puVar4,FUN_100058f70,puVar6,puVar7,puVar8,
                      puVar9,
                      PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100523aa8
                     );
  _all = SwiftUI::Edge::Set::get_horizontal(FVar10.unknown);
  uVar11 = 0x4030000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  puVar4 = &DAT_10054d728;
  FUN_100002f94(&DAT_10054d728,&DAT_10041e2b0);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(puVar4 + 0x24));
  *puVar1 = (char)_all.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar11;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  return;
}

