// rea decompile_all
// name: FUN_1002a9d18
// address: 0x1002a9d18
// body: available
// range: 0x1002a9d18-0x1002a9e63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002a9d18(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  Task TVar3;
  TaskPriority TVar4;
  undefined8 uVar5;
  long extraout_x8;
  undefined1 *puVar6;
  
  puVar2 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = DAT_10055a068;
  puVar6 = &stack0xffffffffffffffd0 + -extraout_x8;
  if (DAT_10055a068 == (undefined *)0x0) {
    TVar4.unknown = (undefined *)0x0;
  }
  else {
    TVar3.unknown = DAT_10055a068;
    _swift_retain();
    Swift::Task::cancel(TVar3);
    _swift_release(puVar2);
    TVar4.unknown = DAT_10055a068;
  }
  DAT_10055a068 = (undefined *)0x0;
  _swift_release();
  Swift::TaskPriority::get_utility(TVar4);
  TVar4 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar4.unknown + -8) + 0x38))(puVar6,0,1,TVar4.unknown);
  puVar2 = &DAT_1005379c0;
  _swift_allocObject(&DAT_1005379c0,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  _swift_retain(param_1);
  uVar5 = 0;
  FUN_100176d50(0,0,puVar6,&DAT_10042df78,puVar2);
  FUN_10002a29c(puVar6,&DAT_100561090,&DAT_10041c870);
  uVar1 = DAT_10055a068;
  DAT_10055a068 = (undefined *)uVar5;
  _swift_release(uVar1);
  return;
}

