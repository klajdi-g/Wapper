// rea decompile_all
// name: FUN_1002165a4
// address: 0x1002165a4
// body: available
// range: 0x1002165a4-0x10021668b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1002165a4(char *param_1,undefined *param_2,long param_3)

{
  undefined8 *puVar1;
  _StringGuts _Var2;
  _StringGuts _Var3;
  bool bVar4;
  Hasher into;
  ulong uVar5;
  ulong uVar6;
  String SVar7;
  undefined1 auStack_88 [72];
  
  if (*(long *)(param_3 + 0x10) == 0) {
    return 0;
  }
  Swift::Hasher::init(*(__int64 *)(param_3 + 0x28));
  into.unknown = auStack_88;
  SVar7.bridgeObject = param_2;
  SVar7.str = param_1;
  Swift::String::hash(into,SVar7);
  uVar5 = Swift::Hasher::_finalize(into);
  uVar6 = -1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar5 = uVar5 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(param_3 + 0x38 + (uVar5 >> 6) * 8) >> (uVar5 & 0x3f) & 1) != 0) {
    do {
      puVar1 = (undefined8 *)(*(long *)(param_3 + 0x30) + uVar5 * 0x10);
      _Var2.unknown = (undefined *)*puVar1;
      _Var3.unknown = (undefined *)puVar1[1];
      if ((_Var2.unknown == param_1 && _Var3.unknown == param_2) ||
         (bVar4 = Swift::_stringCompareWithSmolCheck
                            (_Var2,_Var3,(_StringComparisonResult)(__int8)param_1), bVar4)) {
        return 1;
      }
      uVar5 = uVar5 + 1 & ~uVar6;
    } while ((*(ulong *)(param_3 + 0x38 + (uVar5 >> 6) * 8) >> (uVar5 & 0x3f) & 1) != 0);
  }
  return 0;
}

