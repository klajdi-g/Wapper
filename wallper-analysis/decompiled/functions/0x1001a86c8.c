// rea decompile_all
// name: FUN_1001a86c8
// address: 0x1001a86c8
// body: available
// range: 0x1001a86c8-0x1001a8803 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001a87e0 to 0x10002f6ec FUN_10002f6ec (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001a86c8(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 uVar8;
  long *unaff_x20;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  
  if (*(long *)(*unaff_x20 + 0x10) == 0) {
    return;
  }
  puVar9 = (ulong *)(param_1 + 0x38);
  uVar11 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if (-uVar11 < 0x40) {
    uVar12 = ~(-1L << (-uVar11 & 0x3f));
  }
  uVar12 = uVar12 & *puVar9;
  _swift_bridgeObjectRetain();
  lVar10 = 0;
  lVar1 = lVar10;
  while( true ) {
    for (; uVar12 != 0; uVar12 = uVar12 - 1 & uVar12) {
      uVar5 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      puVar2 = (undefined8 *)
               (*(long *)(param_1 + 0x30) + LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) * 0x10 +
               lVar1 * 0x400);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      _swift_bridgeObjectRetain(uVar4);
      uVar8 = uVar4;
      FUN_100227384(uVar3,uVar4);
      _swift_bridgeObjectRelease(uVar4);
      _swift_bridgeObjectRelease(uVar8);
      lVar10 = lVar1;
    }
    bVar7 = SCARRY8(lVar1,1);
    lVar1 = lVar1 + 1;
    if (bVar7) break;
    if ((long)(0x3f - uVar11 >> 6) <= lVar1) {
      FUN_10002f6ec(param_1,puVar9,~uVar11,lVar10,0);
      return;
    }
    uVar12 = puVar9[lVar1];
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1001a8804);
  (*pcVar6)();
}

