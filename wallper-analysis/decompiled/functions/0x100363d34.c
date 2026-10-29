// rea decompile_all
// name: FUN_100363d34
// address: 0x100363d34
// body: available
// range: 0x100363d34-0x1003646fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


String FUN_100363d34(long param_1,void *param_2,StringInterpolation param_3)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  StringInterpolation SVar5;
  Locale LVar6;
  LocalizationValue LVar7;
  undefined *puVar8;
  char *pcVar9;
  LocalizationValue LVar10;
  undefined8 uVar11;
  undefined *puVar12;
  StringInterpolation SVar13;
  void *pvVar14;
  uint uVar15;
  long extraout_x8;
  long extraout_x8_00;
  char *pcVar16;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar17;
  long extraout_x8_03;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar18;
  char *pcVar19;
  long unaff_x20;
  long lVar20;
  char *pcVar21;
  long lVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String stringLiteral;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String local_90;
  long local_80;
  LocalizationValue local_78;
  String local_70;
  String separator;
  
  puVar3 = &DAT_10054a9d0;
  local_90.bridgeObject = param_2;
  FUN_100002f94(&DAT_10054a9d0,&DAT_10041bc60);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  lVar22 = (long)&local_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = lVar22 - extraout_x12;
  lVar4 = 0;
  FUN_1001d59ac();
  lVar20 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar20 + 0x40));
  pcVar21 = (char *)(lVar18 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100521118)();
  pcVar16 = pcVar21 + -extraout_x12_00;
  local_90.str = pcVar16;
  SVar5 = LocalizationValue::StringInterpolation::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(SVar5.unknown + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_100521118)();
  SVar5.unknown = pcVar16 + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0) + -extraout_x12_01;
  LVar6 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar6.unknown + -8) + 0x40));
  lVar17 = (long)SVar5.unknown - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_80 = lVar17;
  LVar7 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar7.unknown + -8) + 0x40));
  local_78.unknown = (undefined *)(lVar17 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  lVar17 = 0;
  FUN_10025ee04();
  LVar7.unknown = local_78.unknown;
  uVar15 = (uint)*(byte *)(param_1 + *(int *)(lVar17 + 0x1c));
  if (uVar15 - 1 < 2) {
    pcVar16 = &DAT_100549eb0;
    FUN_100002f94(&DAT_100549eb0,&DAT_100426be0);
    uVar11 = 0x30;
    _swift_allocObject();
    pcVar16[0x18] = '\x02';
    pcVar16[0x19] = '\0';
    pcVar16[0x1a] = '\0';
    pcVar16[0x1b] = '\0';
    pcVar16[0x1c] = '\0';
    pcVar16[0x1d] = '\0';
    pcVar16[0x1e] = '\0';
    pcVar16[0x1f] = '\0';
    pcVar16[0x10] = '\x01';
    pcVar16[0x11] = '\0';
    pcVar16[0x12] = '\0';
    pcVar16[0x13] = '\0';
    pcVar16[0x14] = '\0';
    pcVar16[0x15] = '\0';
    pcVar16[0x16] = '\0';
    pcVar16[0x17] = '\0';
    pcVar21 = pcVar16;
    FUN_1001d6588();
    *(char **)(pcVar16 + 0x20) = pcVar21;
    *(undefined8 *)(pcVar16 + 0x28) = uVar11;
    local_70.str = pcVar16;
    if (*(long *)(*(long *)(param_1 + *(int *)(lVar17 + 0x20)) + 0x10) == 0) {
LAB_100364230:
      LVar7.unknown = local_78.unknown;
      stringLiteral.bridgeObject = (void *)0x80000001004e6b60;
      stringLiteral.str = (char *)0xd000000000000011;
      LVar10 = LocalizationValue::_init(stringLiteral);
      Foundation::Locale::get_current((Locale)LVar10.unknown);
      SVar32 = (extension_Foundation)::Swift::String::_init(LVar7,(Locale)0x0);
      uVar1 = *(ulong *)(pcVar16 + 0x10);
      pcVar19 = pcVar16;
      if (*(ulong *)(pcVar16 + 0x18) >> 1 <= uVar1) {
        pcVar19 = (char *)(ulong)(1 < *(ulong *)(pcVar16 + 0x18));
        FUN_1001c432c(pcVar19,uVar1 + 1,1,pcVar16);
      }
      *(ulong *)(pcVar19 + 0x10) = uVar1 + 1;
      *(String *)(pcVar19 + uVar1 * 0x10 + 0x20) = SVar32;
      local_70.str = pcVar19;
      goto LAB_10036458c;
    }
    FUN_1000087e4(local_90.bridgeObject,lVar18,&DAT_10054a9d0,&DAT_10041bc60);
    lVar17 = lVar18;
    (**(code **)(lVar20 + 0x30))(lVar18,1,lVar4);
    LVar7.unknown = local_78.unknown;
    pcVar21 = local_90.str;
    if ((int)lVar17 == 1) {
      FUN_10002a29c(lVar18,&DAT_10054a9d0,&DAT_10041bc60);
      pcVar19 = pcVar16;
      goto LAB_10036458c;
    }
    pcVar2 = FUN_1001d59ac;
    FUN_100007e64(lVar18,local_90.str);
    if ((pcVar21 + *(int *)(lVar4 + 0x20))[8] != '\x01') {
      if (*(long *)(*(long *)(pcVar21 + *(int *)(lVar4 + 0x24)) + 0x10) == 0) {
        LocalizationValue::StringInterpolation::_init(0x17,1);
        SVar29.bridgeObject = (void *)0x80000001004e6b40;
        SVar29.str = (char *)0xd000000000000017;
        LocalizationValue::StringInterpolation::_appendLiteral(SVar29,(StringInterpolation)pcVar2);
        LocalizationValue::StringInterpolation::_appendInterpolation
                  (*(String *)(pcVar21 + *(int *)(lVar4 + 0x14)),(StringInterpolation)pcVar2);
      }
      else {
        pcVar19 = *(char **)(pcVar21 + *(int *)(lVar4 + 0x20));
        LocalizationValue::StringInterpolation::_init(7,2);
        LocalizationValue::StringInterpolation::_appendLiteral
                  ((String)(ZEXT816(0xe000000000000000) << 0x40),(StringInterpolation)pcVar2);
        LocalizationValue::StringInterpolation::_appendInterpolation
                  (*(String *)(pcVar21 + *(int *)(lVar4 + 0x14)),(StringInterpolation)pcVar2);
        SVar27.bridgeObject = (void *)0xe700000000000000;
        SVar27.str = (char *)0x206c69746e7520;
        pvVar14 = (void *)0xe700000000000000;
        LocalizationValue::StringInterpolation::_appendLiteral(SVar27,(StringInterpolation)pcVar2);
        FUN_10025f020();
        SVar28.bridgeObject = pvVar14;
        SVar28.str = pcVar19;
        LocalizationValue::StringInterpolation::_appendInterpolation
                  (SVar28,(StringInterpolation)pcVar2);
        _swift_bridgeObjectRelease(pvVar14);
      }
      LocalizationValue::StringInterpolation::_appendLiteral
                ((String)(ZEXT816(0xe000000000000000) << 0x40),(StringInterpolation)pcVar2);
      LVar10 = LocalizationValue::_init(SVar5);
      Foundation::Locale::get_current((Locale)LVar10.unknown);
      SVar32 = (extension_Foundation)::Swift::String::_init(LVar7,(Locale)0x0);
      uVar1 = *(ulong *)(pcVar16 + 0x10);
      if (*(ulong *)(pcVar16 + 0x18) >> 1 <= uVar1) {
        pcVar21 = (char *)(ulong)(1 < *(ulong *)(pcVar16 + 0x18));
        FUN_1001c432c(pcVar21,uVar1 + 1,1,pcVar16);
        pcVar16 = pcVar21;
        pcVar21 = local_90.str;
      }
      *(ulong *)(pcVar16 + 0x10) = uVar1 + 1;
      *(String *)(pcVar16 + uVar1 * 0x10 + 0x20) = SVar32;
      local_70.str = pcVar16;
    }
  }
  else {
    if (uVar15 == 0) {
      pcVar21 = *(char **)(*(long *)(param_1 + *(int *)(lVar17 + 0x20)) + 0x10);
      if (pcVar21 == (char *)0x0) {
        SVar32.bridgeObject = (void *)0x80000001004e6b60;
        SVar32.str = (char *)0xd000000000000011;
        LVar10 = LocalizationValue::_init(SVar32);
        Foundation::Locale::get_current((Locale)LVar10.unknown);
        SVar32 = (extension_Foundation)::Swift::String::_init(LVar7,(Locale)0x0);
        return SVar32;
      }
      LocalizationValue::StringInterpolation::_init(0xb,1);
      LocalizationValue::StringInterpolation::_appendLiteral
                ((String)(ZEXT816(0xe000000000000000) << 0x40),param_3);
      local_70.str = pcVar21;
      SVar13.unknown = (undefined *)0xe400000000000000;
      LocalizationValue::StringInterpolation::_appendInterpolation
                (&local_70,0x646c6c25,0xe400000000000000,PTR___type_metadata_for_Swift_Int_100523bd8
                 ,
                 PTR___protocol_witness_table_for_Swift_Int___Foundation__FormatSpecifiable_in_Foundation_100520e60
                );
      SVar25.bridgeObject = (void *)0xeb00000000737265;
      SVar25.str = (char *)0x7061706c6c617720;
      LocalizationValue::StringInterpolation::_appendLiteral(SVar25,SVar13);
      LVar7.unknown = local_78.unknown;
      LVar10 = LocalizationValue::_init(SVar5);
      Foundation::Locale::get_current((Locale)LVar10.unknown);
      SVar5.unknown = (undefined *)0x0;
      SVar32 = (extension_Foundation)::Swift::String::_init(LVar7,(Locale)0x0);
      LocalizationValue::StringInterpolation::_init(8,1);
      SVar23.bridgeObject = (void *)0xe800000000000000;
      SVar23.str = (char *)0x207365676e616843;
      LocalizationValue::StringInterpolation::_appendLiteral(SVar23,SVar5);
      lVar4 = 0;
      FUN_100386f18();
      lVar4 = *(long *)(unaff_x20 + *(int *)(lVar4 + 0x1c));
      if (lVar4 != 0) {
        puVar3 = &DAT_100433b10;
        _swift_getKeyPath();
        puVar8 = &DAT_100433b38;
        _swift_getKeyPath();
        _swift_retain(lVar4);
        puVar12 = puVar3;
        SVar5.unknown = puVar8;
        Combine::Published::_get_subscript(&local_70);
        _swift_release(puVar3);
        _swift_release(puVar8);
        _swift_release(lVar4);
        pcVar21 = (char *)(ulong)(byte)local_70.str;
        FUN_100215e74();
        SVar24.bridgeObject = puVar12;
        SVar24.str = pcVar21;
        LocalizationValue::StringInterpolation::_appendInterpolation(SVar24,SVar5);
        _swift_bridgeObjectRelease(puVar12);
        LocalizationValue::StringInterpolation::_appendLiteral
                  ((String)(ZEXT816(0xe000000000000000) << 0x40),SVar5);
        LVar10 = LocalizationValue::_init
                           ((StringInterpolation)
                            (pcVar16 + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0)));
        Foundation::Locale::get_current((Locale)LVar10.unknown);
        pcVar21 = (char *)0x0;
        pvVar14 = (void *)0x0;
        SVar25 = (extension_Foundation)::Swift::String::_init(LVar7,(Locale)0x0);
        SVar26.bridgeObject = (void *)0xa400000000000000;
        SVar26.str = (char *)0x20b7c220;
        SVar33.bridgeObject = pvVar14;
        SVar33.str = pcVar21;
        local_70 = SVar32;
        Swift::String::append(SVar26,SVar33);
        SVar34.bridgeObject = pvVar14;
        SVar34.str = pcVar21;
        Swift::String::append(SVar25,SVar34);
        _swift_bridgeObjectRelease(SVar25.bridgeObject);
        return local_70;
      }
      FUN_100226ac0(0);
      FUN_1000036d0(&DAT_10054aa48,FUN_100226ac0,&TargetProtocolConformanceDescriptor_10042b420);
      SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1003646fc);
      (*pcVar2)();
    }
    pcVar19 = &DAT_100549eb0;
    FUN_100002f94(&DAT_100549eb0,&DAT_100426be0);
    uVar11 = 0x30;
    _swift_allocObject();
    pcVar19[0x18] = '\x02';
    pcVar19[0x19] = '\0';
    pcVar19[0x1a] = '\0';
    pcVar19[0x1b] = '\0';
    pcVar19[0x1c] = '\0';
    pcVar19[0x1d] = '\0';
    pcVar19[0x1e] = '\0';
    pcVar19[0x1f] = '\0';
    pcVar19[0x10] = '\x01';
    pcVar19[0x11] = '\0';
    pcVar19[0x12] = '\0';
    pcVar19[0x13] = '\0';
    pcVar19[0x14] = '\0';
    pcVar19[0x15] = '\0';
    pcVar19[0x16] = '\0';
    pcVar19[0x17] = '\0';
    pcVar16 = pcVar19;
    FUN_1001d6588();
    *(char **)(pcVar19 + 0x20) = pcVar16;
    *(undefined8 *)(pcVar19 + 0x28) = uVar11;
    local_70.str = pcVar19;
    pcVar16 = pcVar19;
    if (*(long *)(*(long *)(param_1 + *(int *)(lVar17 + 0x20)) + 0x10) == 0) goto LAB_100364230;
    FUN_1000087e4(local_90.bridgeObject,lVar22,&DAT_10054a9d0,&DAT_10041bc60);
    lVar17 = lVar22;
    (**(code **)(lVar20 + 0x30))(lVar22,1,lVar4);
    if ((int)lVar17 == 1) {
      FUN_10002a29c(lVar22,&DAT_10054a9d0,&DAT_10041bc60);
      goto LAB_10036458c;
    }
    pcVar2 = FUN_1001d59ac;
    FUN_100007e64(lVar22,pcVar21);
    if (*(long *)(*(long *)(pcVar21 + *(int *)(lVar4 + 0x24)) + 0x10) == 0) {
      LocalizationValue::StringInterpolation::_init(0x17,1);
      SVar30.bridgeObject = (void *)0x80000001004e6b40;
      SVar30.str = (char *)0xd000000000000017;
      LocalizationValue::StringInterpolation::_appendLiteral(SVar30,(StringInterpolation)pcVar2);
      LocalizationValue::StringInterpolation::_appendInterpolation
                (*(String *)(pcVar21 + *(int *)(lVar4 + 0x14)),(StringInterpolation)pcVar2);
      pcVar9 = (char *)0x0;
      pvVar14 = (void *)0xe000000000000000;
    }
    else {
      LocalizationValue::StringInterpolation::_init(4,1);
      LocalizationValue::StringInterpolation::_appendLiteral
                ((String)(ZEXT816(0xe000000000000000) << 0x40),(StringInterpolation)pcVar2);
      LocalizationValue::StringInterpolation::_appendInterpolation
                (*(String *)(pcVar21 + *(int *)(lVar4 + 0x14)),(StringInterpolation)pcVar2);
      pcVar9 = (char *)0x776f6e20;
      pvVar14 = (void *)0xe400000000000000;
    }
    SVar31.bridgeObject = pvVar14;
    SVar31.str = pcVar9;
    LocalizationValue::StringInterpolation::_appendLiteral(SVar31,(StringInterpolation)pcVar2);
    LVar7.unknown = local_78.unknown;
    LVar10 = LocalizationValue::_init(SVar5);
    Foundation::Locale::get_current((Locale)LVar10.unknown);
    SVar32 = (extension_Foundation)::Swift::String::_init(LVar7,(Locale)0x0);
    uVar1 = *(ulong *)(pcVar19 + 0x10);
    if (*(ulong *)(pcVar19 + 0x18) >> 1 <= uVar1) {
      pcVar16 = (char *)(ulong)(1 < *(ulong *)(pcVar19 + 0x18));
      FUN_1001c432c(pcVar16,uVar1 + 1,1,pcVar19);
    }
    *(ulong *)(pcVar16 + 0x10) = uVar1 + 1;
    *(String *)(pcVar16 + uVar1 * 0x10 + 0x20) = SVar32;
    local_70.str = pcVar16;
  }
  FUN_100029548(pcVar21,FUN_1001d59ac);
  pcVar19 = pcVar16;
LAB_10036458c:
  FUN_100002f94(&DAT_100553858,&DAT_100429e10);
  FUN_1000087a0(&DAT_1005546b8,&DAT_100553858,&DAT_100429e10,
                PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100523b48);
  separator.bridgeObject = (void *)0xa400000000000000;
  separator.str = (char *)0x20b7c220;
  SVar32 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator);
  _swift_bridgeObjectRelease(pcVar19);
  return SVar32;
}

