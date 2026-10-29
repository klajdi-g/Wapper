// rea decompile_all
// name: FUN_1000ad9b8
// address: 0x1000ad9b8
// body: available
// range: 0x1000ad9b8-0x1000add83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000ada54 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000ad9b8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  Color param_5)

{
  undefined8 uVar1;
  Design DVar2;
  undefined *puVar3;
  Text TVar4;
  Weight WVar5;
  Font FVar6;
  Text TVar7;
  Color CVar8;
  Text TVar9;
  Color CVar10;
  Color CVar11;
  undefined *puVar12;
  Text TVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  long extraout_x8;
  long lVar19;
  CGFloat CVar20;
  long local_d0;
  code *local_c8;
  long local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_a8;
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
  lVar19 = (long)&local_d0 - extraout_x8;
  local_80 = (undefined *)*param_2;
  uVar1 = param_2[1];
  uStack_78 = uVar1;
  FUN_100026df4();
  local_a8 = puVar3;
  _swift_bridgeObjectRetain(uVar1);
  puVar12 = PTR___type_metadata_for_Swift_String_100523a98;
  TVar4 = SwiftUI::Text::_init(puVar3,PTR___type_metadata_for_Swift_String_100523a98,puVar3);
  WVar5.unknown = (undefined *)0x0;
  FUN_1000b2f54();
  CVar20.unknown = *(undefined **)((long)param_2 + (long)*(int *)(WVar5.unknown + 0x18));
  local_b0 = WVar5.unknown;
  SwiftUI::Font::Weight::get_semibold(WVar5);
  DVar2 = SwiftUI::Font::Design::typeMetadataAccessor();
  local_c0 = CONCAT71((int7)((ulong)WVar5.unknown >> 8),DVar2.value);
  local_c8 = *(code **)(*(long *)(local_c0 + -8) + 0x38);
  local_d0 = lVar19;
  (*local_c8)(lVar19,1,1,local_c0);
  FVar6 = SwiftUI::Font::_system(CVar20,(Font)0x0);
  FUN_10002a29c(lVar19,&DAT_10054a828,&DAT_10041e3c0);
  TVar13 = TVar4;
  puVar14 = puVar12;
  puVar16 = puVar3;
  TVar7 = SwiftUI::Text::_font(FVar6.unknown);
  _swift_release(FVar6.unknown);
  FUN_100025b34(TVar4.unknown,puVar12,puVar3);
  _swift_bridgeObjectRelease();
  CVar8 = SwiftUI::Color::get_white(param_5);
  CVar10 = CVar8;
  local_80 = CVar8.unknown;
  FUN_100028d58();
  TVar4 = TVar7;
  puVar15 = TVar13.unknown;
  CVar11.unknown = puVar14;
  local_b8 = CVar10.unknown;
  TVar9 = SwiftUI::Text::_foregroundStyle();
  local_a0 = TVar4.unknown;
  local_98 = CVar11.unknown;
  local_90 = TVar9.unknown;
  FUN_100025b34(TVar7.unknown,TVar13.unknown,puVar14);
  _swift_release(CVar8.unknown);
  _swift_bridgeObjectRelease(puVar16);
  local_80 = (undefined *)param_2[2];
  uStack_78 = param_2[3];
  _swift_bridgeObjectRetain();
  puVar3 = PTR___type_metadata_for_Swift_String_100523a98;
  puVar12 = local_a8;
  TVar4 = SwiftUI::Text::_init
                    (TVar9.unknown,PTR___type_metadata_for_Swift_String_100523a98,local_a8);
  CVar20.unknown = *(undefined **)((long)param_2 + (long)*(int *)(local_b0 + 0x1c));
  SwiftUI::Font::Weight::get_regular((Weight)TVar4.unknown);
  lVar19 = local_d0;
  (*local_c8)(local_d0,1,1,local_c0);
  FVar6 = SwiftUI::Font::_system(CVar20,(Font)0x0);
  FUN_10002a29c(lVar19,&DAT_10054a828,&DAT_10041e3c0);
  TVar13 = TVar4;
  puVar14 = puVar3;
  puVar17 = puVar12;
  TVar7 = SwiftUI::Text::_font(FVar6.unknown);
  _swift_release(FVar6.unknown);
  FUN_100025b34(TVar4.unknown,puVar3,puVar12);
  _swift_bridgeObjectRelease();
  CVar10 = SwiftUI::Color::get_white(CVar11);
  CVar11 = SwiftUI::Color::opacity(0.7,CVar10);
  _swift_release(CVar10.unknown);
  TVar4 = TVar7;
  puVar16 = TVar13.unknown;
  puVar18 = puVar14;
  local_80 = CVar11.unknown;
  TVar9 = SwiftUI::Text::_foregroundStyle();
  FUN_100025b34(TVar7.unknown,TVar13.unknown,puVar14);
  _swift_release(CVar11.unknown);
  _swift_bridgeObjectRelease(puVar17);
  puVar14 = local_90;
  puVar12 = local_98;
  puVar3 = local_a0;
  *local_88 = local_90;
  local_88[1] = local_a0;
  *(char *)(local_88 + 2) = (char)puVar15;
  local_88[3] = local_98;
  local_88[4] = TVar9.unknown;
  local_88[5] = TVar4.unknown;
  *(char *)(local_88 + 6) = (char)puVar16;
  local_88[7] = puVar18;
  FUN_100007b14(local_90,local_a0,puVar15);
  _swift_bridgeObjectRetain(puVar12);
  FUN_100007b14(TVar9.unknown,TVar4.unknown,puVar16);
  _swift_bridgeObjectRetain(puVar18);
  FUN_100025b34(TVar9.unknown,TVar4.unknown,puVar16);
  _swift_bridgeObjectRelease(puVar18);
  FUN_100025b34(puVar14,puVar3,puVar15);
  _swift_bridgeObjectRelease(puVar12);
  return;
}

