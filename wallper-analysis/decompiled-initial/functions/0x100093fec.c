// rea decompile_all
// name: FUN_100093fec
// address: 0x100093fec
// body: available
// range: 0x100093fec-0x1000940ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100093fec(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *local_50;
  undefined *puStack_48;
  undefined1 *local_40;
  undefined *puStack_38;
  
  ppuVar4 = &local_50;
  puVar1 = &DAT_100549d70;
  FUN_100002fe4(&DAT_100549d70,&DAT_100419e90);
  puVar2 = &DAT_10054ef38;
  FUN_100002fe4(&DAT_10054ef38,&DAT_100420400);
  puVar3 = &DAT_10054ef40;
  FUN_100094218(&DAT_10054ef40,&DAT_10054ef38,&DAT_100420400,FUN_1000940ac);
  local_50 = puVar2;
  puStack_48 = puVar3;
  _swift_getOpaqueTypeConformance2(&local_50,&DAT_100437eec,1);
  puStack_48 = PTR___type_metadata_for_Swift_String_100523a98;
  puStack_38 = PTR___protocol_witness_table_for_Swift_String___Swift_Equatable_in_Swift_100523ab0;
  local_50 = puVar1;
  local_40 = (undefined1 *)ppuVar4;
  _swift_getOpaqueTypeConformance2(&local_50,&DAT_100437e8c,1);
  return;
}

