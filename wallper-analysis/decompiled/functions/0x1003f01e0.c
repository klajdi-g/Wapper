// rea decompile_all
// name: FUN_1003f01e0
// address: 0x1003f01e0
// body: available
// range: 0x1003f01e0-0x1003f0933 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_1003f01e0(undefined8 param_1,uint param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  long lVar1;
  undefined8 uVar2;
  bool bVar3;
  URL UVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  URL self;
  NSURL *pNVar8;
  NSDictionary *pNVar9;
  NSArray *pNVar10;
  void *aBlock;
  ID IVar11;
  ID IVar12;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar13;
  long lVar14;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  code *pcVar15;
  long unaff_x20;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  code *pcVar20;
  long lVar21;
  undefined1 *puVar22;
  String SVar23;
  undefined1 auStack_150 [4];
  uint local_14c;
  long local_148;
  uint local_13c;
  long local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined1 *local_120;
  ID local_118;
  long local_110;
  code *local_108;
  undefined *local_100;
  undefined8 local_f8;
  code *local_f0;
  undefined *puStack_e8;
  code *local_e0;
  undefined *local_d8;
  undefined1 auStack_80 [32];
  
  local_108 = (code *)CONCAT44(local_108._4_4_,param_3);
  local_12c = param_4;
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar21 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar5 = &DAT_10054ea38;
  local_138 = extraout_x12;
  local_120 = auStack_150 + -(extraout_x12 + 0xfU & 0xfffffffffffffff0);
  FUN_100002f94(&DAT_10054ea38,&DAT_100426270);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = (long)(auStack_150 + -(extraout_x12 + 0xfU & 0xfffffffffffffff0)) - extraout_x8;
  puVar6 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar14 = lVar19 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_148 = lVar14;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = lVar14 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = lVar14 - extraout_x12_01;
  *(char *)(unaff_x20 + _TtCV7Wallper13VideoLoopView11Coordinator::showsSpinner) = (char)param_5;
  *(char *)(unaff_x20 + _TtCV7Wallper13VideoLoopView11Coordinator::autoplay) = (char)param_2;
  local_118 = *(ID *)(unaff_x20 + _TtCV7Wallper13VideoLoopView11Coordinator::player);
  local_14c = param_2;
  local_13c = param_5;
  objc_stub::setMuted_(local_118,(ulong)((uint)local_108 & 1));
  lVar1 = _TtCV7Wallper13VideoLoopView11Coordinator::currentURL;
  _swift_beginAccess(unaff_x20 + _TtCV7Wallper13VideoLoopView11Coordinator::currentURL,auStack_80,0,
                     0);
  local_108 = *(code **)(lVar21 + 0x10);
  local_128 = param_1;
  (*local_108)(lVar17,param_1,UVar4.unknown);
  pcVar15 = *(code **)(lVar21 + 0x38);
  (*pcVar15)(lVar17,0,1,UVar4.unknown);
  lVar16 = (long)*(int *)(puVar5 + 0x30);
  FUN_100077938(unaff_x20 + lVar1,lVar19);
  FUN_100077938(lVar17,lVar19 + lVar16);
  pcVar20 = *(code **)(lVar21 + 0x30);
  lVar7 = lVar19;
  local_110 = lVar21;
  (*pcVar20)(lVar19,1,UVar4.unknown);
  if ((int)lVar7 == 1) {
    FUN_10002a29c(lVar17,&DAT_100553d90,&DAT_10041bf10);
    lVar16 = lVar19 + lVar16;
    (*pcVar20)(lVar16,1,UVar4.unknown);
    if ((int)lVar16 == 1) {
      FUN_10002a29c(lVar19,&DAT_100553d90,&DAT_10041bf10);
LAB_1003f08d8:
      IVar12 = local_118;
      if ((local_14c & 1) == 0) {
        IVar12 = objc_stub::pause(local_118);
        return IVar12;
      }
      IVar11 = objc_stub::timeControlStatus(local_118);
      if (IVar11 == 2) {
        return 2;
      }
      IVar12 = objc_stub::play(IVar12);
      return IVar12;
    }
  }
  else {
    FUN_100077938(lVar19,lVar14);
    lVar7 = lVar19 + lVar16;
    (*pcVar20)(lVar7,1,UVar4.unknown);
    lVar21 = local_110;
    puVar22 = local_120;
    if ((int)lVar7 != 1) {
      (**(code **)(local_110 + 0x20))(local_120,lVar19 + lVar16,UVar4.unknown);
      puVar5 = &DAT_100553da0;
      FUN_1000036d0(&DAT_100553da0,PTR_typeMetadataAccessor_100520a18,
                    PTR_Foundation__Foundation__URL_>Swift__Equatable_100520a38);
      bVar3 = Swift::Equatable::___infix(lVar14,puVar22,UVar4.unknown,puVar5);
      pcVar20 = *(code **)(lVar21 + 8);
      (*pcVar20)(puVar22,UVar4.unknown);
      FUN_10002a29c(lVar17,&DAT_100553d90,&DAT_10041bf10);
      (*pcVar20)(lVar14,UVar4.unknown);
      FUN_10002a29c(lVar19,&DAT_100553d90,&DAT_10041bf10);
      if (bVar3) goto LAB_1003f08d8;
      goto LAB_1003f04c0;
    }
    FUN_10002a29c(lVar17,&DAT_100553d90,&DAT_10041bf10);
    (**(code **)(local_110 + 8))(lVar14,UVar4.unknown);
  }
  FUN_10002a29c(lVar19,&DAT_10054ea38,&DAT_100426270);
  puVar22 = local_120;
