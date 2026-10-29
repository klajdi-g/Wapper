// rea decompile_all
// name: FUN_10038e110
// address: 0x10038e110
// body: available
// range: 0x10038e110-0x10038e327 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10038e110(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  UUID UVar4;
  long lVar5;
  Date DVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  code *pcVar10;
  long lVar11;
  undefined8 uVar12;
  
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  pcVar10 = *(code **)(*(long *)(UVar4.unknown + -8) + 0x20);
  (*pcVar10)(param_1,param_2,UVar4.unknown);
  lVar5 = 0;
  FUN_10025ee04();
  puVar2 = (undefined8 *)(param_2 + *(int *)(lVar5 + 0x14));
  uVar12 = *puVar2;
  puVar3 = (undefined8 *)(param_1 + *(int *)(lVar5 + 0x14));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar12;
  iVar1 = *(int *)(lVar5 + 0x18);
  DVar6 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar6.unknown + -8) + 0x20))(param_1 + iVar1,param_2 + iVar1,DVar6.unknown)
  ;
  *(undefined1 *)(param_1 + *(int *)(lVar5 + 0x1c)) =
       *(undefined1 *)(param_2 + *(int *)(lVar5 + 0x1c));
  *(undefined8 *)(param_1 + *(int *)(lVar5 + 0x20)) =
       *(undefined8 *)(param_2 + *(int *)(lVar5 + 0x20));
  *(undefined1 *)(param_1 + *(int *)(lVar5 + 0x24)) =
       *(undefined1 *)(param_2 + *(int *)(lVar5 + 0x24));
  *(undefined1 *)(param_1 + *(int *)(lVar5 + 0x28)) =
       *(undefined1 *)(param_2 + *(int *)(lVar5 + 0x28));
  *(undefined8 *)(param_1 + *(int *)(lVar5 + 0x2c)) =
       *(undefined8 *)(param_2 + *(int *)(lVar5 + 0x2c));
  *(undefined8 *)(param_1 + *(int *)(lVar5 + 0x30)) =
       *(undefined8 *)(param_2 + *(int *)(lVar5 + 0x30));
  *(undefined8 *)(param_1 + *(int *)(lVar5 + 0x34)) =
       *(undefined8 *)(param_2 + *(int *)(lVar5 + 0x34));
  lVar8 = (long)*(int *)(param_3 + 0x18);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  lVar7 = 0;
  FUN_1001d537c();
  lVar5 = param_2 + lVar8;
  _swift_getEnumCaseMultiPayload(lVar5,lVar7);
  if ((int)lVar5 == 1) {
    (*pcVar10)(param_1 + lVar8,param_2 + lVar8,UVar4.unknown);
    _swift_storeEnumTagMultiPayload(param_1 + lVar8,lVar7,1);
    lVar5 = *(long *)(lVar7 + -8);
  }
  else {
    lVar5 = *(long *)(lVar7 + -8);
    _memcpy((void *)(param_1 + lVar8),(void *)(param_2 + lVar8),*(size_t *)(lVar5 + 0x40));
  }
  lVar11 = (long)*(int *)(param_3 + 0x1c);
  lVar8 = param_2 + lVar11;
  (**(code **)(lVar5 + 0x30))(lVar8,1,lVar7);
  if ((int)lVar8 == 0) {
    lVar8 = param_2 + lVar11;
    _swift_getEnumCaseMultiPayload(lVar8,lVar7);
    if ((int)lVar8 == 1) {
      (*pcVar10)(param_1 + lVar11,param_2 + lVar11,UVar4.unknown);
      _swift_storeEnumTagMultiPayload(param_1 + lVar11,lVar7,1);
    }
    else {
      _memcpy((void *)(param_1 + lVar11),(void *)(param_2 + lVar11),*(size_t *)(lVar5 + 0x40));
    }
    (**(code **)(lVar5 + 0x38))(param_1 + lVar11,0,1,lVar7);
  }
  else {
    puVar9 = &DAT_100550ec0;
    FUN_100002f94(&DAT_100550ec0,&DAT_100422eb0);
    _memcpy((void *)(param_1 + lVar11),(void *)(param_2 + lVar11),
            *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  iVar1 = *(int *)(param_3 + 0x24);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x20)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x20));
  puVar2 = (undefined8 *)(param_2 + iVar1);
  uVar12 = *puVar2;
  puVar3 = (undefined8 *)(param_1 + iVar1);
  puVar3[1] = puVar2[1];
  *puVar3 = uVar12;
  return param_1;
}

