// rea decompile_all
// name: FUN_100289f08
// address: 0x100289f08
// body: available
// range: 0x100289f08-0x100289fd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100289f08(long param_1,long param_2,long param_3)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined *puVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar4 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100289fc4);
    (*pcVar6)();
  }
  lVar8 = *unaff_x20;
  lVar1 = lVar8 + 0x20 + param_1 * 0x10;
  puVar7 = &DAT_100556a08;
  FUN_100002f94(&DAT_100556a08,&DAT_10042ab48);
  _swift_arrayDestroy(lVar1,lVar4,puVar7);
  lVar5 = param_3 - lVar4;
  if (SBORROW8(param_3,lVar4)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100289fc8);
    (*pcVar6)();
  }
  if (lVar5 != 0) {
    lVar4 = *(long *)(lVar8 + 0x10) - param_2;
    if (SBORROW8(*(long *)(lVar8 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100289fcc);
      (*pcVar6)();
    }
    pvVar2 = (void *)(lVar1 + param_3 * 0x10);
    pvVar3 = (void *)(lVar8 + 0x20 + param_2 * 0x10);
    if (pvVar2 != pvVar3 || (void *)((long)pvVar3 + lVar4 * 0x10) <= pvVar2) {
      _memmove(pvVar2,pvVar3,lVar4 * 0x10);
    }
    if (SCARRY8(*(long *)(lVar8 + 0x10),lVar5)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100289fd0);
      (*pcVar6)();
    }
    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + lVar5;
  }
  if (param_3 < 1) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x100289fd4);
  (*pcVar6)();
}

