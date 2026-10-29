// rea decompile_all
// name: FUN_1001c3828
// address: 0x1001c3828
// body: available
// range: 0x1001c3828-0x1001c3c1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1001c3828(long param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long extraout_x12;
  long extraout_x12_00;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long alStack_b0 [2];
  ulong *local_a0;
  long local_98;
  long local_90;
  ulong local_88;
  long *local_80;
  undefined8 *local_78;
  ulong local_70;
  long local_68;
  
  lVar4 = 0;
  FUN_100170d98();
  local_68 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_68 + 0x40));
  uVar14 = (long)alStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_88 = uVar14;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar4 = uVar14 - extraout_x12;
  puVar5 = &DAT_100556a48;
  FUN_100002f94(&DAT_100556a48,&DAT_10042abd0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  puVar10 = (undefined8 *)(lVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  local_78 = puVar10;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_80 = (long *)((long)puVar10 - extraout_x12_00);
  if (param_1 == param_2) {
    uVar8 = 1;
  }
  else {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) {
      local_a0 = (ulong *)(param_1 + 0x40);
      uVar9 = *local_a0;
      uVar11 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      uVar14 = 0xffffffffffffffff;
      if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
        uVar14 = ~(-1L << (uVar11 & 0x3f));
      }
      alStack_b0[1] = uVar11 + 0x3f >> 6;
      local_98 = param_1;
      _swift_bridgeObjectRetain_n(param_1,2);
      _swift_bridgeObjectRetain(param_2);
      uVar14 = uVar14 & uVar9;
      lVar7 = 0;
      local_90 = lVar4;
      do {
        puVar10 = local_78;
        lVar4 = local_98;
        if (uVar14 == 0) {
          uVar14 = alStack_b0[1];
          if (alStack_b0[1] <= lVar7 + 1) {
            uVar14 = lVar7 + 1;
          }
          lVar13 = uVar14 - 1;
          lVar12 = lVar7;
          do {
            lVar7 = lVar12 + 1;
            if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1001c3c20);
              (*pcVar3)();
            }
            if (alStack_b0[1] <= lVar7) {
              puVar5 = &DAT_100556a50;
              FUN_100002f94(&DAT_100556a50,&DAT_10042abd8);
              (**(code **)(*(long *)(puVar5 + -8) + 0x38))(puVar10,1,1,puVar5);
              local_70 = 0;
              goto LAB_1001c3a6c;
            }
            uVar14 = local_a0[lVar7];
            lVar12 = lVar12 + 1;
          } while (uVar14 == 0);
          uVar9 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          local_70 = uVar14 - 1 & uVar14;
          uVar14 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar7 * 0x40;
        }
        else {
          uVar9 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          local_70 = uVar14 - 1 & uVar14;
          uVar14 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar7 << 6;
        }
        puVar1 = (undefined8 *)(*(long *)(local_98 + 0x30) + uVar14 * 0x10);
        uVar8 = puVar1[1];
        *local_78 = *puVar1;
        puVar10[1] = uVar8;
        puVar5 = &DAT_100556a50;
        FUN_100002f94(&DAT_100556a50,&DAT_10042abd8);
        FUN_100029504(*(long *)(lVar4 + 0x38) + *(long *)(local_68 + 0x48) * uVar14,
                      (long)puVar10 + (long)*(int *)(puVar5 + 0x30),FUN_100170d98);
        (**(code **)(*(long *)(puVar5 + -8) + 0x38))(puVar10,0,1,puVar5);
        _swift_bridgeObjectRetain(uVar8);
        lVar13 = lVar7;
LAB_1001c3a6c:
        plVar2 = local_80;
        FUN_100007e1c(puVar10,local_80,&DAT_100556a48,&DAT_10042abd0);
        puVar5 = &DAT_100556a50;
        FUN_100002f94(&DAT_100556a50,&DAT_10042abd8);
        plVar6 = plVar2;
        (**(code **)(*(long *)(puVar5 + -8) + 0x30))(plVar2,1,puVar5);
        lVar4 = local_90;
        if ((int)plVar6 == 1) {
          _swift_bridgeObjectRelease(param_2);
          _swift_bridgeObjectRelease_n(local_98,2);
          return 1;
        }
        lVar7 = *plVar2;
        uVar14 = plVar2[1];
        FUN_100007e64((long)plVar2 + (long)*(int *)(puVar5 + 0x30),local_90,FUN_100170d98);
        uVar9 = uVar14;
        FUN_10000464c(lVar7);
        _swift_bridgeObjectRelease(uVar14);
        uVar14 = local_88;
        if ((uVar9 & 1) == 0) {
          _swift_bridgeObjectRelease(param_2);
          _swift_bridgeObjectRelease_n(local_98,2);
          FUN_100029548(lVar4,FUN_100170d98);
          goto LAB_1001c3bf8;
        }
        FUN_100029504(*(long *)(param_2 + 0x38) + *(long *)(local_68 + 0x48) * lVar7,local_88,
                      FUN_100170d98);
        uVar9 = uVar14;
        FUN_100175078(uVar14,lVar4);
        FUN_100029548(uVar14,FUN_100170d98);
        FUN_100029548(lVar4,FUN_100170d98);
        uVar14 = local_70;
        lVar7 = lVar13;
      } while ((uVar9 & 1) != 0);
      _swift_bridgeObjectRelease(param_2);
      _swift_bridgeObjectRelease_n(local_98,2);
    }
LAB_1001c3bf8:
    uVar8 = 0;
  }
  return uVar8;
}

