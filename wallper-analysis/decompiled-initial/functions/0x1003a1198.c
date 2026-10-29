// rea decompile_all
// name: FUN_1003a1198
// address: 0x1003a1198
// body: available
// range: 0x1003a1198-0x1003a1777 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003a166c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003a1198(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  UUID UVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  EnvironmentObject<undefined> EVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar14;
  long extraout_x12;
  long extraout_x12_00;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  code *pcVar19;
  long alStack_c0 [5];
  long *local_98;
  undefined8 local_90;
  undefined8 local_88;
  byte local_80 [16];
  long *local_70;
  undefined8 uStack_68;
  
  alStack_c0[4] = param_3;
  local_90 = param_1;
  UVar7 = Foundation::UUID::typeMetadataAccessor();
  alStack_c0[3] = *(long *)(UVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(alStack_c0[3] + 0x40));
  lVar18 = (long)alStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar8 = &DAT_10054a9c0;
  alStack_c0[1] = lVar18;
  FUN_100002f94(&DAT_10054a9c0,&DAT_100422d20);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = lVar18 - extraout_x8_00;
  puVar9 = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar9 + -8) + 0x40));
  lVar14 = lVar18 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  alStack_c0[2] = lVar14;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = lVar14 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar15 = lVar14 - extraout_x12_00;
  lVar10 = 0;
  FUN_1003a67f8();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  lVar17 = lVar15 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_88 = param_2;
  FUN_100029504(param_2,lVar17,FUN_10025ee04);
  lVar16 = *param_4;
  local_98 = param_4;
  if (lVar16 == 0) {
    FUN_1001b7378(0);
    FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
    SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
    pcVar19 = (code *)SoftwareBreakpoint(1,0x1003a1778);
    (*pcVar19)();
  }
  puVar9 = &DAT_100434c48;
  _swift_getKeyPath(&DAT_100434c48);
  puVar11 = &DAT_100434c70;
  _swift_getKeyPath(&DAT_100434c70);
  _swift_retain(lVar16);
  Combine::Published::_get_subscript(local_80);
  _swift_release(puVar9);
  _swift_release(puVar11);
  _swift_release(lVar16);
  if ((local_80[0] & 1) == 0) {
    puVar9 = &DAT_100434a80;
    _swift_getKeyPath(&DAT_100434a80);
    puVar11 = &DAT_100434aa8;
    _swift_getKeyPath(&DAT_100434aa8);
    _swift_retain(lVar16);
    Combine::Published::_get_subscript(lVar15);
    _swift_release(lVar16);
    _swift_release(puVar9);
    _swift_release(puVar11);
    lVar4 = alStack_c0[3];
    (**(code **)(alStack_c0[3] + 0x10))(lVar14,local_88,UVar7.unknown);
    (**(code **)(lVar4 + 0x38))(lVar14,0,1,UVar7.unknown);
    lVar16 = (long)*(int *)(puVar8 + 0x30);
    FUN_1000087e4(lVar15,lVar18,&DAT_10054a9c8,&DAT_10041bbe0);
    FUN_1000087e4(lVar14,lVar18 + lVar16,&DAT_10054a9c8,&DAT_10041bbe0);
    pcVar19 = *(code **)(lVar4 + 0x30);
    lVar12 = lVar18;
    (*pcVar19)(lVar18,1,UVar7.unknown);
    lVar4 = alStack_c0[2];
    if ((int)lVar12 == 1) {
      FUN_10002a29c(lVar14,&DAT_10054a9c8,&DAT_10041bbe0);
      FUN_10002a29c(lVar15,&DAT_10054a9c8,&DAT_10041bbe0);
      lVar16 = lVar18 + lVar16;
      (*pcVar19)(lVar16,1,UVar7.unknown);
      if ((int)lVar16 == 1) {
        FUN_10002a29c(lVar18,&DAT_10054a9c8,&DAT_10041bbe0);
        bVar6 = true;
        goto LAB_1003a15f4;
      }
    }
    else {
      FUN_1000087e4(lVar18,alStack_c0[2],&DAT_10054a9c8,&DAT_10041bbe0);
      lVar12 = lVar18 + lVar16;
      (*pcVar19)(lVar12,1,UVar7.unknown);
      lVar5 = alStack_c0[3];
      lVar3 = alStack_c0[1];
      if ((int)lVar12 != 1) {
        (**(code **)(alStack_c0[3] + 0x20))(alStack_c0[1],lVar18 + lVar16,UVar7.unknown);
        puVar8 = &DAT_10054a130;
        FUN_1000036d0(&DAT_10054a130,PTR_typeMetadataAccessor_100520bd8,
                      PTR_Foundation__Foundation__UUID_>Swift__Equatable_100520bf8);
        bVar6 = Swift::Equatable::___infix(lVar4,lVar3,UVar7.unknown,puVar8);
        pcVar19 = *(code **)(lVar5 + 8);
        (*pcVar19)(lVar3,UVar7.unknown);
        FUN_10002a29c(lVar14,&DAT_10054a9c8,&DAT_10041bbe0);
        FUN_10002a29c(lVar15,&DAT_10054a9c8,&DAT_10041bbe0);
        (*pcVar19)(alStack_c0[2],UVar7.unknown);
        FUN_10002a29c(lVar18,&DAT_10054a9c8,&DAT_10041bbe0);
        goto LAB_1003a15f4;
      }
      FUN_10002a29c(lVar14,&DAT_10054a9c8,&DAT_10041bbe0);
      FUN_10002a29c(lVar15,&DAT_10054a9c8,&DAT_10041bbe0);
      (**(code **)(alStack_c0[3] + 8))(lVar4,UVar7.unknown);
    }
    FUN_10002a29c(lVar18,&DAT_10054a9c0,&DAT_100422d20);
    bVar6 = false;
  }
  else {
    bVar6 = false;
  }
LAB_1003a15f4:
  FUN_1001b7378(0);
  puVar8 = &DAT_100553df0;
  FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
  EVar13 = SwiftUI::EnvironmentObject::init();
  lVar18 = alStack_c0[4];
  *(long *)(lVar17 + *(int *)(lVar10 + 0x14)) = alStack_c0[4];
  *(bool *)(lVar17 + *(int *)(lVar10 + 0x18)) = bVar6;
  puVar1 = (undefined8 *)(lVar17 + *(int *)(lVar10 + 0x1c));
  *puVar1 = EVar13.unknown;
  puVar1[1] = puVar8;
  iVar2 = *(int *)(lVar10 + 0x20);
  local_80[0] = 0;
  _swift_bridgeObjectRetain(lVar18);
  SwiftUI::State::init(lVar17 + iVar2,EVar13.unknown,PTR___type_metadata_for_Swift_Bool_100523b70);
  local_70 = local_98;
  uStack_68 = local_88;
  FUN_100002f94(&DAT_10055f408,&DAT_100434bc0);
  FUN_1000036d0(&DAT_10055f410,FUN_1003a67f8,&TargetProtocolConformanceDescriptor_100434d38);
  FUN_1000087a0(&DAT_10055f418,&DAT_10055f408,&DAT_100434bc0,
                PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0);
  (extension_SwiftUI)::SwiftUI::View::_contextMenu();
  FUN_100029548(lVar17,FUN_1003a67f8);
  return;
}

