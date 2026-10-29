// rea decompile_all
// name: FUN_1002dbafc
// address: 0x1002dbafc
// body: available
// range: 0x1002dbafc-0x1002dc60f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001002dc604) */

void FUN_1002dbafc(void)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  State SVar6;
  bool bVar7;
  URL UVar8;
  ID self;
  NSString *pNVar9;
  URL UVar10;
  long lVar11;
  ID IVar12;
  undefined *puVar13;
  NSURL *pNVar14;
  State SVar15;
  long lVar16;
  long extraout_x8;
  long lVar17;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar18;
  undefined8 *puVar19;
  undefined *puVar20;
  long lVar21;
  undefined *puVar22;
  long lVar23;
  undefined8 uVar24;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long lVar25;
  undefined8 uVar26;
  long unaff_x20;
  ulong uVar27;
  code *pcVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  long lVar33;
  ulong uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  String SVar37;
  long local_190;
  undefined *local_188;
  undefined *local_180;
  long local_178;
  undefined *local_140;
  undefined1 auStack_a8 [8];
  undefined *local_a0 [2];
  State local_90;
  undefined8 uStack_88;
  undefined8 local_78;
  undefined *local_70 [2];
  
  UVar8 = Foundation::URL::typeMetadataAccessor();
  lVar16 = *(long *)(UVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar16 + 0x40));
  lVar17 = (long)&local_190 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_190 = lVar17;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar20 = (undefined *)(lVar17 - extraout_x12);
  local_188 = puVar20;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar20 = puVar20 + -extraout_x12_00;
  local_180 = puVar20;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar21 = (long)puVar20 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar22 = (undefined *)(lVar21 - extraout_x12_02);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = (long)puVar22 - extraout_x12_03;
  puVar20 = &DAT_10054ea38;
  FUN_100002f94(&DAT_10054ea38,&DAT_100426270);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar20 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar30 = lVar17 - extraout_x8_00;
  puVar13 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar13 + -8) + 0x40));
  lVar23 = lVar30 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_178 = lVar23;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar23 = lVar23 - extraout_x12_04;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar31 = lVar23 - extraout_x12_05;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar33 = lVar31 - extraout_x12_06;
  self = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace);
  if (DAT_1005560a0 != -1) {
    _swift_once(&DAT_1005560a0,FUN_10017d600);
  }
  lVar5 = DAT_100577cd0;
  uVar18 = *(ulong *)(DAT_100577cd0 + 0x10);
  if (uVar18 == 0) {
    local_140 = PTR___swiftEmptyArrayStorage_100524190;
  }
  else {
    uVar32 = 0;
    lVar2 = DAT_100577cd0 + 0x20;
    local_140 = PTR___swiftEmptyArrayStorage_100524190;
LAB_1002dbdb0:
    do {
      if (*(ulong *)(lVar5 + 0x10) <= uVar32) {
                    /* WARNING: Does not return */
        pcVar28 = (code *)SoftwareBreakpoint(1,0x1002dc5ec);
        (*pcVar28)();
      }
      puVar19 = (undefined8 *)(lVar2 + uVar32 * 0x28);
      uVar26 = *puVar19;
      uVar3 = puVar19[1];
      uVar24 = puVar19[2];
      lVar25 = puVar19[4];
      uVar36 = puVar19[4];
      uVar35 = puVar19[3];
      uVar32 = uVar32 + 1;
      uVar27 = *(ulong *)(lVar25 + 0x10);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(lVar25);
      if (uVar27 != 0) {
        uVar34 = 0;
        puVar19 = (undefined8 *)(lVar25 + 0x28);
        do {
          if (*(ulong *)(lVar25 + 0x10) <= uVar34) {
                    /* WARNING: Does not return */
            pcVar28 = (code *)SoftwareBreakpoint(1,0x1002dc5e8);
            (*pcVar28)();
          }
          uVar4 = *puVar19;
          _swift_bridgeObjectRetain(uVar4);
          pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          UVar10.unknown =
               (undefined *)NSWorkspace::URLForApplicationWithBundleIdentifier_(self,pNVar9);
          if (UVar10.unknown != (undefined *)0x0) {
            Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar10);
          }
          pcVar28 = *(code **)(lVar16 + 0x38);
          (*pcVar28)(lVar33,UVar10.unknown == (undefined *)0x0,1,UVar8.unknown);
          (*pcVar28)(lVar31,1,1,UVar8.unknown);
          lVar29 = (long)*(int *)(puVar20 + 0x30);
          FUN_1000087e4(lVar33,lVar30,&DAT_100553d90,&DAT_10041bf10);
          FUN_1000087e4(lVar31,lVar30 + lVar29,&DAT_100553d90,&DAT_10041bf10);
          pcVar28 = *(code **)(lVar16 + 0x30);
          lVar11 = lVar30;
          (*pcVar28)(lVar30,1,UVar8.unknown);
          if ((int)lVar11 != 1) {
            FUN_1000087e4(lVar30,lVar23,&DAT_100553d90,&DAT_10041bf10);
            lVar11 = lVar30 + lVar29;
            (*pcVar28)(lVar11,1,UVar8.unknown);
            if ((int)lVar11 == 1) {
              FUN_10002a29c(lVar31,&DAT_100553d90,&DAT_10041bf10);
              FUN_10002a29c(lVar33,&DAT_100553d90,&DAT_10041bf10);
              (**(code **)(lVar16 + 8))(lVar23,UVar8.unknown);
              goto LAB_1002dc0d4;
            }
            (**(code **)(lVar16 + 0x20))(lVar17,lVar30 + lVar29,UVar8.unknown);
            puVar13 = &DAT_100553da0;
            FUN_1000036d0(&DAT_100553da0,PTR_typeMetadataAccessor_100520a18,
                          PTR_Foundation__Foundation__URL_>Swift__Equatable_100520a38);
            bVar7 = Swift::Equatable::___infix(lVar23,lVar17,UVar8.unknown,puVar13);
            pcVar28 = *(code **)(lVar16 + 8);
            (*pcVar28)(lVar17,UVar8.unknown);
            FUN_10002a29c(lVar31,&DAT_100553d90,&DAT_10041bf10);
            FUN_10002a29c(lVar33,&DAT_100553d90,&DAT_10041bf10);
            (*pcVar28)(lVar23,UVar8.unknown);
            FUN_10002a29c(lVar30,&DAT_100553d90,&DAT_10041bf10);
            if (bVar7) goto LAB_1002dbe44;
LAB_1002dc0f4:
            pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
            UVar10.unknown =
                 (undefined *)NSWorkspace::URLForApplicationWithBundleIdentifier_(self,pNVar9);
            if (UVar10.unknown == (undefined *)0x0) {
              _swift_bridgeObjectRelease(uVar4);
              IVar12 = 0;
            }
            else {
              Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar10);
              UVar10.unknown = puVar22;
              (**(code **)(lVar16 + 0x20))(puVar22,lVar21,UVar8.unknown);
              SVar37 = Foundation::URL::get_path(UVar10);
              pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
              _swift_bridgeObjectRelease(SVar37.bridgeObject);
              IVar12 = NSWorkspace::iconForFile_(self,pNVar9);
              _swift_bridgeObjectRelease(uVar4);
              (**(code **)(lVar16 + 8))(puVar22,UVar8.unknown);
            }
            puVar13 = local_140;
            _swift_isUniquelyReferenced_nonNull_native();
            if (((ulong)puVar13 & 1) == 0) {
              plVar1 = (long *)(local_140 + 0x10);
              local_140 = (undefined *)0x0;
              FUN_1001c5590(0,*plVar1 + 1,1);
            }
            uVar27 = *(ulong *)(local_140 + 0x10);
            if (*(ulong *)(local_140 + 0x18) >> 1 <= uVar27) {
              puVar13 = (undefined *)(ulong)(1 < *(ulong *)(local_140 + 0x18));
              FUN_1001c5590(puVar13,uVar27 + 1,1,local_140);
              local_140 = puVar13;
            }
            *(ulong *)(local_140 + 0x10) = uVar27 + 1;
            *(undefined8 *)(local_140 + uVar27 * 0x30 + 0x20) = uVar26;
            *(undefined8 *)(local_140 + uVar27 * 0x30 + 0x28) = uVar3;
            *(undefined8 *)(local_140 + uVar27 * 0x30 + 0x30) = uVar24;
            *(undefined8 *)(local_140 + uVar27 * 0x30 + 0x40) = uVar36;
            *(undefined8 *)(local_140 + uVar27 * 0x30 + 0x38) = uVar35;
            *(ID *)(local_140 + uVar27 * 0x30 + 0x48) = IVar12;
            if (uVar32 == uVar18) goto LAB_1002dc2b8;
            goto LAB_1002dbdb0;
          }
          FUN_10002a29c(lVar31,&DAT_100553d90,&DAT_10041bf10);
          FUN_10002a29c(lVar33,&DAT_100553d90,&DAT_10041bf10);
          lVar29 = lVar30 + lVar29;
          (*pcVar28)(lVar29,1,UVar8.unknown);
          if ((int)lVar29 != 1) {
LAB_1002dc0d4:
            FUN_10002a29c(lVar30,&DAT_10054ea38,&DAT_100426270);
            goto LAB_1002dc0f4;
          }
          FUN_10002a29c(lVar30,&DAT_100553d90,&DAT_10041bf10);
LAB_1002dbe44:
          uVar34 = uVar34 + 1;
          _swift_bridgeObjectRelease(uVar4);
          puVar19 = puVar19 + 2;
        } while (uVar27 != uVar34);
      }
      _swift_bridgeObjectRelease(lVar25);
      _swift_bridgeObjectRelease(uVar35);
      _swift_bridgeObjectRelease(uVar3);
    } while (uVar32 != uVar18);
  }
