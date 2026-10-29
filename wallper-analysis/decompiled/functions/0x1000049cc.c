// rea decompile_all
// name: FUN_1000049cc
// address: 0x1000049cc
// body: available
// range: 0x1000049cc-0x100004a77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1000049cc(undefined *param_1,undefined *param_2,ulong param_3)

{
  undefined8 *puVar1;
  _StringGuts _Var2;
  _StringGuts _Var3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  long unaff_x20;
  undefined1 auVar7 [16];
  
  uVar6 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_3 = param_3 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_3 >> 6) * 8) >> (param_3 & 0x3f) & 1) != 0) {
    do {
      puVar1 = (undefined8 *)(*(long *)(unaff_x20 + 0x30) + param_3 * 0x10);
      _Var2.unknown = (undefined *)*puVar1;
      _Var3.unknown = (undefined *)puVar1[1];
      if ((_Var2.unknown == param_1 && _Var3.unknown == param_2) ||
         (bVar4 = Swift::_stringCompareWithSmolCheck
                            (_Var2,_Var3,(_StringComparisonResult)(__int8)param_1), bVar4)) {
        uVar5 = 1;
        goto LAB_100004a60;
      }
      param_3 = param_3 + 1 & ~uVar6;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_3 >> 6) * 8) >> (param_3 & 0x3f) & 1) != 0);
  }
  uVar5 = 0;
LAB_100004a60:
  auVar7._8_8_ = uVar5;
  auVar7._0_8_ = param_3;
  return auVar7;
}

