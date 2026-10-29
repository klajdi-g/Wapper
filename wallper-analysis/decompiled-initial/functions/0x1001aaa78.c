// rea decompile_all
// name: FUN_1001aaa78
// address: 0x1001aaa78
// body: available
// range: 0x1001aaa78-0x1001aacef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1001aaa78(long *param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  long extraout_x8;
  long lVar6;
  undefined8 *puVar7;
  long extraout_x12;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong auStack_b0 [2];
  long *plStack_a0;
  long local_98;
  long local_90;
  undefined8 *local_88;
  long local_80;
  undefined *local_78;
  long local_70;
  long local_68;
  
  puVar5 = &DAT_1005564c8;
  FUN_100002f94(&DAT_1005564c8,&DAT_10042a380);
  local_90 = *(long *)(puVar5 + -8);
  local_78 = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_90 + 0x40));
  puVar7 = (undefined8 *)((long)auStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_88 = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_80 = (long)puVar7 - extraout_x12;
  puVar8 = (ulong *)(param_4 + 0x40);
  auStack_b0[1] = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if (-auStack_b0[1] < 0x40) {
    uVar12 = ~(-1L << (-auStack_b0[1] & 0x3f));
  }
  uVar12 = uVar12 & *puVar8;
  if (param_2 == 0) {
    lVar10 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    lVar10 = 0;
  }
  else {
    local_68 = param_2;
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1001aacf0);
      (*pcVar3)();
    }
    lVar6 = 0;
    uVar9 = 0x3f - auStack_b0[1] >> 6;
    lVar2 = 0;
    local_98 = param_3;
    puVar7 = local_88;
    lVar10 = lVar6;
    while( true ) {
      while (param_3 = lVar2, plStack_a0 = param_1, local_88 = puVar7, uVar12 != 0) {
        local_70 = param_3 + 1;
        uVar11 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar12 = uVar12 - 1 & uVar12;
        uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | lVar10 << 6;
        lVar6 = *(long *)(param_4 + 0x38);
        *puVar7 = *(undefined8 *)(*(long *)(param_4 + 0x30) + uVar11 * 8);
        iVar1 = *(int *)(local_78 + 0x30);
        puVar5 = &DAT_10054a248;
        FUN_100002f94(&DAT_10054a248,&DAT_10042aa30);
        FUN_1000087e4(lVar6 + *(long *)(*(long *)(puVar5 + -8) + 0x48) * uVar11,
                      (long)puVar7 + (long)iVar1,&DAT_10054a248,&DAT_10042aa30);
        lVar6 = local_80;
        FUN_100007e1c(puVar7,local_80,&DAT_1005564c8,&DAT_10042a380);
        lVar2 = local_68;
        FUN_100007e1c(lVar6,local_68,&DAT_1005564c8,&DAT_10042a380);
        param_1 = plStack_a0;
        param_3 = local_98;
        if (local_70 == local_98) goto LAB_1001aaca8;
        local_68 = lVar2 + *(long *)(local_90 + 0x48);
        lVar6 = lVar10;
        lVar2 = local_70;
        puVar7 = local_88;
      }
      bVar4 = SCARRY8(lVar10,1);
      lVar10 = lVar10 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1001aacec);
        (*pcVar3)();
      }
      if ((long)uVar9 <= lVar10) break;
      uVar12 = puVar8[lVar10];
      lVar2 = param_3;
    }
    uVar12 = 0;
    if ((long)uVar9 <= lVar6 + 1) {
      uVar9 = lVar6 + 1;
    }
    lVar10 = uVar9 - 1;
  }
LAB_1001aaca8:
  *param_1 = param_4;
  param_1[1] = (long)puVar8;
  param_1[2] = ~auStack_b0[1];
  param_1[3] = lVar10;
  param_1[4] = uVar12;
  return param_3;
}

