// rea decompile_all
// name: FUN_100150b84
// address: 0x100150b84
// body: available
// range: 0x100150b84-0x100150d63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_100150b84(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  Date DVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  
  uVar3 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar3 >> 0x11 & 1) == 0) {
    lVar6 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar6;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    lVar4 = 0;
    FUN_100150d64();
    lVar12 = *(long *)(lVar4 + -8);
    pcVar11 = *(code **)(lVar12 + 0x30);
    _swift_bridgeObjectRetain(lVar6);
    puVar5 = puVar2;
    (*pcVar11)(puVar2,1,lVar4);
    if ((int)puVar5 == 0) {
      uVar14 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar14;
      *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(puVar2 + 2);
      lVar13 = (long)*(int *)(lVar4 + 0x18);
      DVar7 = Foundation::Date::typeMetadataAccessor();
      lVar10 = *(long *)(DVar7.unknown + -8);
      pcVar11 = *(code **)(lVar10 + 0x30);
      _swift_bridgeObjectRetain(uVar14);
      lVar6 = (long)puVar2 + lVar13;
      (*pcVar11)(lVar6,1,DVar7.unknown);
      if ((int)lVar6 == 0) {
        (**(code **)(lVar10 + 0x10))((long)puVar1 + lVar13,(long)puVar2 + lVar13,DVar7.unknown);
        (**(code **)(lVar10 + 0x38))((long)puVar1 + lVar13,0,1,DVar7.unknown);
      }
      else {
        puVar8 = &DAT_10054b950;
        FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
        _memcpy((void *)((long)puVar1 + lVar13),(void *)((long)puVar2 + lVar13),
                *(size_t *)(*(long *)(puVar8 + -8) + 0x40));
      }
      (**(code **)(lVar12 + 0x38))(puVar1,0,1,lVar4);
    }
    else {
      puVar8 = &DAT_100554cf8;
      FUN_100002f94(&DAT_100554cf8,&DAT_1004285a0);
      _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
    uVar14 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar14;
    *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(puVar2 + 2);
    uVar14 = puVar2[3];
    puVar1[4] = puVar2[4];
    puVar1[3] = uVar14;
    *(undefined1 *)(puVar1 + 5) = *(undefined1 *)(puVar2 + 5);
    _swift_bridgeObjectRetain();
  }
  else {
    lVar6 = *param_2;
    *param_1 = lVar6;
    uVar9 = (ulong)uVar3 & 0xff;
    param_1 = (long *)(lVar6 + (uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}

