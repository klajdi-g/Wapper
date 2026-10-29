// rea decompile_all
// name: FUN_1003bb3f8
// address: 0x1003bb3f8
// body: available
// range: 0x1003bb3f8-0x1003bb5b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003bb598 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003bb3f8(undefined8 param_1,undefined8 *param_2,ulong param_3,ulong param_4)

{
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar1;
  undefined8 *puVar2;
  long extraout_x8_01;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  if (param_3 == 1) {
    puVar7 = *(undefined8 **)(param_4 & 0xfffffffffffffffe);
    (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(puVar7[-1] + 0x40));
    puVar8 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    puVar2 = param_2;
  }
  else {
    (*(code *)PTR____chkstk_darwin_100521118)(param_3 << 3);
    lVar9 = -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
    puVar8 = &stack0xffffffffffffffb0 + lVar9;
    if (param_3 != 0) {
      uVar4 = 0;
      uVar1 = param_4 & 0xfffffffffffffffe;
      if (7 < param_3) {
        if (0x3f < (long)puVar8 - uVar1) {
          uVar4 = param_3 & 0xfffffffffffffff8;
          puVar2 = (undefined8 *)(uVar1 + 0x20);
          puVar7 = (undefined8 *)(&stack0xffffffffffffffd0 + lVar9);
          uVar5 = uVar4;
          do {
            uVar10 = puVar2[-4];
            uVar12 = puVar2[-1];
            uVar11 = puVar2[-2];
            uVar14 = puVar2[1];
            uVar13 = *puVar2;
            uVar16 = puVar2[3];
            uVar15 = puVar2[2];
            puVar7[-3] = puVar2[-3];
            puVar7[-4] = uVar10;
            puVar7[-1] = uVar12;
            puVar7[-2] = uVar11;
            puVar7[1] = uVar14;
            *puVar7 = uVar13;
            puVar7[3] = uVar16;
            puVar7[2] = uVar15;
            uVar5 = uVar5 - 8;
            puVar2 = puVar2 + 8;
            puVar7 = puVar7 + 8;
          } while (uVar5 != 0);
          if (param_3 == uVar4) goto LAB_1003bb4fc;
        }
      }
      lVar9 = param_3 - uVar4;
      puVar2 = (undefined8 *)(uVar1 + uVar4 * 8);
      puVar7 = (undefined8 *)(puVar8 + uVar4 * 8);
      do {
        *puVar7 = *puVar2;
        lVar9 = lVar9 + -1;
        puVar2 = puVar2 + 1;
        puVar7 = puVar7 + 1;
      } while (lVar9 != 0);
    }
LAB_1003bb4fc:
    puVar7 = (undefined8 *)0x0;
    _swift_getTupleTypeMetadata(0,param_3,puVar8,0,0);
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(puVar7[-1] + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar8 = &stack0xffffffffffffffb0 + -extraout_x8_01;
    puVar2 = puVar7;
    if (param_3 == 0) goto LAB_1003bb58c;
  }
  lVar9 = 0x20;
  plVar6 = (long *)(param_4 & 0xfffffffffffffffe);
  uVar1 = param_3;
  do {
    if (param_3 == 1) {
      lVar3 = 0;
    }
    else {
      lVar3 = (long)*(int *)((long)puVar7 + lVar9);
    }
    (**(code **)(*(long *)(*plVar6 + -8) + 0x10))(puVar8 + lVar3,*param_2);
    lVar9 = lVar9 + 0x10;
    uVar1 = uVar1 - 1;
    param_2 = param_2 + 1;
    plVar6 = plVar6 + 1;
  } while (uVar1 != 0);
LAB_1003bb58c:
  SwiftUI::TupleView::init(param_1,puVar2,puVar7);
  return;
}

