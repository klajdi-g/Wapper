// rea decompile_all
// name: FUN_100020924
// address: 0x100020924
// body: available
// range: 0x100020924-0x100020f57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100020bf4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100020924(long param_1,long *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  UUID UVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  Divider DVar11;
  LocalizedStringKey LVar12;
  long extraout_x8;
  long lVar13;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar14;
  code *pcVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  String stringLiteral;
  undefined8 auStack_120 [2];
  undefined1 auStack_110 [8];
  long local_108;
  undefined *local_100;
  long local_f8;
  long local_f0;
  undefined *local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  undefined1 *local_c8;
  long local_c0;
  undefined1 local_b8;
  undefined7 uStack_b7;
  
  puVar4 = &DAT_10054b518;
  local_d0 = param_1;
  FUN_100002f94(&DAT_10054b518,&DAT_10042e600);
  local_100 = puVar4;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  local_c8 = auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = (long)(auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  puVar4 = &DAT_10054b740;
  local_e0 = lVar13;
  FUN_100002f94(&DAT_10054b740,&DAT_10041cc10);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar13 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_d8 = lVar13;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = lVar13 - extraout_x12_00;
  puVar4 = &DAT_10054b748;
  local_c0 = lVar13;
  FUN_100002f94(&DAT_10054b748,&DAT_10041cc18);
  local_f8 = *(long *)(puVar4 + -8);
  local_e8 = puVar4;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_f8 + 0x40));
  lVar13 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_f0 = lVar13;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = lVar13 - extraout_x12_01;
  lVar16 = *param_2;
  local_108 = lVar13;
  if (lVar16 == 0) {
    FUN_1001b7378(0);
    FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
    SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x100020f58);
    (*pcVar15)();
  }
  puVar4 = &DAT_10041baa8;
  _swift_getKeyPath(&DAT_10041baa8);
  puVar5 = &DAT_10041bad0;
  _swift_getKeyPath(&DAT_10041bad0);
  _swift_retain_n(lVar16,2);
  Combine::Published::_get_subscript(&local_b8);
  _swift_release(puVar4);
  _swift_release(puVar5);
  puVar4 = &DAT_100525cc0;
  _swift_allocObject(&DAT_100525cc0,0x58,7);
  lVar17 = param_2[4];
  lVar18 = param_2[7];
  lVar14 = param_2[6];
  *(long *)(puVar4 + 0x38) = param_2[5];
  *(long *)(puVar4 + 0x30) = lVar17;
  *(long *)(puVar4 + 0x48) = lVar18;
  *(long *)(puVar4 + 0x40) = lVar14;
  *(long *)(puVar4 + 0x50) = param_2[8];
  lVar18 = *param_2;
  lVar14 = param_2[3];
  lVar17 = param_2[2];
  *(long *)(puVar4 + 0x18) = param_2[1];
  *(long *)(puVar4 + 0x10) = lVar18;
  *(long *)(puVar4 + 0x28) = lVar14;
  *(long *)(puVar4 + 0x20) = lVar17;
  FUN_10002b2a8(param_2,&local_b8);
  puVar5 = &DAT_10054a968;
  FUN_100002f94(&DAT_10054a968,&DAT_10041f070);
  UVar6 = Foundation::UUID::typeMetadataAccessor();
  puVar7 = &DAT_10054b530;
  FUN_100002f94(&DAT_10054b530,&DAT_10041c900);
  puVar8 = &DAT_10054a978;
  FUN_1000087a0(&DAT_10054a978,&DAT_10054a968,&DAT_10041f070,
                PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100523b60);
  puVar9 = &DAT_10054b540;
  FUN_1000087a0(&DAT_10054b540,&DAT_10054b530,&DAT_10041c900,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
  puVar10 = &DAT_10054a9b8;
  FUN_1000036d0(&DAT_10054a9b8,FUN_10025ee04,&DAT_10042c428);
  *(undefined **)(lVar13 + -0x10) = puVar10;
  lVar13 = local_108;
  (extension_SwiftUI)::SwiftUI::ForEach::_init
            (local_108,puVar10,FUN_10002b4cc,puVar4,puVar5,UVar6.unknown,puVar7,puVar8,puVar9);
  puVar4 = &DAT_10041baa8;
  _swift_getKeyPath(&DAT_10041baa8);
  puVar5 = &DAT_10041bad0;
  _swift_getKeyPath(&DAT_10041bad0);
  Combine::Published::_get_subscript(&local_b8,lVar16,puVar4,puVar5);
  _swift_release(puVar4);
  _swift_release(puVar5);
  _swift_release(lVar16);
  lVar14 = *(long *)(CONCAT71(uStack_b7,local_b8) + 0x10);
  _swift_bridgeObjectRelease();
  lVar17 = local_c0;
  bVar2 = lVar14 == 0;
  if (!bVar2) {
    SwiftUI::Divider::init();
  }
  DVar11 = SwiftUI::Divider::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar11.unknown + -8) + 0x38))(lVar17,bVar2,1,DVar11.unknown);
  stringLiteral.bridgeObject = (void *)0xe300000000000000;
  stringLiteral.str = (char *)0x66664f;
  LVar12 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  puVar4 = &DAT_100525ce8;
  _swift_allocObject(&DAT_100525ce8,0x58,7);
  lVar14 = param_2[4];
  lVar19 = param_2[7];
  lVar18 = param_2[6];
  *(long *)(puVar4 + 0x38) = param_2[5];
  *(long *)(puVar4 + 0x30) = lVar14;
  *(long *)(puVar4 + 0x48) = lVar19;
  *(long *)(puVar4 + 0x40) = lVar18;
  *(long *)(puVar4 + 0x50) = param_2[8];
  lVar19 = *param_2;
  lVar18 = param_2[3];
  lVar14 = param_2[2];
  *(long *)(puVar4 + 0x18) = param_2[1];
  *(long *)(puVar4 + 0x10) = lVar19;
  *(long *)(puVar4 + 0x28) = lVar18;
  *(long *)(puVar4 + 0x20) = lVar14;
  FUN_10002b2a8(param_2,&local_b8);
  lVar18 = local_e0;
  (extension_SwiftUI)::SwiftUI::Button::_init(LVar12);
  puVar4 = &DAT_10041bb00;
  _swift_getKeyPath(&DAT_10041bb00);
  puVar5 = &DAT_10041bb28;
  _swift_getKeyPath(&DAT_10041bb28);
  Combine::Published::_get_subscript(&local_b8,lVar16,puVar4,puVar5);
  _swift_release(puVar4);
  _swift_release(puVar5);
  _swift_release(lVar16);
  puVar4 = &DAT_10041bc30;
  _swift_getKeyPath();
  puVar5 = &DAT_100525d10;
  _swift_allocObject(&DAT_100525d10,0x11,7);
  puVar7 = local_e8;
  lVar14 = local_f0;
  lVar16 = local_f8;
  puVar5[0x10] = local_b8;
  puVar1 = (undefined8 *)(lVar18 + *(int *)(local_100 + 0x24));
  *puVar1 = puVar4;
  puVar1[1] = thunk_FUN_100026d68;
  puVar1[2] = puVar5;
  pcVar15 = *(code **)(local_f8 + 0x10);
  (*pcVar15)(local_f0,lVar13,local_e8);
  lVar19 = local_d8;
  FUN_1000087e4(lVar17,local_d8,&DAT_10054b740,&DAT_10041cc10);
  puVar3 = local_c8;
  FUN_1000087e4(lVar18,local_c8,&DAT_10054b518,&DAT_10042e600);
  lVar17 = local_d0;
  (*pcVar15)(local_d0,lVar14,puVar7);
  puVar4 = &DAT_10054b750;
  FUN_100002f94(&DAT_10054b750,&DAT_10041cc20);
  FUN_1000087e4(lVar19,lVar17 + *(int *)(puVar4 + 0x30),&DAT_10054b740,&DAT_10041cc10);
  FUN_1000087e4(puVar3,lVar17 + *(int *)(puVar4 + 0x40),&DAT_10054b518,&DAT_10042e600);
  FUN_10002a29c(lVar18,&DAT_10054b518,&DAT_10042e600);
  FUN_10002a29c(local_c0,&DAT_10054b740,&DAT_10041cc10);
  pcVar15 = *(code **)(lVar16 + 8);
  (*pcVar15)(lVar13,puVar7);
  FUN_10002a29c(puVar3,&DAT_10054b518,&DAT_10042e600);
  FUN_10002a29c(lVar19,&DAT_10054b740,&DAT_10041cc10);
  (*pcVar15)(lVar14,puVar7);
  return;
}

