// rea decompile_all
// name: FUN_1000cb830
// address: 0x1000cb830
// body: available
// range: 0x1000cb830-0x1000cbadf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000cbab8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000cb830(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  Calendar CVar2;
  Date DVar3;
  Date DVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 auStack_c0 [2];
  long local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined1 auStack_98 [16];
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0;
  local_a0 = param_1;
  FUN_10025ee04();
  local_a8 = *(long *)(lVar1 + -8);
  lVar17 = *(long *)(local_a8 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar1 = (long)&local_b0 - (lVar17 + 0xfU & 0xfffffffffffffff0);
  local_b0 = lVar1;
  CVar2 = Foundation::Calendar::typeMetadataAccessor();
  lVar15 = *(long *)(CVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar15 + 0x40));
  lVar1 = lVar1 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar16 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar16 + 0x40));
  lVar18 = lVar1 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar4 = Foundation::Date::init();
  Foundation::Calendar::get_current((Calendar)DVar4.unknown);
  lVar5 = lVar18;
  FUN_1001d6f78(lVar18,lVar1);
  (**(code **)(lVar15 + 8))(lVar1,CVar2.unknown);
  (**(code **)(lVar16 + 8))(lVar18,DVar3.unknown);
  lVar1 = local_b0;
  uStack_68 = param_3[1];
  uStack_70 = *param_3;
  uStack_78 = param_3[4];
  local_80 = param_3[3];
  local_88 = lVar5;
  FUN_100029504(param_2,local_b0,FUN_10025ee04);
  uVar13 = (ulong)*(byte *)(local_a8 + 0x50);
  uVar14 = uVar13 + 0x38 & (uVar13 ^ 0xffffffffffffffff);
  puVar6 = &DAT_100529968;
  _swift_allocObject(&DAT_100529968,uVar14 + lVar17,uVar13 | 7);
  uVar8 = *param_3;
  uVar20 = param_3[3];
  uVar19 = param_3[2];
  *(undefined8 *)(puVar6 + 0x18) = param_3[1];
  *(undefined8 *)(puVar6 + 0x10) = uVar8;
  *(undefined8 *)(puVar6 + 0x28) = uVar20;
  *(undefined8 *)(puVar6 + 0x20) = uVar19;
  *(undefined8 *)(puVar6 + 0x30) = param_3[4];
  FUN_100007e64(lVar1,puVar6 + uVar14,FUN_10025ee04);
  FUN_100043d74(&uStack_70,auStack_98);
  FUN_1000087e4(&local_80,auStack_98,&DAT_1005511f8,&DAT_100422ea0);
  puVar7 = &DAT_100551208;
  FUN_100002f94(&DAT_100551208,&DAT_100422ec0);
  uVar8 = 0;
  FUN_1001d537c(0);
  puVar9 = &DAT_1005511f0;
  FUN_100002f94(&DAT_1005511f0,&DAT_100422e98);
  puVar10 = &DAT_100551210;
  FUN_1000087a0(&DAT_100551210,&DAT_100551208,&DAT_100422ec0,
                PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100523b60);
  puVar11 = &DAT_1005511e8;
  FUN_1000087a0(&DAT_1005511e8,&DAT_1005511f0,&DAT_100422e98,
                PTR_SwiftUI__SwiftUI__Toggle<undefined>_>SwiftUI__View_1005234a0);
  puVar12 = &DAT_100551218;
  FUN_1000036d0(&DAT_100551218,FUN_1001d59ac,&TargetProtocolConformanceDescriptor_10042ad68);
  *(undefined **)(lVar18 + -0x10) = puVar12;
  (extension_SwiftUI)::SwiftUI::ForEach::_init
            (local_a0,puVar12,FUN_1000ce290,puVar6,puVar7,uVar8,puVar9,puVar10,puVar11);
  return;
}