LAB_1003f04c0:
  uVar2 = local_128;
  lVar16 = local_148;
  (*local_108)(local_148,local_128,UVar4.unknown);
  (*pcVar15)(lVar16,0,1,UVar4.unknown);
  _swift_beginAccess(unaff_x20 + lVar1,&local_100,0x21,0);
  FUN_10028468c(lVar16,unaff_x20 + lVar1);
  _swift_endAccess(&local_100);
  if ((local_13c & 1) != 0) {
    lVar16 = unaff_x20 + _TtCV7Wallper13VideoLoopView11Coordinator::hostView;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar16 != 0) {
      objc_stub::setHidden_(*(ID *)(lVar16 + _TtC7Wallper19PlayerContainerView::spinnerHost),0);
    }
  }
  IVar12 = local_118;
  *(undefined8 *)(unaff_x20 + _TtCV7Wallper13VideoLoopView11Coordinator::statusObs) = 0;
  *(undefined8 *)(unaff_x20 + _TtCV7Wallper13VideoLoopView11Coordinator::keepUpObs) = 0;
  *(undefined8 *)(unaff_x20 + _TtCV7Wallper13VideoLoopView11Coordinator::timeControlObs) = 0;
  *(undefined8 *)(unaff_x20 + _TtCV7Wallper13VideoLoopView11Coordinator::readyForDisplayObs) = 0;
  lVar16 = _TtCV7Wallper13VideoLoopView11Coordinator::looper;
  if (*(ID *)(unaff_x20 + _TtCV7Wallper13VideoLoopView11Coordinator::looper) != 0) {
    objc_stub::disableLooping
              (*(ID *)(unaff_x20 + _TtCV7Wallper13VideoLoopView11Coordinator::looper));
  }
  *(undefined8 *)(unaff_x20 + lVar16) = 0;
  objc_stub::pause(IVar12);
  objc_stub::removeAllItems(IVar12);
  puVar5 = &DAT_10054c048;
  FUN_100002f94(&DAT_10054c048,&DAT_10041d7b0);
  _swift_initStackObject();
  *(undefined8 *)(puVar5 + 0x18) = 2;
  *(undefined8 *)(puVar5 + 0x10) = 1;
  SVar23 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  *(String *)(puVar5 + 0x20) = SVar23;
  *(undefined **)(puVar5 + 0x48) = PTR___type_metadata_for_Swift_Bool_100523b70;
  puVar5[0x30] = 0;
  puVar6 = puVar5;
  FUN_100005b10(puVar5);
  _swift_setDeallocating(puVar5);
  FUN_10002a29c((String *)(puVar5 + 0x20),&DAT_10054a1c0,&DAT_10041a250);
  self.unknown = &_OBJC_CLASS___AVURLAsset;
  _objc_allocWithZone();
  pNVar8 = Foundation::URL::_bridgeToObjectiveC(self);
  pNVar9 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(puVar6);
  IVar12 = objc_stub::initWithURL_options_((ID)self.unknown,pNVar8,pNVar9);
  FUN_100002f94(&DAT_100549eb0,&DAT_100426be0);
  _swift_initStaticObject();
  pNVar10 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  puVar5 = &DAT_10053e358;
  _swift_allocObject(&DAT_10053e358,0x18,7);
  _swift_unknownObjectWeakInit(puVar5 + 0x10);
  (*local_108)(puVar22,uVar2,UVar4.unknown);
  lVar1 = local_110;
  uVar13 = (ulong)*(byte *)(local_110 + 0x50);
  uVar18 = uVar13 + 0x20 & (uVar13 ^ 0xffffffffffffffff);
  lVar16 = uVar18 + local_138;
  puVar6 = &DAT_10053e380;
  _swift_allocObject(&DAT_10053e380,lVar16 + 1,uVar13 | 7);
  *(undefined **)(puVar6 + 0x10) = puVar5;
  *(ID *)(puVar6 + 0x18) = IVar12;
  (**(code **)(lVar1 + 0x20))(puVar6 + uVar18,puVar22,UVar4.unknown);
  puVar6[lVar16] = (byte)local_12c & 1;
  local_e0 = FUN_1003f36a4;
  local_100 = PTR___NSConcreteStackBlock_100521110;
  local_f8 = 0x42000000;
  local_f0 = FUN_1000c7e7c;
  puStack_e8 = &DAT_10053e398;
  local_d8 = puVar6;
  aBlock = __Block_copy(&local_100);
  _swift_release(local_d8);
  objc_stub::loadValuesAsynchronouslyForKeys_completionHandler_(IVar12,pNVar10,aBlock);
  __Block_release(aBlock);
  return 0;
}

