// rea decompile_all
// name: FUN_1002f7ebc
// address: 0x1002f7ebc
// body: available
// range: 0x1002f7ebc-0x1002f80ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1002f7ebc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  URL UVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  code *pcVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar11 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar11;
  iVar3 = *(int *)(param_3 + 0x14);
  UVar5 = Foundation::URL::typeMetadataAccessor();
  pcVar9 = *(code **)(*(long *)(UVar5.unknown + -8) + 0x20);
  (*pcVar9)((long)param_1 + (long)iVar3,(long)param_2 + (long)iVar3,UVar5.unknown);
  (*pcVar9)((long)param_1 + (long)*(int *)(param_3 + 0x18),
            (long)param_2 + (long)*(int *)(param_3 + 0x18),UVar5.unknown);
  iVar3 = *(int *)(param_3 + 0x20);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  uVar11 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar11;
  puVar1[2] = puVar2[2];
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar3);
  uVar11 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar11;
  puVar1[2] = puVar2[2];
  iVar3 = *(int *)(param_3 + 0x28);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  uVar11 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar11;
  puVar1[2] = puVar2[2];
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar3);
  uVar11 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar11;
  puVar1[2] = puVar2[2];
  iVar3 = *(int *)(param_3 + 0x30);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  uVar12 = puVar2[1];
  uVar11 = *puVar2;
  puVar1[2] = puVar2[2];
  puVar1[1] = uVar12;
  *puVar1 = uVar11;
  puVar1 = (undefined8 *)((long)param_2 + (long)iVar3);
  uVar11 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar11;
  iVar3 = *(int *)(param_3 + 0x38);
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  uVar11 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar11;
  puVar1 = (undefined8 *)((long)param_2 + (long)iVar3);
  uVar11 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar11;
  iVar3 = *(int *)(param_3 + 0x40);
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  uVar11 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar11;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar3);
  lVar6 = 0;
  FUN_1002f58e8();
  lVar10 = *(long *)(lVar6 + -8);
  puVar7 = puVar2;
  (**(code **)(lVar10 + 0x30))(puVar2,1,lVar6);
  if ((int)puVar7 == 0) {
    uVar11 = *puVar2;
    uVar13 = puVar2[3];
    uVar12 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar11;
    puVar1[3] = uVar13;
    puVar1[2] = uVar12;
    (*pcVar9)((long)puVar1 + (long)*(int *)(lVar6 + 0x18),
              (long)puVar2 + (long)*(int *)(lVar6 + 0x18),UVar5.unknown);
    (*pcVar9)((long)puVar1 + (long)*(int *)(lVar6 + 0x1c),
              (long)puVar2 + (long)*(int *)(lVar6 + 0x1c),UVar5.unknown);
    puVar7 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x20));
    uVar11 = *puVar7;
    puVar4 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x20));
    puVar4[1] = puVar7[1];
    *puVar4 = uVar11;
    puVar7 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x24));
    uVar11 = *puVar7;
    puVar4 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x24));
    puVar4[1] = puVar7[1];
    *puVar4 = uVar11;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x28)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x28));
    (**(code **)(lVar10 + 0x38))(puVar1,0,1,lVar6);
  }
  else {
    puVar8 = &DAT_10055b030;
    FUN_100002f94(&DAT_10055b030,&DAT_10042f8c0);
    _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
  }
  puVar8 = &DAT_10055b0f0;
  FUN_100002f94(&DAT_10055b0f0,&DAT_10042f918);
  *(undefined8 *)((long)puVar1 + (long)*(int *)(puVar8 + 0x1c)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(puVar8 + 0x1c));
  iVar3 = *(int *)(param_3 + 0x48);
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x44));
  uVar11 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x44));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar11;
  param_2 = (undefined8 *)((long)param_2 + (long)iVar3);
  uVar11 = *param_2;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar1[1] = param_2[1];
  *puVar1 = uVar11;
  return param_1;
}

