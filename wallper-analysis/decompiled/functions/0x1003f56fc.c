// rea decompile_all
// name: FUN_1003f56fc
// address: 0x1003f56fc
// body: available
// range: 0x1003f56fc-0x1003f5c63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003f56fc(char param_1,ulong param_2,long param_3)

{
  void *aBlock;
  undefined *puVar1;
  uint uVar2;
  DispatchWorkItemFlags DVar3;
  DispatchQoS DVar4;
  undefined *puVar5;
  DispatchQoS DVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  Logger LVar9;
  OS_os_log *pOVar10;
  OS_os_log *pOVar11;
  undefined4 *puVar12;
  undefined *puVar13;
  char *pcVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar15;
  long lVar16;
  long lVar17;
  DispatchWorkItemFlags qos;
  long lVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  undefined *local_110;
  undefined8 *local_108;
  void *local_100;
  undefined8 local_f8;
  undefined *local_f0;
  long local_e8;
  long local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  code *local_c0;
  undefined *puStack_b8;
  code *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [32];
  
  local_d8 = (undefined *)os::Logger::typeMetadataAccessor();
  local_e0 = *(long *)(local_d8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_e0 + 0x40));
  lVar16 = (long)&local_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar3 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar18 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar18 + 0x40));
  lVar17 = lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar4 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar15 = *(long *)(DVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar15 + 0x40));
  qos.unknown = (undefined *)(lVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  _swift_beginAccess(param_3 + 0x10,auStack_80,0,0);
  param_3 = param_3 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_3 != 0) {
    if (param_1 == '\x05') {
      FUN_1003f5c70();
      if (DAT_100557bb0 != -1) {
        _swift_once(&DAT_100557bb0,FUN_100233158);
      }
      FUN_100251410();
    }
    else if (param_1 == '\x06') {
      if ((param_2 & 1) != 0) {
        local_d0 = (undefined *)0x5b;
        local_c8 = (undefined *)0xe100000000000000;
        local_90 = (undefined *)0x4f464e49;
        uStack_88 = 0xe400000000000000;
        local_a0 = 0x20;
        uStack_98 = 0xe100000000000000;
        local_e8 = param_3;
        FUN_100026df4();
        pcVar14 = (char *)0x0;
        puVar8 = PTR___type_metadata_for_Swift_String_100523a98;
        SVar19 = (extension_Foundation)::Swift::StringProtocol::_padding
                           (6,&local_a0,0,PTR___type_metadata_for_Swift_String_100523a98,
                            PTR___type_metadata_for_Swift_String_100523a98,param_3,param_3);
        SVar23.bridgeObject = puVar8;
        SVar23.str = pcVar14;
        Swift::String::append(SVar19,SVar23);
        _swift_bridgeObjectRelease(SVar19.bridgeObject);
        SVar19.bridgeObject = (void *)0xe300000000000000;
        SVar19.str = (char *)0x5b205d;
        SVar24.bridgeObject = puVar8;
        SVar24.str = pcVar14;
        Swift::String::append(SVar19,SVar24);
        SVar20.bridgeObject = (void *)0xe900000000000065;
        SVar20.str = (char *)0x6c6379636566696c;
        SVar25.bridgeObject = puVar8;
        SVar25.str = pcVar14;
        Swift::String::append(SVar20,SVar25);
        SVar21.bridgeObject = (void *)0xe200000000000000;
        SVar21.str = (char *)0x205d;
        SVar26.bridgeObject = puVar8;
        SVar26.str = pcVar14;
        Swift::String::append(SVar21,SVar26);
        SVar22.bridgeObject = (void *)0x80000001004e7260;
        SVar22.str = (char *)0x100000000000002e;
        SVar27.bridgeObject = puVar8;
        SVar27.str = pcVar14;
        Swift::String::append(SVar22,SVar27);
        puVar1 = local_c8;
        puVar8 = local_d0;
        if (DAT_100559018 != -1) {
          _swift_once(&DAT_100559018,FUN_1002854a0);
        }
        local_f8 = DAT_100559010;
        puVar5 = &DAT_10053eb10;
        _swift_allocObject(&DAT_10053eb10,0x30,7);
        local_110 = puVar8;
        *(undefined **)(puVar5 + 0x10) = puVar8;
        *(undefined **)(puVar5 + 0x18) = puVar1;
        *(undefined8 *)(puVar5 + 0x20) = 0;
        *(undefined8 *)(puVar5 + 0x28) = 0xe000000000000000;
        local_b0 = thunk_FUN_100099310;
        local_d0 = PTR___NSConcreteStackBlock_100521110;
        local_c8 = (undefined *)0x42000000;
        local_c0 = FUN_1000c7e7c;
        puStack_b8 = &DAT_10053eb28;
        local_a8 = puVar5;
        local_100 = __Block_copy(&local_d0);
        DVar6.unknown = puVar1;
        _swift_bridgeObjectRetain();
        Dispatch::DispatchQoS::get_unspecified(DVar6);
        local_90 = PTR___swiftEmptyArrayStorage_100524190;
        puVar7 = &DAT_100553db0;
        FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                      PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
        puVar8 = &DAT_100561080;
        local_f0 = puVar1;
        local_108 = puVar7;
        FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
        puVar7 = &DAT_100553dc0;
        FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                      PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
        Swift::SetAlgebra::_init(lVar17,&local_90,puVar8,puVar7,DVar3.unknown,local_108);
        aBlock = local_100;
        (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
        __Block_release(aBlock);
        (**(code **)(lVar18 + 8))(lVar17,DVar3.unknown);
        (**(code **)(lVar15 + 8))(qos.unknown,DVar4.unknown);
        _swift_release(local_a8);
        if (DAT_100559020 != -1) {
          _swift_once(&DAT_100559020,FUN_100285420);
        }
        puVar1 = local_d8;
        puVar8 = local_d8;
        FUN_100099338(local_d8,&DAT_100558f50);
        lVar15 = local_e0;
        lVar17 = lVar16;
        (**(code **)(local_e0 + 0x10))(lVar16,puVar8,puVar1);
        uVar2 = (uint)lVar17;
        static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
        puVar8 = local_f0;
        LVar9.unknown = local_f0;
        _swift_bridgeObjectRetain();
        pOVar10 = os::Logger::get_logObject(LVar9);
        pOVar11 = pOVar10;
        _os_log_type_enabled(pOVar10,uVar2 & 0xff);
        if ((int)pOVar11 == 0) {
          _swift_bridgeObjectRelease_n(puVar8,2);
        }
        else {
          puVar12 = (undefined4 *)0xc;
          _swift_slowAlloc(0xc,0xffffffffffffffff);
          puVar13 = (undefined *)0x20;
          _swift_slowAlloc(0x20,0xffffffffffffffff);
          *puVar12 = 0x8220102;
          puVar5 = local_110;
          local_d0 = puVar13;
          FUN_10012dbb0(local_110,puVar8,&local_d0);
          *(undefined **)(puVar12 + 1) = puVar5;
          _swift_bridgeObjectRelease_n(puVar8,2);
          __os_log_impl(0x100000000,pOVar10,uVar2 & 0xff,"%{public}s",puVar12,0xc);
          FUN_100043f24(puVar13);
          _swift_slowDealloc(puVar13,0xffffffffffffffff,0xffffffffffffffff);
          _swift_slowDealloc(puVar12,0xffffffffffffffff,0xffffffffffffffff);
        }
        (**(code **)(lVar15 + 8))(lVar16,puVar1);
        FUN_1003f5c70();
      }
    }
    else if (param_1 == '\a') {
      if (DAT_100557eb0 != -1) {
        _swift_once(&DAT_100557eb0,FUN_10025a3bc);
      }
      FUN_10025c8f8();
    }
    else if ((param_2 & 1) != 0) {
      FUN_1003f5c70();
    }
  }
  return;
}

