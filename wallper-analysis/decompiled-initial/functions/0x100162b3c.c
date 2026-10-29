// rea decompile_all
// name: FUN_100162b3c
// address: 0x100162b3c
// body: available
// range: 0x100162b3c-0x100162dc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100162d94 to 0x1001602c0 FUN_1001602c0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100162b3c(void)

{
  ulong uVar1;
  undefined8 uVar2;
  char cVar3;
  code *pcVar4;
  undefined *puVar5;
  long *plVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  double dVar10;
  long lVar11;
  long unaff_x22;
  long lVar12;
  String SVar13;
  
  lVar11 = *(long *)(unaff_x22 + 0x58);
  cVar3 = *(char *)(unaff_x22 + 0xa0);
  puVar5 = &DAT_10054f978;
  FUN_100002f94(&DAT_10054f978,&DAT_10042a840);
  lVar12 = *(long *)(lVar11 + 0x48);
  uVar9 = (ulong)*(byte *)(lVar11 + 0x50);
  _swift_allocObject();
  *(undefined8 *)(puVar5 + 0x18) = 6;
  *(undefined8 *)(puVar5 + 0x10) = 3;
  Foundation::URLQueryItem::_init();
  Foundation::URLQueryItem::_init();
  Foundation::URLQueryItem::_init();
  puVar7 = puVar5;
  if ((((cVar3 != '\x01') && (dVar10 = *(double *)(unaff_x22 + 0x48), dVar10 < 86400.0)) &&
      (((ulong)dVar10 & 0x7ff0000000000000) != 0x7ff0000000000000)) && (0.0 < dVar10)) {
    dVar10 = (double)(long)dVar10;
    if (0x7fe < (ulong)dVar10 >> 0x34) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100162d9c);
      (*pcVar4)();
    }
    if (dVar10 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100162da0);
      (*pcVar4)();
    }
    if (9.223372036854776e+18 <= dVar10) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100162da4);
      (*pcVar4)();
    }
    *(long *)(unaff_x22 + 0x10) = (long)dVar10;
    SVar13 = Swift::CustomStringConvertible::get_description();
    Foundation::URLQueryItem::_init();
    _swift_bridgeObjectRelease(SVar13.bridgeObject);
    uVar1 = *(ulong *)(puVar5 + 0x10);
    if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
      puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
      FUN_1001c4728(puVar7,uVar1 + 1,1,puVar5);
    }
    lVar11 = *(long *)(unaff_x22 + 0x58);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
    *(ulong *)(puVar7 + 0x10) = uVar1 + 1;
    (**(code **)(lVar11 + 0x20))
              (puVar7 + uVar1 * lVar12 + (uVar9 + 0x20 & (uVar9 ^ 0xffffffffffffffff)),uVar2,uVar8);
  }
  *(undefined **)(unaff_x22 + 0x68) = puVar7;
  plVar6 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x70) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_100162dc4;
  FUN_1001602c0(0x746567,0xe300000000000000,puVar7);
  return;
}

