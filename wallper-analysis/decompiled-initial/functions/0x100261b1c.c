// rea decompile_all
// name: FUN_100261b1c
// address: 0x100261b1c
// body: available
// range: 0x100261b1c-0x100261bb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100261b1c(long param_1)

{
  String *pSVar1;
  Hasher HVar2;
  Hasher HVar3;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  Swift::Hasher::init(0);
  Foundation::UUID::typeMetadataAccessor();
  FUN_1000036d0(&DAT_10054a128,PTR_typeMetadataAccessor_100520bd8,
                PTR_Foundation__Foundation__UUID_>Swift__Hashable_100520bf0);
  Swift::Hashable::hash((Hasher)auStack_78);
  pSVar1 = (String *)(unaff_x20 + *(int *)(param_1 + 0x14));
  HVar3.unknown = pSVar1->str;
  Swift::String::hash((Hasher)auStack_78,*pSVar1);
  HVar2.unknown = *(undefined **)(unaff_x20 + *(int *)(param_1 + 0x18));
  Swift::Hasher::_combine((__uint64)HVar2.unknown,HVar3);
  Swift::Hasher::_finalize(HVar2);
  return;
}

