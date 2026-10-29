// rea decompile_all
// name: FUN_1002af5b4
// address: 0x1002af5b4
// body: available
// range: 0x1002af5b4-0x1002af7c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1002af5b4(long *param_1,long *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  double dVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double local_90;
  ulong uStack_88;
  undefined1 auStack_80 [8];
  ulong local_78;
  
  uVar4 = 0;
  uVar5 = 0;
  lVar7 = *param_1;
  if (*(long *)(lVar7 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar7);
    lVar3 = 0x44496e6565726373;
    uVar6 = 0;
    FUN_10000464c(0x44496e6565726373);
    if ((uVar6 & 1) != 0) {
      FUN_1000280d4(*(long *)(lVar7 + 0x38) + lVar3 * 0x20,auStack_80);
      _swift_bridgeObjectRelease(lVar7);
      puVar1 = PTR___type_metadata_for_Any_100524178;
      _swift_dynamicCast(&local_90,auStack_80,PTR___type_metadata_for_Any_100524178 + 8,
                         PTR___type_metadata_for_Swift_String_100523a98,6);
      dVar2 = local_90;
      if ((uVar4 & 1) != 0) {
        uVar4 = (ulong)local_90 & 0xffffffffffff;
        if ((uStack_88 & 0x2000000000000000) != 0) {
          uVar4 = uStack_88 >> 0x38 & 0xf;
        }
        if (uVar4 != 0) {
          dVar9 = 0.0;
          if (*(long *)(lVar7 + 0x10) != 0) {
            _swift_bridgeObjectRetain(lVar7);
            lVar3 = 0x416465696c707061;
            uVar4 = 0;
            FUN_10000464c(0x416465696c707061);
            if ((uVar4 & 1) == 0) {
              _swift_bridgeObjectRelease(lVar7);
            }
            else {
              FUN_1000280d4(*(long *)(lVar7 + 0x38) + lVar3 * 0x20,auStack_80);
              _swift_bridgeObjectRelease(lVar7);
              _swift_dynamicCast(&local_90,auStack_80,puVar1 + 8,
                                 PTR___type_metadata_for_Swift_Double_100523b90,6);
              if ((uVar5 & 1) != 0) {
                dVar9 = local_90;
              }
            }
          }
          lVar7 = *param_2;
          if (*(long *)(lVar7 + 0x10) == 0) {
LAB_1002af794:
            _swift_bridgeObjectRelease(uStack_88);
            return 0;
          }
          _swift_bridgeObjectRetain(lVar7);
          dVar10 = dVar2;
          uVar4 = uStack_88;
          FUN_10000464c();
          if ((uVar4 & 1) == 0) {
            _swift_bridgeObjectRelease(lVar7);
            goto LAB_1002af794;
          }
          dVar10 = *(double *)(*(long *)(lVar7 + 0x38) + (long)dVar10 * 8);
          _swift_bridgeObjectRelease(lVar7);
          if (dVar9 != dVar10) goto LAB_1002af794;
          uVar8 = *param_3;
          _swift_bridgeObjectRetain(uVar8);
          dVar9 = dVar2;
          FUN_1002165a4(dVar2,uStack_88,uVar8);
          _swift_bridgeObjectRelease(uVar8);
          if (((ulong)dVar9 & 1) != 0) goto LAB_1002af794;
          FUN_1001ca054(auStack_80,dVar2,uStack_88);
          uStack_88 = local_78;
        }
        _swift_bridgeObjectRelease(uStack_88);
      }
      return 1;
    }
    _swift_bridgeObjectRelease(lVar7);
  }
  return 1;
}

