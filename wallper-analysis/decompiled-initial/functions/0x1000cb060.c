// rea decompile_all
// name: FUN_1000cb060
// address: 0x1000cb060
// body: available
// range: 0x1000cb060-0x1000cb55b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000cb494 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000cb060(undefined8 param_1,ulong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  MainActor *pMVar5;
  MainActor *pMVar6;
  undefined8 *puVar7;
  Binding<undefined> BVar8;
  long lVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *pcVar10;
  long extraout_x12;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  MainActor *local_110;
  undefined *local_108;
  long local_100;
  long local_f8;
  undefined *local_f0;
  undefined *local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  undefined8 *puStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  ulong local_90;
  undefined8 *puStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  puVar2 = &DAT_1005511b0;
  local_d8 = param_1;
  FUN_100002f94(&DAT_1005511b0,&DAT_100422e68);
  lVar14 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)&local_110 - extraout_x8;
  puVar3 = &DAT_1005511c0;
  FUN_100002f94(&DAT_1005511c0,&DAT_100422e80);
  local_f0 = puVar3;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  local_e0 = lVar9 - extraout_x8_00;
  FUN_10025ee04();
  lVar15 = *(long *)(lVar4 + -8);
  lVar12 = *(long *)(lVar15 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = (lVar9 - extraout_x8_00) - (lVar12 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_10054b1e0;
  FUN_100002f94(&DAT_10054b1e0,&DAT_10041c400);
  local_e8 = puVar3;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (*(char *)(param_2 + (long)*(int *)(lVar4 + 0x1c)) == '\0') {
    puVar7 = (undefined8 *)(param_2 + (long)*(int *)(lVar4 + 0x14));
    local_d0 = *puVar7;
    uVar18 = puVar7[1];
    local_100 = lVar17 - extraout_x8_01;
    local_f8 = extraout_x12;
    uStack_c8 = uVar18;
    FUN_100029504(param_2,lVar17,FUN_10025ee04);
    uStack_b8 = param_3[1];
    local_c0 = *param_3;
    uStack_78 = param_3[4];
    local_80 = param_3[3];
    pMVar5 = Swift::MainActor::typeMetadataAccessor();
    puVar3 = PTR_typeMetadataAccessor_1005246d8;
    local_110 = pMVar5;
    _swift_bridgeObjectRetain(uVar18);
    FUN_100043d74(&local_c0,&local_a0);
    pMVar6 = (MainActor *)&local_80;
    FUN_1000087e4(pMVar6,&local_a0,&DAT_1005511f8,&DAT_100422ea0);
    pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar6);
    puVar7 = &DAT_100558b80;
    FUN_1000036d0(&DAT_100558b80,puVar3,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
    uVar16 = (ulong)*(byte *)(lVar15 + 0x50);
    uVar11 = uVar16 + 0x20 & (uVar16 ^ 0xffffffffffffffff);
    uVar13 = lVar12 + uVar11 + 7 & 0xfffffffffffffff8;
    puVar3 = &DAT_100529918;
    local_108 = puVar2;
    _swift_allocObject(&DAT_100529918,uVar13 + 0x28,uVar16 | 7);
    *(MainActor **)(puVar3 + 0x10) = pMVar5;
    *(undefined8 **)(puVar3 + 0x18) = puVar7;
    FUN_100007e64(lVar17,puVar3 + uVar11,FUN_10025ee04);
    puVar1 = (undefined8 *)(puVar3 + uVar13);
    uVar18 = *param_3;
    uVar20 = param_3[3];
    uVar19 = param_3[2];
    puVar1[1] = param_3[1];
    *puVar1 = uVar18;
    puVar1[3] = uVar20;
    puVar1[2] = uVar19;
    puVar1[4] = param_3[4];
    FUN_100029504(param_2,lVar17,FUN_10025ee04);
    FUN_100043d74(&local_c0,&local_a0);
    pMVar5 = (MainActor *)&local_80;
    FUN_1000087e4(pMVar5,&local_a0,&DAT_1005511f8,&DAT_100422ea0);
    pMVar5 = Swift::MainActor::get_shared(local_110,pMVar5);
    uVar11 = uVar16 + 0x48 & (uVar16 ^ 0xffffffffffffffff);
    puVar2 = &DAT_100529940;
    _swift_allocObject(&DAT_100529940,uVar11 + lVar12,uVar16 | 7);
    *(MainActor **)(puVar2 + 0x10) = pMVar5;
    *(undefined8 **)(puVar2 + 0x18) = puVar7;
    uVar18 = *param_3;
    uVar20 = param_3[3];
    uVar19 = param_3[2];
    *(undefined8 *)(puVar2 + 0x28) = param_3[1];
    *(undefined8 *)(puVar2 + 0x20) = uVar18;
    *(undefined8 *)(puVar2 + 0x38) = uVar20;
    *(undefined8 *)(puVar2 + 0x30) = uVar19;
    *(undefined8 *)(puVar2 + 0x40) = param_3[4];
    FUN_100007e64(lVar17,puVar2 + uVar11,FUN_10025ee04);
    BVar8 = SwiftUI::Binding::init();
    uVar11 = local_90 & 0xff;
    FUN_100026df4();
    lVar9 = local_100;
    (extension_SwiftUI)::SwiftUI::Toggle::_init
              (local_100,BVar8.unknown,local_a0,uStack_98,uVar11,
               PTR___type_metadata_for_Swift_String_100523a98,BVar8.unknown);
    lVar4 = local_e0;
    puVar2 = local_e8;
    (**(code **)(local_f8 + 0x10))(local_e0,lVar9,local_e8);
    _swift_storeEnumTagMultiPayload(lVar4,local_f0,0);
    FUN_1000087a0(&DAT_10054b200,&DAT_10054b1e0,&DAT_10041c400,
                  PTR_SwiftUI__SwiftUI__Toggle<undefined>_>SwiftUI__View_1005234a0);
    FUN_1000087a0(&DAT_1005511a8,&DAT_1005511b0,&DAT_100422e68,
                  PTR_SwiftUI__SwiftUI__Menu<undefined,undefined>_>SwiftUI__View_100522d88);
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar4);
    pcVar10 = *(code **)(local_f8 + 8);
  }
  else {
    local_b0 = param_2;
    puStack_a8 = param_3;
    local_90 = param_2;
    puStack_88 = param_3;
    FUN_100002f94(&DAT_1005511c8,&DAT_100422e88);
    FUN_100002f94(&DAT_1005511d0,&DAT_100422e90);
    FUN_1000cd090();
    FUN_1000cd120();
    SwiftUI::Menu::_init();
    lVar4 = local_e0;
    (**(code **)(lVar14 + 0x10))(local_e0,lVar9,puVar2);
    _swift_storeEnumTagMultiPayload(lVar4,local_f0,1);
    FUN_1000087a0(&DAT_10054b200,&DAT_10054b1e0,&DAT_10041c400,
                  PTR_SwiftUI__SwiftUI__Toggle<undefined>_>SwiftUI__View_1005234a0);
    FUN_1000087a0(&DAT_1005511a8,&DAT_1005511b0,&DAT_100422e68,
                  PTR_SwiftUI__SwiftUI__Menu<undefined,undefined>_>SwiftUI__View_100522d88);
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar4);
    pcVar10 = *(code **)(lVar14 + 8);
  }
  (*pcVar10)(lVar9,puVar2);
  return;
}

