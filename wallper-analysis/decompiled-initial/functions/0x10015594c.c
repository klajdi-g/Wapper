// rea decompile_all
// name: FUN_10015594c
// address: 0x10015594c
// body: available
// range: 0x10015594c-0x100155d53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10015594c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  URL UVar2;
  ID IVar3;
  URL UVar4;
  NSString *pNVar5;
  TaskPriority TVar6;
  void *pvVar7;
  URL UVar8;
  long extraout_x8;
  undefined1 *puVar9;
  long lVar10;
  ulong uVar11;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x13;
  long extraout_x13_00;
  undefined8 *unaff_x20;
  ulong uVar12;
  ulong uVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  undefined8 auStack_100 [4];
  undefined1 auStack_e0 [8];
  long local_d8;
  long local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  String local_70;
  
  local_c0 = *unaff_x20;
  puVar1 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_e0 + -extraout_x8;
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar16 = *(long *)(UVar2.unknown + -8);
  UVar4 = UVar2;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = (long)puVar9 - (extraout_x13 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar15 = lVar17 - extraout_x12;
  local_d0 = extraout_x13_00;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = lVar15 - extraout_x12_00;
  local_70.bridgeObject = (void *)param_2;
  local_70.str = (char *)param_1;
  local_80 = 0x2f;
  uStack_78 = 0xe100000000000000;
  local_90 = 0x5f;
  uStack_88 = 0xe100000000000000;
  local_c8 = param_1;
  local_b8 = param_2;
  FUN_100026df4();
  puVar1 = PTR___type_metadata_for_Swift_String_100523a98;
  *(undefined **)(lVar10 + -0x10) = UVar4.unknown;
  *(undefined **)(lVar10 + -8) = UVar4.unknown;
  *(undefined **)(lVar10 + -0x20) = PTR___type_metadata_for_Swift_String_100523a98;
  *(undefined **)(lVar10 + -0x18) = UVar4.unknown;
  local_70 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                       (&local_80,&local_90,0,0,0,1,PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98);
  pvVar7 = local_70.bridgeObject;
  local_80 = 0x3a;
  uStack_78 = 0xe100000000000000;
  local_90 = 0x5f;
  uStack_88 = 0xe100000000000000;
  *(undefined **)(lVar10 + -0x10) = UVar4.unknown;
  *(undefined **)(lVar10 + -8) = UVar4.unknown;
  *(undefined **)(lVar10 + -0x20) = puVar1;
  *(undefined **)(lVar10 + -0x18) = UVar4.unknown;
  UVar8.unknown = (undefined *)0x0;
  SVar18 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                     (&local_80,&local_90,0,0,0,1,puVar1,puVar1);
  _swift_bridgeObjectRelease(pvVar7);
  IVar3 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  UVar4.unknown = (undefined *)NSFileManager::homeDirectoryForCurrentUser(IVar3);
  Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar4);
  UVar4.unknown = (char *)0x1;
  SVar19.bridgeObject = (void *)0x80000001004debb0;
  SVar19.str = (char *)0xd000000000000033;
  Foundation::URL::appendingPathComponent(SVar19,true,UVar8);
  pcVar14 = *(code **)(lVar16 + 8);
  (*pcVar14)(lVar17,UVar2.unknown);
  SVar20.bridgeObject = (void *)0xe400000000000000;
  SVar20.str = (char *)0x766f6d2e;
  SVar21.bridgeObject = UVar8.unknown;
  SVar21.str = UVar4.unknown;
  local_70 = SVar18;
  Swift::String::append(SVar20,SVar21);
  pvVar7 = local_70.bridgeObject;
  Foundation::URL::appendingPathComponent(local_70,UVar4);
  _swift_bridgeObjectRelease(pvVar7);
  (*pcVar14)(lVar15,UVar2.unknown);
  UVar4.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
  SVar18 = Foundation::URL::get_path(UVar4);
  pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar18.bridgeObject);
  IVar3 = NSFileManager::fileExistsAtPath_((ID)UVar4.unknown,pNVar5);
  if ((int)IVar3 != 0) {
    Swift::TaskPriority::get_background((TaskPriority)0x0);
    TVar6 = Swift::TaskPriority::typeMetadataAccessor();
    (**(code **)(*(long *)(TVar6.unknown + -8) + 0x38))(puVar9,0,1,TVar6.unknown);
    local_d8 = lVar15;
    (**(code **)(lVar16 + 0x10))(lVar15,lVar10,UVar2.unknown);
    uVar11 = (ulong)*(byte *)(lVar16 + 0x50);
    uVar12 = uVar11 + 0x20 & (uVar11 ^ 0xffffffffffffffff);
    uVar13 = local_d0 + uVar12 + 7 & 0xfffffffffffffff8;
    puVar1 = &DAT_10052f040;
    _swift_allocObject(&DAT_10052f040,uVar13 + 0x20,uVar11 | 7);
    *(undefined8 *)(puVar1 + 0x10) = 0;
    *(undefined8 *)(puVar1 + 0x18) = 0;
    (**(code **)(lVar16 + 0x20))(puVar1 + uVar12,local_d8,UVar2.unknown);
    *(undefined8 *)(puVar1 + uVar13) = local_c8;
    *(undefined8 *)((long)(puVar1 + uVar13) + 8) = local_b8;
    *(undefined8 **)(puVar1 + uVar13 + 0x10) = unaff_x20;
    *(undefined8 *)(puVar1 + uVar13 + 0x18) = local_c0;
    _swift_bridgeObjectRetain();
    _swift_retain(unaff_x20);
    FUN_100176d50(0,0,puVar9,&DAT_100428b08,puVar1);
    _swift_release();
    FUN_10002a29c(puVar9,&DAT_100561090,&DAT_10041c870);
  }
  (*pcVar14)(lVar10,UVar2.unknown);
  return;
}

