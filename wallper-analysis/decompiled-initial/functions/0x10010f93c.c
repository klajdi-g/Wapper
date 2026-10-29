// rea decompile_all
// name: FUN_10010f93c
// address: 0x10010f93c
// body: available
// range: 0x10010f93c-0x10010fb17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10010f93c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  NSDictionary *pNVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  ID IVar8;
  undefined8 uVar9;
  
  puVar7 = &DAT_10054c088;
  FUN_100002f94(&DAT_10054c088,&DAT_10042b190);
  _swift_initStackObject();
  *(undefined8 *)(puVar7 + 0x20) =
       *(undefined8 *)PTR__kCGImageSourceCreateThumbnailFromImageAlways_1005219e8;
  puVar2 = PTR___type_metadata_for_Swift_Bool_100523b70;
  *(undefined8 *)(puVar7 + 0x18) = 8;
  *(undefined8 *)(puVar7 + 0x10) = 4;
  puVar7[0x28] = 1;
  puVar1 = PTR___type_metadata_for_Swift_Int_100523bd8;
  uVar9 = *(undefined8 *)PTR__kCGImageSourceThumbnailMaxPixelSize_100521a08;
  *(undefined8 *)(puVar7 + 0x50) = param_2;
  puVar3 = PTR__kCGImageSourceCreateThumbnailWithTransform_1005219f0;
  *(undefined **)(puVar7 + 0x40) = puVar2;
  *(undefined8 *)(puVar7 + 0x48) = uVar9;
  uVar9 = *(undefined8 *)puVar3;
  *(undefined **)(puVar7 + 0x68) = puVar1;
  *(undefined8 *)(puVar7 + 0x70) = uVar9;
  puVar3 = PTR__kCGImageSourceShouldCacheImmediately_100521a00;
  puVar7[0x78] = 1;
  uVar9 = *(undefined8 *)puVar3;
  *(undefined **)(puVar7 + 0x90) = puVar2;
  *(undefined8 *)(puVar7 + 0x98) = uVar9;
  *(undefined **)(puVar7 + 0xb8) = puVar2;
  puVar7[0xa0] = 1;
  puVar2 = puVar7;
  FUN_1000068d0(puVar7);
  _swift_setDeallocating(puVar7);
  puVar3 = &DAT_10054a168;
  FUN_100002f94(&DAT_10054a168,&DAT_10041a200);
  _swift_arrayDestroy(puVar7 + 0x20,4,puVar3);
  FUN_100007e08(0);
  FUN_10010fb18();
  pNVar4 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(puVar2);
  _CGImageSourceCreateThumbnailAtIndex(param_1,0,pNVar4);
  if (param_1 == 0) {
    IVar8 = 0;
  }
  else {
    lVar5 = param_1;
    _CGImageGetWidth(param_1);
    lVar6 = param_1;
    _CGImageGetHeight(param_1);
    puVar7 = &_OBJC_CLASS___NSImage;
    _objc_allocWithZone();
    IVar8 = objc_stub::initWithCGImage_size_((ID)puVar7,(double)lVar5,(double)lVar6,param_1);
  }
  return IVar8;
}

