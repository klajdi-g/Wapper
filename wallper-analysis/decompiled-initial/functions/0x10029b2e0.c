// rea decompile_all
// name: FUN_10029b2e0
// address: 0x10029b2e0
// body: available
// range: 0x10029b2e0-0x10029b3d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10029b2e0(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long extraout_x8;
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_70 [24];
  long local_58;
  
  FUN_10013fc5c(param_4,auStack_70);
  if (local_58 == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    FUN_100007bd0(auStack_70,local_58);
    lVar3 = *(long *)(local_58 + -8);
    (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar3 + 0x40));
    puVar2 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar3 + 0x10))(puVar2);
    puVar1 = puVar2;
    Swift::__bridgeAnythingToObjectiveC(puVar2,local_58);
    (**(code **)(lVar3 + 8))(puVar2,local_58);
    FUN_100043f24(auStack_70);
  }
  (*param_1)(param_2,param_3,puVar1);
  _swift_unknownObjectRelease(puVar1);
  return;
}

