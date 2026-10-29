// rea decompile_all
// name: FUN_1003fc678
// address: 0x1003fc678
// body: available
// range: 0x1003fc678-0x1003fcb0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003fc678(void)

{
  undefined8 uVar1;
  long lVar2;
  DispatchWorkItemFlags DVar3;
  DispatchTime DVar4;
  undefined *puVar5;
  undefined *puVar6;
  OS_dispatch_queue *pOVar7;
  DispatchTime DVar8;
  void *aBlock;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  code *pcVar12;
  DispatchQoS unaff_x20;
  DispatchQoS qos;
  long lVar13;
  DispatchTime DVar14;
  undefined *local_c0;
  DispatchWorkItemFlags local_b8;
  long local_b0;
  undefined *puStack_a8;
  long local_a0;
  undefined *local_98;
  undefined *local_90;
  long local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  DVar3 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_a0 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_a0 + 0x40));
  puVar5 = (undefined *)((long)&local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_b8.unknown = puVar5;
  puStack_a8 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_b0 = *(long *)(puStack_a8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_b0 + 0x40));
  qos.unknown = puVar5 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar4 = Dispatch::DispatchTime::typeMetadataAccessor();
  lVar13 = *(long *)(DVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar13 + 0x40));
  DVar14.unknown = qos.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  if (DAT_1005564c0 != -1) {
    _swift_once(&DAT_1005564c0,FUN_10017806c);
  }
  uVar11 = DAT_100577cc0;
  puVar5 = &DAT_100436ea0;
  _swift_getKeyPath(&DAT_100436ea0);
  puVar6 = &DAT_100436ec8;
  _swift_getKeyPath(&DAT_100436ec8);
  Combine::Published::_get_subscript(&local_90,uVar11,puVar5,puVar6);
  _swift_release(puVar5);
  _swift_release(puVar6);
  if (local_88 == 0) {
    uVar11 = 1;
  }
  else {
    FUN_10002a3bc(local_90,local_88,local_80,puStack_78,local_70,local_68);
    FUN_1001a61d8();
    if (DAT_100555688 != -1) {
      _swift_once(&DAT_100555688,FUN_1001646dc);
    }
    lVar2 = DAT_100577ca8;
    uVar11 = *(undefined8 *)(DAT_100577ca8 + 0x10);
    uVar1 = *(undefined8 *)(DAT_100577ca8 + 0x18);
    *(undefined8 *)(DAT_100577ca8 + 0x10) = 0;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    FUN_10002f6dc(uVar11,uVar1);
    FUN_100168078();
    if (DAT_100557eb0 != -1) {
      _swift_once(&DAT_100557eb0,FUN_10025a3bc);
    }
    if (*(ID *)(DAT_100577d68 + _TtC7Wallper13WindowManager::mainWindow) == 0) {
      if (*(ID *)PTR__NSApp_1005212d0 == 0) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x1003fcb10);
        (*pcVar12)();
      }
      objc_stub::setActivationPolicy_(*(ID *)PTR__NSApp_1005212d0,1);
    }
    else {
      objc_stub::close(*(ID *)(DAT_100577d68 + _TtC7Wallper13WindowManager::mainWindow));
    }
    local_c0 = DVar3.unknown;
    FUN_10017ac3c(PTR___swiftEmptySetSingleton_1005241a0,1);
    if (DAT_100557360 != -1) {
      _swift_once(&DAT_100557360,FUN_1001f067c);
    }
    puVar5 = &DAT_10053ed40;
    _swift_allocObject(&DAT_10053ed40,0x18,7);
    *(undefined **)(puVar5 + 0x10) = unaff_x20.unknown;
    FUN_100200ce4(0x4020000000000000,FUN_1003f83a4,0,FUN_1003fd4f8,puVar5);
    _swift_release(puVar5);
    pOVar7 = (OS_dispatch_queue *)0x0;
    FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
    DVar8.unknown = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar7);
    Dispatch::DispatchTime::now(DVar8);
    Dispatch::__infix(DVar14,10.0);
    pcVar12 = *(code **)(lVar13 + 8);
    (*pcVar12)(DVar14.unknown,DVar4.unknown);
    puVar5 = &DAT_10053ed68;
    _swift_allocObject(&DAT_10053ed68,0x18,7);
    *(undefined **)(puVar5 + 0x10) = unaff_x20.unknown;
    local_70 = thunk_FUN_1003fd504;
    local_90 = PTR___NSConcreteStackBlock_100521110;
    local_88 = 0x42000000;
    local_80 = FUN_1000c7e7c;
    puStack_78 = &DAT_10053ed80;
    local_68 = puVar5;
    aBlock = __Block_copy(&local_90);
    Dispatch::DispatchQoS::get_unspecified(unaff_x20);
    local_98 = PTR___swiftEmptyArrayStorage_100524190;
    puVar9 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar5 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar10 = &DAT_100553dc0;
    FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
    DVar3.unknown = local_b8.unknown;
    puVar6 = local_c0;
    Swift::SetAlgebra::_init(local_b8.unknown,&local_98,puVar5,puVar10,local_c0,puVar9);
    (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter
              ((DispatchTime)(DVar14.unknown + -extraout_x12),qos,DVar3);
    __Block_release(aBlock);
    (**(code **)(local_a0 + 8))(DVar3.unknown,puVar6);
    (**(code **)(local_b0 + 8))(qos.unknown,puStack_a8);
    (*pcVar12)(DVar14.unknown + -extraout_x12,DVar4.unknown);
    _swift_release(local_68);
    uVar11 = 2;
  }
  return uVar11;
}

