// rea decompile_all
// name: FUN_10027e7ac
// address: 0x10027e7ac
// body: available
// range: 0x10027e7ac-0x10027e8fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_10027e7ac(undefined8 param_1)

{
  URL UVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 auStack_70 [2];
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar6 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar6 + 0x40));
  lVar4 = (long)auStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100558c08;
  FUN_100002f94(&DAT_100558c08,&DAT_10042d278);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = (undefined8 *)(lVar4 - extraout_x8_00);
  FUN_1000087e4(param_1,puVar5,&DAT_100558c08,&DAT_10042d278);
  puVar3 = puVar5;
  _swift_getEnumCaseMultiPayload(puVar5,puVar2);
  if ((int)puVar3 == 1) {
    auStack_70[1] = *puVar5;
    puVar2 = &DAT_100558bf8;
    FUN_100002f94(&DAT_100558bf8,&DAT_10042d268);
    Swift::CheckedContinuation::resume(auStack_70 + 1,puVar2);
  }
  else {
    (**(code **)(lVar6 + 0x20))(lVar4,puVar5,UVar1.unknown);
    puVar2 = &DAT_100558bf8;
    FUN_100002f94(&DAT_100558bf8,&DAT_10042d268);
    Swift::CheckedContinuation::resume(lVar4,puVar2);
  }
  return;
}

