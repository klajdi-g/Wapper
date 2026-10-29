// rea decompile_all
// name: FUN_10026f308
// address: 0x10026f308
// body: available
// range: 0x10026f308-0x10026f397 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10026f308(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  Published *pPVar6;
  undefined8 local_38;
  
  uVar5 = *param_1;
  pPVar6 = (Published *)*param_2;
  puVar3 = &DAT_10042d1d8;
  _swift_getKeyPath(&DAT_10042d1d8);
  puVar4 = &DAT_10042d200;
  _swift_getKeyPath(&DAT_10042d200);
  local_38 = uVar5;
  _swift_bridgeObjectRetain(uVar5);
  _swift_retain(pPVar6);
  Combine::Published::_set_subscript(pPVar6,&local_38,pPVar6,puVar3,puVar4);
  puVar1 = (undefined8 *)((long)&pPVar6->unknown + _TtC7Wallper17VideoLibraryStore::lookupCache);
  uVar5 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  FUN_10027f5e8(uVar5,uVar2);
  return;
}

