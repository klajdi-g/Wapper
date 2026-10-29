// rea decompile_all
// name: FUN_10029d2c4
// address: 0x10029d2c4
// body: available
// range: 0x10029d2c4-0x10029d4a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10029d2c4(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  TaskPriority TVar5;
  long extraout_x8;
  undefined1 *puVar6;
  long lVar7;
  double *pdVar8;
  double dVar9;
  undefined1 auStack_80 [8];
  undefined *local_78;
  
  puVar3 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_80 + -extraout_x8;
  lVar7 = *(long *)(param_1 + 0x10);
  TVar5.unknown = PTR___swiftEmptyArrayStorage_100524190;
  if (lVar7 != 0) {
    local_78 = PTR___swiftEmptyArrayStorage_100524190;
    FUN_1001c5be8(0,lVar7,0);
    pdVar8 = (double *)(param_1 + 0x28);
    do {
      dVar9 = *pdVar8;
      if (0x7fefffffffffffff < (ulong)ABS(dVar9)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10029d4a0);
        (*pcVar2)();
      }
      if (dVar9 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10029d4a4);
        (*pcVar2)();
      }
      if (9.223372036854776e+18 <= dVar9) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10029d4a8);
        (*pcVar2)();
      }
      uVar1 = *(ulong *)(local_78 + 0x10);
      if (*(ulong *)(local_78 + 0x18) >> 1 <= uVar1) {
        FUN_1001c5be8(1 < *(ulong *)(local_78 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(local_78 + 0x10) = uVar1 + 1;
      *(long *)(local_78 + uVar1 * 8 + 0x20) = (long)dVar9;
      lVar7 = lVar7 + -1;
      TVar5.unknown = local_78;
      pdVar8 = pdVar8 + 2;
    } while (lVar7 != 0);
  }
  puVar4 = TVar5.unknown;
  FUN_10020ca20();
  _swift_bridgeObjectRelease();
  Swift::TaskPriority::get_background(TVar5);
  TVar5 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar5.unknown + -8) + 0x38))(puVar6,0,1,TVar5.unknown);
  puVar3 = &DAT_1005376c8;
  _swift_allocObject(&DAT_1005376c8,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = puVar4;
  FUN_100176d50(0,0,puVar6,&DAT_10042ddb0,puVar3);
  _swift_release();
  FUN_10002a29c(puVar6,&DAT_100561090,&DAT_10041c870);
  return;
}

