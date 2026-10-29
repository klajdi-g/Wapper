// rea decompile_all
// name: FUN_100288368
// address: 0x100288368
// body: available
// range: 0x100288368-0x10028841b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100288368(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long local_68 [3];
  undefined *local_50;
  undefined *local_48;
  undefined1 local_40 [16];
  
  puVar2 = &DAT_100559028;
  FUN_100002f94(&DAT_100559028,&BYTE_10042d7f8);
  puVar3 = &DAT_100559030;
  local_50 = puVar2;
  FUN_1000087a0(&DAT_100559030,&DAT_100559028,&BYTE_10042d7f8,
                PTR__Foundation__Swift__Array<undefined>_>Foundation__ContiguousBytes_100520e50);
  plVar4 = local_68;
  local_68[0] = param_1;
  local_48 = puVar3;
  FUN_100007bd0(plVar4,puVar2);
  lVar1 = *plVar4 + 0x20;
  lVar5 = *(long *)(*plVar4 + 0x10);
  _swift_bridgeObjectRetain(param_1);
  FUN_100287b18(local_40,lVar1,lVar1 + lVar5);
  FUN_100043f24(local_68);
  return local_40;
}

