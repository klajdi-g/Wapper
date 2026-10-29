// rea decompile_all
// name: FUN_1003317c4
// address: 0x1003317c4
// body: available
// range: 0x1003317c4-0x100331c1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003317c4(long param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  RoundedCornerStyle RVar6;
  undefined *puVar7;
  undefined *puVar8;
  Color CVar9;
  undefined7 extraout_var;
  Color CVar10;
  Alignment AVar11;
  State SVar12;
  State SVar13;
  __int64 _Var14;
  undefined *puVar15;
  long extraout_x8;
  undefined8 *unaff_x20;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  String SVar20;
  undefined8 auStack_1a0 [4];
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  
  puVar7 = &DAT_1005508e0;
  FUN_100002f94(&DAT_1005508e0,&DAT_1004222f0);
  lVar16 = *(long *)(puVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = -extraout_x8;
  CVar9.unknown = (undefined *)((long)&local_180 + lVar4);
  puVar8 = &DAT_10053b0f8;
  _swift_allocObject(&DAT_10053b0f8,0xd0,7);
  uVar17 = unaff_x20[0x10];
  uVar19 = unaff_x20[0x13];
  uVar18 = unaff_x20[0x12];
  *(undefined8 *)(puVar8 + 0x98) = unaff_x20[0x11];
  *(undefined8 *)(puVar8 + 0x90) = uVar17;
  *(undefined8 *)(puVar8 + 0xa8) = uVar19;
  *(undefined8 *)(puVar8 + 0xa0) = uVar18;
  uVar17 = unaff_x20[0x14];
  uVar19 = unaff_x20[0x17];
  uVar18 = unaff_x20[0x16];
  *(undefined8 *)(puVar8 + 0xb8) = unaff_x20[0x15];
  *(undefined8 *)(puVar8 + 0xb0) = uVar17;
  *(undefined8 *)(puVar8 + 200) = uVar19;
  *(undefined8 *)(puVar8 + 0xc0) = uVar18;
  uVar17 = unaff_x20[8];
  uVar19 = unaff_x20[0xb];
  uVar18 = unaff_x20[10];
  *(undefined8 *)(puVar8 + 0x58) = unaff_x20[9];
  *(undefined8 *)(puVar8 + 0x50) = uVar17;
  *(undefined8 *)(puVar8 + 0x68) = uVar19;
  *(undefined8 *)(puVar8 + 0x60) = uVar18;
  uVar17 = unaff_x20[0xc];
  uVar19 = unaff_x20[0xf];
  uVar18 = unaff_x20[0xe];
  *(undefined8 *)(puVar8 + 0x78) = unaff_x20[0xd];
  *(undefined8 *)(puVar8 + 0x70) = uVar17;
  *(undefined8 *)(puVar8 + 0x88) = uVar19;
  *(undefined8 *)(puVar8 + 0x80) = uVar18;
  uVar17 = *unaff_x20;
  uVar19 = unaff_x20[3];
  uVar18 = unaff_x20[2];
  *(undefined8 *)(puVar8 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar8 + 0x10) = uVar17;
  *(undefined8 *)(puVar8 + 0x28) = uVar19;
  *(undefined8 *)(puVar8 + 0x20) = uVar18;
  uVar17 = unaff_x20[4];
  uVar19 = unaff_x20[7];
  uVar18 = unaff_x20[6];
  *(undefined8 *)(puVar8 + 0x38) = unaff_x20[5];
  *(undefined8 *)(puVar8 + 0x30) = uVar17;
  *(undefined8 *)(puVar8 + 0x48) = uVar19;
  *(undefined8 *)(puVar8 + 0x40) = uVar18;
  FUN_100336150();
  FUN_100002f94(&DAT_10054a840,&DAT_100422300);
  FUN_1000fbd60();
  SwiftUI::Button::_init();
  FUN_1000087a0(&DAT_100550900,&DAT_1005508e0,&DAT_1004222f0,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
  FUN_100037164();
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle(param_1);
  (**(code **)(lVar16 + 8))(CVar9.unknown,puVar7);
  CVar9 = SwiftUI::Color::get_black(CVar9);
  puVar7 = &DAT_100550908;
  FUN_100002f94(&DAT_100550908,&DAT_100422310);
  *(undefined **)(param_1 + *(int *)(puVar7 + 0x24)) = CVar9.unknown;
  puVar7 = &DAT_10055b828;
  FUN_100002f94(&DAT_10055b828,&DAT_100431e20);
  puVar15 = (undefined *)(param_1 + *(int *)(puVar7 + 0x24));
  uVar2 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100522678
  ;
  RVar6 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
  CVar9.unknown = puVar15;
  (**(code **)(*(long *)(CONCAT71(extraout_var,RVar6.value) + -8) + 0x68))
            (puVar15,uVar2,CONCAT71(extraout_var,RVar6.value));
  CVar9 = SwiftUI::Color::get_white(CVar9);
  CVar10 = SwiftUI::Color::opacity(0.96,CVar9);
  _swift_release(CVar9.unknown);
  AVar11.unknown = &DAT_10054b118;
  puVar7 = &DAT_10041f7b0;
  FUN_100002f94();
  *(undefined **)(puVar15 + *(int *)(AVar11.unknown + 0x34)) = CVar10.unknown;
  *(undefined2 *)(puVar15 + *(int *)(AVar11.unknown + 0x38)) = 0x100;
  AVar11 = SwiftUI::Alignment::get_center(AVar11);
  puVar8 = &DAT_10054e1b0;
  FUN_100002f94(&DAT_10054e1b0,&DAT_10041f0a0);
  iVar3 = *(int *)(puVar8 + 0x24);
  *(undefined **)(puVar15 + iVar3) = AVar11.unknown;
  *(undefined **)((long)(puVar15 + iVar3) + 8) = puVar7;
  uStack_178 = unaff_x20[9];
  local_180 = unaff_x20[8];
  local_170 = unaff_x20[10];
  uStack_138 = unaff_x20[9];
  local_140 = unaff_x20[8];
  local_130 = unaff_x20[10];
  SVar12.unknown = &DAT_10054dd08;
  FUN_100002f94(&DAT_10054dd08,&DAT_10041ea50);
  SVar13.unknown = SVar12.unknown;
  SwiftUI::State::get_wrappedValue(SVar12);
  uVar17 = uStack_148;
  local_140 = local_150;
  uStack_138 = uStack_148;
  local_150 = 0x2d;
  uStack_148 = 0xe100000000000000;
  local_160 = 0;
  uStack_158 = 0xe000000000000000;
  FUN_100026df4();
  puVar5 = PTR___type_metadata_for_Swift_String_100523a98;
  *(undefined **)((long)auStack_1a0 + lVar4 + 0x10) = SVar13.unknown;
  *(undefined **)((long)auStack_1a0 + lVar4 + 0x18) = SVar13.unknown;
  *(undefined **)((long)auStack_1a0 + lVar4) = PTR___type_metadata_for_Swift_String_100523a98;
  *(undefined **)((long)auStack_1a0 + lVar4 + 8) = SVar13.unknown;
  SVar20 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                     (&local_150,&local_160,0,0,0,1,PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98);
  _swift_bridgeObjectRelease(uVar17);
  _Var14 = Swift::String::get_count(SVar20);
  _swift_bridgeObjectRelease(SVar20.bridgeObject);
  puVar7 = &DAT_100431fa0;
  _swift_getKeyPath();
  puVar8 = &DAT_10053b120;
  _swift_allocObject(&DAT_10053b120,0x11,7);
  puVar8[0x10] = _Var14 != 0x10;
  puVar15 = &DAT_10055b830;
  FUN_100002f94(&DAT_10055b830,&DAT_100430300);
  puVar1 = (undefined8 *)(param_1 + *(int *)(puVar15 + 0x24));
  *puVar1 = puVar7;
  puVar1[1] = FUN_10006bca0;
  puVar1[2] = puVar8;
  SwiftUI::State::get_wrappedValue(SVar12);
  uVar17 = uStack_138;
  local_180 = 0x2d;
  uStack_178 = 0xe100000000000000;
  local_150 = 0;
  uStack_148 = 0xe000000000000000;
  *(undefined **)((long)auStack_1a0 + lVar4 + 0x10) = SVar13.unknown;
  *(undefined **)((long)auStack_1a0 + lVar4 + 0x18) = SVar13.unknown;
  *(undefined **)((long)auStack_1a0 + lVar4) = puVar5;
  *(undefined **)((long)auStack_1a0 + lVar4 + 8) = SVar13.unknown;
  SVar20 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                     (&local_180,&local_150,0,0,0,1,puVar5,puVar5);
  _swift_bridgeObjectRelease(uVar17);
  _Var14 = Swift::String::get_count(SVar20);
  _swift_bridgeObjectRelease(SVar20.bridgeObject);
  uVar17 = 0x3ff0000000000000;
  if (_Var14 != 0x10) {
    uVar17 = 0x3fd999999999999a;
  }
  puVar7 = &DAT_10055b838;
  FUN_100002f94(&DAT_10055b838,&DAT_100431f20);
  *(undefined8 *)(param_1 + *(int *)(puVar7 + 0x24)) = uVar17;
  return;
}

