// rea decompile_all
// name: FUN_100085bf0
// address: 0x100085bf0
// body: available
// range: 0x100085bf0-0x10008601b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100085cd4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100085bf0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  Color param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  Design DVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  Text TVar8;
  Weight WVar9;
  Font FVar10;
  Text TVar11;
  Color CVar12;
  Text TVar13;
  Color CVar14;
  Color CVar15;
  Text TVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 *puVar20;
  undefined *puVar21;
  long extraout_x8;
  long lVar22;
  long extraout_x8_00;
  CGFloat size;
  undefined8 *puVar23;
  CGFloat size_00;
  long local_d0 [2];
  code *local_c0;
  long lStack_b8;
  undefined *local_b0;
  undefined8 *local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 *local_88;
  undefined *local_80;
  undefined8 uStack_78;
  
  puVar5 = &DAT_10054a828;
  local_88 = param_1;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar22 = (long)local_d0 - extraout_x8;
  lVar6 = 0;
  FUN_10009e280();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  puVar23 = (undefined8 *)(lVar22 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  local_d0[1] = param_2;
  FUN_10007c3e0(puVar23);
  uVar1 = *puVar23;
  uVar2 = puVar23[1];
  _swift_bridgeObjectRetain(uVar2);
  puVar7 = puVar23;
  FUN_100095498();
  local_80 = (undefined *)uVar1;
  uStack_78 = uVar2;
  FUN_100026df4();
  puVar5 = PTR___type_metadata_for_Swift_String_100523a98;
  local_a8 = puVar7;
  TVar8 = SwiftUI::Text::_init(puVar7,PTR___type_metadata_for_Swift_String_100523a98,puVar7);
  WVar9.unknown = (undefined *)0x0;
  FUN_100095ec0();
  size.unknown = (undefined *)0x4004cccccccccccd;
  size_00.unknown = (undefined *)(*(double *)(param_2 + *(int *)(WVar9.unknown + 0x14)) * 2.6);
  SwiftUI::Font::Weight::get_semibold(WVar9);
  DVar4 = SwiftUI::Font::Design::typeMetadataAccessor();
  lStack_b8 = CONCAT71((int7)((ulong)WVar9.unknown >> 8),DVar4.value);
  local_c0 = *(code **)(*(long *)(lStack_b8 + -8) + 0x38);
  local_d0[0] = lVar22;
  (*local_c0)(lVar22,1,1,lStack_b8);
  FVar10 = SwiftUI::Font::_system(size,(Font)0x0);
  FUN_10002a29c(lVar22,&DAT_10054a828,&DAT_10041e3c0);
  TVar16 = TVar8;
  puVar17 = puVar5;
  puVar20 = puVar7;
  TVar11 = SwiftUI::Text::_font(FVar10.unknown);
  _swift_release(FVar10.unknown);
  FUN_100025b34(TVar8.unknown,puVar5,puVar7);
  _swift_bridgeObjectRelease();
  CVar12 = SwiftUI::Color::get_white(param_5);
  CVar14 = CVar12;
  local_80 = CVar12.unknown;
  FUN_100028d58();
  TVar8 = TVar11;
  puVar18 = TVar16.unknown;
  CVar15.unknown = puVar17;
  local_b0 = CVar14.unknown;
  TVar13 = SwiftUI::Text::_foregroundStyle();
  local_a0 = TVar8.unknown;
  local_98 = CVar15.unknown;
  local_90 = TVar13.unknown;
  FUN_100025b34(TVar11.unknown,TVar16.unknown,puVar17);
  _swift_release(CVar12.unknown);
  _swift_bridgeObjectRelease(puVar20);
  FUN_10007c3e0(puVar23);
  uVar1 = puVar23[2];
  uVar2 = puVar23[3];
  _swift_bridgeObjectRetain(uVar2);
  FUN_100095498(puVar23);
  puVar5 = PTR___type_metadata_for_Swift_String_100523a98;
  puVar7 = local_a8;
  local_80 = (undefined *)uVar1;
  uStack_78 = uVar2;
  TVar8 = SwiftUI::Text::_init
                    (TVar13.unknown,PTR___type_metadata_for_Swift_String_100523a98,local_a8);
  SwiftUI::Font::Weight::get_regular((Weight)TVar8.unknown);
  lVar6 = local_d0[0];
  (*local_c0)(local_d0[0],1,1,lStack_b8);
  FVar10 = SwiftUI::Font::_system(size_00,(Font)0x0);
  FUN_10002a29c(lVar6,&DAT_10054a828,&DAT_10041e3c0);
  TVar16 = TVar8;
  puVar17 = puVar5;
  puVar20 = puVar7;
  TVar11 = SwiftUI::Text::_font(FVar10.unknown);
  _swift_release(FVar10.unknown);
  FUN_100025b34(TVar8.unknown,puVar5,puVar7);
  _swift_bridgeObjectRelease();
  CVar14 = SwiftUI::Color::get_white(CVar15);
  CVar15 = SwiftUI::Color::opacity(0.6,CVar14);
  _swift_release(CVar14.unknown);
  TVar8 = TVar11;
  puVar19 = TVar16.unknown;
  puVar21 = puVar17;
  local_80 = CVar15.unknown;
  TVar13 = SwiftUI::Text::_foregroundStyle();
  FUN_100025b34(TVar11.unknown,TVar16.unknown,puVar17);
  _swift_release(CVar15.unknown);
  _swift_bridgeObjectRelease(puVar20);
  puVar3 = local_90;
  puVar17 = local_98;
  puVar5 = local_a0;
  *local_88 = local_90;
  local_88[1] = local_a0;
  *(char *)(local_88 + 2) = (char)puVar18;
  local_88[3] = local_98;
  local_88[4] = TVar13.unknown;
  local_88[5] = TVar8.unknown;
  *(char *)(local_88 + 6) = (char)puVar19;
  local_88[7] = puVar21;
  FUN_100007b14(local_90,local_a0,puVar18);
  _swift_bridgeObjectRetain(puVar17);
  FUN_100007b14(TVar13.unknown,TVar8.unknown,puVar19);
  _swift_bridgeObjectRetain(puVar21);
  FUN_100025b34(TVar13.unknown,TVar8.unknown,puVar19);
  _swift_bridgeObjectRelease(puVar21);
  FUN_100025b34(puVar3,puVar5,puVar18);
  _swift_bridgeObjectRelease(puVar17);
  return;
}

