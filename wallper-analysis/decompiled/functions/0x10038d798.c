// rea decompile_all
// name: FUN_10038d798
// address: 0x10038d798
// body: available
// range: 0x10038d798-0x10038da1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_10038d798(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  UUID UVar5;
  long lVar6;
  Date DVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  code *pcVar16;
  code *pcVar17;
  
  uVar3 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar3 >> 0x11 & 1) == 0) {
    UVar5 = Foundation::UUID::typeMetadataAccessor();
    pcVar16 = *(code **)(*(long *)(UVar5.unknown + -8) + 0x10);
    (*pcVar16)(param_1,param_2,UVar5.unknown);
    lVar6 = 0;
    FUN_10025ee04();
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x14));
    uVar12 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar12;
    iVar4 = *(int *)(lVar6 + 0x18);
    DVar7 = Foundation::Date::typeMetadataAccessor();
    pcVar17 = *(code **)(*(long *)(DVar7.unknown + -8) + 0x10);
    _swift_bridgeObjectRetain(uVar12);
    (*pcVar17)((long)param_1 + (long)iVar4,(long)param_2 + (long)iVar4,DVar7.unknown);
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar6 + 0x1c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar6 + 0x1c));
    uVar12 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x20));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x20)) = uVar12;
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar6 + 0x24)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar6 + 0x24));
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar6 + 0x28)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar6 + 0x28));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x2c)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x2c));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x30)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x30));
    uVar14 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x34));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x34)) = uVar14;
    lVar9 = (long)*(int *)(param_3 + 0x18);
    uVar15 = *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) = uVar15;
    lVar8 = 0;
    FUN_1001d537c();
    _swift_bridgeObjectRetain(uVar12);
    _swift_bridgeObjectRetain(uVar14);
    _swift_bridgeObjectRetain(uVar15);
    lVar6 = (long)param_2 + lVar9;
    _swift_getEnumCaseMultiPayload(lVar6,lVar8);
    if ((int)lVar6 == 1) {
      (*pcVar16)((long)param_1 + lVar9,(long)param_2 + lVar9,UVar5.unknown);
      _swift_storeEnumTagMultiPayload((long)param_1 + lVar9,lVar8,1);
      lVar6 = *(long *)(lVar8 + -8);
    }
    else {
      lVar6 = *(long *)(lVar8 + -8);
      _memcpy((void *)((long)param_1 + lVar9),(void *)((long)param_2 + lVar9),
              *(size_t *)(lVar6 + 0x40));
    }
    lVar13 = (long)*(int *)(param_3 + 0x1c);
    lVar9 = (long)param_2 + lVar13;
    (**(code **)(lVar6 + 0x30))(lVar9,1,lVar8);
    if ((int)lVar9 == 0) {
      lVar9 = (long)param_2 + lVar13;
      _swift_getEnumCaseMultiPayload(lVar9,lVar8);
      if ((int)lVar9 == 1) {
        (*pcVar16)((long)param_1 + lVar13,(long)param_2 + lVar13,UVar5.unknown);
        _swift_storeEnumTagMultiPayload((long)param_1 + lVar13,lVar8,1);
      }
      else {
        _memcpy((void *)((long)param_1 + lVar13),(void *)((long)param_2 + lVar13),
                *(size_t *)(lVar6 + 0x40));
      }
      (**(code **)(lVar6 + 0x38))((long)param_1 + lVar13,0,1,lVar8);
    }
    else {
      puVar10 = &DAT_100550ec0;
      FUN_100002f94(&DAT_100550ec0,&DAT_100422eb0);
      _memcpy((void *)((long)param_1 + lVar13),(void *)((long)param_2 + lVar13),
              *(size_t *)(*(long *)(puVar10 + -8) + 0x40));
    }
    iVar4 = *(int *)(param_3 + 0x24);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
    puVar1 = (undefined8 *)((long)param_2 + (long)iVar4);
    lVar6 = puVar1[1];
    uVar12 = *puVar1;
    puVar2 = (undefined8 *)((long)param_1 + (long)iVar4);
    puVar2[1] = puVar1[1];
    *puVar2 = uVar12;
    _swift_bridgeObjectRetain();
  }
  else {
    lVar6 = *param_2;
    *param_1 = lVar6;
    uVar11 = (ulong)uVar3 & 0xff;
    param_1 = (long *)(lVar6 + (uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff)));
  }
  _swift_retain(lVar6);
  return param_1;
}

