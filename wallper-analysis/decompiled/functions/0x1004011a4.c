// rea decompile_all
// name: FUN_1004011a4
// address: 0x1004011a4
// body: available
// range: 0x1004011a4-0x10040140f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_1004011a4(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  URL UVar6;
  undefined *puVar7;
  long lVar8;
  Date DVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  code *pcVar14;
  
  uVar4 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar4 >> 0x11 & 1) == 0) {
    lVar8 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar8;
    iVar5 = *(int *)(param_3 + 0x14);
    UVar6 = Foundation::URL::typeMetadataAccessor();
    lVar13 = *(long *)(UVar6.unknown + -8);
    pcVar14 = *(code **)(lVar13 + 0x10);
    _swift_bridgeObjectRetain(lVar8);
    (*pcVar14)((long)param_1 + (long)iVar5,(long)param_2 + (long)iVar5,UVar6.unknown);
    lVar11 = (long)*(int *)(param_3 + 0x18);
    lVar8 = (long)param_2 + lVar11;
    (**(code **)(lVar13 + 0x30))(lVar8,1,UVar6.unknown);
    if ((int)lVar8 == 0) {
      (*pcVar14)((long)param_1 + lVar11,(long)param_2 + lVar11,UVar6.unknown);
      (**(code **)(lVar13 + 0x38))((long)param_1 + lVar11,0,1,UVar6.unknown);
    }
    else {
      puVar7 = &DAT_100553d90;
      FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
      _memcpy((void *)((long)param_1 + lVar11),(void *)((long)param_2 + lVar11),
              *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
    }
    iVar5 = *(int *)(param_3 + 0x20);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    *(undefined8 *)((long)param_1 + (long)iVar5) = *(undefined8 *)((long)param_2 + (long)iVar5);
    iVar5 = *(int *)(param_3 + 0x28);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x24)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar5);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar5);
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    lVar11 = (long)*(int *)(param_3 + 0x2c);
    DVar9 = Foundation::Date::typeMetadataAccessor();
    lVar13 = *(long *)(DVar9.unknown + -8);
    pcVar14 = *(code **)(lVar13 + 0x30);
    _swift_bridgeObjectRetain(uVar3);
    lVar8 = (long)param_2 + lVar11;
    (*pcVar14)(lVar8,1,DVar9.unknown);
    if ((int)lVar8 == 0) {
      (**(code **)(lVar13 + 0x10))((long)param_1 + lVar11,(long)param_2 + lVar11,DVar9.unknown);
      (**(code **)(lVar13 + 0x38))((long)param_1 + lVar11,0,1,DVar9.unknown);
    }
    else {
      puVar7 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)param_1 + lVar11),(void *)((long)param_2 + lVar11),
              *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
    }
    iVar5 = *(int *)(param_3 + 0x34);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar5);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar5);
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    iVar5 = *(int *)(param_3 + 0x3c);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar5);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar5);
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    iVar5 = *(int *)(param_3 + 0x44);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x40)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
    uVar12 = *(undefined8 *)((long)param_2 + (long)iVar5);
    *(undefined8 *)((long)param_1 + (long)iVar5) = uVar12;
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x48)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x48));
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRetain(uVar12);
  }
  else {
    lVar8 = *param_2;
    *param_1 = lVar8;
    uVar10 = (ulong)uVar4 & 0xff;
    param_1 = (long *)(lVar8 + (uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}

