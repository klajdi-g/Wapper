// rea decompile_all
// name: thunk_FUN_1002d52f8
// address: 0x1002d69a0
// body: available
// range: 0x1002d69a0-0x1002d69a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void thunk_FUN_1002d52f8(undefined8 param_1,SEL param_2,undefined8 param_3,void *param_4)

{
  undefined *puVar1;
  URL UVar2;
  ID IVar3;
  URL UVar4;
  undefined *puVar5;
  NSString *pNVar6;
  ID IVar7;
  NSArray *pNVar8;
  NSURL *pNVar9;
  _StringGuts _Var10;
  long lVar11;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  ulong uVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  code *pcVar16;
  char *pcVar17;
  code *pcVar18;
  SEL pcVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  char acStack_d0 [8];
  char *pcStack_c8;
  ulong uStack_c0;
  undefined *puStack_b8;
  ulong uStack_b0;
  SEL pcStack_a8;
  long lStack_a0;
  ID IStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  char *pcStack_70;
  undefined *puStack_68;
  SEL op;
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar11 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar11 + 0x40));
  (*(code *)PTR____chkstk_darwin_100521118)();
  pcVar17 = acStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0) + -extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lStack_78 = (long)pcVar17 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100521118)();
  pcVar19 = (SEL)(((long)pcVar17 - extraout_x12_00) - extraout_x12_01);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar15 = (long)pcVar19 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_100521118)();
  IVar3 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,param_2);
  IVar3 = NSBundle::bundleIdentifier(IVar3,param_2);
  if (IVar3 == 0) {
    return;
  }
  pcStack_c8 = acStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pcStack_a8 = pcVar19;
  lStack_a0 = lVar15;
  SVar20 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  op = SVar20.bridgeObject;
  pcVar19 = op;
  IStack_98 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,op);
  UVar4.unknown = (undefined *)NSFileManager::homeDirectoryForCurrentUser(IStack_98,pcVar19);
  Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar4);
  puVar5 = &DAT_100556998;
  FUN_100002f94(&DAT_100556998,&DAT_10042e640);
  lVar13 = *(long *)(lVar11 + 0x48);
  uStack_c0 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar12 = uStack_c0 + 0x20 & (uStack_c0 ^ 0xffffffffffffffff);
  _Var10.unknown = (undefined *)(uVar12 + lVar13 * 2);
  UVar4.unknown = (undefined *)(uStack_c0 | 7);
  puStack_b8 = puVar5;
  _swift_allocObject();
  puVar1 = puVar5 + uVar12;
  pcStack_70 = (char *)0x0;
  puStack_68 = (undefined *)0xe000000000000000;
  uStack_b0 = uVar12;
  puStack_90 = puVar5;
  Swift::_StringGuts::grow(0x37,_Var10);
  SVar21.bridgeObject = (void *)0x80000001004e4740;
  SVar21.str = (char *)0xd000000000000013;
  SVar27.bridgeObject = param_4;
  SVar27.str = UVar4.unknown;
  Swift::String::append(SVar21,SVar27);
  SVar28.bridgeObject = param_4;
  SVar28.str = UVar4.unknown;
  Swift::String::append(SVar20,SVar28);
  SVar22.bridgeObject = (void *)0x80000001004e4760;
  SVar22.str = (char *)0xd00000000000001a;
  SVar29.bridgeObject = param_4;
  SVar29.str = UVar4.unknown;
  Swift::String::append(SVar22,SVar29);
  SVar30.bridgeObject = param_4;
  SVar30.str = UVar4.unknown;
  Swift::String::append(SVar20,SVar30);
  SVar23.bridgeObject = (void *)0xe600000000000000;
  SVar23.str = (char *)0x7473696c702e;
  SVar31.bridgeObject = param_4;
  SVar31.str = UVar4.unknown;
  Swift::String::append(SVar23,SVar31);
  puVar5 = puStack_68;
  SVar25.bridgeObject = puStack_68;
  SVar25.str = pcStack_70;
  _Var10.unknown = puStack_68;
  Foundation::URL::appendingPathComponent(SVar25,UVar4);
  _swift_bridgeObjectRelease(puVar5);
  pcStack_70 = (char *)0x0;
  puStack_68 = (undefined *)0xe000000000000000;
  Swift::_StringGuts::grow(0x1c,_Var10);
  _swift_bridgeObjectRelease(puStack_68);
  pcStack_70 = (char *)0xd000000000000014;
  puStack_68 = (void *)0x80000001004e4780;
  SVar32.bridgeObject = param_4;
  SVar32.str = UVar4.unknown;
  Swift::String::append(SVar20,SVar32);
  _swift_bridgeObjectRelease(op);
  SVar24.bridgeObject = (void *)0xe600000000000000;
  SVar24.str = (char *)0x7473696c702e;
  SVar33.bridgeObject = param_4;
  SVar33.str = UVar4.unknown;
  Swift::String::append(SVar24,SVar33);
  puVar5 = puStack_68;
  IVar3 = IStack_98;
  SVar20.bridgeObject = puStack_68;
  SVar20.str = pcStack_70;
  lStack_88 = lVar15 - extraout_x12_03;
  lStack_80 = lVar13;
  Foundation::URL::appendingPathComponent(SVar20,UVar4);
  _swift_bridgeObjectRelease(puVar5);
  lVar15 = lStack_78;
  pcVar14 = *(code **)(lVar11 + 0x10);
  (*pcVar14)(lStack_78,puVar1,UVar2.unknown);
  pcVar18 = *(code **)(lVar11 + 0x20);
  UVar4.unknown = pcVar17;
  (*pcVar18)(pcVar17,lVar15,UVar2.unknown);
  SVar25 = Foundation::URL::get_path(UVar4);
  pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar25.bridgeObject);
  IVar7 = objc_stub::fileExistsAtPath_(IVar3,pNVar6);
  if ((IVar7 & 1) == 0) {
    pcVar16 = *(code **)(lVar11 + 8);
    (*pcVar16)(pcVar17,UVar2.unknown);
    lVar15 = lStack_78;
    (*pcVar14)(lStack_78,puVar1 + lStack_80,UVar2.unknown);
    UVar4.unknown = pcVar17;
    (*pcVar18)(pcVar17,lVar15,UVar2.unknown);
    SVar25 = Foundation::URL::get_path(UVar4);
    pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar25.bridgeObject);
    IVar3 = objc_stub::fileExistsAtPath_(IVar3,pNVar6);
    if ((IVar3 & 1) == 0) {
      (*pcVar16)(pcVar17,UVar2.unknown);
      puVar5 = puStack_90;
      _swift_setDeallocating(puStack_90);
      _swift_arrayDestroy(puVar1,2,UVar2.unknown);
      pcVar19 = (SEL)0x20;
      UVar4.unknown = (undefined *)0x7;
      _swift_deallocClassInstance(puVar5);
      IVar3 = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace,pcVar19);
      lVar11 = lStack_88;
      pcVar17 = pcStack_c8;
      SVar26.bridgeObject = (void *)0x80000001004e47a0;
      SVar26.str = (char *)0xd000000000000013;
      UVar4 = Foundation::URL::appendingPathComponent(SVar26,UVar4);
      pNVar9 = Foundation::URL::_bridgeToObjectiveC(UVar4);
      UVar4 = UVar2;
      (*pcVar16)(pcVar17);
      NSWorkspace::openURL_(IVar3,UVar4.unknown,pNVar9);
      goto LAB_1002d5874;
    }
  }
  puVar5 = puStack_90;
  _swift_setDeallocating(puStack_90);
  _swift_arrayDestroy(puVar1,2,UVar2.unknown);
  _swift_deallocClassInstance(puVar5,0x20,7);
  pcVar19 = pcStack_a8;
  (*pcVar18)(pcStack_a8,pcVar17,UVar2.unknown);
  lVar15 = lStack_a0;
  (*pcVar18)(lStack_a0,pcVar19,UVar2.unknown);
  IVar3 = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace,pcVar19);
  uVar12 = uStack_b0;
  puVar5 = puStack_b8;
  _swift_allocObject(puStack_b8,uStack_b0 + lStack_80,uStack_c0 | 7);
  *(undefined8 *)(puVar5 + 0x18) = 2;
  *(undefined8 *)(puVar5 + 0x10) = 1;
  (*pcVar14)(puVar5 + uVar12,lVar15,UVar2.unknown);
  UVar4 = UVar2;
  pNVar8 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(puVar5);
  NSWorkspace::activateFileViewerSelectingURLs_(IVar3,UVar4.unknown,pNVar8);
  pcVar16 = *(code **)(lVar11 + 8);
  (*pcVar16)(lVar15,UVar2.unknown);
  lVar11 = lStack_88;
LAB_1002d5874:
  (*pcVar16)(lVar11,UVar2.unknown);
  return;
}

