// rea decompile_all
// name: FUN_1003a8e2c
// address: 0x1003a8e2c
// body: available
// range: 0x1003a8e2c-0x1003a9183 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003a8e2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  Alignment AVar6;
  undefined *puVar7;
  undefined *puVar8;
  UUID UVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar12;
  undefined8 *puVar13;
  undefined8 auStack_d0 [2];
  long alStack_c0 [3];
  undefined *local_a8;
  long local_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined *puStack_88;
  undefined *local_80;
  undefined **ppuStack_78;
  undefined *local_70;
  undefined *puStack_68;
  
  puVar4 = &DAT_10055f808;
  local_98 = param_1;
  FUN_100002f94(&DAT_10055f808,&DAT_100434fb0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = (undefined8 *)((long)alStack_c0 + -extraout_x8);
  puVar5 = &DAT_10055f800;
  FUN_100002f94(&DAT_10055f800,&DAT_100434fa8);
  alStack_c0[2] = *(long *)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(alStack_c0[2] + 0x40) + 0xfU & 0xfffffffffffffff0);
  AVar6.unknown = &DAT_10055f7f0;
  puVar7 = &DAT_100434f98;
  FUN_100002f94();
  local_a0 = *(long *)(AVar6.unknown + -8);
  local_a8 = AVar6.unknown;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = ((long)puVar13 - extraout_x8_00) - extraout_x8_01;
  alStack_c0[1] = lVar12;
  AVar6 = SwiftUI::Alignment::get_center(AVar6);
  *puVar13 = AVar6.unknown;
  *(undefined **)((long)alStack_c0 + -extraout_x8 + 8) = puVar7;
  puVar7 = &DAT_10055f968;
  FUN_100002f94(&DAT_10055f968,&DAT_100435200);
  FUN_1003a9184((long)puVar13 + (long)*(int *)(puVar7 + 0x2c),param_2);
  puVar7 = &DAT_10055f810;
  FUN_1000087a0(&DAT_10055f810,&DAT_10055f808,&DAT_100434fb0,
                PTR_SwiftUI__SwiftUI__ZStack<undefined>_>SwiftUI__View_1005234e0);
  puVar8 = puVar7;
  FUN_1003b0868();
  puVar2 = PTR___type_metadata_for_Swift_String_100523a98;
  *(undefined **)(lVar12 + -0x10) = puVar8;
  (extension_SwiftUI)::SwiftUI::View::_navigationDestination();
  FUN_10002a29c(puVar13,&DAT_10055f808,&DAT_100434fb0);
  UVar9 = Foundation::UUID::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100520bd8;
  uVar10 = 0;
  FUN_100386f18();
  puStack_88 = puVar2;
  local_80 = &DAT_10052a668;
  local_70 = PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100523aa8;
  ppuVar11 = &local_90;
  local_90 = puVar4;
  ppuStack_78 = (undefined **)puVar7;
  puStack_68 = puVar8;
  _swift_getOpaqueTypeConformance2
            (ppuVar11,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_navigationDestination<A,B_where_A1:_Swift_Hashable,B1:_SwiftUI_View>(for:_A1_Type,destination:_(A1)__>_B1)__>_some>>_100523010
             ,1);
  puVar4 = &DAT_10054a128;
  FUN_1000036d0(&DAT_10054a128,puVar1,PTR_Foundation__Foundation__UUID_>Swift__Hashable_100520bf0);
  puVar7 = &DAT_10055f820;
  FUN_1000036d0(&DAT_10055f820,FUN_100386f18,&TargetProtocolConformanceDescriptor_1004335b8);
  *(undefined **)(lVar12 + -0x10) = puVar7;
  lVar3 = alStack_c0[1];
  (extension_SwiftUI)::SwiftUI::View::_navigationDestination();
  (**(code **)(alStack_c0[2] + 8))((long)puVar13 - extraout_x8_00,puVar5);
  FUN_100002f94(&DAT_10055f7f8,&DAT_100434fa0);
  local_90 = puVar5;
  puStack_88 = UVar9.unknown;
  local_80 = (undefined *)uVar10;
  ppuStack_78 = ppuVar11;
  local_70 = puVar4;
  puStack_68 = puVar7;
  _swift_getOpaqueTypeConformance2
            (&local_90,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_navigationDestination<A,B_where_A1:_Swift_Hashable,B1:_SwiftUI_View>(for:_A1_Type,destination:_(A1)__>_B1)__>_some>>_100523010
             ,1);
  FUN_100105a0c();
  puVar4 = &DAT_10055f828;
  FUN_1000087a0(&DAT_10055f828,&DAT_10055f7f8,&DAT_100434fa0,
                &TargetProtocolConformanceDescriptor_100435c50);
  *(undefined **)(lVar12 + -0x10) = puVar4;
  puVar4 = local_a8;
  (extension_SwiftUI)::SwiftUI::View::_navigationDestination();
  (**(code **)(local_a0 + 8))(lVar3,puVar4);
  return;
}

