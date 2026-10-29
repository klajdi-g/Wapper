// rea decompile_all
// name: FUN_1003b30d0
// address: 0x1003b30d0
// body: available
// range: 0x1003b30d0-0x1003b331b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003b30d0(undefined8 *param_1,Alignment param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  Alignment AVar3;
  undefined *puVar4;
  State SVar5;
  Material MVar6;
  Set SVar7;
  undefined *puVar8;
  undefined8 *unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char local_120;
  char local_81;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  AVar3 = SwiftUI::Alignment::get_center(param_2);
  *param_1 = AVar3.unknown;
  param_1[1] = param_3;
  puVar4 = &DAT_10055fc30;
  FUN_100002f94(&DAT_10055fc30,&DAT_100435658);
  AVar3.unknown = (undefined *)unaff_x20;
  FUN_1003b331c((long)param_1 + (long)*(int *)(puVar4 + 0x2c));
  SwiftUI::Alignment::get_center(AVar3);
  SwiftUI::_FrameLayout::_init((Alignment)0x407c200000000000);
  puVar4 = &DAT_10055fc38;
  FUN_100002f94(&DAT_10055fc38,&DAT_100435660);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar4 + 0x24));
  puVar1[1] = uStack_78;
  *puVar1 = local_80;
  puVar1[3] = uStack_68;
  puVar1[2] = uStack_70;
  puVar1[5] = uStack_58;
  puVar1[4] = local_60;
  puVar4 = &DAT_10055fc40;
  FUN_100002f94(&DAT_10055fc40,&DAT_100435668);
  *(undefined2 *)((long)param_1 + (long)*(int *)(puVar4 + 0x24)) = 0x101;
  uVar10 = unaff_x20[0xb];
  SVar5.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar5);
  uVar11 = 0x3ff0000000000000;
  if (local_81 == '\0') {
    uVar11 = 0;
  }
  puVar4 = &DAT_10055fc48;
  FUN_100002f94(&DAT_10055fc48,&DAT_100435678);
  *(undefined8 *)((long)param_1 + (long)*(int *)(puVar4 + 0x24)) = uVar11;
  MVar6.unknown = &DAT_10055fc50;
  FUN_100002f94(&DAT_10055fc50,&DAT_100435680);
  iVar2 = *(int *)(MVar6.unknown + 0x24);
  MVar6 = SwiftUI::Material::get_ultraThin(MVar6);
  SVar7 = SwiftUI::Edge::Set::get_all(MVar6.unknown);
  puVar4 = &DAT_10054a658;
  FUN_100002f94(&DAT_10054a658,&DAT_10041b640);
  *(char *)((long)param_1 + (long)*(int *)(puVar4 + 0x24) + (long)iVar2) = (char)SVar7.unknown;
  SwiftUI::State::get_wrappedValue(SVar5);
  local_120 = (char)uVar10;
  uVar10 = 0;
  if (local_120 == '\0') {
    uVar10 = 0x4032000000000000;
  }
  puVar4 = &DAT_10055fc58;
  FUN_100002f94(&DAT_10055fc58,&DAT_100435690);
  iVar2 = *(int *)(puVar4 + 0x24);
  *(undefined8 *)((long)param_1 + (long)iVar2) = uVar10;
  *(undefined1 *)((undefined8 *)((long)param_1 + (long)iVar2) + 1) = 0;
  puVar4 = &DAT_10053d510;
  _swift_allocObject(&DAT_10053d510,0x88,7);
  uVar10 = unaff_x20[8];
  uVar9 = unaff_x20[0xb];
  uVar11 = unaff_x20[10];
  *(undefined8 *)(puVar4 + 0x58) = unaff_x20[9];
  *(undefined8 *)(puVar4 + 0x50) = uVar10;
  *(undefined8 *)(puVar4 + 0x68) = uVar9;
  *(undefined8 *)(puVar4 + 0x60) = uVar11;
  uVar10 = unaff_x20[0xc];
  *(undefined8 *)(puVar4 + 0x78) = unaff_x20[0xd];
  *(undefined8 *)(puVar4 + 0x70) = uVar10;
  *(undefined8 *)(puVar4 + 0x80) = unaff_x20[0xe];
  uVar10 = *unaff_x20;
  uVar9 = unaff_x20[3];
  uVar11 = unaff_x20[2];
  *(undefined8 *)(puVar4 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar4 + 0x10) = uVar10;
  *(undefined8 *)(puVar4 + 0x28) = uVar9;
  *(undefined8 *)(puVar4 + 0x20) = uVar11;
  uVar10 = unaff_x20[4];
  uVar9 = unaff_x20[7];
  uVar11 = unaff_x20[6];
  *(undefined8 *)(puVar4 + 0x38) = unaff_x20[5];
  *(undefined8 *)(puVar4 + 0x30) = uVar10;
  *(undefined8 *)(puVar4 + 0x48) = uVar9;
  *(undefined8 *)(puVar4 + 0x40) = uVar11;
  puVar8 = &DAT_10055fc60;
  FUN_100002f94(&DAT_10055fc60,&DAT_100435698);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar8 + 0x24));
  *param_1 = FUN_1003b9dc8;
  param_1[1] = puVar4;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_10012ea94();
  return;
}

