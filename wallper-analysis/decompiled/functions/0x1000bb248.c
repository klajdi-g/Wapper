// rea decompile_all
// name: FUN_1000bb248
// address: 0x1000bb248
// body: available
// range: 0x1000bb248-0x1000bb8ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000bb4c4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000bb248(undefined8 *param_1,CGFloat param_2,String *param_3)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  String systemName;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined *puVar10;
  Design DVar11;
  ControlSize CVar12;
  char *pcVar13;
  undefined *puVar14;
  Image IVar15;
  Color CVar17;
  Text TVar18;
  Font FVar19;
  Text TVar20;
  Color CVar21;
  Text TVar22;
  LocalizedStringKey LVar23;
  Binding BVar24;
  char **ppcVar25;
  Text TVar26;
  Binding<bool> isOn;
  undefined *puVar27;
  undefined *puVar28;
  long extraout_x8;
  long extraout_x8_00;
  long lVar29;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  CGFloat size;
  long extraout_x12;
  code *pcVar30;
  undefined1 auStack_140 [8];
  undefined8 *local_138;
  undefined4 local_12c;
  undefined *local_128;
  undefined *local_120;
  undefined *local_118;
  long local_110;
  long local_108;
  undefined *local_100;
  undefined *local_f8;
  char *local_f0;
  long local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined1 *local_d0;
  long local_c8;
  long local_c0;
  undefined *local_b8;
  long local_b0;
  long local_a8;
  undefined *local_a0;
  char *local_80;
  undefined *puStack_78;
  undefined1 local_70;
  undefined *puVar16;
  
  local_138 = param_1;
  local_b8 = (undefined *)SwiftUI::SwitchToggleStyle::typeMetadataAccessor();
  local_b0 = *(long *)(local_b8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_b0 + 0x40));
  pcVar13 = &DAT_10054b1e0;
  local_d0 = auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_100002f94(&DAT_10054b1e0,&DAT_10041c400);
  local_e8 = *(long *)(pcVar13 + -8);
  local_f0 = pcVar13;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_e8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar29 = (long)(auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  puVar14 = &DAT_10054b1e8;
  local_110 = lVar29;
  FUN_100002f94(&DAT_10054b1e8,&DAT_10042e650);
  local_c8 = *(long *)(puVar14 + -8);
  local_e0 = puVar14;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_c8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar29 = lVar29 - extraout_x8_01;
  puVar14 = &DAT_10054b1f0;
  local_108 = lVar29;
  FUN_100002f94(&DAT_10054b1f0,&DAT_10041c410);
  local_d8 = puVar14;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar14 + -8) + 0x40));
  lVar29 = lVar29 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_c0 = lVar29;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar29 = lVar29 - extraout_x12;
  puVar14 = &DAT_10054a828;
  local_a8 = lVar29;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar29 = lVar29 - extraout_x8_03;
  systemName = *param_3;
  _swift_bridgeObjectRetain(param_3->bridgeObject);
  IVar15 = SwiftUI::Image::init(systemName);
  local_a0 = IVar15.unknown;
  SwiftUI::Font::Weight::get_semibold((Weight)IVar15.unknown);
  DVar11 = SwiftUI::Font::Design::typeMetadataAccessor();
  puVar16 = (undefined *)CONCAT71((int7)((ulong)IVar15.unknown >> 8),DVar11.value);
  pcVar30 = *(code **)(*(long *)(puVar16 + -8) + 0x38);
  CVar21.unknown = puVar16;
  (*pcVar30)(lVar29,1,1);
  local_f8 = (undefined *)SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(lVar29,&DAT_10054a828,&DAT_10041e3c0);
  CVar17.unknown = &DAT_100422528;
  _swift_getKeyPath();
  local_100 = CVar17.unknown;
  CVar17 = SwiftUI::Color::get_white(CVar17);
  size.unknown = (undefined *)0x3feccccccccccccd;
  local_118 = (undefined *)SwiftUI::Color::opacity(0.9,CVar17);
  _swift_release(CVar17.unknown);
  local_80 = param_3[1].str;
  pvVar2 = param_3[1].bridgeObject;
  puStack_78 = pvVar2;
  FUN_100026df4();
  _swift_bridgeObjectRetain(pvVar2);
  puVar14 = PTR___type_metadata_for_Swift_String_100523a98;
  TVar18 = SwiftUI::Text::_init
                     (CVar17.unknown,PTR___type_metadata_for_Swift_String_100523a98,CVar17.unknown);
  SwiftUI::Font::Weight::get_medium((Weight)TVar18.unknown);
  (*pcVar30)(lVar29,1,1,puVar16);
  FVar19 = SwiftUI::Font::_system(size,(Font)0x0);
  FUN_10002a29c(lVar29,&DAT_10054a828,&DAT_10041e3c0);
  TVar26 = TVar18;
  puVar16 = puVar14;
  puVar27 = CVar17.unknown;
  TVar20 = SwiftUI::Text::_font(FVar19.unknown);
  _swift_release(FVar19.unknown);
  FUN_100025b34(TVar18.unknown,puVar14,CVar17.unknown);
  _swift_bridgeObjectRelease();
  CVar17 = SwiftUI::Color::get_white(CVar21);
  local_80 = (char *)CVar17;
  FUN_100028d58();
  TVar18 = TVar20;
  puVar14 = TVar26.unknown;
  puVar28 = puVar16;
  TVar22 = SwiftUI::Text::_foregroundStyle();
  local_12c = SUB84(puVar14,0);
  local_128 = TVar18.unknown;
  local_120 = puVar28;
  FUN_100025b34(TVar20.unknown,TVar26.unknown,puVar16);
  _swift_release(CVar17.unknown);
  _swift_bridgeObjectRelease(puVar27);
  isOn.unknown = (undefined *)0xe000000000000000;
  LVar23 = SwiftUI::LocalizedStringKey::init((String)(ZEXT816(0xe000000000000000) << 0x40));
  puStack_78 = param_3[2].bridgeObject;
  local_80 = param_3[2].str;
  local_70 = *(undefined1 *)&param_3[3].str;
  BVar24.unknown = &DAT_10054e328;
  FUN_100002f94(&DAT_10054e328,&DAT_10041fa50);
  SwiftUI::Binding::get_projectedValue(BVar24);
  lVar29 = local_110;
  (extension_SwiftUI)::SwiftUI::Toggle::_init(LVar23,isOn);
  puVar14 = &DAT_10054b200;
  FUN_1000087a0(&DAT_10054b200,&DAT_10054b1e0,&DAT_10041c400,
                PTR_SwiftUI__SwiftUI__Toggle<undefined>_>SwiftUI__View_1005234a0);
  pcVar13 = local_f0;
  lVar5 = local_108;
  (extension_SwiftUI)::SwiftUI::View::_labelsHidden();
  (**(code **)(local_e8 + 8))(lVar29,pcVar13);
  puVar8 = local_d0;
  SwiftUI::SwitchToggleStyle::init();
  local_80 = pcVar13;
  ppcVar25 = &local_80;
  puStack_78 = puVar14;
  _swift_getOpaqueTypeConformance2
            (ppcVar25,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_labelsHidden()__>_some>>_100522f20
             ,1);
  puVar14 = &DAT_10054b208;
  FUN_1000036d0(&DAT_10054b208,PTR_typeMetadataAccessor_1005225f8,
                PTR_SwiftUI__SwiftUI__SwitchToggleStyle_>SwiftUI__ToggleStyle_1005225e8);
  lVar9 = local_a8;
  puVar27 = local_b8;
  puVar16 = local_e0;
  (extension_SwiftUI)::SwiftUI::View::_toggleStyle
            (local_a8,puVar8,local_e0,local_b8,ppcVar25,puVar14);
  (**(code **)(local_b0 + 8))(puVar8,puVar27);
  (**(code **)(local_c8 + 8))(lVar5,puVar16);
  puVar1 = (undefined8 *)(lVar9 + *(int *)(local_d8 + 0x24));
  puVar14 = &DAT_10054b210;
  FUN_100002f94(&DAT_10054b210,&DAT_10041c420);
  iVar4 = *(int *)(puVar14 + 0x1c);
  uVar3 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_ControlSize_small_SwiftUI_ControlSize_Type___>_SwiftUI_ControlSize_100521cb0
  ;
  CVar12 = SwiftUI::ControlSize::typeMetadataAccessor();
  lVar29 = CONCAT71((int7)((ulong)puVar14 >> 8),CVar12.value);
  (**(code **)(*(long *)(lVar29 + -8) + 0x68))((long)puVar1 + (long)iVar4,uVar3,lVar29);
  puVar14 = &DAT_100422558;
  _swift_getKeyPath();
  lVar29 = local_c0;
  *puVar1 = puVar14;
  FUN_1000087e4(lVar9,local_c0,&DAT_10054b1f0,&DAT_10041c410);
  puVar10 = local_a0;
  puVar7 = local_f8;
  puVar6 = local_100;
  puVar28 = local_118;
  puVar27 = local_120;
  puVar16 = local_128;
  uVar3 = local_12c;
  puVar1 = local_138;
  *local_138 = local_a0;
  local_138[1] = local_100;
  local_138[2] = local_f8;
  local_138[3] = local_118;
  local_138[4] = TVar22.unknown;
  local_138[5] = local_128;
  *(char *)(local_138 + 6) = (char)local_12c;
  local_138[7] = local_120;
  local_138[8] = 0x4028000000000000;
  *(undefined1 *)(local_138 + 9) = 0;
  puVar14 = &DAT_100550a30;
  FUN_100002f94(&DAT_100550a30,&DAT_100422588);
  FUN_1000087e4(lVar29,(long)puVar1 + (long)*(int *)(puVar14 + 0x50),&DAT_10054b1f0);
  _swift_retain(puVar10);
  _swift_retain(puVar6);
  _swift_retain(puVar7);
  _swift_retain(puVar28);
  FUN_100007b14(TVar22.unknown,puVar16,uVar3);
  _swift_bridgeObjectRetain(puVar27);
  FUN_10002a29c(local_a8,&DAT_10054b1f0,&DAT_10041c410);
  FUN_10002a29c(lVar29,&DAT_10054b1f0,&DAT_10041c410);
  FUN_100025b34(TVar22.unknown,puVar16,uVar3);
  _swift_release(puVar28);
  _swift_release(puVar7);
  _swift_release(puVar6);
  _swift_release(local_a0);
  _swift_bridgeObjectRelease(puVar27);
  return;
}

