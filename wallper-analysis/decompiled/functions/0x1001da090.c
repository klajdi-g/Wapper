// rea decompile_all
// name: FUN_1001da090
// address: 0x1001da090
// body: available
// range: 0x1001da090-0x1001da1d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1001da090(long param_1,long param_2,code *param_3,code *param_4)

{
  long lVar1;
  long extraout_x8;
  ulong uVar2;
  long extraout_x12;
  long extraout_x13;
  undefined1 *puVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  
  lVar1 = 0;
  (*param_3)();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  uVar4 = (long)puVar3 - extraout_x13;
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 == *(long *)(param_2 + 0x10)) {
    if ((lVar1 == 0) || (param_1 == param_2)) {
      uVar5 = 1;
    }
    else {
      uVar2 = (ulong)*(byte *)(extraout_x12 + 0x50) + 0x20 &
              ((ulong)*(byte *)(extraout_x12 + 0x50) ^ 0xffffffffffffffff);
      param_1 = param_1 + uVar2;
      param_2 = param_2 + uVar2;
      lVar6 = *(long *)(extraout_x12 + 0x48);
      do {
        lVar1 = lVar1 + -1;
        FUN_100029504(param_1,uVar4,param_3);
        FUN_100029504(param_2,puVar3,param_3);
        uVar2 = uVar4;
        (*param_4)(uVar4,puVar3);
        uVar5 = (uint)uVar2;
        FUN_100029548(puVar3,param_3);
        FUN_100029548(uVar4,param_3);
        if ((uVar2 & 1) == 0) break;
        param_2 = param_2 + lVar6;
        param_1 = param_1 + lVar6;
      } while (lVar1 != 0);
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5 & 1;
}

