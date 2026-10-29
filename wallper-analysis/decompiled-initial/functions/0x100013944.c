// rea decompile_all
// name: FUN_100013944
// address: 0x100013944
// body: available
// range: 0x100013944-0x100013eef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100013ca0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100013944(long param_1,undefined *param_2)

{
  String *pSVar1;
  undefined8 *puVar2;
  int iVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  undefined1 uVar7;
  undefined *puVar8;
  Locale LVar9;
  LocalizationValue LVar10;
  PlainButtonStyle PVar11;
  undefined *puVar12;
  undefined *puVar13;
  State<undefined> SVar14;
  _FrameLayout _Var15;
  VerticalAlignment VVar16;
  Animation AVar17;
  long extraout_x8;
  long extraout_x8_00;
  long lVar18;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar19;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 uVar20;
  undefined8 *puVar21;
  LocalizationValue localized;
  String SVar22;
  String SStack_1f0;
  char *pcStack_1e0;
  void *local_1d8;
  long local_1d0;
  undefined *local_1c8;
  undefined *local_1c0;
  long local_1b8;
  long local_1b0;
  undefined *local_1a8;
  long local_1a0;
  long local_198;
  undefined1 local_190;
  undefined7 uStack_18f;
  byte local_188;
  undefined7 uStack_187;
  undefined8 local_180;
  byte local_178;
  undefined8 local_170;
  void *pvStack_168;
  undefined1 local_80 [16];
  undefined *local_70;
  
  puVar8 = &DAT_10054b298;
  local_198 = param_1;
  FUN_100002f94(&DAT_10054b298,&DAT_10041c5d0);
  local_1a8 = puVar8;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar8 + -8) + 0x40));
  lVar18 = (long)&SStack_1f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_1a0 = lVar18;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar21 = (undefined8 *)(lVar18 - extraout_x12);
  LVar9 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar9.unknown + -8) + 0x40));
  lVar18 = (long)puVar21 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_1b8 = lVar18;
  LVar10 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar10.unknown + -8) + 0x40));
  localized.unknown = (undefined *)(lVar18 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  PVar11 = SwiftUI::PlainButtonStyle::typeMetadataAccessor();
  local_1d0 = *(long *)(PVar11.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_1d0 + 0x40));
  lVar18 = (long)localized.unknown - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  puVar8 = &DAT_10054b2a0;
  FUN_100002f94(&DAT_10054b2a0,&DAT_10041c5d8);
  local_1d8 = *(void **)(puVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)((long)local_1d8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = &DAT_10054b2a8;
  FUN_100002f94(&DAT_10054b2a8,&DAT_10041c5e0);
  local_1c8 = puVar12;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar12 + -8) + 0x40));
  lVar19 = (lVar18 - extraout_x8_03) - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  local_1b0 = lVar19;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar19 = lVar19 - extraout_x12_00;
  puVar12 = &DAT_100525898;
  _swift_allocObject(&DAT_100525898,0x120,7);
  _memcpy(puVar12 + 0x10,param_2,0x110);
  local_1c0 = param_2;
  local_70 = param_2;
  FUN_100027a7c(param_2,&local_190);
  FUN_100002f94(&DAT_10054b2b0,&DAT_10041c5e8);
  FUN_10002992c();
  SwiftUI::Button::_init();
  SwiftUI::PlainButtonStyle::init();
  puVar12 = &DAT_10054b300;
  FUN_1000087a0(&DAT_10054b300,&DAT_10054b2a0,&DAT_10041c5d8,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
  puVar13 = &DAT_10054a8b0;
  FUN_1000036d0(&DAT_10054a8b0,PTR_typeMetadataAccessor_100522380,
                PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100522370);
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle
            (lVar19,lVar18,puVar8,PVar11.unknown,puVar12,puVar13);
  (**(code **)(local_1d0 + 8))(lVar18,PVar11.unknown);
  (**(code **)((long)local_1d8 + 8))(lVar18 - extraout_x8_03,puVar8);
  SVar22.bridgeObject = (void *)0x80000001004dbdf0;
  SVar22.str = (char *)0xd000000000000012;
  LVar10 = LocalizationValue::_init(SVar22);
  Foundation::Locale::get_current((Locale)LVar10.unknown);
  SVar22 = (extension_Foundation)::Swift::String::_init(localized,(Locale)0x0);
  local_80[0] = 0;
  SVar14 = SwiftUI::State::init
                     (&local_190,LVar10.unknown,PTR___type_metadata_for_Swift_Bool_100523b70);
  uVar7 = local_190;
  pvVar4 = (void *)CONCAT71(uStack_187,local_188);
  pSVar1 = (String *)(lVar19 + *(int *)(local_1c8 + 0x24));
  *pSVar1 = SVar22;
  *(undefined1 *)&pSVar1[1].str = uVar7;
  pSVar1[1].bridgeObject = pvVar4;
  SwiftUI::Alignment::get_center((Alignment)SVar14.unknown);
  _Var15 = SwiftUI::_FrameLayout::_init((Alignment)0x403e000000000000);
  local_1b8 = CONCAT71(uStack_18f,local_190);
  local_1c8 = (undefined *)CONCAT44(local_1c8._4_4_,(uint)local_188);
  local_1d0 = local_180;
  local_1d8 = (void *)CONCAT44(local_1d8._4_4_,(uint)local_178);
  SStack_1f0.bridgeObject = pvStack_168;
  pcStack_1e0 = (char *)local_170;
  VVar16 = SwiftUI::VerticalAlignment::get_center(_Var15.unknown);
  *puVar21 = VVar16.unknown;
  puVar21[1] = 0x4020000000000000;
  *(undefined1 *)(puVar21 + 2) = 0;
  puVar8 = &DAT_10054b308;
  FUN_100002f94(&DAT_10054b308,&DAT_10041c610);
  puVar12 = local_1c0;
  AVar17.unknown = local_1c0;
  FUN_100014108((long)puVar21 + (long)*(int *)(puVar8 + 0x2c));
  AVar17 = SwiftUI::Animation::easeInOut(0.22,AVar17);
  uVar20 = *(undefined8 *)(puVar12 + 0x68);
  puVar8 = &DAT_10041c618;
  _swift_getKeyPath(&DAT_10041c618);
  puVar12 = &DAT_10041c640;
  _swift_getKeyPath(&DAT_10041c640);
  Combine::Published::_get_subscript(local_80,uVar20,puVar8,puVar12);
  _swift_release(puVar8);
  _swift_release(puVar12);
  uVar7 = local_80[0];
  lVar18 = local_1b0;
  iVar3 = *(int *)(local_1a8 + 0x24);
  *(undefined8 *)((long)puVar21 + (long)iVar3) = AVar17.unknown;
  *(undefined1 *)((undefined8 *)((long)puVar21 + (long)iVar3) + 1) = uVar7;
  FUN_1000087e4(lVar19,lVar18,&DAT_10054b2a8,&DAT_10041c5e0);
  lVar5 = local_1a0;
  FUN_1000087e4(puVar21,local_1a0,&DAT_10054b298,&DAT_10041c5d0);
  lVar6 = local_198;
  FUN_1000087e4(lVar18,local_198,&DAT_10054b2a8,&DAT_10041c5e0);
  puVar8 = &DAT_10054b310;
  FUN_100002f94(&DAT_10054b310,&DAT_10041c660);
  puVar2 = (undefined8 *)(lVar6 + *(int *)(puVar8 + 0x30));
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  puVar2[2] = local_1b8;
  *(char *)(puVar2 + 3) = (char)local_1c8;
  puVar2[4] = local_1d0;
  *(char *)(puVar2 + 5) = (char)local_1d8;
  puVar2[6] = pcStack_1e0;
  puVar2[7] = SStack_1f0.bridgeObject;
  FUN_1000087e4(lVar5,lVar6 + *(int *)(puVar8 + 0x40),&DAT_10054b298,&DAT_10041c5d0);
  FUN_10002a29c(puVar21,&DAT_10054b298,&DAT_10041c5d0);
  FUN_10002a29c(lVar19,&DAT_10054b2a8,&DAT_10041c5e0);
  FUN_10002a29c(lVar5,&DAT_10054b298,&DAT_10041c5d0);
  FUN_10002a29c(lVar18,&DAT_10054b2a8,&DAT_10041c5e0);
  return;
}

