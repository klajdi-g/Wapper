// rea decompile_all
// name: FUN_10037cf54
// address: 0x10037cf54
// body: available
// range: 0x10037cf54-0x10037d507 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10037cf54(long param_1,undefined *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  PlainButtonStyle PVar5;
  undefined *puVar6;
  undefined *puVar7;
  Alignment AVar8;
  undefined *puVar9;
  _FrameLayout _Var10;
  State SVar11;
  undefined8 uVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  ulong uVar16;
  undefined8 *puVar17;
  code *pcVar18;
  long lVar19;
  undefined8 auStack_160 [2];
  undefined8 *apuStack_150 [4];
  undefined *local_130 [2];
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  undefined *local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  undefined *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  undefined7 uStack_9f;
  undefined8 local_98;
  undefined *local_90;
  byte local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  lVar4 = 0;
  local_e8 = param_1;
  FUN_10038ffac();
  local_f8 = *(long *)(lVar4 + -8);
  local_f0 = *(long *)(local_f8 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar6 = (undefined *)((long)apuStack_150 - (extraout_x12 + 0xfU & 0xfffffffffffffff0));
  local_130[0] = puVar6;
  PVar5 = SwiftUI::PlainButtonStyle::typeMetadataAccessor();
  local_120 = *(long *)(PVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_120 + 0x40));
  lVar19 = (long)puVar6 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_10055f080;
  FUN_100002f94(&DAT_10055f080,&DAT_100434830);
  local_130[1] = *(undefined **)(puVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)((long)local_130[1] + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = &DAT_10055f088;
  FUN_100002f94(&DAT_10055f088,&DAT_100434838);
  local_108 = *(long *)(puVar7 + -8);
  local_100 = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_108 + 0x40));
  lVar14 = (lVar19 - extraout_x8_00) - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_110 = lVar14;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = lVar14 - extraout_x12_00;
  puVar7 = &DAT_10055f090;
  puVar9 = &DAT_100434840;
  FUN_100002f94();
  AVar8.unknown = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar7 + -8) + 0x40));
  lVar15 = lVar14 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_118 = lVar15;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar17 = (undefined8 *)(lVar15 - extraout_x12_01);
  AVar8 = SwiftUI::Alignment::get_leading(AVar8);
  *puVar17 = AVar8.unknown;
  puVar17[1] = puVar9;
  puVar9 = &DAT_10055f098;
  FUN_100002f94(&DAT_10055f098,&DAT_100434848);
  AVar8.unknown = param_2;
  FUN_10037d508((long)puVar17 + (long)*(int *)(puVar9 + 0x2c));
  SwiftUI::Alignment::get_leading(AVar8);
  uVar12 = 0;
  _Var10 = SwiftUI::_FrameLayout::_init((Alignment)0x4038000000000000);
  puVar1 = (undefined8 *)((long)puVar17 + (long)*(int *)(puVar7 + 0x24));
  apuStack_150[3] = puVar17;
  puVar1[1] = uStack_c8;
  *puVar1 = local_d0;
  puVar1[3] = uStack_b8;
  puVar1[2] = uStack_c0;
  puVar1[5] = uStack_a8;
  puVar1[4] = local_b0;
  FUN_10026ac6c((long)*(int *)(lVar4 + 0x14));
  local_e0 = _Var10.unknown;
  uStack_d8 = uVar12;
  local_90 = param_2;
  FUN_100002f94(&DAT_10055f0a0,&DAT_100434850);
  FUN_10039a0c0();
  puVar17[-2] = PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100523aa8;
  (extension_SwiftUI)::SwiftUI::NavigationLink::_init();
  SwiftUI::PlainButtonStyle::init();
  puVar7 = &DAT_10055f0c0;
  FUN_1000087a0(&DAT_10055f0c0,&DAT_10055f080,&DAT_100434830,
                PTR_SwiftUI__SwiftUI__NavigationLink<undefined,undefined>_>SwiftUI__View_100522118);
  puVar9 = &DAT_10054a8b0;
  FUN_1000036d0(&DAT_10054a8b0,PTR_typeMetadataAccessor_100522380,
                PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100522370);
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle(lVar14,lVar19,puVar6,PVar5.unknown,puVar7,puVar9)
  ;
  (**(code **)(local_120 + 8))(lVar19,PVar5.unknown);
  (**(code **)((long)local_130[1] + 8))(lVar19 - extraout_x8_00,puVar6);
  local_a0 = param_2[*(int *)(lVar4 + 0x2c)];
  local_98 = *(undefined8 *)(param_2 + *(int *)(lVar4 + 0x2c) + 8);
  SVar11.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar11);
  AVar8.unknown = local_130[0];
  local_120 = CONCAT44(local_120._4_4_,(uint)(byte)local_e0);
  FUN_100029504(param_2,local_130[0],FUN_10038ffac);
  uVar13 = (ulong)*(byte *)(local_f8 + 0x50);
  uVar16 = uVar13 + 0x10 & (uVar13 ^ 0xffffffffffffffff);
  puVar6 = &DAT_10053c920;
  _swift_allocObject(&DAT_10053c920,uVar16 + local_f0,uVar13 | 7);
  FUN_100007e64(AVar8.unknown,puVar6 + uVar16,FUN_10038ffac);
  SwiftUI::Alignment::get_center(AVar8);
  SwiftUI::_FrameLayout::_init((Alignment)0x403c000000000000);
  lVar4 = local_118;
  local_f0 = CONCAT71(uStack_9f,local_a0);
  local_f8 = CONCAT44(local_f8._4_4_,(uint)(byte)local_98);
  local_130[1] = local_90;
  local_130[0] = (undefined *)CONCAT44(local_130[0]._4_4_,(uint)local_88);
  apuStack_150[2] = (undefined8 *)local_80;
  apuStack_150[1] = (undefined8 *)uStack_78;
  FUN_1000087e4(puVar17,local_118,&DAT_10055f090,&DAT_100434840);
  puVar9 = local_100;
  lVar19 = local_108;
  lVar15 = local_110;
  pcVar18 = *(code **)(local_108 + 0x10);
  (*pcVar18)(local_110,lVar14,local_100);
  lVar3 = local_e8;
  FUN_1000087e4(lVar4,local_e8,&DAT_10055f090,&DAT_100434840);
  puVar7 = &DAT_10055f0c8;
  FUN_100002f94(&DAT_10055f0c8,&DAT_100434860);
  (*pcVar18)(lVar3 + *(int *)(puVar7 + 0x30),lVar15,puVar9);
  puVar2 = (undefined1 *)(lVar3 + *(int *)(puVar7 + 0x40));
  *puVar2 = (char)local_120;
  *(code **)(puVar2 + 8) = FUN_10039a178;
  *(undefined **)(puVar2 + 0x10) = puVar6;
  *(long *)(puVar2 + 0x18) = local_f0;
  puVar2[0x20] = (char)local_f8;
  *(undefined **)(puVar2 + 0x28) = local_130[1];
  puVar2[0x30] = (char)local_130[0];
  *(undefined8 **)(puVar2 + 0x38) = apuStack_150[2];
  *(undefined8 **)(puVar2 + 0x40) = apuStack_150[1];
  pcVar18 = *(code **)(lVar19 + 8);
  _swift_retain(puVar6);
  (*pcVar18)(lVar14,puVar9);
  FUN_10002a29c(apuStack_150[3],&DAT_10055f090,&DAT_100434840);
  _swift_release(puVar6);
  (*pcVar18)(lVar15,puVar9);
  FUN_10002a29c(lVar4,&DAT_10055f090,&DAT_100434840);
  return;
}

