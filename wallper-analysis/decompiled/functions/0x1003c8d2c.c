// rea decompile_all
// name: FUN_1003c8d2c
// address: 0x1003c8d2c
// body: available
// range: 0x1003c8d2c-0x1003c8f27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003c8d2c(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [120];
  undefined8 *local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar2 = &DAT_100560c48;
  FUN_100002f94(&DAT_100560c48,&DAT_1004368e8);
  lVar4 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uStack_88 = unaff_x20[9];
  local_90 = unaff_x20[8];
  uStack_78 = unaff_x20[0xb];
  uStack_80 = unaff_x20[10];
  local_70 = unaff_x20[0xc];
  uStack_c8 = unaff_x20[1];
  local_d0 = *unaff_x20;
  uStack_b8 = unaff_x20[3];
  uStack_c0 = unaff_x20[2];
  uStack_a8 = unaff_x20[5];
  local_b0 = unaff_x20[4];
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  puVar3 = &DAT_10053e158;
  _swift_allocObject(&DAT_10053e158,0x78,7);
  uVar5 = unaff_x20[8];
  uVar7 = unaff_x20[0xb];
  uVar6 = unaff_x20[10];
  *(undefined8 *)(puVar3 + 0x58) = unaff_x20[9];
  *(undefined8 *)(puVar3 + 0x50) = uVar5;
  *(undefined8 *)(puVar3 + 0x68) = uVar7;
  *(undefined8 *)(puVar3 + 0x60) = uVar6;
  *(undefined8 *)(puVar3 + 0x70) = unaff_x20[0xc];
  uVar5 = *unaff_x20;
  uVar7 = unaff_x20[3];
  uVar6 = unaff_x20[2];
  *(undefined8 *)(puVar3 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar3 + 0x10) = uVar5;
  *(undefined8 *)(puVar3 + 0x28) = uVar7;
  *(undefined8 *)(puVar3 + 0x20) = uVar6;
  uVar7 = unaff_x20[4];
  uVar6 = unaff_x20[7];
  uVar5 = unaff_x20[6];
  *(undefined8 *)(puVar3 + 0x38) = unaff_x20[5];
  *(undefined8 *)(puVar3 + 0x30) = uVar7;
  *(undefined8 *)(puVar3 + 0x48) = uVar6;
  *(undefined8 *)(puVar3 + 0x40) = uVar5;
  local_e0 = &local_d0;
  FUN_1003e6584(&local_d0,auStack_158);
  FUN_100002f94(&DAT_100560c50,&DAT_1004368f0);
  FUN_1003ef420();
  SwiftUI::Button::_init();
  FUN_1000087a0(&DAT_100560c90,&DAT_100560c48,&DAT_1004368e8,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
  FUN_1003ef608();
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle(param_1);
  (**(code **)(lVar4 + 8))(auStack_160 + -extraout_x8,puVar2);
  puVar2 = &DAT_10053e180;
  _swift_allocObject(&DAT_10053e180,0x78,7);
  *(undefined8 *)(puVar2 + 0x58) = uStack_88;
  *(undefined8 *)(puVar2 + 0x50) = local_90;
  *(undefined8 *)(puVar2 + 0x68) = uStack_78;
  *(undefined8 *)(puVar2 + 0x60) = uStack_80;
  *(undefined8 *)(puVar2 + 0x70) = local_70;
  *(undefined8 *)(puVar2 + 0x18) = uStack_c8;
  *(undefined8 *)(puVar2 + 0x10) = local_d0;
  *(undefined8 *)(puVar2 + 0x28) = uStack_b8;
  *(undefined8 *)(puVar2 + 0x20) = uStack_c0;
  *(undefined8 *)(puVar2 + 0x38) = uStack_a8;
  *(undefined8 *)(puVar2 + 0x30) = local_b0;
  *(undefined8 *)(puVar2 + 0x48) = uStack_98;
  *(undefined8 *)(puVar2 + 0x40) = uStack_a0;
  puVar3 = &DAT_100560ca0;
  FUN_100002f94(&DAT_100560ca0,&DAT_100436910);
  iVar1 = *(int *)(puVar3 + 0x24);
  *(undefined8 *)(param_1 + iVar1) = FUN_1003ef69c;
  ((undefined8 *)(param_1 + iVar1))[1] = puVar2;
  FUN_1003e6584(&local_d0,auStack_158);
  return;
}

