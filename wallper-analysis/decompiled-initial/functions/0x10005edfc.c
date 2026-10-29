// rea decompile_all
// name: FUN_10005edfc
// address: 0x10005edfc
// body: available
// range: 0x10005edfc-0x10005f44f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010005f244 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10005edfc(undefined8 *param_1,CGFloat param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,Color param_6)

{
  undefined4 uVar1;
  code *pcVar2;
  Design DVar3;
  UUID UVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  Text TVar8;
  Font FVar9;
  Text TVar10;
  Color CVar11;
  Text TVar12;
  Color CVar13;
  Color CVar14;
  Text TVar15;
  Text TVar16;
  undefined *puVar17;
  undefined *puVar18;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined *puVar22;
  undefined *puVar23;
  long lVar24;
  long lVar25;
  code *apcStack_c0 [2];
  long lStack_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined4 local_94;
  undefined *local_90;
  undefined *puStack_88;
  long local_80;
  undefined8 *local_78;
  undefined *local_70;
  undefined *puStack_68;
  
  puVar23 = &DAT_10054a828;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar23 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar25 = (long)apcStack_c0 - extraout_x8;
  puVar23 = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar23 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = lVar25 - extraout_x8_00;
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  lVar19 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar19 + 0x40));
  lVar24 = lVar20 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar23 = &DAT_10054ac38;
  FUN_100002f94(&DAT_10054ac38,&DAT_10041e8e0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar23 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar23 = (undefined *)(lVar24 - extraout_x8_02);
  puVar22 = *(undefined **)(param_3 + 0x40);
  local_80 = param_3;
  if (puVar22 == (undefined *)0x0) {
    FUN_1001b7378(0);
    FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
    SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10005f450);
    (*pcVar2)();
  }
  puVar5 = &DAT_10041ee68;
  _swift_getKeyPath(&DAT_10041ee68);
  puVar6 = &DAT_10041ee90;
  _swift_getKeyPath(&DAT_10041ee90);
  _swift_retain(puVar22);
  Combine::Published::_get_subscript(&local_70);
  _swift_release(puVar5);
  _swift_release(puVar6);
  puVar5 = puVar22;
  _swift_release();
  local_78 = param_1;
  if (((byte)local_70 & 1) == 0) {
    puVar5 = &DAT_10041ef10;
    _swift_getKeyPath(&DAT_10041ef10);
    puVar6 = &DAT_10041ef38;
    _swift_getKeyPath(&DAT_10041ef38);
    _swift_retain(puVar22);
    Combine::Published::_get_subscript(lVar20);
    _swift_release(puVar5);
    _swift_release(puVar6);
    lVar7 = lVar20;
    (**(code **)(lVar19 + 0x30))(lVar20,1,UVar4.unknown);
    if ((int)lVar7 == 1) {
      _swift_release(puVar22);
      FUN_10002a29c(lVar20,&DAT_10054a9c8,&DAT_10041bbe0);
      param_6.unknown = (undefined *)0x0;
      FUN_10025ee04();
      (**(code **)(*(long *)(param_6.unknown + -8) + 0x38))(puVar23,1,1);
    }
    else {
      (**(code **)(lVar19 + 0x20))(lVar24,lVar20,UVar4.unknown);
      FUN_1001b6e74(puVar23,lVar24);
      _swift_release(puVar22);
      (**(code **)(lVar19 + 8))(lVar24,UVar4.unknown);
      lVar19 = 0;
      FUN_10025ee04();
      puVar22 = puVar23;
      (**(code **)(*(long *)(lVar19 + -8) + 0x30))(puVar23,1,lVar19);
      if ((int)puVar22 != 1) {
        puVar22 = *(undefined **)(puVar23 + *(int *)(lVar19 + 0x14));
        uVar21 = *(undefined8 *)((long)(puVar23 + *(int *)(lVar19 + 0x14)) + 8);
        _swift_bridgeObjectRetain(uVar21);
        FUN_100029548(puVar23,FUN_10025ee04);
        goto LAB_10005f0ec;
      }
    }
    FUN_10002a29c(puVar23,&DAT_10054ac38,&DAT_10041e8e0);
    uVar21 = 0xe500000000000000;
    puVar22 = (undefined *)0x64656b694c;
  }
  else {
    uVar21 = 0xe300000000000000;
    puVar22 = (undefined *)0x66664f;
    puVar23 = puVar5;
  }
