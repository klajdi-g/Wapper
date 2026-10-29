// rea decompile_all
// name: FUN_100231628
// address: 0x100231628
// body: available
// range: 0x100231628-0x100231c47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100231c2c to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100231628(void)

{
  undefined8 uVar1;
  void *pvVar2;
  URL UVar3;
  undefined *puVar4;
  ID IVar5;
  URL UVar6;
  NSURL *pNVar7;
  NSArray *pNVar8;
  ID IVar9;
  URL UVar10;
  undefined *puVar11;
  NSDictionary *pNVar12;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x21;
  long lVar13;
  undefined *puVar14;
  code *pcVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  undefined auStack_1a0 [8];
  undefined8 *local_198;
  undefined *local_190;
  long local_188;
  undefined *local_180;
  undefined4 local_160;
  undefined4 uStack_15c;
  void *local_158;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100521138;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar13 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar13 + 0x40));
  local_180 = auStack_1a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar14 = auStack_1a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0) + -extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar4 = &_OBJC_CLASS___NSTask;
  _objc_allocWithZone();
  IVar5 = objc_stub::init((ID)puVar4);
  UVar6 = Foundation::URL::_init();
  pNVar7 = Foundation::URL::_bridgeToObjectiveC(UVar6);
  pcVar15 = *(code **)(lVar13 + 8);
  local_188 = lVar13;
  (*pcVar15)((long)puVar14 - extraout_x12_00,UVar3.unknown);
  objc_stub::setExecutableURL_(IVar5,pNVar7);
  FUN_100002f94(&DAT_100549eb0,&DAT_100426be0);
  _swift_initStaticObject();
  UVar6.unknown = PTR___type_metadata_for_Swift_String_100523a98;
  pNVar8 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  objc_stub::setArguments_(IVar5,pNVar8);
  IVar9 = NSProcessInfo::processInfo((ID)&_OBJC_CLASS___NSProcessInfo);
  NSProcessInfo::environment(IVar9);
  puVar11 = PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100523aa8;
  local_190 = (undefined *)
              (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  puVar4 = &DAT_100554f88;
  FUN_100002f94(&DAT_100554f88,&DAT_100428a98);
  _swift_initStackObject();
  *(undefined8 *)(puVar4 + 0x18) = 0xc;
  *(undefined8 *)(puVar4 + 0x10) = 6;
  local_198 = (undefined8 *)(puVar4 + 0x20);
  *local_198 = 0x48544150;
  *(undefined8 *)(puVar4 + 0x28) = 0xe400000000000000;
  *(undefined8 *)(puVar4 + 0x30) = 0x6e69622f7273752f;
  *(undefined8 *)(puVar4 + 0x38) = 0xed00006e69622f3a;
  *(undefined8 *)(puVar4 + 0x40) = 0x444950;
  *(undefined8 *)(puVar4 + 0x48) = 0xe300000000000000;
  IVar9 = NSProcessInfo::processInfo((ID)&_OBJC_CLASS___NSProcessInfo);
  IVar9 = NSProcessInfo::processIdentifier(IVar9);
  local_160 = (undefined4)IVar9;
  SVar16 = Swift::CustomStringConvertible::get_description();
  *(String *)(puVar4 + 0x50) = SVar16;
  *(undefined8 *)(puVar4 + 0x60) = 0x505041;
  *(undefined8 *)(puVar4 + 0x68) = 0xe300000000000000;
  SVar16 = Foundation::URL::get_path((URL)SVar16.str);
  *(String *)(puVar4 + 0x70) = SVar16;
  *(undefined8 *)(puVar4 + 0x80) = 0x57454e;
  *(undefined8 *)(puVar4 + 0x88) = 0xe300000000000000;
  SVar16 = Foundation::URL::get_path((URL)SVar16.str);
  *(String *)(puVar4 + 0x90) = SVar16;
  *(undefined8 *)(puVar4 + 0xa0) = 0x50554b434142;
  *(undefined8 *)(puVar4 + 0xa8) = 0xe600000000000000;
  UVar10 = Foundation::URL::deletingLastPathComponent((URL)SVar16.str);
  local_160 = 0x2e;
  uStack_15c = 0;
  local_158 = (void *)0xe100000000000000;
  SVar16 = Foundation::URL::get_lastPathComponent(UVar10);
  SVar19.bridgeObject = puVar11;
  SVar19.str = UVar6.unknown;
  Swift::String::append(SVar16,SVar19);
  _swift_bridgeObjectRelease(SVar16.bridgeObject);
  SVar17.bridgeObject = (void *)0xe900000000000073;
  SVar17.str = (char *)0x756f69766572702e;
  SVar20.bridgeObject = puVar11;
  SVar20.str = UVar6.unknown;
  Swift::String::append(SVar17,SVar20);
  pvVar2 = local_158;
  SVar16.str._4_4_ = uStack_15c;
  SVar16.str._0_4_ = local_160;
  SVar16.bridgeObject = local_158;
  Foundation::URL::appendingPathComponent(SVar16,UVar6);
  _swift_bridgeObjectRelease(pvVar2);
  UVar6.unknown = puVar14;
  (*pcVar15)(puVar14,UVar3.unknown);
  SVar16 = Foundation::URL::get_path(UVar6);
  (*pcVar15)((long)puVar14 - extraout_x12_00,UVar3.unknown);
  *(String *)(puVar4 + 0xb0) = SVar16;
  *(undefined8 *)(puVar4 + 0xc0) = 0x4547415453;
  *(undefined8 *)(puVar4 + 200) = 0xe500000000000000;
  IVar9 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  UVar10.unknown = (undefined *)0x1;
  IVar9 = NSFileManager::URLsForDirectory_inDomains_(IVar9,0xd);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  UVar6.unknown = local_180;
  if (*(long *)(IVar9 + 0x10) == 0) {
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x100231c2c);
    (*pcVar15)();
  }
  (**(code **)(local_188 + 0x10))
            (local_180,
             IVar9 + ((ulong)*(byte *)(local_188 + 0x50) + 0x20 &
                     ((ulong)*(byte *)(local_188 + 0x50) ^ 0xffffffffffffffff)),UVar3.unknown);
  _swift_bridgeObjectRelease(IVar9);
  SVar18.bridgeObject = (void *)0xee00657461647055;
  SVar18.str = (char *)0x2f7265706c6c6157;
  Foundation::URL::appendingPathComponent(SVar18,true,UVar10);
  (*pcVar15)(UVar6.unknown,UVar3.unknown);
  SVar16 = Foundation::URL::get_path(UVar6);
  (*pcVar15)(puVar14,UVar3.unknown);
  *(String *)(puVar4 + 0xd0) = SVar16;
  puVar11 = puVar4;
  FUN_100005574(puVar4);
  _swift_setDeallocating(puVar4);
  puVar4 = &DAT_100554f90;
  FUN_100002f94(&DAT_100554f90,&DAT_100428aa0);
  _swift_arrayDestroy(local_198,6,puVar4);
  puVar4 = local_190;
  puVar14 = local_190;
  _swift_isUniquelyReferenced_nonNull_native(local_190);
  local_160 = SUB84(puVar4,0);
  uStack_15c = (undefined4)((ulong)puVar4 >> 0x20);
  FUN_1002313b4(puVar11,FUN_100231380,0,puVar14,&local_160);
  if (unaff_x21 != 0) {
    _swift_bridgeObjectRelease(puVar11);
    _swift_release(CONCAT44(uStack_15c,local_160));
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x100231c48);
    (*pcVar15)();
  }
  _swift_bridgeObjectRelease(puVar11);
  uVar1 = CONCAT44(uStack_15c,local_160);
  pNVar12 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_release(uVar1);
  objc_stub::setEnvironment_(IVar5,pNVar12);
  local_160 = 0;
  uStack_15c = 0;
  IVar5 = objc_stub::launchAndReturnError_(IVar5,&local_160);
  if ((IVar5 & 1) == 0) {
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
  }
  if (*(long *)PTR____stack_chk_guard_100521138 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

