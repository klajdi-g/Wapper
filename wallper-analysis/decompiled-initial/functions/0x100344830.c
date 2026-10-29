// rea decompile_all
// name: FUN_100344830
// address: 0x100344830
// body: available
// range: 0x100344830-0x100344a83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003449f4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100344830(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 auStack_c0 [2];
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [16];
  undefined *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar2 = &DAT_10055d2d0;
  FUN_100002f94(&DAT_10055d2d0,&DAT_1004328b0);
  lVar12 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar12 + 0x40));
  puVar9 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = (long)puVar9 - extraout_x12;
  puVar3 = &DAT_10055d308;
  FUN_100002f94(&DAT_10055d308,&DAT_1004328b8);
  _swift_initStaticObject();
  puVar4 = &DAT_1004328c8;
  local_98 = puVar3;
  _swift_getKeyPath(&DAT_1004328c8);
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_78 = param_2[3];
  local_80 = param_2[2];
  uStack_88 = param_2[5];
  local_90 = param_2[4];
  puVar3 = &DAT_10053b638;
  _swift_allocObject(&DAT_10053b638,0x40,7);
  uVar13 = *param_2;
  uVar15 = param_2[3];
  uVar14 = param_2[2];
  *(undefined8 *)(puVar3 + 0x18) = param_2[1];
  *(undefined8 *)(puVar3 + 0x10) = uVar13;
  *(undefined8 *)(puVar3 + 0x28) = uVar15;
  *(undefined8 *)(puVar3 + 0x20) = uVar14;
  uVar13 = param_2[4];
  *(undefined8 *)(puVar3 + 0x38) = param_2[5];
  *(undefined8 *)(puVar3 + 0x30) = uVar13;
  FUN_1000087e4(&uStack_70,auStack_a8,&DAT_100551900,&DAT_100423820);
  FUN_1000087e4(&local_80,auStack_a8,&DAT_10055d310,&DAT_1004328e0);
  FUN_1000087e4(&local_90,auStack_a8,&DAT_10055d318,&DAT_1004328e8);
  puVar5 = &DAT_10055d320;
  FUN_100002f94(&DAT_10055d320,&DAT_1004328f0);
  puVar6 = &DAT_10055d328;
  FUN_1000087a0(&DAT_10055d328,&DAT_10055d320,&DAT_1004328f0,
                PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100523b60);
  puVar7 = puVar6;
  FUN_100345598();
  puVar8 = puVar7;
  FUN_1003455d8();
  *(undefined **)(lVar10 + -0x10) = puVar8;
  (extension_SwiftUI)::SwiftUI::ForEach::_init
            (lVar10,puVar8,puVar4,FUN_100345590,puVar3,puVar5,&DAT_10052cec8,puVar6,puVar7);
  pcVar11 = *(code **)(lVar12 + 0x10);
  (*pcVar11)(puVar9,lVar10,puVar2);
  (*pcVar11)(param_1,puVar9,puVar2);
  puVar3 = &DAT_10055d340;
  FUN_100002f94(&DAT_10055d340,&DAT_1004328f8);
  iVar1 = *(int *)(puVar3 + 0x30);
  *(undefined8 *)(param_1 + iVar1) = 0;
  *(undefined1 *)((undefined8 *)(param_1 + iVar1) + 1) = 1;
  pcVar11 = *(code **)(lVar12 + 8);
  (*pcVar11)(lVar10,puVar2);
  (*pcVar11)(puVar9,puVar2);
  return;
}

