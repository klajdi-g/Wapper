// rea decompile_all
// name: FUN_1001c58a4
// address: 0x1001c58a4
// body: available
// range: 0x1001c58a4-0x1001c596f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1001c58a4(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100524190;
  if (param_2 != 0) {
    puVar3 = &DAT_100556968;
    FUN_100002f94(&DAT_100556968,&DAT_10042aa50);
    puVar4 = &DAT_1005564c8;
    FUN_100002f94(&DAT_1005564c8,&DAT_10042a380);
    lVar7 = *(long *)(*(long *)(puVar4 + -8) + 0x48);
    uVar5 = (ulong)*(byte *)(*(long *)(puVar4 + -8) + 0x50);
    uVar8 = uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff);
    _swift_allocObject(puVar3,uVar8 + lVar7 * param_2,uVar5 | 7);
    puVar4 = puVar3;
    _malloc_size();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1001c596c);
      (*pcVar2)();
    }
    lVar6 = (long)puVar4 - uVar8;
    if (lVar6 == -0x8000000000000000 && lVar7 == -1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1001c5970);
      (*pcVar2)();
    }
    lVar1 = 0;
    if (lVar7 != 0) {
      lVar1 = lVar6 / lVar7;
    }
    *(long *)(puVar3 + 0x10) = param_1;
    *(long *)(puVar3 + 0x18) = lVar1 << 1;
  }
  return puVar3;
}

