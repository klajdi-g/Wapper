// rea decompile_all
// name: FUN_1000c8144
// address: 0x1000c8144
// body: available
// range: 0x1000c8144-0x1000c828b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000c8144(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  long extraout_x12;
  long lVar4;
  Published *pPVar5;
  Published PStack_70;
  undefined1 auStack_68 [24];
  
  puVar1 = &DAT_10054ac58;
  FUN_100002f94(&DAT_10054ac58,&DAT_10041bf70);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar1 + -8) + 0x40));
  lVar4 = (long)&PStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  pPVar5 = (Published *)(lVar4 - extraout_x12);
  _swift_beginAccess(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    lVar2 = 0;
    FUN_1000c8bec();
    (**(code **)(*(long *)(lVar2 + -8) + 0x38))(pPVar5,1,1,lVar2);
    puVar1 = &DAT_100422d28;
    _swift_getKeyPath(&DAT_100422d28);
    puVar3 = &DAT_100422d50;
    _swift_getKeyPath(&DAT_100422d50);
    FUN_1000087e4(pPVar5,lVar4,&DAT_10054ac58,&DAT_10041bf70);
    Combine::Published::_set_subscript(pPVar5,lVar4,param_1,puVar1,puVar3);
    FUN_10002a29c(pPVar5,&DAT_10054ac58,&DAT_10041bf70);
  }
  return;
}

