// rea decompile_all
// name: FUN_1002cd70c
// address: 0x1002cd70c
// body: available
// range: 0x1002cd70c-0x1002cdf87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002cdf84 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002cd70c(byte param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  State SVar1;
  uint uVar2;
  Logger LVar3;
  DispatchWorkItemFlags DVar4;
  DispatchQoS DVar5;
  ID IVar6;
  State SVar7;
  void *pvVar8;
  DispatchQoS DVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  Logger LVar13;
  OS_os_log *pOVar14;
  OS_os_log *pOVar15;
  undefined4 *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  OS_dispatch_queue *pOVar19;
  char *pcVar20;
  State *pSVar21;
  long lVar22;
  long extraout_x8;
  long lVar23;
  long extraout_x8_00;
  long lVar24;
  long extraout_x8_01;
  undefined8 *unaff_x20;
  long lVar25;
  DispatchWorkItemFlags DVar26;
  long lVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  String SVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  String SVar45;
  String SVar46;
  String SVar47;
  String SVar48;
  String SVar49;
  undefined *local_250;
  DispatchWorkItemFlags local_248;
  undefined8 *local_240;
  code *local_238;
  code *local_230;
  undefined *local_228;
  undefined8 *puStack_220;
  void *local_218;
  undefined *local_210;
  undefined *local_1c8;
  undefined8 local_1c0;
  code *local_1b8;
  undefined *puStack_1b0;
  code *local_1a8;
  undefined *local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  char local_188 [24];
  undefined1 auStack_170 [16];
  State local_160;
  undefined *puStack_158;
  code *local_150;
  undefined *puStack_148;
  code *local_140;
  undefined *local_138;
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_100521138;
  LVar3 = os::Logger::typeMetadataAccessor();
  lVar22 = *(long *)(LVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar22 + 0x40));
  lVar23 = (long)&local_250 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar4 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar27 = *(long *)(DVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar27 + 0x40));
  lVar24 = lVar23 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar5 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar25 = *(long *)(DVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar25 + 0x40));
  DVar26.unknown = (undefined *)(lVar24 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  IVar6 = SMAppService::mainAppService((ID)&_OBJC_CLASS___SMAppService);
  IVar6 = SMAppService::status(IVar6);
  if ((param_1 & 1) == 0) {
    if (IVar6 == 1) {
      IVar6 = SMAppService::mainAppService((ID)&_OBJC_CLASS___SMAppService);
      local_160.unknown = (undefined *)0x0;
      pSVar21 = &local_160;
      IVar6 = SMAppService::unregisterAndReturnError_(IVar6);
      if ((int)IVar6 == 0) goto LAB_1002cd86c;
    }
  }
  else if (IVar6 != 1) {
    IVar6 = SMAppService::mainAppService((ID)&_OBJC_CLASS___SMAppService);
    local_160.unknown = (undefined *)0x0;
    pSVar21 = &local_160;
    IVar6 = SMAppService::registerAndReturnError_(IVar6);
    if ((IVar6 & 1) == 0) {
LAB_1002cd86c:
      SVar7.unknown = local_160.unknown;
      local_230 = (code *)lVar27;
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
      local_160.unknown = (char *)0xd00000000000001b;
      puStack_158 = (void *)0x80000001004e4370;
      _swift_errorRetain(SVar7.unknown);
      SVar32.bridgeObject = (void *)0xa500000000000000;
      SVar32.str = (char *)0x209480e220;
      SVar39.bridgeObject = param_4;
      SVar39.str = (char *)pSVar21;
      Swift::String::append(SVar32,SVar39);
      pcVar20 = local_188;
      local_210 = SVar7.unknown;
      _swift_getErrorValue(SVar7.unknown,auStack_170);
      SVar31 = (extension_Foundation)::Swift::Error::get_localizedDescription();
      pvVar8 = SVar31.bridgeObject;
      SVar40.bridgeObject = param_4;
      SVar40.str = pcVar20;
      Swift::String::append(SVar31,SVar40);
      _swift_bridgeObjectRelease(pvVar8);
      puVar18 = puStack_158;
      SVar31.bridgeObject = puStack_158;
      SVar31.str = local_160.unknown;
      local_160.unknown = (undefined *)0x5b;
      puStack_158 = (undefined *)0xe100000000000000;
      local_1c8 = (undefined *)0x524f525245;
      local_1c0 = 0xe500000000000000;
      local_198 = 0x20;
      uStack_190 = 0xe100000000000000;
      FUN_100026df4();
      pcVar20 = (char *)0x0;
      puVar11 = PTR___type_metadata_for_Swift_String_100523a98;
      SVar32 = (extension_Foundation)::Swift::StringProtocol::_padding
                         (6,&local_198,0,PTR___type_metadata_for_Swift_String_100523a98,
                          PTR___type_metadata_for_Swift_String_100523a98,pvVar8,pvVar8);
      SVar41.bridgeObject = puVar11;
      SVar41.str = pcVar20;
      Swift::String::append(SVar32,SVar41);
      _swift_bridgeObjectRelease(SVar32.bridgeObject);
      SVar33.bridgeObject = (void *)0xe300000000000000;
      SVar33.str = (char *)0x5b205d;
      SVar42.bridgeObject = puVar11;
      SVar42.str = pcVar20;
      Swift::String::append(SVar33,SVar42);
      SVar34.bridgeObject = (void *)0xe300000000000000;
      SVar34.str = (char *)0x707061;
      SVar43.bridgeObject = puVar11;
      SVar43.str = pcVar20;
      Swift::String::append(SVar34,SVar43);
      SVar35.bridgeObject = (void *)0xe200000000000000;
      SVar35.str = (char *)0x205d;
      SVar44.bridgeObject = puVar11;
      SVar44.str = pcVar20;
      Swift::String::append(SVar35,SVar44);
      local_218 = puVar18;
      SVar45.bridgeObject = puVar11;
      SVar45.str = pcVar20;
      Swift::String::append(SVar31,SVar45);
      puVar18 = puStack_158;
      SVar7.unknown = local_160.unknown;
      local_160.unknown = (undefined *)0x282020;
      puStack_158 = (undefined *)0xe300000000000000;
      SVar36.bridgeObject = (void *)0x80000001004e4390;
      SVar36.str = (char *)0xd000000000000019;
      SVar46.bridgeObject = puVar11;
      SVar46.str = pcVar20;
      Swift::String::append(SVar36,SVar46);
      SVar37.bridgeObject = (void *)0xe100000000000000;
      SVar37.str = (char *)0x3a;
      SVar47.bridgeObject = puVar11;
      SVar47.str = pcVar20;
      Swift::String::append(SVar37,SVar47);
      local_1c8 = (undefined *)0x143;
      SVar31 = Swift::CustomStringConvertible::get_description();
      SVar48.bridgeObject = puVar11;
      SVar48.str = pcVar20;
      Swift::String::append(SVar31,SVar48);
      _swift_bridgeObjectRelease(SVar31.bridgeObject);
      SVar38.bridgeObject = (void *)0xe100000000000000;
      SVar38.str = (char *)0x29;
      SVar49.bridgeObject = puVar11;
      SVar49.str = pcVar20;
      Swift::String::append(SVar38,SVar49);
      puVar11 = puStack_158;
      SVar1.unknown = local_160.unknown;
      if (DAT_100559018 != -1) {
        _swift_once(&DAT_100559018,FUN_1002854a0);
      }
      local_238 = (code *)DAT_100559010;
      puVar17 = &DAT_100538490;
      _swift_allocObject(&DAT_100538490,0x30,7);
      local_250 = SVar7.unknown;
      *(undefined **)(puVar17 + 0x10) = SVar7.unknown;
      *(undefined **)(puVar17 + 0x18) = puVar18;
      *(undefined **)(puVar17 + 0x20) = SVar1.unknown;
      *(undefined **)(puVar17 + 0x28) = puVar11;
      local_140 = FUN_100099310;
      local_160.unknown = PTR___NSConcreteStackBlock_100521110;
      puStack_158 = (undefined *)0x42000000;
      local_150 = FUN_1000c7e7c;
      puStack_148 = &DAT_1005384a8;
      local_138 = puVar17;
      pvVar8 = __Block_copy(&local_160);
      DVar9.unknown = puVar18;
      _swift_bridgeObjectRetain();
      Dispatch::DispatchQoS::get_unspecified(DVar9);
      local_1c8 = PTR___swiftEmptyArrayStorage_100524190;
      puVar10 = &DAT_100553db0;
      FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
      puVar11 = &DAT_100561080;
      FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
      puVar12 = &DAT_100553dc0;
      FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                    PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
      local_240 = puVar12;
      local_228 = puVar11;
      puStack_220 = puVar10;
      Swift::SetAlgebra::_init(lVar24,&local_1c8,puVar11,puVar12,DVar4.unknown,puVar10);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar26);
      __Block_release(pvVar8);
      local_230 = *(code **)((long)local_230 + 8);
      (*local_230)(lVar24,DVar4.unknown);
      local_238 = *(code **)(lVar25 + 8);
      local_248.unknown = DVar26.unknown;
      (*local_238)(DVar26.unknown,DVar5.unknown);
      _swift_release(local_138);
      if (DAT_100559020 != -1) {
        _swift_once(&DAT_100559020,FUN_100285420);
      }
      LVar13 = LVar3;
      FUN_100099338(LVar3.unknown,&DAT_100558f50);
      lVar25 = lVar23;
      (**(code **)(lVar22 + 0x10))(lVar23,LVar13.unknown,LVar3.unknown);
      uVar2 = (uint)lVar25;
      static_(extension_in_os):__C.os_log_type_t.error.getter_:___C.os_log_type_t::_get_error();
      LVar13.unknown = puVar18;
      _swift_bridgeObjectRetain();
      pOVar14 = os::Logger::get_logObject(LVar13);
      pOVar15 = pOVar14;
      _os_log_type_enabled(pOVar14,uVar2 & 0xff);
      if ((int)pOVar15 == 0) {
        _swift_bridgeObjectRelease_n(puVar18,2);
      }
      else {
        puVar16 = (undefined4 *)0xc;
        _swift_slowAlloc(0xc,0xffffffffffffffff);
        puVar17 = (undefined *)0x20;
        _swift_slowAlloc(0x20,0xffffffffffffffff);
        *puVar16 = 0x8220102;
        puVar11 = local_250;
        local_160.unknown = puVar17;
        FUN_10012dbb0(local_250,puVar18,&local_160);
        *(undefined **)(puVar16 + 1) = puVar11;
        _swift_bridgeObjectRelease_n(puVar18,2);
        __os_log_impl(0x100000000,pOVar14,uVar2 & 0xff,"%{public}s",puVar16,0xc);
        FUN_100043f24(puVar17);
        _swift_slowDealloc(puVar17,0xffffffffffffffff,0xffffffffffffffff);
        _swift_slowDealloc(puVar16,0xffffffffffffffff,0xffffffffffffffff);
      }
      (**(code **)(lVar22 + 8))(lVar23,LVar3.unknown);
      _swift_bridgeObjectRelease(local_218);
      puVar11 = local_210;
      _swift_errorRelease(local_210);
      pOVar19 = (OS_dispatch_queue *)0x0;
      FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
      (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar19);
      puVar18 = &DAT_1005384e0;
      _swift_allocObject(&DAT_1005384e0,0xf1,7);
      uVar28 = unaff_x20[0x14];
      uVar30 = unaff_x20[0x17];
      uVar29 = unaff_x20[0x16];
      *(undefined8 *)(puVar18 + 0xb8) = unaff_x20[0x15];
      *(undefined8 *)(puVar18 + 0xb0) = uVar28;
      *(undefined8 *)(puVar18 + 200) = uVar30;
      *(undefined8 *)(puVar18 + 0xc0) = uVar29;
      uVar28 = unaff_x20[0x18];
      uVar30 = unaff_x20[0x1b];
      uVar29 = unaff_x20[0x1a];
      *(undefined8 *)(puVar18 + 0xd8) = unaff_x20[0x19];
      *(undefined8 *)(puVar18 + 0xd0) = uVar28;
      *(undefined8 *)(puVar18 + 0xe8) = uVar30;
      *(undefined8 *)(puVar18 + 0xe0) = uVar29;
      uVar28 = unaff_x20[0xc];
      uVar30 = unaff_x20[0xf];
      uVar29 = unaff_x20[0xe];
      *(undefined8 *)(puVar18 + 0x78) = unaff_x20[0xd];
      *(undefined8 *)(puVar18 + 0x70) = uVar28;
      *(undefined8 *)(puVar18 + 0x88) = uVar30;
      *(undefined8 *)(puVar18 + 0x80) = uVar29;
      uVar28 = unaff_x20[0x10];
      uVar30 = unaff_x20[0x13];
      uVar29 = unaff_x20[0x12];
      *(undefined8 *)(puVar18 + 0x98) = unaff_x20[0x11];
      *(undefined8 *)(puVar18 + 0x90) = uVar28;
      *(undefined8 *)(puVar18 + 0xa8) = uVar30;
      *(undefined8 *)(puVar18 + 0xa0) = uVar29;
      uVar28 = unaff_x20[4];
      uVar30 = unaff_x20[7];
      uVar29 = unaff_x20[6];
      *(undefined8 *)(puVar18 + 0x38) = unaff_x20[5];
      *(undefined8 *)(puVar18 + 0x30) = uVar28;
      *(undefined8 *)(puVar18 + 0x48) = uVar30;
      *(undefined8 *)(puVar18 + 0x40) = uVar29;
      uVar28 = unaff_x20[8];
      uVar30 = unaff_x20[0xb];
      uVar29 = unaff_x20[10];
      *(undefined8 *)(puVar18 + 0x58) = unaff_x20[9];
      *(undefined8 *)(puVar18 + 0x50) = uVar28;
      *(undefined8 *)(puVar18 + 0x68) = uVar30;
      *(undefined8 *)(puVar18 + 0x60) = uVar29;
      uVar28 = *unaff_x20;
      uVar30 = unaff_x20[3];
      uVar29 = unaff_x20[2];
      *(undefined8 *)(puVar18 + 0x18) = unaff_x20[1];
      *(undefined8 *)(puVar18 + 0x10) = uVar28;
      *(undefined8 *)(puVar18 + 0x28) = uVar30;
      *(undefined8 *)(puVar18 + 0x20) = uVar29;
      puVar18[0xf0] = param_1 & 1;
      local_1a8 = FUN_1002d6794;
      local_1c8 = PTR___NSConcreteStackBlock_100521110;
      local_1c0 = 0x42000000;
      local_1b8 = FUN_1000c7e7c;
      puStack_1b0 = &DAT_1005384f8;
      local_1a0 = puVar18;
      pvVar8 = __Block_copy(&local_1c8);
      DVar9.unknown = local_1a0;
      FUN_1002d6478(unaff_x20,&local_160);
      _swift_release();
      DVar26.unknown = local_248.unknown;
      Dispatch::DispatchQoS::get_unspecified(DVar9);
      local_160.unknown = PTR___swiftEmptyArrayStorage_100524190;
      Swift::SetAlgebra::_init(lVar24,&local_160,local_228,local_240,DVar4.unknown,puStack_220);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar26);
      __Block_release(pvVar8);
      _swift_errorRelease(puVar11);
      (*local_230)(lVar24,DVar4.unknown);
      (*local_238)(DVar26.unknown,DVar5.unknown);
      goto LAB_1002cdf18;
    }
  }
  IVar6 = SMAppService::mainAppService((ID)&_OBJC_CLASS___SMAppService);
  IVar6 = SMAppService::status(IVar6);
  puStack_158 = (undefined *)unaff_x20[0xc];
  local_160.unknown = (undefined *)unaff_x20[0xb];
  local_1c8 = (undefined *)CONCAT71(local_1c8._1_7_,IVar6 == 2);
  puVar18 = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::set_wrappedValue(&local_160,&local_1c8,puVar18);
LAB_1002cdf18:
  if (*(long *)PTR____stack_chk_guard_100521138 != local_80) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

