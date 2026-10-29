// rea decompile_all
// name: FUN_1002841f0
// address: 0x1002841f0
// body: available
// range: 0x1002841f0-0x10028432f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1002841f0(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  URL UVar4;
  Date DVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  code *pcVar10;
  
  UVar4 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar4.unknown + -8) + 0x28))(param_1,param_2,UVar4.unknown);
  lVar3 = (long)*(int *)(param_3 + 0x18);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  DVar5 = Foundation::Date::typeMetadataAccessor();
  lVar9 = *(long *)(DVar5.unknown + -8);
  pcVar10 = *(code **)(lVar9 + 0x30);
  lVar6 = param_1 + lVar3;
  (*pcVar10)(lVar6,1,DVar5.unknown);
  lVar7 = param_2 + lVar3;
  (*pcVar10)(lVar7,1,DVar5.unknown);
  if ((int)lVar6 == 0) {
    if ((int)lVar7 == 0) {
      (**(code **)(lVar9 + 0x28))(param_1 + lVar3,param_2 + lVar3,DVar5.unknown);
      return param_1;
    }
    (**(code **)(lVar9 + 8))(param_1 + lVar3,DVar5.unknown);
  }
  else if ((int)lVar7 == 0) {
    (**(code **)(lVar9 + 0x20))(param_1 + lVar3,param_2 + lVar3,DVar5.unknown);
    (**(code **)(lVar9 + 0x38))(param_1 + lVar3,0,1,DVar5.unknown);
    return param_1;
  }
  puVar8 = &DAT_10054b950;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  _memcpy((void *)(param_1 + lVar3),(void *)(param_2 + lVar3),
          *(size_t *)(*(long *)(puVar8 + -8) + 0x40));
  return param_1;
}

