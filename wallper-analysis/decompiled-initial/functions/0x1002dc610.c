// rea decompile_all
// name: FUN_1002dc610
// address: 0x1002dc610
// body: available
// range: 0x1002dc610-0x1002dc8b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002dc610(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  GroupedFormStyle GVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  Alignment AVar7;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *unaff_x20;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_170;
  undefined1 auStack_168 [8];
  undefined8 uStack_160;
  undefined1 auStack_158 [8];
  undefined8 auStack_150 [2];
  undefined1 auStack_140 [8];
  long local_138;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  local_138 = param_1;
  GVar3 = SwiftUI::GroupedFormStyle::typeMetadataAccessor();
  lVar10 = *(long *)(GVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar10 + 0x40));
  puVar8 = auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_10055aae0;
  FUN_100002f94(&DAT_10055aae0,&DAT_10042f140);
  lVar11 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = puVar8 + -extraout_x8_00;
  FUN_100002f94(&DAT_10055aae8,&DAT_10042f148);
  FUN_1000087a0(&DAT_10055aaf0,&DAT_10055aae8,&DAT_10042f148,
                PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0);
  SwiftUI::Form::_init();
  (extension_SwiftUI)::SwiftUI::FormStyle::_get_grouped();
  puVar5 = &DAT_10055aaf8;
  FUN_1000087a0(&DAT_10055aaf8,&DAT_10055aae0,&DAT_10042f140,
                PTR_SwiftUI__SwiftUI__Form<undefined>_>SwiftUI__View_100522d68);
  puVar6 = &DAT_10055a738;
  FUN_1000036d0(&DAT_10055a738,PTR_typeMetadataAccessor_100522318,
                PTR_SwiftUI__SwiftUI__GroupedFormStyle_>SwiftUI__FormStyle_100522310);
  lVar2 = local_138;
  (extension_SwiftUI)::SwiftUI::View::_formStyle
            (local_138,puVar8,puVar4,GVar3.unknown,puVar5,puVar6);
  (**(code **)(lVar10 + 8))(puVar8,GVar3.unknown);
  AVar7.unknown = puVar9;
  (**(code **)(lVar11 + 8))();
  AVar7 = SwiftUI::Alignment::get_topLeading(AVar7);
  *(undefined **)(puVar9 + -0x10) = AVar7.unknown;
  *(undefined **)(puVar9 + -8) = puVar4;
  puVar9[-0x18] = 0;
  *(undefined8 *)(puVar9 + -0x20) = 0x7ff0000000000000;
  puVar9[-0x28] = 1;
  *(undefined8 *)(puVar9 + -0x30) = 0;
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  puVar4 = &DAT_10055ab00;
  FUN_100002f94(&DAT_10055ab00,&DAT_10042f150);
  puVar1 = (undefined8 *)(lVar2 + *(int *)(puVar4 + 0x24));
  puVar1[9] = uStack_98;
  puVar1[8] = local_a0;
  puVar1[0xb] = uStack_88;
  puVar1[10] = uStack_90;
  puVar1[0xd] = uStack_78;
  puVar1[0xc] = local_80;
  puVar1[1] = uStack_d8;
  *puVar1 = local_e0;
  puVar1[3] = uStack_c8;
  puVar1[2] = unaff_x20;
  puVar1[5] = uStack_b8;
  puVar1[4] = local_c0;
  puVar1[7] = uStack_a8;
  puVar1[6] = uStack_b0;
  puVar4 = &DAT_100538c50;
  _swift_allocObject(&DAT_100538c50,0x60,7);
  uVar12 = unaff_x20[4];
  uVar14 = unaff_x20[7];
  uVar13 = unaff_x20[6];
  *(undefined8 *)(puVar4 + 0x38) = unaff_x20[5];
  *(undefined8 *)(puVar4 + 0x30) = uVar12;
  *(undefined8 *)(puVar4 + 0x48) = uVar14;
  *(undefined8 *)(puVar4 + 0x40) = uVar13;
  uVar12 = unaff_x20[8];
  *(undefined8 *)(puVar4 + 0x58) = unaff_x20[9];
  *(undefined8 *)(puVar4 + 0x50) = uVar12;
  uVar14 = *unaff_x20;
  uVar13 = unaff_x20[3];
  uVar12 = unaff_x20[2];
  *(undefined8 *)(puVar4 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar4 + 0x10) = uVar14;
  *(undefined8 *)(puVar4 + 0x28) = uVar13;
  *(undefined8 *)(puVar4 + 0x20) = uVar12;
  puVar5 = &DAT_10055ab08;
  FUN_100002f94(&DAT_10055ab08,&DAT_10042f158);
  puVar1 = (undefined8 *)(lVar2 + *(int *)(puVar5 + 0x24));
  *puVar1 = FUN_1002e1414;
  puVar1[1] = puVar4;
  puVar1[2] = 0;
  puVar1[3] = 0;
  FUN_1002e141c();
  return;
}

