// rea decompile_all
// name: FUN_10011a514
// address: 0x10011a514
// body: available
// range: 0x10011a514-0x10011a82b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_10011a514(Data param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  undefined *puVar1;
  NSData *pNVar2;
  NSDictionary *pNVar3;
  undefined *puVar4;
  undefined *puVar5;
  NSData *pNVar6;
  NSData *pNVar7;
  undefined *puVar8;
  ID IVar9;
  undefined8 uVar10;
  
  pNVar2 = Foundation::Data::_bridgeToObjectiveC(param_1);
  _CGImageSourceCreateWithData(pNVar2,0);
  if (pNVar2 != (NSData *)0x0) {
    if (param_4 == '\x01') {
      puVar8 = &DAT_1005532f8;
      FUN_100002f94(&DAT_1005532f8,&DAT_100426308);
      _swift_initStackObject();
      *(undefined8 *)(puVar8 + 0x18) = 2;
      *(undefined8 *)(puVar8 + 0x10) = 1;
      *(undefined8 *)(puVar8 + 0x20) =
           *(undefined8 *)PTR__kCGImageSourceShouldCacheImmediately_100521a00;
      puVar8[0x28] = 1;
      puVar5 = puVar8;
      FUN_100006b30(puVar8);
      _swift_setDeallocating(puVar8);
      FUN_10002a29c(puVar8 + 0x20,&DAT_100553300,&DAT_100426310);
      FUN_100007e08(0);
      FUN_1000036d0(&DAT_10054a568,FUN_100007e08,&TargetProtocolConformanceDescriptor_10041b548);
      pNVar3 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(puVar5);
      _CGImageSourceCreateImageAtIndex(pNVar2,0,pNVar3);
    }
    else {
      puVar8 = &DAT_10054c088;
      FUN_100002f94(&DAT_10054c088,&DAT_10042b190);
      _swift_initStackObject();
      *(undefined8 *)(puVar8 + 0x20) =
           *(undefined8 *)PTR__kCGImageSourceCreateThumbnailFromImageAlways_1005219e8;
      puVar4 = PTR___type_metadata_for_Swift_Bool_100523b70;
      *(undefined8 *)(puVar8 + 0x18) = 8;
      *(undefined8 *)(puVar8 + 0x10) = 4;
      puVar8[0x28] = 1;
      puVar1 = PTR___type_metadata_for_Swift_Int_100523bd8;
      uVar10 = *(undefined8 *)PTR__kCGImageSourceThumbnailMaxPixelSize_100521a08;
      *(undefined8 *)(puVar8 + 0x50) = param_3;
      puVar5 = PTR__kCGImageSourceCreateThumbnailWithTransform_1005219f0;
      *(undefined **)(puVar8 + 0x40) = puVar4;
      *(undefined8 *)(puVar8 + 0x48) = uVar10;
      uVar10 = *(undefined8 *)puVar5;
      *(undefined **)(puVar8 + 0x68) = puVar1;
      *(undefined8 *)(puVar8 + 0x70) = uVar10;
      puVar5 = PTR__kCGImageSourceShouldCacheImmediately_100521a00;
      puVar8[0x78] = 1;
      uVar10 = *(undefined8 *)puVar5;
      *(undefined **)(puVar8 + 0x90) = puVar4;
      *(undefined8 *)(puVar8 + 0x98) = uVar10;
      *(undefined **)(puVar8 + 0xb8) = puVar4;
      puVar8[0xa0] = 1;
      puVar4 = puVar8;
      FUN_1000068d0(puVar8);
      _swift_setDeallocating(puVar8);
      puVar5 = &DAT_10054a168;
      FUN_100002f94(&DAT_10054a168,&DAT_10041a200);
      _swift_arrayDestroy(puVar8 + 0x20,4,puVar5);
      FUN_100007e08(0);
      FUN_1000036d0(&DAT_10054a568,FUN_100007e08,&TargetProtocolConformanceDescriptor_10041b548);
      pNVar3 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(puVar4);
      _CGImageSourceCreateThumbnailAtIndex(pNVar2,0,pNVar3);
    }
    if (pNVar2 != (NSData *)0x0) {
      pNVar6 = pNVar2;
      _CGImageGetWidth();
      pNVar7 = pNVar2;
      _CGImageGetHeight(pNVar2);
      puVar8 = &_OBJC_CLASS___NSImage;
      _objc_allocWithZone();
      IVar9 = objc_stub::initWithCGImage_size_
                        ((ID)puVar8,(double)(long)pNVar6,(double)(long)pNVar7,pNVar2);
      return IVar9;
    }
  }
  return 0;
}

