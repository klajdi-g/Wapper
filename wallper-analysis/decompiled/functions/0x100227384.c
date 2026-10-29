// rea decompile_all
// name: FUN_100227384
// address: 0x100227384
// body: available
// range: 0x100227384-0x1002274af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100227384(char *param_1,undefined *param_2)

{
  undefined8 *puVar1;
  _StringGuts _Var2;
  _StringGuts _Var3;
  bool bVar4;
  Hasher into;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  String SVar11;
  ulong local_98 [9];
  
  uVar9 = *unaff_x20;
  Swift::Hasher::init(*(__int64 *)(uVar9 + 0x28));
  into.unknown = (undefined *)local_98;
  SVar11.bridgeObject = param_2;
  SVar11.str = param_1;
  Swift::String::hash(into,SVar11);
  uVar5 = Swift::Hasher::_finalize(into);
  uVar6 = -1L << ((ulong)*(byte *)(uVar9 + 0x20) & 0x3f);
  uVar5 = uVar5 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(uVar9 + 0x38 + (uVar5 >> 6) * 8) >> (uVar5 & 0x3f) & 1) != 0) {
    do {
      puVar1 = (undefined8 *)(*(long *)(uVar9 + 0x30) + uVar5 * 0x10);
      _Var2.unknown = (undefined *)*puVar1;
      _Var3.unknown = (undefined *)puVar1[1];
      if ((_Var2.unknown == param_1 && _Var3.unknown == param_2) ||
         (bVar4 = Swift::_stringCompareWithSmolCheck
                            (_Var2,_Var3,(_StringComparisonResult)(__int8)param_1), bVar4)) {
        uVar6 = *unaff_x20;
        _swift_isUniquelyReferenced_nonNull_native();
        local_98[0] = *unaff_x20;
        if ((uVar6 & 1) == 0) {
          FUN_1001c8e08();
        }
        uVar6 = local_98[0];
        puVar1 = (undefined8 *)(*(long *)(local_98[0] + 0x30) + uVar5 * 0x10);
        uVar7 = *puVar1;
        uVar8 = puVar1[1];
        FUN_1002275a8(uVar5);
        *unaff_x20 = uVar6;
        goto LAB_10022747c;
      }
      uVar5 = uVar5 + 1 & ~uVar6;
    } while ((*(ulong *)(uVar9 + 0x38 + (uVar5 >> 6) * 8) >> (uVar5 & 0x3f) & 1) != 0);
  }
  uVar7 = 0;
  uVar8 = 0;
LAB_10022747c:
  auVar10._8_8_ = uVar8;
  auVar10._0_8_ = uVar7;
  return auVar10;
}

