// rea decompile_all
// name: FUN_100114b4c
// address: 0x100114b4c
// body: available
// range: 0x100114b4c-0x1001156b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100114fe0 to 0x100413514 /usr/lib/swift/libswift_Concurrency.dylib::(extension_Swift)::Swift::Task::$get_value (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100115540 to 0x100413538 /usr/lib/swift/libswift_Concurrency.dylib::(extension_Swift)::Swift::Task::$sleep (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100114b4c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  undefined1 uVar8;
  int iVar9;
  bool bVar10;
  __uint8 _Var11;
  State SVar12;
  NSString *pNVar13;
  TaskPriority TVar14;
  long *plVar15;
  Task TVar16;
  undefined *puVar17;
  undefined *puVar18;
  char *pcVar19;
  TaskPriority TVar20;
  UnownedSerialExecutor UVar21;
  void *pvVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  ulong uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long lVar28;
  char *pcVar29;
  long unaff_x22;
  void *pvVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  ulong *puVar33;
  ID IVar34;
  undefined8 uVar35;
  code *pcVar36;
  ulong uVar37;
  long lVar38;
  long lVar39;
  ulong uVar40;
  undefined8 uVar41;
  code *pcVar42;
  code *pcVar43;
  undefined8 uVar44;
  String SVar45;
  String SVar46;
  undefined7 extraout_var;
  
  puVar33 = *(ulong **)(unaff_x22 + 0xf0);
  pcVar29 = (char *)*puVar33;
  *(char **)(unaff_x22 + 0x1b8) = pcVar29;
  pvVar30 = (void *)puVar33[1];
  *(void **)(unaff_x22 + 0x1c0) = pvVar30;
  uVar25 = (ulong)pcVar29 & 0xffffffffffff;
  if (((ulong)pvVar30 & 0x2000000000000000) != 0) {
    uVar25 = (ulong)pvVar30 >> 0x38 & 0xf;
  }
  if (uVar25 == 0) {
    _swift_release(*(undefined8 *)(unaff_x22 + 0x1a0));
LAB_100114d08:
    uVar27 = *(undefined8 *)(unaff_x22 + 400);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x180);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x188);
    uVar31 = *(undefined8 *)(unaff_x22 + 0x178);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x150);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x158);
    uVar35 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x148);
    uVar44 = *(undefined8 *)(unaff_x22 + 0x138);
    uVar32 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x128);
    uVar41 = *(undefined8 *)(unaff_x22 + 0x110);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x118);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x198));
    _swift_task_dealloc(uVar27);
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar24);
    _swift_task_dealloc(uVar31);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar26);
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar35);
    _swift_task_dealloc(uVar44);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar32);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar41);
                    /* WARNING: Could not recover jumptable at 0x000100114dbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  if (DAT_100556f80 != -1) {
    _swift_once(&DAT_100556f80,FUN_1001dd604);
    puVar33 = *(ulong **)(unaff_x22 + 0xf0);
  }
  uVar27 = DAT_100577cf0;
  lVar39 = *(long *)(unaff_x22 + 0xf8);
  *(undefined8 *)(unaff_x22 + 0x1c8) = DAT_100577cf0;
  puVar23 = (undefined8 *)((long)puVar33 + (long)*(int *)(lVar39 + 0x2c));
  uVar26 = *puVar23;
  *(undefined8 *)(unaff_x22 + 0x1d0) = uVar26;
  uVar24 = puVar23[1];
  *(undefined8 *)(unaff_x22 + 0x1d8) = uVar24;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar26;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar24;
  SVar12.unknown = &DAT_10054ba40;
  puVar17 = &DAT_100423be0;
  FUN_100002f94();
  *(undefined **)(unaff_x22 + 0x1e0) = SVar12.unknown;
  SwiftUI::State::get_wrappedValue(SVar12);
  *(undefined8 *)(unaff_x22 + 0x1e8) = *(undefined8 *)(unaff_x22 + 0xd0);
  FUN_100113fec();
  *(undefined **)(unaff_x22 + 0x1f0) = SVar12.unknown;
  *(undefined **)(unaff_x22 + 0x1f8) = puVar17;
  puVar23 = (undefined8 *)((long)puVar33 + (long)*(int *)(lVar39 + 0x1c));
  uVar24 = *puVar23;
  *(undefined8 *)(unaff_x22 + 0x200) = uVar24;
  uVar8 = *(undefined1 *)(puVar23 + 1);
  *(undefined1 *)(unaff_x22 + 0x2d2) = uVar8;
  if (DAT_1005528e0 != -1) {
    _swift_once(&DAT_1005528e0,FUN_1000fe734);
  }
  lVar39 = DAT_100577c20;
  *(long *)(unaff_x22 + 0x208) = DAT_100577c20;
  IVar34 = *(ID *)(lVar39 + 0x10);
  pNVar13 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar34 = objc_stub::objectForKey_(IVar34,pNVar13);
  if (IVar34 != 0) {
    uVar27 = *(undefined8 *)(unaff_x22 + 0x1a0);
    lVar39 = *(long *)(unaff_x22 + 0xf0);
    lVar38 = *(long *)(unaff_x22 + 0xf8);
    _swift_bridgeObjectRelease(puVar17);
    _swift_release(uVar27);
    iVar9 = *(int *)(lVar38 + 0x24);
    *(ID *)(unaff_x22 + 0xe8) = IVar34;
    puVar17 = &DAT_10054eed8;
    FUN_100002f94(&DAT_10054eed8,&DAT_1004249f0);
    SwiftUI::State::set_wrappedValue((State *)(lVar39 + iVar9),unaff_x22 + 0xe8,puVar17);
    iVar9 = *(int *)(lVar38 + 0x28);
    *(undefined1 *)(unaff_x22 + 0x2d1) = 0;
    puVar17 = &DAT_10054ab50;
    FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
    SwiftUI::State::set_wrappedValue((State *)(lVar39 + iVar9),unaff_x22 + 0x2d1,puVar17);
    goto LAB_100114d08;
  }
  SVar45.bridgeObject = (void *)0xec0000002d657669;
  SVar45.str = (char *)0x7463617265746e69;
  SVar46.bridgeObject = pvVar30;
  SVar46.str = pcVar29;
  bVar10 = Swift::String::hasPrefix(SVar45,SVar46);
  TVar14.unknown = (undefined *)CONCAT71(extraout_var,bVar10);
  if (bVar10) {
    uVar26 = *(undefined8 *)(unaff_x22 + 0x160);
    lVar39 = *(long *)(unaff_x22 + 0x168);
    uVar35 = *(undefined8 *)(unaff_x22 + 0x158);
    FUN_1000087e4(*(long *)(unaff_x22 + 0xf0) + (long)*(int *)(*(long *)(unaff_x22 + 0xf8) + 0x14),
                  uVar35,&DAT_100553d90,&DAT_10041bf10);
    pcVar42 = *(code **)(lVar39 + 0x30);
    (*pcVar42)(uVar35,1,uVar26);
    if ((int)uVar35 == 1) {
      TVar14.unknown = *(undefined **)(unaff_x22 + 0x158);
      FUN_10002a29c(TVar14.unknown,&DAT_100553d90,&DAT_10041bf10);
    }
    else {
      uVar25 = *(ulong *)(unaff_x22 + 0x198);
      pcVar36 = *(code **)(*(long *)(unaff_x22 + 0x168) + 0x20);
      *(code **)(unaff_x22 + 0x210) = pcVar36;
      (*pcVar36)(uVar25,*(undefined8 *)(unaff_x22 + 0x158),*(undefined8 *)(unaff_x22 + 0x160));
      FUN_10004306c();
      if (((uint)uVar25 & 0xff) != 7) {
        puVar17 = &DAT_1004262a8;
        _swift_getKeyPath(&DAT_1004262a8);
        puVar18 = &DAT_1004262d0;
        _swift_getKeyPath(&DAT_1004262d0);
        Combine::Published::_get_subscript(unaff_x22 + 0xb0,uVar27,puVar17,puVar18);
        _swift_release(puVar18);
        _swift_release(puVar17);
        lVar39 = *(long *)(unaff_x22 + 0xb0);
        if (*(long *)(lVar39 + 0x10) == 0) {
          bVar10 = true;
        }
        else {
          _swift_bridgeObjectRetain(lVar39);
          pcVar19 = pcVar29;
          pvVar22 = pvVar30;
          FUN_10000464c(pcVar29);
          bVar10 = ((ulong)pvVar22 & 1) == 0;
          if (!bVar10) {
            (**(code **)(*(long *)(unaff_x22 + 0x168) + 0x10))
                      (*(undefined8 *)(unaff_x22 + 0x150),
                       *(long *)(lVar39 + 0x38) +
                       *(long *)(*(long *)(unaff_x22 + 0x168) + 0x48) * (long)pcVar19,
                       *(undefined8 *)(unaff_x22 + 0x160));
          }
          _swift_bridgeObjectRelease(lVar39);
        }
        uVar27 = *(undefined8 *)(unaff_x22 + 0x160);
        uVar24 = *(undefined8 *)(unaff_x22 + 0x148);
        uVar26 = *(undefined8 *)(unaff_x22 + 0x150);
        lVar28 = *(long *)(unaff_x22 + 0x130);
        lVar38 = *(long *)(unaff_x22 + 0x138);
        pcVar43 = *(code **)(*(long *)(unaff_x22 + 0x168) + 0x38);
        (*pcVar43)(uVar26,bVar10,1,uVar27);
        _swift_bridgeObjectRelease(lVar39);
        (*pcVar43)(uVar24,1,1,uVar27);
        lVar28 = (long)*(int *)(lVar28 + 0x30);
        FUN_1000087e4(uVar26,lVar38,&DAT_100553d90,&DAT_10041bf10);
        FUN_1000087e4(uVar24,lVar38 + lVar28,&DAT_100553d90,&DAT_10041bf10);
        lVar39 = lVar38;
        (*pcVar42)(lVar38,1,uVar27);
        uVar27 = *(undefined8 *)(unaff_x22 + 0x160);
        if ((int)lVar39 == 1) {
          uVar24 = *(undefined8 *)(unaff_x22 + 0x150);
          FUN_10002a29c(*(undefined8 *)(unaff_x22 + 0x148),&DAT_100553d90,&DAT_10041bf10);
          FUN_10002a29c(uVar24,&DAT_100553d90,&DAT_10041bf10);
          lVar38 = lVar38 + lVar28;
          (*pcVar42)(lVar38,1,uVar27);
          if ((int)lVar38 == 1) {
            FUN_10002a29c(*(undefined8 *)(unaff_x22 + 0x138),&DAT_100553d90,&DAT_10041bf10);
LAB_10011530c:
            FUN_1001db584(uVar25 & 0xffffffff,pcVar29,pvVar30);
          }
          else {
LAB_100115228:
            FUN_10002a29c(*(undefined8 *)(unaff_x22 + 0x138),&DAT_10054ea38,&DAT_100426270);
          }
        }
        else {
          FUN_1000087e4(*(undefined8 *)(unaff_x22 + 0x138),*(undefined8 *)(unaff_x22 + 0x140),
                        &DAT_100553d90,&DAT_10041bf10);
          lVar39 = lVar38 + lVar28;
          (*pcVar42)(lVar39,1,uVar27);
          if ((int)lVar39 == 1) {
            uVar27 = *(undefined8 *)(unaff_x22 + 0x160);
            lVar39 = *(long *)(unaff_x22 + 0x168);
            uVar24 = *(undefined8 *)(unaff_x22 + 0x150);
            uVar26 = *(undefined8 *)(unaff_x22 + 0x140);
            FUN_10002a29c(*(undefined8 *)(unaff_x22 + 0x148),&DAT_100553d90,&DAT_10041bf10);
            FUN_10002a29c(uVar24,&DAT_100553d90,&DAT_10041bf10);
            (**(code **)(lVar39 + 8))(uVar26,uVar27);
            goto LAB_100115228;
          }
          uVar41 = *(undefined8 *)(unaff_x22 + 400);
          uVar27 = *(undefined8 *)(unaff_x22 + 0x160);
          lVar39 = *(long *)(unaff_x22 + 0x168);
          uVar24 = *(undefined8 *)(unaff_x22 + 0x148);
          uVar35 = *(undefined8 *)(unaff_x22 + 0x150);
          uVar26 = *(undefined8 *)(unaff_x22 + 0x138);
          uVar32 = *(undefined8 *)(unaff_x22 + 0x140);
          (*pcVar36)(uVar41,lVar38 + lVar28,uVar27);
          puVar17 = &DAT_100553da0;
          FUN_1000036d0(&DAT_100553da0,PTR_typeMetadataAccessor_100520a18,
                        PTR_Foundation__Foundation__URL_>Swift__Equatable_100520a38);
          bVar10 = Swift::Equatable::___infix(uVar32,uVar41,uVar27,puVar17);
          pcVar42 = *(code **)(lVar39 + 8);
          (*pcVar42)(uVar41,uVar27);
          FUN_10002a29c(uVar24,&DAT_100553d90,&DAT_10041bf10);
          FUN_10002a29c(uVar35,&DAT_100553d90,&DAT_10041bf10);
          (*pcVar42)(uVar32,uVar27);
          FUN_10002a29c(uVar26,&DAT_100553d90,&DAT_10041bf10);
          if (bVar10) goto LAB_10011530c;
        }
        *(undefined8 *)(unaff_x22 + 0x218) = 0;
        uVar27 = *(undefined8 *)(unaff_x22 + 0x1c8);
        puVar17 = &DAT_1004262a8;
        _swift_getKeyPath(&DAT_1004262a8);
        puVar18 = &DAT_1004262d0;
        _swift_getKeyPath(&DAT_1004262d0);
        Combine::Published::_get_subscript(unaff_x22 + 0xb8,uVar27,puVar17,puVar18);
        _swift_release(puVar18);
        _swift_release(puVar17);
        lVar39 = *(long *)(unaff_x22 + 0xb8);
        if (*(long *)(lVar39 + 0x10) == 0) {
LAB_1001154f0:
          _swift_bridgeObjectRelease(lVar39);
          plVar15 = (long *)(ulong)*(uint *)(PTR__sleep_100524758 + 4);
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0x230) = plVar15;
          *plVar15 = unaff_x22;
          plVar15[1] = (long)FUN_10011596c;
          (extension_Swift)::Swift::Task::_sleep(100000000);
          return;
        }
        lVar38 = *(long *)(unaff_x22 + 0x1b8);
        uVar25 = *(ulong *)(unaff_x22 + 0x1c0);
        FUN_10000464c(lVar38);
        if ((uVar25 & 1) == 0) goto LAB_1001154f0;
        pcVar36 = *(code **)(unaff_x22 + 0x210);
        uVar8 = *(undefined1 *)(unaff_x22 + 0x2d2);
        uVar35 = *(undefined8 *)(unaff_x22 + 0x200);
        puVar17 = *(undefined **)(unaff_x22 + 0x188);
        uVar24 = *(undefined8 *)(unaff_x22 + 400);
        uVar32 = *(undefined8 *)(unaff_x22 + 0x180);
        lVar28 = *(long *)(unaff_x22 + 0x168);
        lVar6 = *(long *)(unaff_x22 + 0x170);
        uVar41 = *(undefined8 *)(unaff_x22 + 0x160);
        uVar27 = *(undefined8 *)(unaff_x22 + 0x120);
        uVar26 = *(undefined8 *)(unaff_x22 + 0x128);
        pcVar42 = *(code **)(lVar28 + 0x10);
        (*pcVar42)(uVar32,*(long *)(lVar39 + 0x38) + *(long *)(lVar28 + 0x48) * lVar38,uVar41);
        _swift_bridgeObjectRelease(lVar39);
        TVar14.unknown = puVar17;
        (*pcVar36)(puVar17,uVar32,uVar41);
        Swift::TaskPriority::get_userInitiated(TVar14);
        TVar20 = Swift::TaskPriority::typeMetadataAccessor();
        lVar39 = *(long *)(TVar20.unknown + -8);
        (**(code **)(lVar39 + 0x38))(uVar26,0,1,TVar20.unknown);
        (*pcVar42)(uVar24,puVar17,uVar41);
        uVar25 = (ulong)*(byte *)(lVar28 + 0x50);
        uVar37 = uVar25 + 0x20 & (uVar25 ^ 0xffffffffffffffff);
        uVar40 = lVar6 + uVar37 + 7 & 0xfffffffffffffff8;
        puVar17 = &DAT_10052ccf0;
        _swift_allocObject(&DAT_10052ccf0,uVar40 + 9,uVar25 | 7);
        *(undefined8 *)(puVar17 + 0x10) = 0;
        *(undefined8 *)(puVar17 + 0x18) = 0;
        (*pcVar36)(puVar17 + uVar37,uVar24,uVar41);
        *(undefined8 *)(puVar17 + uVar40) = uVar35;
        *(undefined1 *)((long)(puVar17 + uVar40) + 8) = uVar8;
        FUN_1000087e4(uVar26,uVar27,&DAT_100561090,&DAT_10041c870);
        (**(code **)(lVar39 + 0x30))(uVar27,1,TVar20.unknown);
        TVar14.unknown = puVar17;
        _swift_retain();
        uVar24 = *(undefined8 *)(unaff_x22 + 0x120);
        if ((int)uVar27 == 1) {
          FUN_10002a29c(uVar24,&DAT_100561090,&DAT_10041c870);
          uVar25 = 0x1000;
        }
        else {
          _Var11 = Swift::TaskPriority::get_rawValue(TVar14);
          (**(code **)(lVar39 + 8))(uVar24,TVar20.unknown);
          uVar25 = (ulong)_Var11 | 0x1000;
        }
        lVar39 = *(long *)(puVar17 + 0x10);
        lVar38 = *(long *)(puVar17 + 0x18);
        _swift_unknownObjectRetain(lVar39);
        _swift_release(puVar17);
        if (lVar39 == 0) {
          UVar21.unknown = (undefined *)0x0;
          lVar38 = 0;
        }
        else {
          _swift_getObjectType(lVar39);
          UVar21 = Swift::Actor::get_unownedExecutor();
          _swift_unknownObjectRelease(lVar39);
        }
        puVar18 = &DAT_10052cd18;
        _swift_allocObject(&DAT_10052cd18,0x20,7);
        *(undefined **)(puVar18 + 0x10) = &DAT_1004262f8;
        *(undefined **)(puVar18 + 0x18) = puVar17;
        puVar17 = &DAT_10054bd30;
        FUN_100002f94(&DAT_10054bd30,&DAT_10041d460);
        if (lVar38 == 0 && UVar21.unknown == (undefined *)0x0) {
          puVar23 = (undefined8 *)0x0;
        }
        else {
          puVar23 = (undefined8 *)(unaff_x22 + 0x10);
          *puVar23 = 0;
          *(undefined8 *)(unaff_x22 + 0x18) = 0;
          *(undefined **)(unaff_x22 + 0x20) = UVar21.unknown;
          *(long *)(unaff_x22 + 0x28) = lVar38;
        }
        uVar27 = *(undefined8 *)(unaff_x22 + 0x128);
        _swift_task_create(uVar25,puVar23,puVar17,&DAT_100426300,puVar18);
        *(ulong *)(unaff_x22 + 0x220) = uVar25;
        FUN_10002a29c(uVar27,&DAT_100561090,&DAT_10041c870);
        plVar15 = (long *)(ulong)*(uint *)(PTR__get_value_100524738 + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x228) = plVar15;
        *plVar15 = unaff_x22;
        plVar15[1] = (long)FUN_1001156b4;
        TVar16.unknown = (undefined *)(unaff_x22 + 200);
        goto LAB_100114fc4;
      }
      TVar14.unknown = *(undefined **)(unaff_x22 + 0x198);
      (**(code **)(*(long *)(unaff_x22 + 0x168) + 8))
                (TVar14.unknown,*(undefined8 *)(unaff_x22 + 0x160));
    }
  }
  uVar26 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar35 = *(undefined8 *)(unaff_x22 + 0x118);
  lVar39 = *(long *)(unaff_x22 + 0x100);
  lVar38 = *(long *)(unaff_x22 + 0x108);
  uVar32 = *(undefined8 *)(unaff_x22 + 0xf0);
  Swift::TaskPriority::get_userInitiated(TVar14);
  TVar14 = Swift::TaskPriority::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x238) = TVar14.unknown;
  pcVar42 = *(code **)(*(long *)(TVar14.unknown + -8) + 0x38);
  *(code **)(unaff_x22 + 0x240) = pcVar42;
  (*pcVar42)(uVar35,0,1,TVar14.unknown);
  FUN_100119d34(uVar32,uVar26);
  uVar7 = *(uint *)(lVar39 + 0x50);
  *(uint *)(unaff_x22 + 0x2c8) = uVar7;
  uVar25 = (ulong)uVar7 & 0xff;
  uVar40 = uVar25 + 0x28 & (uVar25 ^ 0xffffffffffffffff);
  uVar37 = lVar38 + uVar40 + 7 & 0xfffffffffffffff8;
  puVar17 = &DAT_10052cca0;
  _swift_allocObject(&DAT_10052cca0,uVar37 + 9,uVar25 | 7);
  *(undefined8 *)(puVar17 + 0x10) = 0;
  *(undefined8 *)(puVar17 + 0x18) = 0;
  *(undefined8 *)(puVar17 + 0x20) = uVar27;
  FUN_100119e80(uVar26,puVar17 + uVar40);
  *(undefined8 *)(puVar17 + uVar37) = uVar24;
  *(undefined1 *)((long)(puVar17 + uVar37) + 8) = uVar8;
  _swift_retain(uVar27);
  uVar27 = 0;
  FUN_100176fac(0,0,uVar35,&DAT_100426280,puVar17);
  *(undefined8 *)(unaff_x22 + 0x248) = uVar27;
  FUN_10002a29c(uVar35,&DAT_100561090,&DAT_10041c870);
  plVar15 = (long *)(ulong)*(uint *)(PTR__get_value_100524738 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x250) = plVar15;
  puVar17 = &DAT_10054bd30;
  FUN_100002f94(&DAT_10054bd30,&DAT_10041d460);
  *(undefined **)(unaff_x22 + 600) = puVar17;
  *plVar15 = unaff_x22;
  plVar15[1] = (long)FUN_1001159cc;
  TVar16.unknown = (undefined *)(unaff_x22 + 0xc0);
LAB_100114fc4:
  (extension_Swift)::Swift::Task::_get_value(TVar16);
  return;
}

