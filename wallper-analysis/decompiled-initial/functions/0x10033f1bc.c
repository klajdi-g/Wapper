// rea decompile_all
// name: FUN_10033f1bc
// address: 0x10033f1bc
// body: available
// range: 0x10033f1bc-0x10033f4d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10033f1bc(long param_1)

{
  int iVar1;
  undefined1 *puVar2;
  long lVar3;
  PlainButtonStyle PVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  byte *unaff_x20;
  ulong uVar12;
  long lVar13;
  undefined1 auStack_d0 [8];
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  undefined1 *local_a8;
  long local_a0;
  long local_98;
  undefined *local_90;
  undefined *puStack_88;
  ulong local_70;
  undefined *puStack_68;
  
  lVar3 = 0;
  local_b0 = param_1;
  FUN_100341c48();
  local_a0 = *(long *)(lVar3 + -8);
  local_98 = *(long *)(local_a0 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_a8 = auStack_d0 + -(extraout_x12 + 0xfU & 0xfffffffffffffff0);
  PVar4 = SwiftUI::PlainButtonStyle::typeMetadataAccessor();
  local_c0 = *(long *)(PVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_c0 + 0x40));
  lVar3 = (long)(auStack_d0 + -(extraout_x12 + 0xfU & 0xfffffffffffffff0)) -
          (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_10055cfb0;
  FUN_100002f94(&DAT_10055cfb0,&DAT_1004325e8);
  local_c8 = *(long *)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_c8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_10055cfb8;
  FUN_100002f94(&DAT_10055cfb8,&DAT_1004325f0);
  local_b8 = *(long *)(puVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_b8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (lVar3 - extraout_x8_00) - extraout_x8_01;
  _swift_retain(*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100002f94(&DAT_10055cfc0,&DAT_1004325f8);
  FUN_100342690();
  SwiftUI::Button::_init();
  SwiftUI::PlainButtonStyle::init();
  puVar7 = &DAT_10055d068;
  FUN_1000087a0(&DAT_10055d068,&DAT_10055cfb0,&DAT_1004325e8,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
  puVar8 = &DAT_10054a8b0;
  FUN_1000036d0(&DAT_10054a8b0,PTR_typeMetadataAccessor_100522380,
                PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100522370);
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle(lVar13,lVar3,puVar5,PVar4.unknown,puVar7,puVar8);
  (**(code **)(local_c0 + 8))(lVar3,PVar4.unknown);
  puVar7 = puVar5;
  (**(code **)(local_c8 + 8))(lVar3 - extraout_x8_00);
  uVar9 = (ulong)*unaff_x20;
  FUN_100078070();
  ppuVar10 = &local_90;
  local_90 = puVar5;
  puStack_88 = PVar4.unknown;
  local_70 = uVar9;
  puStack_68 = puVar7;
  _swift_getOpaqueTypeConformance2
            (ppuVar10,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_PrimitiveButtonStyle>(A1)__>_some>>_100522e98
             ,1);
  ppuVar11 = ppuVar10;
  FUN_100026df4();
  lVar3 = local_b0;
  (extension_SwiftUI)::SwiftUI::View::_help
            (local_b0,&local_70,puVar6,PTR___type_metadata_for_Swift_String_100523a98,ppuVar10,
             ppuVar11);
  _swift_bridgeObjectRelease(puVar7);
  (**(code **)(local_b8 + 8))(lVar13,puVar6);
  puVar2 = local_a8;
  FUN_100029504();
  uVar9 = (ulong)*(byte *)(local_a0 + 0x50);
  uVar12 = uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff);
  puVar5 = &DAT_10053b4e8;
  _swift_allocObject(&DAT_10053b4e8,uVar12 + local_98,uVar9 | 7);
  FUN_100342b84(puVar2,puVar5 + uVar12);
  puVar6 = &DAT_10055d070;
  FUN_100002f94(&DAT_10055d070,&DAT_100432648);
  iVar1 = *(int *)(puVar6 + 0x24);
  *(undefined8 *)(lVar3 + iVar1) = FUN_100342bc8;
  ((undefined8 *)(lVar3 + iVar1))[1] = puVar5;
  return;
}

