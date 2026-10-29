// rea decompile_all
// name: FUN_1003d4f3c
// address: 0x1003d4f3c
// body: available
// range: 0x1003d4f3c-0x1003d599b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003d5968 to 0x100413514 /usr/lib/swift/libswift_Concurrency.dylib::(extension_Swift)::Swift::Task::$get_value (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1003d4f3c(undefined8 *param_1,code *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  char *pcVar13;
  NSString *pNVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  URL self;
  long *plVar17;
  TaskPriority TVar18;
  Task TVar19;
  char *pcVar20;
  char *pcVar21;
  code *pcVar22;
  undefined8 uVar23;
  ulong uVar24;
  long lVar25;
  code *pcVar26;
  long lVar27;
  ID IVar28;
  undefined8 uVar29;
  long unaff_x22;
  bool bVar30;
  undefined8 uVar31;
  long lVar32;
  undefined8 uVar33;
  code *pcVar34;
  ulong uVar35;
  String SVar36;
  String SVar37;
  
  if (DAT_100556f80 != -1) {
    param_1 = &DAT_100556f80;
    param_2 = FUN_1001dd604;
    _swift_once();
  }
  uVar1 = DAT_100577cf0;
  uVar31 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar29 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar33 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar27 = *(long *)(unaff_x22 + 0x80);
  lVar25 = *(long *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0xf8) = DAT_100577cf0;
  FUN_1003cffb8();
  *(undefined8 **)(unaff_x22 + 0x100) = param_1;
  *(code **)(unaff_x22 + 0x108) = param_2;
  lVar10 = 0;
  FUN_1003e4bc8();
  iVar8 = *(int *)(lVar10 + 0x38);
  *(int *)(unaff_x22 + 0x188) = iVar8;
  *(undefined8 *)(unaff_x22 + 0x20) = 0;
  puVar11 = &DAT_10054eed8;
  FUN_100002f94(&DAT_10054eed8,&DAT_1004249f0);
  *(undefined **)(unaff_x22 + 0x110) = puVar11;
  SwiftUI::State::set_wrappedValue((State *)(lVar25 + iVar8),unaff_x22 + 0x20);
  pcVar22 = *(code **)(lVar27 + 0x38);
  *(code **)(unaff_x22 + 0x118) = pcVar22;
  (*pcVar22)(uVar29,1,1,uVar33);
  lVar27 = (long)*(int *)(lVar10 + 0x3c);
  *(int *)(unaff_x22 + 0x18c) = *(int *)(lVar10 + 0x3c);
  pcVar20 = &DAT_10041bf10;
  pcVar21 = pcVar20;
  FUN_1000087e4(uVar29,uVar31,&DAT_100553d90);
  puVar12 = &DAT_100560760;
  FUN_100002f94(&DAT_100560760,&DAT_100436168);
  *(undefined **)(unaff_x22 + 0x120) = puVar12;
  SwiftUI::State::set_wrappedValue((State *)(lVar25 + lVar27),uVar31,puVar12);
  FUN_10002a29c(uVar29,&DAT_100553d90);
  iVar9 = *(int *)(lVar10 + 0x40);
  *(undefined8 **)(unaff_x22 + 0x10) = param_1;
  *(code **)(unaff_x22 + 0x18) = param_2;
  _swift_bridgeObjectRetain(param_2);
  pcVar26 = (code *)&DAT_10054ab90;
  FUN_100002f94(&DAT_10054ab90,&DAT_10041bdb0);
  pcVar13 = (char *)(unaff_x22 + 0x10);
  SwiftUI::State::set_wrappedValue((State *)(lVar25 + iVar9));
  if (DAT_1005528e0 != -1) {
    pcVar13 = (char *)&DAT_1005528e0;
    pcVar26 = FUN_1000fe734;
    _swift_once();
  }
  lVar10 = DAT_100577c20;
  *(long *)(unaff_x22 + 0x128) = DAT_100577c20;
  FUN_1003cffb8();
  SVar36.bridgeObject = pcVar26;
  SVar36.str = pcVar13;
  SVar37.bridgeObject = pcVar21;
  SVar37.str = pcVar20;
  Swift::String::append(SVar36,SVar37);
  _swift_bridgeObjectRelease(pcVar26);
  IVar28 = *(ID *)(lVar10 + 0x10);
  pNVar14 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar28 = objc_stub::objectForKey_(IVar28,pNVar14);
  _swift_bridgeObjectRelease(0xe800000000000000);
  if (IVar28 != 0) {
    _swift_release(*(undefined8 *)(unaff_x22 + 0xe0));
    *(ID *)(unaff_x22 + 0x58) = IVar28;
    SwiftUI::State::set_wrappedValue((State *)(lVar25 + iVar8),unaff_x22 + 0x58,puVar11);
    puVar11 = &DAT_1004365f0;
    _swift_getKeyPath(&DAT_1004365f0);
    puVar15 = &DAT_100436618;
    _swift_getKeyPath(&DAT_100436618);
    Combine::Published::_get_subscript(unaff_x22 + 0x60,uVar1,puVar11,puVar15);
    _swift_release(puVar15);
    _swift_release(puVar11);
    lVar10 = *(long *)(unaff_x22 + 0x60);
    if (*(long *)(lVar10 + 0x10) == 0) {
      bVar30 = true;
    }
    else {
      _swift_bridgeObjectRetain(lVar10);
      pcVar26 = param_2;
      FUN_10000464c(param_1);
      bVar30 = ((ulong)pcVar26 & 1) == 0;
      if (!bVar30) {
        (**(code **)(*(long *)(unaff_x22 + 0x80) + 0x10))
                  (*(undefined8 *)(unaff_x22 + 200),
                   *(long *)(lVar10 + 0x38) +
                   *(long *)(*(long *)(unaff_x22 + 0x80) + 0x48) * (long)param_1,
                   *(undefined8 *)(unaff_x22 + 0x78));
      }
      _swift_bridgeObjectRelease(lVar10);
    }
    uVar31 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar33 = *(undefined8 *)(unaff_x22 + 200);
    (*pcVar22)(uVar33,bVar30,1,*(undefined8 *)(unaff_x22 + 0x78));
    _swift_bridgeObjectRelease(lVar10);
    _swift_bridgeObjectRelease(param_2);
    FUN_1000087e4(uVar33,uVar31,&DAT_100553d90,&DAT_10041bf10);
    SwiftUI::State::set_wrappedValue((State *)(lVar25 + lVar27),uVar31,puVar12);
    FUN_10002a29c(uVar33,&DAT_100553d90,&DAT_10041bf10);
    uVar31 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar33 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar3 = *(undefined8 *)(unaff_x22 + 200);
    uVar29 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x70);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xd8));
    _swift_task_dealloc(uVar31);
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar33);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar29);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar23);
                    /* WARNING: Could not recover jumptable at 0x0001003d53b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  puVar11 = &DAT_1004365f0;
  _swift_getKeyPath(&DAT_1004365f0);
  puVar15 = &DAT_100436618;
  _swift_getKeyPath(&DAT_100436618);
  Combine::Published::_get_subscript(unaff_x22 + 0x28,uVar1,puVar11,puVar15);
  _swift_release(puVar15);
  _swift_release(puVar11);
  lVar10 = *(long *)(unaff_x22 + 0x28);
  if (*(long *)(lVar10 + 0x10) == 0) {
    bVar30 = true;
  }
  else {
    _swift_bridgeObjectRetain(lVar10);
    puVar16 = param_1;
    pcVar26 = param_2;
    FUN_10000464c(param_1);
    bVar30 = ((ulong)pcVar26 & 1) == 0;
    if (!bVar30) {
      (**(code **)(*(long *)(unaff_x22 + 0x80) + 0x10))
                (*(undefined8 *)(unaff_x22 + 0xc0),
                 *(long *)(lVar10 + 0x38) +
                 *(long *)(*(long *)(unaff_x22 + 0x80) + 0x48) * (long)puVar16,
                 *(undefined8 *)(unaff_x22 + 0x78));
    }
    _swift_bridgeObjectRelease(lVar10);
  }
  uVar33 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar31 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar32 = *(long *)(unaff_x22 + 0x80);
  (*pcVar22)(uVar33,bVar30,1,uVar31);
  _swift_bridgeObjectRelease(lVar10);
  pcVar26 = *(code **)(lVar32 + 0x30);
  *(code **)(unaff_x22 + 0x130) = pcVar26;
  (*pcVar26)(uVar33,1,uVar31);
  if ((int)uVar33 == 1) {
    FUN_10002a29c(*(undefined8 *)(unaff_x22 + 0xc0),&DAT_100553d90,&DAT_10041bf10);
  }
  else {
    pcVar34 = *(code **)(*(long *)(unaff_x22 + 0x80) + 0x20);
    (*pcVar34)(*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0xc0),
               *(undefined8 *)(unaff_x22 + 0x78));
    self.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
    SVar36 = Foundation::URL::get_path(self);
    pNVar14 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar36.bridgeObject);
    IVar28 = NSFileManager::fileExistsAtPath_((ID)self.unknown,pNVar14);
    if ((int)IVar28 != 0) {
      uVar31 = *(undefined8 *)(unaff_x22 + 0xd0);
      TVar18.unknown = *(undefined **)(unaff_x22 + 0xd8);
      uVar33 = *(undefined8 *)(unaff_x22 + 0xa0);
      uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
      lVar10 = *(long *)(unaff_x22 + 0x80);
      lVar32 = *(long *)(unaff_x22 + 0x88);
      uVar29 = *(undefined8 *)(unaff_x22 + 0x70);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
      _swift_bridgeObjectRelease(param_2);
      pcVar26 = *(code **)(lVar10 + 0x10);
      (*pcVar26)(TVar18.unknown,uVar1,uVar2);
      (*pcVar22)(TVar18.unknown,0,1,uVar2);
      FUN_1000087e4(TVar18.unknown,uVar31,&DAT_100553d90,&DAT_10041bf10);
      SwiftUI::State::set_wrappedValue((State *)(lVar25 + lVar27),uVar31,puVar12);
      FUN_10002a29c(TVar18.unknown,&DAT_100553d90,&DAT_10041bf10);
      Swift::TaskPriority::get_userInitiated(TVar18);
      TVar18 = Swift::TaskPriority::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar18.unknown + -8) + 0x38))(uVar29,0,1,TVar18.unknown);
      (*pcVar26)(uVar33,uVar1,uVar2);
      uVar24 = (ulong)*(byte *)(lVar10 + 0x50);
      uVar35 = uVar24 + 0x20 & (uVar24 ^ 0xffffffffffffffff);
      puVar11 = &DAT_10053df78;
      _swift_allocObject(&DAT_10053df78,uVar35 + lVar32,uVar24 | 7);
      *(undefined8 *)(puVar11 + 0x10) = 0;
      *(undefined8 *)(puVar11 + 0x18) = 0;
      (*pcVar34)(puVar11 + uVar35,uVar33,uVar2);
      uVar31 = 0;
      FUN_100176fac(0,0,uVar29,&DAT_100436660,puVar11);
      *(undefined8 *)(unaff_x22 + 0x138) = uVar31;
      FUN_10002a29c(uVar29,&DAT_100561090,&DAT_10041c870);
      plVar17 = (long *)(ulong)*(uint *)(PTR__get_value_100524738 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x140) = plVar17;
      FUN_100002f94(&DAT_10054bd30,&DAT_10041d460);
      *plVar17 = unaff_x22;
      plVar17[1] = (long)FUN_1003d599c;
      TVar19.unknown = (undefined *)(unaff_x22 + 0x48);
      goto LAB_1003d594c;
    }
    (**(code **)(*(long *)(unaff_x22 + 0x80) + 8))
              (*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0x78));
  }
  uVar31 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar33 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar32 = *(long *)(unaff_x22 + 0x68);
  lVar10 = 0;
  FUN_10040211c();
  FUN_1000087e4(lVar32 + *(int *)(lVar10 + 0x18),uVar31,&DAT_100553d90,&DAT_10041bf10);
  (*pcVar26)(uVar31,1,uVar33);
  if ((int)uVar31 == 1) {
    TVar18.unknown = *(undefined **)(unaff_x22 + 0xb8);
    lVar32 = *(long *)(unaff_x22 + 0x68);
    FUN_10002a29c(TVar18.unknown,&DAT_100553d90,&DAT_10041bf10);
    if (((*(byte *)(lVar32 + *(int *)(lVar10 + 0x40)) & 1) == 0) &&
       ((*(byte *)(*(long *)(unaff_x22 + 0x68) + (long)*(int *)(lVar10 + 0x48)) & 1) == 0)) {
      uVar31 = *(undefined8 *)(unaff_x22 + 0xd0);
      TVar18.unknown = *(undefined **)(unaff_x22 + 0xd8);
      uVar33 = *(undefined8 *)(unaff_x22 + 0x78);
      FUN_1001da870(TVar18.unknown,param_1,param_2);
      (*pcVar22)(TVar18.unknown,0,1,uVar33);
      FUN_1000087e4(TVar18.unknown,uVar31,&DAT_100553d90,&DAT_10041bf10);
      SwiftUI::State::set_wrappedValue((State *)(lVar25 + lVar27),uVar31,puVar12);
      FUN_10002a29c(TVar18.unknown,&DAT_100553d90,&DAT_10041bf10);
    }
  }
  else {
    uVar31 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar29 = *(undefined8 *)(unaff_x22 + 0xd8);
    TVar18.unknown = *(undefined **)(unaff_x22 + 0x98);
    uVar33 = *(undefined8 *)(unaff_x22 + 0x78);
    lVar32 = *(long *)(unaff_x22 + 0x80);
    (**(code **)(lVar32 + 0x20))(TVar18.unknown,*(undefined8 *)(unaff_x22 + 0xb8),uVar33);
    (**(code **)(lVar32 + 0x10))(uVar29,TVar18.unknown,uVar33);
    (*pcVar22)(uVar29,0,1,uVar33);
    FUN_1000087e4(uVar29,uVar31,&DAT_100553d90,&DAT_10041bf10);
    SwiftUI::State::set_wrappedValue((State *)(lVar25 + lVar27),uVar31,puVar12);
    FUN_10002a29c(uVar29,&DAT_100553d90,&DAT_10041bf10);
    (**(code **)(lVar32 + 8))(TVar18.unknown,uVar33);
  }
  uVar29 = *(undefined8 *)(unaff_x22 + 0xa0);
  lVar27 = *(long *)(unaff_x22 + 0x80);
  lVar25 = *(long *)(unaff_x22 + 0x88);
  uVar31 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar33 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar32 = *(long *)(unaff_x22 + 0x68);
  iVar8 = *(int *)(lVar10 + 0x14);
  Swift::TaskPriority::get_background(TVar18);
  TVar18 = Swift::TaskPriority::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x148) = TVar18.unknown;
  pcVar26 = *(code **)(*(long *)(TVar18.unknown + -8) + 0x38);
  *(code **)(unaff_x22 + 0x150) = pcVar26;
  (*pcVar26)(uVar31,0,1,TVar18.unknown);
  pcVar26 = *(code **)(lVar27 + 0x10);
  *(code **)(unaff_x22 + 0x158) = pcVar26;
  (*pcVar26)(uVar29,lVar32 + iVar8,uVar33);
  uVar7 = *(uint *)(lVar27 + 0x50);
  *(uint *)(unaff_x22 + 400) = uVar7;
  uVar24 = (ulong)uVar7 & 0xff;
  uVar35 = uVar24 + 0x38 & (uVar24 ^ 0xffffffffffffffff);
  puVar11 = &DAT_10053df28;
  _swift_allocObject(&DAT_10053df28,uVar35 + lVar25,uVar24 | 7);
  *(undefined8 *)(puVar11 + 0x10) = 0;
  *(undefined8 *)(puVar11 + 0x18) = 0;
  *(undefined8 *)(puVar11 + 0x20) = uVar1;
  *(undefined8 **)(puVar11 + 0x28) = param_1;
  *(code **)(puVar11 + 0x30) = param_2;
  pcVar26 = *(code **)(lVar27 + 0x20);
  *(code **)(unaff_x22 + 0x160) = pcVar26;
  (*pcVar26)(puVar11 + uVar35,uVar29,uVar33);
  _swift_bridgeObjectRetain(param_2);
  _swift_retain(uVar1);
  uVar33 = 0;
  FUN_100176d50(0,0,uVar31,&DAT_100436640,puVar11);
  *(undefined8 *)(unaff_x22 + 0x168) = uVar33;
  FUN_10002a29c(uVar31,&DAT_100561090,&DAT_10041c870);
  TVar19.unknown = (undefined *)(ulong)*(uint *)(PTR__get_value_100524738 + 4);
  _swift_task_alloc();
  *(undefined **)(unaff_x22 + 0x170) = TVar19.unknown;
  *(long *)TVar19.unknown = unaff_x22;
  *(code **)((long)TVar19.unknown + 8) = FUN_1003d5b5c;
LAB_1003d594c:
  (extension_Swift)::Swift::Task::_get_value(TVar19);
  return;
}

