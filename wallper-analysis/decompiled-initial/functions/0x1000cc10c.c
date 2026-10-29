// rea decompile_all
// name: FUN_1000cc10c
// address: 0x1000cc10c
// body: available
// range: 0x1000cc10c-0x1000cc4a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000cc388 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000cc10c(undefined8 param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  byte bVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  bool bVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar13;
  long extraout_x12;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long local_b0 [2];
  undefined *local_a0;
  long local_98;
  undefined *puStack_90;
  long local_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar9 = &DAT_100551200;
  local_80 = param_1;
  FUN_100002f94(&DAT_100551200,&DAT_100422eb8);
  local_a0 = puVar9;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = &DAT_10054b570;
  local_88 = (long)local_b0 - extraout_x8;
  FUN_100002f94(&DAT_10054b570,&DAT_100433140);
  local_98 = *(long *)(puVar9 + -8);
  puStack_90 = puVar9;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_98 + 0x40));
  lVar13 = ((long)local_b0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_b0[0] = lVar13;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = lVar13 - extraout_x12;
  lVar10 = 0;
  local_b0[1] = lVar13;
  FUN_100266c40();
  lVar10 = *(long *)(lVar10 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar10 + 0x40));
  puVar17 = (undefined8 *)(lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  puVar9 = (undefined *)*param_3;
  puVar1 = (undefined *)param_3[1];
  puVar11 = (undefined8 *)0x0;
  FUN_10025ee04();
  uVar16 = 0;
  lVar13 = *(long *)(param_2 + *(int *)(puVar11 + 4));
  uVar15 = *(ulong *)(lVar13 + 0x10);
  puVar12 = puVar11;
  local_78 = param_2;
  while( true ) {
    if (uVar15 == uVar16) {
      bVar2 = *(byte *)(local_78 + *(int *)((long)puVar11 + 0x1c));
      puVar11 = (undefined8 *)(local_78 + *(int *)((long)puVar11 + 0x14));
      local_70 = *puVar11;
      uVar14 = puVar11[1];
      uVar16 = 0xea00000000006c6c;
      uVar4 = 0x69662e6b636f6c63;
      if (bVar2 != 2) {
        uVar16 = 0x80000001004dc390;
        uVar4 = 0xd000000000000018;
      }
      pcVar3 = "text.badge.minus";
      uVar5 = 0xd000000000000014;
      if (bVar2 != 0) {
        pcVar3 = "circle.bottomhalf.filled";
        uVar5 = 0xd000000000000016;
      }
      if (bVar2 < 2) {
        uVar16 = (ulong)pcVar3 | 0x8000000000000000;
        uVar4 = uVar5;
      }
      uStack_68 = uVar14;
      FUN_100026df4();
      _swift_bridgeObjectRetain(uVar14);
      lVar10 = local_b0[0];
      (extension_SwiftUI)::SwiftUI::Label::_init
                (local_b0[0],puVar12,uVar4,uVar16,PTR___type_metadata_for_Swift_String_100523a98,
                 puVar12);
      uVar14 = 1;
      goto LAB_1000cc404;
    }
    if (*(ulong *)(lVar13 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1000cc4a4);
      (*pcVar7)();
    }
    FUN_100029504(lVar13 + ((ulong)*(byte *)(lVar10 + 0x50) + 0x20 &
                           ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff)) +
                  *(long *)(lVar10 + 0x48) * uVar16,puVar17,FUN_100266c40);
    if ((undefined *)*puVar17 == puVar9 && (undefined *)puVar17[1] == puVar1) break;
    uVar16 = uVar16 + 1;
    bVar8 = Swift::_stringCompareWithSmolCheck
                      ((undefined *)*puVar17,(undefined *)puVar17[1],
                       (_StringComparisonResult)(__int8)puVar9);
    puVar12 = puVar17;
    FUN_100029548(puVar17,FUN_100266c40);
    if (bVar8) {
LAB_1000cc3a8:
      puVar11 = (undefined8 *)(local_78 + *(int *)((long)puVar11 + 0x14));
      local_70 = *puVar11;
      uVar14 = puVar11[1];
      uStack_68 = uVar14;
      FUN_100026df4();
      _swift_bridgeObjectRetain(uVar14);
      lVar10 = local_b0[1];
      (extension_SwiftUI)::SwiftUI::Label::_init
                (local_b0[1],puVar12,0x72616d6b63656863,0xe90000000000006b,
                 PTR___type_metadata_for_Swift_String_100523a98,puVar12);
      uVar14 = 0;
LAB_1000cc404:
      lVar6 = local_88;
      puVar9 = puStack_90;
      lVar13 = local_98;
      (**(code **)(local_98 + 0x10))(local_88,lVar10,puStack_90);
      _swift_storeEnumTagMultiPayload(lVar6,local_a0,uVar14);
      FUN_1000087a0(&DAT_10054b568,&DAT_10054b570,&DAT_100433140,
                    PTR_SwiftUI__SwiftUI__Label<undefined,undefined>_>SwiftUI__View_100523358);
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar6);
      (**(code **)(lVar13 + 8))(lVar10,puVar9);
      return;
    }
  }
  FUN_100029548(puVar17,FUN_100266c40);
  puVar12 = puVar17;
  goto LAB_1000cc3a8;
}

