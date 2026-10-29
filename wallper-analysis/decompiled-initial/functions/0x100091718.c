// rea decompile_all
// name: FUN_100091718
// address: 0x100091718
// body: available
// range: 0x100091718-0x100091acb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100091788 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ID FUN_100091718(long param_1)

{
  code *pcVar1;
  _ArrayBuffer<undefined> _Var2;
  Data DVar3;
  NSData *pNVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  ID IVar8;
  ulong uVar9;
  size_t sVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  undefined *local_c8;
  undefined *local_b8;
  undefined8 local_b0;
  undefined *puStack_a8;
  
  uVar9 = param_1 * param_1;
  if (SUB168(SEXT816(param_1) * SEXT816(param_1),8) != (long)uVar9 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100091ac0);
    (*pcVar1)();
  }
  if (uVar9 + 0xe000000000000000 >> 0x3e < 3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100091ac4);
    (*pcVar1)();
  }
  sVar10 = uVar9 * 4;
  if ((uVar9 & 0x3fffffffffffffff) >> 0x3d != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100091ac8);
    (*pcVar1)();
  }
  if (sVar10 == 0) {
    local_c8 = PTR___swiftEmptyArrayStorage_100524190;
  }
  else {
    local_c8 = (undefined *)
               Swift::Array<undefined>::_allocateBufferUninitialized
                         (param_1,PTR___type_metadata_for_Swift_UInt8_100524090);
    *(size_t *)(local_c8 + 0x10) = sVar10;
    _bzero(local_c8 + 0x20,sVar10);
  }
  puVar7 = &DAT_10054ee00;
  FUN_100002f94(&DAT_10054ee00,&DAT_1004202e8);
  _swift_initStaticObject();
  _Var2 = Swift::Array<undefined>::_allocateBufferUninitialized
                    (puVar7,PTR___type_metadata_for_Swift_UInt8_100524090);
  *(undefined8 *)(_Var2.unknown + 0x10) = 0x1000;
  _bzero(_Var2.unknown + 0x20,0x1000);
  lVar11 = 0x21;
  while( true ) {
    fVar12 = (float)(lVar11 - 0x20) / 4095.0;
    if (fVar12 <= 0.0031308) {
      fVar12 = fVar12 * 12.92;
    }
    else {
      _powf(fVar12,0x3ed55555);
      fVar12 = fVar12 * 1.055 + -0.055;
    }
    fVar13 = fVar12 * 255.0 + 0.5;
    fVar12 = (float)NEON_fminnm(fVar13,0x437f0000);
    if (fVar13 < 0.0) {
      fVar12 = 0.0;
    }
    if (0x7f7fffff < (uint)ABS(fVar12)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100091ab4);
      (*pcVar1)();
    }
    if (fVar12 <= -1.0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100091ab8);
      (*pcVar1)();
    }
    if (256.0 <= fVar12) break;
    _Var2.unknown[lVar11] = (char)(int)fVar12;
    lVar11 = lVar11 + 1;
    if (lVar11 == 0x1020) {
      local_b0 = *(undefined8 *)(local_c8 + 0x10);
      local_b8 = local_c8 + 0x20;
      lVar11 = param_1;
      puStack_a8 = _Var2.unknown;
      FUN_1000887a8((float)param_1 / 2.0,0xc016c8b4,((float)param_1 / 1400.0) * 5.2,&local_b8,
                    param_1,puVar7,&puStack_a8);
      DVar3.unknown = local_c8;
      _swift_bridgeObjectRetain();
      FUN_100288368();
      _swift_bridgeObjectRelease(local_c8);
      pNVar4 = Foundation::Data::_bridgeToObjectiveC(DVar3);
      _CGDataProviderCreateWithCFData();
      uVar5 = 0;
      if (pNVar4 == (NSData *)0x0) {
        _swift_bridgeObjectRelease(local_c8);
        FUN_100093624(DVar3.unknown,lVar11);
        _swift_bridgeObjectRelease(_Var2.unknown);
      }
      else {
        if (param_1 + 0xe000000000000000U >> 0x3e < 3) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100091acc);
          (*pcVar1)();
        }
        _CGColorSpaceCreateDeviceRGB(0);
        lVar6 = param_1;
        _CGImageCreate(param_1,param_1,8,0x20,param_1 << 2,uVar5,1,pNVar4);
        if (lVar6 != 0) {
          puVar7 = &_OBJC_CLASS___NSImage;
          _objc_allocWithZone();
          IVar8 = objc_stub::initWithCGImage_size_((ID)puVar7,(double)param_1,(double)param_1,lVar6)
          ;
          FUN_100093624(DVar3.unknown,lVar11);
          _swift_bridgeObjectRelease(_Var2.unknown);
          _swift_bridgeObjectRelease(local_c8);
          return IVar8;
        }
        _swift_bridgeObjectRelease(local_c8);
        FUN_100093624(DVar3.unknown,lVar11);
        _swift_bridgeObjectRelease(_Var2.unknown);
      }
      return 0;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100091abc);
  (*pcVar1)();
}

