// rea decompile_all
// name: FUN_1001db584
// address: 0x1001db584
// body: available
// range: 0x1001db584-0x1001dbd0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001db584(undefined1 param_1,char *param_2,void *param_3)

{
  bool bVar1;
  URL UVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *pcVar5;
  long lVar6;
  undefined7 extraout_var;
  URL UVar7;
  NSString *pNVar8;
  Published *pPVar9;
  code *pcVar10;
  TaskPriority TVar11;
  void *pvVar12;
  long extraout_x8;
  undefined1 *puVar13;
  long lVar14;
  undefined *puVar15;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar16;
  long lVar17;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x13;
  long unaff_x20;
  long lVar18;
  undefined *puVar19;
  long lVar20;
  ID self;
  long lVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  code *pcVar26;
  String SVar27;
  String SVar28;
  undefined1 auStack_110 [4];
  uint local_10c;
  code *local_108;
  long local_b0 [4];
  undefined1 auStack_90 [8];
  undefined *local_88;
  undefined1 auStack_80 [32];
  
  puVar19 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = auStack_110 + -extraout_x8;
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar14 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = (long)puVar13 - (extraout_x13 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar15 = (undefined *)(lVar18 - extraout_x12);
  puVar19 = &DAT_10054ea38;
  FUN_100002f94(&DAT_10054ea38,&DAT_100426270);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar23 = (long)puVar15 - extraout_x8_00;
  puVar3 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  lVar17 = lVar23 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar20 = lVar17 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar21 = lVar20 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar24 = lVar21 - extraout_x12_02;
  uVar16 = (ulong)param_2 & 0xffffffffffff;
  if (((ulong)param_3 & 0x2000000000000000) != 0) {
    uVar16 = (ulong)param_3 >> 0x38 & 0xf;
  }
  if (uVar16 == 0) {
    return;
  }
  puVar3 = &DAT_10042ae68;
  _swift_getKeyPath(&DAT_10042ae68);
  puVar4 = &DAT_10042ae90;
  _swift_getKeyPath(&DAT_10042ae90);
  Combine::Published::_get_subscript(local_b0);
  _swift_release(puVar3);
  _swift_release(puVar4);
  if (*(long *)(local_b0[0] + 0x10) == 0) {
    bVar1 = true;
  }
  else {
    _swift_bridgeObjectRetain(local_b0[0]);
    pcVar5 = param_2;
    pvVar12 = param_3;
    FUN_10000464c(param_2);
    bVar1 = ((ulong)pvVar12 & 1) == 0;
    if (!bVar1) {
      (**(code **)(lVar14 + 0x10))
                (lVar24,*(long *)(local_b0[0] + 0x38) + *(long *)(lVar14 + 0x48) * (long)pcVar5,
                 UVar2.unknown);
    }
    _swift_bridgeObjectRelease(local_b0[0]);
  }
  pcVar26 = *(code **)(lVar14 + 0x38);
  (*pcVar26)(lVar24,bVar1,1,UVar2.unknown);
  _swift_bridgeObjectRelease(local_b0[0]);
  local_108 = pcVar26;
  (*pcVar26)(lVar21,1,1,UVar2.unknown);
  lVar25 = (long)*(int *)(puVar19 + 0x30);
  FUN_100077938(lVar24,lVar23);
  FUN_100077938(lVar21,lVar23 + lVar25);
  pcVar26 = *(code **)(lVar14 + 0x30);
  lVar6 = lVar23;
  (*pcVar26)(lVar23,1,UVar2.unknown);
  if ((int)lVar6 == 1) {
    FUN_10002a29c(lVar21,&DAT_100553d90,&DAT_10041bf10);
    FUN_10002a29c(lVar24,&DAT_100553d90,&DAT_10041bf10);
    lVar25 = lVar23 + lVar25;
    (*pcVar26)(lVar25,1,UVar2.unknown);
    if ((int)lVar25 != 1) {
LAB_1001db938:
      FUN_10002a29c(lVar23,&DAT_10054ea38,&DAT_100426270);
      return;
    }
    FUN_10002a29c(lVar23,&DAT_100553d90,&DAT_10041bf10);
  }
  else {
    FUN_100077938(lVar23,lVar20);
    lVar6 = lVar23 + lVar25;
    (*pcVar26)(lVar6,1,UVar2.unknown);
    if ((int)lVar6 == 1) {
      FUN_10002a29c(lVar21,&DAT_100553d90,&DAT_10041bf10);
      FUN_10002a29c(lVar24,&DAT_100553d90,&DAT_10041bf10);
      (**(code **)(lVar14 + 8))(lVar20,UVar2.unknown);
      goto LAB_1001db938;
    }
    (**(code **)(lVar14 + 0x20))(puVar15,lVar23 + lVar25,UVar2.unknown);
    puVar19 = &DAT_100553da0;
    FUN_100047f94(&DAT_100553da0,0xff,PTR_typeMetadataAccessor_100520a18,
                  PTR_Foundation__Foundation__URL_>Swift__Equatable_100520a38);
    bVar1 = Swift::Equatable::___infix(lVar20,puVar15,UVar2.unknown,puVar19);
    local_10c = (uint)CONCAT71(extraout_var,bVar1);
    pcVar26 = *(code **)(lVar14 + 8);
    (*pcVar26)(puVar15,UVar2.unknown);
    FUN_10002a29c(lVar21,&DAT_100553d90,&DAT_10041bf10);
    FUN_10002a29c(lVar24,&DAT_100553d90,&DAT_10041bf10);
    (*pcVar26)(lVar20,UVar2.unknown);
    FUN_10002a29c(lVar23,&DAT_100553d90,&DAT_10041bf10);
    if ((local_10c & 1) == 0) {
      return;
    }
  }
  lVar20 = _TtC7Wallper14PreviewManager::inFlightIDs;
  _swift_beginAccess(unaff_x20 + _TtC7Wallper14PreviewManager::inFlightIDs,auStack_80,0,0);
  puVar19 = *(undefined **)(unaff_x20 + lVar20);
  _swift_bridgeObjectRetain(puVar19);
  pcVar5 = param_2;
  UVar7.unknown = puVar19;
  FUN_1002165a4(param_2,param_3);
  _swift_bridgeObjectRelease(puVar19);
  if (((ulong)pcVar5 & 1) == 0) {
    SVar28.bridgeObject = param_3;
    SVar28.str = param_2;
    Foundation::URL::appendingPathComponent(SVar28,UVar7);
    SVar27.bridgeObject = (void *)0xe300000000000000;
    SVar27.str = (char *)0x676e70;
    Foundation::URL::appendingPathExtension(SVar27,UVar7);
    pcVar26 = *(code **)(lVar14 + 8);
    UVar7.unknown = puVar15;
    (*pcVar26)(puVar15,UVar2.unknown);
    self = *(ID *)(unaff_x20 + _TtC7Wallper14PreviewManager::fm);
    SVar28 = Foundation::URL::get_path(UVar7);
    pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar28.bridgeObject);
    pPVar9 = (Published *)objc_stub::fileExistsAtPath_(self,pNVar8);
    if ((int)pPVar9 == 0) {
      _swift_beginAccess(unaff_x20 + lVar20,local_b0,0x21,0);
      _swift_bridgeObjectRetain(param_3);
      FUN_1001ca054(auStack_90,param_2,param_3);
      _swift_endAccess(local_b0);
      _swift_bridgeObjectRelease();
      Swift::TaskPriority::get_utility((TaskPriority)local_88);
      TVar11 = Swift::TaskPriority::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar11.unknown + -8) + 0x38))(puVar13,0,1,TVar11.unknown);
      puVar19 = &DAT_100531a78;
      _swift_allocObject(&DAT_100531a78,0x18,7);
      _swift_weakInit(puVar19 + 0x10,unaff_x20);
      (**(code **)(lVar14 + 0x10))(puVar15,lVar18,UVar2.unknown);
      uVar16 = (ulong)*(byte *)(lVar14 + 0x50);
      uVar22 = uVar16 + 0x50 & (uVar16 ^ 0xffffffffffffffff);
      puVar3 = &DAT_100531aa0;
      _swift_allocObject(&DAT_100531aa0,uVar22 + extraout_x13,uVar16 | 7);
      *(undefined8 *)(puVar3 + 0x10) = 0;
      *(undefined8 *)(puVar3 + 0x18) = 0;
      *(undefined **)(puVar3 + 0x20) = puVar19;
      puVar3[0x28] = param_1;
      *(undefined8 *)(puVar3 + 0x38) = 0x407fa00000000000;
      *(undefined8 *)(puVar3 + 0x30) = 0x408c200000000000;
      *(char **)(puVar3 + 0x40) = param_2;
      *(void **)(puVar3 + 0x48) = param_3;
      (**(code **)(lVar14 + 0x20))(puVar3 + uVar22,puVar15,UVar2.unknown);
      _swift_bridgeObjectRetain(param_3);
      FUN_100176d50(0,0,puVar13,&DAT_10042aeb8,puVar3);
      _swift_release();
      FUN_10002a29c(puVar13,&DAT_100561090,&DAT_10041c870);
    }
    else {
      (**(code **)(lVar14 + 0x10))(lVar17,lVar18,UVar2.unknown);
      (*local_108)(lVar17,0,1,UVar2.unknown);
      puVar19 = &DAT_10042ae68;
      _swift_getKeyPath(&DAT_10042ae68);
      puVar3 = &DAT_10042ae90;
      _swift_getKeyPath(&DAT_10042ae90);
      _swift_bridgeObjectRetain(param_3);
      pcVar10 = (code *)local_b0;
      Combine::Published::_modify_subscript(pPVar9,pcVar10,unaff_x20,puVar19,puVar3);
      FUN_100122fac(lVar17,param_2,param_3);
      (*pcVar10)(local_b0,0);
      _swift_release(puVar19);
      _swift_release(puVar3);
    }
    (*pcVar26)(lVar18,UVar2.unknown);
  }
  return;
}

