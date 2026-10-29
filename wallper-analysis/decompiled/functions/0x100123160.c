// rea decompile_all
// name: FUN_100123160
// address: 0x100123160
// body: available
// range: 0x100123160-0x10012330b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100123160(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined8 *unaff_x20;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 local_70;
  undefined8 local_68;
  
  puVar1 = &DAT_100551e50;
  local_70 = param_2;
  FUN_100002f94(&DAT_100551e50,&DAT_100429e60);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar1 + -8) + 0x40));
  lVar6 = (long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar7 = lVar6 - extraout_x12;
  lVar2 = 0;
  FUN_100126a5c();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar5 + 0x40));
  lVar8 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_100007e1c(param_1,lVar7,&DAT_100551e50,&DAT_100429e60);
  lVar3 = lVar7;
  (**(code **)(lVar5 + 0x30))(lVar7,1,lVar2);
  if ((int)lVar3 == 1) {
    FUN_10002a29c(lVar7,&DAT_100551e50,&DAT_100429e60);
    FUN_10027ee20(lVar6,local_70,param_3);
    _swift_bridgeObjectRelease(param_3);
    FUN_10002a29c(lVar6,&DAT_100551e50,&DAT_100429e60);
  }
  else {
    FUN_10010b858(lVar7,lVar8);
    uVar4 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native(uVar4);
    local_68 = *unaff_x20;
    FUN_100340a40(lVar8,local_70,param_3,uVar4);
    _swift_bridgeObjectRelease(param_3);
    *unaff_x20 = local_68;
  }
  return;
}

