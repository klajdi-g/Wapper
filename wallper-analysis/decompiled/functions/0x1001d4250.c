// rea decompile_all
// name: FUN_1001d4250
// address: 0x1001d4250
// body: available
// range: 0x1001d4250-0x1001d4643 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001d4250(long param_1,code *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  long extraout_x8;
  long lVar7;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long local_b0 [3];
  code *local_98;
  long local_90;
  long local_88;
  long local_80;
  ulong local_78;
  long local_70;
  undefined *local_68;
  
  lVar4 = 0;
  pcVar3 = param_2;
  FUN_100266c2c();
  lVar14 = *(long *)(lVar4 + -8);
  local_70 = lVar4;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar14 + 0x40));
  lVar7 = (long)local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_90 = lVar7;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar7 = lVar7 - extraout_x12;
  local_88 = lVar7;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar7 = lVar7 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar15 = lVar7 - extraout_x12_01;
  lVar4 = 0;
  FUN_10025ee04();
  local_80 = (long)*(int *)(lVar4 + 0x34);
  local_78 = *(ulong *)(param_1 + local_80);
  if (*(ulong *)(local_78 + 0x10) < 0x18) {
    FUN_10025f510();
    lVar8 = *(long *)(lVar4 + 0x10);
    if (lVar8 == 0) {
      _swift_bridgeObjectRelease(lVar4);
      puVar10 = PTR___swiftEmptyArrayStorage_100524190;
    }
    else {
      local_68 = PTR___swiftEmptyArrayStorage_100524190;
      local_b0[1] = param_1;
      local_98 = param_2;
      FUN_1001c5ed8(0,lVar8,0);
      lVar13 = lVar4 + ((ulong)*(byte *)(lVar14 + 0x50) + 0x20 &
                       ((ulong)*(byte *)(lVar14 + 0x50) ^ 0xffffffffffffffff));
      lVar16 = *(long *)(lVar14 + 0x48);
      local_b0[0] = lVar4;
      local_b0[2] = lVar14;
      do {
        puVar10 = local_68;
        FUN_100029504(lVar13,lVar7,FUN_100266c2c);
        uVar9 = *(undefined8 *)(lVar7 + *(int *)(local_70 + 0x18));
        pcVar3 = FUN_100266c2c;
        FUN_100029548(lVar7);
        uVar11 = *(ulong *)(puVar10 + 0x10);
        pcVar1 = (code *)(uVar11 + 1);
        local_68 = puVar10;
        if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar11) {
          pcVar3 = pcVar1;
          FUN_1001c5ed8(1 < *(ulong *)(puVar10 + 0x18),pcVar1,1);
        }
        puVar10 = local_68;
        *(code **)(local_68 + 0x10) = pcVar1;
        *(undefined8 *)(local_68 + uVar11 * 8 + 0x20) = uVar9;
        lVar13 = lVar13 + lVar16;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      _swift_bridgeObjectRelease(local_b0[0]);
      param_2 = local_98;
      lVar14 = local_b0[2];
      param_1 = local_b0[1];
    }
    puVar5 = puVar10;
    FUN_1001d40d0();
    _swift_bridgeObjectRelease(puVar10);
    uVar11 = 0;
    uVar12 = *(ulong *)(local_78 + 0x10);
    do {
      if (uVar12 == uVar11) {
        puVar10 = puVar5;
        FUN_1002682a0();
        lVar7 = local_88;
        Foundation::UUID::init();
        lVar4 = local_90;
        puVar2 = (undefined8 *)(lVar7 + *(int *)(local_70 + 0x14));
        *puVar2 = puVar10;
        puVar2[1] = pcVar3;
        *(undefined **)(lVar7 + *(int *)(local_70 + 0x18)) = puVar5;
        FUN_100029504(lVar7,local_90,FUN_100266c2c);
        uVar11 = local_78;
        uVar12 = local_78;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar6 = uVar11;
        if ((uVar12 & 1) == 0) {
          uVar6 = 0;
          FUN_1001c8094(0,*(long *)(uVar11 + 0x10) + 1,1,uVar11,&DAT_100556868,&DAT_10042a720,
                        FUN_100266c2c,PTR__swift_bridgeObjectRelease_100524200);
        }
        lVar15 = local_80;
        uVar11 = *(ulong *)(uVar6 + 0x10);
        uVar12 = uVar6;
        if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar11) {
          uVar12 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
          FUN_1001c8094(uVar12,uVar11 + 1,1,uVar6,&DAT_100556868,&DAT_10042a720,FUN_100266c2c,
                        PTR__swift_bridgeObjectRelease_100524200);
        }
        *(ulong *)(uVar12 + 0x10) = uVar11 + 1;
        FUN_100007e64(lVar4,uVar12 + ((ulong)*(byte *)(lVar14 + 0x50) + 0x20 &
                                     ((ulong)*(byte *)(lVar14 + 0x50) ^ 0xffffffffffffffff)) +
                            *(long *)(lVar14 + 0x48) * uVar11,FUN_100266c2c);
        *(ulong *)(param_1 + lVar15) = uVar12;
        FUN_10002a29c(param_2,&DAT_100556aa0,&DAT_100433070);
        FUN_100007e64(lVar7,param_2,FUN_100266c2c);
        (**(code **)(lVar14 + 0x38))(param_2,0,1,local_70);
        return;
      }
      if (*(ulong *)(local_78 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1001d45c4);
        (*pcVar3)();
      }
      FUN_100029504(local_78 +
                    ((ulong)*(byte *)(lVar14 + 0x50) + 0x20 &
                    ((ulong)*(byte *)(lVar14 + 0x50) ^ 0xffffffffffffffff)) +
                    *(long *)(lVar14 + 0x48) * uVar11,lVar15,FUN_100266c2c);
      uVar11 = uVar11 + 1;
      puVar10 = *(undefined **)(lVar15 + *(int *)(local_70 + 0x18));
      pcVar3 = FUN_100266c2c;
      FUN_100029548(lVar15);
    } while (puVar10 != puVar5);
  }
  return;
}

