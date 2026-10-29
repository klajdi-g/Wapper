// rea decompile_all
// name: FUN_1002b98d4
// address: 0x1002b98d4
// body: available
// range: 0x1002b98d4-0x1002b9f0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002b9bb0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1002b98d4(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  LocalizedStringKey LVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  byte bVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar13;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  code *pcVar18;
  long lVar19;
  code *pcVar20;
  long lVar21;
  long lVar22;
  String stringLiteral;
  undefined8 uStack_e0;
  undefined2 auStack_d8 [4];
  undefined1 auStack_d0 [8];
  long local_c8;
  long *local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  undefined1 *local_98;
  long local_90;
  long local_88;
  undefined *local_80;
  undefined8 uStack_78;
  byte local_70;
  undefined8 local_68;
  
  puVar2 = &DAT_10055a3f8;
  local_a0 = param_1;
  FUN_100002f94(&DAT_10055a3f8,&DAT_10042e2c0);
  local_88 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_88 + 0x40));
  local_98 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar21 = (long)(auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lVar3 = 0;
  FUN_1002bc1b0();
  lVar19 = *(long *)(lVar3 + -8);
  lVar22 = *(long *)(lVar19 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar15 = lVar21 - (lVar22 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_10055a400;
  FUN_100002f94(&DAT_10055a400,&DAT_10042e2c8);
  local_b0 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_b0 + 0x40));
  lVar3 = lVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_a8 = lVar3;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar3 = lVar3 - extraout_x12_00;
  puVar5 = &DAT_10055a408;
  local_90 = lVar3;
  FUN_100002f94(&DAT_10055a408,&DAT_10042e2d0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar3 = lVar3 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_b8 = lVar3;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar3 = lVar3 - extraout_x12_01;
  lVar14 = *param_2;
  local_c0 = param_2;
  if (lVar14 == 0) {
    FUN_10013b98c(0);
    FUN_1000036d0(&DAT_100553150,FUN_10013b98c,&TargetProtocolConformanceDescriptor_1004274b8);
    SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
    pcVar18 = (code *)SoftwareBreakpoint(1,0x1002b9f10);
    (*pcVar18)();
  }
  puVar5 = &DAT_10042e238;
  _swift_getKeyPath(&DAT_10042e238);
  puVar6 = &DAT_10042e260;
  _swift_getKeyPath(&DAT_10042e260);
  _swift_retain(lVar14);
  Combine::Published::_get_subscript(&local_80);
  _swift_release(puVar5);
  _swift_release(puVar6);
  _swift_release(lVar14);
  lVar16 = *(long *)(local_80 + 0x10);
  _swift_bridgeObjectRelease();
  if (lVar16 == 0) {
    puVar5 = &DAT_10042e2e8;
    _swift_getKeyPath(&DAT_10042e2e8);
    puVar6 = &DAT_10042e310;
    _swift_getKeyPath();
    _swift_retain(lVar14);
    puVar8 = puVar6;
    Combine::Published::_get_subscript(&local_80);
    bVar12 = (byte)puVar8;
    _swift_release(puVar5);
    _swift_release(puVar6);
    _swift_release(lVar14);
    if ((char)local_80 == '\x01') {
      uVar11 = 0x80000001004e3f90;
      stringLiteral.bridgeObject = (void *)0x80000001004e3f90;
      stringLiteral.str = (char *)0xd000000000000017;
      LVar7 = SwiftUI::LocalizedStringKey::init(stringLiteral);
      *(undefined2 *)(lVar3 + -8) = 0x100;
      *(undefined8 *)(lVar3 + -0x10) = 0;
      local_70 = bVar12 & 1;
      local_80 = (undefined *)SwiftUI::Text::_init(LVar7);
      uStack_78 = uVar11;
      local_68 = param_5;
      (extension_SwiftUI)::SwiftUI::Section::_init
                (lVar3,local_80,FUN_1002b9f10,0,PTR___type_metadata_for_SwiftUI_Text_100522e28,
                 PTR___type_metadata_for_SwiftUI_Text_100522e28,
                 PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100522e18,
                 PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100522e18);
      uVar11 = 0;
      goto LAB_1002b9bc0;
    }
  }
  uVar11 = 1;
LAB_1002b9bc0:
  puVar5 = &DAT_10055a410;
  FUN_100002f94(&DAT_10055a410,&DAT_10042e2d8);
  local_c8 = lVar3;
  (**(code **)(*(long *)(puVar5 + -8) + 0x38))(lVar3,uVar11,1,puVar5);
  puVar5 = &DAT_10042e238;
  _swift_getKeyPath(&DAT_10042e238);
  puVar6 = &DAT_10042e260;
  _swift_getKeyPath(&DAT_10042e260);
  _swift_retain(lVar14);
  Combine::Published::_get_subscript(&local_80);
  _swift_release(puVar5);
  _swift_release(puVar6);
  _swift_release(lVar14);
  FUN_100029504(local_c0,lVar15,FUN_1002bc1b0);
  uVar13 = (ulong)*(byte *)(lVar19 + 0x50);
  uVar17 = uVar13 + 0x10 & (uVar13 ^ 0xffffffffffffffff);
  puVar5 = &DAT_100537e30;
  _swift_allocObject(&DAT_100537e30,uVar17 + lVar22,uVar13 | 7);
  FUN_100007e64(lVar15,puVar5 + uVar17,FUN_1002bc1b0);
  puVar6 = &DAT_1005545e8;
  FUN_100002f94(&DAT_1005545e8,&DAT_100427498);
  uVar11 = 0;
  FUN_1002c3644(0);
  puVar8 = &DAT_10055a418;
  FUN_1000087a0(&DAT_10055a418,&DAT_1005545e8,&DAT_100427498,
                PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100523b60);
  puVar9 = &DAT_10055a420;
  FUN_1000036d0(&DAT_10055a420,FUN_1002c3644,&TargetProtocolConformanceDescriptor_10042e3a0);
  puVar10 = &DAT_10055a428;
  FUN_1000036d0(&DAT_10055a428,FUN_100400294,&TargetProtocolConformanceDescriptor_1004371b0);
  *(undefined **)(lVar3 + -0x10) = puVar10;
  lVar19 = local_90;
  (extension_SwiftUI)::SwiftUI::ForEach::_init
            (local_90,puVar10,FUN_1002c35f8,puVar5,puVar6,
             PTR___type_metadata_for_Swift_String_100523a98,uVar11,puVar8,puVar9);
  (extension_SwiftUI)::SwiftUI::Section::_init();
  lVar14 = local_b8;
  FUN_1000087e4(lVar3,local_b8,&DAT_10055a408,&DAT_10042e2d0);
  lVar15 = local_a8;
  lVar3 = local_b0;
  pcVar18 = *(code **)(local_b0 + 0x10);
  (*pcVar18)(local_a8,lVar19,puVar4);
  puVar1 = local_98;
  pcVar20 = *(code **)(local_88 + 0x10);
  (*pcVar20)(local_98,lVar21,puVar2);
  lVar19 = local_a0;
  local_c0 = (long *)lVar21;
  FUN_1000087e4(lVar14,local_a0,&DAT_10055a408,&DAT_10042e2d0);
  puVar5 = &DAT_10055a430;
  FUN_100002f94(&DAT_10055a430,&DAT_10042e2e0);
  (*pcVar18)(lVar19 + *(int *)(puVar5 + 0x30),lVar15,puVar4);
  (*pcVar20)(lVar19 + *(int *)(puVar5 + 0x40),puVar1,puVar2);
  pcVar18 = *(code **)(local_88 + 8);
  (*pcVar18)(local_c0,puVar2);
  pcVar20 = *(code **)(lVar3 + 8);
  (*pcVar20)(local_90,puVar4);
  FUN_10002a29c(local_c8,&DAT_10055a408,&DAT_10042e2d0);
  (*pcVar18)(puVar1,puVar2);
  (*pcVar20)(lVar15,puVar4);
  FUN_10002a29c(lVar14,&DAT_10055a408,&DAT_10042e2d0);
  return;
}

