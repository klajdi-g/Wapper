// rea decompile_all
// name: FUN_1000cdb08
// address: 0x1000cdb08
// body: available
// range: 0x1000cdb08-0x1000ce157 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000cdb08(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  bool bVar2;
  Locale LVar3;
  LocalizationValue LVar4;
  StringInterpolation SVar5;
  undefined *puVar6;
  UUID UVar7;
  LocalizationValue LVar8;
  StringInterpolation SVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  long extraout_x8_01;
  undefined *puVar11;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar12;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  long local_120;
  undefined8 local_118;
  StringInterpolation local_110;
  long local_108;
  undefined *local_100;
  undefined8 local_f8;
  long local_f0;
  undefined *local_e8;
  LocalizationValue local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  undefined1 auStack_c0 [16];
  undefined *local_b0;
  long lStack_a8;
  
  puVar11 = &DAT_10054a9c8;
  local_118 = param_4;
  local_f8 = param_5;
  local_e8 = (undefined *)param_1;
  local_c8 = param_3;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_d0 = (long)&local_120 - extraout_x8;
  LVar3 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar3.unknown + -8) + 0x40));
  lVar10 = ((long)&local_120 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_d8 = lVar10;
  LVar4 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar4.unknown + -8) + 0x40));
  puVar11 = (undefined *)(lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  local_e0.unknown = puVar11;
  SVar5 = LocalizationValue::StringInterpolation::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(SVar5.unknown + -8) + 0x40));
  puVar11 = puVar11 + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  puVar6 = (undefined *)0x0;
  local_110.unknown = puVar11;
  FUN_1001d59ac();
  lVar10 = *(long *)(puVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar10 + 0x40));
  lVar12 = (long)puVar11 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  puVar11 = &DAT_10054a9d0;
  local_120 = lVar12;
  FUN_100002f94(&DAT_10054a9d0,&DAT_10041bc60);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar11 + -8) + 0x40));
  lVar12 = lVar12 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  local_108 = lVar12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = lVar12 - extraout_x12;
  puVar11 = &DAT_100550ec0;
  FUN_100002f94(&DAT_100550ec0,&DAT_100422eb0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = lVar12 - extraout_x8_05;
  UVar7 = Foundation::UUID::typeMetadataAccessor();
  lVar16 = *(long *)(UVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar16 + 0x40));
  lVar13 = lVar14 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0);
  puVar11 = &DAT_100549eb0;
  FUN_100002f94(&DAT_100549eb0,&DAT_100426be0);
  _swift_initStackObject();
  uVar1 = local_118;
  *(undefined8 *)(puVar11 + 0x18) = 2;
  *(undefined8 *)(puVar11 + 0x10) = 1;
  *(undefined **)(puVar11 + 0x20) = local_e8;
  *(undefined8 *)(puVar11 + 0x28) = param_2;
  local_f0 = lVar16;
  local_e8 = UVar7.unknown;
  (**(code **)(lVar16 + 0x10))(lVar13,local_c8,UVar7.unknown);
  FUN_1000087e4(uVar1,lVar12,&DAT_10054a9d0,&DAT_10041bc60);
  pcVar15 = *(code **)(lVar10 + 0x30);
  lVar10 = lVar12;
  local_100 = puVar6;
  (*pcVar15)(lVar12,1,puVar6);
  bVar2 = (int)lVar10 != 1;
  if (bVar2) {
    FUN_100029504(lVar12,lVar14,FUN_1001d537c);
    _swift_bridgeObjectRetain(param_2);
    FUN_100029548(lVar12,FUN_1001d59ac);
  }
  else {
    _swift_bridgeObjectRetain(param_2);
    FUN_10002a29c(lVar12,&DAT_10054a9d0,&DAT_10041bc60);
  }
  lVar10 = 0;
  FUN_1001d537c();
  (**(code **)(*(long *)(lVar10 + -8) + 0x38))(lVar14,!bVar2,1,lVar10);
  puVar6 = puVar11;
  FUN_10020c98c();
  local_b0 = puVar6;
  lStack_a8 = lVar14;
  FUN_1001b9fc0(lVar13,FUN_1000ce1b4,auStack_c0);
  _swift_bridgeObjectRelease(puVar6);
  _swift_setDeallocating(puVar11);
  FUN_100043c00(puVar11 + 0x20);
  puVar6 = local_e8;
  lVar16 = local_f0;
  (**(code **)(local_f0 + 8))(lVar13,local_e8);
  FUN_10002a29c(lVar14,&DAT_100550ec0,&DAT_100422eb0);
  lVar12 = local_108;
  FUN_1000087e4(uVar1,local_108,&DAT_10054a9d0,&DAT_10041bc60);
  puVar11 = local_100;
  lVar13 = lVar12;
  SVar9.unknown = local_100;
  (*pcVar15)(lVar12,1);
  SVar5.unknown = local_110.unknown;
  lVar10 = local_120;
  if ((int)lVar13 == 1) {
    LocalizationValue::StringInterpolation::_init(0x13,1);
    SVar17.bridgeObject = (void *)0x80000001004dd480;
    SVar17.str = (char *)0x1000000000000010;
    LocalizationValue::StringInterpolation::_appendLiteral(SVar17,SVar9);
    lVar10 = 0;
    FUN_10025ee04();
    LocalizationValue::StringInterpolation::_appendInterpolation
              (*(String *)(local_c8 + *(int *)(lVar10 + 0x14)),SVar9);
    SVar18.bridgeObject = (void *)0xa300000000000000;
    SVar18.str = (char *)0x9d80e2;
    LocalizationValue::StringInterpolation::_appendLiteral(SVar18,SVar9);
    LVar4.unknown = local_e0.unknown;
    LVar8 = LocalizationValue::_init(SVar5);
    Foundation::Locale::get_current((Locale)LVar8.unknown);
    SVar19 = (extension_Foundation)::Swift::String::_init(LVar4,(Locale)0x0);
  }
  else {
    pcVar15 = FUN_1001d59ac;
    FUN_100007e64(lVar12,local_120);
    SVar5.unknown = local_110.unknown;
    LocalizationValue::StringInterpolation::_init(0x17,2);
    SVar19.bridgeObject = (void *)0xed0000206d6f7266;
    SVar19.str = (char *)0x206465766f6d6552;
    LocalizationValue::StringInterpolation::_appendLiteral(SVar19,(StringInterpolation)pcVar15);
    LocalizationValue::StringInterpolation::_appendInterpolation
              (*(String *)(lVar10 + *(int *)(puVar11 + 0x14)),(StringInterpolation)pcVar15);
    SVar20.bridgeObject = (void *)0xa700000000000000;
    SVar20.str = (char *)0x9c80e2206e6920;
    LocalizationValue::StringInterpolation::_appendLiteral(SVar20,(StringInterpolation)pcVar15);
    lVar12 = 0;
    FUN_10025ee04();
    LocalizationValue::StringInterpolation::_appendInterpolation
              (*(String *)(local_c8 + *(int *)(lVar12 + 0x14)),(StringInterpolation)pcVar15);
    SVar21.bridgeObject = (void *)0xa300000000000000;
    SVar21.str = (char *)0x9d80e2;
    LocalizationValue::StringInterpolation::_appendLiteral(SVar21,(StringInterpolation)pcVar15);
    LVar4.unknown = local_e0.unknown;
    LVar8 = LocalizationValue::_init(SVar5);
    Foundation::Locale::get_current((Locale)LVar8.unknown);
    SVar19 = (extension_Foundation)::Swift::String::_init(LVar4,(Locale)0x0);
    FUN_100029548(lVar10,FUN_1001d59ac);
  }
  if (DAT_100551178 != -1) {
    _swift_once(&DAT_100551178,FUN_1000c7edc);
  }
  lVar10 = local_d0;
  (**(code **)(lVar16 + 0x38))(local_d0,1,1,puVar6);
  FUN_1000c7780(SVar19.str,SVar19.bridgeObject,0xd000000000000010,0x80000001004dd4a0,lVar10);
  _swift_bridgeObjectRelease(SVar19.bridgeObject);
  FUN_10002a29c(lVar10,&DAT_10054a9c8,&DAT_10041bbe0);
  return;
}

