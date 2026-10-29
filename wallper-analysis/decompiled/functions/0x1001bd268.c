// rea decompile_all
// name: FUN_1001bd268
// address: 0x1001bd268
// body: available
// range: 0x1001bd268-0x1001bd3f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001bd268(long param_1,char param_2,char param_3)

{
  Calendar CVar1;
  Date DVar2;
  long lVar3;
  Date DVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_70 [8];
  undefined1 *local_68;
  
  CVar1 = Foundation::Calendar::typeMetadataAccessor();
  lVar12 = *(long *)(CVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar12 + 0x40));
  puVar9 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar11 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar11 + 0x40));
  puVar10 = puVar9 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  FUN_10025ee04();
  lVar7 = 0x24;
  if (param_2 != '\0') {
    lVar7 = 0x28;
  }
  if (*(char *)(param_1 + *(int *)(lVar3 + lVar7)) == param_3) {
    return;
  }
  if (param_3 == '\x01') {
    DVar4 = Foundation::Date::init();
    Foundation::Calendar::get_current((Calendar)DVar4.unknown);
    puVar5 = puVar10;
    puVar8 = puVar9;
    FUN_1001d84f4(puVar10,puVar9);
    local_68 = puVar5;
    (**(code **)(lVar12 + 8))(puVar9,CVar1.unknown);
    (**(code **)(lVar11 + 8))(puVar10,DVar2.unknown);
    puVar9 = local_68;
    if (param_2 != '\0') {
      puVar9 = puVar8;
    }
    uVar6 = 5;
    FUN_10025f470(5,puVar9);
    lVar7 = 0;
    FUN_10025ee04();
    if (param_2 != '\0') {
      *(undefined8 *)(param_1 + *(int *)(lVar7 + 0x30)) = uVar6;
LAB_1001bd3b0:
      lVar7 = 0x28;
      goto LAB_1001bd3c4;
    }
    *(undefined8 *)(param_1 + *(int *)(lVar7 + 0x2c)) = uVar6;
  }
  else if (param_2 != '\0') goto LAB_1001bd3b0;
  lVar7 = 0x24;
LAB_1001bd3c4:
  lVar3 = 0;
  FUN_10025ee04();
  *(char *)(param_1 + *(int *)(lVar3 + lVar7)) = param_3;
  return;
}

