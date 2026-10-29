// rea decompile_all
// name: FUN_1000211e0
// address: 0x1000211e0
// body: available
// range: 0x1000211e0-0x1000217e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000216f8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000211e0(undefined8 param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  bool bVar6;
  undefined *puVar7;
  UUID UVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  Text TVar12;
  long extraout_x8;
  long extraout_x8_00;
  long lVar13;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar14;
  long extraout_x12;
  long extraout_x12_00;
  long lVar15;
  long lVar16;
  long lVar17;
  code *pcVar18;
  long alStack_c0 [4];
  long local_a0;
  long local_98;
  undefined *local_90;
  undefined8 *local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar7 = &DAT_10054b578;
  local_78 = param_1;
  FUN_100002f94(&DAT_10054b578,&DAT_10041c920);
  local_90 = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = &DAT_10054b570;
  local_88 = (undefined8 *)((long)alStack_c0 - extraout_x8);
  FUN_100002f94(&DAT_10054b570,&DAT_100433140);
  alStack_c0[3] = *(long *)(puVar7 + -8);
  local_80 = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(alStack_c0[3] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = ((long)alStack_c0 - extraout_x8) - extraout_x8_00;
  alStack_c0[2] = lVar13;
  UVar8 = Foundation::UUID::typeMetadataAccessor();
  lVar16 = *(long *)(UVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar16 + 0x40));
  lVar13 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar7 = &DAT_10054a9c0;
  alStack_c0[1] = lVar13;
  FUN_100002f94(&DAT_10054a9c0,&DAT_100422d20);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = lVar13 - extraout_x8_02;
  puVar9 = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar9 + -8) + 0x40));
  lVar14 = lVar13 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  local_a0 = lVar14;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = lVar14 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar15 = lVar14 - extraout_x12_00;
  lVar17 = *param_2;
  if (lVar17 == 0) {
    FUN_1001b7378(0);
    FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
    SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
    pcVar18 = (code *)SoftwareBreakpoint(1,0x1000217e4);
    (*pcVar18)();
  }
  puVar9 = &DAT_10041bbe8;
  _swift_getKeyPath(&DAT_10041bbe8);
  puVar10 = &DAT_10041bc10;
  _swift_getKeyPath(&DAT_10041bc10);
  _swift_retain(lVar17);
  Combine::Published::_get_subscript(lVar15);
  _swift_release(lVar17);
  _swift_release(puVar9);
  _swift_release(puVar10);
  local_98 = param_3;
  (**(code **)(lVar16 + 0x10))(lVar14,param_3,UVar8.unknown);
  (**(code **)(lVar16 + 0x38))(lVar14,0,1,UVar8.unknown);
  lVar17 = (long)*(int *)(puVar7 + 0x30);
  puVar7 = &DAT_10041bbe0;
  FUN_1000087e4(lVar15,lVar13,&DAT_10054a9c8,&DAT_10041bbe0);
  FUN_1000087e4(lVar14,lVar13 + lVar17,&DAT_10054a9c8);
  pcVar18 = *(code **)(lVar16 + 0x30);
  lVar11 = lVar13;
  (*pcVar18)(lVar13,1,UVar8.unknown);
  lVar4 = local_a0;
  if ((int)lVar11 == 1) {
    FUN_10002a29c(lVar14,&DAT_10054a9c8,&DAT_10041bbe0);
    FUN_10002a29c(lVar15,&DAT_10054a9c8,&DAT_10041bbe0);
    lVar17 = lVar13 + lVar17;
    (*pcVar18)(lVar17,1,UVar8.unknown);
    if ((int)lVar17 == 1) {
      FUN_10002a29c(lVar13,&DAT_10054a9c8,&DAT_10041bbe0);
LAB_1000216a0:
      lVar13 = local_98;
      lVar14 = 0;
      FUN_10025ee04();
      puVar1 = (undefined8 *)(lVar13 + *(int *)(lVar14 + 0x14));
      local_70 = *puVar1;
      uVar2 = puVar1[1];
      uStack_68 = uVar2;
      FUN_100026df4();
      _swift_bridgeObjectRetain(uVar2);
      lVar13 = alStack_c0[2];
      (extension_SwiftUI)::SwiftUI::Label::_init
                (alStack_c0[2],lVar14,0x72616d6b63656863,0xe90000000000006b,
                 PTR___type_metadata_for_Swift_String_100523a98,lVar14);
      puVar7 = local_80;
      puVar1 = local_88;
      lVar14 = alStack_c0[3];
      (**(code **)(alStack_c0[3] + 0x10))(local_88,lVar13,local_80);
      _swift_storeEnumTagMultiPayload(puVar1,local_90,0);
      FUN_1000087a0(&DAT_10054b568,&DAT_10054b570,&DAT_100433140,
                    PTR_SwiftUI__SwiftUI__Label<undefined,undefined>_>SwiftUI__View_100523358);
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar1);
      (**(code **)(lVar14 + 8))(lVar13,puVar7);
      return;
    }
  }
  else {
    puVar7 = &DAT_10041bbe0;
    FUN_1000087e4(lVar13,local_a0,&DAT_10054a9c8);
    lVar11 = lVar13 + lVar17;
    (*pcVar18)(lVar11,1,UVar8.unknown);
    lVar3 = alStack_c0[1];
    if ((int)lVar11 != 1) {
      (**(code **)(lVar16 + 0x20))(alStack_c0[1],lVar13 + lVar17,UVar8.unknown);
      puVar7 = &DAT_10054a130;
      FUN_1000036d0(&DAT_10054a130,PTR_typeMetadataAccessor_100520bd8,
                    PTR_Foundation__Foundation__UUID_>Swift__Equatable_100520bf8);
      bVar6 = Swift::Equatable::___infix(lVar4,lVar3,UVar8.unknown);
      pcVar18 = *(code **)(lVar16 + 8);
      (*pcVar18)(lVar3,UVar8.unknown);
      FUN_10002a29c(lVar14,&DAT_10054a9c8,&DAT_10041bbe0);
      FUN_10002a29c(lVar15,&DAT_10054a9c8,&DAT_10041bbe0);
      (*pcVar18)(lVar4,UVar8.unknown);
      FUN_10002a29c(lVar13,&DAT_10054a9c8,&DAT_10041bbe0);
      if (bVar6) goto LAB_1000216a0;
      goto LAB_10002154c;
    }
    FUN_10002a29c(lVar14,&DAT_10054a9c8,&DAT_10041bbe0);
    FUN_10002a29c(lVar15,&DAT_10054a9c8,&DAT_10041bbe0);
    (**(code **)(lVar16 + 8))(lVar4,UVar8.unknown);
  }
  FUN_10002a29c(lVar13,&DAT_10054a9c0,&DAT_100422d20);
LAB_10002154c:
  lVar13 = local_98;
  lVar14 = 0;
  FUN_10025ee04();
  puVar1 = (undefined8 *)(lVar13 + *(int *)(lVar14 + 0x14));
  local_70 = *puVar1;
  uVar2 = puVar1[1];
  uStack_68 = uVar2;
  FUN_100026df4();
  uVar5 = (undefined1)lVar14;
  _swift_bridgeObjectRetain(uVar2);
  puVar9 = PTR___type_metadata_for_Swift_String_100523a98;
  TVar12 = SwiftUI::Text::_init();
  puVar1 = local_88;
  *local_88 = TVar12.unknown;
  puVar1[1] = puVar9;
  *(undefined1 *)(puVar1 + 2) = uVar5;
  puVar1[3] = puVar7;
  _swift_storeEnumTagMultiPayload(puVar1,local_90,1);
  FUN_1000087a0(&DAT_10054b568,&DAT_10054b570,&DAT_100433140,
                PTR_SwiftUI__SwiftUI__Label<undefined,undefined>_>SwiftUI__View_100523358);
  (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar1);
  return;
}

