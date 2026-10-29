// rea decompile_all
// name: FUN_1001aa908
// address: 0x1001aa908
// body: available
// range: 0x1001aa908-0x1001aaa77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001aa908(long param_1,undefined8 param_2,long param_3,code *param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x21;
  long lVar8;
  ulong uVar9;
  long local_80;
  
  local_80 = 0;
  uVar7 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar9 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar9 = ~(-1L << (uVar7 & 0x3f));
  }
  uVar9 = uVar9 & *(ulong *)(param_3 + 0x38);
  lVar6 = 0;
  do {
    if (uVar9 == 0) {
      do {
        lVar8 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1001aaa78);
          (*pcVar2)();
        }
        if ((long)(uVar7 + 0x3f >> 6) <= lVar8) {
          _swift_retain(param_3);
          FUN_1001a8dcc(param_1,param_2,local_80,param_3);
          return;
        }
        uVar9 = ((ulong *)(param_3 + 0x38))[lVar8];
        lVar6 = lVar6 + 1;
      } while (uVar9 == 0);
      uVar4 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
      uVar9 = uVar9 - 1 & uVar9;
    }
    else {
      uVar4 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
      uVar9 = uVar9 - 1 & uVar9;
      lVar8 = lVar6;
    }
    uVar5 = LZCOUNT(uVar4);
    uVar1 = *(undefined8 *)(*(long *)(param_3 + 0x30) + (uVar5 | lVar8 << 6) * 0x10 + 8);
    _swift_bridgeObjectRetain(uVar1);
    uVar4 = 0;
    (*param_4)();
    _swift_bridgeObjectRelease(uVar1);
    if (unaff_x21 != 0) {
      return;
    }
    lVar6 = lVar8;
    if ((uVar4 & 1) != 0) {
      uVar4 = (uVar5 & 0xffffffffffffffc0 | lVar8 << 6) >> 3;
      *(ulong *)(param_1 + uVar4) = *(ulong *)(param_1 + uVar4) | 1L << (uVar5 & 0x3f);
      bVar3 = SCARRY8(local_80,1);
      local_80 = local_80 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1001aaa30);
        (*pcVar2)();
      }
    }
  } while( true );
}

