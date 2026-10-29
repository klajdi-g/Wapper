// rea decompile_all
// name: FUN_1002a1ec4
// address: 0x1002a1ec4
// body: available
// range: 0x1002a1ec4-0x1002a21af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002a1ec4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  URL UVar5;
  long lVar6;
  undefined1 *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *local_90;
  undefined1 auStack_88 [8];
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  puVar4 = &DAT_100553d90;
  local_90 = param_2;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = auStack_88 + (-8 - extraout_x8);
  UVar5 = Foundation::URL::typeMetadataAccessor();
  lVar9 = *(long *)(UVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar9 + 0x40));
  lVar11 = (long)puVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  FUN_1002a473c();
  lVar10 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar10 + 0x40));
  lVar15 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  DAT_100559c28 = 0;
  if (DAT_100559c18 != -1) {
    _swift_once(&DAT_100559c18,FUN_10029d6b0);
  }
  _swift_beginAccess(&DAT_100559c20,auStack_78,0x21,0);
  if (*(long *)(DAT_100559c20 + 0x10) != 0) {
    uVar8 = (ulong)*(byte *)(lVar10 + 0x50);
    FUN_1002a4774(DAT_100559c20 + (uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff)),lVar15);
    FUN_100289fe8(0,1);
    _swift_endAccess(auStack_78);
    lVar6 = *(long *)(lVar15 + *(int *)(lVar6 + 0x20));
    _swift_bridgeObjectRetain(lVar6);
    FUN_1002a47b8(lVar15);
    FUN_1000087e4(param_1,puVar12,&DAT_100553d90,&DAT_10041bf10);
    puVar7 = puVar12;
    (**(code **)(lVar9 + 0x30))(puVar12,1,UVar5.unknown);
    if ((int)puVar7 == 1) {
      _swift_bridgeObjectRelease(lVar6);
      FUN_10002a29c(puVar12,&DAT_100553d90,&DAT_10041bf10);
      if (DAT_100559c08 != -1) {
        _swift_once(&DAT_100559c08,FUN_10029d6c4);
      }
      uVar1 = *local_90;
      uVar2 = local_90[1];
      _swift_beginAccess(&DAT_100559c10,auStack_78,0x21,0);
      _swift_bridgeObjectRetain(uVar2);
      FUN_1001ca054(auStack_88,uVar1,uVar2);
      _swift_endAccess(auStack_78);
      _swift_bridgeObjectRelease(local_80);
    }
    else {
      (**(code **)(lVar9 + 0x20))(lVar11,puVar12,UVar5.unknown);
      uVar8 = *(ulong *)(lVar6 + 0x10);
      if (uVar8 != 0) {
        uVar13 = 0;
        puVar14 = (undefined8 *)(lVar6 + 0x28);
        do {
          if (*(ulong *)(lVar6 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1002a217c);
            (*pcVar3)();
          }
          uVar13 = uVar13 + 1;
          pcVar3 = (code *)puVar14[-1];
          uVar1 = *puVar14;
          _swift_retain(uVar1);
          (*pcVar3)(lVar11);
          _swift_release(uVar1);
          puVar14 = puVar14 + 2;
        } while (uVar8 != uVar13);
      }
      _swift_bridgeObjectRelease(lVar6);
      (**(code **)(lVar9 + 8))(lVar11,UVar5.unknown);
    }
    FUN_10029dc60();
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1002a2198);
  (*pcVar3)();
}

