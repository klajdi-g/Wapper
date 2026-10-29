// rea decompile_all
// name: FUN_100247cd8
// address: 0x100247cd8
// body: available
// range: 0x100247cd8-0x1002481c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100247cd8(long param_1,long param_2,long param_3)

{
  long *plVar1;
  ID self;
  DispatchWorkItemFlags qos;
  undefined1 *puVar2;
  int iVar3;
  undefined8 uVar4;
  OS_dispatch_queue *pOVar5;
  undefined *puVar6;
  void *aBlock;
  DispatchQoS DVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  ID self_00;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  ID *pIVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  undefined1 auStack_140 [8];
  long local_138;
  long local_130;
  long *local_128;
  long local_120;
  long local_118;
  undefined *local_110;
  undefined *local_108;
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
  
  local_138 = param_3;
  local_d0 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_d8 = *(long *)(local_d0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_d8 + 0x40));
  local_e0 = auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puStack_e8 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_f0 = *(long *)(puStack_e8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_f0 + 0x40));
  local_f8.unknown =
       auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0) +
       -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar16 = *(long *)(param_1 + 0x10);
  if (lVar16 != 0) {
    lVar17 = 0;
    plVar18 = (long *)(local_138 + _TtC7Wallper21VideoWallpaperManager::transitions);
    param_1 = param_1 + 0x20;
    local_130 = param_1;
    local_128 = plVar18;
    local_120 = lVar16;
    local_118 = param_2;
    do {
      plVar1 = (long *)(param_1 + lVar17 * 0x10);
      lVar14 = *plVar1;
      puVar6 = (undefined *)plVar1[1];
      _swift_beginAccess(param_2 + 0x10,&local_a8,0x20,0);
      lVar10 = *(long *)(param_2 + 0x10);
      lVar11 = *(long *)(lVar10 + 0x10);
      _swift_bridgeObjectRetain(puVar6);
      if (lVar11 == 0) {
LAB_100247ddc:
        _swift_endAccess(&local_a8);
      }
      else {
        _swift_bridgeObjectRetain(lVar10);
        lVar11 = lVar14;
        puVar12 = puVar6;
        FUN_10000464c();
        if (((ulong)puVar12 & 1) == 0) {
          _swift_bridgeObjectRelease(lVar10);
          goto LAB_100247ddc;
        }
        lVar11 = *(long *)(*(long *)(lVar10 + 0x38) + lVar11 * 8);
        _swift_endAccess(&local_a8);
        _swift_bridgeObjectRelease(lVar10);
        _swift_beginAccess(plVar18,&local_a8,0x21,0);
        lVar10 = plVar18[1];
        puVar12 = PTR___swiftEmptyArrayStorage_100524190;
        if (*(long *)(lVar10 + 0x10) != 0) {
          _swift_bridgeObjectRetain(lVar10);
          lVar13 = lVar14;
          puVar12 = puVar6;
          FUN_10000464c();
          if (((ulong)puVar12 & 1) == 0) {
            _swift_bridgeObjectRelease(lVar10);
            puVar12 = PTR___swiftEmptyArrayStorage_100524190;
          }
          else {
            lVar13 = *(long *)(*(long *)(lVar10 + 0x38) + lVar13 * 8);
            _swift_bridgeObjectRelease(lVar10);
            puVar12 = PTR___swiftEmptyArrayStorage_100524190;
            if (lVar13 == lVar11) {
              lVar10 = *plVar18;
              _swift_bridgeObjectRetain(lVar10);
              puVar9 = puVar6;
              FUN_10000464c();
              _swift_bridgeObjectRelease(lVar10);
              puVar12 = PTR___swiftEmptyArrayStorage_100524190;
              if (((ulong)puVar9 & 1) != 0) {
                iVar3 = (int)*plVar18;
                _swift_isUniquelyReferenced_nonNull_native();
                local_b0 = *plVar18;
                *plVar18 = -0x8000000000000000;
                if (iVar3 == 0) {
                  FUN_1001cb080();
                }
                lVar10 = local_b0;
                _swift_bridgeObjectRelease
                          (*(undefined8 *)(*(long *)(local_b0 + 0x30) + lVar14 * 0x10 + 8));
                puVar12 = *(undefined **)(*(long *)(lVar10 + 0x38) + lVar14 * 8);
                thunk_FUN_1001d1dc4(lVar14,lVar10);
                *plVar18 = lVar10;
              }
            }
          }
        }
        _swift_endAccess(&local_a8);
        lVar14 = *(long *)(puVar12 + 0x10);
        if (lVar14 == 0) {
          _swift_bridgeObjectRelease(puVar6);
          puVar6 = puVar12;
        }
        else {
          uVar4 = 0;
          local_108 = puVar6;
          local_100 = lVar17;
          FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
          pIVar15 = (ID *)(puVar12 + 0x30);
          local_110 = puVar12;
          local_c8 = uVar4;
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
            objc_stub::disableLooping(self_00);
            pOVar5 = (OS_dispatch_queue *)objc_stub::orderOut_(self,0);
            (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar5);
            puVar6 = &DAT_100534be0;
            _swift_allocObject(&DAT_100534be0,0x18,7);
            *(ID *)(puVar6 + 0x10) = self;
            local_88 = thunk_FUN_1002593e4;
            local_a8 = PTR___NSConcreteStackBlock_100521110;
            local_a0 = 0x42000000;
            local_98 = FUN_1000c7e7c;
            puStack_90 = &DAT_100534bf8;
            local_80 = puVar6;
            aBlock = __Block_copy(&local_a8);
            DVar7.unknown = local_80;
            local_c0 = self;
            _swift_release();
            qos.unknown = local_f8.unknown;
            Dispatch::DispatchQoS::get_unspecified(DVar7);
            local_a8 = PTR___swiftEmptyArrayStorage_100524190;
            puVar8 = &DAT_100553db0;
            FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                          PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8
                         );
            puVar6 = &DAT_100561080;
            FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
            puVar9 = puVar6;
            FUN_100077ac0();
            puVar12 = local_d0;
            puVar2 = local_e0;
            Swift::SetAlgebra::_init(local_e0,&local_a8,puVar6,puVar9,local_d0,puVar8);
            (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
            __Block_release(aBlock);
            (**(code **)(local_d8 + 8))(puVar2,puVar12);
            (**(code **)(local_f0 + 8))(qos.unknown,puStack_e8);
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
          _swift_bridgeObjectRelease(local_108);
          param_2 = local_118;
          lVar16 = local_120;
          lVar17 = local_100;
          plVar18 = local_128;
          param_1 = local_130;
          puVar6 = local_110;
        }
      }
      lVar17 = lVar17 + 1;
      _swift_bridgeObjectRelease(puVar6);
    } while (lVar17 != lVar16);
  }
  FUN_100255818();
  FUN_10023bec0(0,0);
  return;
}

