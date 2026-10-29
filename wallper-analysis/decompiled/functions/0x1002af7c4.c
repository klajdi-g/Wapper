// rea decompile_all
// name: FUN_1002af7c4
// address: 0x1002af7c4
// body: available
// range: 0x1002af7c4-0x1002af90f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_1002af7c4(long param_1,long param_2)

{
  long lVar1;
  double *pdVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double local_68;
  undefined1 auStack_60 [32];
  
  lVar6 = 0x416465696c707061;
  lVar4 = *(long *)(param_1 + 8);
  lVar5 = *(long *)(param_2 + 8);
  dVar7 = 0.0;
  dVar8 = 0.0;
  if (*(long *)(lVar4 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar4);
    uVar3 = 0;
    lVar1 = lVar6;
    FUN_10000464c(0x416465696c707061);
    if ((uVar3 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar4);
    }
    else {
      FUN_1000280d4(*(long *)(lVar4 + 0x38) + lVar1 * 0x20,auStack_60);
      _swift_bridgeObjectRelease(lVar4);
      pdVar2 = &local_68;
      _swift_dynamicCast(pdVar2,auStack_60,PTR___type_metadata_for_Any_100524178 + 8,
                         PTR___type_metadata_for_Swift_Double_100523b90,6);
      if (((ulong)pdVar2 & 1) != 0) {
        dVar8 = local_68;
      }
    }
  }
  if (*(long *)(lVar5 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar5);
    uVar3 = 0;
    FUN_10000464c(0x416465696c707061);
    if ((uVar3 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar5);
    }
    else {
      FUN_1000280d4(*(long *)(lVar5 + 0x38) + lVar6 * 0x20,auStack_60);
      _swift_bridgeObjectRelease(lVar5);
      pdVar2 = &local_68;
      _swift_dynamicCast(pdVar2,auStack_60,PTR___type_metadata_for_Any_100524178 + 8,
                         PTR___type_metadata_for_Swift_Double_100523b90,6);
      if (((ulong)pdVar2 & 1) != 0) {
        dVar7 = local_68;
      }
    }
  }
  return dVar8 < dVar7;
}

