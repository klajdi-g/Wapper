// rea decompile_all
// name: FUN_100010b7c
// address: 0x100010b7c
// body: available
// range: 0x100010b7c-0x100010e8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100010d04 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100010b7c(long param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  UUID UVar7;
  AnyTransition AVar8;
  UnitPoint scale;
  CGFloat with;
  AnyTransition AVar9;
  AnyTransition AVar10;
  AnyTransition AVar11;
  UnitPoint anchor;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  long lVar16;
  undefined1 auStack_60 [15];
  undefined1 local_51;
  
  puVar3 = &DAT_10054ac58;
  FUN_100002f94(&DAT_10054ac58,&DAT_10041bf70);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar15 = auStack_60 + -extraout_x8;
  lVar4 = 0;
  FUN_1000c8bec();
  lVar16 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar16 + 0x40));
  puVar13 = puVar15 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar14 = *(undefined8 *)(param_2 + 0xf8);
  puVar3 = &DAT_10041c070;
  _swift_getKeyPath(&DAT_10041c070);
  puVar5 = &DAT_10041c098;
  _swift_getKeyPath(&DAT_10041c098);
  Combine::Published::_get_subscript(puVar15,uVar14,puVar3,puVar5);
  _swift_release(puVar3);
  _swift_release(puVar5);
  puVar6 = puVar15;
  (**(code **)(lVar16 + 0x30))(puVar15,1,lVar4);
  bVar2 = (int)puVar6 != 1;
  if (bVar2) {
    FUN_100007e64(puVar15,puVar13,FUN_1000c8bec);
    FUN_100029504(puVar13,param_1,FUN_1000c8bec);
    lVar4 = 0;
    FUN_1000ceee8();
    local_51 = 0;
    SwiftUI::State::init
              (param_1 + *(int *)(lVar4 + 0x14),lVar4,PTR___type_metadata_for_Swift_Bool_100523b70);
    puVar3 = &DAT_10054ae88;
    FUN_100002f94(&DAT_10054ae88,&DAT_10041c0d8);
    iVar1 = *(int *)(puVar3 + 0x24);
    ((undefined8 *)(param_1 + iVar1))[1] = 0xc03e000000000000;
    *(undefined8 *)(param_1 + iVar1) = 0;
    puVar3 = &DAT_10054ae08;
    FUN_100002f94(&DAT_10054ae08,&DAT_10041c060);
    iVar1 = *(int *)(puVar3 + 0x34);
    UVar7 = Foundation::UUID::typeMetadataAccessor();
    AVar11.unknown = (undefined *)(param_1 + iVar1);
    anchor.unknown = puVar13;
    (**(code **)(*(long *)(UVar7.unknown + -8) + 0x10))();
    AVar8 = SwiftUI::AnyTransition::get_opacity(AVar11);
    scale = SwiftUI::UnitPoint::get_center(AVar8.unknown);
    with.unknown = (undefined *)SwiftUI::AnyTransition::scale(scale.unknown,anchor,UVar7.unknown);
    AVar11 = AVar8;
    AVar9 = SwiftUI::AnyTransition::combined((AnyTransition)with.unknown,AVar8);
    _swift_release(AVar8.unknown);
    _swift_release();
    AVar10 = SwiftUI::AnyTransition::offset(with,AVar11.unknown,UVar7.unknown);
    AVar11 = AVar9;
    AVar8 = SwiftUI::AnyTransition::combined(AVar10,AVar9);
    _swift_release(AVar9.unknown);
    _swift_release();
    AVar9 = SwiftUI::AnyTransition::get_opacity(AVar10);
    AVar11 = SwiftUI::AnyTransition::offset(AVar9.unknown,AVar11.unknown,UVar7.unknown);
    AVar10 = SwiftUI::AnyTransition::combined(AVar11,AVar9);
    _swift_release(AVar9.unknown);
    _swift_release(AVar11.unknown);
    AVar11 = SwiftUI::AnyTransition::asymmetric(AVar8,AVar10,UVar7.unknown);
    _swift_release(AVar8.unknown);
    _swift_release(AVar10.unknown);
    FUN_100029548(puVar13,FUN_1000c8bec);
    puVar3 = &DAT_10054adf8;
    FUN_100002f94(&DAT_10054adf8,&DAT_10041c058);
    *(undefined **)(param_1 + *(int *)(puVar3 + 0x24)) = AVar11.unknown;
    pcVar12 = *(code **)(*(long *)(puVar3 + -8) + 0x38);
  }
  else {
    FUN_10002a29c(puVar15,&DAT_10054ac58,&DAT_10041bf70);
    puVar3 = &DAT_10054adf8;
    FUN_100002f94(&DAT_10054adf8,&DAT_10041c058);
    pcVar12 = *(code **)(*(long *)(puVar3 + -8) + 0x38);
  }
  (*pcVar12)(param_1,!bVar2,1,puVar3);
  return;
}

