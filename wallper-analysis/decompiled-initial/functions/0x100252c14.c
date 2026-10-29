// rea decompile_all
// name: FUN_100252c14
// address: 0x100252c14
// body: available
// range: 0x100252c14-0x100253397 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100253388 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100252c14(undefined *param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  URL UVar2;
  NSURL *pNVar3;
  ID IVar4;
  undefined *puVar5;
  undefined8 uVar6;
  Data DVar7;
  NSData *pNVar8;
  NSDictionary *pNVar9;
  undefined *puVar10;
  NSString *pNVar11;
  undefined8 extraout_x1;
  undefined8 uVar12;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar13;
  URL UVar14;
  void *pvVar15;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long lVar16;
  long unaff_x21;
  long lVar17;
  code *pcVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  undefined1 auStack_150 [8];
  undefined *local_148;
  Data local_140;
  undefined8 local_138;
  ID local_130;
  undefined *local_128;
  undefined *local_120;
  undefined8 local_118;
  long local_110;
  undefined8 local_108;
  URL local_100;
  String local_e0;
  undefined8 local_d0;
  undefined8 local_c8 [11];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100521138;
  local_100.unknown = param_1;
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar17 = *(long *)(UVar2.unknown + -8);
  UVar14 = UVar2;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar17 + 0x40));
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar16 = (long)(auStack_150 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_108 = param_2;
  pNVar3 = Foundation::URL::_bridgeToObjectiveC(UVar14);
  IVar4 = AVAsset::assetWithURL_((ID)&_OBJC_CLASS___AVAsset,pNVar3);
  puVar5 = &_OBJC_CLASS___AVAssetImageGenerator;
  _objc_allocWithZone();
  IVar4 = objc_stub::initWithAsset_((ID)puVar5,IVar4);
  uVar13 = 1;
  objc_stub::setAppliesPreferredTrackTransform_(IVar4);
  objc_stub::setMaximumSize_(IVar4,0x409e000000000000,0x4090e00000000000);
  uVar6 = 600;
  uVar12 = extraout_x1;
  ___extension_in_CoreMedia____C_CMTime_init_seconds__Swift_Double_preferredTimescale__Swift_Int32___>___C_CMTime
            (0x4000000000000000);
  local_c8[0] = 0;
  local_e0.bridgeObject._0_4_ = (int)uVar12;
  local_e0.str = (char *)uVar6;
  local_e0.bridgeObject._4_4_ = (int)((ulong)uVar12 >> 0x20);
  local_d0 = uVar13;
  IVar4 = objc_stub::copyCGImageAtTime_actualTime_error_(IVar4,&local_e0,0,local_c8);
  if (IVar4 == 0) {
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
  }
  else {
    puVar5 = &_OBJC_CLASS___NSImage;
    _objc_allocWithZone();
    IVar4 = objc_stub::initWithCGImage_size_((ID)puVar5,0,0,IVar4);
    DVar7.unknown = (undefined *)objc_stub::TIFFRepresentation(IVar4);
    if (DVar7.unknown != (undefined *)0x0) {
      uVar12 = extraout_x1_00;
      local_128 = UVar2.unknown;
      local_110 = lVar16 - extraout_x12_00;
      DVar7 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar7);
      puVar5 = &_OBJC_CLASS___NSBitmapImageRep;
      _objc_allocWithZone();
      FUN_10011a30c(DVar7.unknown,uVar12);
      pNVar8 = Foundation::Data::_bridgeToObjectiveC(DVar7);
      IVar4 = objc_stub::initWithData_((ID)puVar5,pNVar8);
      local_120 = DVar7.unknown;
      local_118 = uVar12;
      FUN_100093624(DVar7.unknown,uVar12);
      if (IVar4 != 0) {
        puVar5 = PTR___swiftEmptyArrayStorage_100524190;
        FUN_100006b0c(PTR___swiftEmptyArrayStorage_100524190);
        FUN_10000807c(0);
        FUN_1000036d0(&DAT_10054a5f0,FUN_10000807c,&TargetProtocolConformanceDescriptor_10041b450);
        pNVar9 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
        _swift_bridgeObjectRelease(puVar5);
        DVar7.unknown = (undefined *)objc_stub::representationUsingType_properties_(IVar4,3,pNVar9);
        if (DVar7.unknown != (undefined *)0x0) {
          uVar12 = extraout_x1_01;
          local_130 = IVar4;
          local_140 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar7);
          local_148 = &_OBJC_CLASS___NSFileManager;
          local_138 = uVar12;
          IVar4 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
          UVar14.unknown = (undefined *)0x1;
          IVar4 = NSFileManager::URLsForDirectory_inDomains_(IVar4,0xe);
          puVar5 = local_128;
          (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
          if (*(long *)(IVar4 + 0x10) == 0) {
            _swift_bridgeObjectRelease(IVar4);
                    /* WARNING: Does not return */
            pcVar18 = (code *)SoftwareBreakpoint(1,0x100253398);
            (*pcVar18)();
          }
          (**(code **)(lVar17 + 0x10))
                    (lVar16,IVar4 + ((ulong)*(byte *)(lVar17 + 0x50) + 0x20 &
                                    ((ulong)*(byte *)(lVar17 + 0x50) ^ 0xffffffffffffffff)),puVar5);
          _swift_bridgeObjectRelease(IVar4);
          SVar19.bridgeObject = (void *)0xee00736c6c697453;
          SVar19.str = (char *)0x2f7265706c6c6157;
          Foundation::URL::appendingPathComponent(SVar19,true,UVar14);
          pcVar18 = *(code **)(lVar17 + 8);
          (*pcVar18)(lVar16,puVar5);
          UVar14.unknown = (undefined *)objc_stub::defaultManager(local_148);
          UVar2.unknown = Foundation::URL::_bridgeToObjectiveC(UVar14);
          auVar1._8_8_ = 0;
          auVar1._0_8_ = local_e0.bridgeObject;
          local_e0 = (String)(auVar1 << 0x40);
          pvVar15 = (void *)0x1;
          IVar4 = objc_stub::createDirectoryAtURL_withIntermediateDirectories_attributes_error_
                            ((ID)UVar14.unknown,UVar2.unknown,1,0,&local_e0);
          UVar14.unknown = local_e0.str;
          if ((int)IVar4 == 0) {
            Foundation::__convertNSErrorToError();
            _swift_willThrow(0);
            _swift_errorRelease();
            unaff_x21 = 0;
          }
          UVar14 = Foundation::URL::deletingPathExtension(UVar14);
          SVar19 = Foundation::URL::get_lastPathComponent(UVar14);
          (*pcVar18)(auStack_150 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),puVar5);
          SVar20.bridgeObject = (void *)0xe400000000000000;
          SVar20.str = (char *)0x67706a2e;
          SVar21.bridgeObject = pvVar15;
          SVar21.str = UVar2.unknown;
          local_e0 = SVar19;
          Swift::String::append(SVar20,SVar21);
          UVar14.unknown = local_100.unknown;
          pvVar15 = local_e0.bridgeObject;
          Foundation::URL::appendingPathComponent(local_e0,UVar2);
          _swift_bridgeObjectRelease(pvVar15);
          DVar7.unknown = local_140.unknown;
          Foundation::Data::_write(UVar14,(NSDataWritingOptions)0x1,local_140);
          if (unaff_x21 == 0) {
            (*pcVar18)(local_110,puVar5);
            FUN_100093624(local_120,local_118);
            FUN_100093624(DVar7.unknown,local_138);
          }
          else {
            FUN_100093624(DVar7.unknown,local_138);
            FUN_100093624(local_120,local_118);
            (*pcVar18)(UVar14.unknown,puVar5);
            (*pcVar18)(local_110,puVar5);
          }
          goto LAB_1002531cc;
        }
      }
      FUN_100093624(local_120,local_118);
    }
    puVar5 = &DAT_10054c048;
    FUN_100002f94(&DAT_10054c048,&DAT_10041d7b0);
    _swift_initStackObject();
    *(undefined8 *)(puVar5 + 0x18) = 2;
    *(undefined8 *)(puVar5 + 0x10) = 1;
    SVar19 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    *(char **)(puVar5 + 0x20) = SVar19.str;
    *(undefined **)(puVar5 + 0x48) = PTR___type_metadata_for_Swift_String_100523a98;
    *(void **)(puVar5 + 0x28) = SVar19.bridgeObject;
    *(undefined8 *)(puVar5 + 0x30) = 0xd000000000000016;
    *(undefined8 *)(puVar5 + 0x38) = 0x80000001004e2550;
    puVar10 = puVar5;
    FUN_100005b10(puVar5);
    _swift_setDeallocating(puVar5);
    FUN_10002a29c(puVar5 + 0x20,&DAT_10054a1c0,&DAT_10041a250);
    puVar5 = &_OBJC_CLASS___NSError;
    _objc_allocWithZone();
    pNVar11 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    pNVar9 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(puVar10);
    objc_stub::initWithDomain_code_userInfo_((ID)puVar5,pNVar11,1,pNVar9);
    _swift_willThrow(0);
  }
LAB_1002531cc:
  if (*(long *)PTR____stack_chk_guard_100521138 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

