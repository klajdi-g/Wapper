// rea decompile_all
// name: FUN_1001ecaec
// address: 0x1001ecaec
// body: available
// range: 0x1001ecaec-0x1001ecc7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_1001ecaec(ID param_1)

{
  Data DVar1;
  undefined *puVar2;
  NSData *pNVar3;
  ID self;
  NSDictionary *pNVar4;
  Data DVar5;
  undefined8 extraout_x1;
  undefined8 uVar6;
  undefined8 extraout_x1_00;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  DVar1.unknown = (undefined *)objc_stub::TIFFRepresentation(param_1);
  if (DVar1.unknown != (undefined *)0x0) {
    uVar6 = extraout_x1;
    DVar1 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar1);
    puVar2 = &_OBJC_CLASS___NSBitmapImageRep;
    _objc_allocWithZone();
    FUN_10011a30c(DVar1.unknown,uVar6);
    pNVar3 = Foundation::Data::_bridgeToObjectiveC(DVar1);
    self = objc_stub::initWithData_((ID)puVar2,pNVar3);
    FUN_100093624(DVar1.unknown,uVar6);
    if (self == 0) {
      FUN_100093624(DVar1.unknown,uVar6);
    }
    else {
      puVar2 = PTR___swiftEmptyArrayStorage_100524190;
      FUN_100006b0c(PTR___swiftEmptyArrayStorage_100524190);
      FUN_10000807c(0);
      FUN_100047f94(&DAT_10054a5f0,0xff,FUN_10000807c,&TargetProtocolConformanceDescriptor_10041b450
                   );
      pNVar4 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(puVar2);
      DVar5.unknown = (undefined *)objc_stub::representationUsingType_properties_(self,4,pNVar4);
      if (DVar5.unknown != (undefined *)0x0) {
        uVar7 = extraout_x1_00;
        DVar5 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar5);
        FUN_100093624(DVar1.unknown,uVar6);
        goto LAB_1001ecc6c;
      }
      FUN_100093624(DVar1.unknown,uVar6);
    }
  }
  DVar5.unknown = (undefined *)0x0;
  uVar7 = 0xf000000000000000;
LAB_1001ecc6c:
  auVar8._8_8_ = uVar7;
  auVar8._0_8_ = DVar5.unknown;
  return auVar8;
}

