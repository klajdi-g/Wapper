// rea decompile_all
// name: FUN_1002d4b5c
// address: 0x1002d4b5c
// body: available
// range: 0x1002d4b5c-0x1002d506f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002d506c to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1002d4b5c(long param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  char *pcVar1;
  char *pcVar2;
  void *pvVar3;
  Encoding EVar4;
  URL UVar5;
  undefined *puVar6;
  ID self;
  URL UVar7;
  NSURL *pNVar8;
  NSArray *pNVar9;
  ID IVar10;
  ID IVar11;
  Data DVar12;
  Data data;
  undefined *puVar13;
  NSString *pNVar14;
  NSDictionary *pNVar15;
  void *extraout_x1;
  void *pvVar16;
  void *pvVar17;
  char *pcVar18;
  long extraout_x8;
  long lVar19;
  long extraout_x8_00;
  long lVar20;
  undefined8 *puVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  char acStack_110 [8];
  char *local_108;
  undefined8 local_d0;
  undefined8 local_c8;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100521138;
  EVar4 = Encoding::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(EVar4.unknown + -8) + 0x40));
  local_108 = acStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  UVar5 = Foundation::URL::typeMetadataAccessor();
  lVar19 = *(long *)(UVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar19 + 0x40));
  lVar20 = *(long *)(param_1 + 0x10);
  if (lVar20 != 0) {
    puVar21 = (undefined8 *)(param_1 + 0x28);
    do {
      pcVar2 = (char *)puVar21[-1];
      pvVar3 = (void *)*puVar21;
      puVar6 = &_OBJC_CLASS___NSTask;
      _objc_allocWithZone();
      _swift_bridgeObjectRetain(pvVar3);
      self = objc_stub::init((ID)puVar6);
      UVar7 = Foundation::URL::_init();
      pNVar8 = Foundation::URL::_bridgeToObjectiveC(UVar7);
      (**(code **)(lVar19 + 8))
                ((long)(acStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
                 (extraout_x8_00 + 0xfU & 0xfffffffffffffff0),UVar5.unknown);
      objc_stub::setExecutableURL_(self,pNVar8);
      puVar6 = &DAT_100549eb0;
      FUN_100002f94(&DAT_100549eb0,&DAT_100426be0);
      _swift_allocObject();
      *(undefined8 *)(puVar6 + 0x18) = 2;
      *(undefined8 *)(puVar6 + 0x10) = 1;
      *(char **)(puVar6 + 0x20) = pcVar2;
      *(void **)(puVar6 + 0x28) = pvVar3;
      _swift_bridgeObjectRetain(pvVar3);
      pNVar9 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
      _swift_release(puVar6);
      objc_stub::setArguments_(self,pNVar9);
      puVar6 = &_OBJC_CLASS___NSPipe;
      _objc_allocWithZone();
      IVar10 = objc_stub::init((ID)puVar6);
      objc_stub::setStandardError_(self,IVar10);
      local_d0 = 0;
      IVar11 = objc_stub::launchAndReturnError_(self,&local_d0);
      if ((int)IVar11 == 0) {
        _swift_bridgeObjectRelease(pvVar3);
        Foundation::__convertNSErrorToError();
LAB_1002d5010:
        _swift_willThrow(0);
        break;
      }
      objc_stub::waitUntilExit(self);
      IVar11 = objc_stub::terminationStatus(self);
      if (((int)IVar11 != 0) && (IVar11 = objc_stub::terminationStatus(self), (int)IVar11 != 1)) {
        IVar10 = objc_stub::fileHandleForReading(IVar10);
        DVar12.unknown = (undefined *)objc_stub::readDataToEndOfFile(IVar10);
        pvVar16 = extraout_x1;
        data = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar12);
        pcVar18 = local_108;
        Encoding::_get_utf8((Encoding)0x0);
        DVar12 = data;
        pvVar17 = pvVar16;
        (extension_Foundation)::Swift::String::_init((Encoding)data.unknown);
        FUN_100093624(data.unknown,pvVar16);
        pcVar1 = (char *)0x0;
        if (pvVar17 != (void *)0x0) {
          pcVar1 = DVar12.unknown;
        }
        pvVar16 = (void *)0xe000000000000000;
        if (pvVar17 != (void *)0x0) {
          pvVar16 = pvVar17;
        }
        IVar10 = objc_stub::terminationStatus(self);
        puVar6 = &DAT_10054c048;
        FUN_100002f94(&DAT_10054c048,&DAT_10041d7b0);
        _swift_initStackObject();
        *(undefined8 *)(puVar6 + 0x18) = 2;
        *(undefined8 *)(puVar6 + 0x10) = 1;
        SVar22 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        *(String *)(puVar6 + 0x20) = SVar22;
        local_d0 = 0;
        local_c8 = 0xe000000000000000;
        Swift::_StringGuts::grow(0x1a,(_StringGuts)SVar22.bridgeObject);
        _swift_bridgeObjectRelease(local_c8);
        local_d0 = 0x206c6c616c6c696b;
        local_c8 = 0xe800000000000000;
        SVar22.bridgeObject = pvVar3;
        SVar22.str = pcVar2;
        SVar26.bridgeObject = param_4;
        SVar26.str = pcVar18;
        Swift::String::append(SVar22,SVar26);
        _swift_bridgeObjectRelease(pvVar3);
        SVar23.bridgeObject = (void *)0xe900000000000028;
        SVar23.str = (char *)0x2064656c69616620;
        SVar27.bridgeObject = param_4;
        SVar27.str = pcVar18;
        Swift::String::append(SVar23,SVar27);
        objc_stub::terminationStatus(self);
        SVar22 = Swift::CustomStringConvertible::get_description();
        SVar28.bridgeObject = param_4;
        SVar28.str = pcVar18;
        Swift::String::append(SVar22,SVar28);
        _swift_bridgeObjectRelease(SVar22.bridgeObject);
        SVar24.bridgeObject = (void *)0xe300000000000000;
        SVar24.str = (char *)0x203a29;
        SVar29.bridgeObject = param_4;
        SVar29.str = pcVar18;
        Swift::String::append(SVar24,SVar29);
        SVar25.bridgeObject = pvVar16;
        SVar25.str = pcVar1;
        SVar30.bridgeObject = param_4;
        SVar30.str = pcVar18;
        Swift::String::append(SVar25,SVar30);
        _swift_bridgeObjectRelease(pvVar16);
        *(undefined **)(puVar6 + 0x48) = PTR___type_metadata_for_Swift_String_100523a98;
        *(undefined8 *)(puVar6 + 0x30) = local_d0;
        *(undefined8 *)(puVar6 + 0x38) = local_c8;
        puVar13 = puVar6;
        FUN_100005b10(puVar6);
        _swift_setDeallocating(puVar6);
        FUN_10002a29c((String *)(puVar6 + 0x20),&DAT_10054a1c0,&DAT_10041a250);
        puVar6 = &_OBJC_CLASS___NSError;
        _objc_allocWithZone();
        pNVar14 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        pNVar15 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
        _swift_bridgeObjectRelease(puVar13);
        objc_stub::initWithDomain_code_userInfo_((ID)puVar6,pNVar14,(long)(int)IVar10,pNVar15);
        goto LAB_1002d5010;
      }
      puVar21 = puVar21 + 2;
      _swift_bridgeObjectRelease(pvVar3);
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_100521138 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