LAB_1002dc2b8:
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x28);
  local_90.unknown = *(undefined **)(unaff_x20 + 0x20);
  local_70[0] = local_140;
  puVar20 = &DAT_10055ab18;
  FUN_100002f94(&DAT_10055ab18,&DAT_10042f178);
  SwiftUI::State::set_wrappedValue(&local_90,local_70,puVar20);
  lVar17 = local_178;
  Foundation::URL::_init();
  lVar21 = lVar17;
  (**(code **)(lVar16 + 0x30))(lVar17,1,UVar8.unknown);
  puVar20 = local_180;
  if ((int)lVar21 == 1) {
    FUN_10002a29c(lVar17,&DAT_100553d90,&DAT_10041bf10);
  }
  else {
    pcVar28 = *(code **)(lVar16 + 0x20);
    UVar10.unknown = local_180;
    (*pcVar28)(local_180,lVar17,UVar8.unknown);
    pNVar14 = Foundation::URL::_bridgeToObjectiveC(UVar10);
    UVar10.unknown = (undefined *)NSWorkspace::URLForApplicationToOpenURL_(self,pNVar14);
    lVar17 = local_190;
    if (UVar10.unknown == (undefined *)0x0) {
      (**(code **)(lVar16 + 8))(puVar20,UVar8.unknown);
    }
    else {
      Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar10);
      puVar22 = local_188;
      UVar10.unknown = local_188;
      (*pcVar28)(local_188,lVar17,UVar8.unknown);
      SVar37 = Foundation::URL::get_path(UVar10);
      pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(SVar37.bridgeObject);
      local_70[0] = (undefined *)NSWorkspace::iconForFile_(self,pNVar9);
      uStack_88 = *(undefined8 *)(unaff_x20 + 0x48);
      local_90.unknown = *(undefined **)(unaff_x20 + 0x40);
      puVar13 = &DAT_10054eed8;
      FUN_100002f94(&DAT_10054eed8,&DAT_1004249f0);
      SwiftUI::State::set_wrappedValue(&local_90,local_70,puVar13);
      pcVar28 = *(code **)(lVar16 + 8);
      (*pcVar28)(puVar22,UVar8.unknown);
      (*pcVar28)(puVar20,UVar8.unknown);
    }
  }
  uVar26 = *(undefined8 *)(unaff_x20 + 8);
  puVar20 = &DAT_10042f180;
  _swift_getKeyPath(&DAT_10042f180);
  puVar13 = &DAT_10042f1a8;
  _swift_getKeyPath(&DAT_10042f1a8);
  Combine::Published::_get_subscript(&local_90,uVar26,puVar20,puVar13);
  _swift_release(puVar20);
  _swift_release(puVar13);
  SVar6.unknown = local_90.unknown;
  SVar15.unknown = local_90.unknown;
  FUN_1002e0900(local_90.unknown,self);
  _swift_bridgeObjectRelease(SVar6.unknown);
  local_90.unknown = SVar15.unknown;
  _swift_bridgeObjectRetain(SVar15.unknown);
  FUN_1002dba00(&local_90);
  _swift_bridgeObjectRelease(SVar15.unknown);
  local_70[0] = *(undefined **)(unaff_x20 + 0x30);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x38);
  local_a0[0] = local_90.unknown;
  local_90.unknown = local_70[0];
  local_78 = uStack_88;
  FUN_1000087e4(local_70,auStack_a8,&DAT_10055aad8,&DAT_10042f078);
  FUN_1000087e4(&local_78,auStack_a8,&DAT_10055ab20,&DAT_10042f1c8);
  puVar20 = &DAT_10055ab28;
  FUN_100002f94(&DAT_10055ab28,&DAT_10042f1d0);
  SwiftUI::State::set_wrappedValue(&local_90,local_a0,puVar20);
  FUN_10002a29c(local_70,&DAT_10055aad8,&DAT_10042f078);
  FUN_10002a29c(&local_78,&DAT_10055ab20,&DAT_10042f1c8);
  return;
}