LAB_10005f0ec:
  local_70 = puVar22;
  puStack_68 = (undefined *)uVar21;
  FUN_100026df4();
  puVar22 = PTR___type_metadata_for_Swift_String_100523a98;
  local_a0 = puVar23;
  TVar8 = SwiftUI::Text::_init();
  SwiftUI::Font::Weight::get_semibold((Weight)TVar8.unknown);
  DVar3 = SwiftUI::Font::Design::typeMetadataAccessor();
  lStack_b0 = CONCAT71((int7)((ulong)TVar8.unknown >> 8),DVar3.value);
  apcStack_c0[1] = *(code **)(*(long *)(lStack_b0 + -8) + 0x38);
  (*apcStack_c0[1])(lVar25,1,1,lStack_b0);
  FVar9 = SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(lVar25,&DAT_10054a828,&DAT_10041e3c0);
  TVar16 = TVar8;
  puVar5 = puVar22;
  puVar6 = puVar23;
  TVar10 = SwiftUI::Text::_font(FVar9.unknown);
  _swift_release(FVar9.unknown);
  FUN_100025b34(TVar8.unknown,puVar22,puVar23);
  _swift_bridgeObjectRelease();
  CVar11 = SwiftUI::Color::get_white(param_6);
  CVar13 = CVar11;
  local_70 = CVar11.unknown;
  FUN_100028d58();
  TVar8 = TVar10;
  puVar23 = TVar16.unknown;
  CVar14.unknown = puVar5;
  local_a8 = CVar13.unknown;
  puStack_88 = (undefined *)SwiftUI::Text::_foregroundStyle();
  local_94 = SUB84(puVar23,0);
  local_90 = CVar14.unknown;
  FUN_100025b34(TVar10.unknown,TVar16.unknown,puVar5);
  _swift_release(CVar11.unknown);
  _swift_bridgeObjectRelease();
  FUN_10005d6e4();
  puVar23 = PTR___type_metadata_for_Swift_String_100523a98;
  puVar22 = local_a0;
  local_70 = puVar6;
  puStack_68 = TVar16.unknown;
  TVar10 = SwiftUI::Text::_init(puVar6,PTR___type_metadata_for_Swift_String_100523a98,local_a0);
  (*apcStack_c0[1])(lVar25,1,1,lStack_b0);
  FVar9 = SwiftUI::Font::_system((CGFloat)0x0,(Font)0x1);
  FUN_10002a29c(lVar25,&DAT_10054a828,&DAT_10041e3c0);
  TVar16 = TVar10;
  puVar5 = puVar23;
  puVar17 = puVar22;
  TVar12 = SwiftUI::Text::_font(FVar9.unknown);
  _swift_release(FVar9.unknown);
  FUN_100025b34(TVar10.unknown,puVar23,puVar22);
  _swift_bridgeObjectRelease();
  CVar13 = SwiftUI::Color::get_white(CVar14);
  CVar14 = SwiftUI::Color::opacity(0.55,CVar13);
  _swift_release(CVar13.unknown);
  TVar10 = TVar12;
  puVar6 = TVar16.unknown;
  puVar18 = puVar5;
  local_70 = CVar14.unknown;
  TVar15 = SwiftUI::Text::_foregroundStyle();
  FUN_100025b34(TVar12.unknown,TVar16.unknown,puVar5);
  _swift_release(CVar14.unknown);
  _swift_bridgeObjectRelease(puVar17);
  puVar22 = puStack_88;
  puVar23 = local_90;
  uVar1 = local_94;
  *local_78 = puStack_88;
  local_78[1] = TVar8.unknown;
  *(char *)(local_78 + 2) = (char)local_94;
  local_78[3] = local_90;
  local_78[4] = TVar15.unknown;
  local_78[5] = TVar10.unknown;
  *(char *)(local_78 + 6) = (char)puVar6;
  local_78[7] = puVar18;
  FUN_100007b14(puStack_88,TVar8.unknown,local_94);
  _swift_bridgeObjectRetain(puVar23);
  FUN_100007b14(TVar15.unknown,TVar10.unknown,puVar6);
  _swift_bridgeObjectRetain(puVar18);
  FUN_100025b34(TVar15.unknown,TVar10.unknown,puVar6);
  _swift_bridgeObjectRelease(puVar18);
  FUN_100025b34(puVar22,TVar8.unknown,uVar1);
  _swift_bridgeObjectRelease(puVar23);
  return;
}

