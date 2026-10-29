// rea decompile_all
// name: FUN_100345bfc
// address: 0x100345bfc
// body: available
// range: 0x100345bfc-0x100345ec3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100345bfc(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  Alignment AVar4;
  undefined *puVar5;
  State SVar6;
  Material MVar7;
  Set SVar8;
  long extraout_x8;
  undefined8 *unaff_x20;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 local_150 [18];
  undefined8 local_c0;
  undefined8 uStack_b8;
  char local_a1;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  puVar3 = &DAT_10055d400;
  puVar5 = &DAT_100432ad8;
  FUN_100002f94();
  AVar4.unknown = puVar3;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = (undefined8 *)((long)local_150 + -extraout_x8);
  AVar4 = SwiftUI::Alignment::get_center(AVar4);
  *puVar9 = AVar4.unknown;
  *(undefined **)((long)local_150 + -extraout_x8 + 8) = puVar5;
  puVar5 = &DAT_10055d408;
  FUN_100002f94(&DAT_10055d408,&DAT_100432ae0);
  AVar4.unknown = (undefined *)unaff_x20;
  FUN_100345ec4((long)puVar9 + (long)*(int *)(puVar5 + 0x2c));
  SwiftUI::Alignment::get_center(AVar4);
  SwiftUI::_FrameLayout::_init((Alignment)0x407e000000000000);
  puVar5 = &DAT_10055d410;
  FUN_100002f94(&DAT_10055d410,&DAT_100432ae8);
  puVar1 = (undefined8 *)((long)puVar9 + (long)*(int *)(puVar5 + 0x24));
  puVar1[1] = uStack_98;
  *puVar1 = local_a0;
  puVar1[3] = uStack_88;
  puVar1[2] = uStack_90;
  puVar1[5] = uStack_78;
  puVar1[4] = local_80;
  puVar5 = &DAT_10055d418;
  FUN_100002f94(&DAT_10055d418,&DAT_100432af0);
  *(undefined2 *)((long)puVar9 + (long)*(int *)(puVar5 + 0x24)) = 0x101;
  uStack_b8 = unaff_x20[0xe];
  local_c0 = unaff_x20[0xd];
  local_150[1] = unaff_x20[0xe];
  local_150[0] = unaff_x20[0xd];
  SVar6.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar6);
  uVar12 = 0x3ff0000000000000;
  if (local_a1 == '\0') {
    uVar12 = 0;
  }
  puVar5 = &DAT_10055d420;
  FUN_100002f94(&DAT_10055d420,&DAT_100432af8);
  *(undefined8 *)((long)puVar9 + (long)*(int *)(puVar5 + 0x24)) = uVar12;
  MVar7.unknown = &DAT_10055d428;
  FUN_100002f94(&DAT_10055d428,&DAT_100432b00);
  iVar2 = *(int *)(MVar7.unknown + 0x24);
  MVar7 = SwiftUI::Material::get_ultraThin(MVar7);
  SVar8 = SwiftUI::Edge::Set::get_all(MVar7.unknown);
  puVar5 = &DAT_10054a658;
  FUN_100002f94(&DAT_10054a658,&DAT_10041b640);
  *(char *)((long)puVar9 + (long)*(int *)(puVar5 + 0x24) + (long)iVar2) = (char)SVar8.unknown;
  SwiftUI::State::get_wrappedValue(SVar6);
  uVar12 = 0;
  if ((char)local_150[0] == '\0') {
    uVar12 = 0x4032000000000000;
  }
  iVar2 = *(int *)(puVar3 + 0x24);
  *(undefined8 *)((long)puVar9 + (long)iVar2) = uVar12;
  *(undefined1 *)((undefined8 *)((long)puVar9 + (long)iVar2) + 1) = 0;
  FUN_10034b2dc();
  (extension_SwiftUI)::SwiftUI::View::_onExitCommand();
  FUN_10002a29c(puVar9,&DAT_10055d400,&DAT_100432ad8);
  puVar3 = &DAT_10053b880;
  _swift_allocObject(&DAT_10053b880,0x99,7);
  uVar12 = unaff_x20[0xc];
  uVar11 = unaff_x20[0xf];
  uVar10 = unaff_x20[0xe];
  *(undefined8 *)(puVar3 + 0x78) = unaff_x20[0xd];
  *(undefined8 *)(puVar3 + 0x70) = uVar12;
  *(undefined8 *)(puVar3 + 0x88) = uVar11;
  *(undefined8 *)(puVar3 + 0x80) = uVar10;
  uVar12 = *(undefined8 *)((long)unaff_x20 + 0x79);
  *(undefined8 *)(puVar3 + 0x91) = *(undefined8 *)((long)unaff_x20 + 0x81);
  *(undefined8 *)(puVar3 + 0x89) = uVar12;
  uVar12 = unaff_x20[4];
  uVar11 = unaff_x20[7];
  uVar10 = unaff_x20[6];
  *(undefined8 *)(puVar3 + 0x38) = unaff_x20[5];
  *(undefined8 *)(puVar3 + 0x30) = uVar12;
  *(undefined8 *)(puVar3 + 0x48) = uVar11;
  *(undefined8 *)(puVar3 + 0x40) = uVar10;
  uVar11 = unaff_x20[8];
  uVar10 = unaff_x20[0xb];
  uVar12 = unaff_x20[10];
  *(undefined8 *)(puVar3 + 0x58) = unaff_x20[9];
  *(undefined8 *)(puVar3 + 0x50) = uVar11;
  *(undefined8 *)(puVar3 + 0x68) = uVar10;
  *(undefined8 *)(puVar3 + 0x60) = uVar12;
  uVar11 = *unaff_x20;
  uVar10 = unaff_x20[3];
  uVar12 = unaff_x20[2];
  *(undefined8 *)(puVar3 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar3 + 0x10) = uVar11;
  *(undefined8 *)(puVar3 + 0x28) = uVar10;
  *(undefined8 *)(puVar3 + 0x20) = uVar12;
  puVar5 = &DAT_10055d468;
  FUN_100002f94(&DAT_10055d468,&DAT_100432b10);
  puVar1 = (undefined8 *)(param_1 + *(int *)(puVar5 + 0x24));
  *puVar1 = FUN_10034b57c;
  puVar1[1] = puVar3;
  puVar1[2] = 0;
  puVar1[3] = 0;
  FUN_10034b584();
  return;
}

