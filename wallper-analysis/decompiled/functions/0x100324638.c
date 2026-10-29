// rea decompile_all
// name: FUN_100324638
// address: 0x100324638
// body: available
// range: 0x100324638-0x10032488b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_100324638(long param_1,long param_2)

{
  bool bVar1;
  undefined *puVar2;
  Date DVar3;
  long lVar4;
  Date DVar5;
  undefined *puVar6;
  Date DVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar8;
  Date DVar9;
  Date DVar10;
  undefined *puVar11;
  long lVar12;
  undefined auStack_70 [8];
  long local_68;
  
  puVar2 = &DAT_10054b950;
  local_68 = param_2;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  puVar2 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar11 = puVar2 + -extraout_x12;
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar12 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar12 + 0x40));
  DVar9.unknown = puVar11 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  DVar10.unknown = DVar9.unknown + -extraout_x12_00;
  lVar4 = 0;
  FUN_10040211c();
  FUN_1000087e4(param_1 + *(int *)(lVar4 + 0x2c),puVar11,&DAT_10054b950,&DAT_10041d870);
  pcVar8 = *(code **)(lVar12 + 0x30);
  DVar5.unknown = puVar11;
  (*pcVar8)(puVar11,1,DVar3.unknown);
  if ((int)DVar5.unknown == 1) {
    Foundation::Date::get_distantPast(DVar5);
    puVar6 = puVar11;
    (*pcVar8)(puVar11,1,DVar3.unknown);
    if ((int)puVar6 != 1) {
      FUN_10002a29c(puVar11,&DAT_10054b950,&DAT_10041d870);
    }
  }
  else {
    (**(code **)(lVar12 + 0x20))(DVar10.unknown,puVar11,DVar3.unknown);
  }
  FUN_1000087e4(local_68 + *(int *)(lVar4 + 0x2c),puVar2,&DAT_10054b950,&DAT_10041d870);
  DVar7.unknown = puVar2;
  (*pcVar8)(puVar2,1,DVar3.unknown);
  DVar5 = DVar3;
  if ((int)DVar7.unknown == 1) {
    Foundation::Date::get_distantPast(DVar7);
    puVar11 = puVar2;
    (*pcVar8)(puVar2,1);
    if ((int)puVar11 != 1) {
      DVar5.unknown = &DAT_10041d870;
      FUN_10002a29c(puVar2,&DAT_10054b950);
    }
  }
  else {
    (**(code **)(lVar12 + 0x20))(DVar9.unknown,puVar2);
  }
  bVar1 = Foundation::Date::>_infix(DVar10,DVar9,DVar5);
  pcVar8 = *(code **)(lVar12 + 8);
  (*pcVar8)(DVar9.unknown,DVar3.unknown);
  (*pcVar8)(DVar10.unknown,DVar3.unknown);
  return bVar1;
}

