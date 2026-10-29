// rea decompile_all
// name: FUN_100089e20
// address: 0x100089e20
// body: available
// range: 0x100089e20-0x10008a1df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100089ec4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100089e20(undefined8 *param_1,double param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,Color param_6)

{
  undefined8 uVar1;
  Design DVar2;
  undefined *puVar3;
  Text TVar4;
  Font FVar5;
  Text TVar6;
  Color CVar7;
  Text TVar8;
  Color CVar9;
  Color CVar10;
  undefined *puVar11;
  Text TVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  long extraout_x8;
  CGFloat size;
  undefined1 *puVar18;
  CGFloat size_00;
  undefined1 auStack_d0 [8];
  code *local_c8;
  long lStack_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined8 *local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 *local_88;
  undefined *local_80;
  undefined8 uStack_78;
  
  puVar3 = &DAT_10054a828;
  local_88 = param_1;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar18 = auStack_d0 + -extraout_x8;
  local_80 = (undefined *)*param_3;
  uVar1 = param_3[1];
  local_a8 = param_3;
  uStack_78 = uVar1;
  FUN_100026df4();
  local_b0 = puVar3;
  _swift_bridgeObjectRetain(uVar1);
  puVar11 = PTR___type_metadata_for_Swift_String_100523a98;
  TVar4 = SwiftUI::Text::_init(puVar3,PTR___type_metadata_for_Swift_String_100523a98,puVar3);
  size.unknown = (undefined *)0x4004cccccccccccd;
  size_00.unknown = (undefined *)(param_2 * 2.6);
  SwiftUI::Font::Weight::get_semibold((Weight)TVar4.unknown);
  DVar2 = SwiftUI::Font::Design::typeMetadataAccessor();
  lStack_c0 = CONCAT71((int7)((ulong)TVar4.unknown >> 8),DVar2.value);
  local_c8 = *(code **)(*(long *)(lStack_c0 + -8) + 0x38);
  (*local_c8)(puVar18,1,1,lStack_c0);
  FVar5 = SwiftUI::Font::_system(size,(Font)0x0);
  FUN_10002a29c(puVar18,&DAT_10054a828,&DAT_10041e3c0);
  TVar12 = TVar4;
  puVar13 = puVar11;
  puVar15 = puVar3;
  TVar6 = SwiftUI::Text::_font(FVar5.unknown);
  _swift_release(FVar5.unknown);
  FUN_100025b34(TVar4.unknown,puVar11,puVar3);
  _swift_bridgeObjectRelease();
  CVar7 = SwiftUI::Color::get_white(param_6);
  CVar9 = CVar7;
  local_80 = CVar7.unknown;
  FUN_100028d58();
  TVar4 = TVar6;
  puVar14 = TVar12.unknown;
  CVar10.unknown = puVar13;
  local_b8 = CVar9.unknown;
  TVar8 = SwiftUI::Text::_foregroundStyle();
  local_a0 = TVar4.unknown;
  local_98 = CVar10.unknown;
  local_90 = TVar8.unknown;
  FUN_100025b34(TVar6.unknown,TVar12.unknown,puVar13);
  _swift_release(CVar7.unknown);
  _swift_bridgeObjectRelease(puVar15);
  local_80 = (undefined *)local_a8[2];
  uStack_78 = local_a8[3];
  _swift_bridgeObjectRetain();
  puVar3 = PTR___type_metadata_for_Swift_String_100523a98;
  puVar11 = local_b0;
  TVar4 = SwiftUI::Text::_init
                    (TVar8.unknown,PTR___type_metadata_for_Swift_String_100523a98,local_b0);
  SwiftUI::Font::Weight::get_regular((Weight)TVar4.unknown);
  (*local_c8)(puVar18,1,1,lStack_c0);
  FVar5 = SwiftUI::Font::_system(size_00,(Font)0x0);
  FUN_10002a29c(puVar18,&DAT_10054a828,&DAT_10041e3c0);
  TVar12 = TVar4;
  puVar13 = puVar3;
  puVar16 = puVar11;
  TVar6 = SwiftUI::Text::_font(FVar5.unknown);
  _swift_release(FVar5.unknown);
  FUN_100025b34(TVar4.unknown,puVar3,puVar11);
  _swift_bridgeObjectRelease();
  CVar9 = SwiftUI::Color::get_white(CVar10);
  CVar10 = SwiftUI::Color::opacity(0.65,CVar9);
  _swift_release(CVar9.unknown);
  TVar4 = TVar6;
  puVar15 = TVar12.unknown;
  puVar17 = puVar13;
  local_80 = CVar10.unknown;
  TVar8 = SwiftUI::Text::_foregroundStyle();
  FUN_100025b34(TVar6.unknown,TVar12.unknown,puVar13);
  _swift_release(CVar10.unknown);
  _swift_bridgeObjectRelease(puVar16);
  puVar13 = local_90;
  puVar11 = local_98;
  puVar3 = local_a0;
  *local_88 = local_90;
  local_88[1] = local_a0;
  *(char *)(local_88 + 2) = (char)puVar14;
  local_88[3] = local_98;
  local_88[4] = TVar8.unknown;
  local_88[5] = TVar4.unknown;
  *(char *)(local_88 + 6) = (char)puVar15;
  local_88[7] = puVar17;
  FUN_100007b14(local_90,local_a0,puVar14);
  _swift_bridgeObjectRetain(puVar11);
  FUN_100007b14(TVar8.unknown,TVar4.unknown,puVar15);
  _swift_bridgeObjectRetain(puVar17);
  FUN_100025b34(TVar8.unknown,TVar4.unknown,puVar15);
  _swift_bridgeObjectRelease(puVar17);
  FUN_100025b34(puVar13,puVar3,puVar14);
  _swift_bridgeObjectRelease(puVar11);
  return;
}

