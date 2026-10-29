// rea decompile_all
// name: FUN_1001cab88
// address: 0x1001cab88
// body: available
// range: 0x1001cab88-0x1001cace7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001cab88(char *param_1,Hasher param_2,ulong param_3)

{
  code *pcVar1;
  char *pcVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *unaff_x20;
  long lVar6;
  String SVar7;
  undefined1 auStack_78 [72];
  
  uVar3 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar3 < *(ulong *)(*unaff_x20 + 0x18)) {
    if ((param_3 & 1) == 0) {
      FUN_1001c9208(&DAT_100556948,&DAT_10042a8f0);
    }
  }
  else {
    if ((param_3 & 1) == 0) {
      FUN_1001c8a8c(uVar3 + 1);
    }
    else {
      FUN_1001c9c94();
    }
    lVar6 = *unaff_x20;
    Swift::Hasher::init(*(__int64 *)(lVar6 + 0x28));
    pcVar2 = param_1;
    FUN_100402278();
    SVar7.bridgeObject = param_2.unknown;
    SVar7.str = pcVar2;
    Swift::String::hash((Hasher)auStack_78,SVar7);
    _swift_bridgeObjectRelease();
    uVar3 = Swift::Hasher::_finalize(param_2);
    uVar5 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
    param_2.unknown = (undefined *)(uVar3 & (uVar5 ^ 0xffffffffffffffff));
    if ((*(ulong *)(lVar6 + 0x38 + ((ulong)param_2.unknown >> 6) * 8) >>
         ((ulong)param_2.unknown & 0x3f) & 1) != 0) {
      do {
        if ((uint)(byte)param_2.unknown[*(long *)(lVar6 + 0x30)] == ((uint)param_1 & 0xff)) {
          Swift::_ELEMENT_TYPE_OF_SET_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1001cace8);
          (*pcVar1)();
        }
        param_2.unknown = param_2.unknown + 1 & ~uVar5;
      } while ((*(ulong *)(lVar6 + 0x38 + ((ulong)param_2.unknown >> 6) * 8) >>
                ((ulong)param_2.unknown & 0x3f) & 1) != 0);
    }
  }
  lVar4 = *unaff_x20;
  lVar6 = lVar4 + ((ulong)param_2.unknown >> 6) * 8;
  *(ulong *)(lVar6 + 0x38) = *(ulong *)(lVar6 + 0x38) | 1L << ((ulong)param_2.unknown & 0x3f);
  param_2.unknown[*(long *)(lVar4 + 0x30)] = (char)param_1;
  if (!SCARRY8(*(long *)(lVar4 + 0x10),1)) {
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1001cacd8);
  (*pcVar1)();
}

