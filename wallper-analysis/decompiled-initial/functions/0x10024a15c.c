// rea decompile_all
// name: FUN_10024a15c
// address: 0x10024a15c
// body: available
// range: 0x10024a15c-0x10024a653 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10024a15c(long param_1,long param_2,long param_3)

{
  long *plVar1;
  ID self;
  DispatchWorkItemFlags qos;
  int iVar2;
  undefined8 uVar3;
  OS_dispatch_queue *pOVar4;
  void *aBlock;
  DispatchQoS DVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  ID self_00;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  ID *pIVar15;
  long lVar16;
  long lVar17;
  long local_130;
  long local_128;
  long *local_120;
  undefined *local_118;
  long local_110;
  long local_108;
  undefined *local_100;
  DispatchWorkItemFlags local_f8;
  long local_f0;
  undefined *puStack_e8;
  long local_e0;
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
  
  local_d0 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_d8 = *(long *)(local_d0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_d8 + 0x40));
  lVar16 = (long)&local_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_e0 = lVar16;
  puStack_e8 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_f0 = *(long *)(puStack_e8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_f0 + 0x40));
  local_f8.unknown = (undefined *)(lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  lVar16 = *(long *)(param_1 + 0x10);
  if (lVar16 != 0) {
    lVar17 = 0;
    plVar13 = (long *)(param_3 + _TtC7Wallper21VideoWallpaperManager::transitions);
    local_108 = param_1 + 0x20;
    local_130 = lVar16;
    local_128 = param_2;
    local_120 = plVar13;
    do {
      plVar1 = (long *)(local_108 + lVar17 * 0x10);
      lVar12 = *plVar1;
      puVar9 = (undefined *)plVar1[1];
      _swift_beginAccess(param_2 + 0x10,&local_a8,0x20,0);
      lVar10 = *(long *)(param_2 + 0x10);
      lVar11 = *(long *)(lVar10 + 0x10);
      local_100 = puVar9;
      _swift_bridgeObjectRetain(puVar9);
      if (lVar11 == 0) {
LAB_10024a250:
        _swift_endAccess(&local_a8);
      }
      else {
        _swift_bridgeObjectRetain(lVar10);
        lVar11 = lVar12;
        puVar9 = local_100;
        FUN_10000464c();
        if (((ulong)puVar9 & 1) == 0) {
          _swift_bridgeObjectRelease(lVar10);
          goto LAB_10024a250;
        }
        lVar11 = *(long *)(*(long *)(lVar10 + 0x38) + lVar11 * 8);
        _swift_endAccess(&local_a8);
        _swift_bridgeObjectRelease(lVar10);
        _swift_beginAccess(plVar13,&local_a8,0x21,0);
        lVar10 = plVar13[1];
        puVar9 = PTR___swiftEmptyArrayStorage_100524190;
        if (*(long *)(lVar10 + 0x10) != 0) {
          _swift_bridgeObjectRetain(lVar10);
          lVar14 = lVar12;
          puVar9 = local_100;
          FUN_10000464c();
          if (((ulong)puVar9 & 1) == 0) {
            _swift_bridgeObjectRelease(lVar10);
            puVar9 = PTR___swiftEmptyArrayStorage_100524190;
          }
          else {
            lVar14 = *(long *)(*(long *)(lVar10 + 0x38) + lVar14 * 8);
            _swift_bridgeObjectRelease(lVar10);
            plVar13 = local_120;
            puVar9 = PTR___swiftEmptyArrayStorage_100524190;
            if (lVar14 == lVar11) {
              lVar10 = *local_120;
              _swift_bridgeObjectRetain(lVar10);
              puVar8 = local_100;
              FUN_10000464c();
              _swift_bridgeObjectRelease(lVar10);
              puVar9 = PTR___swiftEmptyArrayStorage_100524190;
              if (((ulong)puVar8 & 1) != 0) {
                iVar2 = (int)*plVar13;
                _swift_isUniquelyReferenced_nonNull_native();
                local_b0 = *plVar13;
                *plVar13 = -0x8000000000000000;
                if (iVar2 == 0) {
                  FUN_1001cb080();
                }
                lVar10 = local_b0;
                _swift_bridgeObjectRelease
                          (*(undefined8 *)(*(long *)(local_b0 + 0x30) + lVar12 * 0x10 + 8));
                puVar9 = *(undefined **)(*(long *)(lVar10 + 0x38) + lVar12 * 8);
                thunk_FUN_1001d1dc4(lVar12,lVar10);
                *plVar13 = lVar10;
              }
            }
          }
        }
        _swift_endAccess(&local_a8);
        lVar12 = *(long *)(puVar9 + 0x10);
        if (lVar12 == 0) {
          _swift_bridgeObjectRelease(local_100);
          local_100 = puVar9;
        }
        else {
          uVar3 = 0;
          local_110 = lVar17;
          FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
          pIVar15 = (ID *)(puVar9 + 0x30);
          local_118 = puVar9;
          local_c8 = uVar3;
          do {
            self = pIVar15[-2];
            local_b8 = pIVar15[-1];
            self_00 = *pIVar15;
            if (local_b8 == 0) {
              local_b8 = 0;
            }
            else {
              objc_stub::pause(local_b8);
            }
            pIVar15 = pIVar15 + 3;
            local_c0 = self_00;
            objc_stub::disableLooping(self_00);
            pOVar4 = (OS_dispatch_queue *)objc_stub::orderOut_(self,0);
            (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar4);
            puVar9 = &DAT_1005349b0;
            _swift_allocObject(&DAT_1005349b0,0x18,7);
            *(ID *)(puVar9 + 0x10) = self;
            local_88 = thunk_FUN_1002593e4;
            local_a8 = PTR___NSConcreteStackBlock_100521110;
            local_a0 = 0x42000000;
            local_98 = FUN_1000c7e7c;
            puStack_90 = &DAT_1005349c8;
            local_80 = puVar9;
            aBlock = __Block_copy(&local_a8);
            DVar5.unknown = local_80;
            _swift_release();
            qos.unknown = local_f8.unknown;
            Dispatch::DispatchQoS::get_unspecified(DVar5);
            local_a8 = PTR___swiftEmptyArrayStorage_100524190;
            puVar6 = &DAT_100553db0;
            FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                          PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8
                         );
            puVar9 = &DAT_100561080;
            FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
            puVar7 = puVar9;
            FUN_100077ac0();
            puVar8 = local_d0;
            lVar16 = local_e0;
            Swift::SetAlgebra::_init(local_e0,&local_a8,puVar9,puVar7,local_d0,puVar6);
            (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
            __Block_release(aBlock);
            (**(code **)(local_d8 + 8))(lVar16,puVar8);
            (**(code **)(local_f0 + 8))(qos.unknown,puStack_e8);
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
          _swift_bridgeObjectRelease(local_100);
          plVar13 = local_120;
          param_2 = local_128;
          lVar16 = local_130;
          lVar17 = local_110;
          local_100 = local_118;
        }
      }
      lVar17 = lVar17 + 1;
      _swift_bridgeObjectRelease(local_100);
    } while (lVar17 != lVar16);
  }
  FUN_10023bec0(0,0);
  return;
}

