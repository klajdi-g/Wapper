// rea decompile_all
// name: FUN_10026818c
// address: 0x10026818c
// body: available
// range: 0x10026818c-0x10026829f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10026818c(long param_1,undefined8 param_2,Hasher param_3)

{
  ulong uVar1;
  code *pcVar2;
  _SetStorage *this;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *capacity;
  __uint64 _Var9;
  undefined *puVar10;
  ulong uVar11;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptySetSingleton_1005241a0;
  if (capacity != (undefined *)0x0) {
    this = (_SetStorage *)&DAT_100556950;
    FUN_100002f94(&DAT_100556950,&DAT_10042a8f8);
    puVar3 = capacity;
    Swift::_SetStorage::_allocate(this,(__int64)capacity);
    puVar10 = (undefined *)0x0;
    uVar11 = ~(-1L << ((ulong)(byte)puVar3[0x20] & 0x3f));
    do {
      _Var9 = *(__uint64 *)(param_1 + 0x20 + (long)puVar10 * 8);
      uVar4 = Swift::Hasher::_hash(*(__int64 *)(puVar3 + 0x28),_Var9,param_3);
      uVar4 = uVar4 & uVar11;
      uVar6 = uVar4 >> 6;
      uVar7 = *(ulong *)(puVar3 + uVar6 * 8 + 0x38);
      uVar8 = 1L << (uVar4 & 0x3f);
      lVar5 = *(long *)(puVar3 + 0x30);
      uVar1 = uVar8 & uVar7;
      while (uVar1 != 0) {
        if (*(__uint64 *)(lVar5 + uVar4 * 8) == _Var9) goto LAB_100268214;
        uVar4 = uVar4 + 1 & uVar11;
        uVar6 = uVar4 >> 6;
        uVar7 = *(ulong *)(puVar3 + uVar6 * 8 + 0x38);
        uVar8 = 1L << (uVar4 & 0x3f);
        uVar1 = uVar8 & uVar7;
      }
      *(ulong *)(puVar3 + uVar6 * 8 + 0x38) = uVar8 | uVar7;
      *(__uint64 *)(lVar5 + uVar4 * 8) = _Var9;
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002682a0);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
LAB_100268214:
      puVar10 = puVar10 + 1;
    } while (puVar10 != capacity);
  }
  return puVar3;
}

