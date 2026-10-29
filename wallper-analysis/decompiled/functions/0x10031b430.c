// rea decompile_all
// name: FUN_10031b430
// address: 0x10031b430
// body: available
// range: 0x10031b430-0x10031b557 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10031b430(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  param_4 = param_4 >> 1;
  lVar2 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10031b550);
    (*pcVar3)();
  }
  puVar4 = PTR___swiftEmptyArrayStorage_100524190;
  if (lVar2 != 0) {
    if (0 < lVar2) {
      puVar4 = &DAT_1005568f0;
      FUN_100002f94(&DAT_1005568f0,&DAT_100430c90);
      lVar5 = 0;
      FUN_10040211c();
      lVar8 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
      uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
      uVar9 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
      _swift_allocObject(puVar4,uVar9 + lVar8 * lVar2,uVar7 | 7);
      puVar6 = puVar4;
      _malloc_size();
      if (lVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10031b554);
        (*pcVar3)();
      }
      lVar5 = (long)puVar6 - uVar9;
      if (lVar5 == -0x8000000000000000 && lVar8 == -1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10031b558);
        (*pcVar3)();
      }
      lVar1 = 0;
      if (lVar8 != 0) {
        lVar1 = lVar5 / lVar8;
      }
      *(long *)(puVar4 + 0x10) = lVar2;
      *(long *)(puVar4 + 0x18) = lVar1 << 1;
    }
    if (param_3 == param_4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10031b54c);
      (*pcVar3)();
    }
    lVar5 = 0;
    FUN_10040211c();
    uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    _swift_arrayInitWithCopy
              (puVar4 + (uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff)),
               param_2 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * param_3,lVar2,lVar5);
  }
  return puVar4;
}

