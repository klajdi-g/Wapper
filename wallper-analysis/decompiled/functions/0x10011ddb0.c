// rea decompile_all
// name: FUN_10011ddb0
// address: 0x10011ddb0
// body: available
// range: 0x10011ddb0-0x10011e1f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10011ddb0(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  undefined *puVar6;
  PlainButtonStyle PVar7;
  undefined *puVar8;
  long lVar9;
  URL UVar10;
  void *pvVar11;
  undefined *puVar12;
  undefined *puVar13;
  long extraout_x8;
  long lVar14;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar15;
  long lVar16;
  long lVar17;
  undefined8 auStack_d0 [2];
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  undefined8 *local_80;
  String local_70;
  
  puVar6 = &DAT_100553568;
  local_a0 = param_1;
  FUN_100002f94(&DAT_100553568,&DAT_1004265a8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar14 = (long)&local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_98 = lVar14;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = lVar14 - extraout_x12;
  local_a8 = lVar14;
  PVar7 = SwiftUI::PlainButtonStyle::typeMetadataAccessor();
  local_b8 = *(long *)(PVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_b8 + 0x40));
  lVar14 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100553570;
  FUN_100002f94(&DAT_100553570,&DAT_1004265b0);
  local_c0 = *(long *)(puVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_c0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = &DAT_100553578;
  FUN_100002f94(&DAT_100553578,&DAT_1004265b8);
  local_b0 = *(long *)(puVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_b0 + 0x40));
  lVar16 = (lVar14 - extraout_x8_01) - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = lVar16 - extraout_x12_00;
  lVar9 = 0;
  FUN_10011c000();
  if (*(long *)((long)param_2 + (long)*(int *)(lVar9 + 0x1c)) == 0) {
    FUN_100279594(0);
    FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
    SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x10011e1f8);
    (*pcVar15)();
  }
  UVar10.unknown = (undefined *)0x0;
  FUN_10040211c();
  local_70 = Foundation::URL::get_lastPathComponent(UVar10);
  uVar1 = (ulong)local_70.str & 0xffffffffffff;
  if (((ulong)local_70.bridgeObject & 0x2000000000000000) != 0) {
    uVar1 = (ulong)local_70.bridgeObject >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    _swift_bridgeObjectRelease();
    pcVar2 = (char *)*param_2;
    pvVar11 = (void *)param_2[1];
    _swift_bridgeObjectRetain();
    local_70.bridgeObject = pvVar11;
    local_70.str = pcVar2;
  }
  local_80 = param_2;
  FUN_100002f94(&DAT_100553580,&DAT_1004265c0);
  FUN_100121bbc();
  *(undefined **)(lVar17 + -0x10) =
       PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100523aa8;
  (extension_SwiftUI)::SwiftUI::NavigationLink::_init();
  SwiftUI::PlainButtonStyle::init();
  puVar12 = &DAT_1005535b0;
  FUN_1000087a0(&DAT_1005535b0,&DAT_100553570,&DAT_1004265b0,
                PTR_SwiftUI__SwiftUI__NavigationLink<undefined,undefined>_>SwiftUI__View_100522118);
  puVar13 = &DAT_10054a8b0;
  FUN_1000036d0(&DAT_10054a8b0,PTR_typeMetadataAccessor_100522380,
                PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100522370);
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle
            (lVar17,lVar14,puVar6,PVar7.unknown,puVar12,puVar13);
  (**(code **)(local_b8 + 8))(lVar14,PVar7.unknown);
  (**(code **)(local_c0 + 8))(lVar14 - extraout_x8_01,puVar6);
  lVar14 = local_a8;
  bVar5 = *(char *)((long)param_2 + (long)*(int *)(lVar9 + 0x18)) != '\x01';
  if (!bVar5) {
    FUN_10011ed2c(local_a8);
  }
  puVar6 = &DAT_1005535b8;
  FUN_100002f94(&DAT_1005535b8,&DAT_1004265d8);
  (**(code **)(*(long *)(puVar6 + -8) + 0x38))(lVar14,bVar5,1,puVar6);
  lVar9 = local_b0;
  pcVar15 = *(code **)(local_b0 + 0x10);
  (*pcVar15)(lVar16,lVar17,puVar8);
  lVar4 = local_98;
  FUN_1000087e4(lVar14,local_98,&DAT_100553568,&DAT_1004265a8);
  lVar3 = local_a0;
  (*pcVar15)(local_a0,lVar16,puVar8);
  puVar6 = &DAT_1005535c0;
  FUN_100002f94(&DAT_1005535c0,&DAT_1004265e0);
  FUN_1000087e4(lVar4,lVar3 + *(int *)(puVar6 + 0x30),&DAT_100553568,&DAT_1004265a8);
  FUN_10002a29c(lVar14,&DAT_100553568,&DAT_1004265a8);
  pcVar15 = *(code **)(lVar9 + 8);
  (*pcVar15)(lVar17,puVar8);
  FUN_10002a29c(lVar4,&DAT_100553568,&DAT_1004265a8);
  (*pcVar15)(lVar16,puVar8);
  return;
}

