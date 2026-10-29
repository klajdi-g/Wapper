// rea decompile_all
// name: FUN_1003d0364
// address: 0x1003d0364
// body: available
// range: 0x1003d0364-0x1003d101f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003d0808 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003d0364(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  undefined *puVar5;
  RoundedCornerStyle RVar6;
  byte bVar7;
  undefined *puVar8;
  VerticalAlignment VVar9;
  Alignment AVar10;
  Set _all;
  Set SVar11;
  RoundedRectangle RVar12;
  Color CVar13;
  long lVar14;
  State SVar15;
  Color CVar16;
  undefined *puVar17;
  _Inset _Var18;
  Alignment AVar19;
  MainActor *pMVar20;
  undefined8 *puVar21;
  TaskPriority TVar22;
  undefined **ppuVar23;
  _StringGuts _Var24;
  char *pcVar25;
  void *pvVar26;
  long extraout_x8;
  long extraout_x8_00;
  long lVar27;
  long extraout_x8_01;
  double dVar28;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar29;
  undefined *unaff_x20;
  undefined *puVar30;
  ulong uVar31;
  long lVar32;
  ulong uVar33;
  undefined8 *puVar34;
  ulong uVar35;
  undefined8 *puVar36;
  code *pcVar37;
  long lVar38;
  undefined8 uVar39;
  double dVar40;
  undefined1 auVar41 [16];
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 in_d3;
  undefined8 uVar46;
  String SVar47;
  String SVar48;
  undefined8 auStack_250 [6];
  double dStack_220;
  long local_218 [2];
  undefined8 *local_208;
  long local_200;
  undefined *local_1f8;
  long local_1f0;
  undefined *local_1e8;
  long local_1e0;
  undefined8 *local_1d8;
  ulong local_1d0 [3];
  undefined *local_1b8;
  long local_1b0;
  undefined8 local_1a8;
  long local_1a0;
  undefined *local_198;
  undefined8 *local_190;
  undefined8 uStack_188;
  undefined *local_178;
  undefined8 *local_160;
  long local_158;
  undefined *local_140;
  undefined *local_138;
  undefined **local_130;
  undefined *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 local_b0;
  undefined7 uStack_af;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  
  puVar8 = &DAT_100560980;
  local_1a8 = param_1;
  FUN_100002f94(&DAT_100560980,&DAT_100436530);
  local_1a0 = *(long *)(puVar8 + -8);
  local_198 = puVar8;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_1a0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar8 = &DAT_100560988;
  local_1b0 = (long)&dStack_220 - extraout_x8;
  FUN_100002f94(&DAT_100560988,&DAT_100436538);
  local_1d0[2] = *(ulong *)(puVar8 + -8);
  local_1b8 = puVar8;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(local_1d0[2] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar27 = ((long)&dStack_220 - extraout_x8) - extraout_x8_00;
  VVar9.unknown = &DAT_100549e28;
  local_1d0[1] = lVar27;
  FUN_100002f94(&DAT_100549e28,&DAT_100436540);
  local_178 = VVar9.unknown;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(VVar9.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar36 = (undefined8 *)(lVar27 - extraout_x8_01);
  VVar9 = SwiftUI::VerticalAlignment::get_center(VVar9);
  *puVar36 = VVar9.unknown;
  puVar36[1] = 0;
  *(undefined1 *)(puVar36 + 2) = 0;
  puVar8 = &DAT_100560990;
  puVar17 = &DAT_100436548;
  FUN_100002f94();
  AVar10.unknown = unaff_x20;
  FUN_1003d1020((long)puVar36 + (long)*(int *)(puVar8 + 0x2c));
  AVar10 = SwiftUI::Alignment::get_leading(AVar10);
  puVar36[-2] = AVar10.unknown;
  puVar36[-1] = puVar17;
  *(undefined1 *)(puVar36 + -3) = 1;
  puVar36[-4] = 0;
  *(undefined1 *)(puVar36 + -5) = 1;
  puVar36[-6] = 0;
  pvVar26 = (void *)0x1;
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  SVar11.unknown = &DAT_100560998;
  FUN_100002f94(&DAT_100560998,&DAT_100436550);
  puVar21 = (undefined8 *)((long)puVar36 + (long)*(int *)(SVar11.unknown + 0x24));
  puVar21[9] = uStack_d8;
  puVar21[8] = local_e0;
  puVar21[0xb] = uStack_c8;
  puVar21[10] = uStack_d0;
  puVar21[0xd] = uStack_b8;
  puVar21[0xc] = local_c0;
  puVar21[1] = uStack_118;
  *puVar21 = local_120;
  puVar21[3] = uStack_108;
  puVar21[2] = local_110;
  puVar21[5] = uStack_f8;
  puVar21[4] = uStack_100;
  puVar21[7] = uStack_e8;
  puVar21[6] = local_f0;
  _all = SwiftUI::Edge::Set::get_horizontal(SVar11);
  uVar39 = 0x4030000000000000;
  uVar42 = uStack_100;
  uVar44 = local_110;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  SVar11.unknown = &DAT_1005609a0;
  uVar43 = uVar42;
  uVar45 = uVar44;
  uVar46 = in_d3;
  FUN_100002f94(&DAT_1005609a0,&DAT_100436558);
  puVar1 = (undefined1 *)((long)puVar36 + (long)*(int *)(SVar11.unknown + 0x24));
  *puVar1 = (char)_all.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar39;
  *(undefined8 *)(puVar1 + 0x10) = uVar42;
  *(undefined8 *)(puVar1 + 0x18) = uVar44;
  *(undefined8 *)(puVar1 + 0x20) = in_d3;
  puVar1[0x28] = 0;
  SVar11 = SwiftUI::Edge::Set::get_vertical(SVar11);
  uVar42 = 0x4018000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar11.unknown);
  puVar8 = &DAT_1005609a8;
  FUN_100002f94(&DAT_1005609a8,&DAT_100436560);
  puVar1 = (undefined1 *)((long)puVar36 + (long)*(int *)(puVar8 + 0x24));
  *puVar1 = (char)SVar11.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar42;
  *(undefined8 *)(puVar1 + 0x10) = uVar43;
  *(undefined8 *)(puVar1 + 0x18) = uVar45;
  *(undefined8 *)(puVar1 + 0x20) = uVar46;
  puVar1[0x28] = 0;
  puVar8 = &DAT_1005609b0;
  FUN_100002f94(&DAT_1005609b0,&DAT_100436568);
  puVar21 = (undefined8 *)((long)puVar36 + (long)*(int *)(puVar8 + 0x24));
  RVar12 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
  iVar3 = *(int *)(RVar12.unknown + 0x14);
  uVar2 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100522678
  ;
  RVar6 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
  lVar27 = CONCAT71((int7)((ulong)RVar12.unknown >> 8),RVar6.value);
  pcVar37 = *(code **)(*(long *)(lVar27 + -8) + 0x68);
  CVar13.unknown = (undefined *)((long)puVar21 + (long)iVar3);
  (*pcVar37)(CVar13.unknown,uVar2,lVar27);
  auVar41 = NEON_fmov(0x4024000000000000,8);
  uStack_188 = auVar41._8_8_;
  local_190 = (undefined8 *)auVar41._0_8_;
  puVar21[1] = uStack_188;
  *puVar21 = auVar41._0_8_;
  CVar13 = SwiftUI::Color::get_white(CVar13);
  lVar14 = 0;
  FUN_1003e4bc8();
  if ((unaff_x20[*(int *)(lVar14 + 0x1c)] & 1) == 0) {
    local_b0 = unaff_x20[*(int *)(lVar14 + 0x34)];
    uStack_a8 = *(undefined8 *)(unaff_x20 + *(int *)(lVar14 + 0x34) + 8);
    SVar15.unknown = &DAT_10054ab50;
    FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
    SwiftUI::State::get_wrappedValue(SVar15);
    dVar28 = 0.0;
    dVar40 = 0.06;
    if ((char)local_140 == '\0') {
      dVar40 = 0.0;
    }
  }
  else {
    dVar40 = 0.1;
    dVar28 = 0.2;
  }
  CVar16 = SwiftUI::Color::opacity(dVar40,CVar13);
  _swift_release(CVar13.unknown);
  AVar10.unknown = &DAT_10054a8b8;
  puVar8 = &DAT_10041fc00;
  FUN_100002f94();
  *(undefined **)((long)puVar21 + (long)*(int *)(AVar10.unknown + 0x34)) = CVar16.unknown;
  *(undefined2 *)((long)puVar21 + (long)*(int *)(AVar10.unknown + 0x38)) = 0x100;
  AVar10 = SwiftUI::Alignment::get_center(AVar10);
  puVar17 = &DAT_10054a8c0;
  FUN_100002f94(&DAT_10054a8c0,&DAT_10041baa0);
  iVar3 = *(int *)(puVar17 + 0x24);
  *(undefined8 *)((long)puVar21 + (long)iVar3) = AVar10.unknown;
  ((undefined8 *)((long)puVar21 + (long)iVar3))[1] = puVar8;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(RVar12.unknown + -8) + 0x40));
  puVar34 = (undefined8 *)((long)puVar36 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  CVar13.unknown = (undefined *)((long)puVar34 + (long)*(int *)(RVar12.unknown + 0x14));
  (*pcVar37)(CVar13.unknown,uVar2,lVar27);
  puVar21 = local_190;
  puVar34[1] = uStack_188;
  *puVar34 = puVar21;
  CVar13 = SwiftUI::Color::get_white(CVar13);
  puVar8 = &DAT_1005609b8;
  FUN_100002f94(&DAT_1005609b8,&DAT_100436570);
  lVar27 = (long)puVar36 + (long)*(int *)(puVar8 + 0x24);
  CVar16 = SwiftUI::Color::opacity(dVar28,CVar13);
  _swift_release(CVar13.unknown);
  SwiftUI::StrokeStyle::init
            (&local_b0,0x3ff0000000000000,0x4024000000000000,0,CVar16.unknown,0,
             PTR___swiftEmptyArrayStorage_100524190);
  puVar17 = PTR_typeMetadataAccessor_1005223a8;
  FUN_100029504(puVar34,lVar27,PTR_typeMetadataAccessor_1005223a8);
  dVar28 = (double)CONCAT71(uStack_af,local_b0);
  puVar8 = &DAT_100552090;
  FUN_100002f94(&DAT_100552090,&DAT_100434040);
  lVar32 = lVar27 + *(int *)(puVar8 + 0x44);
  FUN_100029504(puVar34,lVar32,puVar17);
  _Var18 = SwiftUI::RoundedRectangle::_Inset::typeMetadataAccessor();
  *(double *)(lVar32 + *(int *)(_Var18.unknown + 0x14)) = dVar28 * 0.5;
  puVar8 = &DAT_100550e70;
  FUN_100002f94(&DAT_100550e70,&DAT_100422a10);
  puVar21 = (undefined8 *)(lVar32 + *(int *)(puVar8 + 0x24));
  uVar42 = CONCAT71(uStack_af,local_b0);
  puVar21[1] = uStack_a8;
  *puVar21 = uVar42;
  puVar21[3] = uStack_98;
  puVar21[2] = uStack_a0;
  puVar21[4] = local_90;
  AVar10.unknown = &DAT_100552098;
  puVar8 = &DAT_100424358;
  FUN_100002f94();
  *(undefined **)(lVar32 + *(int *)(AVar10.unknown + 0x34)) = CVar16.unknown;
  *(undefined2 *)(lVar32 + *(int *)(AVar10.unknown + 0x38)) = 0x100;
  AVar19 = SwiftUI::Alignment::get_center(AVar10);
  FUN_100029548(puVar34,puVar17);
  AVar10.unknown = &DAT_1005520a0;
  puVar17 = &DAT_100424360;
  FUN_100002f94();
  iVar3 = *(int *)(AVar10.unknown + 0x24);
  *(undefined8 *)(lVar32 + iVar3) = AVar19.unknown;
  ((undefined8 *)(lVar32 + iVar3))[1] = puVar8;
  AVar10 = SwiftUI::Alignment::get_center(AVar10);
  puVar8 = &DAT_1005520a8;
  FUN_100002f94(&DAT_1005520a8,&DAT_100434010);
  iVar3 = *(int *)(puVar8 + 0x24);
  *(undefined8 *)(lVar27 + iVar3) = AVar10.unknown;
  ((undefined8 *)(lVar27 + iVar3))[1] = puVar17;
  lVar27 = *(long *)(lVar14 + -8);
  lVar38 = *(long *)(lVar27 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  uVar31 = lVar38 + 0xfU & 0xfffffffffffffff0;
  puVar30 = (undefined *)((long)puVar36 - uVar31);
  FUN_100029504(unaff_x20,puVar30,FUN_1003e4bc8);
  uVar35 = (ulong)*(byte *)(lVar27 + 0x50);
  uVar33 = uVar35 + 0x10 & (uVar35 ^ 0xffffffffffffffff);
  puVar8 = &DAT_10053de10;
  _swift_allocObject(&DAT_10053de10,uVar33 + lVar38,uVar35 | 7);
  puVar17 = puVar8 + uVar33;
  local_1d0[0] = uVar33;
  FUN_100007e64(puVar30,puVar17,FUN_1003e4bc8);
  iVar3 = *(int *)(local_178 + 0x24);
  *(undefined8 *)((long)puVar36 + (long)iVar3) = FUN_1003ed52c;
  ((undefined8 *)((long)puVar36 + (long)iVar3))[1] = puVar8;
  FUN_1003cffb8();
  local_1d8 = puVar36;
  local_190 = (undefined8 *)puVar17;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = (long)puVar36 - uVar31;
  FUN_100029504(unaff_x20,lVar14,FUN_1003e4bc8);
  pMVar20 = Swift::MainActor::typeMetadataAccessor();
  puVar8 = PTR_typeMetadataAccessor_1005246d8;
  pMVar20 = Swift::MainActor::get_shared(pMVar20,pMVar20);
  puVar21 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar8,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  uVar31 = uVar35 + 0x20 & (uVar35 ^ 0xffffffffffffffff);
  puVar8 = &DAT_10053de38;
  _swift_allocObject(&DAT_10053de38,uVar31 + lVar38,uVar35 | 7);
  *(MainActor **)(puVar8 + 0x10) = pMVar20;
  *(undefined8 **)(puVar8 + 0x18) = puVar21;
  FUN_100007e64(lVar14,puVar8 + uVar31,FUN_1003e4bc8);
  TVar22 = Swift::TaskPriority::typeMetadataAccessor();
  lVar27 = *(long *)(TVar22.unknown + -8);
  lVar32 = *(long *)(lVar27 + 0x40);
  local_1e8 = TVar22.unknown;
  local_1e0 = lVar14;
  (*(code *)PTR____chkstk_darwin_100521118)();
  uVar31 = lVar32 + 0xfU & 0xfffffffffffffff0;
  lVar14 = lVar14 - uVar31;
  Swift::TaskPriority::get_userInitiated(TVar22);
  pcVar25 = (char *)0x0;
  bVar7 = Swift::_stdlib_isOSVersionAtLeast(0x1a,4,0);
  if ((bVar7 & 1) == 0) {
    puVar17 = &DAT_100549e20;
    FUN_100002f94(&DAT_100549e20,&DAT_100419f30);
    uVar33 = local_1d0[1];
    puVar21 = (undefined8 *)(local_1d0[1] + (long)*(int *)(puVar17 + 0x24));
    puVar17 = &DAT_100549d28;
    FUN_100002f94(&DAT_100549d28,&DAT_100426240);
    iVar3 = *(int *)(puVar17 + 0x28);
    *(long *)((long)puVar21 + (long)iVar3) = (long)puVar30;
    ((long *)((long)puVar21 + (long)iVar3))[1] = (long)local_190;
    (**(code **)(lVar27 + 0x20))((long)puVar21 + (long)*(int *)(puVar17 + 0x24),lVar14,local_1e8);
    *puVar21 = &DAT_100436588;
    puVar21[1] = puVar8;
    uVar31 = uVar33;
    FUN_1003ed5b4();
  }
  else {
    puVar17 = &DAT_100549d40;
    _Var24.unknown = &DAT_100419e60;
    FUN_100002f94();
    local_200 = *(long *)(puVar17 + -8);
    local_1f8 = puVar17;
    local_1f0 = lVar14;
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(local_200 + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar29 = lVar14 - extraout_x8_03;
    local_138 = (undefined *)local_190;
    local_160 = (undefined8 *)0x0;
    local_158 = 0xe000000000000000;
    local_218[1] = lVar29;
    local_208 = puVar36;
    local_140 = puVar30;
    _swift_bridgeObjectRetain();
    Swift::_StringGuts::grow(0x11,_Var24);
    _swift_bridgeObjectRelease(local_158);
    local_160 = (undefined8 *)&DAT_d000000000000028;
    local_158 = 0x80000001004e70a0;
    SVar47 = Swift::CustomStringConvertible::get_description();
    SVar48.bridgeObject = pvVar26;
    SVar48.str = pcVar25;
    Swift::String::append(SVar47,SVar48);
    _swift_bridgeObjectRelease(SVar47.bridgeObject);
    lVar32 = local_158;
    puVar21 = local_160;
    local_218[0] = lVar29;
    (*(code *)PTR____chkstk_darwin_100521118)();
    puVar30 = local_1e8;
    lVar29 = lVar29 - uVar31;
    (**(code **)(lVar27 + 0x10))(lVar29,lVar14,local_1e8);
    *(undefined **)(lVar29 + -8) =
         PTR___protocol_witness_table_for_Swift_String___Swift_Equatable_in_Swift_100523ab0;
    *(undefined **)(lVar29 + -0x10) = PTR___type_metadata_for_Swift_String_100523a98;
    uVar31 = local_218[1];
    SwiftUI::_TaskValueModifier2::_init
              (local_218[1],puVar17,puVar21,lVar32,0,0,lVar29,&DAT_100436588,puVar8);
    _swift_bridgeObjectRelease(local_190);
    (**(code **)(lVar27 + 8))(lVar14,puVar30);
    uVar33 = local_1d0[1];
    FUN_1003ed5b4(local_208,local_1d0[1]);
    puVar8 = &DAT_100549e30;
    FUN_100002f94(&DAT_100549e30,&DAT_100419f40);
    puVar36 = (undefined8 *)(uVar33 + (long)*(int *)(puVar8 + 0x24));
    (**(code **)(local_200 + 0x20))(puVar36,uVar31,local_1f8);
  }
  puVar21 = local_1d8;
  FUN_1003cffb8();
  local_190 = puVar21;
  local_160 = puVar36;
  local_158 = uVar31;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar27 = (long)puVar21 - (lVar38 + 0xfU & 0xfffffffffffffff0);
  FUN_100029504(unaff_x20,lVar27,FUN_1003e4bc8);
  uVar4 = local_1d0[0];
  puVar8 = &DAT_10053de60;
  _swift_allocObject(&DAT_10053de60,local_1d0[0] + lVar38,uVar35 | 7);
  FUN_100007e64(lVar27,puVar8 + uVar4,FUN_1003e4bc8);
  FUN_1003ed978();
  puVar30 = PTR___protocol_witness_table_for_Swift_String___Swift_Equatable_in_Swift_100523ab0;
  puVar17 = PTR___type_metadata_for_Swift_String_100523a98;
  local_140 = local_178;
  local_138 = PTR___type_metadata_for_Swift_String_100523a98;
  local_128 = PTR___protocol_witness_table_for_Swift_String___Swift_Equatable_in_Swift_100523ab0;
  ppuVar23 = &local_140;
  local_130 = (undefined **)lVar27;
  _swift_getOpaqueTypeConformance2(ppuVar23,&DAT_100437e8c,1);
  lVar27 = local_1b0;
  puVar5 = local_1b8;
  (extension_SwiftUI)::SwiftUI::View::_onChange
            (local_1b0,&local_160,0,FUN_1003ed964,puVar8,local_1b8,puVar17,ppuVar23,puVar30);
  _swift_bridgeObjectRelease(uVar31);
  _swift_release(puVar8);
  (**(code **)(local_1d0[2] + 8))(uVar33,puVar5);
  FUN_100002f94(&DAT_100560a00,&DAT_100436598);
  local_140 = puVar5;
  local_138 = puVar17;
  local_128 = puVar30;
  local_130 = ppuVar23;
  _swift_getOpaqueTypeConformance2
            (&local_140,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_onChange<A_where_A1:_Swift_Equatable>(of:_A1,initial:_Swift_Bool,_:_()__>_())__>_some>>_100523150
             ,1);
  FUN_1000087a0(&DAT_100560a08,&DAT_100560a00,&DAT_100436598,
                PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0);
  puVar8 = local_198;
  (extension_SwiftUI)::SwiftUI::View::_contextMenu();
  (**(code **)(local_1a0 + 8))(lVar27,puVar8);
  return;
}

