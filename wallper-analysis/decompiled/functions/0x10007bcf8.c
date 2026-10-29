// rea decompile_all
// name: FUN_10007bcf8
// address: 0x10007bcf8
// body: available
// range: 0x10007bcf8-0x10007bf93 inclusive
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

ID FUN_10007bcf8(void)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  NSString *pNVar4;
  undefined *puVar5;
  undefined *puVar6;
  NSDictionary *pNVar7;
  String SVar8;
  
  puVar1 = &_OBJC_CLASS___CIContext;
  _objc_allocWithZone();
  IVar2 = objc_stub::init((ID)puVar1);
  IVar3 = CIFilter::randomGeneratorFilter((ID)&_OBJC_CLASS___CIFilter);
  IVar3 = CIFilter::outputImage(IVar3);
  if (IVar3 != 0) {
    IVar3 = CIFilter::imageByCroppingToRect_(IVar3,0,0,0x4060000000000000,0x4060000000000000);
    pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    puVar1 = &DAT_10054c048;
    FUN_100002f94(&DAT_10054c048,&DAT_10041d7b0);
    _swift_initStackObject();
    *(undefined8 *)(puVar1 + 0x18) = 4;
    *(undefined8 *)(puVar1 + 0x10) = 2;
    SVar8 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    *(char **)(puVar1 + 0x20) = SVar8.str;
    *(undefined **)(puVar1 + 0x48) = PTR___type_metadata_for_Swift_Int_100523bd8;
    *(void **)(puVar1 + 0x28) = SVar8.bridgeObject;
    *(undefined8 *)(puVar1 + 0x30) = 0;
    SVar8 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    *(String *)(puVar1 + 0x50) = SVar8;
    *(undefined **)(puVar1 + 0x78) = PTR___type_metadata_for_Swift_Double_100523b90;
    *(undefined8 *)(puVar1 + 0x60) = 0x3fe3333333333333;
    puVar5 = puVar1;
    FUN_100005b10(puVar1);
    _swift_setDeallocating(puVar1);
    puVar6 = &DAT_10054a1c0;
    FUN_100002f94(&DAT_10054a1c0,&DAT_10041a250);
    _swift_arrayDestroy(puVar1 + 0x20,2,puVar6);
    pNVar7 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(puVar5);
    IVar3 = CIFilter::imageByApplyingFilter_withInputParameters_(IVar3,pNVar4,pNVar7);
    if (IVar3 != 0) {
      CIFilter::extent(IVar3);
      IVar2 = objc_stub::createCGImage_fromRect_(IVar2,IVar3);
      if (IVar2 != 0) {
        puVar1 = &_OBJC_CLASS___NSImage;
        _objc_allocWithZone();
        IVar2 = objc_stub::initWithCGImage_size_
                          ((ID)puVar1,0x4060000000000000,0x4060000000000000,IVar2);
        return IVar2;
      }
    }
  }
  puVar1 = &_OBJC_CLASS___NSImage;
  _objc_allocWithZone();
  IVar2 = objc_stub::initWithSize_((ID)puVar1,0x4060000000000000,0x4060000000000000);
  return IVar2;
}

