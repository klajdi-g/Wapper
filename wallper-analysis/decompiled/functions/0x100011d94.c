// rea decompile_all
// name: FUN_100011d94
// address: 0x100011d94
// body: available
// range: 0x100011d94-0x100012407 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100011d94(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  Locale LVar5;
  LocalizationValue LVar6;
  StringInterpolation SVar7;
  long lVar8;
  UUID UVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  Date DVar13;
  LocalizationValue LVar14;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar15;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar16;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x12;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  String SVar21;
  String SVar22;
  long local_e0;
  long local_d8;
  long local_d0;
  StringInterpolation local_c8;
  LocalizationValue local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  undefined *puStack_98;
  long local_90;
  long local_88;
  long local_80;
  undefined *puStack_78;
  long local_70;
  long local_68;
  
  LVar5 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar5.unknown + -8) + 0x40));
  lVar8 = (long)&local_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_b8 = lVar8;
  LVar6 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar6.unknown + -8) + 0x40));
  puVar15 = (undefined *)(lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  local_c0.unknown = puVar15;
  SVar7 = LocalizationValue::StringInterpolation::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(SVar7.unknown + -8) + 0x40));
  puVar15 = puVar15 + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_c8.unknown = puVar15;
  puStack_78 = (undefined *)Foundation::Calendar::typeMetadataAccessor();
  local_80 = *(long *)(puStack_78 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_80 + 0x40));
  lVar16 = (long)puVar15 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_90 = lVar16;
  puStack_98 = (undefined *)Foundation::Date::typeMetadataAccessor();
  local_a0 = *(long *)(puStack_98 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_a0 + 0x40));
  lVar16 = lVar16 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  puVar15 = &DAT_10054a9d0;
  local_a8 = lVar16;
  FUN_100002f94(&DAT_10054a9d0,&DAT_10041bc60);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = lVar16 - extraout_x8_04;
  lVar8 = 0;
  local_88 = lVar16;
  FUN_1001d59ac();
  local_b0 = *(long *)(lVar8 + -8);
  local_68 = lVar8;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_b0 + 0x40));
  lVar16 = lVar16 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  puVar15 = &DAT_10054a9c8;
  local_d8 = lVar16;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar15 + -8) + 0x40));
  lVar16 = lVar16 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0);
  local_e0 = lVar16;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar16 = lVar16 - extraout_x12;
  UVar9 = Foundation::UUID::typeMetadataAccessor();
  lVar19 = *(long *)(UVar9.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar19 + 0x40));
  lVar17 = lVar16 - (extraout_x8_07 + 0xfU & 0xfffffffffffffff0);
  puVar15 = &DAT_10054ac38;
  FUN_100002f94(&DAT_10054ac38,&DAT_10041e8e0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = lVar17 - extraout_x8_08;
  lVar10 = 0;
  FUN_10025ee04();
  lVar20 = *(long *)(lVar10 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar20 + 0x40));
  local_70 = lVar8 - (extraout_x8_09 + 0xfU & 0xfffffffffffffff0);
  lVar18 = *(long *)(param_2 + 0x38);
  local_d0 = param_2;
  if (lVar18 == 0) {
    FUN_1001b7378(0);
    FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
    SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100012408);
    (*pcVar4)();
  }
  puVar15 = &DAT_10041bbe8;
  _swift_getKeyPath(&DAT_10041bbe8);
  puVar11 = &DAT_10041bc10;
  _swift_getKeyPath(&DAT_10041bc10);
  _swift_retain(lVar18);
  Combine::Published::_get_subscript(lVar16);
  _swift_release(puVar15);
  _swift_release(puVar11);
  lVar12 = lVar16;
  (**(code **)(lVar19 + 0x30))(lVar16,1,UVar9.unknown);
  if ((int)lVar12 == 1) {
    _swift_release(lVar18);
    FUN_10002a29c(lVar16,&DAT_10054a9c8,&DAT_10041bbe0);
    (**(code **)(lVar20 + 0x38))(lVar8,1,1,lVar10);
  }
  else {
    (**(code **)(lVar19 + 0x20))(lVar17,lVar16,UVar9.unknown);
    FUN_1001b6e74(lVar8,lVar17);
    _swift_release(lVar18);
    (**(code **)(lVar19 + 8))(lVar17,UVar9.unknown);
    lVar17 = lVar8;
    (**(code **)(lVar20 + 0x30))(lVar8,1,lVar10);
    lVar16 = local_70;
    if ((int)lVar17 != 1) {
      FUN_100007e64(lVar8,local_70,FUN_10025ee04);
      lVar17 = local_a8;
      DVar13 = Foundation::Date::init();
      lVar18 = local_90;
      Foundation::Calendar::get_current((Calendar)DVar13.unknown);
      lVar8 = local_88;
      FUN_1001d62f0(local_88,lVar17,lVar18);
      (**(code **)(local_80 + 8))(lVar18,puStack_78);
      (**(code **)(local_a0 + 8))(lVar17,puStack_98);
      lVar18 = local_68;
      lVar20 = lVar8;
      (**(code **)(local_b0 + 0x30))(lVar8,1,local_68);
      lVar17 = local_d8;
      if ((int)lVar20 != 1) {
        pcVar4 = FUN_1001d59ac;
        FUN_100007e64(lVar8,local_d8);
        SVar7.unknown = local_c8.unknown;
        LocalizationValue::StringInterpolation::_init(10,2);
        SVar22.bridgeObject = (void *)0xa300000000000000;
        SVar22.str = (char *)0x9c80e2;
        LocalizationValue::StringInterpolation::_appendLiteral(SVar22,(StringInterpolation)pcVar4);
        LocalizationValue::StringInterpolation::_appendInterpolation
                  (*(String *)(lVar16 + *(int *)(lVar10 + 0x14)),(StringInterpolation)pcVar4);
        SVar21.bridgeObject = (void *)0xa700000000000000;
        SVar21.str = (char *)0x20b7c2209d80e2;
        LocalizationValue::StringInterpolation::_appendLiteral(SVar21,(StringInterpolation)pcVar4);
        LocalizationValue::StringInterpolation::_appendInterpolation
                  (*(String *)(lVar17 + *(int *)(lVar18 + 0x14)),(StringInterpolation)pcVar4);
        LocalizationValue::StringInterpolation::_appendLiteral
                  ((String)(ZEXT816(0xe000000000000000) << 0x40),(StringInterpolation)pcVar4);
        LVar6.unknown = local_c0.unknown;
        LVar14 = LocalizationValue::_init(SVar7);
        Foundation::Locale::get_current((Locale)LVar14.unknown);
        SVar22 = (extension_Foundation)::Swift::String::_init(LVar6,(Locale)0x0);
        lVar8 = local_e0;
        puVar1 = (undefined8 *)(lVar17 + *(int *)(lVar18 + 0x18));
        uVar2 = *puVar1;
        uVar3 = puVar1[1];
        (**(code **)(lVar19 + 0x10))(local_e0,lVar16,UVar9.unknown);
        (**(code **)(lVar19 + 0x38))(lVar8,0,1,UVar9.unknown);
        FUN_1000c7780(SVar22.str,SVar22.bridgeObject,uVar2,uVar3,lVar8);
        _swift_bridgeObjectRelease(SVar22.bridgeObject);
        FUN_10002a29c(lVar8,&DAT_10054a9c8,&DAT_10041bbe0);
        FUN_100029548(lVar17,FUN_1001d59ac);
        FUN_100029548(lVar16,FUN_10025ee04);
        return;
      }
      FUN_100029548(lVar16,FUN_10025ee04);
      puVar15 = &DAT_10054a9d0;
      puVar11 = &DAT_10041bc60;
      goto LAB_10001217c;
    }
  }
  puVar15 = &DAT_10054ac38;
  puVar11 = &DAT_10041e8e0;
LAB_10001217c:
  FUN_10002a29c(lVar8,puVar15,puVar11);
  return;
}

