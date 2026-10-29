// rea decompile_all
// name: FUN_10005fefc
// address: 0x10005fefc
// body: available
// range: 0x10005fefc-0x10006081b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000606a0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10005fefc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  Color CVar8;
  ulong uVar9;
  UUID UVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  long extraout_x8;
  long lVar17;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar18;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  Color CVar19;
  code *pcVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  code *pcVar26;
  undefined8 auStack_170 [2];
  undefined *local_160;
  undefined *local_158;
  undefined *local_150;
  undefined *local_148;
  long local_140;
  long local_138;
  long local_130;
  undefined *local_128;
  long local_120;
  long local_118;
  undefined *local_110;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  undefined *local_e0;
  long local_d8;
  undefined *local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  undefined *local_a0;
  undefined *puStack_98;
  undefined **local_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined8 local_78;
  byte local_70;
  
  puVar4 = &DAT_10054e0f0;
  local_f0 = param_1;
  FUN_100002f94(&DAT_10054e0f0,&DAT_10041f028);
  local_f8 = *(long *)(puVar4 + -8);
  local_e0 = puVar4;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_f8 + 0x40));
  lVar17 = (long)&local_160 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_e8 = lVar17;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = lVar17 - extraout_x12;
  puVar4 = &DAT_10054e0f8;
  local_100 = lVar17;
  FUN_100002f94(&DAT_10054e0f8,&DAT_10041f030);
  local_128 = *(undefined **)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)((long)local_128 + 0x40) + 0xfU & 0xfffffffffffffff0);
  CVar19.unknown = (undefined *)(lVar17 - extraout_x8_00);
  puVar5 = &DAT_10054e100;
  FUN_100002f94(&DAT_10054e100,&DAT_10041f038);
  local_138 = *(long *)(puVar5 + -8);
  local_d0 = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_138 + 0x40));
  lVar18 = (long)CVar19.unknown - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_120 = lVar18;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = lVar18 - extraout_x12_00;
  lVar17 = 0;
  local_140 = lVar18;
  FUN_10006866c();
  lVar24 = *(long *)(lVar17 + -8);
  lVar22 = *(long *)(lVar24 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = lVar18 - (lVar22 + 0xfU & 0xfffffffffffffff0);
  local_118 = lVar18;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = lVar18 - extraout_x12_01;
  local_130 = lVar18;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = lVar18 - extraout_x12_02;
  puVar5 = &DAT_10054e108;
  FUN_100002f94(&DAT_10054e108,&DAT_10041f040);
  local_110 = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar17 = lVar18 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_108 = lVar17;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = lVar17 - extraout_x12_03;
  local_c0 = lVar17;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = lVar17 - extraout_x12_04;
  local_b0 = lVar17;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = lVar17 - extraout_x12_05;
  uVar21 = *(ulong *)(param_2 + 0x40);
  local_b8 = lVar17;
  if (uVar21 != 0) {
    puVar5 = &DAT_10041ee68;
    _swift_getKeyPath(&DAT_10041ee68);
    puVar6 = &DAT_10041ee90;
    _swift_getKeyPath(&DAT_10041ee90);
    _swift_retain(uVar21);
    Combine::Published::_get_subscript(&local_a0);
    _swift_release(puVar5);
    _swift_release(puVar6);
    _swift_release(uVar21);
    puVar11 = local_a0;
    uVar3 = local_a0._0_1_;
    local_c8 = param_2;
    FUN_100029504(param_2,lVar18,FUN_10006866c);
    uVar25 = (ulong)*(byte *)(lVar24 + 0x50);
    uVar23 = uVar25 + 0x10 & (uVar25 ^ 0xffffffffffffffff);
    puVar5 = &DAT_100527338;
    local_d8 = lVar22;
    _swift_allocObject(&DAT_100527338,uVar23 + lVar22,uVar25 | 7);
    FUN_100007e64(lVar18,puVar5 + uVar23,FUN_10006866c);
    local_90 = (undefined **)0x6b72616d78;
    puStack_88 = (undefined *)0xe500000000000000;
    local_80 = 0x66664f;
    local_78 = 0xe300000000000000;
    local_70 = uVar3;
    _swift_retain(puVar5);
    puVar6 = &DAT_10054e110;
    FUN_100002f94(&DAT_10054e110,&DAT_10041f048);
    puVar7 = puVar6;
    FUN_100069704();
    local_150 = puVar7;
    local_148 = puVar6;
    SwiftUI::Button::_init();
    local_a0 = (undefined *)CONCAT71(local_a0._1_7_,uVar3);
    puVar6 = &DAT_10054e160;
    FUN_1000087a0(&DAT_10054e160,&DAT_10054e0f8,&DAT_10041f030,
                  PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
    puVar7 = puVar6;
    FUN_100003038();
    lVar18 = local_140;
    local_160 = puVar7;
    local_158 = puVar6;
    (extension_SwiftUI)::SwiftUI::View::_buttonStyle
              (local_140,&local_a0,puVar4,&DAT_100525378,puVar6);
    pcVar26 = *(code **)((long)local_128 + 8);
    CVar8.unknown = CVar19.unknown;
    local_128 = puVar4;
    (*pcVar26)();
    if (((ulong)puVar11 & 1) == 0) {
      CVar8.unknown = (undefined *)0x0;
    }
    else {
      CVar8 = SwiftUI::Color::get_accentColor(CVar8);
    }
    FUN_100357f84(local_b8,CVar8.unknown);
    _swift_release(puVar5);
    _swift_release(CVar8.unknown);
    pcVar20 = *(code **)(local_138 + 8);
    (*pcVar20)(lVar18,local_d0);
    uVar9 = uVar21;
    _swift_retain();
    FUN_1001b460c();
    _swift_release(uVar21);
    lVar18 = local_130;
    FUN_100029504(local_c8,local_130,FUN_10006866c);
    puVar4 = &DAT_100527360;
    _swift_allocObject(&DAT_100527360,uVar23 + local_d8,uVar25 | 7);
    FUN_100007e64(lVar18,puVar4 + uVar23,FUN_10006866c);
    local_90 = (undefined **)0x69662e7472616568;
    puStack_88 = (undefined *)0xea00000000006c6c;
    local_80 = 0x64656b694c;
    local_78 = 0xe500000000000000;
    local_70 = (byte)uVar9 & 1;
    _swift_retain(puVar4);
    SwiftUI::Button::_init();
    lVar18 = local_120;
    puVar5 = local_128;
    local_a0 = (undefined *)(CONCAT71(local_a0._1_7_,(byte)uVar9) & 0xffffffffffffff01);
    (extension_SwiftUI)::SwiftUI::View::_buttonStyle
              (local_120,&local_a0,local_128,&DAT_100525378,local_158,local_160);
    (*pcVar26)(CVar19.unknown,puVar5);
    if ((uVar9 & 1) == 0) {
      CVar19.unknown = (undefined *)0x0;
    }
    else {
      CVar19 = SwiftUI::Color::get_accentColor(CVar19);
    }
    FUN_100357f84(local_b0,CVar19.unknown);
    _swift_release(puVar4);
    _swift_release(CVar19.unknown);
    (*pcVar20)(lVar18,local_d0);
    lVar24 = local_c8;
    FUN_10005f8c8();
    lVar22 = local_118;
    local_a8 = lVar18;
    FUN_100029504(lVar24,local_118,FUN_10006866c);
    puVar4 = &DAT_100527388;
    _swift_allocObject(&DAT_100527388,uVar23 + local_d8,uVar25 | 7);
    FUN_100007e64(lVar22,puVar4 + uVar23,FUN_10006866c);
    puVar5 = &DAT_10054a968;
    FUN_100002f94(&DAT_10054a968,&DAT_10041f070);
    UVar10 = Foundation::UUID::typeMetadataAccessor();
    puVar6 = &DAT_10054e168;
    FUN_100002f94(&DAT_10054e168,&DAT_10041f078);
    puVar11 = &DAT_10054a978;
    FUN_1000087a0(&DAT_10054a978,&DAT_10054a968,&DAT_10041f070,
                  PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100523b60);
    puVar7 = &DAT_10054e170;
    FUN_100002fe4(&DAT_10054e170,&DAT_10041f080);
    puVar12 = &DAT_10054e178;
    FUN_100002fe4(&DAT_10054e178,&DAT_10042f440);
    puVar13 = puVar12;
    FUN_1000699a0();
    puVar14 = puVar13;
    FUN_100026df4();
    local_a0 = local_110;
    puStack_98 = PTR___type_metadata_for_Swift_String_100523a98;
    ppuVar15 = &local_a0;
    local_90 = (undefined **)puVar13;
    puStack_88 = puVar14;
    _swift_getOpaqueTypeConformance2
              (ppuVar15,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_help<A_where_A1:_Swift_StringProtocol>(A1)__>_some>>_100523050
               ,1);
    puVar13 = &DAT_10054e208;
    FUN_1000087a0(&DAT_10054e208,&DAT_10054e178,&DAT_10042f440,
                  PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0);
    ppuVar16 = &local_a0;
    local_a0 = puVar7;
    puStack_98 = puVar12;
    local_90 = ppuVar15;
    puStack_88 = puVar13;
    _swift_getOpaqueTypeConformance2
              (ppuVar16,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_contextMenu<A_where_A1:_SwiftUI_View>(menuItems:_()__>_A1)__>_some>>_100522eb8
               ,1);
    puVar7 = &DAT_10054a9b8;
    FUN_1000036d0(&DAT_10054a9b8,FUN_10025ee04,&DAT_10042c428);
    *(undefined **)(lVar17 + -0x10) = puVar7;
    lVar18 = local_100;
    (extension_SwiftUI)::SwiftUI::ForEach::_init
              (local_100,puVar7,FUN_100069950,puVar4,puVar5,UVar10.unknown,puVar6,puVar11,ppuVar16);
    lVar2 = local_c0;
    FUN_1000087e4(local_b8,local_c0,&DAT_10054e108,&DAT_10041f040);
    lVar17 = local_108;
    FUN_1000087e4(local_b0,local_108,&DAT_10054e108,&DAT_10041f040);
    puVar5 = local_e0;
    lVar1 = local_e8;
    lVar22 = local_f8;
    pcVar26 = *(code **)(local_f8 + 0x10);
    (*pcVar26)(local_e8,lVar18,local_e0);
    lVar24 = local_f0;
    FUN_1000087e4(lVar2,local_f0,&DAT_10054e108,&DAT_10041f040);
    puVar4 = &DAT_10054e210;
    FUN_100002f94(&DAT_10054e210,&DAT_10041f0c8);
    FUN_1000087e4(lVar17,lVar24 + *(int *)(puVar4 + 0x30),&DAT_10054e108,&DAT_10041f040);
    (*pcVar26)(lVar24 + *(int *)(puVar4 + 0x40),lVar1,puVar5);
    pcVar26 = *(code **)(lVar22 + 8);
    (*pcVar26)(lVar18,puVar5);
    FUN_10002a29c(local_b0,&DAT_10054e108,&DAT_10041f040);
    FUN_10002a29c(local_b8,&DAT_10054e108,&DAT_10041f040);
    (*pcVar26)(lVar1,puVar5);
    FUN_10002a29c(lVar17,&DAT_10054e108,&DAT_10041f040);
    FUN_10002a29c(local_c0,&DAT_10054e108,&DAT_10041f040);
    return;
  }
  FUN_1001b7378(0);
  FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar26 = (code *)SoftwareBreakpoint(1,0x10006081c);
  (*pcVar26)();
}

