// rea decompile_all
// name: FUN_1002a76b0
// address: 0x1002a76b0
// body: available
// range: 0x1002a76b0-0x1002a77db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002a76b0(void)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  _DictionaryStorage *this;
  long lVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  char *pcVar13;
  
  this = (_DictionaryStorage *)&DAT_10054a1c8;
  FUN_100002f94(&DAT_10054a1c8,&DAT_10042a8b0);
  lVar12 = 0xf;
  lVar8 = 0xf;
  Swift::_DictionaryStorage::_allocate(this,0xf);
  _swift_retain();
  pcVar13 = s_Europe_Kyiv_100559e90 + 8;
  while( true ) {
    uVar3 = *(ulong *)(pcVar13 + -0x18);
    uVar5 = *(ulong *)(pcVar13 + -0x10);
    uVar4 = *(undefined8 *)(pcVar13 + -8);
    uVar6 = *(undefined8 *)pcVar13;
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar6);
    uVar9 = uVar3;
    uVar11 = uVar5;
    FUN_10000464c();
    if ((uVar11 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1002a77d8);
      (*pcVar7)();
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar8 + 0x40 + uVar11) = *(ulong *)(lVar8 + 0x40 + uVar11) | 1L << (uVar9 & 0x3f);
    puVar1 = (ulong *)(*(long *)(lVar8 + 0x30) + uVar9 * 0x10);
    *puVar1 = uVar3;
    puVar1[1] = uVar5;
    puVar2 = (undefined8 *)(*(long *)(lVar8 + 0x38) + uVar9 * 0x10);
    *puVar2 = uVar4;
    puVar2[1] = uVar6;
    if (SCARRY8(*(long *)(lVar8 + 0x10),1)) break;
    pcVar13 = pcVar13 + 0x20;
    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 1;
    lVar12 = lVar12 + -1;
    if (lVar12 == 0) {
      _swift_release(lVar8);
      puVar10 = &DAT_100554f90;
      FUN_100002f94(&DAT_100554f90,&DAT_100428aa0);
      _swift_arrayDestroy(s_Europe_Kiev_100559e80,0xf,puVar10);
      DAT_100559df0 = lVar8;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x1002a77dc);
  (*pcVar7)();
}

