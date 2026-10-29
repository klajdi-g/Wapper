// rea decompile_all
// name: FUN_10034941c
// address: 0x10034941c
// body: available
// range: 0x10034941c-0x100349887 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10034941c(long param_1,byte param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  State SVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 *unaff_x20;
  undefined *puVar11;
  AccessibilityTraits AVar12;
  uint uVar13;
  long lVar14;
  AccessibilityTraits AVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined auStack_150 [8];
  long local_148;
  undefined *local_140;
  undefined *local_138;
  undefined *local_130;
  long local_128;
  long local_120;
  long local_118;
  undefined *local_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *local_f8;
  byte local_80;
  byte local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  
  uVar1 = (uint)param_2;
  local_118 = param_1;
  local_138 = (undefined *)SwiftUI::AccessibilityTraits::typeMetadataAccessor();
  local_128 = *(long *)(local_138 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_128 + 0x40));
  puVar4 = &DAT_10055d580;
  local_130 = auStack_150 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_100002f94(&DAT_10055d580,&DAT_100432c10);
  local_120 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_120 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  AVar15.unknown = auStack_150 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0) + -extraout_x8_00;
  puVar5 = &DAT_10055d5e8;
  FUN_100002f94(&DAT_10055d5e8,&DAT_100432c68);
  local_148 = *(long *)(puVar5 + -8);
  local_140 = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_148 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar14 = (long)AVar15.unknown - extraout_x8_01;
  puStack_108 = (undefined *)unaff_x20[10];
  local_110 = (undefined *)unaff_x20[9];
  SVar6.unknown = &DAT_10055d470;
  FUN_100002f94(&DAT_10055d470,&DAT_100432b18);
  SwiftUI::State::get_wrappedValue(SVar6);
  uVar13 = (uint)local_80;
  puStack_108 = (undefined *)unaff_x20[0xc];
  local_110 = (undefined *)unaff_x20[0xb];
  SVar6.unknown = &DAT_10055d5f0;
  FUN_100002f94(&DAT_10055d5f0,&DAT_100432c70);
  SwiftUI::State::get_wrappedValue(SVar6);
  puVar5 = &DAT_10053b9c0;
  _swift_allocObject(&DAT_10053b9c0,0x9a,7);
  uVar16 = unaff_x20[0xc];
  uVar18 = unaff_x20[0xf];
  uVar17 = unaff_x20[0xe];
  *(undefined8 *)(puVar5 + 0x78) = unaff_x20[0xd];
  *(undefined8 *)(puVar5 + 0x70) = uVar16;
  *(undefined8 *)(puVar5 + 0x88) = uVar18;
  *(undefined8 *)(puVar5 + 0x80) = uVar17;
  uVar16 = *(undefined8 *)((long)unaff_x20 + 0x79);
  *(undefined8 *)(puVar5 + 0x91) = *(undefined8 *)((long)unaff_x20 + 0x81);
  *(undefined8 *)(puVar5 + 0x89) = uVar16;
  uVar16 = unaff_x20[4];
  uVar18 = unaff_x20[7];
  uVar17 = unaff_x20[6];
  *(undefined8 *)(puVar5 + 0x38) = unaff_x20[5];
  *(undefined8 *)(puVar5 + 0x30) = uVar16;
  *(undefined8 *)(puVar5 + 0x48) = uVar18;
  *(undefined8 *)(puVar5 + 0x40) = uVar17;
  uVar18 = unaff_x20[8];
  uVar17 = unaff_x20[0xb];
  uVar16 = unaff_x20[10];
  *(undefined8 *)(puVar5 + 0x58) = unaff_x20[9];
  *(undefined8 *)(puVar5 + 0x50) = uVar18;
  *(undefined8 *)(puVar5 + 0x68) = uVar17;
  *(undefined8 *)(puVar5 + 0x60) = uVar16;
  uVar18 = *unaff_x20;
  uVar17 = unaff_x20[3];
  uVar16 = unaff_x20[2];
  *(undefined8 *)(puVar5 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar5 + 0x10) = uVar18;
  *(undefined8 *)(puVar5 + 0x28) = uVar17;
  *(undefined8 *)(puVar5 + 0x20) = uVar16;
  puVar5[0x99] = param_2;
  local_70 = param_2;
  local_6f = uVar1 == uVar13;
  local_6e = local_80 != 4 && local_80 == uVar1;
  FUN_10034b584();
  FUN_100002f94(&DAT_10055d5f8,&DAT_100432c78);
  FUN_10034bacc();
  SwiftUI::Button::_init();
  puVar5 = &DAT_10055d588;
  FUN_1000087a0(&DAT_10055d588,&DAT_10055d580,&DAT_100432c10,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
  puVar7 = puVar5;
  FUN_100037164();
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle(lVar14);
  (**(code **)(local_120 + 8))(AVar15.unknown,puVar4);
  AVar12.unknown = local_130;
  local_120 = CONCAT44(local_120._4_4_,uVar1);
  if (uVar1 == uVar13) {
    SwiftUI::AccessibilityTraits::get_isSelected(AVar15);
    puVar11 = local_138;
  }
  else {
    local_110 = PTR___swiftEmptyArrayStorage_100524190;
    puVar8 = &DAT_10055d638;
    FUN_1000036d0(&DAT_10055d638,PTR_typeMetadataAccessor_1005226f0,
                  PTR_SwiftUI__SwiftUI__AccessibilityTraits_>Swift__SetAlgebra_100522700);
    puVar9 = &DAT_10055d640;
    FUN_100002f94(&DAT_10055d640,&DAT_100432c98);
    puVar10 = &DAT_10055d648;
    FUN_1000087a0(&DAT_10055d648,&DAT_10055d640,&DAT_100432c98,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
    AVar12.unknown = local_130;
    puVar11 = local_138;
    Swift::SetAlgebra::_init(local_130,&local_110,puVar9,puVar10,local_138,puVar8);
  }
  puStack_108 = &DAT_100526c68;
  local_110 = puVar4;
  puStack_100 = puVar5;
  local_f8 = puVar7;
  _swift_getOpaqueTypeConformance2
            (&local_110,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_ButtonStyle>(A1)__>_some>>_100522ea8
             ,1);
  lVar3 = local_118;
  puVar4 = local_140;
  (extension_SwiftUI)::SwiftUI::View::accessibilityAddTraits(AVar12);
  (**(code **)(local_128 + 8))(AVar12.unknown,puVar11);
  (**(code **)(local_148 + 8))(lVar14,puVar4);
  puVar4 = &DAT_10053b9e8;
  _swift_allocObject(&DAT_10053b9e8,0x9a,7);
  uVar16 = unaff_x20[0xc];
  uVar18 = unaff_x20[0xf];
  uVar17 = unaff_x20[0xe];
  *(undefined8 *)(puVar4 + 0x78) = unaff_x20[0xd];
  *(undefined8 *)(puVar4 + 0x70) = uVar16;
  *(undefined8 *)(puVar4 + 0x88) = uVar18;
  *(undefined8 *)(puVar4 + 0x80) = uVar17;
  uVar16 = *(undefined8 *)((long)unaff_x20 + 0x79);
  *(undefined8 *)(puVar4 + 0x91) = *(undefined8 *)((long)unaff_x20 + 0x81);
  *(undefined8 *)(puVar4 + 0x89) = uVar16;
  uVar16 = unaff_x20[4];
  uVar18 = unaff_x20[7];
  uVar17 = unaff_x20[6];
  *(undefined8 *)(puVar4 + 0x38) = unaff_x20[5];
  *(undefined8 *)(puVar4 + 0x30) = uVar16;
  *(undefined8 *)(puVar4 + 0x48) = uVar18;
  *(undefined8 *)(puVar4 + 0x40) = uVar17;
  uVar18 = unaff_x20[8];
  uVar17 = unaff_x20[0xb];
  uVar16 = unaff_x20[10];
  *(undefined8 *)(puVar4 + 0x58) = unaff_x20[9];
  *(undefined8 *)(puVar4 + 0x50) = uVar18;
  *(undefined8 *)(puVar4 + 0x68) = uVar17;
  *(undefined8 *)(puVar4 + 0x60) = uVar16;
  uVar18 = *unaff_x20;
  uVar17 = unaff_x20[3];
  uVar16 = unaff_x20[2];
  *(undefined8 *)(puVar4 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar4 + 0x10) = uVar18;
  *(undefined8 *)(puVar4 + 0x28) = uVar17;
  *(undefined8 *)(puVar4 + 0x20) = uVar16;
  puVar4[0x99] = (char)local_120;
  puVar5 = &DAT_10055d568;
  FUN_100002f94(&DAT_10055d568,&DAT_100432c00);
  iVar2 = *(int *)(puVar5 + 0x24);
  *(undefined8 *)(lVar3 + iVar2) = FUN_10034bcdc;
  ((undefined8 *)(lVar3 + iVar2))[1] = puVar4;
  FUN_10034b584();
  return;
}

