// rea decompile_all
// name: FUN_100406a40
// address: 0x100406a40
// body: available
// range: 0x100406a40-0x100406c9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_100406a40(long param_1,long param_2,code *param_3,code *param_4)

{
  undefined *puVar1;
  Date DVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long local_70;
  code *local_68;
  
  puVar1 = &DAT_10054b950;
  local_70 = param_2;
  local_68 = param_4;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar1 + -8) + 0x40));
  lVar7 = (long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = lVar7 - extraout_x12;
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar6 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar6 + 0x40));
  lVar8 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar9 = lVar8 - extraout_x12_00;
  lVar3 = 0;
  FUN_10040211c();
  FUN_1000087e4(param_1 + *(int *)(lVar3 + 0x2c),lVar10,&DAT_10054b950,&DAT_10041d870);
  pcVar5 = *(code **)(lVar6 + 0x30);
  lVar4 = lVar10;
  (*pcVar5)(lVar10,1,DVar2.unknown);
  if ((int)lVar4 == 1) {
    (*param_3)(lVar9);
    lVar4 = lVar10;
    (*pcVar5)(lVar10,1,DVar2.unknown);
    if ((int)lVar4 != 1) {
      FUN_10002a29c(lVar10,&DAT_10054b950,&DAT_10041d870);
    }
  }
  else {
    (**(code **)(lVar6 + 0x20))(lVar9,lVar10,DVar2.unknown);
  }
  FUN_1000087e4(local_70 + *(int *)(lVar3 + 0x2c),lVar7,&DAT_10054b950,&DAT_10041d870);
  lVar4 = lVar7;
  (*pcVar5)(lVar7,1,DVar2.unknown);
  if ((int)lVar4 == 1) {
    (*param_3)(lVar8);
    lVar4 = lVar7;
    (*pcVar5)(lVar7,1,DVar2.unknown);
    if ((int)lVar4 != 1) {
      FUN_10002a29c(lVar7,&DAT_10054b950,&DAT_10041d870);
    }
  }
  else {
    (**(code **)(lVar6 + 0x20))(lVar8,lVar7,DVar2.unknown);
  }
  lVar4 = lVar9;
  (*local_68)(lVar9,lVar8);
  pcVar5 = *(code **)(lVar6 + 8);
  (*pcVar5)(lVar8,DVar2.unknown);
  (*pcVar5)(lVar9,DVar2.unknown);
  return (uint)lVar4 & 1;
}

