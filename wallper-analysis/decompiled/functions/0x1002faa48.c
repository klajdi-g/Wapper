// rea decompile_all
// name: FUN_1002faa48
// address: 0x1002faa48
// body: available
// range: 0x1002faa48-0x1002fab83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 * FUN_1002faa48(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  URL UVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar7;
  lVar5 = 0;
  FUN_1002f58e8();
  iVar4 = *(int *)(lVar5 + 0x18);
  UVar6 = Foundation::URL::typeMetadataAccessor();
  pcVar9 = *(code **)(*(long *)(UVar6.unknown + -8) + 0x10);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar7);
  (*pcVar9)((long)param_1 + (long)iVar4,(long)param_2 + (long)iVar4,UVar6.unknown);
  (*pcVar9)((long)param_1 + (long)*(int *)(lVar5 + 0x1c),
            (long)param_2 + (long)*(int *)(lVar5 + 0x1c),UVar6.unknown);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x20));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x20));
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x24));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x24));
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar5 + 0x28)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar5 + 0x28));
  iVar4 = *(int *)(param_3 + 0x18);
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  uVar7 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar7;
  uVar8 = puVar1[1];
  param_2 = (undefined8 *)((long)param_2 + (long)iVar4);
  uVar7 = param_2[1];
  uVar10 = *param_2;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar4);
  puVar1[1] = param_2[1];
  *puVar1 = uVar10;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar3);
  _swift_retain(uVar8);
  _swift_retain(uVar10,uVar7);
  return param_1;
}

