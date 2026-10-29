// rea decompile_all
// name: FUN_100063db4
// address: 0x100063db4
// body: available
// range: 0x100063db4-0x1000643c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


String FUN_100063db4(void)

{
  undefined1 *puVar1;
  long lVar2;
  undefined *puVar3;
  UUID UVar4;
  Locale LVar5;
  LocalizationValue LVar6;
  undefined *puVar7;
  char *pcVar8;
  long lVar9;
  ulong uVar10;
  LocalizationValue LVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  char *pcVar12;
  ulong uVar13;
  long extraout_x12;
  long extraout_x12_00;
  long lVar14;
  long unaff_x20;
  code *pcVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  String SVar20;
  undefined1 auStack_b0 [8];
  undefined1 *local_a8;
  undefined *local_a0;
  long local_98;
  long local_90;
  ulong local_88;
  long local_80;
  LocalizationValue local_78;
  long local_70;
  byte local_61;
  
  lVar2 = 0;
  FUN_10025ee04();
  local_90 = *(long *)(lVar2 + -8);
  local_80 = lVar2;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_90 + 0x40));
  puVar3 = &DAT_10054b728;
  local_a8 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_100002f94(&DAT_10054b728,&DAT_10041cbf0);
  local_a0 = puVar3;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = (long)(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  puVar3 = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = lVar14 - extraout_x8_01;
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  lVar16 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar16 + 0x40));
  lVar17 = lVar18 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_10054ac38;
  FUN_100002f94(&DAT_10054ac38,&DAT_10041e8e0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  uVar13 = lVar17 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  local_88 = uVar13;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar19 = uVar13 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_98 = lVar19 - extraout_x12_00;
  LVar5 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar5.unknown + -8) + 0x40));
  lVar2 = (lVar19 - extraout_x12_00) - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  local_70 = lVar2;
  LVar6 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar6.unknown + -8) + 0x40));
  local_78.unknown = (undefined *)(lVar2 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0));
  lVar2 = *(long *)(unaff_x20 + 0x40);
  if (lVar2 == 0) {
    FUN_1001b7378(0);
    FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
    SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x1000643c8);
    (*pcVar15)();
  }
  puVar3 = &DAT_10041ee68;
  _swift_getKeyPath(&DAT_10041ee68);
  puVar7 = &DAT_10041ee90;
  _swift_getKeyPath(&DAT_10041ee90);
  _swift_retain(lVar2);
  Combine::Published::_get_subscript(&local_61);
  _swift_release(puVar3);
  _swift_release(puVar7);
  _swift_release(lVar2);
  if ((local_61 & 1) != 0) {
    pcVar12 = "apers and they\'ll show up here.";
    pcVar8 = &DAT_d000000000000028;
    goto LAB_100064324;
  }
  puVar3 = &DAT_10041ef10;
  _swift_getKeyPath(&DAT_10041ef10);
  puVar7 = &DAT_10041ef38;
  _swift_getKeyPath(&DAT_10041ef38);
  _swift_retain(lVar2);
  Combine::Published::_get_subscript(lVar18);
  _swift_release(puVar3);
  _swift_release(puVar7);
  lVar9 = lVar18;
  (**(code **)(lVar16 + 0x30))(lVar18,1,UVar4.unknown);
  if ((int)lVar9 == 1) {
    _swift_release(lVar2);
    FUN_10002a29c(lVar18,&DAT_10054a9c8,&DAT_10041bbe0);
    lVar16 = local_80;
    lVar2 = local_90;
    lVar18 = local_98;
    pcVar15 = *(code **)(local_90 + 0x38);
    (*pcVar15)(local_98,1,1,local_80);
  }
  else {
    (**(code **)(lVar16 + 0x20))(lVar17,lVar18,UVar4.unknown);
    lVar18 = local_98;
    FUN_1001b6e74(local_98,lVar17);
    _swift_release(lVar2);
    (**(code **)(lVar16 + 8))(lVar17,UVar4.unknown);
    pcVar15 = *(code **)(local_90 + 0x38);
    lVar2 = local_90;
    lVar16 = local_80;
  }
  (*pcVar15)(lVar19,1,1,lVar16);
  lVar17 = (long)*(int *)(local_a0 + 0x30);
  FUN_1000087e4(lVar18,lVar14,&DAT_10054ac38,&DAT_10041e8e0);
  FUN_1000087e4(lVar19,lVar14 + lVar17,&DAT_10054ac38,&DAT_10041e8e0);
  pcVar15 = *(code **)(lVar2 + 0x30);
  lVar2 = lVar14;
  (*pcVar15)(lVar14,1,lVar16);
  uVar13 = local_88;
  if ((int)lVar2 == 1) {
    FUN_10002a29c(lVar19,&DAT_10054ac38,&DAT_10041e8e0);
    FUN_10002a29c(lVar18,&DAT_10054ac38,&DAT_10041e8e0);
    lVar17 = lVar14 + lVar17;
    (*pcVar15)(lVar17,1,lVar16);
    if ((int)lVar17 == 1) {
      FUN_10002a29c(lVar14,&DAT_10054ac38,&DAT_10041e8e0);
LAB_10006430c:
      pcVar12 = "lpapers from the Playlists tab.";
      pcVar8 = (char *)0xd00000000000002f;
      goto LAB_100064324;
    }
LAB_100064254:
    FUN_10002a29c(lVar14,&DAT_10054b728,&DAT_10041cbf0);
  }
  else {
    FUN_1000087e4(lVar14,local_88,&DAT_10054ac38,&DAT_10041e8e0);
    lVar2 = lVar14 + lVar17;
    (*pcVar15)(lVar2,1,lVar16);
    puVar1 = local_a8;
    if ((int)lVar2 == 1) {
      FUN_10002a29c(lVar19,&DAT_10054ac38,&DAT_10041e8e0);
      FUN_10002a29c(lVar18,&DAT_10054ac38,&DAT_10041e8e0);
      FUN_100029548(uVar13,FUN_10025ee04);
      goto LAB_100064254;
    }
    FUN_100007e64(lVar14 + lVar17,local_a8,FUN_10025ee04);
    uVar10 = uVar13;
    FUN_100265c18(uVar13,puVar1);
    FUN_100029548(puVar1,FUN_10025ee04);
    FUN_10002a29c(lVar19,&DAT_10054ac38,&DAT_10041e8e0);
    FUN_10002a29c(lVar18,&DAT_10054ac38,&DAT_10041e8e0);
    FUN_100029548(uVar13,FUN_10025ee04);
    FUN_10002a29c(lVar14,&DAT_10054ac38,&DAT_10041e8e0);
    if ((uVar10 & 1) != 0) goto LAB_10006430c;
  }
  pcVar12 = "Nothing to play yet";
  pcVar8 = (char *)0xd00000000000004f;
LAB_100064324:
  LVar6.unknown = local_78.unknown;
  SVar20.bridgeObject = (void *)((ulong)pcVar12 | 0x8000000000000000);
  SVar20.str = pcVar8;
  LVar11 = LocalizationValue::_init(SVar20);
  Foundation::Locale::get_current((Locale)LVar11.unknown);
  SVar20 = (extension_Foundation)::Swift::String::_init(LVar6,(Locale)0x0);
  return SVar20;
}

