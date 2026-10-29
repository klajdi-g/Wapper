// rea decompile_all
// name: FUN_1002dfc20
// address: 0x1002dfc20
// body: available
// range: 0x1002dfc20-0x1002dfd77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002dfc20(TaskPriority param_1)

{
  undefined *puVar1;
  TaskPriority TVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_90 [80];
  
  puVar1 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_90 + -extraout_x8;
  FUN_1002dbafc();
  puVar1 = &DAT_100538c78;
  _swift_allocObject(&DAT_100538c78,0x60,7);
  uVar4 = *(undefined8 *)((long)param_1.unknown + 0x20);
  uVar7 = *(undefined8 *)((long)param_1.unknown + 0x38);
  uVar6 = *(undefined8 *)((long)param_1.unknown + 0x30);
  *(undefined8 *)(puVar1 + 0x38) = *(undefined8 *)((long)param_1.unknown + 0x28);
  *(undefined8 *)(puVar1 + 0x30) = uVar4;
  *(undefined8 *)(puVar1 + 0x48) = uVar7;
  *(undefined8 *)(puVar1 + 0x40) = uVar6;
  uVar4 = *(undefined8 *)((long)param_1.unknown + 0x40);
  *(undefined8 *)(puVar1 + 0x58) = *(undefined8 *)((long)param_1.unknown + 0x48);
  *(undefined8 *)(puVar1 + 0x50) = uVar4;
  uVar7 = *(undefined8 *)param_1.unknown;
  uVar6 = *(undefined8 *)((long)param_1.unknown + 0x18);
  uVar4 = *(undefined8 *)((long)param_1.unknown + 0x10);
  *(undefined8 *)(puVar1 + 0x18) = *(undefined8 *)((long)param_1.unknown + 8);
  *(undefined8 *)(puVar1 + 0x10) = uVar7;
  *(undefined8 *)(puVar1 + 0x28) = uVar6;
  *(undefined8 *)(puVar1 + 0x20) = uVar4;
  FUN_1002e141c(param_1.unknown,auStack_90);
  Swift::TaskPriority::get_userInitiated(param_1);
  TVar2 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar2.unknown + -8) + 0x38))(puVar5,0,1,TVar2.unknown);
  puVar3 = &DAT_100538ca0;
  _swift_allocObject(&DAT_100538ca0,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(code **)(puVar3 + 0x20) = FUN_1002e1450;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  _swift_retain(puVar1);
  uVar4 = 0;
  FUN_100176d50(0,0,puVar5,&DAT_10042f168,puVar3);
  _swift_release(puVar1);
  _swift_release(uVar4);
  FUN_10002a29c(puVar5,&DAT_100561090,&DAT_10041c870);
  return;
}

