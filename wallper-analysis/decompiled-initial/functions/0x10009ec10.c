// rea decompile_all
// name: FUN_10009ec10
// address: 0x10009ec10
// body: available
// range: 0x10009ec10-0x10009ee7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010009edec) */

void FUN_10009ec10(undefined8 param_1)

{
  URL UVar1;
  undefined *puVar2;
  ID self;
  undefined *puVar3;
  NSDictionary *pNVar4;
  Data DVar5;
  URL UVar6;
  undefined8 extraout_x1;
  undefined8 uVar7;
  long extraout_x8;
  URL to;
  long lVar8;
  undefined1 auStack_a0 [80];
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar8 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar8 + 0x40));
  to.unknown = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &_OBJC_CLASS___NSBitmapImageRep;
  _objc_allocWithZone();
  self = objc_stub::initWithCGImage_((ID)puVar2,param_1);
  puVar2 = &DAT_10054f9e0;
  FUN_100002f94(&DAT_10054f9e0,&DAT_100420e40);
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x20) = *(undefined8 *)PTR__NSImageCompressionFactor_100521308;
  *(undefined8 *)(puVar2 + 0x18) = 2;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  *(undefined **)(puVar2 + 0x40) = PTR___type_metadata_for_Swift_Double_100523b90;
  *(undefined8 *)(puVar2 + 0x28) = 0x3feccccccccccccd;
  puVar3 = puVar2;
  FUN_100006b0c(puVar2);
  _swift_setDeallocating(puVar2);
  FUN_10002a29c(puVar2 + 0x20,&DAT_10054a1e8,&DAT_10041a278);
  FUN_10000807c(0);
  FUN_1000036d0(&DAT_10054a5f0,FUN_10000807c,&TargetProtocolConformanceDescriptor_10041b450);
  pNVar4 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(puVar3);
  DVar5.unknown = (undefined *)objc_stub::representationUsingType_properties_(self,3,pNVar4);
  if (DVar5.unknown != (undefined *)0x0) {
    uVar7 = extraout_x1;
    DVar5 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar5);
    if (DAT_10054f9c0 != -1) {
      _swift_once(&DAT_10054f9c0,FUN_10009e65c);
    }
    UVar6 = UVar1;
    FUN_100099338(UVar1.unknown,&DAT_10054f9c8);
    (**(code **)(lVar8 + 0x10))(to.unknown,UVar6.unknown,UVar1.unknown);
    Foundation::Data::_write(to,(NSDataWritingOptions)0x1,DVar5);
    (**(code **)(lVar8 + 8))(to.unknown,UVar1.unknown);
    FUN_100093624(DVar5.unknown,uVar7);
  }
  return;
}

