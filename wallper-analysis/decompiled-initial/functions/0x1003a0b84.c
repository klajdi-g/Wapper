// rea decompile_all
// name: FUN_1003a0b84
// address: 0x1003a0b84
// body: available
// range: 0x1003a0b84-0x1003a1197 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003a0f44 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003a0b84(long param_1,long *param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long lVar11;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long extraout_x12_00;
  long lVar12;
  ulong uVar13;
  code *pcVar14;
  long lVar15;
  code *pcVar16;
  ulong uVar17;
  long lVar18;
  undefined8 auStack_140 [2];
  undefined1 auStack_130 [8];
  long local_128;
  undefined *local_120;
  undefined *local_118;
  undefined *local_110;
  long local_108;
  long local_100;
  long local_f8;
  undefined *local_f0;
  long local_e8;
  undefined *local_e0;
  undefined1 *local_d8;
  long local_d0;
  long local_c8;
  undefined *local_c0;
  long local_b8;
  long local_b0;
  undefined *local_a8;
  long local_a0;
  long local_98;
  undefined8 local_90;
  undefined *puStack_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined8 local_70;
  
  local_a0 = param_1;
  local_c0 = (undefined *)SwiftUI::PlainButtonStyle::typeMetadataAccessor();
  local_c8 = *(long *)(local_c0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_c8 + 0x40));
  puVar3 = &DAT_10055f3e8;
  local_d8 = auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_100002f94(&DAT_10055f3e8,&DAT_100434ba0);
  local_e8 = *(long *)(puVar3 + -8);
  local_e0 = puVar3;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_e8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)(auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  puVar3 = &DAT_10055f3f0;
  local_f8 = lVar11;
  FUN_100002f94(&DAT_10055f3f0,&DAT_100434ba8);
  local_b8 = *(long *)(puVar3 + -8);
  local_a8 = puVar3;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_b8 + 0x40));
  lVar11 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_b0 = lVar11;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar11 = lVar11 - extraout_x12;
  lVar4 = 0;
  local_d0 = lVar11;
  FUN_10039c2bc();
  lVar12 = *(long *)(lVar4 + -8);
  lVar18 = *(long *)(lVar12 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar11 = lVar11 - (lVar18 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_10055f3f8;
  FUN_100002f94(&DAT_10055f3f8,&DAT_100434bb0);
  local_108 = *(long *)(puVar3 + -8);
  local_f0 = puVar3;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_108 + 0x40));
  lVar4 = lVar11 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_100 = lVar4;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar4 = lVar4 - extraout_x12_00;
  lVar15 = *param_2;
  local_98 = lVar4;
  if (lVar15 != 0) {
    puVar3 = &DAT_100434ac8;
    _swift_getKeyPath(&DAT_100434ac8);
    puVar5 = &DAT_100434af0;
    _swift_getKeyPath(&DAT_100434af0);
    _swift_retain(lVar15);
    Combine::Published::_get_subscript(&local_90);
    _swift_release(puVar3);
    _swift_release(puVar5);
    _swift_release(lVar15);
    local_70 = local_90;
    FUN_100029504(param_2,lVar11,FUN_10039c2bc);
    uVar17 = (ulong)*(byte *)(lVar12 + 0x50);
    uVar13 = uVar17 + 0x18 & (uVar17 ^ 0xffffffffffffffff);
    puVar3 = &DAT_10053cd48;
    _swift_allocObject(&DAT_10053cd48,uVar13 + lVar18,uVar17 | 7);
    *(undefined8 *)(puVar3 + 0x10) = param_3;
    FUN_100007e64(lVar11,puVar3 + uVar13,FUN_10039c2bc);
    _swift_bridgeObjectRetain(param_3);
    puVar5 = &DAT_10054a968;
    FUN_100002f94(&DAT_10054a968,&DAT_10041f070);
    local_110 = puVar5;
    local_118 = (undefined *)Foundation::UUID::typeMetadataAccessor();
    puVar5 = &DAT_10055f400;
    FUN_100002f94(&DAT_10055f400,&DAT_100434bb8);
    puVar6 = &DAT_10054a978;
    local_120 = puVar5;
    FUN_1000087a0(&DAT_10054a978,&DAT_10054a968,&DAT_10041f070,
                  PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100523b60);
    uVar7 = 0xff;
    FUN_1003a67f8();
    puVar5 = &DAT_10055f408;
    local_128 = lVar18;
    FUN_100002fe4(&DAT_10055f408,&DAT_100434bc0);
    puVar8 = &DAT_10055f410;
    FUN_1000036d0(&DAT_10055f410,FUN_1003a67f8,&TargetProtocolConformanceDescriptor_100434d38);
    puVar9 = &DAT_10055f418;
    FUN_1000087a0(&DAT_10055f418,&DAT_10055f408,&DAT_100434bc0,
                  PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0);
    puVar10 = &local_90;
    local_90 = uVar7;
    puStack_88 = puVar5;
    local_80 = puVar8;
    puStack_78 = puVar9;
    _swift_getOpaqueTypeConformance2
              (puVar10,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_contextMenu<A_where_A1:_SwiftUI_View>(menuItems:_()__>_A1)__>_some>>_100522eb8
               ,1);
    puVar5 = &DAT_10054a9b8;
    FUN_1000036d0(&DAT_10054a9b8,FUN_10025ee04,&DAT_10042c428);
    *(undefined **)(lVar4 + -0x10) = puVar5;
    (extension_SwiftUI)::SwiftUI::ForEach::_init
              (local_98,puVar5,FUN_1003a67a8,puVar3,local_110,local_118,local_120,puVar6,puVar10);
    FUN_100029504(param_2,lVar11,FUN_10039c2bc);
    uVar13 = uVar17 + 0x10 & (uVar17 ^ 0xffffffffffffffff);
    puVar3 = &DAT_10053cd70;
    _swift_allocObject(&DAT_10053cd70,uVar13 + local_128,uVar17 | 7);
    FUN_100007e64(lVar11,puVar3 + uVar13,FUN_10039c2bc);
    FUN_100002f94(&DAT_10055f420,&DAT_100434bc8);
    FUN_1003a6820();
    lVar4 = local_f8;
    SwiftUI::Button::_init();
    puVar1 = local_d8;
    SwiftUI::PlainButtonStyle::init();
    puVar3 = &DAT_10055f440;
    FUN_1000087a0(&DAT_10055f440,&DAT_10055f3e8,&DAT_100434ba0,
                  PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
    puVar5 = &DAT_10054a8b0;
    FUN_1000036d0(&DAT_10054a8b0,PTR_typeMetadataAccessor_100522380,
                  PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100522370);
    puVar8 = local_c0;
    lVar12 = local_d0;
    puVar6 = local_e0;
    (extension_SwiftUI)::SwiftUI::View::_buttonStyle
              (local_d0,puVar1,local_e0,local_c0,puVar3,puVar5);
    (**(code **)(local_c8 + 8))(puVar1,puVar8);
    (**(code **)(local_e8 + 8))(lVar4,puVar6);
    puVar5 = local_f0;
    lVar11 = local_100;
    lVar4 = local_108;
    pcVar14 = *(code **)(local_108 + 0x10);
    (*pcVar14)(local_100,local_98,local_f0);
    puVar6 = local_a8;
    lVar18 = local_b0;
    lVar15 = local_b8;
    pcVar16 = *(code **)(local_b8 + 0x10);
    (*pcVar16)(local_b0,lVar12,local_a8);
    lVar2 = local_a0;
    (*pcVar14)(local_a0,lVar11,puVar5);
    puVar3 = &DAT_10055f448;
    FUN_100002f94(&DAT_10055f448,&DAT_100434bd8);
    (*pcVar16)(lVar2 + *(int *)(puVar3 + 0x30),lVar18,puVar6);
    pcVar14 = *(code **)(lVar15 + 8);
    (*pcVar14)(lVar12,puVar6);
    pcVar16 = *(code **)(lVar4 + 8);
    (*pcVar16)(local_98,puVar5);
    (*pcVar14)(lVar18,puVar6);
    (*pcVar16)(lVar11,puVar5);
    return;
  }
  FUN_1001b7378(0);
  FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x1003a1198);
  (*pcVar14)();
}

