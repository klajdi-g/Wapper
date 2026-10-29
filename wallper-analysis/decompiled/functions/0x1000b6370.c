// rea decompile_all
// name: FUN_1000b6370
// address: 0x1000b6370
// body: available
// range: 0x1000b6370-0x1000b66d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000b6370(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 uVar4;
  undefined *puVar5;
  Alignment AVar6;
  undefined *puVar7;
  State SVar8;
  undefined *puVar9;
  Binding<bool> isPresented;
  undefined4 uVar10;
  undefined8 uVar11;
  long extraout_x8;
  undefined8 *unaff_x20;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  String stringLiteral;
  undefined8 auStack_1c0 [5];
  undefined8 auStack_198 [2];
  undefined8 auStack_188 [3];
  undefined8 uStack_170;
  LocalizedStringKey local_168;
  undefined *local_160 [4];
  undefined8 local_140 [2];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  puVar5 = &DAT_1005507e8;
  puVar7 = &DAT_1004221a0;
  local_160[1] = (undefined *)param_1;
  FUN_100002f94();
  AVar6.unknown = puVar5;
  local_160[0] = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = -extraout_x8;
  puVar12 = (undefined8 *)((long)&uStack_170 + lVar3);
  AVar6 = SwiftUI::Alignment::get_center(AVar6);
  *puVar12 = AVar6.unknown;
  *(undefined **)((long)&local_168 + lVar3) = puVar7;
  AVar6.unknown = &DAT_1005507f0;
  puVar7 = &DAT_1004221a8;
  FUN_100002f94();
  puVar1 = (undefined8 *)((long)puVar12 + (long)*(int *)(AVar6.unknown + 0x2c));
  AVar6 = SwiftUI::Alignment::get_topTrailing(AVar6);
  *puVar1 = AVar6.unknown;
  puVar1[1] = puVar7;
  puVar7 = &DAT_1005507f8;
  puVar9 = &DAT_1004221b0;
  FUN_100002f94();
  AVar6.unknown = (undefined *)unaff_x20;
  FUN_1000b6adc((long)puVar1 + (long)*(int *)(puVar7 + 0x2c));
  AVar6 = SwiftUI::Alignment::get_center(AVar6);
  *(undefined **)((long)auStack_188 + lVar3 + 8) = AVar6.unknown;
  *(undefined **)((long)auStack_188 + lVar3 + 0x10) = puVar9;
  *(undefined1 *)((long)auStack_188 + lVar3) = 0;
  *(undefined8 *)((long)auStack_198 + lVar3 + 8) = 0x7ff0000000000000;
  *(undefined1 *)((long)auStack_198 + lVar3) = 1;
  *(undefined8 *)((long)auStack_1c0 + lVar3 + 0x20) = 0;
  uVar11 = 1;
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  puVar7 = &DAT_100550800;
  FUN_100002f94(&DAT_100550800,&DAT_1004221b8);
  puVar1 = (undefined8 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x24));
  puVar1[9] = uStack_90;
  puVar1[8] = local_98;
  puVar1[0xb] = uStack_80;
  puVar1[10] = local_88;
  puVar1[0xd] = uStack_70;
  puVar1[0xc] = local_78;
  puVar1[1] = uStack_d0;
  *puVar1 = local_d8;
  puVar1[3] = uStack_c0;
  puVar1[2] = local_c8;
  puVar1[5] = uStack_b0;
  puVar1[4] = local_b8;
  puVar1[7] = uStack_a0;
  puVar1[6] = local_a8;
  SwiftUI::AppStorage::get_wrappedValue((undefined *)unaff_x20[9]);
  uVar4 = (undefined1)local_140[0];
  puVar7 = &DAT_100529188;
  uVar10 = 7;
  _swift_allocObject(&DAT_100529188,0x70);
  uVar13 = unaff_x20[4];
  uVar15 = unaff_x20[7];
  uVar14 = unaff_x20[6];
  *(undefined8 *)(puVar7 + 0x38) = unaff_x20[5];
  *(undefined8 *)(puVar7 + 0x30) = uVar13;
  *(undefined8 *)(puVar7 + 0x48) = uVar15;
  *(undefined8 *)(puVar7 + 0x40) = uVar14;
  uVar13 = unaff_x20[8];
  uVar15 = unaff_x20[0xb];
  uVar14 = unaff_x20[10];
  *(undefined8 *)(puVar7 + 0x58) = unaff_x20[9];
  *(undefined8 *)(puVar7 + 0x50) = uVar13;
  *(undefined8 *)(puVar7 + 0x68) = uVar15;
  *(undefined8 *)(puVar7 + 0x60) = uVar14;
  uVar13 = *unaff_x20;
  uVar15 = unaff_x20[3];
  uVar14 = unaff_x20[2];
  *(undefined8 *)(puVar7 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar7 + 0x10) = uVar13;
  *(undefined8 *)(puVar7 + 0x28) = uVar15;
  *(undefined8 *)(puVar7 + 0x20) = uVar14;
  puVar2 = (undefined1 *)((long)puVar12 + (long)*(int *)(puVar5 + 0x24));
  *puVar2 = uVar4;
  *(code **)(puVar2 + 8) = FUN_1000bcb8c;
  *(undefined **)(puVar2 + 0x10) = puVar7;
  FUN_1000bcb94();
  isPresented.unknown = (undefined *)0xee003f6c6169726f;
  stringLiteral.bridgeObject = (void *)0xee003f6c6169726f;
  stringLiteral.str = (char *)0x7475742070696b53;
  local_168 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  local_160[3] = (undefined *)unaff_x20[7];
  local_160[2] = (undefined *)unaff_x20[6];
  SVar8.unknown = &DAT_10054ab50;
  uStack_170._4_4_ = uVar10;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_projectedValue(SVar8);
  puVar5 = &DAT_10054e178;
  FUN_100002f94(&DAT_10054e178,&DAT_10042f440);
  puVar9 = puVar5;
  FUN_1000bcbd0();
  puVar7 = &DAT_10054e208;
  FUN_1000087a0(&DAT_10054e208,&DAT_10054e178,&DAT_10042f440,
                PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0);
  *(undefined **)((long)auStack_188 + lVar3) = puVar7;
  *(undefined **)((long)auStack_188 + lVar3 + 8) =
       PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100522e18;
  *(undefined **)((long)auStack_198 + lVar3 + 8) = puVar9;
  *(undefined **)((long)auStack_1c0 + lVar3 + 0x20) = puVar5;
  *(undefined **)((long)auStack_198 + lVar3) = PTR___type_metadata_for_SwiftUI_Text_100522e28;
  puVar5 = local_160[0];
  *(undefined8 *)((long)auStack_1c0 + lVar3 + 0x10) = 0;
  *(undefined **)((long)auStack_1c0 + lVar3 + 0x18) = puVar5;
  *(undefined8 **)((long)auStack_1c0 + lVar3) = local_140;
  *(code **)((long)auStack_1c0 + lVar3 + 8) = FUN_1000b6a6c;
  (extension_SwiftUI)::SwiftUI::View::_alert(local_168,isPresented);
  _swift_bridgeObjectRelease(uVar11);
  _swift_bridgeObjectRelease(isPresented.unknown);
  _swift_release(local_140[1]);
  _swift_release(CONCAT71(local_140[0]._1_7_,(undefined1)local_140[0]));
  FUN_10002a29c(puVar12,&DAT_1005507e8,&DAT_1004221a0);
  return;
}

