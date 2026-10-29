// rea decompile_all
// name: FUN_100376c98
// address: 0x100376c98
// body: available
// range: 0x100376c98-0x100376f2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100376c98(long param_1)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  UUID UVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  ulong uVar9;
  long unaff_x20;
  long lVar10;
  UUID UVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long alStack_70 [2];
  
  lVar3 = 0;
  FUN_100266c2c();
  lVar14 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar14 + 0x40));
  UVar11.unknown = (undefined *)((long)alStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = (long)UVar11.unknown - extraout_x12;
  puVar4 = &DAT_10054ac38;
  FUN_100002f94(&DAT_10054ac38,&DAT_10041e8e0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = lVar12 - extraout_x8_00;
  lVar5 = 0;
  FUN_10034c390();
  lVar10 = *(long *)(unaff_x20 + *(int *)(lVar5 + 0x1c));
  if (lVar10 == 0) {
    FUN_1001b7378(0);
    FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
    SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100376f2c);
    (*pcVar1)();
  }
  _swift_retain(lVar10);
  FUN_1001b6e74(lVar13);
  _swift_release(lVar10);
  lVar6 = 0;
  FUN_10025ee04();
  lVar10 = lVar13;
  (**(code **)(*(long *)(lVar6 + -8) + 0x30))(lVar13,1,lVar6);
  if ((int)lVar10 == 1) {
    FUN_10002a29c(lVar13,&DAT_10054ac38,&DAT_10041e8e0);
    uVar7 = 1;
  }
  else {
    alStack_70[1] = param_1;
    lVar10 = *(long *)(lVar13 + *(int *)(lVar6 + 0x34));
    _swift_bridgeObjectRetain(lVar10);
    FUN_100029548(lVar13,FUN_10025ee04);
    uVar15 = *(ulong *)(lVar10 + 0x10);
    if (uVar15 != 0) {
      uVar9 = 0;
      do {
        if (*(ulong *)(lVar10 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100376ee8);
          (*pcVar1)();
        }
        FUN_100029504(lVar10 + ((ulong)*(byte *)(lVar14 + 0x50) + 0x20 &
                               ((ulong)*(byte *)(lVar14 + 0x50) ^ 0xffffffffffffffff)) +
                      *(long *)(lVar14 + 0x48) * uVar9,lVar12,FUN_100266c2c);
        UVar8.unknown = FUN_100266c2c;
        FUN_100007e64(lVar12,UVar11.unknown);
        bVar2 = Foundation::UUID::___infix
                          (UVar11,(undefined *)(unaff_x20 + *(int *)(lVar5 + 0x14)),UVar8);
        if (bVar2) {
          _swift_bridgeObjectRelease(lVar10);
          param_1 = alStack_70[1];
          FUN_100007e64(UVar11.unknown,alStack_70[1],FUN_100266c2c);
          uVar7 = 0;
          goto LAB_100376eb0;
        }
        uVar9 = uVar9 + 1;
        FUN_100029548(UVar11.unknown,FUN_100266c2c);
      } while (uVar15 != uVar9);
    }
    _swift_bridgeObjectRelease(lVar10);
    uVar7 = 1;
    param_1 = alStack_70[1];
  }
LAB_100376eb0:
  (**(code **)(lVar14 + 0x38))(param_1,uVar7,1,lVar3);
  return;
}

