// rea decompile_all
// name: FUN_100282948
// address: 0x100282948
// body: available
// range: 0x100282948-0x100282e63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_100282948(void)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  URL UVar4;
  long lVar5;
  undefined *puVar6;
  Set<NSURLResourceKey> forKeys;
  undefined8 uVar7;
  URLResourceValues UVar8;
  URLResourceValues UVar9;
  Date DVar10;
  URL UVar11;
  long extraout_x8;
  long extraout_x8_00;
  long lVar12;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  undefined1 uVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined *puVar16;
  ulong uVar17;
  long lVar18;
  code *pcVar19;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  long local_120;
  ulong local_118;
  long local_110;
  long local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined *local_f0;
  long local_e8;
  undefined *local_e0;
  long local_d8;
  undefined *local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  undefined *local_70;
  
  puVar16 = &DAT_100558c70;
  FUN_100002f94(&DAT_100558c70,&DAT_10042d4a8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar16 + -8) + 0x40));
  puVar6 = (undefined *)((long)&local_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar16 = puVar6 + -extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar18 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar18 + 0x40));
  lVar12 = ((long)puVar16 - extraout_x12_00) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  local_b0 = lVar12;
  FUN_100282ef4();
  local_e8 = *(long *)(lVar5 + -8);
  local_b8 = lVar5;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_e8 + 0x40));
  local_c0 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  FUN_1002690dc();
  uVar17 = *(ulong *)(lVar5 + 0x10);
  if (uVar17 == 0) {
    _swift_bridgeObjectRelease();
    puVar14 = PTR___swiftEmptyArrayStorage_100524190;
  }
  else {
    local_70 = PTR___swiftEmptyArrayStorage_100524190;
    FUN_1001c5f70(0,uVar17,0);
    uVar15 = 0;
    local_120 = lVar5 + ((ulong)*(byte *)(lVar18 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar18 + 0x50) ^ 0xffffffffffffffff));
    local_128 = *(undefined8 *)PTR__NSURLFileSizeKey_1005215a0;
    local_130 = *(undefined8 *)PTR__NSURLAddedToDirectoryDateKey_100521590;
    uStack_138 = 4;
    local_140 = 2;
    puVar14 = local_70;
    lVar12 = 0;
    local_118 = uVar17;
    local_110 = lVar5;
    local_108 = lVar18;
    local_100 = UVar4.unknown;
    local_f8 = puVar16;
    local_f0 = puVar6;
    local_c8 = (long)puVar16 - extraout_x12_00;
    do {
      if (*(ulong *)(local_110 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x100282e64);
        (*pcVar19)();
      }
      pcVar19 = *(code **)(lVar18 + 0x10);
      local_d0 = puVar14;
      (*pcVar19)(local_b0,local_120 + *(long *)(lVar18 + 0x48) * uVar15,UVar4.unknown);
      puVar6 = &DAT_10054d058;
      FUN_100002f94(&DAT_10054d058,&DAT_10042d4b0);
      _swift_initStackObject();
      *(undefined8 *)(puVar6 + 0x18) = uStack_138;
      *(undefined8 *)(puVar6 + 0x10) = local_140;
      *(undefined8 *)(puVar6 + 0x20) = local_128;
      *(undefined8 *)(puVar6 + 0x28) = local_130;
      forKeys.unknown = puVar6;
      FUN_100266760();
      _swift_setDeallocating(puVar6);
      uVar7 = 0;
      FUN_100008040(0);
      UVar11.unknown = (undefined *)0x2;
      _swift_arrayDestroy(puVar6 + 0x20,2,uVar7);
      Foundation::URL::_resourceValues(forKeys,UVar11);
      bVar2 = lVar12 != 0;
      if (bVar2) {
        _swift_errorRelease(lVar12);
        lVar12 = 0;
      }
      local_d8 = lVar12;
      _swift_bridgeObjectRelease(forKeys.unknown);
      UVar8 = Foundation::URLResourceValues::typeMetadataAccessor();
      lVar18 = local_c8;
      lVar5 = *(long *)(UVar8.unknown + -8);
      (**(code **)(lVar5 + 0x38))(local_c8,bVar2,1,UVar8.unknown);
      (*pcVar19)(local_c0,local_b0,UVar4.unknown);
      FUN_1000087e4(lVar18,puVar16,&DAT_100558c70,&DAT_10042d4a8);
      pcVar19 = *(code **)(lVar5 + 0x30);
      uVar13 = 1;
      UVar9.unknown = puVar16;
      (*pcVar19)(puVar16,1,UVar8.unknown);
      if ((int)UVar9.unknown == 1) {
        FUN_10002a29c(puVar16,&DAT_100558c70,&DAT_10042d4a8);
        local_e0 = (undefined *)0x0;
        uVar13 = 1;
      }
      else {
        Foundation::URLResourceValues::_get_fileSize(UVar9);
        local_e0 = UVar9.unknown;
        (**(code **)(lVar5 + 8))(puVar16,UVar8.unknown);
      }
      lVar18 = local_c8;
      puVar16 = local_f0;
      FUN_1000087e4(local_c8,local_f0,&DAT_100558c70,&DAT_10042d4a8);
      iVar3 = *(int *)(local_b8 + 0x18);
      UVar9.unknown = puVar16;
      (*pcVar19)(puVar16,1,UVar8.unknown);
      lVar12 = local_c0;
      if ((int)UVar9.unknown == 1) {
        FUN_10002a29c(lVar18,&DAT_100558c70,&DAT_10042d4a8);
        FUN_10002a29c(puVar16,&DAT_100558c70,&DAT_10042d4a8);
        DVar10 = Foundation::Date::typeMetadataAccessor();
        lVar12 = local_c0;
        (**(code **)(*(long *)(DVar10.unknown + -8) + 0x38))(local_c0 + iVar3,1,1,DVar10.unknown);
      }
      else {
        Foundation::URLResourceValues::_get_addedToDirectoryDate(UVar9);
        FUN_10002a29c(lVar18,&DAT_100558c70,&DAT_10042d4a8);
        (**(code **)(lVar5 + 8))(puVar16,UVar8.unknown);
      }
      UVar4.unknown = local_100;
      lVar18 = local_108;
      puVar1 = (undefined8 *)(lVar12 + *(int *)(local_b8 + 0x14));
      *puVar1 = local_e0;
      *(undefined1 *)(puVar1 + 1) = uVar13;
      (**(code **)(local_108 + 8))(local_b0);
      puVar16 = local_f8;
      local_70 = local_d0;
      uVar17 = *(ulong *)(local_d0 + 0x10);
      if (*(ulong *)(local_d0 + 0x18) >> 1 <= uVar17) {
        FUN_1001c5f70(1 < *(ulong *)(local_d0 + 0x18),uVar17 + 1,1);
      }
      puVar14 = local_70;
      uVar15 = uVar15 + 1;
      *(ulong *)(local_70 + 0x10) = uVar17 + 1;
      FUN_100007e64(lVar12,local_70 +
                           *(long *)(local_e8 + 0x48) * uVar17 +
                           ((ulong)*(byte *)(local_e8 + 0x50) + 0x20 &
                           ((ulong)*(byte *)(local_e8 + 0x50) ^ 0xffffffffffffffff)),FUN_100282ef4);
      lVar12 = local_d8;
    } while (local_118 != uVar15);
    _swift_bridgeObjectRelease();
  }
  return puVar14;
}

