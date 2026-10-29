// rea decompile_all
// name: FUN_1003ad96c
// address: 0x1003ad96c
// body: available
// range: 0x1003ad96c-0x1003ae44b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003ae248 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003ad96c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  Storage storage;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  SafeAreaRegions SVar6;
  Set SVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ObservedObject<undefined> OVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  undefined8 *puVar11;
  undefined8 *puVar12;
  void *pvVar13;
  long lVar14;
  void *apvStack_7a0 [7];
  long local_768;
  undefined *local_760 [6];
  undefined8 local_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 local_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 local_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 local_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 local_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 local_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 local_670;
  undefined8 uStack_668;
  undefined8 local_660;
  undefined *puStack_658;
  undefined1 local_650;
  undefined1 auStack_640 [296];
  undefined1 auStack_518 [296];
  undefined1 local_3f0 [8];
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined1 local_2c8;
  undefined7 uStack_2c7;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined1 local_1a0 [8];
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined1 local_a0;
  Storage storage_00;
  
  lVar3 = 0;
  local_760[1] = (undefined *)param_1;
  FUN_10039c2bc();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar3 = (long)apvStack_7a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_10055fa60;
  FUN_100002f94(&DAT_10055fa60,&DAT_1004352c8);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = (undefined8 *)(lVar3 - extraout_x8_00);
  puVar5 = &DAT_10055fa68;
  FUN_100002f94(&DAT_10055fa68,&DAT_1004352d0);
  apvStack_7a0[6] = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = (long)puVar12 - extraout_x8_01;
  puVar5 = &DAT_10055fa70;
  FUN_100002f94(&DAT_10055fa70,&DAT_1004352d8);
  local_760[0] = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = (undefined8 *)(lVar14 - extraout_x8_02);
  puVar5 = &DAT_10055fa78;
  FUN_100002f94(&DAT_10055fa78,&DAT_1004352e0);
  apvStack_7a0[5] = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pvVar13 = (void *)((long)puVar11 - extraout_x8_03);
  puVar5 = &DAT_10055fa80;
  FUN_100002f94(&DAT_10055fa80,&DAT_1004352e8);
  SVar6.unknown = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_768 = (long)pvVar13 - extraout_x8_04;
  storage.value = (__int8)pvVar13;
  storage_00.value = (__int8)puVar11;
  if (param_2 < 2) {
    if (param_2 == 0) {
      FUN_10032c5d0(local_3f0);
      SVar6 = SwiftUI::SafeAreaRegions::get_all(SVar6);
      SVar7 = SwiftUI::Edge::Set::get_all(SVar6.unknown);
      uStack_688 = uStack_328;
      local_690 = local_330;
      uStack_678 = uStack_318;
      uStack_680 = local_320;
      uStack_668 = uStack_308;
      local_670 = local_310;
      uStack_6c8 = uStack_368;
      local_6d0 = local_370;
      uStack_6b8 = uStack_358;
      uStack_6c0 = local_360;
      uStack_6a8 = uStack_348;
      local_6b0 = local_350;
      uStack_698 = uStack_338;
      uStack_6a0 = local_340;
      uStack_708 = uStack_3a8;
      local_710 = local_3b0;
      uStack_6f8 = uStack_398;
      uStack_700 = uStack_3a0;
      uStack_6e8 = uStack_388;
      local_6f0 = local_390;
      uStack_6d8 = uStack_378;
      uStack_6e0 = local_380;
      local_760[3] = (undefined *)uStack_3e8;
      local_760[5] = (undefined *)uStack_3d8;
      local_760[4] = (undefined *)uStack_3e0;
      uStack_728 = uStack_3c8;
      local_730 = local_3d0;
      uStack_718 = uStack_3b8;
      uStack_720 = uStack_3c0;
      uStack_d8 = uStack_328;
      local_e0 = local_330;
      uStack_c8 = uStack_318;
      local_d0 = local_320;
      uStack_b8 = uStack_308;
      local_c0 = local_310;
      uStack_118 = uStack_368;
      local_120 = local_370;
      uStack_108 = uStack_358;
      local_110 = local_360;
      uStack_f8 = uStack_348;
      local_100 = local_350;
      uStack_e8 = uStack_338;
      local_f0 = local_340;
      uStack_158 = uStack_3a8;
      local_160 = local_3b0;
      uStack_148 = uStack_398;
      local_150 = uStack_3a0;
      uStack_138 = uStack_388;
      local_140 = local_390;
      uStack_128 = uStack_378;
      local_130 = local_380;
      uStack_198 = uStack_3e8;
      uStack_188 = uStack_3d8;
      local_190 = uStack_3e0;
      local_660 = local_300;
      local_650 = SUB81(SVar7.unknown,0);
      uStack_178 = uStack_3c8;
      local_180 = local_3d0;
      uStack_168 = uStack_3b8;
      local_170 = uStack_3c0;
      local_b0 = local_300;
      puStack_658 = SVar6.unknown;
      local_a8 = SVar6.unknown;
      local_a0 = local_650;
      FUN_1000087e4(local_760 + 2,&local_2c8,&DAT_10055faa8,&DAT_1004352f8);
      FUN_10002a29c(local_1a0,&DAT_10055faa8,&DAT_1004352f8);
      _memcpy(local_3f0,local_760 + 2,0x101);
      FUN_1003b1748(local_3f0);
      _memcpy(&local_2c8,local_3f0,0x122);
      FUN_1000087e4(local_760 + 2,auStack_518,&DAT_10055faa8,&DAT_1004352f8);
      FUN_1000087e4(local_760 + 2,auStack_518,&DAT_10055faa8,&DAT_1004352f8);
      FUN_100002f94(&DAT_10055faa8,&DAT_1004352f8);
      FUN_1003b1500();
      FUN_1003b15b8();
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)&local_2c8);
      _memcpy(&local_2c8,auStack_518,0x122);
      _memcpy(pvVar13,auStack_518,0x122);
      _swift_storeEnumTagMultiPayload(pvVar13,apvStack_7a0[5],0);
      FUN_1000087e4(&local_2c8,auStack_640,&DAT_10055fa98,&DAT_1004352f0);
      FUN_100002f94(&DAT_10055fa98,&DAT_1004352f0);
      FUN_1003b1488();
      FUN_1003b15f8();
      lVar3 = local_768;
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init(storage);
      FUN_10002a29c(auStack_518,&DAT_10055fa98,&DAT_1004352f0);
      FUN_1000087e4(lVar3,puVar11,&DAT_10055fa80,&DAT_1004352e8);
      _swift_storeEnumTagMultiPayload(puVar11,local_760[0],0);
      FUN_1003b1410();
      FUN_1003b16c8();
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init(storage_00);
      FUN_10002a29c(local_760 + 2,&DAT_10055faa8,&DAT_1004352f8);
      FUN_10002a29c(local_760 + 2,&DAT_10055faa8,&DAT_1004352f8);
    }
    else {
      if (param_2 != 1) goto LAB_1003ade60;
      FUN_1003205b4(local_1a0);
      _memcpy(local_3f0,local_1a0,0x121);
      FUN_1003b1708(local_3f0);
      _memcpy(&local_2c8,local_3f0,0x122);
      FUN_1003181f4(local_1a0,auStack_518);
      FUN_1003181f4(local_1a0,auStack_518);
      FUN_100002f94(&DAT_10055faa8,&DAT_1004352f8);
      FUN_1003b1500();
      FUN_1003b15b8();
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)&local_2c8);
      _memcpy(&local_2c8,auStack_518,0x122);
      _memcpy(pvVar13,auStack_518,0x122);
      _swift_storeEnumTagMultiPayload(pvVar13,apvStack_7a0[5],0);
      FUN_1000087e4(&local_2c8,auStack_640,&DAT_10055fa98,&DAT_1004352f0);
      FUN_100002f94(&DAT_10055fa98,&DAT_1004352f0);
      FUN_1003b1488();
      FUN_1003b15f8();
      lVar3 = local_768;
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init(storage);
      FUN_10002a29c(auStack_518,&DAT_10055fa98,&DAT_1004352f0);
      FUN_1000087e4(lVar3,puVar11,&DAT_10055fa80,&DAT_1004352e8);
      _swift_storeEnumTagMultiPayload(puVar11,local_760[0],0);
      FUN_1003b1410();
      FUN_1003b16c8();
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init(storage_00);
      FUN_1003b1714(local_1a0);
      FUN_1003b1714(local_1a0);
    }
  }
  else {
    apvStack_7a0[4] = puVar5;
    if (param_2 != 2) {
      if (param_2 == 3) {
        FUN_1003a3b90(lVar3);
        FUN_100029504(lVar3,puVar12,FUN_10039c2bc);
        _swift_storeEnumTagMultiPayload(puVar12,puVar4,1);
        FUN_1003b1688();
        FUN_1000036d0(&DAT_10055fad0,FUN_10039c2bc,&TargetProtocolConformanceDescriptor_1004349f8);
        (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar12);
        FUN_1000087e4(lVar14,pvVar13,&DAT_10055fa68,&DAT_1004352d0);
        _swift_storeEnumTagMultiPayload(pvVar13,apvStack_7a0[5],1);
        FUN_100002f94(&DAT_10055fa98,&DAT_1004352f0);
        FUN_1003b1488();
        FUN_1003b15f8();
        lVar2 = local_768;
        (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init(storage);
        FUN_10002a29c(lVar14,&DAT_10055fa68,&DAT_1004352d0);
        FUN_1000087e4(lVar2,puVar11,&DAT_10055fa80,&DAT_1004352e8);
        _swift_storeEnumTagMultiPayload(puVar11,local_760[0],0);
        FUN_1003b1410();
        FUN_1003b16c8();
        (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init(storage_00);
        FUN_10002a29c(lVar2,&DAT_10055fa80,&DAT_1004352e8);
        FUN_100029548(lVar3,FUN_10039c2bc);
        return;
      }
LAB_1003ade60:
      FUN_100343370(&local_2c8);
      puVar11[5] = uStack_2a0;
      puVar11[4] = local_2a8;
      puVar11[7] = uStack_290;
      puVar11[6] = uStack_298;
      puVar11[9] = uStack_280;
      puVar11[8] = local_288;
      puVar11[10] = local_278;
      puVar11[1] = uStack_2c0;
      *puVar11 = CONCAT71(uStack_2c7,local_2c8);
      puVar11[3] = uStack_2b0;
      puVar11[2] = uStack_2b8;
      _swift_storeEnumTagMultiPayload(puVar11,local_760[0],1);
      FUN_1003b1410();
      FUN_1003b16c8();
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init(storage_00);
      return;
    }
    apvStack_7a0[2] = pvVar13;
    FUN_100279594(0);
    puVar8 = &DAT_100553dd0;
    FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
    apvStack_7a0[3] = (void *)SwiftUI::EnvironmentObject::init();
    if (DAT_100557fe0 != -1) {
      _swift_once(&DAT_100557fe0,FUN_10025cd74);
    }
    uVar1 = DAT_100577d70;
    uVar9 = 0;
    FUN_10025e124();
    puVar5 = &DAT_10055fae0;
    FUN_1000036d0(&DAT_10055fae0,FUN_10025e124,&TargetProtocolConformanceDescriptor_10042c1f0);
    _swift_retain(uVar1);
    OVar10 = SwiftUI::ObservedObject::init(puVar5,uVar9,puVar5);
    local_3f0[0] = 0;
    SwiftUI::State::init(&local_2c8,OVar10.unknown,&DAT_10053b6f8);
    pvVar13 = apvStack_7a0[3];
    *puVar12 = apvStack_7a0[3];
    puVar12[1] = puVar8;
    puVar12[2] = OVar10.unknown;
    puVar12[3] = uVar9;
    *(undefined1 *)(puVar12 + 4) = local_2c8;
    puVar12[5] = uStack_2c0;
    apvStack_7a0[1] = (void *)uVar9;
    _swift_storeEnumTagMultiPayload(puVar12,puVar4,0);
    FUN_1003b1688();
    FUN_1000036d0(&DAT_10055fad0,FUN_10039c2bc,&TargetProtocolConformanceDescriptor_1004349f8);
    _swift_retain(pvVar13);
    _swift_retain(uVar9);
    _swift_retain(uStack_2c0);
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar12);
    pvVar13 = apvStack_7a0[2];
    FUN_1000087e4(lVar14,apvStack_7a0[2],&DAT_10055fa68,&DAT_1004352d0);
    _swift_storeEnumTagMultiPayload(pvVar13,apvStack_7a0[5],1);
    FUN_100002f94(&DAT_10055fa98,&DAT_1004352f0);
    FUN_1003b1488();
    FUN_1003b15f8();
    lVar3 = local_768;
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)pvVar13);
    FUN_10002a29c(lVar14,&DAT_10055fa68,&DAT_1004352d0);
    FUN_1000087e4(lVar3,puVar11,&DAT_10055fa80,&DAT_1004352e8);
    _swift_storeEnumTagMultiPayload(puVar11,local_760[0],0);
    FUN_1003b1410();
    FUN_1003b16c8();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init(storage_00);
    _swift_release(uStack_2c0);
    _swift_release(apvStack_7a0[1]);
    _swift_release(apvStack_7a0[3]);
  }
  FUN_10002a29c(lVar3,&DAT_10055fa80,&DAT_1004352e8);
  return;
}

