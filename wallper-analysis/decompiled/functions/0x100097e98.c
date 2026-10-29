// rea decompile_all
// name: thunk_FUN_100097e9c
// address: 0x100097e98
// body: available
// range: 0x100097e98-0x100097e9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * thunk_FUN_100097e9c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  Date DVar9;
  undefined8 uVar10;
  
  *param_1 = *param_2;
  uVar10 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar10);
  param_1[2] = param_2[2];
  uVar10 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar10);
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  uVar10 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar10);
  param_1[7] = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  lVar7 = 0;
  FUN_10009e280();
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x2c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x2c));
  *puVar1 = *puVar2;
  lVar8 = 0;
  FUN_10015f8e8();
  iVar6 = *(int *)(lVar8 + 0x14);
  DVar9 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar9.unknown + -8) + 0x18))
            ((long)puVar1 + (long)iVar6,(long)puVar2 + (long)iVar6,DVar9.unknown);
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x18)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x18));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x30));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x30));
  uVar5 = *(undefined1 *)(puVar2 + 1);
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = uVar5;
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  puVar3 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  puVar4 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  *puVar3 = *puVar4;
  puVar3[1] = puVar4[1];
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  return param_1;
}

