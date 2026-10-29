// rea decompile_all
// name: FUN_1001ca26c
// address: 0x1001ca26c
// body: available
// range: 0x1001ca26c-0x1001ca357 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1001ca26c(undefined1 *param_1,undefined *param_2)

{
  Hasher HVar1;
  ulong uVar2;
  undefined8 uVar3;
  Hasher HVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar7 = *unaff_x20;
  HVar4.unknown = param_2;
  Swift::Hasher::init(*(__int64 *)(lVar7 + 0x28));
  HVar1.unknown = param_2 & 0xff;
  Swift::Hasher::_combine((__uint64)HVar1.unknown,HVar4);
  uVar2 = Swift::Hasher::_finalize(HVar1);
  uVar6 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
  uVar2 = uVar2 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar7 + 0x38 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) != 0) {
    do {
      if ((uint)*(byte *)(*(long *)(lVar7 + 0x30) + uVar2) == ((uint)param_2 & 0xff)) {
        uVar3 = 0;
        goto LAB_1001ca33c;
      }
      uVar2 = uVar2 + 1 & ~uVar6;
    } while ((*(ulong *)(lVar7 + 0x38 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) != 0);
  }
  lVar7 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native(lVar7);
  lVar5 = *unaff_x20;
  FUN_1001ca878(param_2,uVar2,lVar7);
  *unaff_x20 = lVar5;
  uVar3 = 1;
LAB_1001ca33c:
  *param_1 = (char)param_2;
  return uVar3;
}

