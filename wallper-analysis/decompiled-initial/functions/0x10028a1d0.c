// rea decompile_all
// name: FUN_10028a1d0
// address: 0x10028a1d0
// body: available
// range: 0x10028a1d0-0x10028a2ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10028a1d0(long param_1,ulong param_2)

{
  uint uVar1;
  code *pcVar2;
  Iterator IVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  long extraout_x8;
  undefined *puVar7;
  long lVar8;
  tuple2 tVar9;
  
  IVar3 = Foundation::Data::Iterator::typeMetadataAccessor();
  lVar8 = *(long *)(IVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar8 + 0x40));
  uVar1 = (uint)(param_2 >> 0x20);
  uVar5 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar5 == 0) {
      puVar7 = (undefined *)(param_2 >> 0x30 & 0xff);
    }
    else {
      iVar6 = (int)((ulong)param_1 >> 0x20);
      if (SBORROW4(iVar6,(int)param_1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10028a300);
        (*pcVar2)();
      }
      puVar7 = (undefined *)(long)(iVar6 - (int)param_1);
    }
  }
  else {
    if (uVar5 != 2) goto LAB_10028a2c8;
    puVar7 = (undefined *)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10));
    if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10028a2fc);
      (*pcVar2)();
    }
  }
  if (puVar7 != (undefined *)0x0) {
    puVar4 = puVar7;
    FUN_10012e010(puVar7,0);
    tVar9 = Foundation::Data::_copyContents
                      ((UnsafeMutableBufferPointer<__int8>)
                       (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)),
                       (Data)(puVar4 + 0x20));
    FUN_100093624(param_1,param_2);
    (**(code **)(lVar8 + 8))
              (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),IVar3.unknown);
    if (tVar9._.unknown.unknown == puVar7) {
      return puVar4;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10028a2b4);
    (*pcVar2)();
  }
LAB_10028a2c8:
  FUN_100093624(param_1,param_2);
  return PTR___swiftEmptyArrayStorage_100524190;
}

