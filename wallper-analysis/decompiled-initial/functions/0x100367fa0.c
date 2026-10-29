// rea decompile_all
// name: FUN_100367fa0
// address: 0x100367fa0
// body: available
// range: 0x100367fa0-0x10036824b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100368224 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100367fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 auStack_c0 [2];
  undefined8 local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  
  lVar4 = 0;
  local_b0 = param_3;
  local_a0 = param_6;
  local_98 = param_2;
  local_90 = param_7;
  local_88 = param_4;
  local_74 = param_5;
  local_70 = param_1;
  FUN_1001d59ac();
  local_a8 = *(long *)(lVar4 + -8);
  lVar19 = *(long *)(local_a8 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = (long)&local_b0 - (lVar19 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_10025ee04();
  lVar11 = *(long *)(lVar4 + -8);
  lVar15 = *(long *)(lVar11 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar20 = lVar17 - (lVar15 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_100386f18();
  lVar13 = *(long *)(lVar4 + -8);
  lVar4 = *(long *)(lVar13 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = lVar20 - (lVar4 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_1004338e0;
  local_68 = param_2;
  _swift_getKeyPath();
  local_80 = puVar5;
  FUN_100029504(local_b0,lVar18,FUN_100386f18);
  FUN_100029504(local_a0,lVar20,FUN_10025ee04);
  FUN_100029504(local_90,lVar17,FUN_1001d59ac);
  bVar1 = *(byte *)(lVar13 + 0x50);
  uVar14 = (ulong)bVar1 + 0x10 & ((ulong)bVar1 ^ 0xffffffffffffffff);
  uVar10 = lVar4 + uVar14 + 7 & 0xfffffffffffffff8;
  bVar2 = *(byte *)(lVar11 + 0x50);
  uVar12 = bVar2 + uVar10 + 9 & ((ulong)bVar2 ^ 0xffffffffffffffff);
  bVar3 = *(byte *)(local_a8 + 0x50);
  uVar16 = lVar15 + (ulong)bVar3 + uVar12 & ((ulong)bVar3 ^ 0xffffffffffffffff);
  puVar5 = &DAT_10053bf08;
  _swift_allocObject(&DAT_10053bf08,uVar16 + lVar19,bVar1 | bVar2 | bVar3 | 7);
  FUN_100007e64(lVar18,puVar5 + uVar14,FUN_100386f18);
  uVar7 = local_88;
  *(undefined8 *)(puVar5 + uVar10) = local_88;
  *(char *)((long)(puVar5 + uVar10) + 8) = (char)local_74;
  FUN_100007e64(lVar20,puVar5 + uVar12,FUN_10025ee04);
  FUN_100007e64(lVar17,puVar5 + uVar16,FUN_1001d59ac);
  _swift_bridgeObjectRetain(local_98);
  _swift_bridgeObjectRetain(uVar7);
  puVar6 = &DAT_100558960;
  FUN_100002f94(&DAT_100558960,&DAT_10042b290);
  uVar7 = 0;
  FUN_1003881b4(0);
  puVar8 = &DAT_100552c58;
  FUN_1000087a0(&DAT_100552c58,&DAT_100558960,&DAT_10042b290,
                PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100523b60);
  puVar9 = &DAT_10055e070;
  FUN_1000036d0(&DAT_10055e070,FUN_1003881b4,&TargetProtocolConformanceDescriptor_100433e20);
  *(undefined **)(lVar18 + -0x10) = puVar9;
  (extension_SwiftUI)::SwiftUI::ForEach::_init
            (local_70,puVar9,local_80,FUN_100388574,puVar5,puVar6,uVar7,puVar8,
             PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100523aa8);
  return;
}

