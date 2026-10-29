// rea decompile_all
// name: FUN_10012330c
// address: 0x10012330c
// body: available
// range: 0x10012330c-0x1001234cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10012330c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined8 *unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 local_70;
  undefined8 local_68;
  
  puVar1 = &DAT_1005539e0;
  local_70 = param_2;
  FUN_100002f94(&DAT_1005539e0,&DAT_100426a78);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar1 + -8) + 0x40));
  lVar5 = (long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar6 = lVar5 - extraout_x12;
  puVar1 = &DAT_10054a360;
  FUN_100002f94(&DAT_10054a360,&DAT_10041a330);
  lVar4 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100007e1c(param_1,lVar6,&DAT_1005539e0,&DAT_100426a78);
  lVar2 = lVar6;
  (**(code **)(lVar4 + 0x30))(lVar6,1,puVar1);
  if ((int)lVar2 == 1) {
    FUN_10002a29c(lVar6,&DAT_1005539e0,&DAT_100426a78);
    FUN_10027f1a8(lVar5,local_70,param_3);
    _swift_bridgeObjectRelease(param_3);
    FUN_10002a29c(lVar5,&DAT_1005539e0,&DAT_100426a78);
  }
  else {
    FUN_100007e1c(lVar6,lVar6 - extraout_x8_00,&DAT_10054a360,&DAT_10041a330);
    uVar3 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native(uVar3);
    local_68 = *unaff_x20;
    FUN_100340d10(lVar6 - extraout_x8_00,local_70,param_3,uVar3);
    _swift_bridgeObjectRelease(param_3);
    *unaff_x20 = local_68;
  }
  return;
}

