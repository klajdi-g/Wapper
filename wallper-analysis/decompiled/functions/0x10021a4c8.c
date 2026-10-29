// rea decompile_all
// name: FUN_10021a4c8
// address: 0x10021a4c8
// body: available
// range: 0x10021a4c8-0x10021aa93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010021a6b8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10021a4c8(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  AnyCancellable *pAVar8;
  ID IVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar10;
  undefined1 auStack_f0 [8];
  undefined8 local_e8;
  code *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined1 *local_c0;
  undefined *local_b8;
  long local_b0;
  long local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined *local_88;
  code *pcStack_80;
  ID local_78 [3];
  
  puVar4 = &DAT_100557568;
  FUN_100002f94(&DAT_100557568,&DAT_10042b858);
  local_b0 = *(long *)(puVar4 + -8);
  local_b8 = puVar4;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_1005610e0;
  local_c0 = auStack_f0 + -extraout_x8;
  FUN_100002f94(&DAT_1005610e0,&DAT_10042b5d0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)(auStack_f0 + -extraout_x8) - extraout_x8_00;
  puVar4 = &DAT_100557570;
  FUN_100002f94(&DAT_100557570,&DAT_10042b860);
  local_e0 = *(code **)(puVar4 + -8);
  local_a0 = puVar4;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)((long)local_e0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_a8 = lVar10 - extraout_x8_01;
  _swift_weakAssign(unaff_x20 + _TtC7Wallper19ShuffleQueueManager::playlistManager,param_1);
  local_90 = &_OBJC_CLASS___NSRunLoop;
  local_78[0] = NSRunLoop::mainRunLoop((ID)&_OBJC_CLASS___NSRunLoop);
  local_88 = (undefined *)SchedulerOptions::_typeMetadataAccessor();
  pcStack_80 = *(code **)(*(long *)(local_88 + -8) + 0x38);
  (*pcStack_80)(lVar10,1,1,local_88);
  puVar4 = &DAT_10054ac18;
  FUN_100002f94(&DAT_10054ac18,&DAT_10041beb0);
  uVar5 = 0;
  local_c8 = puVar4;
  FUN_100044230(0,&DAT_100557578,&PTR__OBJC_CLASS___NSRunLoop_10053f9d8);
  puVar6 = &DAT_10054ac28;
  local_e8 = uVar5;
  FUN_1000087a0(&DAT_10054ac28,&DAT_10054ac18,&DAT_10041beb0,
                PTR__Combine__protocol_conformance_descriptor_for_Combine_PassthroughSubject<A,B>___Combine_Publisher_in_Combine_>Combine__Publisher_100521468
               );
  puVar7 = puVar6;
  local_d0 = puVar6;
  FUN_10022a350();
  lVar1 = local_a8;
  local_98 = puVar7;
  (extension_Combine)::Combine::Publisher::_receive
            (local_a8,puVar7,lVar10,puVar4,uVar5,puVar6,puVar7);
  FUN_10002a29c(lVar10,&DAT_1005610e0,&DAT_10042b5d0);
  puVar4 = &DAT_1005333a8;
  _swift_allocObject(&DAT_1005333a8,0x18,7);
  _swift_weakInit(puVar4 + 0x10);
  puVar6 = &DAT_100533768;
  _swift_allocObject(&DAT_100533768,0x20,7);
  *(code **)(puVar6 + 0x10) = thunk_FUN_10022a3d0;
  *(undefined **)(puVar6 + 0x18) = puVar4;
  puVar4 = &DAT_100557588;
  FUN_1000087a0(&DAT_100557588,&DAT_100557570,&DAT_10042b860,
                PTR_Combine__Combine__Publishers__ReceiveOn<undefined,undefined>_>Combine__Publisher_1005213f8
               );
  puVar7 = local_a0;
  local_d8 = puVar4;
  pAVar8 = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(puVar6);
  local_e0 = *(code **)((long)local_e0 + 8);
  (*local_e0)(lVar1,puVar7);
  lVar1 = _TtC7Wallper19ShuffleQueueManager::cancellables;
  _swift_beginAccess(unaff_x20 + _TtC7Wallper19ShuffleQueueManager::cancellables,local_78,0x21,0);
  Combine::AnyCancellable::store(pAVar8,(undefined *)(unaff_x20 + lVar1));
  _swift_endAccess(local_78);
  _swift_release(pAVar8);
  local_78[0] = objc_stub::mainRunLoop((ID)local_90);
  (*pcStack_80)(lVar10,1,1,local_88);
  puVar4 = &DAT_1005569e8;
  FUN_100002f94(&DAT_1005569e8,&DAT_10042b870);
  puVar6 = &DAT_100557590;
  FUN_1000087a0(&DAT_100557590,&DAT_1005569e8,&DAT_10042b870,
                PTR__Combine__protocol_conformance_descriptor_for_Combine_PassthroughSubject<A,B>___Combine_Publisher_in_Combine_>Combine__Publisher_100521468
               );
  puVar2 = local_c0;
  uVar5 = local_e8;
  (extension_Combine)::Combine::Publisher::_receive
            (local_c0,puVar6,lVar10,puVar4,local_e8,puVar6,local_98);
  FUN_10002a29c(lVar10,&DAT_1005610e0,&DAT_10042b5d0);
  puVar4 = &DAT_1005333a8;
  _swift_allocObject(&DAT_1005333a8,0x18,7);
  _swift_weakInit(puVar4 + 0x10);
  FUN_1000087a0(&DAT_100557598,&DAT_100557568,&DAT_10042b858,
                PTR_Combine__Combine__Publishers__ReceiveOn<undefined,undefined>_>Combine__Publisher_1005213f8
               );
  puVar6 = local_b8;
  pAVar8 = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(puVar4);
  (**(code **)(local_b0 + 8))(puVar2,puVar6);
  _swift_beginAccess(unaff_x20 + lVar1,local_78,0x21,0);
  Combine::AnyCancellable::store(pAVar8,(undefined *)(unaff_x20 + lVar1));
  _swift_endAccess(local_78);
  _swift_release(pAVar8);
  IVar9 = objc_stub::mainRunLoop((ID)local_90);
  local_78[0] = IVar9;
  (*pcStack_80)(lVar10,1,1,local_88);
  lVar3 = local_a8;
  (extension_Combine)::Combine::Publisher::_receive
            (local_a8,IVar9,lVar10,local_c8,uVar5,local_d0,local_98);
  FUN_10002a29c(lVar10,&DAT_1005610e0,&DAT_10042b5d0);
  puVar4 = &DAT_1005333a8;
  _swift_allocObject(&DAT_1005333a8,0x18,7);
  _swift_weakInit(puVar4 + 0x10);
  puVar6 = &DAT_100533790;
  _swift_allocObject(&DAT_100533790,0x20,7);
  puVar7 = local_a0;
  *(code **)(puVar6 + 0x10) = FUN_10022a3d0;
  *(undefined **)(puVar6 + 0x18) = puVar4;
  pAVar8 = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(puVar6);
  (*local_e0)(lVar3,puVar7);
  _swift_beginAccess(unaff_x20 + lVar1,local_78,0x21,0);
  Combine::AnyCancellable::store(pAVar8,(undefined *)(unaff_x20 + lVar1));
  _swift_endAccess(local_78);
  _swift_release(pAVar8);
  FUN_100219cf4(1);
  return;
}

