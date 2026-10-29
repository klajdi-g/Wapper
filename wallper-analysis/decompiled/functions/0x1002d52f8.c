// rea decompile_all
// name: FUN_1002d52f8
// address: 0x1002d52f8
// body: available
// range: 0x1002d52f8-0x1002d589b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002d52f8(void)

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
  void *in_x3;
  long lVar11;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  ulong uVar12;
  code *pcVar13;
  long lVar14;
  code *pcVar15;
  undefined1 *puVar16;
  code *pcVar17;
  long lVar18;
  String SVar19;
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
  undefined1 auStack_d0 [8];
  undefined1 *local_c8;
  ulong local_c0;
  undefined *local_b8;
  ulong local_b0;
  long local_a8;
  long local_a0;
  ID local_98;
  undefined *local_90;
  long local_88;
  long local_80;
  long local_78;
  char *local_70;
  undefined *local_68;
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar11 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar11 + 0x40));
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar16 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0) + -extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_78 = (long)puVar16 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = ((long)puVar16 - extraout_x12_00) - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = lVar18 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_100521118)();
  IVar3 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  IVar3 = NSBundle::bundleIdentifier(IVar3);
  if (IVar3 == 0) {
    return;
  }
  local_c8 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_a8 = lVar18;
  local_a0 = lVar14;
  SVar19 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  local_98 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  UVar4.unknown = (undefined *)NSFileManager::homeDirectoryForCurrentUser(local_98);
  Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar4);
  puVar5 = &DAT_100556998;
  FUN_100002f94(&DAT_100556998,&DAT_10042e640);
  lVar18 = *(long *)(lVar11 + 0x48);
  local_c0 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar12 = local_c0 + 0x20 & (local_c0 ^ 0xffffffffffffffff);
  _Var10.unknown = (undefined *)(uVar12 + lVar18 * 2);
  UVar4.unknown = (undefined *)(local_c0 | 7);
  local_b8 = puVar5;
  _swift_allocObject();
  puVar1 = puVar5 + uVar12;
  local_70 = (char *)0x0;
  local_68 = (undefined *)0xe000000000000000;
  local_b0 = uVar12;
  local_90 = puVar5;
  Swift::_StringGuts::grow(0x37,_Var10);
  SVar20.bridgeObject = (void *)0x80000001004e4740;
  SVar20.str = (char *)0xd000000000000013;
  SVar26.bridgeObject = in_x3;
  SVar26.str = UVar4.unknown;
  Swift::String::append(SVar20,SVar26);
  SVar27.bridgeObject = in_x3;
  SVar27.str = UVar4.unknown;
  Swift::String::append(SVar19,SVar27);
  SVar21.bridgeObject = (void *)0x80000001004e4760;
  SVar21.str = (char *)0xd00000000000001a;
  SVar28.bridgeObject = in_x3;
  SVar28.str = UVar4.unknown;
  Swift::String::append(SVar21,SVar28);
  SVar29.bridgeObject = in_x3;
  SVar29.str = UVar4.unknown;
  Swift::String::append(SVar19,SVar29);
  SVar22.bridgeObject = (void *)0xe600000000000000;
  SVar22.str = (char *)0x7473696c702e;
  SVar30.bridgeObject = in_x3;
  SVar30.str = UVar4.unknown;
  Swift::String::append(SVar22,SVar30);
  puVar5 = local_68;
  SVar24.bridgeObject = local_68;
  SVar24.str = local_70;
  _Var10.unknown = local_68;
  Foundation::URL::appendingPathComponent(SVar24,UVar4);
  _swift_bridgeObjectRelease(puVar5);
  local_70 = (char *)0x0;
  local_68 = (undefined *)0xe000000000000000;
  Swift::_StringGuts::grow(0x1c,_Var10);
  _swift_bridgeObjectRelease(local_68);
  local_70 = (char *)0xd000000000000014;
  local_68 = (void *)0x80000001004e4780;
  SVar31.bridgeObject = in_x3;
  SVar31.str = UVar4.unknown;
  Swift::String::append(SVar19,SVar31);
  _swift_bridgeObjectRelease(SVar19.bridgeObject);
  SVar23.bridgeObject = (void *)0xe600000000000000;
  SVar23.str = (char *)0x7473696c702e;
  SVar32.bridgeObject = in_x3;
  SVar32.str = UVar4.unknown;
  Swift::String::append(SVar23,SVar32);
  puVar5 = local_68;
  IVar3 = local_98;
  SVar19.bridgeObject = local_68;
  SVar19.str = local_70;
  local_88 = lVar14 - extraout_x12_03;
  local_80 = lVar18;
  Foundation::URL::appendingPathComponent(SVar19,UVar4);
  _swift_bridgeObjectRelease(puVar5);
  lVar14 = local_78;
  pcVar13 = *(code **)(lVar11 + 0x10);
  (*pcVar13)(local_78,puVar1,UVar2.unknown);
  pcVar17 = *(code **)(lVar11 + 0x20);
  UVar4.unknown = puVar16;
  (*pcVar17)(puVar16,lVar14,UVar2.unknown);
  SVar24 = Foundation::URL::get_path(UVar4);
  pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar24.bridgeObject);
  IVar7 = objc_stub::fileExistsAtPath_(IVar3,pNVar6);
  if ((IVar7 & 1) == 0) {
    pcVar15 = *(code **)(lVar11 + 8);
    (*pcVar15)(puVar16,UVar2.unknown);
    lVar14 = local_78;
    (*pcVar13)(local_78,puVar1 + local_80,UVar2.unknown);
    UVar4.unknown = puVar16;
    (*pcVar17)(puVar16,lVar14,UVar2.unknown);
    SVar24 = Foundation::URL::get_path(UVar4);
    pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar24.bridgeObject);
    IVar3 = objc_stub::fileExistsAtPath_(IVar3,pNVar6);
    if ((IVar3 & 1) == 0) {
      (*pcVar15)(puVar16,UVar2.unknown);
      puVar5 = local_90;
      _swift_setDeallocating(local_90);
      _swift_arrayDestroy(puVar1,2,UVar2.unknown);
      UVar4.unknown = (undefined *)0x7;
      _swift_deallocClassInstance(puVar5,0x20);
      IVar3 = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace);
      lVar11 = local_88;
      puVar16 = local_c8;
      SVar25.bridgeObject = (void *)0x80000001004e47a0;
      SVar25.str = (char *)0xd000000000000013;
      UVar4 = Foundation::URL::appendingPathComponent(SVar25,UVar4);
      pNVar9 = Foundation::URL::_bridgeToObjectiveC(UVar4);
      (*pcVar15)(puVar16,UVar2.unknown);
      NSWorkspace::openURL_(IVar3,pNVar9);
      goto LAB_1002d5874;
    }
  }
  puVar5 = local_90;
  _swift_setDeallocating(local_90);
  _swift_arrayDestroy(puVar1,2,UVar2.unknown);
  _swift_deallocClassInstance(puVar5,0x20,7);
  lVar14 = local_a8;
  (*pcVar17)(local_a8,puVar16,UVar2.unknown);
  lVar18 = local_a0;
  (*pcVar17)(local_a0,lVar14,UVar2.unknown);
  IVar3 = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace);
  uVar12 = local_b0;
  puVar5 = local_b8;
  _swift_allocObject(local_b8,local_b0 + local_80,local_c0 | 7);
  *(undefined8 *)(puVar5 + 0x18) = 2;
  *(undefined8 *)(puVar5 + 0x10) = 1;
  (*pcVar13)(puVar5 + uVar12,lVar18,UVar2.unknown);
  pNVar8 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(puVar5);
  NSWorkspace::activateFileViewerSelectingURLs_(IVar3,pNVar8);
  pcVar15 = *(code **)(lVar11 + 8);
  (*pcVar15)(lVar18,UVar2.unknown);
  lVar11 = local_88;
LAB_1002d5874:
  (*pcVar15)(lVar11,UVar2.unknown);
  return;
}

