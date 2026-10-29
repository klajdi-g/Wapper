// rea decompile_all
// name: FUN_10024bd04
// address: 0x10024bd04
// body: available
// range: 0x10024bd04-0x10024d63b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10024bd04(char *param_1,char *param_2,ID param_3)

{
  int iVar1;
  String SVar2;
  String SVar3;
  String SVar4;
  DispatchTime DVar5;
  DispatchTime deadline;
  DispatchWorkItemFlags DVar6;
  DispatchWorkItemFlags DVar7;
  bool bVar8;
  uint uVar9;
  undefined *puVar10;
  URL UVar11;
  char *pcVar12;
  OS_os_log *pOVar13;
  undefined4 *puVar14;
  OS_dispatch_queue *pOVar15;
  URL UVar16;
  undefined8 uVar17;
  undefined *puVar18;
  DispatchQoS DVar19;
  undefined8 *puVar20;
  undefined *puVar21;
  Logger LVar22;
  OS_os_log *pOVar23;
  _StringGuts _Var24;
  char *pcVar25;
  char *pcVar26;
  long extraout_x8;
  undefined *puVar27;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined *puVar28;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long lVar29;
  long lVar30;
  code *pcVar31;
  ulong uVar32;
  long lVar33;
  long lVar34;
  void *pvVar35;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long extraout_x13;
  long unaff_x20;
  code *pcVar36;
  long lVar37;
  ID IVar38;
  long lVar39;
  ulong uVar40;
  long lVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  String SVar45;
  String SVar46;
  String SVar47;
  String SVar48;
  String SVar49;
  String SVar50;
  String SVar51;
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
  String SVar69;
  String SVar70;
  String SVar71;
  String SVar72;
  String SVar73;
  String SVar74;
  String SVar75;
  String SVar76;
  String SVar77;
  String SVar78;
  String SVar79;
  String SVar80;
  String SVar81;
  String SVar82;
  String SVar83;
  String SVar84;
  String SVar85;
  String SVar86;
  String SVar87;
  String SVar88;
  String SVar89;
  String SVar90;
  code *apcStack_250 [2];
  long local_240;
  long local_238;
  code *local_230;
  code *local_228;
  code *local_220;
  long local_218;
  long local_210;
  char *local_208;
  char *local_200;
  long local_1f8;
  long local_1f0;
  void *local_1e8;
  long local_1e0;
  long local_1d8;
  DispatchTime local_1d0;
  long local_1c8;
  DispatchTime local_1c0;
  undefined *local_1b8;
  undefined *local_1b0;
  code *local_1a8;
  code *local_1a0;
  long local_198;
  undefined *local_190;
  long local_188;
  undefined *local_180;
  undefined8 *local_178;
  DispatchWorkItemFlags local_170;
  DispatchWorkItemFlags local_168;
  undefined *local_160;
  undefined *local_158;
  char local_130 [24];
  undefined1 auStack_118 [8];
  char *local_110;
  undefined *local_108;
  code *local_100;
  undefined *puStack_f8;
  code *local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined *local_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  
  local_1b8 = (undefined *)Dispatch::DispatchTime::typeMetadataAccessor();
  local_1c8 = *(long *)(local_1b8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_1c8 + 0x40));
  puVar27 = (undefined *)((long)apcStack_250 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_1d0.unknown = puVar27;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar27 = puVar27 + -extraout_x12;
  local_1c0.unknown = puVar27;
  local_190 = (undefined *)os::Logger::typeMetadataAccessor();
  local_198 = *(long *)(local_190 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_198 + 0x40));
  lVar33 = (long)puVar27 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_1f8 = lVar33;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar33 = lVar33 - extraout_x12_00;
  local_1d8 = lVar33;
  local_158 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_1a0 = *(code **)(local_158 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_1a0 + 0x40));
  puVar28 = (undefined *)(lVar33 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  local_168.unknown = puVar28;
  local_160 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_1a8 = *(code **)(local_160 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_1a8 + 0x40));
  puVar28 = puVar28 + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  puVar27 = &DAT_10054ea38;
  local_170.unknown = puVar28;
  FUN_100002f94(&DAT_10054ea38,&DAT_100426270);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar27 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar28 = puVar28 + -extraout_x8_03;
  puVar10 = &DAT_1005539e0;
  local_180 = puVar28;
  FUN_100002f94(&DAT_1005539e0,&DAT_100426a78);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar10 + -8) + 0x40));
  local_1b0 = puVar28 + -(extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar34 = (long)(puVar28 + -(extraout_x8_04 + 0xfU & 0xfffffffffffffff0)) - extraout_x12_01;
  local_1f0 = lVar34;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar34 = lVar34 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar10 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar10 + -8) + 0x40));
  pvVar35 = (void *)((lVar34 - extraout_x12_03) - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0));
  local_1e8 = pvVar35;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar41 = (long)pvVar35 - extraout_x12_04;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_178 = (undefined8 *)(lVar41 - extraout_x12_05);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar37 = (lVar41 - extraout_x12_05) - extraout_x12_06;
  UVar11 = Foundation::URL::typeMetadataAccessor();
  lVar29 = *(long *)(UVar11.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar30 = lVar37 - (extraout_x13 + 0xfU & 0xfffffffffffffff0);
  local_1e0 = extraout_x13;
  local_188 = lVar30;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar33 = _TtC7Wallper21VideoWallpaperManager::loopers;
  _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::loopers,auStack_90,0,0);
  lVar33 = *(long *)(unaff_x20 + lVar33);
  if (*(long *)(lVar33 + 0x10) == 0) {
    return;
  }
  _swift_bridgeObjectRetain(lVar33);
  local_208 = param_1;
  local_200 = param_2;
  FUN_10000464c();
  if (((ulong)param_2 & 1) == 0) {
    _swift_bridgeObjectRelease(lVar33);
    return;
  }
  IVar38 = *(ID *)(*(long *)(lVar33 + 0x38) + (long)param_1 * 8);
  local_210 = lVar34 - extraout_x12_03;
  _swift_bridgeObjectRelease(lVar33);
  lVar39 = local_210;
  lVar33 = _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL;
  if (IVar38 != param_3) {
    return;
  }
  _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL,auStack_a8
                     ,0,0);
  lVar33 = *(long *)(unaff_x20 + lVar33);
  if (*(long *)(lVar33 + 0x10) == 0) {
    (**(code **)(lVar29 + 0x38))(lVar37,1,1,UVar11.unknown);
LAB_10024c24c:
    FUN_10002a29c(lVar37,&DAT_100553d90,&DAT_10041bf10);
    return;
  }
  local_218 = lVar30 - extraout_x12_07;
  _swift_bridgeObjectRetain(lVar33);
  pcVar12 = local_208;
  pcVar26 = local_200;
  FUN_10000464c(local_208);
  bVar8 = ((ulong)pcVar26 & 1) == 0;
  if (!bVar8) {
    (**(code **)(lVar29 + 0x10))
              (lVar37,*(long *)(lVar33 + 0x38) + *(long *)(lVar29 + 0x48) * (long)pcVar12,
               UVar11.unknown);
  }
  pcVar31 = *(code **)(lVar29 + 0x38);
  (*pcVar31)(lVar37,bVar8,1,UVar11.unknown);
  _swift_bridgeObjectRelease(lVar33);
  pcVar36 = *(code **)(lVar29 + 0x30);
  lVar30 = lVar37;
  (*pcVar36)(lVar37,1,UVar11.unknown);
  lVar33 = local_218;
  if ((int)lVar30 == 1) goto LAB_10024c24c;
  local_228 = *(code **)(lVar29 + 0x20);
  local_230 = pcVar36;
  (*local_228)(local_218,lVar37,UVar11.unknown);
  lVar30 = _TtC7Wallper21VideoWallpaperManager::failureRebuilds;
  _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::failureRebuilds,auStack_c0,0,0
                    );
  local_238 = lVar30;
  lVar30 = *(long *)(unaff_x20 + lVar30);
  if (*(long *)(lVar30 + 0x10) == 0) {
    puVar10 = &DAT_10054a360;
    FUN_100002f94(&DAT_10054a360,&DAT_10041a330);
    (**(code **)(*(long *)(puVar10 + -8) + 0x38))(lVar39,1,1,puVar10);
  }
  else {
    _swift_bridgeObjectRetain(lVar30);
    pcVar12 = local_208;
    pcVar26 = local_200;
    FUN_10000464c(local_208);
    bVar8 = ((ulong)pcVar26 & 1) == 0;
    if (bVar8) {
      puVar10 = &DAT_10054a360;
      FUN_100002f94(&DAT_10054a360,&DAT_10041a330);
      pcVar36 = *(code **)(*(long *)(puVar10 + -8) + 0x38);
    }
    else {
      local_220 = *(code **)(lVar30 + 0x38);
      puVar10 = &DAT_10054a360;
      FUN_100002f94(&DAT_10054a360,&DAT_10041a330);
      lVar37 = *(long *)(puVar10 + -8);
      FUN_1000087e4((long)local_220 + *(long *)(lVar37 + 0x48) * (long)pcVar12,local_210,
                    &DAT_10054a360,&DAT_10041a330);
      pcVar36 = *(code **)(lVar37 + 0x38);
      lVar39 = local_210;
    }
    (*pcVar36)(lVar39,bVar8,1,puVar10);
    _swift_bridgeObjectRelease(lVar30);
  }
  FUN_1000087e4(lVar39,lVar34,&DAT_1005539e0,&DAT_100426a78);
  puVar10 = &DAT_10054a360;
  FUN_100002f94(&DAT_10054a360,&DAT_10041a330);
  local_240 = *(long *)(puVar10 + -8);
  apcStack_250[1] = *(code **)(local_240 + 0x30);
  lVar30 = lVar34;
  (*apcStack_250[1])(lVar34,1);
  puVar20 = local_178;
  bVar8 = (int)lVar30 != 1;
  if (bVar8) {
    (*local_228)(local_178,lVar34,UVar11.unknown);
  }
  else {
    FUN_10002a29c(lVar34,&DAT_1005539e0,&DAT_100426a78);
  }
  (*pcVar31)(puVar20,!bVar8,1,UVar11.unknown);
  local_220 = *(code **)(lVar29 + 0x10);
  (*local_220)(lVar41,lVar33,UVar11.unknown);
  (*pcVar31)(lVar41,0,1,UVar11.unknown);
  puVar28 = local_180;
  iVar1 = *(int *)(puVar27 + 0x30);
  FUN_1000087e4(puVar20,local_180,&DAT_100553d90,&DAT_10041bf10);
  FUN_1000087e4(lVar41,puVar28 + iVar1,&DAT_100553d90,&DAT_10041bf10);
  pcVar31 = local_230;
  puVar27 = puVar28;
  (*local_230)(puVar28,1,UVar11.unknown);
  pvVar35 = local_1e8;
  if ((int)puVar27 == 1) {
    FUN_10002a29c(lVar41,&DAT_100553d90,&DAT_10041bf10);
    FUN_10002a29c(puVar20,&DAT_100553d90,&DAT_10041bf10);
    puVar27 = puVar28 + iVar1;
    (*pcVar31)(puVar27,1,UVar11.unknown);
    if ((int)puVar27 != 1) {
LAB_10024c648:
      FUN_10002a29c(puVar28,&DAT_10054ea38,&DAT_100426270);
      goto LAB_10024c660;
    }
    FUN_10002a29c(puVar28,&DAT_100553d90,&DAT_10041bf10);
    lVar33 = local_210;
LAB_10024c740:
    lVar30 = local_1f0;
    FUN_1000087e4(lVar33,local_1f0,&DAT_1005539e0,&DAT_100426a78);
    lVar33 = lVar30;
    (*apcStack_250[1])(lVar30,1,puVar10);
    if ((int)lVar33 == 1) {
      FUN_10002a29c(lVar30,&DAT_1005539e0,&DAT_100426a78);
      lVar33 = 0;
    }
    else {
      lVar33 = *(long *)(lVar30 + *(int *)(puVar10 + 0x30));
      (**(code **)(lVar29 + 8))(lVar30,UVar11.unknown);
    }
    puVar28 = local_1b0;
    puVar27 = (undefined *)(lVar33 + 1);
    if (SCARRY8(lVar33,1)) {
                    /* WARNING: Does not return */
      pcVar31 = (code *)SoftwareBreakpoint(1,0x10024d60c);
      (*pcVar31)();
    }
    if (3 < (long)puVar27) {
      if (puVar27 == (undefined *)0x4) {
        iVar1 = *(int *)(puVar10 + 0x30);
        (*local_220)(local_1b0,local_218,UVar11.unknown);
        *(undefined8 *)(puVar28 + iVar1) = 4;
        (**(code **)(local_240 + 0x38))(puVar28,0,1,puVar10);
        pvVar35 = (void *)0x0;
        _swift_beginAccess(unaff_x20 + local_238,&local_110,0x21);
        pcVar12 = local_200;
        _Var24.unknown = local_208;
        SVar2.bridgeObject = local_200;
        SVar2.str = local_208;
        _swift_bridgeObjectRetain(local_200);
        FUN_10012330c(puVar28);
        _swift_endAccess(&local_110);
        local_110 = (char *)0x0;
        local_108 = (undefined *)0xe000000000000000;
        Swift::_StringGuts::grow(0x2f,_Var24);
        UVar16.unknown = local_108;
        _swift_bridgeObjectRelease();
        local_110 = (char *)0x6b63616279616c50;
        local_108 = (void *)0xea0000000000203a;
        SVar46 = Foundation::URL::get_lastPathComponent(UVar16);
        SVar78.bridgeObject = pvVar35;
        SVar78.str = pcVar12;
        Swift::String::append(SVar46,SVar78);
        _swift_bridgeObjectRelease(SVar46.bridgeObject);
        SVar54.bridgeObject = (void *)0x80000001004e26c0;
        SVar54.str = (char *)0xd000000000000012;
        SVar79.bridgeObject = pvVar35;
        SVar79.str = pcVar12;
        Swift::String::append(SVar54,SVar79);
        SVar80.bridgeObject = pvVar35;
        SVar80.str = pcVar12;
        Swift::String::append(SVar2,SVar80);
        uVar17 = 0x61656c209480e220;
        SVar55.bridgeObject = (void *)0xaf746920676e6976;
        SVar55.str = (char *)0x61656c209480e220;
        SVar81.bridgeObject = pvVar35;
        SVar81.str = pcVar12;
        Swift::String::append(SVar55,SVar81);
        puVar27 = local_108;
        SVar4.bridgeObject = local_108;
        SVar4.str = local_110;
        local_110 = (char *)0x5b;
        local_108 = (undefined *)0xe100000000000000;
        local_d0 = (undefined *)0x4e524157;
        uStack_c8 = 0xe400000000000000;
        local_e0 = 0x20;
        uStack_d8 = 0xe100000000000000;
        FUN_100026df4();
        pcVar26 = (char *)0x0;
        puVar28 = PTR___type_metadata_for_Swift_String_100523a98;
        SVar46 = (extension_Foundation)::Swift::StringProtocol::_padding
                           (6,&local_e0,0,PTR___type_metadata_for_Swift_String_100523a98,
                            PTR___type_metadata_for_Swift_String_100523a98,uVar17,uVar17);
        SVar82.bridgeObject = puVar28;
        SVar82.str = pcVar26;
        Swift::String::append(SVar46,SVar82);
        _swift_bridgeObjectRelease(SVar46.bridgeObject);
        SVar56.bridgeObject = (void *)0xe300000000000000;
        SVar56.str = (char *)0x5b205d;
        SVar83.bridgeObject = puVar28;
        SVar83.str = pcVar26;
        Swift::String::append(SVar56,SVar83);
        SVar57.bridgeObject = (void *)0xe800000000000000;
        SVar57.str = (char *)0x6b63616279616c70;
        SVar84.bridgeObject = puVar28;
        SVar84.str = pcVar26;
        Swift::String::append(SVar57,SVar84);
        SVar58.bridgeObject = (void *)0xe200000000000000;
        SVar58.str = (char *)0x205d;
        SVar85.bridgeObject = puVar28;
        SVar85.str = pcVar26;
        Swift::String::append(SVar58,SVar85);
        SVar86.bridgeObject = puVar28;
        SVar86.str = pcVar26;
        Swift::String::append(SVar4,SVar86);
        puVar10 = local_108;
        pcVar12 = local_110;
        local_110 = (char *)0x282020;
        local_108 = (undefined *)0xe300000000000000;
        SVar59.bridgeObject = (void *)0x80000001004e2690;
        SVar59.str = (char *)0xd000000000000021;
        SVar87.bridgeObject = puVar28;
        SVar87.str = pcVar26;
        Swift::String::append(SVar59,SVar87);
        SVar60.bridgeObject = (void *)0xe100000000000000;
        SVar60.str = (char *)0x3a;
        SVar88.bridgeObject = puVar28;
        SVar88.str = pcVar26;
        Swift::String::append(SVar60,SVar88);
        local_d0 = (undefined *)0x4c3;
        SVar46 = Swift::CustomStringConvertible::get_description();
        SVar89.bridgeObject = puVar28;
        SVar89.str = pcVar26;
        Swift::String::append(SVar46,SVar89);
        _swift_bridgeObjectRelease(SVar46.bridgeObject);
        SVar61.bridgeObject = (void *)0xe100000000000000;
        SVar61.str = (char *)0x29;
        SVar90.bridgeObject = puVar28;
        SVar90.str = pcVar26;
        Swift::String::append(SVar61,SVar90);
        puVar28 = local_108;
        pcVar26 = local_110;
        if (DAT_100559018 != -1) {
          _swift_once(&DAT_100559018,FUN_1002854a0);
        }
        puVar18 = &DAT_1005347a8;
        _swift_allocObject(&DAT_1005347a8,0x30,7);
        *(char **)(puVar18 + 0x10) = pcVar12;
        *(undefined **)(puVar18 + 0x18) = puVar10;
        *(char **)(puVar18 + 0x20) = pcVar26;
        *(undefined **)(puVar18 + 0x28) = puVar28;
        local_f0 = thunk_FUN_100099310;
        local_110 = PTR___NSConcreteStackBlock_100521110;
        local_108 = (undefined *)0x42000000;
        local_100 = FUN_1000c7e7c;
        puStack_f8 = &DAT_1005347c0;
        local_e8 = puVar18;
        pvVar35 = __Block_copy(&local_110);
        DVar19.unknown = puVar10;
        _swift_bridgeObjectRetain();
        DVar6.unknown = local_170.unknown;
        Dispatch::DispatchQoS::get_unspecified(DVar19);
        local_d0 = PTR___swiftEmptyArrayStorage_100524190;
        puVar20 = &DAT_100553db0;
        FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                      PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
        puVar28 = &DAT_100561080;
        FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
        puVar21 = puVar28;
        FUN_100077ac0();
        puVar18 = local_158;
        DVar7.unknown = local_168.unknown;
        Swift::SetAlgebra::_init(local_168.unknown,&local_d0,puVar28,puVar21,local_158,puVar20);
        (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar6);
        __Block_release(pvVar35);
        (**(code **)(local_1a0 + 8))(DVar7.unknown,puVar18);
        (**(code **)(local_1a8 + 8))(DVar6.unknown,local_160);
        _swift_release(local_e8);
        if (DAT_100559020 != -1) {
          _swift_once(&DAT_100559020,FUN_100285420);
        }
        puVar28 = local_190;
        puVar18 = local_190;
        FUN_100099338(local_190,&DAT_100558f50);
        lVar30 = local_198;
        lVar33 = local_1f8;
        lVar34 = local_1f8;
        (**(code **)(local_198 + 0x10))(local_1f8,puVar18,puVar28);
        uVar9 = (uint)lVar34;
        static_(extension_in_os):__C.os_log_type_t.default.getter_:___C.os_log_type_t::_get_default
                  ();
        LVar22.unknown = puVar10;
        _swift_bridgeObjectRetain();
        pOVar13 = os::Logger::get_logObject(LVar22);
        pOVar23 = pOVar13;
        _os_log_type_enabled(pOVar13,uVar9 & 0xff);
        if ((int)pOVar23 == 0) {
          _swift_bridgeObjectRelease_n(puVar10,2);
        }
        else {
          puVar14 = (undefined4 *)0xc;
          _swift_slowAlloc(0xc,0xffffffffffffffff);
          pcVar26 = (char *)0x20;
          _swift_slowAlloc(0x20,0xffffffffffffffff);
          *puVar14 = 0x8220102;
          local_110 = pcVar26;
          FUN_10012dbb0(pcVar12,puVar10,&local_110);
          *(char **)(puVar14 + 1) = pcVar12;
          _swift_bridgeObjectRelease_n(puVar10,2);
          __os_log_impl(0x100000000,pOVar13,uVar9 & 0xff,"%{public}s",puVar14,0xc);
          FUN_100043f24(pcVar26);
          _swift_slowDealloc(pcVar26,0xffffffffffffffff,0xffffffffffffffff);
          _swift_slowDealloc(puVar14,0xffffffffffffffff,0xffffffffffffffff);
        }
        (**(code **)(lVar30 + 8))(lVar33,puVar28);
        _swift_bridgeObjectRelease(puVar27);
      }
      FUN_10002a29c(local_210,&DAT_1005539e0,&DAT_100426a78);
      pcVar31 = *(code **)(lVar29 + 8);
      lVar33 = local_218;
      goto LAB_10024d054;
    }
  }
  else {
    FUN_1000087e4(puVar28,local_1e8,&DAT_100553d90,&DAT_10041bf10);
    puVar27 = puVar28 + iVar1;
    (*pcVar31)(puVar27,1,UVar11.unknown);
    lVar33 = local_188;
    if ((int)puVar27 == 1) {
      FUN_10002a29c(lVar41,&DAT_100553d90,&DAT_10041bf10);
      puVar28 = local_180;
      FUN_10002a29c(local_178,&DAT_100553d90,&DAT_10041bf10);
      (**(code **)(lVar29 + 8))(pvVar35,UVar11.unknown);
      goto LAB_10024c648;
    }
    (*local_228)(local_188,puVar28 + iVar1,UVar11.unknown);
    puVar27 = &DAT_100553da0;
    FUN_1000036d0(&DAT_100553da0,PTR_typeMetadataAccessor_100520a18,
                  PTR_Foundation__Foundation__URL_>Swift__Equatable_100520a38);
    bVar8 = Swift::Equatable::___infix(pvVar35,lVar33,UVar11.unknown,puVar27);
    pcVar31 = *(code **)(lVar29 + 8);
    (*pcVar31)(lVar33,UVar11.unknown);
    FUN_10002a29c(lVar41,&DAT_100553d90,&DAT_10041bf10);
    FUN_10002a29c(local_178,&DAT_100553d90,&DAT_10041bf10);
    (*pcVar31)(pvVar35,UVar11.unknown);
    lVar33 = local_210;
    FUN_10002a29c(puVar28,&DAT_100553d90,&DAT_10041bf10);
    if (bVar8) goto LAB_10024c740;
LAB_10024c660:
    puVar27 = (undefined *)0x1;
  }
  puVar28 = local_1b0;
  iVar1 = *(int *)(puVar10 + 0x30);
  (*local_220)(local_1b0,local_218,UVar11.unknown);
  *(undefined **)(puVar28 + iVar1) = puVar27;
  (**(code **)(local_240 + 0x38))(puVar28,0,1,puVar10);
  pvVar35 = (void *)0x0;
  _swift_beginAccess(unaff_x20 + local_238,&local_110,0x21);
  pcVar26 = local_200;
  _swift_bridgeObjectRetain(local_200);
  pcVar12 = local_208;
  _Var24.unknown = local_208;
  pcVar25 = pcVar26;
  FUN_10012330c(puVar28);
  _swift_endAccess(&local_110);
  local_110 = (char *)0x0;
  local_108 = (void *)0xe000000000000000;
  Swift::_StringGuts::grow(0x36,_Var24);
  SVar46.bridgeObject = (void *)0x80000001004e2670;
  SVar46.str = (char *)0xd000000000000017;
  SVar62.bridgeObject = pvVar35;
  SVar62.str = pcVar25;
  Swift::String::append(SVar46,SVar62);
  SVar42.bridgeObject = pcVar26;
  SVar42.str = pcVar12;
  SVar63.bridgeObject = pvVar35;
  SVar63.str = pcVar25;
  Swift::String::append(SVar42,SVar63);
  SVar43.bridgeObject = (void *)0xe900000000000028;
  SVar43.str = (char *)0x2064656c69616620;
  SVar64.bridgeObject = pvVar35;
  SVar64.str = pcVar25;
  Swift::String::append(SVar43,SVar64);
  IVar38 = objc_stub::error(param_3);
  if (IVar38 == 0) {
    SVar44.bridgeObject = (void *)0xe700000000000000;
    SVar44.str = (char *)0x6e776f6e6b6e75;
  }
  else {
    pcVar25 = local_130;
    _swift_getErrorValue(IVar38,auStack_118);
    SVar44 = (extension_Foundation)::Swift::Error::get_localizedDescription();
  }
  SVar65.bridgeObject = pvVar35;
  SVar65.str = pcVar25;
  Swift::String::append(SVar44,SVar65);
  _swift_bridgeObjectRelease(SVar44.bridgeObject);
  SVar45.bridgeObject = (void *)0xee0020676e69646c;
  SVar45.str = (char *)0x6975626572202c29;
  SVar66.bridgeObject = pvVar35;
  SVar66.str = pcVar25;
  Swift::String::append(SVar45,SVar66);
  local_d0 = puVar27;
  SVar46 = Swift::CustomStringConvertible::get_description();
  SVar67.bridgeObject = pvVar35;
  SVar67.str = pcVar25;
  Swift::String::append(SVar46,SVar67);
  _swift_bridgeObjectRelease(SVar46.bridgeObject);
  SVar47.bridgeObject = (void *)0xe200000000000000;
  SVar47.str = (char *)0x332f;
  uVar17 = 0x332f;
  SVar68.bridgeObject = pvVar35;
  SVar68.str = pcVar25;
  Swift::String::append(SVar47,SVar68);
  puVar10 = local_108;
  SVar3.bridgeObject = local_108;
  SVar3.str = local_110;
  local_110 = (char *)0x5b;
  local_108 = (undefined *)0xe100000000000000;
  local_d0 = (undefined *)0x4e524157;
  uStack_c8 = 0xe400000000000000;
  local_e0 = 0x20;
  uStack_d8 = 0xe100000000000000;
  FUN_100026df4();
  pcVar26 = (char *)0x0;
  puVar28 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar46 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,&local_e0,0,PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,uVar17,uVar17);
  SVar69.bridgeObject = puVar28;
  SVar69.str = pcVar26;
  Swift::String::append(SVar46,SVar69);
  _swift_bridgeObjectRelease(SVar46.bridgeObject);
  SVar48.bridgeObject = (void *)0xe300000000000000;
  SVar48.str = (char *)0x5b205d;
  SVar70.bridgeObject = puVar28;
  SVar70.str = pcVar26;
  Swift::String::append(SVar48,SVar70);
  SVar49.bridgeObject = (void *)0xe800000000000000;
  SVar49.str = (char *)0x6b63616279616c70;
  SVar71.bridgeObject = puVar28;
  SVar71.str = pcVar26;
  Swift::String::append(SVar49,SVar71);
  SVar50.bridgeObject = (void *)0xe200000000000000;
  SVar50.str = (char *)0x205d;
  SVar72.bridgeObject = puVar28;
  SVar72.str = pcVar26;
  Swift::String::append(SVar50,SVar72);
  local_1e8 = puVar10;
  SVar73.bridgeObject = puVar28;
  SVar73.str = pcVar26;
  Swift::String::append(SVar3,SVar73);
  puVar10 = local_108;
  pcVar12 = local_110;
  local_110 = (char *)0x282020;
  local_108 = (undefined *)0xe300000000000000;
  SVar51.bridgeObject = (void *)0x80000001004e2690;
  SVar51.str = (char *)0xd000000000000021;
  SVar74.bridgeObject = puVar28;
  SVar74.str = pcVar26;
  Swift::String::append(SVar51,SVar74);
  SVar52.bridgeObject = (void *)0xe100000000000000;
  SVar52.str = (char *)0x3a;
  SVar75.bridgeObject = puVar28;
  SVar75.str = pcVar26;
  Swift::String::append(SVar52,SVar75);
  local_d0 = (undefined *)0x4c8;
  SVar46 = Swift::CustomStringConvertible::get_description();
  SVar76.bridgeObject = puVar28;
  SVar76.str = pcVar26;
  Swift::String::append(SVar46,SVar76);
  _swift_bridgeObjectRelease(SVar46.bridgeObject);
  SVar53.bridgeObject = (void *)0xe100000000000000;
  SVar53.str = (char *)0x29;
  SVar77.bridgeObject = puVar28;
  SVar77.str = pcVar26;
  Swift::String::append(SVar53,SVar77);
  puVar28 = local_108;
  pcVar26 = local_110;
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  puVar18 = &DAT_100534708;
  _swift_allocObject(&DAT_100534708,0x30,7);
  *(char **)(puVar18 + 0x10) = pcVar12;
  *(undefined **)(puVar18 + 0x18) = puVar10;
  *(char **)(puVar18 + 0x20) = pcVar26;
  *(undefined **)(puVar18 + 0x28) = puVar28;
  local_f0 = thunk_FUN_100099310;
  local_110 = PTR___NSConcreteStackBlock_100521110;
  local_108 = (undefined *)0x42000000;
  local_100 = FUN_1000c7e7c;
  puStack_f8 = &DAT_100534720;
  local_e8 = puVar18;
  pvVar35 = __Block_copy(&local_110);
  DVar19.unknown = puVar10;
  _swift_bridgeObjectRetain();
  DVar6.unknown = local_170.unknown;
  Dispatch::DispatchQoS::get_unspecified(DVar19);
  local_d0 = PTR___swiftEmptyArrayStorage_100524190;
  puVar20 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar28 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar21 = puVar28;
  FUN_100077ac0();
  puVar18 = local_158;
  DVar7.unknown = local_168.unknown;
  local_1b0 = puVar21;
  local_180 = puVar28;
  local_178 = puVar20;
  Swift::SetAlgebra::_init(local_168.unknown,&local_d0,puVar28,puVar21,local_158,puVar20);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar6);
  __Block_release(pvVar35);
  local_1a0 = *(code **)(local_1a0 + 8);
  (*local_1a0)(DVar7.unknown,puVar18);
  local_1a8 = *(code **)(local_1a8 + 8);
  (*local_1a8)(DVar6.unknown,local_160);
  _swift_release(local_e8);
  puVar28 = local_190;
  lVar30 = local_198;
  lVar33 = local_1d8;
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  puVar18 = puVar28;
  FUN_100099338(puVar28,&DAT_100558f50);
  lVar34 = lVar33;
  (**(code **)(lVar30 + 0x10))(lVar33,puVar18,puVar28);
  uVar9 = (uint)lVar34;
  static_(extension_in_os):__C.os_log_type_t.default.getter_:___C.os_log_type_t::_get_default();
  LVar22.unknown = puVar10;
  _swift_bridgeObjectRetain();
  pOVar13 = os::Logger::get_logObject(LVar22);
  pOVar23 = pOVar13;
  _os_log_type_enabled(pOVar13,uVar9 & 0xff);
  if ((int)pOVar23 == 0) {
    _swift_bridgeObjectRelease_n(puVar10,2);
  }
  else {
    puVar14 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    pcVar26 = (char *)0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar14 = 0x8220102;
    local_110 = pcVar26;
    FUN_10012dbb0(pcVar12,puVar10,&local_110);
    *(char **)(puVar14 + 1) = pcVar12;
    _swift_bridgeObjectRelease_n(puVar10,2);
    __os_log_impl(0x100000000,pOVar13,uVar9 & 0xff,"%{public}s",puVar14,0xc);
    FUN_100043f24(pcVar26);
    _swift_slowDealloc(pcVar26,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar14,0xffffffffffffffff,0xffffffffffffffff);
  }
  (**(code **)(lVar30 + 8))(lVar33,puVar28);
  _swift_bridgeObjectRelease(local_1e8);
  pOVar15 = (OS_dispatch_queue *)0x0;
  FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
  local_190 = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar15);
  DVar5.unknown = local_1d0.unknown;
  Dispatch::DispatchTime::now((DispatchTime)local_190);
  deadline.unknown = local_1c0.unknown;
  Dispatch::__infix(DVar5,(double)(long)puVar27 + (double)(long)puVar27);
  puVar28 = local_1b8;
  pcVar31 = *(code **)(local_1c8 + 8);
  (*pcVar31)(DVar5.unknown,local_1b8);
  puVar27 = &DAT_1005340c8;
  _swift_allocObject(&DAT_1005340c8,0x18,7);
  _swift_unknownObjectWeakInit(puVar27 + 0x10,unaff_x20);
  lVar30 = local_188;
  lVar33 = local_218;
  (*local_220)(local_188,local_218,UVar11.unknown);
  uVar32 = (ulong)*(byte *)(lVar29 + 0x50);
  uVar40 = uVar32 + 0x28 & (uVar32 ^ 0xffffffffffffffff);
  puVar10 = &DAT_100534758;
  _swift_allocObject(&DAT_100534758,uVar40 + local_1e0,uVar32 | 7);
  pcVar12 = local_200;
  *(undefined **)(puVar10 + 0x10) = puVar27;
  *(char **)(puVar10 + 0x18) = local_208;
  *(char **)(puVar10 + 0x20) = local_200;
  (*local_228)(puVar10 + uVar40,lVar30,UVar11.unknown);
  local_f0 = FUN_100259584;
  local_110 = PTR___NSConcreteStackBlock_100521110;
  local_108 = (undefined *)0x42000000;
  local_100 = FUN_1000c7e7c;
  puStack_f8 = &DAT_100534770;
  local_e8 = puVar10;
  pvVar35 = __Block_copy(&local_110);
  DVar19.unknown = local_e8;
  _swift_bridgeObjectRetain(pcVar12);
  _swift_release();
  DVar6.unknown = local_170.unknown;
  Dispatch::DispatchQoS::get_unspecified(DVar19);
  puVar27 = local_158;
  DVar7.unknown = local_168.unknown;
  local_110 = PTR___swiftEmptyArrayStorage_100524190;
  Swift::SetAlgebra::_init(local_168.unknown,&local_110,local_180,local_1b0,local_158,local_178);
  (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter
            (deadline,(DispatchQoS)DVar6.unknown,DVar7);
  __Block_release(pvVar35);
  (*local_1a0)(DVar7.unknown,puVar27);
  (*local_1a8)(DVar6.unknown,local_160);
  (*pcVar31)(deadline.unknown,puVar28);
  FUN_10002a29c(local_210,&DAT_1005539e0,&DAT_100426a78);
  pcVar31 = *(code **)(lVar29 + 8);
LAB_10024d054:
  (*pcVar31)(lVar33,UVar11.unknown);
  return;
}

