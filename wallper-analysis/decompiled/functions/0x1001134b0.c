// rea decompile_all
// name: FUN_1001134b0
// address: 0x1001134b0
// body: available
// range: 0x1001134b0-0x100113667 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long * FUN_1001134b0(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  URL UVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  undefined8 uVar17;
  
  uVar7 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar7 >> 0x11 & 1) == 0) {
    lVar11 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar11;
    lVar14 = (long)*(int *)(param_3 + 0x14);
    UVar8 = Foundation::URL::typeMetadataAccessor();
    lVar15 = *(long *)(UVar8.unknown + -8);
    pcVar16 = *(code **)(lVar15 + 0x30);
    _swift_bridgeObjectRetain(lVar11);
    lVar11 = (long)param_2 + lVar14;
    (*pcVar16)(lVar11,1,UVar8.unknown);
    if ((int)lVar11 == 0) {
      (**(code **)(lVar15 + 0x10))((long)param_1 + lVar14,(long)param_2 + lVar14,UVar8.unknown);
      (**(code **)(lVar15 + 0x38))((long)param_1 + lVar14,0,1,UVar8.unknown);
    }
    else {
      puVar9 = &DAT_100553d90;
      FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
      _memcpy((void *)((long)param_1 + lVar14),(void *)((long)param_2 + lVar14),
              *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
    }
    iVar6 = *(int *)(param_3 + 0x1c);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar6);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar6);
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    iVar6 = *(int *)(param_3 + 0x24);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
    puVar1 = (undefined8 *)((long)param_2 + (long)iVar6);
    uVar12 = puVar1[1];
    uVar17 = *puVar1;
    puVar2 = (undefined8 *)((long)param_1 + (long)iVar6);
    puVar2[1] = puVar1[1];
    *puVar2 = uVar17;
    iVar6 = *(int *)(param_3 + 0x2c);
    puVar3 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
    puVar4 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
    *puVar3 = *puVar4;
    uVar13 = *(undefined8 *)(puVar4 + 8);
    *(undefined8 *)(puVar3 + 8) = uVar13;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar6);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar6);
    uVar5 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar5;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
    lVar11 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = lVar11;
    _swift_retain();
    _swift_retain(uVar17,uVar12);
    _swift_retain(uVar13);
    _swift_retain(uVar5);
  }
  else {
    lVar11 = *param_2;
    *param_1 = lVar11;
    uVar10 = (ulong)uVar7 & 0xff;
    param_1 = (long *)(lVar11 + (uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff)));
  }
  _swift_retain(lVar11);
  return param_1;
}

