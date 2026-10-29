// rea decompile_all
// name: FUN_1000caaec
// address: 0x1000caaec
// body: available
// range: 0x1000caaec-0x1000cb05f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000cad9c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000caaec(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  UUID UVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  Divider DVar12;
  LocalizedStringKey LVar13;
  long extraout_x8;
  long lVar14;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar15;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar16;
  code *pcVar17;
  undefined8 *unaff_x20;
  code *pcVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  String stringLiteral;
  undefined8 auStack_f0 [2];
  long local_e0;
  long local_d8;
  long local_d0;
  undefined *local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  undefined *local_a0;
  long local_98;
  long local_90;
  long local_88 [2];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar5 = &DAT_10054def0;
  local_b0 = param_1;
  FUN_100002f94(&DAT_10054def0,&DAT_100422df0);
  local_b8 = *(long *)(puVar5 + -8);
  local_a0 = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_b8 + 0x40));
  lVar14 = (long)&local_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_a8 = lVar14;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = lVar14 - extraout_x12;
  puVar5 = &DAT_10054b740;
  local_d0 = lVar14;
  FUN_100002f94(&DAT_10054b740,&DAT_10041cc10);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar14 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_c0 = lVar14;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = lVar14 - extraout_x12_00;
  puVar5 = &DAT_100551190;
  FUN_100002f94(&DAT_100551190,&DAT_100422e00);
  local_90 = *(long *)(puVar5 + -8);
  local_c8 = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_90 + 0x40));
  lVar15 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_d8 = lVar15;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_98 = lVar15 - extraout_x12_01;
  lVar15 = unaff_x20[3];
  if (lVar15 == 0) {
    FUN_1001b7378(0);
    FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
    SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
    pcVar17 = (code *)SoftwareBreakpoint(1,0x1000cb060);
    (*pcVar17)();
  }
  puVar5 = &DAT_100422e08;
  _swift_getKeyPath(&DAT_100422e08);
  puVar6 = &DAT_100422e30;
  _swift_getKeyPath(&DAT_100422e30);
  _swift_retain(lVar15);
  Combine::Published::_get_subscript(&local_70);
  _swift_release(puVar5);
  _swift_release(puVar6);
  local_78 = local_70;
  uStack_68 = unaff_x20[1];
  local_70 = *unaff_x20;
  puVar5 = &DAT_1005298c8;
  _swift_allocObject(&DAT_1005298c8,0x38,7);
  uVar19 = *unaff_x20;
  uVar21 = unaff_x20[3];
  uVar20 = unaff_x20[2];
  *(undefined8 *)(puVar5 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar5 + 0x10) = uVar19;
  *(undefined8 *)(puVar5 + 0x28) = uVar21;
  *(undefined8 *)(puVar5 + 0x20) = uVar20;
  *(undefined8 *)(puVar5 + 0x30) = unaff_x20[4];
  _swift_retain(lVar15);
  FUN_100043d74(&local_70,local_88);
  puVar6 = &DAT_10054a968;
  FUN_100002f94(&DAT_10054a968,&DAT_10041f070);
  UVar7 = Foundation::UUID::typeMetadataAccessor();
  puVar8 = &DAT_100551198;
  FUN_100002f94(&DAT_100551198,&DAT_100422e58);
  puVar9 = &DAT_10054a978;
  FUN_1000087a0(&DAT_10054a978,&DAT_10054a968,&DAT_10041f070,
                PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100523b60);
  puVar10 = puVar9;
  FUN_1000ccf94();
  puVar11 = &DAT_10054a9b8;
  FUN_1000036d0(&DAT_10054a9b8,FUN_10025ee04,&DAT_10042c428);
  *(undefined **)(local_98 + -0x10) = puVar11;
  (extension_SwiftUI)::SwiftUI::ForEach::_init
            (local_98,puVar11,FUN_1000ccf8c,puVar5,puVar6,UVar7.unknown,puVar8,puVar9,puVar10);
  puVar5 = &DAT_100422e08;
  _swift_getKeyPath(&DAT_100422e08);
  puVar6 = &DAT_100422e30;
  _swift_getKeyPath(&DAT_100422e30);
  Combine::Published::_get_subscript(local_88,lVar15,puVar5,puVar6);
  _swift_release(puVar5);
  _swift_release(puVar6);
  _swift_release(lVar15);
  lVar16 = *(long *)(local_88[0] + 0x10);
  _swift_bridgeObjectRelease();
  bVar1 = lVar16 == 0;
  if (!bVar1) {
    SwiftUI::Divider::init();
  }
  DVar12 = SwiftUI::Divider::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar12.unknown + -8) + 0x38))(lVar14,bVar1,1,DVar12.unknown);
  stringLiteral.bridgeObject = (void *)0xafa680e27473696c;
  stringLiteral.str = (char *)0x79616c502077654e;
  LVar13 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  puVar5 = &DAT_1005298f0;
  local_e0 = lVar14;
  _swift_allocObject(&DAT_1005298f0,0x38,7);
  uVar19 = *unaff_x20;
  uVar21 = unaff_x20[3];
  uVar20 = unaff_x20[2];
  *(undefined8 *)(puVar5 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar5 + 0x10) = uVar19;
  *(undefined8 *)(puVar5 + 0x28) = uVar21;
  *(undefined8 *)(puVar5 + 0x20) = uVar20;
  *(undefined8 *)(puVar5 + 0x30) = unaff_x20[4];
  _swift_retain(lVar15);
  FUN_100043d74(&local_70,local_88);
  lVar16 = local_d0;
  (extension_SwiftUI)::SwiftUI::Button::_init(LVar13);
  puVar6 = local_c8;
  lVar15 = local_d8;
  pcVar17 = *(code **)(local_90 + 0x10);
  (*pcVar17)(local_d8,local_98,local_c8);
  lVar2 = local_c0;
  FUN_1000087e4(lVar14,local_c0,&DAT_10054b740,&DAT_10041cc10);
  puVar8 = local_a0;
  lVar4 = local_a8;
  lVar14 = local_b8;
  pcVar18 = *(code **)(local_b8 + 0x10);
  (*pcVar18)(local_a8,lVar16,local_a0);
  lVar3 = local_b0;
  (*pcVar17)(local_b0,lVar15,puVar6);
  puVar5 = &DAT_1005511b8;
  FUN_100002f94(&DAT_1005511b8,&DAT_100422e70);
  FUN_1000087e4(lVar2,lVar3 + *(int *)(puVar5 + 0x30),&DAT_10054b740,&DAT_10041cc10);
  (*pcVar18)(lVar3 + *(int *)(puVar5 + 0x40),lVar4,puVar8);
  pcVar17 = *(code **)(lVar14 + 8);
  (*pcVar17)(lVar16,puVar8);
  FUN_10002a29c(local_e0,&DAT_10054b740,&DAT_10041cc10);
  pcVar18 = *(code **)(local_90 + 8);
  (*pcVar18)(local_98,puVar6);
  (*pcVar17)(lVar4,puVar8);
  FUN_10002a29c(lVar2,&DAT_10054b740,&DAT_10041cc10);
  (*pcVar18)(lVar15,puVar6);
  return;
}

