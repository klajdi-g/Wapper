// rea decompile_all
// name: FUN_1001635d8
// address: 0x1001635d8
// body: available
// range: 0x1001635d8-0x100163703 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100163700 to 0x1001609a4 FUN_1001609a4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001635d8(void)

{
  undefined *puVar1;
  URLQueryItem UVar2;
  long *plVar3;
  ulong uVar4;
  long unaff_x22;
  
  puVar1 = &DAT_10054f978;
  FUN_100002f94(&DAT_10054f978,&DAT_10042a840);
  UVar2 = Foundation::URLQueryItem::typeMetadataAccessor();
  uVar4 = (ulong)*(byte *)(*(long *)(UVar2.unknown + -8) + 0x50);
  _swift_allocObject(puVar1,(uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff)) +
                            *(long *)(*(long *)(UVar2.unknown + -8) + 0x48) * 2,uVar4 | 7);
  *(undefined **)(unaff_x22 + 0x38) = puVar1;
  *(undefined8 *)(puVar1 + 0x18) = 4;
  *(undefined8 *)(puVar1 + 0x10) = 2;
  Foundation::URLQueryItem::_init();
  Foundation::URLQueryItem::_init();
  plVar3 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x40) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100163704;
  FUN_1001609a4(0x686372616573,0xe600000000000000,puVar1);
  return;
}

