// rea decompile_all
// name: FUN_1002f9448
// address: 0x1002f9448
// body: available
// range: 0x1002f9448-0x1002f982f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Type propagation algorithm not settling */

undefined * FUN_1002f9448(URL param_1)

{
  undefined *puVar1;
  code *pcVar2;
  URLResourceValues UVar3;
  URL UVar4;
  ID IVar5;
  NSDirectoryEnumerationOptions includingPropertiesForKeys;
  NSFastEnumerationIterator NVar6;
  undefined *puVar7;
  undefined *puVar8;
  Set<NSURLResourceKey> forKeys;
  uint uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long local_130;
  undefined *local_128;
  long local_120;
  undefined *local_118;
  long local_110;
  undefined *local_108;
  ID local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined *local_e0;
  long local_d8;
  undefined *puStack_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined1 auStack_b0 [40];
  undefined1 auStack_88 [24];
  long local_70;
  
  UVar3 = Foundation::URLResourceValues::typeMetadataAccessor();
  lVar12 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar12 + 0x40));
  lVar14 = (long)&local_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar11 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = (undefined *)(lVar14 - extraout_x8_00);
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar13 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar13 + 0x40));
  local_c0 = puVar11 + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puStack_d0 = (undefined *)Foundation::NSFastEnumerationIterator::typeMetadataAccessor();
  local_d8 = *(long *)(puStack_d0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_d8 + 0x40));
  IVar5 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  includingPropertiesForKeys.unknown = &DAT_10054d058;
  FUN_100002f94(&DAT_10054d058,&DAT_10042d4b0);
  local_e0 = includingPropertiesForKeys.unknown;
  _swift_allocObject();
  uStack_e8 = 2;
  local_f0 = 1;
  *(undefined8 *)(includingPropertiesForKeys.unknown + 0x18) = 2;
  *(undefined8 *)(includingPropertiesForKeys.unknown + 0x10) = 1;
  local_f8 = *(undefined8 *)PTR__NSURLFileSizeKey_1005215a0;
  *(undefined8 *)(includingPropertiesForKeys.unknown + 0x20) = local_f8;
  (extension_Foundation)::__C::NSFileManager::_enumerator(param_1,includingPropertiesForKeys);
  _swift_release(includingPropertiesForKeys.unknown);
  if (param_1.unknown == (undefined *)0x0) {
    local_c8 = (undefined *)0x0;
  }
  else {
    local_130 = lVar12;
    local_128 = UVar3.unknown;
    local_110 = lVar14;
    local_108 = param_1.unknown;
    local_100 = IVar5;
    NVar6 = (extension_Foundation)::__C::NSEnumerator::makeIterator();
    puVar1 = PTR___type_metadata_for_Any_100524178;
    lVar12 = 0;
    puVar7 = (undefined *)0x0;
    puVar8 = local_c0;
    while (local_c8 = puVar7, Foundation::NSFastEnumerationIterator::_next(NVar6), local_70 != 0) {
      puVar7 = puVar11;
      _swift_dynamicCast(puVar11,auStack_88,puVar1 + 8,UVar4.unknown,6);
      if (((ulong)puVar7 & 1) == 0) {
        (**(code **)(lVar13 + 0x38))(puVar11,1,1,UVar4.unknown);
        NVar6.unknown = puVar11;
        FUN_10002a29c(puVar11,&DAT_100553d90,&DAT_10041bf10);
        puVar7 = local_c8;
      }
      else {
        (**(code **)(lVar13 + 0x38))(puVar11,0,1,UVar4.unknown);
        (**(code **)(lVar13 + 0x20))(puVar8,puVar11,UVar4.unknown);
        puVar8 = local_e0;
        _swift_initStackObject(local_e0,auStack_b0);
        *(undefined8 *)(puVar8 + 0x18) = uStack_e8;
        *(undefined8 *)(puVar8 + 0x10) = local_f0;
        *(undefined8 *)(puVar8 + 0x20) = local_f8;
        forKeys.unknown = puVar8;
        local_120 = lVar12;
        FUN_100266760();
        _swift_setDeallocating(puVar8);
        pcVar2 = FUN_100008040;
        FUN_100029548(puVar8 + 0x20);
        lVar14 = local_110;
        lVar12 = local_120;
        local_118 = forKeys.unknown;
        Foundation::URL::_resourceValues(forKeys,(URL)pcVar2);
        uVar9 = (uint)pcVar2;
        if (lVar12 == 0) {
          UVar3.unknown = local_118;
          _swift_bridgeObjectRelease();
          Foundation::URLResourceValues::_get_fileSize(UVar3);
          local_118 = UVar3.unknown;
          (**(code **)(local_130 + 8))(lVar14,local_128);
          puVar8 = local_c0;
          NVar6.unknown = local_c0;
          (**(code **)(lVar13 + 8))(local_c0,UVar4.unknown);
          puVar10 = (undefined *)0x0;
          if ((uVar9 & 0xff) != 1) {
            puVar10 = local_118;
          }
        }
        else {
          _swift_errorRelease(lVar12);
          _swift_bridgeObjectRelease(local_118);
          puVar8 = local_c0;
          NVar6.unknown = local_c0;
          (**(code **)(lVar13 + 8))(local_c0,UVar4.unknown);
          lVar12 = 0;
          puVar10 = (undefined *)0x0;
        }
        puVar7 = local_c8 + (long)puVar10;
        if (SCARRY8((long)local_c8,(long)puVar10)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1002f97dc);
          (*pcVar2)();
        }
      }
    }
    (**(code **)(local_d8 + 8))
              ((long)(puVar11 + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0)) -
               (extraout_x8_02 + 0xfU & 0xfffffffffffffff0),puStack_d0);
  }
  return local_c8;
}

