// rea decompile_all
// name: FUN_1003d3f04
// address: 0x1003d3f04
// body: available
// range: 0x1003d3f04-0x1003d4a07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003d3f04(long param_1)

{
  long *plVar1;
  char *pcVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  URL UVar8;
  void *pvVar9;
  Divider DVar10;
  ButtonRole BVar11;
  long extraout_x8;
  long extraout_x8_00;
  long lVar12;
  long lVar13;
  long extraout_x8_01;
  long lVar14;
  long lVar15;
  long extraout_x8_02;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long lVar23;
  code *pcVar24;
  undefined8 *unaff_x20;
  long lVar25;
  code *pcVar26;
  ulong uVar27;
  ulong uVar28;
  long lVar29;
  code *pcVar30;
  long lVar31;
  undefined1 auStack_160 [8];
  long local_158;
  long local_150;
  ulong local_148;
  undefined *local_140;
  String local_138;
  undefined *local_128;
  undefined *local_120;
  long local_118;
  long local_110;
  undefined *local_108;
  undefined *puStack_100;
  ulong local_f8;
  long local_f0;
  long local_e8;
  undefined1 *local_e0;
  
  puVar5 = &DAT_10054dee8;
  local_118 = param_1;
  FUN_100002f94(&DAT_10054dee8,&DAT_10041ed20);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100560a10;
  local_e0 = auStack_160 + -extraout_x8;
  FUN_100002f94(&DAT_100560a10,&DAT_1004365a8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar16 = (long)(auStack_160 + -extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_110 = lVar16;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar16 = lVar16 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = lVar16 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = lVar17 - extraout_x12_01;
  local_120 = (undefined *)SwiftUI::Divider::typeMetadataAccessor();
  lVar13 = *(long *)(local_120 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar13 + 0x40));
  lVar18 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar19 = lVar18 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar20 = lVar19 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = lVar20 - extraout_x12_04;
  puVar5 = (undefined *)0x0;
  FUN_1003e4bc8();
  lVar23 = *(long *)(puVar5 + -8);
  lVar25 = *(long *)(lVar23 + 0x40);
  local_140 = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar29 = lVar14 - (lVar25 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100553210;
  FUN_100002f94(&DAT_100553210,&DAT_1004365b0);
  lVar15 = *(long *)(puVar5 + -8);
  local_128 = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar15 + 0x40));
  lVar21 = lVar29 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar22 = lVar21 - extraout_x12_05;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar31 = lVar22 - extraout_x12_06;
  (*(code *)PTR____chkstk_darwin_100521118)();
  FUN_100029504();
  uVar27 = (ulong)*(byte *)(lVar23 + 0x50);
  uVar28 = uVar27 + 0x10 & (uVar27 ^ 0xffffffffffffffff);
  puVar5 = &DAT_10053de88;
  _swift_allocObject(&DAT_10053de88,uVar28 + lVar25,uVar27 | 7);
  FUN_100007e64(lVar29,puVar5 + uVar28,FUN_1003e4bc8);
  puVar5 = &DAT_10054b570;
  FUN_100002f94(&DAT_10054b570,&DAT_100433140);
  puVar6 = &DAT_10054b568;
  FUN_1000087a0(&DAT_10054b568,&DAT_10054b570,&DAT_100433140,
                PTR_SwiftUI__SwiftUI__Label<undefined,undefined>_>SwiftUI__View_100523358);
  SwiftUI::Button::_init();
  SwiftUI::Divider::init();
  FUN_100029504(unaff_x20,lVar29,FUN_1003e4bc8);
  puVar7 = &DAT_10053deb0;
  local_f8 = uVar27;
  local_f0 = lVar25;
  _swift_allocObject(&DAT_10053deb0,uVar28 + lVar25,uVar27 | 7);
  local_148 = uVar28;
  local_e8 = lVar29;
  FUN_100007e64(lVar29,puVar7 + uVar28,FUN_1003e4bc8);
  puVar7 = local_140;
  local_108 = puVar6;
  puStack_100 = puVar5;
  SwiftUI::Button::_init();
  SwiftUI::Divider::init();
  if (*(long *)((long)unaff_x20 + (long)*(int *)(puVar7 + 0x30)) == 0) {
    FUN_100279594(0);
    FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
    SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
    pcVar24 = (code *)SoftwareBreakpoint(1,0x1003d4a08);
    (*pcVar24)();
  }
  UVar8.unknown = (undefined *)0x0;
  FUN_10040211c();
  local_138 = Foundation::URL::get_lastPathComponent(UVar8);
  uVar27 = (ulong)local_138.str & 0xffffffffffff;
  if (((ulong)local_138.bridgeObject & 0x2000000000000000) != 0) {
    uVar27 = (ulong)local_138.bridgeObject >> 0x38 & 0xf;
  }
  if (uVar27 == 0) {
    _swift_bridgeObjectRelease();
    pcVar2 = (char *)*unaff_x20;
    pvVar9 = (void *)unaff_x20[1];
    _swift_bridgeObjectRetain();
    local_138.bridgeObject = pvVar9;
    local_138.str = pcVar2;
  }
  uVar27 = local_f8;
  plVar1 = (long *)((long)unaff_x20 + (long)*(int *)(puVar7 + 0x2c));
  lVar23 = *plVar1;
  puVar6 = local_120;
  puVar5 = local_128;
  if (lVar23 != 0) {
    uVar28 = ~local_f8;
    lVar29 = plVar1[1];
    _swift_retain(lVar29);
    DVar10 = SwiftUI::Divider::init();
    puVar4 = local_e0;
    SwiftUI::ButtonRole::get_destructive((ButtonRole)DVar10.unknown);
    BVar11 = SwiftUI::ButtonRole::typeMetadataAccessor();
    (**(code **)(*(long *)(BVar11.unknown + -8) + 0x38))(puVar4,0,1,BVar11.unknown);
    lVar25 = local_e8;
    local_140 = UVar8.unknown;
    FUN_100029504(unaff_x20,local_e8);
    uVar28 = uVar27 + 0x20 & uVar28;
    puVar5 = &DAT_10053df00;
    _swift_allocObject(&DAT_10053df00,uVar28 + local_f0,uVar27 | 7);
    *(long *)(puVar5 + 0x10) = lVar23;
    *(long *)(puVar5 + 0x18) = lVar29;
    local_150 = lVar29;
    FUN_100007e64(lVar25,puVar5 + uVar28,FUN_1003e4bc8);
    _swift_retain(lVar29);
    SwiftUI::Button::_init();
    puVar6 = local_120;
    pcVar24 = *(code **)(lVar13 + 0x10);
    local_158 = lVar23;
    (*pcVar24)(lVar18,lVar19,local_120);
    puVar5 = local_128;
    pcVar26 = *(code **)(lVar15 + 0x10);
    (*pcVar26)(lVar21,lVar22,local_128);
    (*pcVar24)(lVar12,lVar18,puVar6);
    puVar7 = &DAT_100560a28;
    FUN_100002f94(&DAT_100560a28,&DAT_1004365d0);
    (*pcVar26)(lVar12 + *(int *)(puVar7 + 0x30),lVar21,puVar5);
    FUN_10002f6dc(local_158,local_150);
    UVar8.unknown = local_140;
    pcVar24 = *(code **)(lVar15 + 8);
    (*pcVar24)(lVar22,puVar5);
    pcVar26 = *(code **)(lVar13 + 8);
    (*pcVar26)(lVar19,puVar6);
    (*pcVar24)(lVar21,puVar5);
    (*pcVar26)(lVar18,puVar6);
  }
  puVar7 = &DAT_100560a18;
  FUN_100002f94(&DAT_100560a18,&DAT_1004365c0);
  (**(code **)(*(long *)(puVar7 + -8) + 0x38))(lVar12,lVar23 == 0,1,puVar7);
  if (*(char *)((long)unaff_x20 + (long)*(int *)(UVar8.unknown + 0x40)) == '\x01') {
    DVar10 = SwiftUI::Divider::init();
    puVar4 = local_e0;
    SwiftUI::ButtonRole::get_destructive((ButtonRole)DVar10.unknown);
    BVar11 = SwiftUI::ButtonRole::typeMetadataAccessor();
    (**(code **)(*(long *)(BVar11.unknown + -8) + 0x38))(puVar4,0,1,BVar11.unknown);
    lVar23 = local_e8;
    FUN_100029504(unaff_x20,local_e8,FUN_1003e4bc8);
    uVar27 = local_148;
    puVar7 = &DAT_10053ded8;
    _swift_allocObject(&DAT_10053ded8,local_148 + local_f0,local_f8 | 7);
    FUN_100007e64(lVar23,puVar7 + uVar27,FUN_1003e4bc8);
    SwiftUI::Button::_init();
    pcVar26 = *(code **)(lVar13 + 0x10);
    (*pcVar26)(lVar18,lVar19,puVar6);
    pcVar24 = *(code **)(lVar15 + 0x10);
    (*pcVar24)(lVar21,lVar22,puVar5);
    (*pcVar26)(lVar17,lVar18,puVar6);
    puVar7 = &DAT_100560a28;
    FUN_100002f94(&DAT_100560a28,&DAT_1004365d0);
    (*pcVar24)(lVar17 + *(int *)(puVar7 + 0x30),lVar21,puVar5);
    pcVar30 = *(code **)(lVar15 + 8);
    (*pcVar30)(lVar22,puVar5);
    pcVar26 = *(code **)(lVar13 + 8);
    (*pcVar26)(lVar19,puVar6);
    (*pcVar30)(lVar21,puVar5);
    (*pcVar26)(lVar18,puVar6);
    puVar7 = &DAT_100560a18;
    FUN_100002f94(&DAT_100560a18,&DAT_1004365c0);
    (**(code **)(*(long *)(puVar7 + -8) + 0x38))(lVar17,0,1,puVar7);
  }
  else {
    puVar7 = &DAT_100560a18;
    FUN_100002f94(&DAT_100560a18,&DAT_1004365c0);
    (**(code **)(*(long *)(puVar7 + -8) + 0x38))(lVar17,1,1,puVar7);
    pcVar24 = *(code **)(lVar15 + 0x10);
  }
  (*pcVar24)(lVar22,lVar31 - extraout_x12_07,puVar5);
  pcVar26 = *(code **)(lVar13 + 0x10);
  (*pcVar26)(lVar19,lVar14,puVar6);
  (*pcVar24)(lVar21,lVar31,puVar5);
  (*pcVar26)(lVar18,lVar20,puVar6);
  FUN_1000087e4(lVar12,lVar16,&DAT_100560a10,&DAT_1004365a8);
  lVar25 = local_110;
  FUN_1000087e4(lVar17,local_110,&DAT_100560a10,&DAT_1004365a8);
  lVar23 = local_118;
  (*pcVar24)(local_118,lVar22,puVar5);
  puVar7 = &DAT_100560a20;
  FUN_100002f94(&DAT_100560a20,&DAT_1004365c8);
  (*pcVar26)(lVar23 + *(int *)(puVar7 + 0x30),lVar19,puVar6);
  (*pcVar24)(lVar23 + *(int *)(puVar7 + 0x40),lVar21,puVar5);
  (*pcVar26)(lVar23 + *(int *)(puVar7 + 0x50),lVar18,puVar6);
  iVar3 = *(int *)(puVar7 + 0x60);
  pvVar9 = local_138.bridgeObject;
  *(undefined8 *)(lVar23 + iVar3) = local_138.str;
  ((undefined8 *)(lVar23 + iVar3))[1] = local_138.bridgeObject;
  FUN_1000087e4(lVar16,lVar23 + *(int *)(puVar7 + 0x70),&DAT_100560a10,&DAT_1004365a8);
  FUN_1000087e4(lVar25,lVar23 + *(int *)(puVar7 + 0x80),&DAT_100560a10,&DAT_1004365a8);
  _swift_bridgeObjectRetain(pvVar9);
  FUN_10002a29c(lVar17,&DAT_100560a10,&DAT_1004365a8);
  FUN_10002a29c(lVar12,&DAT_100560a10,&DAT_1004365a8);
  pcVar24 = *(code **)(lVar13 + 8);
  (*pcVar24)(lVar20,puVar6);
  pcVar26 = *(code **)(lVar15 + 8);
  (*pcVar26)(lVar31,puVar5);
  (*pcVar24)(lVar14,puVar6);
  (*pcVar26)(lVar31 - extraout_x12_07,puVar5);
  FUN_10002a29c(lVar25,&DAT_100560a10,&DAT_1004365a8);
  FUN_10002a29c(lVar16,&DAT_100560a10,&DAT_1004365a8);
  _swift_bridgeObjectRelease(pvVar9);
  (*pcVar24)(lVar18,puVar6);
  (*pcVar26)(lVar21,puVar5);
  (*pcVar24)(lVar19,puVar6);
  (*pcVar26)(lVar22,puVar5);
  return;
}

