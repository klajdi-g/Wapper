// rea decompile_all
// name: FUN_1001a8fec
// address: 0x1001a8fec
// body: available
// range: 0x1001a8fec-0x1001a915f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001a8fec(long param_1,undefined8 param_2,long param_3,code *param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long local_88;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_58;
  
  local_88 = 0;
  uVar7 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar10 = ~(-1L << (uVar7 & 0x3f));
  }
  uVar10 = uVar10 & *(ulong *)(param_3 + 0x40);
  lVar6 = 0;
  do {
    if (uVar10 == 0) {
      do {
        lVar9 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1001a9160);
          (*pcVar2)();
        }
        if ((long)(uVar7 + 0x3f >> 6) <= lVar9) {
          FUN_1001a9664(param_1,param_2,local_88,param_3);
          return;
        }
        uVar10 = ((ulong *)(param_3 + 0x40))[lVar9];
        lVar6 = lVar6 + 1;
      } while (uVar10 == 0);
      uVar5 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar10 = uVar10 - 1 & uVar10;
    }
    else {
      uVar5 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar10 = uVar10 - 1 & uVar10;
      lVar9 = lVar6;
    }
    uVar5 = LZCOUNT(uVar5);
    uVar8 = uVar5 | lVar9 << 6;
    puVar4 = (undefined8 *)(*(long *)(param_3 + 0x30) + uVar8 * 0x10);
    local_70 = *puVar4;
    uVar1 = puVar4[1];
    local_58 = *(undefined8 *)(*(long *)(param_3 + 0x38) + uVar8 * 8);
    uStack_68 = uVar1;
    _swift_bridgeObjectRetain(uVar1);
    puVar4 = &local_70;
    (*param_4)(puVar4,&local_58);
    _swift_bridgeObjectRelease(uVar1);
    if (unaff_x21 != 0) {
      return;
    }
    lVar6 = lVar9;
    if (((ulong)puVar4 & 1) != 0) {
      uVar8 = (uVar5 & 0xffffffffffffffc0 | lVar9 << 6) >> 3;
      *(ulong *)(param_1 + uVar8) = *(ulong *)(param_1 + uVar8) | 1L << (uVar5 & 0x3f);
      bVar3 = SCARRY8(local_88,1);
      local_88 = local_88 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1001a9124);
        (*pcVar2)();
      }
    }
  } while( true );
}

