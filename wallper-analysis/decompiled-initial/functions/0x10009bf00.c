// rea decompile_all
// name: FUN_10009bf00
// address: 0x10009bf00
// body: available
// range: 0x10009bf00-0x10009c1bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010009c080 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined8
FUN_10009bf00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ID param_5
             )

{
  uint uVar1;
  ID self;
  code *pcVar2;
  NSString *pNVar3;
  undefined *puVar4;
  undefined *puVar5;
  ID IVar6;
  undefined8 uVar7;
  NSDictionary *pNVar8;
  _ArrayBuffer<undefined> _Var9;
  ulong uVar10;
  String SVar11;
  
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  puVar4 = &DAT_10054c048;
  FUN_100002f94(&DAT_10054c048,&DAT_10041d7b0);
  _swift_initStackObject();
  *(undefined8 *)(puVar4 + 0x18) = 2;
  *(undefined8 *)(puVar4 + 0x10) = 1;
  SVar11 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  *(String *)(puVar4 + 0x20) = SVar11;
  puVar5 = &_OBJC_CLASS___CIVector;
  _objc_allocWithZone();
  IVar6 = objc_stub::initWithCGRect_((ID)puVar5,param_1,param_2,param_3,param_4);
  uVar7 = 0;
  FUN_100044230(0,&DAT_10054f768,&PTR__OBJC_CLASS___CIVector_10053fa60);
  *(undefined8 *)(puVar4 + 0x48) = uVar7;
  *(ID *)(puVar4 + 0x30) = IVar6;
  puVar5 = puVar4;
  FUN_100005b10(puVar4);
  _swift_setDeallocating(puVar4);
  FUN_10002a29c((String *)(puVar4 + 0x20),&DAT_10054a1c0,&DAT_10041a250);
  pNVar8 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(puVar5);
  IVar6 = objc_stub::imageByApplyingFilter_withInputParameters_(param_5,pNVar3,pNVar8);
  _Var9 = Swift::Array<undefined>::_allocateBufferUninitialized
                    (IVar6,PTR___type_metadata_for_Swift_Float_100523bb8);
  *(undefined8 *)(_Var9.unknown + 0x10) = 4;
  *(undefined8 *)(_Var9.unknown + 0x20) = 0;
  *(undefined8 *)(_Var9.unknown + 0x28) = 0;
  if (DAT_10054f758 != -1) {
    _swift_once(&DAT_10054f758,FUN_10009a7d0);
  }
  self = DAT_10054f760;
  uVar1 = *(uint *)PTR__kCIFormatRGBAf_1005217e0;
  uVar7 = *(undefined8 *)PTR__kCGColorSpaceSRGB_1005217a8;
  _CGColorSpaceCreateWithName(uVar7);
  _swift_bridgeObjectRetain(_Var9.unknown);
  objc_stub::render_toBitmap_rowBytes_bounds_format_colorSpace_
            (self,0,0,0x3ff0000000000000,0x3ff0000000000000,IVar6,_Var9.unknown + 0x20,0x10,
             (ulong)uVar1,uVar7);
  _swift_bridgeObjectRelease(_Var9.unknown);
  uVar10 = *(ulong *)(_Var9.unknown + 0x10);
  if (uVar10 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10009c1b4);
    (*pcVar2)();
  }
  if (uVar10 == 1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10009c1b8);
    (*pcVar2)();
  }
  if (2 < uVar10) {
    _swift_bridgeObjectRelease(_Var9.unknown);
    return 0;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10009c1bc);
  (*pcVar2)();
}

