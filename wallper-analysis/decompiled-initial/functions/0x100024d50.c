// rea decompile_all
// name: FUN_100024d50
// address: 0x100024d50
// body: available
// range: 0x100024d50-0x1000250af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100024ec4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100024d50(undefined8 *param_1,CGFloat param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined *puVar2;
  Design DVar3;
  undefined *puVar4;
  Text TVar5;
  Font FVar7;
  undefined *puVar8;
  Text TVar9;
  HierarchicalShapeStyle HVar10;
  Text TVar11;
  Text TVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  long extraout_x8;
  undefined1 *puVar17;
  code *pcVar18;
  undefined1 auStack_b0 [8];
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_8c;
  undefined *local_88;
  undefined *puStack_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long lVar6;
  
  puVar4 = &DAT_10054a828;
  local_a0 = param_5;
  uStack_98 = param_6;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar17 = auStack_b0 + -extraout_x8;
  local_70 = param_3;
  uStack_68 = param_4;
  FUN_100026df4();
  _swift_bridgeObjectRetain(param_4);
  puVar8 = PTR___type_metadata_for_Swift_String_100523a98;
  puVar13 = puVar4;
  TVar5 = SwiftUI::Text::_init();
  SwiftUI::Font::Weight::get_medium((Weight)TVar5.unknown);
  DVar3 = SwiftUI::Font::Design::typeMetadataAccessor();
  lVar6 = CONCAT71((int7)((ulong)TVar5.unknown >> 8),DVar3.value);
  pcVar18 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
  (*pcVar18)(puVar17,1,1,lVar6);
  FVar7 = SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(puVar17,&DAT_10054a828,&DAT_10041e3c0);
  TVar12 = TVar5;
  puVar14 = puVar8;
  HVar10.unknown = puVar13;
  puStack_80 = (undefined *)SwiftUI::Text::_font(FVar7.unknown);
  local_8c = SUB84(puVar14,0);
  local_88 = TVar12.unknown;
  local_78 = HVar10.unknown;
  _swift_release(FVar7.unknown);
  FUN_100025b34(TVar5.unknown,puVar8,puVar13);
  _swift_bridgeObjectRelease(param_6);
  puVar8 = &DAT_10041bc80;
  _swift_getKeyPath();
  local_70 = local_a0;
  uStack_68 = uStack_98;
  local_a8 = puVar8;
  _swift_bridgeObjectRetain();
  puVar13 = PTR___type_metadata_for_Swift_String_100523a98;
  TVar5 = SwiftUI::Text::_init(puVar8,PTR___type_metadata_for_Swift_String_100523a98,puVar4);
  (*pcVar18)(puVar17,1,1,lVar6);
  FVar7 = SwiftUI::Font::_system((CGFloat)0x0,(Font)0x1);
  FUN_10002a29c(puVar17,&DAT_10054a828,&DAT_10041e3c0);
  TVar12 = TVar5;
  puVar8 = puVar13;
  puVar14 = puVar4;
  TVar9 = SwiftUI::Text::_font(FVar7.unknown);
  _swift_release(FVar7.unknown);
  FUN_100025b34(TVar5.unknown,puVar13,puVar4);
  _swift_bridgeObjectRelease();
  HVar10 = SwiftUI::HierarchicalShapeStyle::get_secondary(HVar10);
  local_70 = CONCAT44(local_70._4_4_,(int)HVar10.unknown);
  FUN_100025b4c();
  TVar5 = TVar9;
  puVar15 = TVar12.unknown;
  puVar16 = puVar8;
  TVar11 = SwiftUI::Text::_foregroundStyle();
  FUN_100025b34(TVar9.unknown,TVar12.unknown,puVar8);
  _swift_bridgeObjectRelease(puVar14);
  puVar4 = &DAT_10041bc80;
  _swift_getKeyPath();
  puVar2 = local_78;
  puVar14 = puStack_80;
  puVar13 = local_88;
  uVar1 = local_8c;
  puVar8 = local_a8;
  *param_1 = puStack_80;
  param_1[1] = local_88;
  *(char *)(param_1 + 2) = (char)local_8c;
  param_1[3] = local_78;
  param_1[4] = local_a8;
  param_1[5] = 1;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = TVar11.unknown;
  param_1[8] = TVar5.unknown;
  *(char *)(param_1 + 9) = (char)puVar15;
  param_1[10] = puVar16;
  param_1[0xb] = puVar4;
  param_1[0xc] = 1;
  *(undefined1 *)(param_1 + 0xd) = 0;
  FUN_100007b14(puStack_80,local_88,local_8c);
  _swift_bridgeObjectRetain(puVar2);
  _swift_retain(puVar8);
  FUN_100007b14(TVar11.unknown,TVar5.unknown,puVar15);
  _swift_bridgeObjectRetain(puVar16);
  _swift_retain(puVar4);
  FUN_100025b34(TVar11.unknown,TVar5.unknown,puVar15);
  _swift_release(puVar4);
  _swift_bridgeObjectRelease(puVar16);
  FUN_100025b34(puVar14,puVar13,uVar1);
  _swift_release(puVar8);
  _swift_bridgeObjectRelease(puVar2);
  return;
}

