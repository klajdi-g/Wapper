// rea decompile_all
// name: FUN_1002887e4
// address: 0x1002887e4
// body: available
// range: 0x1002887e4-0x1002888df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002887e4(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  _CocoaArrayWrapper _Var3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *unaff_x20;
  undefined *puVar9;
  undefined *puVar10;
  
  lVar8 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1002888bc);
    (*pcVar5)();
  }
  puVar10 = (undefined *)*unaff_x20;
  puVar9 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
  uVar6 = 0;
  FUN_100007cf4(0);
  _swift_arrayDestroy(puVar9 + param_1 * 8 + 0x20,lVar8,uVar6);
  lVar4 = param_3 - lVar8;
  if (SBORROW8(param_3,lVar8)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1002888c0);
    (*pcVar5)();
  }
  if (lVar4 != 0) {
    if ((ulong)puVar10 >> 0x3e == 0) {
      lVar7 = *(long *)(puVar9 + 0x10);
      lVar8 = lVar7 - param_2;
    }
    else {
      _Var3.unknown = puVar9;
      if (((ulong)puVar10 & 0x8000000000000000) != 0) {
        _Var3.unknown = puVar10;
      }
      lVar7 = Swift::_CocoaArrayWrapper::get_endIndex(_Var3);
      lVar8 = lVar7 - param_2;
    }
    if (SBORROW8(lVar7,param_2)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1002888d8);
      (*pcVar5)();
    }
    puVar1 = puVar9 + param_1 * 8 + 0x20 + param_3 * 8;
    puVar2 = puVar9 + param_2 * 8 + 0x20;
    if (puVar1 != puVar2 || puVar2 + lVar8 * 8 <= puVar1) {
      _memmove(puVar1,puVar2,lVar8 << 3);
    }
    if ((ulong)puVar10 >> 0x3e == 0) {
      lVar8 = *(long *)(puVar9 + 0x10);
    }
    else {
      _Var3.unknown = puVar9;
      if (((ulong)puVar10 & 0x8000000000000000) != 0) {
        _Var3.unknown = puVar10;
      }
      lVar8 = Swift::_CocoaArrayWrapper::get_endIndex(_Var3);
    }
    if (SCARRY8(lVar8,lVar4)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1002888dc);
      (*pcVar5)();
    }
    *(long *)(puVar9 + 0x10) = lVar8 + lVar4;
  }
  if (0 < param_3) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1002888e0);
    (*pcVar5)();
  }
  return;
}

