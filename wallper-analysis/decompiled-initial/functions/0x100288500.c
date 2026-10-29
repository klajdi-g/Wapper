// rea decompile_all
// name: FUN_100288500
// address: 0x100288500
// body: available
// range: 0x100288500-0x10028861b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100288500(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *unaff_x20;
  long lVar7;
  undefined8 *puVar8;
  
  lVar1 = param_3 - param_2;
  if (SBORROW8(param_3,param_2)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10028860c);
    (*pcVar3)();
  }
  lVar7 = *unaff_x20;
  puVar8 = (undefined8 *)(lVar7 + 0x20 + param_2 * 0x18);
  puVar4 = &DAT_100555320;
  FUN_100002f94(&DAT_100555320,&DAT_10042a830);
  _swift_arrayDestroy(puVar8,lVar1,puVar4);
  lVar2 = param_4 - lVar1;
  if (SBORROW8(param_4,lVar1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100288610);
    (*pcVar3)();
  }
  if (lVar2 != 0) {
    lVar1 = *(long *)(lVar7 + 0x10) - param_3;
    if (SBORROW8(*(long *)(lVar7 + 0x10),param_3)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100288614);
      (*pcVar3)();
    }
    puVar5 = puVar8 + param_4 * 3;
    puVar6 = (undefined8 *)(lVar7 + 0x20 + param_3 * 0x18);
    if ((puVar5 != puVar6) || (puVar6 + lVar1 * 3 <= puVar5)) {
      _memmove(puVar5,puVar6,lVar1 * 0x18);
    }
    if (SCARRY8(*(long *)(lVar7 + 0x10),lVar2)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100288618);
      (*pcVar3)();
    }
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + lVar2;
  }
  if (0 < param_4) {
    *puVar8 = param_1;
    puVar8[1] = param_5;
    puVar8[2] = param_6;
    _swift_bridgeObjectRetain(param_6);
    if (param_4 != 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10028861c);
      (*pcVar3)();
    }
  }
  return;
}

