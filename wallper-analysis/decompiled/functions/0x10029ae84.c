// rea decompile_all
// name: FUN_10029ae84
// address: 0x10029ae84
// body: available
// range: 0x10029ae84-0x10029b2df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10029ae84(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  ulong uVar1;
  _CocoaArrayWrapper _Var2;
  undefined *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  DispatchWorkItemFlags DVar6;
  DispatchQoS DVar7;
  _ArrayBuffer _Var8;
  ulong self;
  ID self_00;
  OS_dispatch_queue *pOVar9;
  void *aBlock;
  undefined *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined *puVar11;
  long extraout_x12;
  long lVar12;
  ulong uVar13;
  bool bVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined *local_100;
  long local_f8;
  long local_f0;
  undefined *local_e8;
  code *local_e0;
  undefined8 uStack_d8;
  DispatchWorkItemFlags local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  code *local_a8;
  undefined *local_a0;
  code *local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  DVar6 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar15 = *(long *)(DVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar15 + 0x40));
  lVar12 = (long)&local_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar7 = Dispatch::DispatchQoS::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(DVar7.unknown + -8) + 0x40));
  puVar11 = (undefined *)(lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  if (*(ID *)PTR__NSApp_1005212d0 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10029b2e0);
    (*pcVar5)();
  }
  local_d0.unknown = puVar11;
  local_c8 = extraout_x12;
  local_c0 = param_2;
  _Var8.unknown = (undefined *)objc_stub::windows(*(ID *)PTR__NSApp_1005212d0);
  FUN_100044230(0,&DAT_100557d50,&PTR__OBJC_CLASS___NSWindow_10053fb00);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if ((ulong)_Var8.unknown >> 0x3e == 0) {
    uVar17 = *(ulong *)(((ulong)_Var8.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var2.unknown = _Var8.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var8.unknown) {
      _Var2.unknown = _Var8.unknown;
    }
    uVar17 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  if (uVar17 == 0) {
    _swift_bridgeObjectRelease(_Var8.unknown);
LAB_10029b20c:
    FUN_10013fc5c(local_c0,&local_b8);
    if (local_a0 == (undefined *)0x0) {
      lVar15 = 0;
    }
    else {
      FUN_100007bd0(&local_b8,local_a0);
      lVar16 = *(long *)((long)local_a0 + -8);
      (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar16 + 0x40));
      lVar12 = (long)puVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
      (**(code **)(lVar16 + 0x10))(lVar12);
      lVar15 = lVar12;
      Swift::__bridgeAnythingToObjectiveC(lVar12,local_a0);
      (**(code **)(lVar16 + 8))(lVar12,local_a0);
      FUN_100043f24(&local_b8);
    }
    (*param_3)(param_1,param_4,lVar15);
    _swift_unknownObjectRelease(lVar15);
  }
  else {
    bVar14 = false;
    uVar13 = 0;
    local_100 = DVar7.unknown;
    local_f8 = lVar12;
    local_f0 = lVar15;
    local_e8 = DVar6.unknown;
    local_e0 = param_3;
    uStack_d8 = param_4;
    do {
      while( true ) {
        if (((ulong)_Var8.unknown & 0xc000000000000001) == 0) {
          if (*(ulong *)(((ulong)_Var8.unknown & 0xffffffffffffff8) + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10029b1ec);
            (*pcVar5)();
          }
          self = *(ulong *)(_Var8.unknown + uVar13 * 8 + 0x20);
        }
        else {
          self = uVar13;
          Swift::_ArrayBuffer::__getElementSlowPath(uVar13,_Var8);
        }
        uVar1 = uVar13 + 1;
        if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10029b1e8);
          (*pcVar5)();
        }
        self_00 = objc_stub::attachedSheet(self);
        if (self_00 != 0) break;
        uVar13 = uVar13 + 1;
        if (uVar1 == uVar17) {
          _swift_bridgeObjectRelease(_Var8.unknown);
          param_4 = uStack_d8;
          param_3 = local_e0;
          if (!bVar14) goto LAB_10029b20c;
          goto LAB_10029b078;
        }
      }
      objc_stub::endSheet_(self,self_00);
      objc_stub::orderOut_(self_00,0);
      bVar14 = true;
      uVar13 = uVar1;
    } while (uVar1 != uVar17);
    _swift_bridgeObjectRelease(_Var8.unknown);
LAB_10029b078:
    uVar4 = uStack_d8;
    pcVar5 = local_e0;
    pOVar9 = (OS_dispatch_queue *)0x0;
    FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
    (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar9);
    FUN_10013fc5c(local_c0,&local_88);
    puVar11 = &DAT_100537678;
    _swift_allocObject(&DAT_100537678,0x48,7);
    *(undefined8 *)(puVar11 + 0x30) = uStack_80;
    *(undefined8 *)(puVar11 + 0x28) = local_88;
    *(code **)(puVar11 + 0x10) = pcVar5;
    *(undefined8 *)(puVar11 + 0x18) = param_1;
    *(undefined8 *)(puVar11 + 0x20) = uVar4;
    *(undefined8 *)(puVar11 + 0x40) = uStack_70;
    *(undefined8 *)(puVar11 + 0x38) = local_78;
    local_98 = FUN_10029b68c;
    local_b8 = PTR___NSConcreteStackBlock_100521110;
    local_b0 = 0x42000000;
    local_a8 = FUN_1000c7e7c;
    local_a0 = &DAT_100537690;
    local_90 = puVar11;
    aBlock = __Block_copy(&local_b8);
    DVar7.unknown = local_90;
    _swift_unknownObjectRetain(param_1);
    _swift_release();
    DVar6.unknown = local_d0.unknown;
    DVar7 = Dispatch::DispatchQoS::get_unspecified(DVar7);
    local_b8 = PTR___swiftEmptyArrayStorage_100524190;
    FUN_1000fedc8();
    puVar11 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar10 = puVar11;
    FUN_100077ac0();
    puVar3 = local_e8;
    lVar15 = local_f8;
    Swift::SetAlgebra::_init(local_f8,&local_b8,puVar11,puVar10,local_e8,DVar7.unknown);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar6);
    __Block_release(aBlock);
    (**(code **)(local_f0 + 8))(lVar15,puVar3);
    (**(code **)(local_c8 + 8))(DVar6.unknown,local_100);
  }
  return;
}

