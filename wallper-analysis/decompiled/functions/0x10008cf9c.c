// rea decompile_all
// name: FUN_10008cf9c
// address: 0x10008cf9c
// body: available
// range: 0x10008cf9c-0x10008d97f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10008d63c to 0x100227100 FUN_100227100 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10008d84c to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10008cf9c(void)

{
  undefined1 *puVar1;
  _StringGuts _Var2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  _StringGuts _Var7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int iVar15;
  bool bVar16;
  long lVar17;
  State SVar18;
  undefined *puVar19;
  long lVar20;
  ulong uVar21;
  Duration DVar22;
  Date DVar23;
  Date DVar24;
  Animation AVar25;
  long *plVar26;
  Date DVar27;
  undefined *puVar28;
  void *in_x3;
  code *pcVar29;
  undefined8 uVar30;
  long lVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  code *pcVar34;
  long unaff_x22;
  undefined8 *puVar35;
  undefined8 uVar36;
  ulong uVar37;
  undefined8 uVar38;
  undefined8 *puVar39;
  long lVar40;
  String SVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  String SVar45;
  String SVar46;
  
  lVar31 = *(long *)(unaff_x22 + 0x88);
  lVar17 = 0;
  FUN_100097a30();
  *(long *)(unaff_x22 + 0x1d8) = lVar17;
  if (*(char *)(lVar31 + *(int *)(lVar17 + 0x18)) != '\x01') {
    uVar32 = *(undefined8 *)(unaff_x22 + 0x1a0);
    lVar20 = *(long *)(unaff_x22 + 0x1a8);
    uVar36 = *(undefined8 *)(unaff_x22 + 0x170);
    uVar33 = *(undefined8 *)(unaff_x22 + 0x178);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x1c0));
    FUN_100029504(lVar31,uVar33,FUN_10009e280);
    (**(code **)(lVar20 + 0x38))(uVar33,0,1,uVar32);
    iVar15 = *(int *)(lVar17 + 0x34);
    FUN_1000087e4(uVar33,uVar36,&DAT_10054c040,&DAT_100420500);
    puVar19 = &DAT_10054efb0;
    FUN_100002f94(&DAT_10054efb0,&DAT_100421520);
    SwiftUI::State::set_wrappedValue((State *)(lVar31 + iVar15),uVar36,puVar19);
    FUN_10002a29c(uVar33,&DAT_10054c040,&DAT_100420500);
    goto LAB_10008d4c8;
  }
  uVar32 = *(undefined8 *)(unaff_x22 + 0x1a0);
  lVar20 = *(long *)(unaff_x22 + 0x1a8);
  uVar36 = *(undefined8 *)(unaff_x22 + 0x198);
  iVar15 = *(int *)(lVar17 + 0x34);
  SVar18.unknown = &DAT_10054efb0;
  FUN_100002f94(&DAT_10054efb0,&DAT_100421520);
  SwiftUI::State::get_wrappedValue(SVar18);
  pcVar34 = *(code **)(lVar20 + 0x30);
  (*pcVar34)(uVar36,1,uVar32);
  if ((int)uVar36 == 1) {
    FUN_10002a29c(*(undefined8 *)(unaff_x22 + 0x198),&DAT_10054c040,&DAT_100420500);
  }
  else {
    puVar35 = *(undefined8 **)(unaff_x22 + 0x1b8);
    puVar39 = *(undefined8 **)(unaff_x22 + 0x88);
    pcVar29 = FUN_10009e280;
    FUN_100007e64(*(undefined8 *)(unaff_x22 + 0x198),puVar35);
    _Var2.unknown = (undefined *)*puVar35;
    _Var7.unknown = (undefined *)puVar35[1];
    _swift_bridgeObjectRetain();
    SVar41.bridgeObject = (void *)0xe100000000000000;
    SVar41.str = (char *)0x7c;
    SVar43.bridgeObject = in_x3;
    SVar43.str = (char *)pcVar29;
    Swift::String::append(SVar41,SVar43);
    SVar41 = *(String *)(puVar35 + 2);
    _swift_bridgeObjectRetain(_Var7.unknown);
    SVar44.bridgeObject = in_x3;
    SVar44.str = (char *)pcVar29;
    Swift::String::append(SVar41,SVar44);
    _swift_bridgeObjectRelease(_Var7.unknown);
    DVar27.unknown = (undefined *)*puVar39;
    puVar19 = (undefined *)puVar39[1];
    _swift_bridgeObjectRetain();
    SVar42.bridgeObject = (void *)0xe100000000000000;
    SVar42.str = (char *)0x7c;
    SVar45.bridgeObject = in_x3;
    SVar45.str = (char *)pcVar29;
    Swift::String::append(SVar42,SVar45);
    SVar41 = *(String *)(puVar39 + 2);
    _swift_bridgeObjectRetain(puVar19);
    SVar46.bridgeObject = in_x3;
    SVar46.str = (char *)pcVar29;
    Swift::String::append(SVar41,SVar46);
    _swift_bridgeObjectRelease(puVar19);
    if ((_Var2.unknown == DVar27.unknown) && (_Var7.unknown == puVar19)) {
      _swift_bridgeObjectRelease(puVar19);
      _swift_bridgeObjectRelease(_Var7.unknown);
    }
    else {
      bVar16 = Swift::_stringCompareWithSmolCheck
                         (_Var2,_Var7,(_StringComparisonResult)(__int8)DVar27.unknown);
      _swift_bridgeObjectRelease(puVar19);
      _swift_bridgeObjectRelease(_Var7.unknown);
      if (!bVar16) {
        puVar1 = (undefined1 *)(*(long *)(unaff_x22 + 0x88) + (long)*(int *)(lVar17 + 0x20));
        uVar32 = *(undefined8 *)(puVar1 + 8);
        *(undefined1 *)(unaff_x22 + 0x68) = *puVar1;
        *(undefined8 *)(unaff_x22 + 0x70) = uVar32;
        AVar25.unknown = &DAT_10054ab50;
        FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
        *(undefined **)(unaff_x22 + 0x1e0) = AVar25.unknown;
        SwiftUI::State::get_wrappedValue((State)AVar25.unknown);
        if (*(char *)(unaff_x22 + 0x3a) == '\x01') {
          uVar32 = *(undefined8 *)(unaff_x22 + 0x88);
          DVar22.unknown = (undefined *)SwiftUI::Animation::easeInOut(0.55,AVar25);
          *(undefined8 *)(unaff_x22 + 0x100) = uVar32;
          pcVar34 = FUN_100098cc4;
          SwiftUI::_withAnimation();
          _swift_release();
          DVar22 = Swift::Duration::seconds(0.6,DVar22);
          (extension_Swift)::Swift::Clock::_get_continuous();
          plVar26 = (long *)0x80;
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0x1e8) = plVar26;
          *plVar26 = unaff_x22;
          plVar26[1] = (long)FUN_10008d980;
        }
        else {
          lVar17 = *(long *)(unaff_x22 + 0x1d8);
          DVar24.unknown = *(undefined **)(unaff_x22 + 0x1b0);
          lVar31 = *(long *)(unaff_x22 + 0x1b8);
          uVar32 = *(undefined8 *)(unaff_x22 + 0x130);
          uVar36 = *(undefined8 *)(unaff_x22 + 0x120);
          lVar20 = *(long *)(unaff_x22 + 0x128);
          iVar15 = *(int *)(lVar17 + 0x24);
          *(undefined1 *)(unaff_x22 + 0x3b) = 1;
          SwiftUI::State::set_wrappedValue
                    ((State *)(*(long *)(unaff_x22 + 0x88) + (long)iVar15),unaff_x22 + 0x3b,
                     *(undefined8 *)(unaff_x22 + 0x1e0));
          DVar23 = Foundation::Date::init();
          Foundation::Date::addingTimeInterval(1.5,DVar23);
          pcVar34 = *(code **)(lVar20 + 8);
          *(code **)(unaff_x22 + 0x1f8) = pcVar34;
          (*pcVar34)(uVar32,uVar36);
          *(undefined4 *)(unaff_x22 + 0x3c) = *(undefined4 *)(lVar17 + 0x38);
          lVar31 = *(long *)(lVar31 + 0x28);
          *(long *)(unaff_x22 + 0x200) = lVar31;
          SVar18.unknown = &DAT_10054efb8;
          FUN_100002f94(&DAT_10054efb8,&DAT_100420510);
          SwiftUI::State::get_wrappedValue(SVar18);
          lVar17 = *(long *)(DVar24.unknown + 0x28);
          FUN_100095498();
          if (lVar17 == lVar31) {
            pcVar34 = *(code **)(unaff_x22 + 0x1f8);
            DVar24.unknown = *(undefined **)(unaff_x22 + 0x130);
            DVar23.unknown = *(undefined **)(unaff_x22 + 0x138);
            uVar32 = *(undefined8 *)(unaff_x22 + 0x120);
            Foundation::Date::init();
            bVar16 = Foundation::Date::<_infix(DVar24,DVar23,DVar27);
            (*pcVar34)(DVar24.unknown,uVar32);
            if (bVar16) {
              (extension_Swift)::Swift::Clock::_get_continuous();
              *(undefined8 *)(unaff_x22 + 0x80) = 0;
              *(undefined8 *)(unaff_x22 + 0x78) = 50000000000000000;
              *(undefined8 *)(unaff_x22 + 0x28) = 0;
              *(undefined8 *)(unaff_x22 + 0x30) = 0;
              *(undefined1 *)(unaff_x22 + 0x38) = 1;
              _swift_task_switch(FUN_10008dfdc,0,0);
              return;
            }
          }
          uVar32 = *(undefined8 *)(unaff_x22 + 0x88);
          AVar25 = SwiftUI::Animation::easeInOut(0.12,DVar24.unknown);
          *(undefined8 *)(unaff_x22 + 0x50) = uVar32;
          SwiftUI::_withAnimation();
          _swift_release();
          AVar25 = SwiftUI::Animation::easeIn(0.31,AVar25);
          *(undefined8 *)(unaff_x22 + 0xa0) = uVar32;
          SwiftUI::_withAnimation();
          _swift_release();
          AVar25 = SwiftUI::Animation::easeOut(0.31,AVar25);
          DVar22.unknown = (undefined *)SwiftUI::Animation::delay(0.31,AVar25);
          _swift_release(AVar25.unknown);
          *(undefined8 *)(unaff_x22 + 0xc0) = uVar32;
          pcVar34 = FUN_100098c94;
          SwiftUI::_withAnimation();
          _swift_release();
          DVar22 = Swift::Duration::seconds(0.66,DVar22);
          (extension_Swift)::Swift::Clock::_get_continuous();
          plVar26 = (long *)0x80;
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0x220) = plVar26;
          *plVar26 = unaff_x22;
          plVar26[1] = (long)FUN_10008e658;
        }
        goto LAB_10008d600;
      }
    }
    FUN_100095498(*(undefined8 *)(unaff_x22 + 0x1b8));
  }
  uVar32 = *(undefined8 *)(unaff_x22 + 0x1a0);
  lVar20 = *(long *)(unaff_x22 + 0x1a8);
  uVar36 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar33 = *(undefined8 *)(unaff_x22 + 400);
  lVar17 = *(long *)(unaff_x22 + 200);
  lVar40 = *(long *)(unaff_x22 + 0xa8);
  SwiftUI::State::get_wrappedValue(SVar18);
  pcVar29 = *(code **)(lVar20 + 0x38);
  (*pcVar29)(uVar36,1,1,uVar32);
  lVar40 = (long)*(int *)(lVar40 + 0x30);
  FUN_1000087e4(uVar33,lVar17,&DAT_10054c040,&DAT_100420500);
  FUN_1000087e4(uVar36,lVar17 + lVar40,&DAT_10054c040,&DAT_100420500);
  lVar20 = lVar17;
  (*pcVar34)(lVar17,1,uVar32);
  uVar32 = *(undefined8 *)(unaff_x22 + 0x1a0);
  if ((int)lVar20 == 1) {
    uVar36 = *(undefined8 *)(unaff_x22 + 400);
    FUN_10002a29c(*(undefined8 *)(unaff_x22 + 0x188),&DAT_10054c040,&DAT_100420500);
    FUN_10002a29c(uVar36,&DAT_10054c040,&DAT_100420500);
    lVar17 = lVar17 + lVar40;
    (*pcVar34)(lVar17,1,uVar32);
    if ((int)lVar17 == 1) {
      FUN_10002a29c(*(undefined8 *)(unaff_x22 + 200),&DAT_10054c040,&DAT_100420500);
LAB_10008d400:
      uVar33 = *(undefined8 *)(unaff_x22 + 0x1a0);
      uVar36 = *(undefined8 *)(unaff_x22 + 0x170);
      uVar32 = *(undefined8 *)(unaff_x22 + 0x178);
      FUN_100029504(*(undefined8 *)(unaff_x22 + 0x88),uVar32,FUN_10009e280);
      (*pcVar29)(uVar32,0,1,uVar33);
      puVar19 = &DAT_10054c040;
      puVar28 = &DAT_100420500;
      FUN_1000087e4(uVar32,uVar36,&DAT_10054c040,&DAT_100420500);
      SwiftUI::State::set_wrappedValue((State *)(lVar31 + iVar15),uVar36,SVar18.unknown);
    }
    else {
LAB_10008d360:
      uVar32 = *(undefined8 *)(unaff_x22 + 200);
      puVar19 = &DAT_10054c060;
      puVar28 = &DAT_10041d7d8;
    }
    FUN_10002a29c(uVar32,puVar19,puVar28);
  }
  else {
    FUN_1000087e4(*(undefined8 *)(unaff_x22 + 200),*(undefined8 *)(unaff_x22 + 0x180),&DAT_10054c040
                  ,&DAT_100420500);
    lVar20 = lVar17 + lVar40;
    (*pcVar34)(lVar20,1,uVar32);
    if ((int)lVar20 == 1) {
      uVar32 = *(undefined8 *)(unaff_x22 + 400);
      uVar36 = *(undefined8 *)(unaff_x22 + 0x180);
      FUN_10002a29c(*(undefined8 *)(unaff_x22 + 0x188),&DAT_10054c040,&DAT_100420500);
      FUN_10002a29c(uVar32,&DAT_10054c040,&DAT_100420500);
      FUN_100095498(uVar36);
      goto LAB_10008d360;
    }
    uVar33 = *(undefined8 *)(unaff_x22 + 0x1b0);
    uVar32 = *(undefined8 *)(unaff_x22 + 0x188);
    uVar36 = *(undefined8 *)(unaff_x22 + 400);
    uVar37 = *(ulong *)(unaff_x22 + 0x180);
    uVar38 = *(undefined8 *)(unaff_x22 + 200);
    FUN_100007e64(lVar17 + lVar40,uVar33,FUN_10009e280);
    uVar21 = uVar37;
    FUN_1000a19c8(uVar37,uVar33);
    FUN_100095498(uVar33);
    FUN_10002a29c(uVar32,&DAT_10054c040,&DAT_100420500);
    FUN_10002a29c(uVar36,&DAT_10054c040,&DAT_100420500);
    FUN_100095498(uVar37);
    FUN_10002a29c(uVar38,&DAT_10054c040,&DAT_100420500);
    if ((uVar21 & 1) != 0) goto LAB_10008d400;
  }
  puVar1 = (undefined1 *)
           (*(long *)(unaff_x22 + 0x88) + (long)*(int *)(*(long *)(unaff_x22 + 0x1d8) + 0x20));
  uVar32 = *(undefined8 *)(puVar1 + 8);
  *(undefined1 *)(unaff_x22 + 0x58) = *puVar1;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar32;
  DVar22.unknown = &DAT_10054ab50;
  pcVar34 = (code *)&DAT_10041d0f0;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue((State)DVar22.unknown);
  if ((*(byte *)(unaff_x22 + 0x39) & 1) == 0) {
    DVar22 = Swift::Duration::seconds(0.2,DVar22);
    (extension_Swift)::Swift::Clock::_get_continuous();
    plVar26 = (long *)0x80;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x230) = plVar26;
    *plVar26 = unaff_x22;
    plVar26[1] = (long)FUN_10008eb84;
LAB_10008d600:
    FUN_100227100(DVar22.unknown,pcVar34,0,0,1);
    return;
  }
  _swift_release(*(undefined8 *)(unaff_x22 + 0x1c0));
LAB_10008d4c8:
  uVar32 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar36 = *(undefined8 *)(unaff_x22 + 400);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar33 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar38 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar30 = *(undefined8 *)(unaff_x22 + 200);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1b8));
  _swift_task_dealloc(uVar32);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar36);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar33);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar38);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar30);
                    /* WARNING: Could not recover jumptable at 0x00010008d5a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

