// rea decompile_all
// name: FUN_1001c4064
// address: 0x1001c4064
// body: available
// range: 0x1001c4064-0x1001c420f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1001c4064(long param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if (param_1 == param_2) {
    uVar10 = 1;
  }
  else if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) {
    uVar7 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
    uVar9 = 0xffffffffffffffff;
    if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
      uVar9 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar9 = uVar9 & *(ulong *)(param_1 + 0x40);
    _swift_bridgeObjectRetain_n(param_1,2);
    _swift_bridgeObjectRetain(param_2);
    lVar4 = 0;
    do {
      if (uVar9 == 0) {
        do {
          lVar8 = lVar4 + 1;
          if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1001c4210);
            (*pcVar3)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar8) {
            uVar10 = 1;
            lVar4 = param_2;
            param_2 = param_1;
            goto LAB_1001c41d0;
          }
          uVar9 = ((ulong *)(param_1 + 0x40))[lVar8];
          lVar4 = lVar4 + 1;
        } while (uVar9 == 0);
        uVar5 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
        uVar9 = uVar9 - 1 & uVar9;
      }
      else {
        uVar5 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
        uVar9 = uVar9 - 1 & uVar9;
        lVar8 = lVar4;
      }
      uVar6 = LZCOUNT(uVar5) | lVar8 << 6;
      plVar1 = (long *)(*(long *)(param_1 + 0x30) + uVar6 * 0x10);
      lVar4 = *plVar1;
      uVar5 = plVar1[1];
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar6 * 0x20);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      uVar12 = puVar2[2];
      uVar13 = puVar2[3];
      _swift_bridgeObjectRetain(uVar5);
      uVar6 = uVar5;
      FUN_10000464c();
      _swift_bridgeObjectRelease();
      if ((uVar6 & 1) == 0) break;
      puVar2 = (undefined8 *)(*(long *)(param_2 + 0x38) + lVar4 * 0x20);
      _CGRectEqualToRect(*puVar2,puVar2[1],puVar2[2],puVar2[3],uVar10,uVar11,uVar12,uVar13);
      lVar4 = lVar8;
    } while ((uVar5 & 1) != 0);
    uVar10 = 0;
    lVar4 = param_1;
LAB_1001c41d0:
    _swift_bridgeObjectRelease(lVar4);
    _swift_bridgeObjectRelease(param_1);
    _swift_bridgeObjectRelease(param_2);
  }
  else {
    uVar10 = 0;
  }
  return uVar10;
}

