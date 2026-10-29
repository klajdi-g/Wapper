// rea decompile_all
// name: FUN_100198758
// address: 0x100198758
// body: available
// range: 0x100198758-0x10019903f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100198878 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100198758(long param_1)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  char *pcVar4;
  Task TVar5;
  TaskPriority TVar6;
  MainActor *this;
  MainActor *pMVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  _StringGuts *p_Var10;
  long extraout_x8;
  undefined8 uVar11;
  _StringGuts _Var12;
  _StringGuts _Var13;
  undefined *puVar14;
  MainActor *unaff_x20;
  undefined *puVar15;
  _StringGuts _Var16;
  _StringGuts _Var17;
  _StringGuts _Var18;
  _StringGuts _Var19;
  _StringGuts _Var20;
  _StringGuts _Var21;
  undefined1 auStack_c0 [8];
  _StringGuts local_b8;
  _StringGuts _Stack_b0;
  char local_a8 [40];
  _StringGuts local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long local_68;
  
  puVar14 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (((byte)unaff_x20[_TtC7Wallper17NowPlayingManager::mediaRemoteActive] & 1) == 0) {
    puVar14 = &DAT_100429b50;
    _swift_getKeyPath(&DAT_100429b50);
    puVar15 = &DAT_100429b78;
    _swift_getKeyPath(&DAT_100429b78);
    Combine::Published::_get_subscript(local_a8);
    _swift_release(puVar14);
    _swift_release(puVar15);
    if (local_a8[0] == '\x01') {
      uVar3 = 0x73754d656c707061;
      FUN_10017e6a4(0x73754d656c707061,0xea00000000006369);
      if (((uVar3 & 1) != 0) && (param_1 != 0)) {
        local_b8.unknown = (undefined *)0x5320726579616c50;
        _Stack_b0.unknown = (undefined *)0xec00000065746174;
        puVar14 = PTR___type_metadata_for_Swift_String_100523a98;
        Swift::AnyHashable::_init
                  (local_a8,uVar3,PTR___type_metadata_for_Swift_String_100523a98,
                   PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100523aa8
                  );
        if (*(long *)(param_1 + 0x10) == 0) {
          uStack_78 = 0;
          local_80.unknown = (undefined *)0x0;
          local_68 = 0;
          uStack_70 = 0;
        }
        else {
          _swift_bridgeObjectRetain(param_1);
          pcVar4 = local_a8;
          FUN_10000488c(pcVar4);
          if (((ulong)puVar14 & 1) == 0) {
            _swift_bridgeObjectRelease(param_1);
            uStack_78 = 0;
            local_80.unknown = (undefined *)0x0;
            local_68 = 0;
            uStack_70 = 0;
          }
          else {
            FUN_1000280d4(*(long *)(param_1 + 0x38) + (long)pcVar4 * 0x20,&local_80);
            _swift_bridgeObjectRelease(param_1);
          }
        }
        FUN_100007dd4(local_a8);
        puVar14 = PTR___type_metadata_for_Any_100524178;
        if (local_68 == 0) {
          FUN_10002a29c(&local_80,&DAT_10054d428,&DAT_100420300);
        }
        else {
          TVar5.unknown = (undefined *)&local_b8;
          _swift_dynamicCast(TVar5.unknown,&local_80,PTR___type_metadata_for_Any_100524178 + 8,
                             PTR___type_metadata_for_Swift_String_100523a98,6);
          _Var16.unknown = _Stack_b0.unknown;
          _Var17.unknown = local_b8.unknown;
          if ((int)TVar5.unknown != 0) {
            if (((((local_b8.unknown == (undefined *)0x646573756150) &&
                  (_Stack_b0.unknown == (undefined *)0xe600000000000000)) ||
                 (bVar2 = Swift::_stringCompareWithSmolCheck
                                    (local_b8,_Stack_b0,(_StringComparisonResult)0x50), bVar2)) ||
                ((_Var17.unknown == (undefined *)0x646570706f7453 &&
                 (_Var16.unknown == (undefined *)0xe700000000000000)))) ||
               (bVar2 = Swift::_stringCompareWithSmolCheck
                                  (_Var17,_Var16,(_StringComparisonResult)0x53), bVar2)) {
              _swift_bridgeObjectRelease(_Var16.unknown);
              unaff_x20[_TtC7Wallper17NowPlayingManager::amIsPlaying] = (MainActor)0x0;
              lVar1 = _TtC7Wallper17NowPlayingManager::amPauseTask;
              puVar14 = *(undefined **)(unaff_x20 + _TtC7Wallper17NowPlayingManager::amPauseTask);
              if (puVar14 != (undefined *)0x0) {
                TVar5.unknown = puVar14;
                _swift_retain();
                Swift::Task::cancel(TVar5);
                _swift_release(puVar14);
              }
              puVar14 = &DAT_100429be0;
              _swift_getKeyPath(&DAT_100429be0);
              puVar15 = &DAT_100429c08;
              _swift_getKeyPath(&DAT_100429c08);
              Combine::Published::_get_subscript(local_a8,unaff_x20,puVar14,puVar15);
              _swift_release(puVar14);
              _swift_release(puVar15);
              if (local_a8[0] == '\0') {
                TVar6 = Swift::TaskPriority::typeMetadataAccessor();
                (**(code **)(*(long *)(TVar6.unknown + -8) + 0x38))
                          (auStack_c0 + -extraout_x8,1,1,TVar6.unknown);
                this = Swift::MainActor::typeMetadataAccessor();
                puVar14 = PTR_typeMetadataAccessor_1005246d8;
                pMVar7 = unaff_x20;
                _swift_retain();
                pMVar7 = Swift::MainActor::get_shared(this,pMVar7);
                puVar8 = &DAT_100558b80;
                FUN_1000036d0(&DAT_100558b80,puVar14,
                              PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
                puVar14 = &DAT_100530a48;
                _swift_allocObject(&DAT_100530a48,0x28,7);
                *(MainActor **)(puVar14 + 0x10) = pMVar7;
                *(undefined8 **)(puVar14 + 0x18) = puVar8;
                *(MainActor **)(puVar14 + 0x20) = unaff_x20;
                uVar9 = 0;
                FUN_1001b1e74(0,0,auStack_c0 + -extraout_x8,&DAT_10042a018,puVar14);
                uVar11 = *(undefined8 *)(unaff_x20 + lVar1);
                *(undefined8 *)(unaff_x20 + lVar1) = uVar9;
                _swift_release(uVar11);
              }
            }
            else {
              if ((_Var17.unknown == (undefined *)0x676e6979616c50) &&
                 (_Var16.unknown == (undefined *)0xe700000000000000)) {
                _swift_bridgeObjectRelease(0xe700000000000000);
              }
              else {
                bVar2 = Swift::_stringCompareWithSmolCheck
                                  (_Var17,_Var16,(_StringComparisonResult)0x50);
                _swift_bridgeObjectRelease(_Var16.unknown);
                if (!bVar2) {
                  return;
                }
              }
              puVar15 = *(undefined **)(unaff_x20 + _TtC7Wallper17NowPlayingManager::amPauseTask);
              if (puVar15 != (undefined *)0x0) {
                TVar5.unknown = puVar15;
                _swift_retain();
                Swift::Task::cancel(TVar5);
                _swift_release(puVar15);
              }
              unaff_x20[_TtC7Wallper17NowPlayingManager::amIsPlaying] = (MainActor)0x1;
              _swift_getKeyPath(&DAT_100429b98);
              _swift_getKeyPath(&DAT_100429bc0);
              local_a8[0] = '\x01';
              _swift_retain(unaff_x20);
              pMVar7 = unaff_x20;
              Combine::Published::_set_subscript();
              _swift_getKeyPath(&DAT_100429be0);
              _swift_getKeyPath(&DAT_100429c08);
              local_a8[0] = '\0';
              _swift_retain(pMVar7);
              Combine::Published::_set_subscript();
              local_80.unknown = (undefined *)0x656d614e;
              uStack_78 = 0xe400000000000000;
              puVar15 = PTR___type_metadata_for_Swift_String_100523a98;
              Swift::AnyHashable::_init
                        (local_a8,TVar5.unknown,PTR___type_metadata_for_Swift_String_100523a98,
                         PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100523aa8
                        );
              if (*(long *)(param_1 + 0x10) == 0) {
                uStack_78 = 0;
                local_80.unknown = (undefined *)0x0;
                local_68 = 0;
                uStack_70 = 0;
              }
              else {
                _swift_bridgeObjectRetain(param_1);
                pcVar4 = local_a8;
                FUN_10000488c(pcVar4);
                if (((ulong)puVar15 & 1) == 0) {
                  _swift_bridgeObjectRelease(param_1);
                  uStack_78 = 0;
                  local_80.unknown = (undefined *)0x0;
                  local_68 = 0;
                  uStack_70 = 0;
                  pMVar7 = unaff_x20;
                }
                else {
                  FUN_1000280d4(*(long *)(param_1 + 0x38) + (long)pcVar4 * 0x20,&local_80);
                  _swift_bridgeObjectRelease(param_1);
                  pMVar7 = unaff_x20;
                }
              }
              FUN_100007dd4(local_a8);
              if (local_68 == 0) {
                p_Var10 = &local_80;
                FUN_10002a29c(p_Var10,&DAT_10054d428,&DAT_100420300);
                _Var16.unknown = (undefined *)0x0;
                _Var17.unknown = (undefined *)0x0;
              }
              else {
                p_Var10 = &local_b8;
                _swift_dynamicCast(p_Var10,&local_80,puVar14 + 8,
                                   PTR___type_metadata_for_Swift_String_100523a98,6);
                _Var16.unknown = _Stack_b0.unknown;
                _Var17.unknown = local_b8.unknown;
                if ((int)p_Var10 == 0) {
                  _Var17.unknown = (undefined *)0x0;
                  _Var16.unknown = (undefined *)0x0;
                }
              }
              local_80.unknown = (undefined *)0x747369747241;
              uStack_78 = 0xe600000000000000;
              puVar15 = PTR___type_metadata_for_Swift_String_100523a98;
              Swift::AnyHashable::_init
                        (local_a8,p_Var10,PTR___type_metadata_for_Swift_String_100523a98,
                         PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100523aa8
                        );
              if (*(long *)(param_1 + 0x10) == 0) {
                uStack_78 = 0;
                local_80.unknown = (undefined *)0x0;
                local_68 = 0;
                uStack_70 = 0;
              }
              else {
                _swift_bridgeObjectRetain(param_1);
                pcVar4 = local_a8;
                FUN_10000488c(pcVar4);
                if (((ulong)puVar15 & 1) == 0) {
                  _swift_bridgeObjectRelease(param_1);
                  uStack_78 = 0;
                  local_80.unknown = (undefined *)0x0;
                  local_68 = 0;
                  uStack_70 = 0;
                  pMVar7 = unaff_x20;
                }
                else {
                  FUN_1000280d4(*(long *)(param_1 + 0x38) + (long)pcVar4 * 0x20,&local_80);
                  _swift_bridgeObjectRelease(param_1);
                  pMVar7 = unaff_x20;
                }
              }
              FUN_100007dd4(local_a8);
              if (local_68 == 0) {
                p_Var10 = &local_80;
                FUN_10002a29c(p_Var10,&DAT_10054d428,&DAT_100420300);
                _Var18.unknown = (undefined *)0x0;
                _Var19.unknown = (undefined *)0x0;
              }
              else {
                p_Var10 = &local_b8;
                _swift_dynamicCast(p_Var10,&local_80,puVar14 + 8,
                                   PTR___type_metadata_for_Swift_String_100523a98,6);
                _Var18.unknown = _Stack_b0.unknown;
                _Var19.unknown = local_b8.unknown;
                if ((int)p_Var10 == 0) {
                  _Var19.unknown = (undefined *)0x0;
                  _Var18.unknown = (undefined *)0x0;
                }
              }
              local_80.unknown = (undefined *)0x6d75626c41;
              uStack_78 = 0xe500000000000000;
              puVar15 = PTR___type_metadata_for_Swift_String_100523a98;
              Swift::AnyHashable::_init
                        (local_a8,p_Var10,PTR___type_metadata_for_Swift_String_100523a98,
                         PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100523aa8
                        );
              if (*(long *)(param_1 + 0x10) == 0) {
                uStack_78 = 0;
                local_80.unknown = (undefined *)0x0;
                local_68 = 0;
                uStack_70 = 0;
              }
              else {
                _swift_bridgeObjectRetain(param_1);
                pcVar4 = local_a8;
                FUN_10000488c(pcVar4);
                if (((ulong)puVar15 & 1) == 0) {
                  _swift_bridgeObjectRelease(param_1);
                  uStack_78 = 0;
                  local_80.unknown = (undefined *)0x0;
                  local_68 = 0;
                  uStack_70 = 0;
                  pMVar7 = unaff_x20;
                }
                else {
                  FUN_1000280d4(*(long *)(param_1 + 0x38) + (long)pcVar4 * 0x20,&local_80);
                  _swift_bridgeObjectRelease(param_1);
                  pMVar7 = unaff_x20;
                }
              }
              FUN_100007dd4(local_a8);
              if (local_68 == 0) {
                p_Var10 = &local_80;
                FUN_10002a29c(p_Var10,&DAT_10054d428,&DAT_100420300);
                _Var20.unknown = (undefined *)0x0;
                _Var21.unknown = (undefined *)0x0;
              }
              else {
                p_Var10 = &local_b8;
                _swift_dynamicCast(p_Var10,&local_80,puVar14 + 8,
                                   PTR___type_metadata_for_Swift_String_100523a98,6);
                _Var20.unknown = _Stack_b0.unknown;
                _Var21.unknown = local_b8.unknown;
                if ((int)p_Var10 == 0) {
                  _Var21.unknown = (undefined *)0x0;
                  _Var20.unknown = (undefined *)0x0;
                }
              }
              local_80.unknown = (undefined *)0x52552065726f7453;
              uStack_78 = 0xe90000000000004c;
              puVar15 = PTR___type_metadata_for_Swift_String_100523a98;
              Swift::AnyHashable::_init
                        (local_a8,p_Var10,PTR___type_metadata_for_Swift_String_100523a98,
                         PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100523aa8
                        );
              if (*(long *)(param_1 + 0x10) == 0) {
                uStack_78 = 0;
                local_80.unknown = (undefined *)0x0;
                local_68 = 0;
                uStack_70 = 0;
                unaff_x20 = pMVar7;
              }
              else {
                _swift_bridgeObjectRetain(param_1);
                pcVar4 = local_a8;
                FUN_10000488c(pcVar4);
                if (((ulong)puVar15 & 1) == 0) {
                  _swift_bridgeObjectRelease(param_1);
                  uStack_78 = 0;
                  local_80.unknown = (undefined *)0x0;
                  local_68 = 0;
                  uStack_70 = 0;
                }
                else {
                  FUN_1000280d4(*(long *)(param_1 + 0x38) + (long)pcVar4 * 0x20,&local_80);
                  _swift_bridgeObjectRelease(param_1);
                }
              }
              FUN_100007dd4(local_a8);
              if (local_68 == 0) {
                FUN_10002a29c(&local_80,&DAT_10054d428,&DAT_100420300);
                _Var12.unknown = (undefined *)0x0;
                _Var13.unknown = (undefined *)0x0;
              }
              else {
                p_Var10 = &local_b8;
                _swift_dynamicCast(p_Var10,&local_80,puVar14 + 8,
                                   PTR___type_metadata_for_Swift_String_100523a98,6);
                _Var12.unknown = local_b8.unknown;
                _Var13.unknown = _Stack_b0.unknown;
                if ((int)p_Var10 == 0) {
                  _Var12.unknown = (undefined *)0x0;
                  _Var13.unknown = (undefined *)0x0;
                }
              }
              pMVar7 = unaff_x20 + _TtC7Wallper17NowPlayingManager::currentStoreURL;
              uVar9 = *(undefined8 *)(pMVar7 + 8);
              *(undefined **)pMVar7 = _Var12.unknown;
              *(undefined **)(pMVar7 + 8) = _Var13.unknown;
              _swift_bridgeObjectRelease(uVar9);
              FUN_10019a25c(_Var17.unknown,_Var16.unknown,_Var19.unknown,_Var18.unknown,
                            _Var21.unknown,_Var20.unknown);
              _swift_bridgeObjectRelease(_Var20.unknown);
              _swift_bridgeObjectRelease(_Var18.unknown);
              _swift_bridgeObjectRelease(_Var16.unknown);
            }
          }
        }
      }
    }
  }
  return;
}

