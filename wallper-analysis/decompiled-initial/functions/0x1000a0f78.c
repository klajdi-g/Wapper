// rea decompile_all
// name: FUN_1000a0f78
// address: 0x1000a0f78
// body: available
// range: 0x1000a0f78-0x1000a1093 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000a0f78(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  unkuint9 Var5;
  undefined *puVar6;
  undefined **ppuVar7;
  ulong uVar8;
  
  puVar6 = PTR___swiftEmptyArrayStorage_100524190;
  FUN_1001c5db0(0,0,0);
  uVar8 = 0;
  ppuVar7 = &PTR_s_CIMultiplyCompositing_10054f898;
  do {
    puVar1 = ppuVar7[-1];
    puVar3 = *ppuVar7;
    uVar2 = *(ulong *)(puVar6 + 0x10);
    uVar4 = *(ulong *)(puVar6 + 0x18);
    _swift_bridgeObjectRetain(puVar3);
    if (uVar4 >> 1 <= uVar2) {
      FUN_1001c5db0(1 < uVar4,uVar2 + 1,1);
    }
    Var5 = (unkuint9)uVar8;
    *(ulong *)(puVar6 + uVar2 * 0x20 + 0x20) = uVar8;
    uVar8 = uVar8 + 1;
    ppuVar7 = ppuVar7 + 2;
    *(ulong *)(puVar6 + 0x10) = uVar2 + 1;
    *(double *)(puVar6 + uVar2 * 0x20 + 0x28) = (double)(unkint9)Var5 * 2.4;
    *(undefined **)(puVar6 + uVar2 * 0x20 + 0x30) = puVar1;
    *(undefined **)(puVar6 + uVar2 * 0x20 + 0x38) = puVar3;
  } while (uVar8 != 6);
  _swift_retain(puVar6);
  _swift_arrayDestroy(&DAT_10054f890,6,PTR___type_metadata_for_Swift_String_100523a98);
  _swift_release(puVar6);
  DAT_100577c00 = puVar6;
  return;
}

