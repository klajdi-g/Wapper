// rea decompile_all
// name: FUN_1002e8958
// address: 0x1002e8958
// body: available
// range: 0x1002e8958-0x1002e8d0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002e8a68 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1002e8958(undefined8 *param_1,LocalizedStringKey param_2,undefined8 param_3,
                  undefined4 param_4,undefined8 param_5,ulong param_6,undefined8 param_7,
                  undefined4 param_8,undefined8 param_9,ulong param_10,undefined8 param_11)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Design DVar4;
  undefined *puVar5;
  State<undefined> SVar6;
  Text TVar7;
  HierarchicalShapeStyle HVar8;
  Text TVar9;
  Font FVar11;
  Text TVar12;
  Text TVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  long extraout_x8;
  long lVar18;
  undefined1 *puVar19;
  undefined8 uStack_170;
  undefined2 auStack_168 [4];
  undefined1 auStack_160 [4];
  undefined4 local_15c;
  ulong local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined *local_140;
  undefined8 local_138;
  undefined1 auStack_130 [64];
  ulong local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lVar10;
  
  local_158 = param_10;
  puVar5 = &DAT_10054a828;
  local_15c = param_8;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = -extraout_x8;
  puVar19 = auStack_160 + lVar10;
  _swift_bridgeObjectRetain(param_3);
  _swift_bridgeObjectRetain(param_5);
  *(undefined2 *)((long)auStack_168 + lVar10) = 0x100;
  *(undefined8 *)((long)&uStack_170 + lVar10) = 0;
  local_14c = param_4;
  local_140 = (undefined *)SwiftUI::Text::_init(param_2);
  local_f0 = local_f0 & 0xffffffffffffff00;
  local_148 = param_3;
  local_138 = param_5;
  SwiftUI::State::init(&local_90,local_140,PTR___type_metadata_for_Swift_Bool_100523b70);
  local_f0 = 0;
  puVar5 = &DAT_100552970;
  FUN_100002f94(&DAT_100552970,&DAT_10042f240);
  SVar6 = SwiftUI::State::init(&uStack_80,puVar5,puVar5);
  local_a0 = CONCAT71(local_a0._1_7_,(char)local_15c);
  uStack_e0 = local_a0;
  uStack_c8 = uStack_88;
  local_d0 = local_90;
  uStack_b8 = uStack_78;
  uStack_c0 = uStack_80;
  local_b0 = local_158;
  uStack_a8 = param_11;
  local_f0 = param_6;
  uStack_e8 = param_7;
  uStack_d8 = param_9;
  local_98 = param_9;
  FUN_100026df4();
  _swift_bridgeObjectRetain(param_7);
  _swift_bridgeObjectRetain(param_9);
  _swift_bridgeObjectRetain(param_11);
  puVar5 = PTR___type_metadata_for_Swift_String_100523a98;
  TVar7 = SwiftUI::Text::_init
                    (SVar6.unknown,PTR___type_metadata_for_Swift_String_100523a98,SVar6.unknown);
  HVar8 = SwiftUI::HierarchicalShapeStyle::get_secondary(TVar7.unknown);
  local_b0 = CONCAT44(local_b0._4_4_,(int)HVar8.unknown);
  FUN_100025b4c();
  TVar13 = TVar7;
  puVar14 = puVar5;
  puVar16 = SVar6.unknown;
  TVar9 = SwiftUI::Text::_foregroundStyle();
  FUN_100025b34(TVar7.unknown,puVar5,SVar6.unknown);
  _swift_bridgeObjectRelease(param_5);
  uVar1 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_Font_Design_monospaced_SwiftUI_Font_Design_Type___>_SwiftUI_Font_Design_100522cd0
  ;
  DVar4 = SwiftUI::Font::Design::typeMetadataAccessor();
  lVar10 = CONCAT71((int7)((ulong)TVar9.unknown >> 8),DVar4.value);
  lVar18 = *(long *)(lVar10 + -8);
  (**(code **)(lVar18 + 0x68))(puVar19,uVar1,lVar10);
  (**(code **)(lVar18 + 0x38))(puVar19,0,1,lVar10);
  FVar11 = SwiftUI::Font::_system((CGFloat)0x0,(Font)0x1);
  FUN_10002a29c(puVar19,&DAT_10054a828,&DAT_10041e3c0);
  TVar7 = TVar9;
  puVar15 = TVar13.unknown;
  puVar17 = puVar14;
  TVar12 = SwiftUI::Text::_font(FVar11.unknown);
  _swift_release(FVar11.unknown);
  FUN_100025b34(TVar9.unknown,TVar13.unknown,puVar14);
  _swift_bridgeObjectRelease(puVar16);
  uVar3 = local_138;
  puVar5 = local_140;
  uVar2 = local_148;
  uVar1 = local_14c;
  uStack_a8 = uStack_e8;
  local_b0 = local_f0;
  local_98 = uStack_d8;
  local_a0 = uStack_e0;
  uStack_88 = uStack_c8;
  local_90 = local_d0;
  uStack_78 = uStack_b8;
  uStack_80 = uStack_c0;
  *param_1 = local_140;
  param_1[1] = local_148;
  *(char *)(param_1 + 2) = (char)local_14c;
  param_1[3] = local_138;
  param_1[5] = uStack_e8;
  param_1[4] = local_f0;
  param_1[7] = uStack_d8;
  param_1[6] = uStack_e0;
  param_1[9] = uStack_c8;
  param_1[8] = local_d0;
  param_1[0xb] = uStack_b8;
  param_1[10] = uStack_c0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 1;
  param_1[0xe] = TVar12.unknown;
  param_1[0xf] = TVar7.unknown;
  *(char *)(param_1 + 0x10) = (char)puVar15;
  param_1[0x11] = puVar17;
  FUN_100007b14(local_140,local_148,local_14c);
  _swift_bridgeObjectRetain(uVar3);
  FUN_100100eac(&local_b0,auStack_130);
  FUN_100007b14(TVar12.unknown,TVar7.unknown,puVar15);
  _swift_bridgeObjectRetain(puVar17);
  FUN_100025b34(TVar12.unknown,TVar7.unknown,puVar15);
  _swift_bridgeObjectRelease(puVar17);
  FUN_1002cab64(&local_f0);
  FUN_100025b34(puVar5,uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar3);
  return;
}

