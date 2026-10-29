// rea decompile_all
// name: FUN_1000cfad8
// address: 0x1000cfad8
// body: available
// range: 0x1000cfad8-0x1000cfd33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000cfad8(long param_1)

{
  char *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  HorizontalAlignment HVar5;
  undefined *puVar6;
  void *pvVar7;
  long extraout_x8;
  void *unaff_x20;
  char *pcVar8;
  undefined8 uVar9;
  char acStack_1a0 [8];
  char acStack_198 [8];
  char acStack_190 [8];
  char acStack_188 [279];
  char local_71;
  
  puVar4 = &DAT_100551408;
  FUN_100002f94(&DAT_100551408,&DAT_1004230f0);
  HVar5.unknown = puVar4;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = -extraout_x8;
  pcVar8 = acStack_1a0 + lVar3;
  HVar5 = SwiftUI::HorizontalAlignment::get_center(HVar5);
  *(undefined **)pcVar8 = HVar5.unknown;
  pcVar1 = acStack_198 + lVar3;
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1[4] = '\0';
  pcVar1[5] = '\0';
  pcVar1[6] = '$';
  pcVar1[7] = '@';
  acStack_190[lVar3] = '\0';
  puVar6 = &DAT_100551410;
  FUN_100002f94(&DAT_100551410,&DAT_1004230f8);
  FUN_1000cfd34(pcVar8 + *(int *)(puVar6 + 0x2c));
  local_71 = *(char *)((long)unaff_x20 + 8);
  uVar9 = 0x3ff0000000000000;
  if (local_71 == '\0') {
    uVar9 = 0x3fd999999999999a;
  }
  puVar6 = &DAT_100551418;
  FUN_100002f94(&DAT_100551418,&DAT_100423100);
  *(undefined8 *)(pcVar8 + *(int *)(puVar6 + 0x24)) = uVar9;
  puVar6 = &DAT_100551420;
  FUN_100002f94(&DAT_100551420,&DAT_100423108);
  pcVar8[*(int *)(puVar6 + 0x24)] = local_71;
  puVar6 = &DAT_100529be0;
  _swift_allocObject(&DAT_100529be0,0x130,7);
  _memcpy(puVar6 + 0x10,unaff_x20,0x120);
  pcVar1 = pcVar8 + *(int *)(puVar4 + 0x24);
  *(code **)pcVar1 = FUN_1000d583c;
  *(undefined **)(pcVar1 + 8) = puVar6;
  pcVar1[0x10] = '\0';
  pcVar1[0x11] = '\0';
  pcVar1[0x12] = '\0';
  pcVar1[0x13] = '\0';
  pcVar1[0x14] = '\0';
  pcVar1[0x15] = '\0';
  pcVar1[0x16] = '\0';
  pcVar1[0x17] = '\0';
  pcVar1[0x18] = '\0';
  pcVar1[0x19] = '\0';
  pcVar1[0x1a] = '\0';
  pcVar1[0x1b] = '\0';
  pcVar1[0x1c] = '\0';
  pcVar1[0x1d] = '\0';
  pcVar1[0x1e] = '\0';
  pcVar1[0x1f] = '\0';
  puVar6 = &DAT_100529c08;
  _swift_allocObject(&DAT_100529c08,0x130,7);
  _memcpy(puVar6 + 0x10,unaff_x20,0x120);
  FUN_1000d584c();
  pvVar7 = unaff_x20;
  FUN_1000d584c();
  FUN_1000d5880();
  (extension_SwiftUI)::SwiftUI::View::_onChange
            (param_1,&local_71,0,FUN_1000d5844,puVar6,puVar4,
             PTR___type_metadata_for_Swift_Bool_100523b70,pvVar7,
             PTR___protocol_witness_table_for_Swift_Bool___Swift_Equatable_in_Swift_100523b78);
  _swift_release(puVar6);
  FUN_10002a29c(pcVar8,&DAT_100551408,&DAT_1004230f0);
  puVar4 = &DAT_100529c30;
  _swift_allocObject(&DAT_100529c30,0x130,7);
  _memcpy(puVar4 + 0x10,unaff_x20,0x120);
  puVar6 = &DAT_100551450;
  FUN_100002f94(&DAT_100551450,&DAT_100423118);
  puVar2 = (undefined8 *)(param_1 + *(int *)(puVar6 + 0x24));
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = FUN_1000d5a08;
  puVar2[3] = puVar4;
  FUN_1000d584c();
  return;
}

