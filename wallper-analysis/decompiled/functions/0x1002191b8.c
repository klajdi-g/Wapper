// rea decompile_all
// name: FUN_1002191b8
// address: 0x1002191b8
// body: available
// range: 0x1002191b8-0x100219cf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100219754 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1002191b8(void)

{
  long lVar1;
  undefined *puVar2;
  Stride SVar3;
  undefined *puVar4;
  Publisher PVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  Published PVar12;
  undefined *puVar13;
  AnyPublisher<(extension_in_Combine):Combine_Publisher_eraseToAnyPublisher()__>_Combine_AnyPublisher<A_Output,A_Failure>__extension_in_Combine__Combine_Publisher_eraseToAnyPublisher____>_Combine_AnyPublisher<A_Output,A_Failure>>
  AVar14;
  AnyPublisher<(extension_in_Combine):Combine_Publisher_eraseToAnyPublisher()__>_Combine_AnyPublisher<A_Output,A_Failure>__extension_in_Combine__Combine_Publisher_eraseToAnyPublisher____>_Combine_AnyPublisher<A_Output,A_Failure>>
  AVar15;
  AnyPublisher<(extension_in_Combine):Combine_Publisher_eraseToAnyPublisher()__>_Combine_AnyPublisher<A_Output,A_Failure>__extension_in_Combine__Combine_Publisher_eraseToAnyPublisher____>_Combine_AnyPublisher<A_Output,A_Failure>>
  AVar16;
  SchedulerOptions SVar17;
  undefined8 uVar18;
  AnyCancellable *pAVar19;
  undefined *puVar20;
  Stride SVar21;
  long lVar22;
  long extraout_x8;
  long lVar23;
  long extraout_x8_00;
  long lVar24;
  long extraout_x8_01;
  long lVar25;
  long lVar26;
  long extraout_x8_02;
  long lVar27;
  long lVar28;
  long extraout_x8_03;
  long lVar29;
  long lVar30;
  long extraout_x8_04;
  long lVar31;
  long lVar32;
  long extraout_x8_05;
  long lVar33;
  long extraout_x8_06;
  long lVar34;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  code *pcVar35;
  code *pcVar36;
  long lVar37;
  long unaff_x20;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  undefined8 auStack_190 [2];
  Published local_180;
  undefined *local_178;
  long local_170;
  code *local_168;
  long local_160;
  long local_158;
  long local_150;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80 [4];
  
  puVar2 = &DAT_1005575a8;
  FUN_100002f94(&DAT_1005575a8,&DAT_10042b8a8);
  lVar22 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar22 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar23 = (long)&local_180 - extraout_x8;
  puVar20 = &DAT_1005610e0;
  FUN_100002f94(&DAT_1005610e0,&DAT_10042b5d0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar20 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar24 = lVar23 - extraout_x8_00;
  SVar3 = SchedulerTimeType::Stride::_typeMetadataAccessor();
  lVar41 = *(long *)(SVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar41 + 0x40));
  lVar25 = lVar24 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar20 = &DAT_1005575b0;
  FUN_100002f94(&DAT_1005575b0,&DAT_10042b8b0);
  lVar26 = *(long *)(puVar20 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar26 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar27 = lVar25 - extraout_x8_02;
  puVar4 = &DAT_1005575b8;
  FUN_100002f94(&DAT_1005575b8,&DAT_10042b8b8);
  lVar28 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar28 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar29 = lVar27 - extraout_x8_03;
  PVar5 = Publisher::_typeMetadataAccessor();
  lVar30 = *(long *)(PVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar30 + 0x40));
  lVar31 = lVar29 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_1005575c0;
  FUN_100002f94(&DAT_1005575c0,&DAT_10042b8c0);
  lVar32 = *(long *)(puVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar32 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = &DAT_1005575c8;
  FUN_100002f94(&DAT_1005575c8,&DAT_10042b8c8);
  lVar33 = *(long *)(puVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar33 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar40 = (lVar31 - extraout_x8_05) - extraout_x8_06;
  puVar8 = &DAT_1005575d0;
  FUN_100002f94(&DAT_1005575d0,&DAT_10042b8d0);
  lVar34 = *(long *)(puVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar34 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar39 = lVar40 - extraout_x8_07;
  puVar9 = &DAT_1005575d8;
  FUN_100002f94(&DAT_1005575d8,&DAT_10042b8d8);
  lVar42 = *(long *)(puVar9 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar42 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar37 = lVar39 - extraout_x8_08;
  puVar10 = &DAT_1005575e0;
  FUN_100002f94(&DAT_1005575e0,&DAT_10042b8e0);
  lVar38 = *(long *)(puVar10 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar38 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = unaff_x20 + _TtC7Wallper19ShuffleQueueManager::videoLibrary;
  _swift_weakLoadStrong();
  if (lVar11 != 0) {
    lVar1 = lVar11 + _TtC7Wallper17VideoLibraryStore::_downloadedVideos;
    local_158 = lVar41;
    _swift_beginAccess(lVar1,local_80,0x21,0);
    PVar12.unknown = &DAT_10054b948;
    FUN_100002f94(&DAT_10054b948,&DAT_10042b8a0);
    local_180.unknown = PVar12.unknown;
    local_170 = lVar1;
    Combine::Published::_get_projectedValue(PVar12);
    _swift_endAccess(local_80);
    puVar13 = &DAT_1005575e8;
    FUN_1000087a0(&DAT_1005575e8,&DAT_1005575d8,&DAT_10042b8d8,
                  PTR__Combine__Publisher_>Combine__Publisher_1005214c8);
    local_178 = puVar13;
    (extension_Combine)::Combine::Publisher::_map();
    local_168 = *(code **)(lVar42 + 8);
    local_160 = lVar37;
    (*local_168)(lVar37,puVar9);
    puVar13 = 
    PTR_Combine__Combine__Publishers__Map<undefined,undefined>_>Combine__Publisher_1005213b0;
    FUN_1000087a0(&DAT_1005575f0,&DAT_1005575e0,&DAT_10042b8e0,
                  PTR_Combine__Combine__Publishers__Map<undefined,undefined>_>Combine__Publisher_1005213b0
                 );
    AVar14 = (extension_Combine)::Combine::Publisher::_eraseToAnyPublisher();
    (**(code **)(lVar38 + 8))(lVar37 - extraout_x8_09,puVar10);
    _swift_beginAccess(lVar11 + _TtC7Wallper17VideoLibraryStore::_likesTick,local_80,0x21,0);
    PVar12.unknown = &DAT_10054b940;
    FUN_100002f94(&DAT_10054b940,&DAT_10041cf50);
    local_150 = lVar11;
    Combine::Published::_get_projectedValue(PVar12);
    _swift_endAccess(local_80);
    FUN_1000087a0(&DAT_1005575f8,&DAT_1005575c8,&DAT_10042b8c8,
                  PTR__Combine__Publisher_>Combine__Publisher_1005214c8);
    (extension_Combine)::Combine::Publisher::_map();
    (**(code **)(lVar33 + 8))(lVar40,puVar7);
    FUN_1000087a0(&DAT_100557600,&DAT_1005575d0,&DAT_10042b8d0,puVar13);
    AVar15 = (extension_Combine)::Combine::Publisher::_eraseToAnyPublisher();
    (**(code **)(lVar34 + 8))(lVar39,puVar8);
    NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
    if (DAT_10055b028 != -1) {
      _swift_once(&DAT_10055b028,FUN_1002f5898);
    }
    (extension_Foundation)::__C::NSNotificationCenter::_publisher(lVar31,AVar15.unknown,0);
    FUN_1000036d0(&DAT_10054ab80,PTR__typeMetadataAccessor_100520ee0,
                  PTR__Foundation__Publisher_>Combine__Publisher_100520ed8);
    (extension_Combine)::Combine::Publisher::_map();
    (**(code **)(lVar30 + 8))(lVar31,PVar5.unknown);
    FUN_1000087a0(&DAT_100557608,&DAT_1005575c0,&DAT_10042b8c0,
                  PTR_Combine__Combine__Publishers__Map<undefined,undefined>_>Combine__Publisher_1005213b0
                 );
    AVar16 = (extension_Combine)::Combine::Publisher::_eraseToAnyPublisher();
    (**(code **)(lVar32 + 8))(lVar31 - extraout_x8_05,puVar6);
    local_90 = AVar16.unknown;
    local_88 = AVar15.unknown;
    local_80[0] = AVar14.unknown;
    _swift_retain(AVar14.unknown);
    _swift_retain(AVar15.unknown);
    _swift_retain(AVar16.unknown);
    puVar6 = &DAT_100557610;
    FUN_100002f94(&DAT_100557610,&DAT_10042b8e8);
    puVar7 = &DAT_100557618;
    FUN_1000087a0(&DAT_100557618,&DAT_100557610,&DAT_10042b8e8,
                  PTR_Combine__Combine__AnyPublisher<undefined,undefined>_>Combine__Publisher_100521408
                 );
    *(undefined **)((lVar37 - extraout_x8_09) + -0x10) = puVar7;
    SVar21.unknown = (undefined *)&local_88;
    Combine::Publishers::Merge3::init
              (lVar27,puVar7,SVar21.unknown,&local_90,puVar6,puVar6,puVar6,puVar7,puVar7);
    SchedulerTimeType::Stride::_milliseconds(0x78,SVar21);
    local_80[0] = (undefined *)NSRunLoop::mainRunLoop((ID)&_OBJC_CLASS___NSRunLoop);
    SVar17 = SchedulerOptions::_typeMetadataAccessor();
    pcVar35 = *(code **)(*(long *)(SVar17.unknown + -8) + 0x38);
    (*pcVar35)(lVar24,1,1,SVar17.unknown);
    uVar18 = 0;
    FUN_100044230(0,&DAT_100557578,&PTR__OBJC_CLASS___NSRunLoop_10053f9d8);
    puVar6 = &DAT_100557620;
    FUN_1000087a0(&DAT_100557620,&DAT_1005575b0,&DAT_10042b8b0,
                  PTR_Combine__Combine__Publishers__Merge3<undefined,undefined,undefined>_>Combine__Publisher_1005213d8
                 );
    puVar7 = puVar6;
    FUN_10022a350();
    (extension_Combine)::Combine::Publisher::_debounce
              (lVar29,puVar7,local_80,lVar24,puVar20,uVar18,puVar6,puVar7);
    FUN_10002a29c(lVar24,&DAT_1005610e0,&DAT_10042b5d0);
    pcVar36 = *(code **)(local_158 + 8);
    (*pcVar36)(lVar25,SVar3.unknown);
    (**(code **)(lVar26 + 8))(lVar27,puVar20);
    puVar20 = &DAT_1005333a8;
    _swift_allocObject(&DAT_1005333a8,0x18,7);
    _swift_weakInit(puVar20 + 0x10,unaff_x20);
    puVar6 = &DAT_100533858;
    _swift_allocObject(&DAT_100533858,0x20,7);
    *(code **)(puVar6 + 0x10) = FUN_10022a478;
    *(undefined **)(puVar6 + 0x18) = puVar20;
    FUN_1000087a0(&DAT_100557628,&DAT_1005575b8,&DAT_10042b8b8,
                  PTR_Combine__Combine__Publishers__Debounce<undefined,undefined>_>Combine__Publisher_1005213e8
                 );
    pAVar19 = (extension_Combine)::Combine::Publisher::_sink();
    _swift_release(puVar6);
    (**(code **)(lVar28 + 8))(lVar29,puVar4);
    lVar11 = _TtC7Wallper19ShuffleQueueManager::cancellables;
    _swift_beginAccess(unaff_x20 + _TtC7Wallper19ShuffleQueueManager::cancellables,local_80,0x21,0);
    Combine::AnyCancellable::store(pAVar19,(undefined *)(unaff_x20 + lVar11));
    _swift_endAccess(local_80);
    _swift_release(pAVar19);
    SVar21.unknown = (undefined *)local_80;
    _swift_beginAccess(local_170,SVar21.unknown,0x21,0);
    lVar26 = local_160;
    Combine::Published::_get_projectedValue(local_180);
    _swift_endAccess(local_80);
    SchedulerTimeType::Stride::_milliseconds(300,SVar21);
    puVar20 = (undefined *)NSRunLoop::mainRunLoop((ID)&_OBJC_CLASS___NSRunLoop);
    local_80[0] = puVar20;
    (*pcVar35)(lVar24,1,1,SVar17.unknown);
    (extension_Combine)::Combine::Publisher::_debounce
              (lVar23,puVar20,local_80,lVar24,puVar9,uVar18,local_178,puVar7);
    FUN_10002a29c(lVar24,&DAT_1005610e0,&DAT_10042b5d0);
    (*pcVar36)(lVar25,SVar3.unknown);
    (*local_168)(lVar26,puVar9);
    puVar20 = &DAT_1005333a8;
    _swift_allocObject(&DAT_1005333a8,0x18,7);
    _swift_weakInit(puVar20 + 0x10,unaff_x20);
    FUN_1000087a0(&DAT_100557630,&DAT_1005575a8,&DAT_10042b8a8,
                  PTR_Combine__Combine__Publishers__Debounce<undefined,undefined>_>Combine__Publisher_1005213e8
                 );
    pAVar19 = (extension_Combine)::Combine::Publisher::_sink();
    _swift_release(puVar20);
    (**(code **)(lVar22 + 8))(lVar23,puVar2);
    _swift_beginAccess(unaff_x20 + lVar11,local_80,0x21,0);
    Combine::AnyCancellable::store(pAVar19,(undefined *)(unaff_x20 + lVar11));
    _swift_endAccess(local_80);
    _swift_release(local_150);
    _swift_release(AVar14.unknown);
    _swift_release(AVar15.unknown);
    _swift_release(AVar16.unknown);
    _swift_release(pAVar19);
  }
  return;
}

