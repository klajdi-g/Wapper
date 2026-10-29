// rea decompile_all
// name: FUN_1002cbca0
// address: 0x1002cbca0
// body: available
// range: 0x1002cbca0-0x1002cbd2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002cbca0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  URL UVar3;
  URL UVar4;
  undefined *puVar5;
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  
  puVar2 = &DAT_100549de8;
  FUN_100002fe4(&DAT_100549de8,&DAT_100419f00);
  UVar3 = Foundation::URL::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100520a18;
  UVar4 = UVar3;
  FUN_1002cbd30();
  puVar5 = &DAT_100553da0;
  FUN_1000036d0(&DAT_100553da0,puVar1,PTR_Foundation__Foundation__URL_>Swift__Equatable_100520a38);
  local_50 = puVar2;
  puStack_48 = UVar3.unknown;
  local_40 = UVar4.unknown;
  puStack_38 = puVar5;
  _swift_getOpaqueTypeConformance2(&local_50,&DAT_100437e8c,1);
  return;
}

