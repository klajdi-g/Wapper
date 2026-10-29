// rea decompile_all
// name: FUN_10013fea4
// address: 0x10013fea4
// body: available
// range: 0x10013fea4-0x10014018f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100140014 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10013fea4(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  Locale LVar9;
  LocalizationValue LVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long unaff_x20;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  LocalizationValue localized;
  long lVar15;
  String stringLiteral;
  undefined1 auStack_90 [8];
  long local_88;
  undefined *puStack_80;
  long local_78;
  undefined1 local_70 [16];
  
  puVar7 = &DAT_100557e80;
  FUN_100002f94(&DAT_100557e80,&DAT_10041cf60);
  local_78 = *(long *)(puVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_78 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = auStack_90 + -extraout_x8;
  puVar8 = &DAT_1005543d8;
  FUN_100002f94(&DAT_1005543d8,&DAT_100427df0);
  local_88 = *(long *)(puVar8 + -8);
  puStack_80 = puVar8;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_88 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)puVar11 - extraout_x8_00;
  LVar9 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar9.unknown + -8) + 0x40));
  LVar10 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar10.unknown + -8) + 0x40));
  localized.unknown =
       (undefined *)
       ((lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0)) -
       (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  puVar8 = &DAT_100554ac0;
  FUN_100002f94(&DAT_100554ac0,&DAT_100427df8);
  lVar12 = *(long *)(puVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = (long)localized.unknown - extraout_x8_03;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  lVar6 = _TtC7Wallper18LaunchBootstrapper::_phase;
  auVar1[0xf] = 0;
  auVar1._0_15_ = local_70._1_15_;
  local_70 = auVar1 << 8;
  Combine::Published::init(lVar15,puVar8,&DAT_10052e208);
  (**(code **)(lVar12 + 0x20))(unaff_x20 + lVar6,lVar15,puVar8);
  lVar6 = _TtC7Wallper18LaunchBootstrapper::_status;
  stringLiteral.bridgeObject = (void *)0x80000001004de640;
  stringLiteral.str = (char *)0x1000000000000017;
  LVar10 = LocalizationValue::_init(stringLiteral);
  Foundation::Locale::get_current((Locale)LVar10.unknown);
  local_70 = (undefined1  [16])(extension_Foundation)::Swift::String::_init(localized,(Locale)0x0);
  Combine::Published::init(lVar13,LVar10.unknown,PTR___type_metadata_for_Swift_String_100523a98);
  (**(code **)(local_88 + 0x20))(unaff_x20 + lVar6,lVar13,puStack_80);
  lVar6 = _TtC7Wallper18LaunchBootstrapper::_isFinished;
  puVar8 = PTR___type_metadata_for_Swift_Bool_100523b70;
  auVar2[0xf] = 0;
  auVar2._0_15_ = local_70._1_15_;
  local_70 = auVar2 << 8;
  Combine::Published::init(puVar11,LVar10.unknown,PTR___type_metadata_for_Swift_Bool_100523b70);
  pcVar14 = *(code **)(local_78 + 0x20);
  (*pcVar14)(unaff_x20 + lVar6,puVar11,puVar7);
  lVar6 = _TtC7Wallper18LaunchBootstrapper::_isUpdateAvailable;
  auVar3[0xf] = 0;
  auVar3._0_15_ = local_70._1_15_;
  local_70 = auVar3 << 8;
  Combine::Published::init(puVar11,LVar10.unknown,puVar8);
  (*pcVar14)(unaff_x20 + lVar6,puVar11,puVar7);
  lVar6 = _TtC7Wallper18LaunchBootstrapper::_isAppReady;
  auVar4[0xf] = 0;
  auVar4._0_15_ = local_70._1_15_;
  local_70 = auVar4 << 8;
  Combine::Published::init(puVar11,LVar10.unknown,puVar8);
  (*pcVar14)(unaff_x20 + lVar6,puVar11,puVar7);
  lVar6 = _TtC7Wallper18LaunchBootstrapper::_didFailWithOffline;
  auVar5[0xf] = 0;
  auVar5._0_15_ = local_70._1_15_;
  local_70 = auVar5 << 8;
  Combine::Published::init(puVar11,LVar10.unknown,puVar8);
  (*pcVar14)(unaff_x20 + lVar6,puVar11,puVar7);
  return;
}

