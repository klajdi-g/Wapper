// rea decompile_all
// name: FUN_1003b003c
// address: 0x1003b003c
// body: available
// range: 0x1003b003c-0x1003b01ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1003b003c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  NavigationPath NVar5;
  undefined *puVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar10 = *param_2;
  uVar16 = param_2[1];
  *param_1 = uVar10;
  param_1[1] = uVar16;
  uVar16 = param_2[2];
  uVar4 = param_2[3];
  param_1[2] = uVar16;
  param_1[3] = uVar4;
  uVar4 = param_2[4];
  uVar14 = param_2[5];
  param_1[4] = uVar4;
  param_1[5] = uVar14;
  uVar7 = param_2[7];
  uVar13 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar13;
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  uVar12 = param_2[9];
  param_1[9] = uVar12;
  uVar14 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar14;
  uVar11 = param_2[0xc];
  param_1[0xc] = uVar11;
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  uVar14 = param_2[0xe];
  uVar9 = param_2[0xf];
  param_1[0xe] = uVar14;
  param_1[0xf] = uVar9;
  uVar9 = param_2[0x11];
  uVar15 = param_2[0x10];
  lVar1 = (long)param_1 + (long)*(int *)(param_3 + 0x34);
  lVar2 = (long)param_2 + (long)*(int *)(param_3 + 0x34);
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar15;
  NVar5 = SwiftUI::NavigationPath::typeMetadataAccessor();
  pcVar8 = *(code **)(*(long *)(NVar5.unknown + -8) + 0x10);
  _swift_retain(uVar10);
  _swift_retain(uVar16);
  _swift_retain(uVar4);
  _swift_retain(uVar13);
  _swift_retain(uVar7);
  _swift_retain(uVar12);
  _swift_retain(uVar11);
  _swift_retain(uVar14);
  _swift_bridgeObjectRetain(uVar15);
  _swift_retain(uVar9);
  (*pcVar8)(lVar1,lVar2,NVar5.unknown);
  puVar6 = &DAT_10055f708;
  FUN_100002f94(&DAT_10055f708,&DAT_100434ee0);
  *(undefined8 *)(lVar1 + *(int *)(puVar6 + 0x1c)) =
       *(undefined8 *)(lVar2 + *(int *)(puVar6 + 0x1c));
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  *puVar3 = *param_2;
  uVar10 = param_2[2];
  uVar16 = param_2[1];
  puVar3[2] = param_2[2];
  puVar3[1] = uVar16;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar16);
  _swift_retain(uVar10);
  return param_1;
}

