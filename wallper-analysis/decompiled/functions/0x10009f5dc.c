// rea decompile_all
// name: FUN_10009f5dc
// address: 0x10009f5dc
// body: available
// range: 0x10009f5dc-0x10009f7eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10009f5dc(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  double *pdVar2;
  int iVar3;
  long lVar4;
  code *pcVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  Date DVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  
  puVar6 = &DAT_10054c040;
  FUN_100002f94(&DAT_10054c040,&DAT_100420500);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = &stack0xffffffffffffffb0 + -extraout_x8;
  lVar7 = 0;
  FUN_10009e280();
  lVar11 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar11 + 0x40));
  DVar10.unknown = puVar9 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_10009ee80(puVar9);
  puVar8 = puVar9;
  (**(code **)(lVar11 + 0x30))(puVar9,1,lVar7);
  if ((int)puVar8 == 1) {
    FUN_10002a29c(puVar9,&DAT_10054c040,&DAT_100420500);
    FUN_10009f7ec();
    FUN_10009fd70(param_1);
    DVar10.unknown = puVar9;
  }
  else {
    FUN_100043db0(puVar9,DVar10.unknown);
    FUN_100043db0(DVar10.unknown,param_1);
  }
  dVar12 = Foundation::Date::get_timeIntervalSinceReferenceDate(DVar10);
  lVar11 = *(long *)(*(long *)(param_1 + 0x30) + 0x10);
  if (lVar11 != 0) {
    dVar13 = dVar12 / 2.4;
    if (0x7fefffffffffffff < (ulong)ABS(dVar13)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10009f7e4);
      (*pcVar5)();
    }
    if (dVar13 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10009f7e8);
      (*pcVar5)();
    }
    if (9.223372036854776e+18 <= dVar13) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10009f7ec);
      (*pcVar5)();
    }
    lVar4 = 0;
    if (lVar11 != 0) {
      lVar4 = (long)dVar13 / lVar11;
    }
    *(long *)(param_1 + 0x38) = (long)dVar13 - lVar4 * lVar11;
  }
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar7 + 0x30));
  uVar14 = 0x406e000000000000;
  if (*(char *)(puVar1 + 1) != '\x01') {
    uVar14 = *puVar1;
  }
  *puVar1 = uVar14;
  *(undefined1 *)(puVar1 + 1) = 0;
  _fmod();
  pdVar2 = (double *)(param_1 + *(int *)(lVar7 + 0x2c));
  FUN_100029548(pdVar2,FUN_10015f8e8);
  *pdVar2 = dVar12;
  lVar7 = 0;
  FUN_10015f8e8();
  iVar3 = *(int *)(lVar7 + 0x14);
  DVar10 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar10.unknown + -8) + 0x10))
            ((long)pdVar2 + (long)iVar3,param_2,DVar10.unknown);
  *(undefined8 *)((long)pdVar2 + (long)*(int *)(lVar7 + 0x18)) = 0x3ff0000000000000;
  return;
}

