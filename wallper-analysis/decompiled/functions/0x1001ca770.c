// rea decompile_all
// name: FUN_1001ca770
// address: 0x1001ca770
// body: available
// range: 0x1001ca770-0x1001ca877 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001ca770(__uint64 param_1,ulong param_2,ulong param_3)

{
  Hasher HVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  
  uVar4 = (undefined4)(param_3 >> 0x20);
  uVar3 = (undefined4)param_3;
  uVar6 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar6 < *(ulong *)(*unaff_x20 + 0x18)) {
    if ((param_3 & 1) == 0) {
      FUN_1001c8f64();
    }
  }
  else {
    if ((param_3 & 1) == 0) {
      FUN_1001c8440(uVar6 + 1);
    }
    else {
      FUN_1001c959c();
    }
    lVar7 = *unaff_x20;
    HVar1.unknown._4_4_ = uVar4;
    HVar1.unknown._0_4_ = uVar3;
    param_2 = Swift::Hasher::_hash(*(__int64 *)(lVar7 + 0x28),param_1,HVar1);
    uVar6 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    param_2 = param_2 & (uVar6 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar7 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0) {
      do {
        if (*(__uint64 *)(*(long *)(lVar7 + 0x30) + param_2 * 8) == param_1) {
          Swift::_ELEMENT_TYPE_OF_SET_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1001ca878);
          (*pcVar2)();
        }
        param_2 = param_2 + 1 & ~uVar6;
      } while ((*(ulong *)(lVar7 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
    }
  }
  lVar5 = *unaff_x20;
  lVar7 = lVar5 + (param_2 >> 6) * 8;
  *(ulong *)(lVar7 + 0x38) = *(ulong *)(lVar7 + 0x38) | 1L << (param_2 & 0x3f);
  *(__uint64 *)(*(long *)(lVar5 + 0x30) + param_2 * 8) = param_1;
  if (!SCARRY8(*(long *)(lVar5 + 0x10),1)) {
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1001ca868);
  (*pcVar2)();
}

