// rea decompile_all
// name: FUN_100162f58
// address: 0x100162f58
// body: available
// range: 0x100162f58-0x100163503 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100163500 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100163474) */
/* WARNING: Removing unreachable block (ram,0x000100163100) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001001630f8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100162f58(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6,undefined *param_7)

{
  code *pcVar1;
  Data DVar2;
  SHA256 SVar3;
  SHA256Digest SVar4;
  URL UVar5;
  JSONEncoder *pJVar6;
  undefined *puVar7;
  undefined *puVar8;
  ID IVar9;
  URL UVar10;
  URL UVar11;
  NSURL *pNVar12;
  char *pcVar13;
  void *pvVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  String SVar21;
  String SVar22;
  code *local_100;
  undefined *puStack_f8;
  code *local_f0;
  Data local_e8;
  undefined *puStack_e0;
  long local_d8;
  URL local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined *local_98;
  long local_90;
  long local_88;
  undefined *local_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100521138;
  local_c0 = param_2;
  local_b8 = param_4;
  local_b0 = param_6;
  local_a8 = param_3;
  local_a0 = param_5;
  local_98 = param_7;
  SVar3 = CryptoKit::SHA256::typeMetadataAccessor();
  local_88 = *(long *)(SVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_88 + 0x40));
  lVar19 = (long)&local_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  SVar4 = CryptoKit::SHA256Digest::typeMetadataAccessor();
  local_90 = *(long *)(SVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_90 + 0x40));
  puVar20 = (undefined *)(lVar19 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  UVar5 = Foundation::URL::typeMetadataAccessor();
  lVar15 = *(long *)(UVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar15 + 0x40));
  lVar18 = (long)puVar20 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar16 = (undefined *)(lVar18 - extraout_x12);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar17 = puVar16 + -extraout_x12_00;
  if (*(long *)(param_1 + 0x10) != 0) {
    local_c8 = SVar4.unknown;
    pJVar6 = Foundation::JSONEncoder::typeMetadataAccessor();
    _swift_allocObject(pJVar6,*(undefined4 *)(pJVar6 + 0x30),*(undefined2 *)(pJVar6 + 0x34));
    pJVar6 = Foundation::JSONEncoder::init(pJVar6);
    puVar7 = &DAT_100555160;
    local_78 = param_1;
    FUN_100002f94(&DAT_100555160,&DAT_100428c78);
    puVar8 = &DAT_1005552f8;
    FUN_100163504(&DAT_1005552f8,FUN_100163574,
                  PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100523b40);
    local_e8 = Foundation::JSONEncoder::_encode(pJVar6,puVar8,puVar7,puVar8);
    puStack_e0 = puVar7;
    local_d8 = lVar18;
    _swift_release(pJVar6);
    IVar9 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
    if (DAT_1005552d8 != -1) {
      _swift_once(&DAT_1005552d8,FUN_1001600e0);
    }
    UVar10 = UVar5;
    FUN_100099338(UVar5.unknown,&DAT_100577c80);
    local_100 = *(code **)(lVar15 + 0x10);
    UVar11.unknown = puVar17;
    puStack_f8 = UVar10.unknown;
    (*local_100)(puVar17,UVar10.unknown,UVar5.unknown);
    pNVar12 = Foundation::URL::_bridgeToObjectiveC(UVar11);
    local_f0 = *(code **)(lVar15 + 8);
    (*local_f0)(puVar17,UVar5.unknown);
    local_78 = (undefined *)0x0;
    IVar9 = NSFileManager::createDirectoryAtURL_withIntermediateDirectories_attributes_error_
                      (IVar9,pNVar12,1,0,&local_78);
    local_d0.unknown = puVar16;
    if ((int)IVar9 == 0) {
      puVar16 = local_78;
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
      _swift_errorRelease(puVar16);
    }
    puVar16 = &DAT_100549eb0;
    FUN_100002f94(&DAT_100549eb0,&DAT_100426be0);
    _swift_allocObject();
    puVar8 = local_98;
    puVar7 = local_a0;
    *(undefined8 *)(puVar16 + 0x18) = 6;
    *(undefined8 *)(puVar16 + 0x10) = 3;
    *(undefined8 *)(puVar16 + 0x20) = local_c0;
    *(undefined8 *)(puVar16 + 0x28) = local_a8;
    *(undefined8 *)(puVar16 + 0x30) = local_b8;
    *(undefined **)(puVar16 + 0x38) = local_a0;
    *(undefined8 *)(puVar16 + 0x40) = local_b0;
    *(undefined **)(puVar16 + 0x48) = local_98;
    local_78 = puVar16;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(puVar7);
    _swift_bridgeObjectRetain(puVar8);
    puVar7 = &DAT_100553858;
    FUN_100002f94(&DAT_100553858,&DAT_100429e10);
    puVar8 = &DAT_1005546b8;
    local_98 = puVar7;
    FUN_1000087a0(&DAT_1005546b8,&DAT_100553858,&DAT_100429e10,
                  PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100523b48);
    SVar21.bridgeObject = (void *)0xe100000000000000;
    SVar21.str = (char *)0x7c;
    local_a0 = puVar8;
    SVar21 = (extension_Swift)::Swift::BidirectionalCollection::_joined(SVar21);
    _swift_release(puVar16);
    SVar22 = Swift::String::lowercased(SVar21);
    _swift_bridgeObjectRelease(SVar21.bridgeObject);
    FUN_100284930(SVar22.str,SVar22.bridgeObject);
    pvVar14 = SVar22.bridgeObject;
    pcVar13 = SVar22.str;
    FUN_1000036d0(&DAT_1005552d0,PTR_typeMetadataAccessor_100521940,
                  PTR_CryptoKit__CryptoKit__SHA256_>CryptoKit__HashFunction_100521938);
    CryptoKit::HashFunction::init();
    FUN_10011a30c(pcVar13,pvVar14);
    FUN_100161b9c(pcVar13,pvVar14,lVar19);
    FUN_100093624(pcVar13,pvVar14);
    CryptoKit::HashFunction::_finalize();
    FUN_100093624(pcVar13,pvVar14);
    (**(code **)(local_88 + 8))(lVar19,SVar3.unknown);
    puVar16 = puVar20;
    FUN_10015983c();
    (**(code **)(local_90 + 8))(puVar20,local_c8);
    local_78 = puVar16;
    SVar21 = (extension_Swift)::Swift::BidirectionalCollection::_joined
                       ((String)(ZEXT816(0xe000000000000000) << 0x40));
    _swift_bridgeObjectRelease(puVar16);
    lVar15 = local_d8;
    UVar11 = UVar5;
    (*local_100)(local_d8,puStack_f8);
    Foundation::URL::appendingPathComponent(SVar21,UVar11);
    _swift_bridgeObjectRelease(SVar21.bridgeObject);
    pcVar1 = local_f0;
    (*local_f0)(lVar15,UVar5.unknown);
    UVar10.unknown = local_d0.unknown;
    SVar22.bridgeObject = (void *)0xe400000000000000;
    SVar22.str = (char *)0x6e6f736a;
    Foundation::URL::appendingPathExtension(SVar22,UVar11);
    (*pcVar1)(puVar17,UVar5.unknown);
    puVar16 = puStack_e0;
    DVar2.unknown = local_e8.unknown;
    Foundation::Data::_write(UVar10,(NSDataWritingOptions)0x1,local_e8);
    (*pcVar1)(UVar10.unknown,UVar5.unknown);
    FUN_100093624(DVar2.unknown,puVar16);
  }
  if (*(long *)PTR____stack_chk_guard_100521138 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

