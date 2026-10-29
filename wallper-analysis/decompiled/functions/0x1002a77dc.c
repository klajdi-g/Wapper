// rea decompile_all
// name: FUN_1002a77dc
// address: 0x1002a77dc
// body: available
// range: 0x1002a77dc-0x1002a7947 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1002a77dc(ulong param_1,long param_2,long param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *pcVar5;
  char **ppcVar6;
  void *pvVar7;
  String SVar8;
  char *local_70;
  ulong uStack_68;
  undefined8 local_58;
  long local_50;
  long lStack_48;
  undefined8 *local_40;
  ulong uStack_38;
  
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1002a7940);
    (*pcVar1)();
  }
  if (*(ulong *)(param_3 + 0x10) < param_1 || (long)*(ulong *)(param_3 + 0x10) < param_2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1002a7944);
    (*pcVar1)();
  }
  if (param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1002a7948);
    (*pcVar1)();
  }
  lStack_48 = param_3 + 0x20;
  uStack_38 = param_2 << 1 | 1;
  local_50 = param_3;
  local_40 = (undefined8 *)param_1;
  _swift_bridgeObjectRetain(param_3);
  puVar3 = &DAT_100559e40;
  FUN_100002f94(&DAT_100559e40,&DAT_10042df60);
  puVar4 = puVar3;
  FUN_1002a9afc();
  SVar8 = Swift::String::_init(&local_50,puVar3,puVar4);
  pvVar7 = SVar8.bridgeObject;
  pcVar5 = SVar8.str;
  local_58 = 0;
  local_40 = &local_58;
  if (((ulong)pvVar7 >> 0x3c & 1) != 0) {
LAB_1002a7908:
    Swift::_StringGuts::__slowWithCString((_StringGuts)0x1002a9b4c);
    _swift_bridgeObjectRelease(pvVar7);
    goto LAB_1002a78e4;
  }
  if (((ulong)pvVar7 >> 0x3d & 1) == 0) {
    if (((ulong)pcVar5 >> 0x3c & 1) == 0) goto LAB_1002a7908;
    ppcVar6 = (char **)(((ulong)pvVar7 & 0xfffffffffffffff) + 0x20);
    if ((0x20 < (ulong)*(byte *)ppcVar6) ||
       ((0x100003e01U >> ((ulong)*(byte *)ppcVar6 & 0x3f) & 1) == 0)) goto LAB_1002a78bc;
LAB_1002a78d8:
    bVar2 = false;
  }
  else {
    uStack_68 = (ulong)pvVar7 & 0xffffffffffffff;
    ppcVar6 = &local_70;
    local_70 = pcVar5;
    if ((((uint)SVar8.str & 0xff) < 0x21) &&
       (ppcVar6 = &local_70, (0x100003e01U >> ((ulong)pcVar5 & 0x3f) & 1) != 0)) goto LAB_1002a78d8;
LAB_1002a78bc:
    __swift_stdlib_strtod_clocale(ppcVar6,&local_58);
    if (ppcVar6 == (char **)0x0) goto LAB_1002a78d8;
    bVar2 = *(byte *)ppcVar6 == 0;
  }
  _swift_bridgeObjectRelease(pvVar7);
  local_70._0_1_ = bVar2;
LAB_1002a78e4:
  if ((char)local_70 == '\0') {
    local_58 = 0;
  }
  return local_58;
}

