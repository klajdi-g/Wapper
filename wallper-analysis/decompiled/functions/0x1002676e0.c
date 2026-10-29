// rea decompile_all
// name: FUN_1002676e0
// address: 0x1002676e0
// body: available
// range: 0x1002676e0-0x1002677c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1002676e0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  UUID UVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  lVar5 = (long)*(int *)(param_3 + 0x18);
  UVar2 = Foundation::UUID::typeMetadataAccessor();
  lVar6 = *(long *)(UVar2.unknown + -8);
  pcVar7 = *(code **)(lVar6 + 0x30);
  _swift_bridgeObjectRetain(uVar1);
  lVar3 = (long)param_2 + lVar5;
  (*pcVar7)(lVar3,1,UVar2.unknown);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar6 + 0x10))((long)param_1 + lVar5,(long)param_2 + lVar5,UVar2.unknown);
    (**(code **)(lVar6 + 0x38))((long)param_1 + lVar5,0,1,UVar2.unknown);
  }
  else {
    puVar4 = &DAT_10054a9c8;
    FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
    _memcpy((void *)((long)param_1 + lVar5),(void *)((long)param_2 + lVar5),
            *(size_t *)(*(long *)(puVar4 + -8) + 0x40));
  }
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  return param_1;
}

