// rea decompile_all
// name: FUN_1002fb884
// address: 0x1002fb884
// body: available
// range: 0x1002fb884-0x1002fbabb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002fb884(undefined8 *param_1,Alignment param_2,undefined8 param_3)

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
  char local_f0;
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
  puVar4 = &DAT_10055b490;
  FUN_100002f94(&DAT_10055b490,&DAT_10042fe40);
  AVar3.unknown = (undefined *)unaff_x20;
  FUN_1002fbabc((long)param_1 + (long)*(int *)(puVar4 + 0x2c));
  SwiftUI::Alignment::get_center(AVar3);
  SwiftUI::_FrameLayout::_init((Alignment)0x407e000000000000);
  puVar4 = &DAT_10055b498;
  FUN_100002f94(&DAT_10055b498,&DAT_10042fe48);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar4 + 0x24));
  puVar1[1] = uStack_78;
  *puVar1 = local_80;
  puVar1[3] = uStack_68;
  puVar1[2] = uStack_70;
  puVar1[5] = uStack_58;
  puVar1[4] = local_60;
  puVar4 = &DAT_10055b4a0;
  FUN_100002f94(&DAT_10055b4a0,&DAT_10042fe50);
  *(undefined2 *)((long)param_1 + (long)*(int *)(puVar4 + 0x24)) = 0x101;
  uVar10 = unaff_x20[6];
  SVar5.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar5);
  uVar11 = 0x3ff0000000000000;
  if (local_81 == '\0') {
    uVar11 = 0;
  }
  puVar4 = &DAT_10055b4a8;
  FUN_100002f94(&DAT_10055b4a8,&DAT_10042fe60);
  *(undefined8 *)((long)param_1 + (long)*(int *)(puVar4 + 0x24)) = uVar11;
  MVar6.unknown = &DAT_10055b4b0;
  FUN_100002f94(&DAT_10055b4b0,&DAT_10042fe68);
  iVar2 = *(int *)(MVar6.unknown + 0x24);
  MVar6 = SwiftUI::Material::get_ultraThin(MVar6);
  SVar7 = SwiftUI::Edge::Set::get_all(MVar6.unknown);
  puVar4 = &DAT_10054a658;
  FUN_100002f94(&DAT_10054a658,&DAT_10041b640);
  *(char *)((long)param_1 + (long)*(int *)(puVar4 + 0x24) + (long)iVar2) = (char)SVar7.unknown;
  SwiftUI::State::get_wrappedValue(SVar5);
  local_f0 = (char)uVar10;
  uVar10 = 0;
  if (local_f0 == '\0') {
    uVar10 = 0x4032000000000000;
  }
  puVar4 = &DAT_10055b4b8;
  FUN_100002f94(&DAT_10055b4b8,&DAT_10042fe78);
  iVar2 = *(int *)(puVar4 + 0x24);
  *(undefined8 *)((long)param_1 + (long)iVar2) = uVar10;
  *(undefined1 *)((undefined8 *)((long)param_1 + (long)iVar2) + 1) = 0;
  puVar4 = &DAT_100539a08;
  _swift_allocObject(&DAT_100539a08,0x60,7);
  uVar10 = unaff_x20[4];
  uVar9 = unaff_x20[7];
  uVar11 = unaff_x20[6];
  *(undefined8 *)(puVar4 + 0x38) = unaff_x20[5];
  *(undefined8 *)(puVar4 + 0x30) = uVar10;
  *(undefined8 *)(puVar4 + 0x48) = uVar9;
  *(undefined8 *)(puVar4 + 0x40) = uVar11;
  uVar10 = unaff_x20[8];
  *(undefined8 *)(puVar4 + 0x58) = unaff_x20[9];
  *(undefined8 *)(puVar4 + 0x50) = uVar10;
  uVar9 = *unaff_x20;
  uVar11 = unaff_x20[3];
  uVar10 = unaff_x20[2];
  *(undefined8 *)(puVar4 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar4 + 0x10) = uVar9;
  *(undefined8 *)(puVar4 + 0x28) = uVar11;
  *(undefined8 *)(puVar4 + 0x20) = uVar10;
  puVar8 = &DAT_10055b4c0;
  FUN_100002f94(&DAT_10055b4c0,&DAT_10042fe80);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar8 + 0x24));
  *param_1 = FUN_1000bcca4;
  param_1[1] = puVar4;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1001281d4();
  return;
}

