// rea decompile_all
// name: FUN_100353f1c
// address: 0x100353f1c
// body: available
// range: 0x100353f1c-0x100354663 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003544b0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100353f1c(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  RoundedCornerStyle RVar4;
  DefaultGlassEffectShape DVar5;
  DefaultGlassEffectShape DVar6;
  undefined **ppuVar7;
  AnyView AVar8;
  undefined *puVar9;
  undefined *puVar10;
  Material MVar11;
  Set SVar12;
  Capsule CVar13;
  Color CVar14;
  Color CVar15;
  Alignment AVar16;
  Alignment AVar17;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x12;
  Glass unaff_x20;
  void *pvVar18;
  code *pcVar19;
  undefined8 *puVar20;
  long lVar21;
  void *pvVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined *puVar26;
  long alStack_2b0 [3];
  void *local_298 [3];
  long local_280;
  undefined8 local_278;
  ulong local_270;
  long local_268;
  undefined *local_260;
  undefined8 local_258;
  undefined1 *local_250;
  undefined *local_248;
  undefined *puStack_240;
  undefined *local_238;
  undefined *puStack_230;
  undefined8 local_228;
  
  local_258 = param_1;
  bVar3 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  if ((bVar3 & 1) == 0) {
    puVar9 = &DAT_100559a98;
    FUN_100002f94(&DAT_100559a98,&DAT_10042dd30);
    local_260 = puVar9;
    local_250 = (undefined1 *)alStack_2b0;
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    pvVar22 = (void *)((long)alStack_2b0 - extraout_x8_03);
    puVar10 = &DAT_100559ac8;
    FUN_100002f94(&DAT_100559ac8,&DAT_100434370);
    iVar2 = *(int *)(puVar10 + 0x24);
    uVar1 = *(undefined4 *)
             PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100522678
    ;
    RVar4 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
    lVar23 = CONCAT71((int7)((ulong)puVar10 >> 8),RVar4.value);
    pcVar19 = *(code **)(*(long *)(lVar23 + -8) + 0x68);
    (*pcVar19)((long)pvVar22 + (long)iVar2,uVar1,lVar23);
    puVar10 = &DAT_10054a650;
    FUN_100002f94(&DAT_10054a650,&DAT_10041d1e0);
    *(undefined1 *)((long)pvVar22 + (long)iVar2 + (long)*(int *)(puVar10 + 0x24)) = 0;
    _memcpy(pvVar22,unaff_x20.unknown,0x1d9);
    puVar10 = &DAT_100559ab8;
    FUN_100002f94(&DAT_100559ab8,&DAT_10042dd40);
    iVar2 = *(int *)(puVar10 + 0x24);
    FUN_1000087e4();
    MVar11 = SwiftUI::Material::get_ultraThin(unaff_x20.unknown);
    SVar12 = SwiftUI::Edge::Set::get_all(MVar11.unknown);
    puVar10 = &DAT_10054a658;
    FUN_100002f94(&DAT_10054a658,&DAT_10041b640);
    *(char *)((long)pvVar22 + (long)*(int *)(puVar10 + 0x24) + (long)iVar2) = (char)SVar12.unknown;
    puVar10 = &DAT_100559aa8;
    FUN_100002f94(&DAT_100559aa8,&DAT_10042dd38);
    iVar2 = *(int *)(puVar10 + 0x24);
    (*pcVar19)((long)pvVar22 + (long)iVar2,uVar1,lVar23);
    puVar10 = &DAT_10054a660;
    FUN_100002f94(&DAT_10054a660,&DAT_10041d1f0);
    *(undefined2 *)((long)pvVar22 + (long)iVar2 + (long)*(int *)(puVar10 + 0x24)) = 0x100;
    CVar13 = SwiftUI::Capsule::typeMetadataAccessor();
    puVar10 = PTR_typeMetadataAccessor_100523540;
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(undefined8 *)(*(long *)(CVar13.unknown + -8) + 0x40));
    puVar26 = (undefined *)((long)pvVar22 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0));
    CVar14.unknown = puVar26;
    (*pcVar19)(puVar26,uVar1,lVar23);
    CVar14 = SwiftUI::Color::get_white(CVar14);
    CVar15 = SwiftUI::Color::opacity(0.14,CVar14);
    _swift_release(CVar14.unknown);
    SwiftUI::StrokeStyle::init
              (&local_248,0x3ff0000000000000,0x4024000000000000,0,CVar15.unknown,0,
               PTR___swiftEmptyArrayStorage_100524190);
    lVar23 = (long)pvVar22 + (long)*(int *)(puVar9 + 0x24);
    FUN_100029504(puVar26,lVar23,puVar10);
    puVar9 = &DAT_10054a698;
    FUN_100002f94(&DAT_10054a698,&DAT_10041b660);
    puVar20 = (undefined8 *)(lVar23 + *(int *)(puVar9 + 0x24));
    puVar20[1] = puStack_240;
    *puVar20 = local_248;
    puVar20[3] = puStack_230;
    puVar20[2] = local_238;
    puVar20[4] = local_228;
    AVar17.unknown = &DAT_10054a6a0;
    puVar9 = &DAT_10041c350;
    FUN_100002f94();
    *(undefined **)(lVar23 + *(int *)(AVar17.unknown + 0x34)) = CVar15.unknown;
    *(undefined2 *)(lVar23 + *(int *)(AVar17.unknown + 0x38)) = 0x100;
    AVar16 = SwiftUI::Alignment::get_center(AVar17);
    FUN_100029548(puVar26,puVar10);
    AVar17.unknown = &DAT_10054a6a8;
    puVar10 = &DAT_10041b670;
    FUN_100002f94();
    iVar2 = *(int *)(AVar17.unknown + 0x24);
    *(undefined8 *)(lVar23 + iVar2) = AVar16.unknown;
    ((undefined8 *)(lVar23 + iVar2))[1] = puVar9;
    AVar17 = SwiftUI::Alignment::get_center(AVar17);
    puVar9 = &DAT_10054a668;
    FUN_100002f94(&DAT_10054a668,&DAT_10041b650);
    iVar2 = *(int *)(puVar9 + 0x24);
    *(undefined8 *)(lVar23 + iVar2) = AVar17.unknown;
    ((undefined8 *)(lVar23 + iVar2))[1] = puVar10;
    puVar9 = &DAT_10055eac0;
    FUN_100002f94(&DAT_10055eac0,&DAT_100434390);
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar23 = (long)pvVar22 - extraout_x8_05;
    FUN_1000087e4(pvVar22,lVar23,&DAT_100559a98,&DAT_10042dd30);
    _swift_storeEnumTagMultiPayload(lVar23,puVar9,1);
    FUN_10029882c();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar23);
    FUN_10002a29c(pvVar22,&DAT_100559a98,&DAT_10042dd30);
  }
  else {
    puVar9 = &DAT_10055eac8;
    FUN_100002f94(&DAT_10055eac8,&DAT_1004343b0);
    local_268 = *(long *)(puVar9 + -8);
    local_278 = *(undefined8 *)(local_268 + 0x40);
    local_260 = puVar9;
    local_250 = (undefined1 *)alStack_2b0;
    (*(code *)PTR____chkstk_darwin_100521118)();
    local_270 = extraout_x12 + 0xfU & 0xfffffffffffffff0;
    lVar21 = (long)alStack_2b0 - local_270;
    puVar9 = &DAT_100559ac8;
    FUN_100002f94(&DAT_100559ac8,&DAT_100434370);
    local_298[2] = puVar9;
    local_280 = lVar21;
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    pvVar18 = (void *)(lVar21 - extraout_x8);
    iVar2 = *(int *)(puVar9 + 0x24);
    uVar1 = *(undefined4 *)
             PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100522678
    ;
    RVar4 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
    lVar23 = CONCAT71((int7)((ulong)puVar9 >> 8),RVar4.value);
    (**(code **)(*(long *)(lVar23 + -8) + 0x68))((long)pvVar18 + (long)iVar2,uVar1,lVar23);
    puVar9 = &DAT_10054a650;
    FUN_100002f94(&DAT_10054a650,&DAT_10041d1e0);
    *(undefined1 *)((long)pvVar18 + (long)iVar2 + (long)*(int *)(puVar9 + 0x24)) = 0;
    _memcpy(pvVar18,unaff_x20.unknown,0x1d9);
    local_298[0] = (void *)SwiftUI::Glass::typeMetadataAccessor();
    alStack_2b0[2] = *(long *)((long)local_298[0] + -8);
    local_298[1] = pvVar18;
    (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(alStack_2b0[2] + 0x40));
    lVar24 = (long)pvVar18 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
    FUN_1000087e4();
    SwiftUI::Glass::get_regular(unaff_x20);
    DVar5 = SwiftUI::DefaultGlassEffectShape::typeMetadataAccessor();
    lVar23 = *(long *)(DVar5.unknown + -8);
    alStack_2b0[1] = lVar24;
    (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar23 + 0x40));
    lVar25 = lVar24 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
    DVar6 = SwiftUI::DefaultGlassEffectShape::init();
    FUN_1002989f4();
    puVar9 = DVar6.unknown;
    FUN_100009808();
    pvVar22 = local_298[2];
    (extension_SwiftUI)::SwiftUI::View::_glassEffect
              (lVar21,lVar24,lVar25,local_298[2],DVar5.unknown,DVar6.unknown,puVar9);
    (**(code **)(lVar23 + 8))(lVar25,DVar5.unknown);
    (**(code **)(alStack_2b0[2] + 8))(lVar24,local_298[0]);
    FUN_10002a29c(pvVar18,&DAT_100559ac8,&DAT_100434370);
    lVar23 = local_280;
    (*(code *)PTR____chkstk_darwin_100521118)();
    puVar10 = local_260;
    lVar24 = local_268;
    (**(code **)(local_268 + 0x10))(lVar23 - local_270,lVar21,local_260);
    local_248 = pvVar22;
    ppuVar7 = &local_248;
    puStack_240 = DVar5.unknown;
    local_238 = DVar6.unknown;
    puStack_230 = puVar9;
    _swift_getOpaqueTypeConformance2
              (ppuVar7,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_glassEffect<A_where_A1:_SwiftUI_Shape>(_:_SwiftUI_Glass,in:_A1)__>_some>>_100522ed0
               ,1);
    AVar8 = SwiftUI::AnyView::_init(ppuVar7,puVar10,ppuVar7);
    puVar9 = &DAT_10055eac0;
    FUN_100002f94(&DAT_10055eac0,&DAT_100434390);
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar20 = (undefined8 *)(lVar23 - extraout_x8_02);
    *puVar20 = AVar8.unknown;
    _swift_storeEnumTagMultiPayload(puVar20);
    FUN_100002f94(&DAT_100559a98,&DAT_10042dd30);
    FUN_10029882c();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar20);
    (**(code **)(lVar24 + 8))(lVar21,puVar10);
  }
  return;
}

