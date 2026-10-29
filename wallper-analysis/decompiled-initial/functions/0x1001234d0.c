// rea decompile_all
// name: FUN_1001234d0
// address: 0x1001234d0
// body: available
// range: 0x1001234d0-0x100123683 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001234d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  Date DVar2;
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
  
  puVar1 = &DAT_10054b950;
  local_70 = param_2;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar1 + -8) + 0x40));
  lVar6 = (long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar7 = lVar6 - extraout_x12;
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar5 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar5 + 0x40));
  lVar8 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_100007e1c(param_1,lVar7,&DAT_10054b950,&DAT_10041d870);
  lVar3 = lVar7;
  (**(code **)(lVar5 + 0x30))(lVar7,1,DVar2.unknown);
  if ((int)lVar3 == 1) {
    FUN_10002a29c(lVar7,&DAT_10054b950,&DAT_10041d870);
    FUN_10027f060(lVar6,local_70,param_3);
    _swift_bridgeObjectRelease(param_3);
    FUN_10002a29c(lVar6,&DAT_10054b950,&DAT_10041d870);
  }
  else {
    (**(code **)(lVar5 + 0x20))(lVar8,lVar7,DVar2.unknown);
    uVar4 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native(uVar4);
    local_68 = *unaff_x20;
    FUN_100340e4c(lVar8,local_70,param_3,uVar4);
    _swift_bridgeObjectRelease(param_3);
    *unaff_x20 = local_68;
  }
  return;
}

