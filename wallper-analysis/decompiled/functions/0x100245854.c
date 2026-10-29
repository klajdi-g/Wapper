// rea decompile_all
// name: FUN_100245854
// address: 0x100245854
// body: available
// range: 0x100245854-0x100245e97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100245854(long param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  DispatchWorkItemFlags qos;
  undefined1 *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  OS_dispatch_queue *pOVar6;
  void *aBlock;
  DispatchQoS DVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  ID IVar10;
  ID IVar11;
  ulong uVar12;
  long extraout_x8;
  long extraout_x8_00;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  ID *pIVar19;
  long *plVar20;
  ulong uVar21;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  undefined *local_118;
  ulong local_110;
  long lStack_108;
  long local_100;
  DispatchWorkItemFlags local_f8;
  long local_f0;
  undefined *puStack_e8;
  undefined1 *local_e0;
  long local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  ID local_c0;
  ID local_b8;
  long local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *puStack_90;
  code *local_88;
  undefined *local_80;
  
  local_148 = param_3;
  local_d0 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_d8 = *(long *)(local_d0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_d8 + 0x40));
  local_e0 = auStack_150 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puStack_e8 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_f0 = *(long *)(puStack_e8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_f0 + 0x40));
  puVar3 = local_d0;
  local_f8.unknown =
       auStack_150 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0) +
       -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar17 = *(long *)(param_1 + 0x10);
  if (lVar17 != 0) {
    lVar18 = 0;
    plVar20 = (long *)(local_148 + _TtC7Wallper21VideoWallpaperManager::transitions);
    param_1 = param_1 + 0x20;
    local_140 = plVar20;
    local_138 = lVar17;
    local_130 = param_4;
    local_128 = param_2;
    local_120 = param_1;
    do {
      plVar1 = (long *)(param_1 + lVar18 * 0x10);
      local_100 = *plVar1;
      uVar21 = plVar1[1];
      _swift_beginAccess(param_2 + 0x10,&local_a8,0x20,0);
      lVar14 = *(long *)(param_2 + 0x10);
      lVar13 = *(long *)(lVar14 + 0x10);
      _swift_bridgeObjectRetain(uVar21);
      if (lVar13 == 0) {
LAB_100245ab8:
        _swift_endAccess(&local_a8);
      }
      else {
        _swift_bridgeObjectRetain(lVar14);
        lVar13 = local_100;
        uVar12 = uVar21;
        FUN_10000464c();
        if ((uVar12 & 1) == 0) {
          _swift_bridgeObjectRelease(lVar14);
          goto LAB_100245ab8;
        }
        lVar13 = *(long *)(*(long *)(lVar14 + 0x38) + lVar13 * 8);
        _swift_endAccess(&local_a8);
        _swift_bridgeObjectRelease(lVar14);
        _swift_beginAccess(plVar20,&local_a8,0x21,0);
        lVar14 = plVar20[1];
        puVar16 = PTR___swiftEmptyArrayStorage_100524190;
        if (*(long *)(lVar14 + 0x10) != 0) {
          _swift_bridgeObjectRetain(lVar14);
          lVar15 = local_100;
          uVar12 = uVar21;
          FUN_10000464c();
          if ((uVar12 & 1) == 0) {
            _swift_bridgeObjectRelease(lVar14);
            puVar16 = PTR___swiftEmptyArrayStorage_100524190;
          }
          else {
            lVar15 = *(long *)(*(long *)(lVar14 + 0x38) + lVar15 * 8);
            _swift_bridgeObjectRelease(lVar14);
            puVar16 = PTR___swiftEmptyArrayStorage_100524190;
            param_2 = local_128;
            if (lVar15 == lVar13) {
              lVar14 = *plVar20;
              _swift_bridgeObjectRetain(lVar14);
              lVar13 = local_100;
              uVar12 = uVar21;
              FUN_10000464c();
              _swift_bridgeObjectRelease(lVar14);
              puVar16 = PTR___swiftEmptyArrayStorage_100524190;
              param_2 = local_128;
              if ((uVar12 & 1) != 0) {
                iVar4 = (int)*plVar20;
                _swift_isUniquelyReferenced_nonNull_native();
                local_b0 = *plVar20;
                *plVar20 = -0x8000000000000000;
                if (iVar4 == 0) {
                  FUN_1001cb080();
                }
                lVar14 = local_b0;
                _swift_bridgeObjectRelease
                          (*(undefined8 *)(*(long *)(local_b0 + 0x30) + lVar13 * 0x10 + 8));
                puVar16 = *(undefined **)(*(long *)(lVar14 + 0x38) + lVar13 * 8);
                thunk_FUN_1001d1dc4(lVar13,lVar14);
                *plVar20 = lVar14;
                param_2 = local_128;
              }
            }
          }
        }
        _swift_endAccess(&local_a8);
        lVar13 = *(long *)(puVar16 + 0x10);
        if (lVar13 == 0) {
          _swift_bridgeObjectRelease(puVar16);
          param_1 = local_120;
        }
        else {
          uVar5 = 0;
          local_110 = uVar21;
          lStack_108 = lVar18;
          FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
          pIVar19 = (ID *)(puVar16 + 0x30);
          local_118 = puVar16;
          local_c8 = uVar5;
          do {
            IVar11 = pIVar19[-2];
            local_b8 = pIVar19[-1];
            IVar10 = *pIVar19;
            if (local_b8 == 0) {
              local_b8 = 0;
            }
            else {
              objc_stub::pause(local_b8);
            }
            pIVar19 = pIVar19 + 3;
            objc_stub::disableLooping(IVar10);
            pOVar6 = (OS_dispatch_queue *)objc_stub::orderOut_(IVar11,0);
            (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar6);
            puVar16 = &DAT_100534ff0;
            _swift_allocObject(&DAT_100534ff0,0x18,7);
            *(ID *)(puVar16 + 0x10) = IVar11;
            local_88 = thunk_FUN_1002593e4;
            local_a8 = PTR___NSConcreteStackBlock_100521110;
            local_a0 = 0x42000000;
            local_98 = FUN_1000c7e7c;
            puStack_90 = &DAT_100535008;
            local_80 = puVar16;
            aBlock = __Block_copy(&local_a8);
            DVar7.unknown = local_80;
            local_c0 = IVar11;
            _swift_release();
            qos.unknown = local_f8.unknown;
            Dispatch::DispatchQoS::get_unspecified(DVar7);
            local_a8 = PTR___swiftEmptyArrayStorage_100524190;
            puVar8 = &DAT_100553db0;
            FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                          PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8
                         );
            puVar16 = &DAT_100561080;
            FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
            puVar9 = puVar16;
            FUN_100077ac0();
            puVar2 = local_e0;
            Swift::SetAlgebra::_init(local_e0,&local_a8,puVar16,puVar9,puVar3,puVar8);
            (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
            __Block_release(aBlock);
            (**(code **)(local_d8 + 8))(puVar2,puVar3);
            (**(code **)(local_f0 + 8))(qos.unknown,puStack_e8);
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
          _swift_bridgeObjectRelease(local_118);
          param_2 = local_128;
          param_4 = local_130;
          lVar17 = local_138;
          param_1 = local_120;
          lVar18 = lStack_108;
          plVar20 = local_140;
          uVar21 = local_110;
        }
      }
      _swift_beginAccess(param_4 + 0x10,&local_a8,0x20,0);
      lVar13 = *(long *)(param_4 + 0x10);
      if (*(long *)(lVar13 + 0x10) == 0) {
LAB_100245da8:
        _swift_endAccess(&local_a8);
      }
      else {
        _swift_bridgeObjectRetain(lVar13);
        lVar14 = local_100;
        uVar12 = uVar21;
        FUN_10000464c();
        if ((uVar12 & 1) == 0) {
          _swift_bridgeObjectRelease(lVar13);
          goto LAB_100245da8;
        }
        IVar11 = *(ID *)(*(long *)(lVar13 + 0x38) + lVar14 * 8);
        _swift_endAccess(&local_a8);
        _swift_bridgeObjectRelease(lVar13);
        objc_stub::setOpaque_(IVar11,1);
      }
      _swift_beginAccess(param_4 + 0x10,&local_a8,0x20,0);
      lVar13 = *(long *)(param_4 + 0x10);
      if (*(long *)(lVar13 + 0x10) == 0) {
LAB_100245968:
        _swift_bridgeObjectRelease(uVar21);
        _swift_endAccess(&local_a8);
      }
      else {
        _swift_bridgeObjectRetain(lVar13);
        lVar14 = local_100;
        uVar12 = uVar21;
        FUN_10000464c();
        if ((uVar12 & 1) == 0) {
          _swift_bridgeObjectRelease(lVar13);
          goto LAB_100245968;
        }
        IVar11 = *(ID *)(*(long *)(lVar13 + 0x38) + lVar14 * 8);
        _swift_endAccess(&local_a8);
        _swift_bridgeObjectRelease(lVar13);
        _swift_bridgeObjectRelease(uVar21);
        IVar10 = NSColor::blackColor((ID)&_OBJC_CLASS___NSColor);
        objc_stub::setBackgroundColor_(IVar11,IVar10);
      }
      lVar18 = lVar18 + 1;
    } while (lVar18 != lVar17);
  }
  FUN_100255818();
  FUN_10023bec0(0,0);
  return;
}

