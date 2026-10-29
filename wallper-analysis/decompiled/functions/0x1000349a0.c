// rea decompile_all
// name: FUN_1000349a0
// address: 0x1000349a0
// body: available
// range: 0x1000349a0-0x100034f57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000349a0(long param_1,undefined8 *param_2)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  URL UVar7;
  void *pvVar8;
  long extraout_x8;
  long lVar9;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar10;
  ulong uVar11;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar12;
  long lVar13;
  code *pcVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 auStack_110 [2];
  undefined1 auStack_100 [8];
  long local_f8;
  undefined *local_f0;
  long local_e8;
  long local_e0;
  undefined1 *local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  undefined *local_b8;
  undefined *local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  undefined *local_90;
  long local_88;
  String local_80;
  undefined8 *local_70;
  
  lVar4 = 0;
  local_88 = param_1;
  FUN_100030a44();
  local_e8 = *(long *)(lVar4 + -8);
  lVar17 = *(long *)(local_e8 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar5 = &DAT_10054ba88;
  local_d8 = auStack_100 + -(lVar17 + 0xfU & 0xfffffffffffffff0);
  FUN_100002f94(&DAT_10054ba88,&DAT_10041d178);
  local_c8 = *(long *)(puVar5 + -8);
  local_b0 = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_c8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)(auStack_100 + -(lVar17 + 0xfU & 0xfffffffffffffff0)) - extraout_x8;
  puVar5 = &DAT_10054ba90;
  local_d0 = lVar9;
  FUN_100002f94(&DAT_10054ba90,&DAT_10041d180);
  local_b8 = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar9 - extraout_x8_00;
  puVar5 = &DAT_10054ba98;
  local_c0 = lVar9;
  FUN_100002f94(&DAT_10054ba98,&DAT_10041d188);
  local_a0 = *(long *)(puVar5 + -8);
  local_90 = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_a0 + 0x40));
  lVar9 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_98 = lVar9;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar9 = lVar9 - extraout_x12;
  puVar5 = &DAT_10054baa0;
  local_a8 = lVar9;
  FUN_100002f94(&DAT_10054baa0,&DAT_10041d190);
  lVar13 = *(long *)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar9 - extraout_x8_02;
  puVar6 = &DAT_10054baa8;
  FUN_100002f94(&DAT_10054baa8,&DAT_10041d198);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = lVar9 - extraout_x8_03;
  puVar6 = &DAT_10054bab0;
  FUN_100002f94(&DAT_10054bab0,&DAT_10041d1a0);
  local_e0 = *(long *)(puVar6 + -8);
  local_f0 = puVar6;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_e0 + 0x40));
  lVar18 = lVar16 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = lVar18 - extraout_x12_00;
  if (*(long *)((long)param_2 + (long)*(int *)(lVar4 + 0x14)) != 0) {
    UVar7.unknown = (undefined *)0x0;
    FUN_10040211c();
    local_80 = Foundation::URL::get_lastPathComponent(UVar7);
    uVar11 = (ulong)local_80.str & 0xffffffffffff;
    if (((ulong)local_80.bridgeObject & 0x2000000000000000) != 0) {
      uVar11 = (ulong)local_80.bridgeObject >> 0x38 & 0xf;
    }
    if (uVar11 == 0) {
      _swift_bridgeObjectRelease();
      pcVar1 = (char *)*param_2;
      pvVar8 = (void *)param_2[1];
      _swift_bridgeObjectRetain();
      local_80.bridgeObject = pvVar8;
      local_80.str = pcVar1;
    }
    FUN_100002f94(&DAT_10054bab8,&DAT_10041d1a8);
    FUN_100036dd4();
    *(undefined **)(lVar10 + -0x10) =
         PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100523aa8;
    (extension_SwiftUI)::SwiftUI::NavigationLink::_init();
    FUN_10034d1a4(lVar16);
    (**(code **)(lVar13 + 8))(lVar9,puVar5);
    FUN_1000372f4(&DAT_10054bae8,&DAT_10054baa8,&DAT_10041d198,FUN_100036ee4);
    FUN_100037164();
    local_f8 = lVar10;
    (extension_SwiftUI)::SwiftUI::View::_buttonStyle(lVar10);
    FUN_10002a29c(lVar16,&DAT_10054baa8,&DAT_10041d198);
    puVar2 = local_d8;
    FUN_100029504(param_2,local_d8,FUN_100030a44);
    uVar11 = (ulong)*(byte *)(local_e8 + 0x50);
    uVar15 = uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff);
    puVar5 = &DAT_100526138;
    _swift_allocObject(&DAT_100526138,uVar15 + lVar17,uVar11 | 7);
    FUN_100007e64(puVar2,puVar5 + uVar15,FUN_100030a44);
    local_70 = param_2;
    FUN_100002f94(&DAT_10054bb40,&DAT_10041d200);
    FUN_1000371e4();
    lVar4 = local_d0;
    SwiftUI::Button::_init();
    lVar9 = local_c0;
    FUN_10034d8dc(local_c0);
    (**(code **)(local_c8 + 8))(lVar4,local_b0);
    FUN_1000372f4(&DAT_10054bb70,&DAT_10054ba90,&DAT_10041d180,FUN_100037364);
    lVar13 = local_a8;
    (extension_SwiftUI)::SwiftUI::View::_buttonStyle(local_a8);
    FUN_10002a29c(lVar9,&DAT_10054ba90,&DAT_10041d180);
    lVar4 = local_e0;
    puVar6 = local_f0;
    pcVar12 = *(code **)(local_e0 + 0x10);
    (*pcVar12)(lVar18,lVar10,local_f0);
    puVar3 = local_90;
    lVar10 = local_98;
    lVar9 = local_a0;
    pcVar14 = *(code **)(local_a0 + 0x10);
    (*pcVar14)(local_98,lVar13,local_90);
    lVar16 = local_88;
    (*pcVar12)(local_88,lVar18,puVar6);
    puVar5 = &DAT_10054bbc0;
    FUN_100002f94(&DAT_10054bbc0,&DAT_10041d238);
    (*pcVar14)(lVar16 + *(int *)(puVar5 + 0x30),lVar10,puVar3);
    pcVar12 = *(code **)(lVar9 + 8);
    (*pcVar12)(lVar13,puVar3);
    pcVar14 = *(code **)(lVar4 + 8);
    (*pcVar14)(local_f8,puVar6);
    (*pcVar12)(lVar10,puVar3);
    (*pcVar14)(lVar18,puVar6);
    return;
  }
  FUN_100279594(0);
  FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x100034f58);
  (*pcVar12)();
}

