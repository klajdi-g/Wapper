// rea decompile_all
// name: FUN_10036f880
// address: 0x10036f880
// body: available
// range: 0x10036f880-0x10036fba7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010036fac8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10036f880(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long extraout_x8;
  long lVar10;
  long extraout_x8_00;
  ulong uVar11;
  long extraout_x12;
  long extraout_x12_00;
  long lVar12;
  ulong uVar13;
  code *pcVar14;
  code *pcVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 auStack_b0 [2];
  long local_a0;
  undefined8 local_98;
  long local_90;
  undefined *local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  
  puVar1 = &DAT_10055e770;
  local_70 = param_1;
  FUN_100002f94(&DAT_10055e770,&DAT_100433fb0);
  local_78 = *(long *)(puVar1 + -8);
  local_88 = puVar1;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_78 + 0x40));
  lVar10 = (long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_80 = lVar10;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = lVar10 - extraout_x12;
  lVar2 = 0;
  FUN_100387eec();
  lVar2 = *(long *)(lVar2 + -8);
  lVar18 = *(long *)(lVar2 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar16 = lVar10 - (lVar18 + 0xfU & 0xfffffffffffffff0);
  puVar1 = &DAT_10055e778;
  FUN_100002f94(&DAT_10055e778,&DAT_100433fb8);
  local_90 = *(long *)(puVar1 + -8);
  puVar3 = puVar1;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_90 + 0x40));
  lVar17 = lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = lVar17 - extraout_x12_00;
  local_98 = param_2;
  FUN_10036e500();
  local_68 = puVar3;
  FUN_100029504(param_2,lVar16,FUN_100387eec);
  uVar11 = (ulong)*(byte *)(lVar2 + 0x50);
  uVar13 = uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff);
  puVar3 = &DAT_10053c280;
  _swift_allocObject(&DAT_10053c280,uVar13 + lVar18,uVar11 | 7);
  FUN_100007e64(lVar16,puVar3 + uVar13,FUN_100387eec);
  puVar4 = &DAT_100551208;
  FUN_100002f94(&DAT_100551208,&DAT_100422ec0);
  uVar5 = 0;
  FUN_1001d537c(0);
  uVar6 = 0;
  FUN_10038f3a0(0);
  puVar7 = &DAT_100551210;
  FUN_1000087a0(&DAT_100551210,&DAT_100551208,&DAT_100422ec0,
                PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100523b60);
  puVar8 = &DAT_10055e780;
  FUN_1000036d0(&DAT_10055e780,FUN_10038f3a0,&TargetProtocolConformanceDescriptor_100434530);
  puVar9 = &DAT_100551218;
  FUN_1000036d0(&DAT_100551218,FUN_1001d59ac,&TargetProtocolConformanceDescriptor_10042ad68);
  *(undefined **)(lVar12 + -0x10) = puVar9;
  local_a0 = lVar12;
  (extension_SwiftUI)::SwiftUI::ForEach::_init
            (lVar12,puVar9,FUN_10038f38c,puVar3,puVar4,uVar5,uVar6,puVar7,puVar8);
  FUN_100370528(lVar10);
  lVar2 = local_90;
  pcVar14 = *(code **)(local_90 + 0x10);
  (*pcVar14)(lVar17,lVar12,puVar1);
  lVar16 = local_78;
  lVar12 = local_80;
  puVar4 = local_88;
  pcVar15 = *(code **)(local_78 + 0x10);
  (*pcVar15)(local_80,lVar10,local_88);
  lVar18 = local_70;
  (*pcVar14)(local_70,lVar17,puVar1);
  puVar3 = &DAT_10055e788;
  FUN_100002f94(&DAT_10055e788,&DAT_100433fc0);
  (*pcVar15)(lVar18 + *(int *)(puVar3 + 0x30),lVar12,puVar4);
  pcVar14 = *(code **)(lVar16 + 8);
  (*pcVar14)(lVar10,puVar4);
  pcVar15 = *(code **)(lVar2 + 8);
  (*pcVar15)(local_a0,puVar1);
  (*pcVar14)(lVar12,puVar4);
  (*pcVar15)(lVar17,puVar1);
  return;
}

