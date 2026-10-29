// rea decompile_all
// name: FUN_1001ca054
// address: 0x1001ca054
// body: available
// range: 0x1001ca054-0x1001ca197 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1001ca054(undefined8 *param_1,char *param_2,undefined *param_3)

{
  undefined8 *puVar1;
  _StringGuts _Var2;
  _StringGuts _Var3;
  undefined8 uVar4;
  bool bVar5;
  Hasher into;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  String SVar9;
  long local_98 [9];
  
  lVar8 = *unaff_x20;
  Swift::Hasher::init(*(__int64 *)(lVar8 + 0x28));
  into.unknown = (undefined *)local_98;
  SVar9.bridgeObject = param_3;
  SVar9.str = param_2;
  Swift::String::hash(into,SVar9);
  uVar6 = Swift::Hasher::_finalize(into);
  uVar7 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
  uVar6 = uVar6 & (uVar7 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar8 + 0x38 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) != 0) {
    do {
      puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x30) + uVar6 * 0x10);
      _Var2.unknown = (undefined *)*puVar1;
      _Var3.unknown = (undefined *)puVar1[1];
      if ((_Var2.unknown == param_2 && _Var3.unknown == param_3) ||
         (bVar5 = Swift::_stringCompareWithSmolCheck
                            (_Var2,_Var3,(_StringComparisonResult)(__int8)param_2), bVar5)) {
        _swift_bridgeObjectRelease(param_3);
        puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x30) + uVar6 * 0x10);
        uVar4 = puVar1[1];
        *param_1 = *puVar1;
        param_1[1] = uVar4;
        _swift_bridgeObjectRetain();
        return 0;
      }
      uVar6 = uVar6 + 1 & ~uVar7;
    } while ((*(ulong *)(lVar8 + 0x38 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) != 0);
  }
  lVar8 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native(lVar8);
  local_98[0] = *unaff_x20;
  _swift_bridgeObjectRetain(param_3);
  FUN_1001ca60c(param_2,param_3,uVar6,lVar8);
  *unaff_x20 = local_98[0];
  *param_1 = param_2;
  param_1[1] = param_3;
  return 1;
}

