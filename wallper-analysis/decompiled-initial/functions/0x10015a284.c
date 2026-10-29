// rea decompile_all
// name: FUN_10015a284
// address: 0x10015a284
// body: available
// range: 0x10015a284-0x10015b02b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010015a6c4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

long FUN_10015a284(void)

{
  undefined8 *puVar1;
  Set<AnyCancellable> in;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  Published PVar6;
  AnyCancellable *pAVar7;
  OS_dispatch_queue *pOVar8;
  SchedulerOptions SVar9;
  undefined *puVar10;
  __int64 _Var11;
  Stride SVar12;
  long extraout_x8;
  long extraout_x8_00;
  long lVar13;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long lVar14;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  undefined *puVar15;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 auStack_1a0 [2];
  undefined1 auStack_190 [8];
  long local_188;
  long local_180;
  long local_178;
  long local_170;
  undefined *local_168;
  long local_160;
  undefined *local_158;
  long local_150;
  undefined *local_148;
  long local_140;
  long local_138;
  undefined *local_130;
  long local_128;
  long local_120;
  long local_118;
  undefined *local_110;
  long local_108;
  long local_100;
  undefined *local_f8;
  long local_f0;
  long local_e8;
  undefined *local_e0;
  long local_d8;
  long local_d0;
  undefined *local_c8;
  undefined1 *local_c0;
  long local_b8;
  undefined *local_b0;
  long local_a8;
  long local_a0;
  undefined *local_98;
  OS_dispatch_queue *local_80 [4];
  
  puVar15 = &DAT_100555358;
  FUN_100002f94(&DAT_100555358,&DAT_100428da8);
  local_b8 = *(long *)(puVar15 + -8);
  local_b0 = puVar15;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_b8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar15 = &DAT_100555360;
  local_c0 = auStack_190 + -extraout_x8;
  FUN_100002f94(&DAT_100555360,&DAT_100428db0);
  local_a0 = *(long *)(puVar15 + -8);
  local_98 = puVar15;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)(auStack_190 + -extraout_x8) - extraout_x8_00;
  puVar15 = &DAT_100555368;
  local_a8 = lVar13;
  FUN_100002f94(&DAT_100555368,&DAT_100428db8);
  local_e8 = *(long *)(puVar15 + -8);
  local_e0 = puVar15;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_e8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = lVar13 - extraout_x8_01;
  puVar15 = &DAT_100555370;
  local_f0 = lVar13;
  FUN_100002f94(&DAT_100555370,&DAT_100428dc0);
  local_d0 = *(long *)(puVar15 + -8);
  local_c8 = puVar15;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_d0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = lVar13 - extraout_x8_02;
  puVar15 = &DAT_100555378;
  local_d8 = lVar13;
  FUN_100002f94(&DAT_100555378,&DAT_100428dc8);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = lVar13 - extraout_x8_03;
  local_118 = lVar13;
  local_110 = (undefined *)SchedulerTimeType::Stride::_typeMetadataAccessor();
  local_120 = *(long *)(local_110 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_120 + 0x40));
  lVar13 = lVar13 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  puVar15 = &DAT_100555380;
  local_128 = lVar13;
  FUN_100002f94(&DAT_100555380,&DAT_100428dd0);
  local_138 = *(long *)(puVar15 + -8);
  local_130 = puVar15;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_138 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar13 = lVar13 - extraout_x8_05;
  puVar15 = &DAT_100555388;
  local_140 = lVar13;
  FUN_100002f94(&DAT_100555388,&DAT_100428dd8);
  local_100 = *(long *)(puVar15 + -8);
  local_f8 = puVar15;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_100 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar13 = lVar13 - extraout_x8_06;
  puVar15 = &DAT_100555390;
  local_108 = lVar13;
  FUN_100002f94(&DAT_100555390,&DAT_100428de0);
  local_180 = *(long *)(puVar15 + -8);
  local_148 = puVar15;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_180 + 0x40));
  lVar13 = lVar13 - (extraout_x8_07 + 0xfU & 0xfffffffffffffff0);
  local_150 = lVar13;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar15 = (undefined *)(lVar13 - extraout_x12);
  local_158 = puVar15;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = (long)puVar15 - extraout_x12_00;
  puVar15 = &DAT_100555398;
  local_160 = lVar14;
  FUN_100002f94(&DAT_100555398,&DAT_100428de8);
  local_170 = *(long *)(puVar15 + -8);
  local_168 = puVar15;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_170 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar14 = lVar14 - extraout_x8_08;
  puVar15 = &DAT_100557e80;
  local_178 = lVar14;
  FUN_100002f94(&DAT_100557e80,&DAT_10041cf60);
  lVar19 = *(long *)(puVar15 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = lVar14 - extraout_x8_09;
  puVar3 = &DAT_10054b940;
  FUN_100002f94(&DAT_10054b940,&DAT_10041cf50);
  lVar16 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = lVar14 - extraout_x8_10;
  puVar4 = &DAT_1005553a0;
  FUN_100002f94(&DAT_1005553a0,&DAT_100428df0);
  lVar17 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = _TtC7Wallper13LyricsManager::_lines;
  lVar18 = lVar20 - extraout_x8_11;
  local_80[0] = (OS_dispatch_queue *)PTR___swiftEmptyArrayStorage_100524190;
  puVar5 = &DAT_100555160;
  FUN_100002f94(&DAT_100555160,&DAT_100428c78);
  Combine::Published::init(lVar18,puVar5,puVar5);
  (**(code **)(lVar17 + 0x20))(unaff_x20 + lVar13,lVar18,puVar4);
  lVar13 = _TtC7Wallper13LyricsManager::_activeLine;
  local_80[0] = (OS_dispatch_queue *)0xffffffffffffffff;
  Combine::Published::init(lVar20,puVar5,PTR___type_metadata_for_Swift_Int_100523bd8);
  (**(code **)(lVar16 + 0x20))(unaff_x20 + lVar13,lVar20,puVar3);
  lVar13 = _TtC7Wallper13LyricsManager::_loading;
  local_80[0] = (OS_dispatch_queue *)((ulong)local_80[0] & 0xffffffffffffff00);
  Combine::Published::init(lVar14,puVar5,PTR___type_metadata_for_Swift_Bool_100523b70);
  (**(code **)(lVar19 + 0x20))(unaff_x20 + lVar13,lVar14,puVar15);
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7Wallper13LyricsManager::track);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7Wallper13LyricsManager::duration);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(unaff_x20 + _TtC7Wallper13LyricsManager::provisional) = 0;
  if (DAT_1005553a8 != -1) {
    _swift_once(&DAT_1005553a8,FUN_100159ccc);
  }
  FUN_10015f8e8(0);
  FUN_100099338();
  FUN_100163cc0();
  *(undefined8 *)(unaff_x20 + _TtC7Wallper13LyricsManager::fetchTask) = 0;
  *(undefined8 *)(unaff_x20 + _TtC7Wallper13LyricsManager::fetchGeneration) = 0;
  *(undefined8 *)(unaff_x20 + _TtC7Wallper13LyricsManager::nextLine) = 0;
  puVar15 = PTR___swiftEmptySetSingleton_1005241a0;
  *(undefined **)(unaff_x20 + _TtC7Wallper13LyricsManager::unavailable) =
       PTR___swiftEmptySetSingleton_1005241a0;
  if (((ulong)PTR___swiftEmptyArrayStorage_100524190 >> 0x3e != 0) &&
     (_Var11 = Swift::_CocoaArrayWrapper::get_endIndex
                         ((_CocoaArrayWrapper)PTR___swiftEmptyArrayStorage_100524190),
     puVar15 = PTR___swiftEmptySetSingleton_1005241a0, _Var11 != 0)) {
    puVar15 = PTR___swiftEmptyArrayStorage_100524190;
    FUN_100266028();
  }
  in.unknown = (undefined *)(unaff_x20 + _TtC7Wallper13LyricsManager::cancellables);
  *(undefined **)in.unknown = puVar15;
  if (DAT_1005564c0 != -1) {
    _swift_once(&DAT_1005564c0,FUN_10017806c);
  }
  lVar13 = _TtC7Wallper17NowPlayingManager::_trackTitle;
  local_188 = DAT_100577cc0;
  _swift_beginAccess(DAT_100577cc0 + _TtC7Wallper17NowPlayingManager::_trackTitle,local_80,0x21,0);
  PVar6.unknown = &DAT_1005543c8;
  FUN_100002f94(&DAT_1005543c8,&DAT_100427110);
  lVar16 = local_160;
  Combine::Published::_get_projectedValue(PVar6);
  _swift_endAccess(local_80);
  puVar15 = &DAT_1005553b0;
  FUN_1000087a0(&DAT_1005553b0,&DAT_100555390,&DAT_100428de0,
                PTR__Combine__Publisher_>Combine__Publisher_1005214c8);
  FUN_100163de0(&DAT_100549db8,&DAT_100549db0,&DAT_100419ed0,
                PTR___protocol_witness_table_for_Swift_String___Swift_Equatable_in_Swift_100523ab0);
  puVar5 = local_148;
  lVar14 = local_178;
  (extension_Combine)::Combine::Publisher::_removeDuplicates();
  (**(code **)(local_180 + 8))(lVar16,puVar5);
  puVar3 = &DAT_10052f340;
  _swift_allocObject(&DAT_10052f340,0x18,7);
  _swift_weakInit(puVar3 + 0x10,unaff_x20);
  FUN_1000087a0(&DAT_1005553b8,&DAT_100555398,&DAT_100428de8,
                PTR_Combine__Combine__Publishers__RemoveDuplicates<undefined>_>Combine__Publisher_1005213a0
               );
  _swift_retain(unaff_x20);
  puVar4 = local_168;
  pAVar7 = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(puVar3);
  (**(code **)(local_170 + 8))(lVar14,puVar4);
  _swift_beginAccess(in.unknown,local_80,0x21,0);
  Combine::AnyCancellable::store(pAVar7,in);
  _swift_endAccess(local_80);
  _swift_release(pAVar7);
  lVar14 = local_188;
  _swift_beginAccess(local_188 + lVar13,local_80,0x21,0);
  Combine::Published::_get_projectedValue(PVar6);
  _swift_endAccess(local_80);
  _swift_beginAccess(lVar14 + _TtC7Wallper17NowPlayingManager::_artistName,local_80,0x21,0);
  SVar12.unknown = local_158;
  Combine::Published::_get_projectedValue(PVar6);
  _swift_endAccess(local_80);
  _swift_beginAccess(lVar14 + _TtC7Wallper17NowPlayingManager::_albumName,local_80,0x21,0);
  lVar13 = local_150;
  Combine::Published::_get_projectedValue(PVar6);
  _swift_endAccess(local_80);
  *(undefined **)(lVar18 + -0x10) = puVar15;
  lVar16 = local_140;
  Combine::Publishers::CombineLatest3::init
            (local_140,local_80,SVar12.unknown,lVar13,puVar5,puVar5,puVar5,puVar15,puVar15);
  lVar13 = local_128;
  SchedulerTimeType::Stride::_milliseconds(0x96,SVar12);
  pOVar8 = (OS_dispatch_queue *)0x0;
  FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
  local_80[0] = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar8);
  SVar9 = SchedulerOptions::_typeMetadataAccessor();
  lVar17 = local_118;
  (**(code **)(*(long *)(SVar9.unknown + -8) + 0x38))(local_118,1,1,SVar9.unknown);
  puVar15 = &DAT_1005553c0;
  FUN_1000087a0(&DAT_1005553c0,&DAT_100555380,&DAT_100428dd0,
                PTR_Combine__Combine__Publishers__CombineLatest3<undefined,undefined,undefined>_>Combine__Publisher_100521380
               );
  puVar4 = puVar15;
  FUN_100163d30();
  lVar18 = local_108;
  puVar3 = local_130;
  (extension_Combine)::Combine::Publisher::_debounce
            (local_108,puVar4,local_80,lVar17,local_130,pOVar8,puVar15,puVar4);
  FUN_10002a29c(lVar17,&DAT_100555378,&DAT_100428dc8);
  (**(code **)(local_120 + 8))(lVar13,local_110);
  (**(code **)(local_138 + 8))(lVar16,puVar3);
  puVar15 = &DAT_10052f340;
  puVar4 = puVar15;
  _swift_allocObject(&DAT_10052f340,0x18,7);
  _swift_weakInit(puVar4 + 0x10,unaff_x20);
  puVar3 = &DAT_10052f368;
  _swift_allocObject(&DAT_10052f368,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_100163d84;
  *(undefined **)(puVar3 + 0x18) = puVar4;
  FUN_1000087a0(&DAT_1005553d0,&DAT_100555388,&DAT_100428dd8,
                PTR_Combine__Combine__Publishers__Debounce<undefined,undefined>_>Combine__Publisher_1005213e8
               );
  puVar4 = local_f8;
  pAVar7 = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(puVar3);
  (**(code **)(local_100 + 8))(lVar18,puVar4);
  _swift_beginAccess(in.unknown,local_80,0x21,0);
  Combine::AnyCancellable::store(pAVar7,in);
  _swift_endAccess(local_80);
  _swift_release(pAVar7);
  _swift_beginAccess(lVar14 + _TtC7Wallper17NowPlayingManager::_trackDuration,local_80,0x21,0);
  PVar6.unknown = &DAT_1005553d8;
  FUN_100002f94(&DAT_1005553d8,&DAT_100429c60);
  lVar13 = local_f0;
  Combine::Published::_get_projectedValue(PVar6);
  _swift_endAccess(local_80);
  puVar4 = PTR__Combine__Publisher_>Combine__Publisher_1005214c8;
  FUN_1000087a0(&DAT_1005553e0,&DAT_100555368,&DAT_100428db8,
                PTR__Combine__Publisher_>Combine__Publisher_1005214c8);
  FUN_100163de0(&DAT_1005553e8,&DAT_1005553f0,&DAT_1004299a0,
                PTR___protocol_witness_table_for_Swift_Double___Swift_Equatable_in_Swift_100523ba0);
  lVar16 = local_d8;
  puVar3 = local_e0;
  (extension_Combine)::Combine::Publisher::_removeDuplicates();
  (**(code **)(local_e8 + 8))(lVar13,puVar3);
  puVar10 = puVar15;
  _swift_allocObject(&DAT_10052f340,0x18,7);
  _swift_weakInit(puVar10 + 0x10,unaff_x20);
  puVar3 = 
  PTR_Combine__Combine__Publishers__RemoveDuplicates<undefined>_>Combine__Publisher_1005213a0;
  FUN_1000087a0(&DAT_1005553f8,&DAT_100555370,&DAT_100428dc0,
                PTR_Combine__Combine__Publishers__RemoveDuplicates<undefined>_>Combine__Publisher_1005213a0
               );
  puVar5 = local_c8;
  pAVar7 = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(puVar10);
  (**(code **)(local_d0 + 8))(lVar16,puVar5);
  _swift_beginAccess(in.unknown,local_80,0x21,0);
  Combine::AnyCancellable::store(pAVar7,in);
  _swift_endAccess(local_80);
  _swift_release(pAVar7);
  _swift_beginAccess(lVar14 + _TtC7Wallper17NowPlayingManager::_playback,local_80,0x21,0);
  PVar6.unknown = &DAT_100555400;
  FUN_100002f94(&DAT_100555400,&DAT_100428df8);
  puVar2 = local_c0;
  Combine::Published::_get_projectedValue(PVar6);
  _swift_endAccess(local_80);
  FUN_1000087a0(&DAT_100555408,&DAT_100555358,&DAT_100428da8,puVar4);
  FUN_1000036d0(&DAT_100555410,FUN_10015f8e8,&TargetProtocolConformanceDescriptor_100428cf8);
  lVar13 = local_a8;
  puVar4 = local_b0;
  (extension_Combine)::Combine::Publisher::_removeDuplicates();
  (**(code **)(local_b8 + 8))(puVar2,puVar4);
  _swift_allocObject(&DAT_10052f340,0x18,7);
  _swift_weakInit(puVar15 + 0x10,unaff_x20);
  _swift_release(unaff_x20);
  FUN_1000087a0(&DAT_100555418,&DAT_100555360,&DAT_100428db0,puVar3);
  puVar3 = local_98;
  pAVar7 = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(puVar15);
  (**(code **)(local_a0 + 8))(lVar13,puVar3);
  _swift_beginAccess(in.unknown,local_80,0x21,0);
  Combine::AnyCancellable::store(pAVar7,in);
  _swift_endAccess(local_80);
  _swift_release(pAVar7);
  return unaff_x20;
}

