// rea decompile_all
// name: FUN_100349250
// address: 0x100349250
// body: available
// range: 0x100349250-0x10034941b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100349250(long param_1,long param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  State SVar3;
  Animation AVar4;
  Animation AVar5;
  long extraout_x8;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_80 [15];
  char local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar2 = &DAT_10055d568;
  FUN_100002f94(&DAT_10055d568,&DAT_100432c00);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_80 + -extraout_x8;
  FUN_10034941c(puVar6,param_3);
  uStack_68 = *(undefined8 *)(param_4 + 0x70);
  local_70 = *(undefined8 *)(param_4 + 0x68);
  SVar3.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar3);
  puVar2 = &DAT_10055d558;
  FUN_100002f94(&DAT_10055d558,&DAT_100432bf8);
  uVar7 = 0x3ff0000000000000;
  if (local_71 == '\0') {
    uVar7 = 0;
  }
  uVar8 = 0;
  if (local_71 == '\0') {
    uVar8 = 0x4020000000000000;
  }
  *(undefined8 *)(param_1 + *(int *)(puVar2 + 0x24)) = uVar7;
  FUN_1000087e4(puVar6,param_1,&DAT_10055d568,&DAT_100432c00);
  AVar4.unknown = &DAT_10055d548;
  FUN_100002f94(&DAT_10055d548,&DAT_100432bf0);
  iVar1 = *(int *)(AVar4.unknown + 0x24);
  *(undefined8 *)(param_1 + iVar1) = 0;
  ((undefined8 *)(param_1 + iVar1))[1] = uVar8;
  AVar4 = SwiftUI::Animation::easeOut(0.34,AVar4);
  AVar5 = SwiftUI::Animation::delay((double)param_2 * 0.05 + 0.12,AVar4);
  _swift_release(AVar4.unknown);
  FUN_10002a29c(puVar6,&DAT_10055d568,&DAT_100432c00);
  puVar2 = &DAT_10055d520;
  FUN_100002f94(&DAT_10055d520,&DAT_100432be8);
  iVar1 = *(int *)(puVar2 + 0x24);
  *(undefined8 *)(param_1 + iVar1) = AVar5.unknown;
  *(char *)((undefined8 *)(param_1 + iVar1) + 1) = local_71;
  return;
}

