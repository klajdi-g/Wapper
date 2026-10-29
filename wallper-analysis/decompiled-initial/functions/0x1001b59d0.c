// rea decompile_all
// name: FUN_1001b59d0
// address: 0x1001b59d0
// body: available
// range: 0x1001b59d0-0x1001b6857 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001b59d0(long param_1,Locale param_2,void *param_3,byte param_4,undefined *param_5)

{
  bool bVar1;
  void *pvVar2;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  String SVar8;
  uint uVar9;
  Logger LVar10;
  DispatchWorkItemFlags DVar11;
  DispatchQoS DVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  Locale LVar16;
  LocalizationValue LVar17;
  Date DVar18;
  char **ppcVar19;
  UUID UVar20;
  undefined8 uVar21;
  void *pvVar22;
  DispatchQoS DVar23;
  undefined8 *puVar24;
  Logger LVar25;
  OS_os_log *pOVar26;
  OS_os_log *pOVar27;
  undefined4 *puVar28;
  char *pcVar29;
  undefined *puVar30;
  undefined *puVar31;
  _StringGuts _Var32;
  char *pcVar33;
  undefined *puVar34;
  long lVar35;
  long extraout_x8;
  long lVar36;
  long lVar37;
  long extraout_x8_00;
  long lVar38;
  long lVar39;
  long extraout_x8_01;
  DispatchWorkItemFlags qos;
  long extraout_x8_02;
  long lVar40;
  long extraout_x8_03;
  long lVar41;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long lVar42;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  code *pcVar43;
  long lVar44;
  long extraout_x12;
  undefined8 *unaff_x20;
  undefined *puVar45;
  long lVar46;
  undefined8 *puVar47;
  undefined *puVar48;
  ulong uVar49;
  long lVar50;
  ulong uVar51;
  String stringLiteral;
  String SVar52;
  String SVar53;
  String SVar54;
  String SVar55;
  String SVar56;
  String SVar57;
  String SVar58;
  String SVar59;
  String SVar60;
  String SVar61;
  String SVar62;
  String SVar63;
  String SVar64;
  String SVar65;
  String SVar66;
  String SVar67;
  String SVar68;
  long local_190 [4];
  undefined *local_170;
  long local_168;
  undefined *local_160;
  long local_158;
  void *local_150;
  char *local_148;
  long local_140;
  char *local_b8;
  undefined *local_b0;
  code *local_a8;
  undefined *puStack_a0;
  code *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  
  local_190[2] = *unaff_x20;
  puVar34 = param_5;
  LVar10 = os::Logger::typeMetadataAccessor();
  lVar35 = *(long *)(LVar10.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar35 + 0x40));
  lVar36 = (long)local_190 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar11 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar37 = *(long *)(DVar11.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar37 + 0x40));
  lVar38 = lVar36 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar12 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar39 = *(long *)(DVar12.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar39 + 0x40));
  qos.unknown = (undefined *)(lVar38 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  lVar13 = 0;
  FUN_10025ee04();
  local_140 = *(long *)(lVar13 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_140 + 0x40));
  lVar40 = (long)qos.unknown - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_160 = (undefined *)Foundation::Calendar::typeMetadataAccessor();
  local_168 = *(long *)(local_160 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_168 + 0x40));
  lVar41 = lVar40 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  local_170 = (undefined *)Foundation::Date::typeMetadataAccessor();
  local_190[3] = *(long *)(local_170 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_190[3] + 0x40));
  lVar46 = lVar41 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  puVar14 = &DAT_10054a9d0;
  FUN_100002f94(&DAT_10054a9d0,&DAT_10041bc60);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar50 = lVar46 - extraout_x8_05;
  lVar15 = 0;
  FUN_1001d537c();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar15 + -8) + 0x40));
  lVar44 = lVar50 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0);
  local_190[0] = lVar44;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar44 = lVar44 - extraout_x12;
  lVar15 = 0;
  local_190[1] = lVar44;
  FUN_100266c40();
  lVar42 = *(long *)(lVar15 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar42 + 0x40));
  puVar47 = (undefined8 *)(lVar44 - (extraout_x8_07 + 0xfU & 0xfffffffffffffff0));
  LVar16 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar16.unknown + -8) + 0x40));
  LVar17 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar17.unknown + -8) + 0x40));
  FUN_1001d3a38();
  if (param_3 == (void *)0x0) {
    stringLiteral.bridgeObject = (void *)0xec0000007473696c;
    stringLiteral.str = (char *)0x79616c502077654e;
    LVar17 = LocalizationValue::_init(stringLiteral);
    Foundation::Locale::get_current((Locale)LVar17.unknown);
    puVar34 = (undefined *)0x0;
    SVar56 = (extension_Foundation)::Swift::String::_init
                       ((undefined *)
                        ((long)puVar47 +
                        (-(extraout_x8_09 + 0xfU & 0xfffffffffffffff0) -
                        (extraout_x8_08 + 0xfU & 0xfffffffffffffff0))),param_2);
    pvVar22 = SVar56.bridgeObject;
    FUN_1001bb484();
    _swift_bridgeObjectRelease(pvVar22);
  }
  else {
    SVar56.bridgeObject = param_3;
    SVar56.str = param_2.unknown;
  }
  Foundation::UUID::init();
  DVar18 = Foundation::Date::init();
  *(String *)(param_1 + *(int *)(lVar13 + 0x14)) = SVar56;
  puVar14 = PTR___swiftEmptyArrayStorage_100524190;
  iVar5 = *(int *)(lVar13 + 0x1c);
  local_158 = (long)*(int *)(lVar13 + 0x20);
  *(undefined **)(param_1 + local_158) = PTR___swiftEmptyArrayStorage_100524190;
  *(undefined8 *)(param_1 + *(int *)(lVar13 + 0x2c)) = 0x1a4;
  *(undefined8 *)(param_1 + *(int *)(lVar13 + 0x30)) = 0x474;
  iVar7 = *(int *)(lVar13 + 0x34);
  *(undefined **)(param_1 + iVar7) = puVar14;
  *(byte *)(param_1 + iVar5) = param_4;
  local_150 = SVar56.bridgeObject;
  local_148 = SVar56.str;
  FUN_1002a9100();
  bVar1 = puVar34 == (undefined *)0x0;
  if (!bVar1) {
    _swift_bridgeObjectRelease(0);
    _swift_bridgeObjectRelease();
    DVar18.unknown = puVar34;
  }
  iVar5 = *(int *)(lVar13 + 0x28);
  *(bool *)(param_1 + *(int *)(lVar13 + 0x24)) = bVar1;
  *(bool *)(param_1 + iVar5) = bVar1;
  if (param_4 < 2) {
    if (param_4 == 0) {
      local_78 = PTR___swiftEmptySetSingleton_1005241a0;
      uVar51 = *(ulong *)(param_5 + 0x10);
      puVar14 = PTR___swiftEmptyArrayStorage_100524190;
      if (uVar51 != 0) {
        uVar49 = 0;
        do {
          uVar3 = uVar49;
          if (uVar49 <= uVar51) {
            uVar3 = uVar51;
          }
          puVar24 = (undefined8 *)(param_5 + uVar49 * 0x10 + 0x28);
          uVar49 = uVar49 + 1;
          while( true ) {
            if (uVar49 - uVar3 == 1) {
                    /* WARNING: Does not return */
              pcVar43 = (code *)SoftwareBreakpoint(1,0x1001b67a0);
              (*pcVar43)();
            }
            uVar21 = puVar24[-1];
            uVar4 = *puVar24;
            _swift_bridgeObjectRetain_n(uVar4,2);
            ppcVar19 = &local_b8;
            FUN_1001ca054(ppcVar19,uVar21,uVar4);
            _swift_bridgeObjectRelease(local_b0);
            if (((ulong)ppcVar19 & 1) != 0) break;
            _swift_bridgeObjectRelease(uVar4);
            uVar49 = uVar49 + 1;
            puVar24 = puVar24 + 2;
            if (uVar49 - uVar51 == 1) goto LAB_1001b60f8;
          }
          puVar34 = puVar14;
          _swift_isUniquelyReferenced_nonNull_native();
          local_88 = puVar14;
          if (((ulong)puVar34 & 1) == 0) {
            FUN_1001c5bc4(0,*(long *)(puVar14 + 0x10) + 1,1);
          }
          uVar3 = *(ulong *)(local_88 + 0x10);
          if (*(ulong *)(local_88 + 0x18) >> 1 <= uVar3) {
            FUN_1001c5bc4(1 < *(ulong *)(local_88 + 0x18),uVar3 + 1,1);
          }
          *(ulong *)(local_88 + 0x10) = uVar3 + 1;
          *(undefined8 *)(local_88 + uVar3 * 0x10 + 0x20) = uVar21;
          *(undefined8 *)(local_88 + uVar3 * 0x10 + 0x28) = uVar4;
          puVar14 = local_88;
        } while (uVar49 != uVar51);
      }
LAB_1001b60f8:
      lVar13 = *(long *)(puVar14 + 0x10);
      if (lVar13 == 0) {
        _swift_release(puVar14);
        _swift_bridgeObjectRelease(local_78);
        *(undefined **)(param_1 + local_158) = PTR___swiftEmptyArrayStorage_100524190;
      }
      else {
        local_b8 = PTR___swiftEmptyArrayStorage_100524190;
        FUN_1001c5d34(0,lVar13,0);
        pcVar33 = local_b8;
        UVar20 = Foundation::UUID::typeMetadataAccessor();
        pcVar43 = *(code **)(*(long *)(UVar20.unknown + -8) + 0x38);
        puVar24 = (undefined8 *)(puVar14 + 0x28);
        local_160 = puVar14;
        do {
          uVar21 = puVar24[-1];
          uVar4 = *puVar24;
          (*pcVar43)((long)puVar47 + (long)*(int *)(lVar15 + 0x18),1,1,UVar20.unknown);
          *puVar47 = uVar21;
          puVar47[1] = uVar4;
          *(undefined1 *)(puVar47 + 2) = 2;
          *(undefined1 *)((long)puVar47 + (long)*(int *)(lVar15 + 0x1c)) = 2;
          uVar51 = *(ulong *)(pcVar33 + 0x10);
          uVar49 = *(ulong *)(pcVar33 + 0x18);
          local_b8 = pcVar33;
          _swift_bridgeObjectRetain(uVar4);
          if (uVar49 >> 1 <= uVar51) {
            FUN_1001c5d34(1 < uVar49,uVar51 + 1,1);
            pcVar33 = local_b8;
          }
          puVar24 = puVar24 + 2;
          *(ulong *)(pcVar33 + 0x10) = uVar51 + 1;
          FUN_100007e64(puVar47,pcVar33 + *(long *)(lVar42 + 0x48) * uVar51 +
                                          ((ulong)*(byte *)(lVar42 + 0x50) + 0x20 &
                                          ((ulong)*(byte *)(lVar42 + 0x50) ^ 0xffffffffffffffff)),
                        FUN_100266c40);
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        _swift_release(local_160);
        _swift_bridgeObjectRelease(local_78);
        *(char **)(param_1 + local_158) = pcVar33;
      }
      goto LAB_1001b624c;
    }
  }
  else if (param_4 != 3) {
    FUN_100266954();
    *(undefined **)(param_1 + iVar7) = DVar18.unknown;
  }
  if (*(long *)(param_5 + 0x10) != 0) {
    uVar21 = *(undefined8 *)(param_5 + 0x20);
    uVar4 = *(undefined8 *)(param_5 + 0x28);
    _swift_bridgeObjectRetain(uVar4);
    DVar18 = Foundation::Date::init();
    Foundation::Calendar::get_current((Calendar)DVar18.unknown);
    FUN_1001d682c(lVar50,lVar46,lVar41);
    (**(code **)(local_168 + 8))(lVar41,local_160);
    (**(code **)(local_190[3] + 8))(lVar46,local_170);
    lVar13 = 0;
    FUN_1001d59ac();
    lVar15 = lVar50;
    (**(code **)(*(long *)(lVar13 + -8) + 0x30))(lVar50,1,lVar13);
    lVar13 = local_190[0];
    if ((int)lVar15 == 1) {
      _swift_bridgeObjectRelease(uVar4);
      FUN_10002a29c(lVar50,&DAT_10054a9d0,&DAT_10041bc60);
    }
    else {
      FUN_100029504(lVar50,local_190[0],FUN_1001d537c);
      FUN_100029548(lVar50,FUN_1001d59ac);
      lVar15 = local_190[1];
      FUN_100007e64(lVar13,local_190[1],FUN_1001d537c);
      puVar14 = &DAT_100556850;
      FUN_100002f94(&DAT_100556850,&DAT_10042a660);
      bVar6 = *(byte *)(lVar42 + 0x50);
      _swift_allocObject();
      *(undefined8 *)(puVar14 + 0x18) = 2;
      *(undefined8 *)(puVar14 + 0x10) = 1;
      FUN_1001b934c(puVar14 + ((ulong)bVar6 + 0x20 & ((ulong)bVar6 ^ 0xffffffffffffffff)),uVar21,
                    uVar4,lVar15);
      _swift_bridgeObjectRelease(uVar4);
      FUN_100029548(lVar15,FUN_1001d537c);
      *(undefined **)(param_1 + local_158) = puVar14;
    }
  }
LAB_1001b624c:
  FUN_100029504(param_1,lVar40,FUN_10025ee04);
  puVar14 = &DAT_10042a610;
  _swift_getKeyPath(&DAT_10042a610);
  puVar34 = &DAT_10042a638;
  _swift_getKeyPath();
  ppcVar19 = &local_b8;
  puVar45 = puVar34;
  Combine::Published::_modify_subscript();
  puVar48 = (undefined *)*unaff_x20;
  puVar31 = puVar48;
  _swift_isUniquelyReferenced_nonNull_native();
  *unaff_x20 = puVar48;
  puVar30 = puVar48;
  if (((ulong)puVar31 & 1) == 0) {
    puVar30 = (undefined *)0x0;
    FUN_1001c8094(0,*(long *)(puVar48 + 0x10) + 1,1,puVar48,&DAT_10054e220,&DAT_10041f120,
                  FUN_10025ee04,PTR__swift_bridgeObjectRelease_100524200);
    *unaff_x20 = puVar30;
    puVar34 = puVar48;
  }
  uVar51 = *(ulong *)(puVar30 + 0x10);
  puVar31 = puVar30;
  if (*(ulong *)(puVar30 + 0x18) >> 1 <= uVar51) {
    puVar31 = (undefined *)(ulong)(1 < *(ulong *)(puVar30 + 0x18));
    FUN_1001c8094(puVar31,uVar51 + 1,1,puVar30,&DAT_10054e220,&DAT_10041f120,FUN_10025ee04,
                  PTR__swift_bridgeObjectRelease_100524200);
    *unaff_x20 = puVar31;
    puVar34 = puVar30;
  }
  *(ulong *)(puVar31 + 0x10) = uVar51 + 1;
  pcVar43 = FUN_10025ee04;
  FUN_100007e64(lVar40,puVar31 + *(long *)(local_140 + 0x48) * uVar51 +
                                 ((ulong)*(byte *)(local_140 + 0x50) + 0x20 &
                                 ((ulong)*(byte *)(local_140 + 0x50) ^ 0xffffffffffffffff)));
  _Var32.unknown = (undefined *)0x0;
  (*(code *)ppcVar19)(&local_b8);
  _swift_release(puVar14);
  _swift_release(puVar45);
  FUN_1001b9518(param_1);
  local_b8 = (char *)0x0;
  local_b0 = (undefined *)0xe000000000000000;
  Swift::_StringGuts::grow(0x20,_Var32);
  _swift_bridgeObjectRelease(local_b0);
  local_b8 = (char *)0x1000000000000016;
  local_b0 = (void *)0x80000001004e0a60;
  SVar52.bridgeObject = local_150;
  SVar52.str = local_148;
  SVar60.bridgeObject = puVar34;
  SVar60.str = (char *)pcVar43;
  Swift::String::append(SVar52,SVar60);
  SVar53.bridgeObject = (void *)0xa500000000000000;
  SVar53.str = (char *)0x28209d80e2;
  SVar61.bridgeObject = puVar34;
  SVar61.str = (char *)pcVar43;
  Swift::String::append(SVar53,SVar61);
  pcVar33 = (char *)0x63696d616e7964;
  if (param_4 != 2) {
    pcVar33 = (char *)0x6e61726165707061;
  }
  pvVar22 = (void *)0xe700000000000000;
  if (param_4 != 2) {
    pvVar22 = (void *)0xea00000000006563;
  }
  pcVar29 = (char *)0x7961446c6c61;
  if (param_4 != 0) {
    pcVar29 = (char *)0x746867694e796164;
  }
  pvVar2 = (void *)0xe600000000000000;
  if (param_4 != 0) {
    pvVar2 = (void *)0xe800000000000000;
  }
  if (param_4 < 2) {
    pvVar22 = pvVar2;
    pcVar33 = pcVar29;
  }
  SVar54.bridgeObject = pvVar22;
  SVar54.str = pcVar33;
  SVar62.bridgeObject = puVar34;
  SVar62.str = (char *)pcVar43;
  Swift::String::append(SVar54,SVar62);
  _swift_bridgeObjectRelease(pvVar22);
  SVar55.bridgeObject = (void *)0xe100000000000000;
  SVar55.str = (char *)0x29;
  uVar21 = 0x29;
  SVar63.bridgeObject = puVar34;
  SVar63.str = (char *)pcVar43;
  Swift::String::append(SVar55,SVar63);
  puVar14 = local_b0;
  SVar8.bridgeObject = local_b0;
  SVar8.str = local_b8;
  local_b8 = (char *)0x5b;
  local_b0 = (undefined *)0xe100000000000000;
  local_78 = (undefined *)0x4f464e49;
  uStack_70 = 0xe400000000000000;
  local_88 = (undefined *)0x20;
  uStack_80 = 0xe100000000000000;
  FUN_100026df4();
  pcVar33 = (char *)0x0;
  puVar34 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar56 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,&local_88,0,PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,uVar21,uVar21);
  SVar64.bridgeObject = puVar34;
  SVar64.str = pcVar33;
  Swift::String::append(SVar56,SVar64);
  _swift_bridgeObjectRelease(SVar56.bridgeObject);
  SVar57.bridgeObject = (void *)0xe300000000000000;
  SVar57.str = (char *)0x5b205d;
  SVar65.bridgeObject = puVar34;
  SVar65.str = pcVar33;
  Swift::String::append(SVar57,SVar65);
  SVar58.bridgeObject = (void *)0xe300000000000000;
  SVar58.str = (char *)0x707061;
  SVar66.bridgeObject = puVar34;
  SVar66.str = pcVar33;
  Swift::String::append(SVar58,SVar66);
  SVar59.bridgeObject = (void *)0xe200000000000000;
  SVar59.str = (char *)0x205d;
  SVar67.bridgeObject = puVar34;
  SVar67.str = pcVar33;
  Swift::String::append(SVar59,SVar67);
  SVar68.bridgeObject = puVar34;
  SVar68.str = pcVar33;
  Swift::String::append(SVar8,SVar68);
  puVar34 = local_b0;
  pcVar33 = local_b8;
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  puVar31 = &DAT_1005314e0;
  _swift_allocObject(&DAT_1005314e0,0x30,7);
  *(char **)(puVar31 + 0x10) = pcVar33;
  *(undefined **)(puVar31 + 0x18) = puVar34;
  *(undefined8 *)(puVar31 + 0x20) = 0;
  *(undefined8 *)(puVar31 + 0x28) = 0xe000000000000000;
  local_98 = FUN_100099310;
  local_b8 = PTR___NSConcreteStackBlock_100521110;
  local_b0 = (undefined *)0x42000000;
  local_a8 = FUN_1000c7e7c;
  puStack_a0 = &DAT_1005314f8;
  local_90 = puVar31;
  pvVar22 = __Block_copy(&local_b8);
  DVar23.unknown = puVar34;
  _swift_bridgeObjectRetain();
  Dispatch::DispatchQoS::get_unspecified(DVar23);
  local_78 = PTR___swiftEmptyArrayStorage_100524190;
  puVar47 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar31 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar24 = &DAT_100553dc0;
  FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
  Swift::SetAlgebra::_init(lVar38,&local_78,puVar31,puVar24,DVar11.unknown,puVar47);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(pvVar22);
  (**(code **)(lVar37 + 8))(lVar38,DVar11.unknown);
  (**(code **)(lVar39 + 8))(qos.unknown,DVar12.unknown);
  _swift_release(local_90);
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  LVar25 = LVar10;
  FUN_100099338(LVar10.unknown,&DAT_100558f50);
  lVar13 = lVar36;
  (**(code **)(lVar35 + 0x10))(lVar36,LVar25.unknown,LVar10.unknown);
  uVar9 = (uint)lVar13;
  static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
  LVar25.unknown = puVar34;
  _swift_bridgeObjectRetain();
  pOVar26 = os::Logger::get_logObject(LVar25);
  pOVar27 = pOVar26;
  _os_log_type_enabled(pOVar26,uVar9 & 0xff);
  if ((int)pOVar27 == 0) {
    _swift_bridgeObjectRelease_n(puVar34,2);
  }
  else {
    puVar28 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    pcVar29 = (char *)0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar28 = 0x8220102;
    local_b8 = pcVar29;
    FUN_10012dbb0(pcVar33,puVar34,&local_b8);
    *(char **)(puVar28 + 1) = pcVar33;
    _swift_bridgeObjectRelease_n(puVar34,2);
    __os_log_impl(0x100000000,pOVar26,uVar9 & 0xff,"%{public}s",puVar28,0xc);
    FUN_100043f24(pcVar29);
    _swift_slowDealloc(pcVar29,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar28,0xffffffffffffffff,0xffffffffffffffff);
  }
  (**(code **)(lVar35 + 8))(lVar36,LVar10.unknown);
  _swift_bridgeObjectRelease(puVar14);
  return;
}

