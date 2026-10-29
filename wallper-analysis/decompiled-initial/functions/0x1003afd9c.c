// rea decompile_all
// name: FUN_1003afd9c
// address: 0x1003afd9c
// body: available
// range: 0x1003afd9c-0x1003aff6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_1003afd9c(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  NavigationPath NVar8;
  undefined *puVar9;
  long lVar10;
  code *pcVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  
  uVar7 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  lVar14 = *param_2;
  *param_1 = lVar14;
  if ((uVar7 >> 0x11 & 1) == 0) {
    lVar5 = param_2[2];
    param_1[1] = param_2[1];
    param_1[2] = lVar5;
    lVar6 = param_2[4];
    param_1[3] = param_2[3];
    param_1[4] = lVar6;
    param_1[5] = param_2[5];
    lVar13 = param_2[7];
    lVar17 = param_2[6];
    param_1[7] = param_2[7];
    param_1[6] = lVar17;
    *(char *)(param_1 + 8) = (char)param_2[8];
    lVar15 = param_2[9];
    param_1[9] = lVar15;
    lVar18 = param_2[10];
    param_1[0xb] = param_2[0xb];
    param_1[10] = lVar18;
    lVar16 = param_2[0xc];
    param_1[0xc] = lVar16;
    *(char *)(param_1 + 0xd) = (char)param_2[0xd];
    lVar4 = param_2[0xe];
    lVar18 = param_2[0xf];
    param_1[0xe] = lVar4;
    param_1[0xf] = lVar18;
    lVar10 = param_2[0x11];
    lVar19 = param_2[0x10];
    lVar18 = (long)param_1 + (long)*(int *)(param_3 + 0x34);
    lVar1 = (long)param_2 + (long)*(int *)(param_3 + 0x34);
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = lVar19;
    NVar8 = SwiftUI::NavigationPath::typeMetadataAccessor();
    pcVar11 = *(code **)(*(long *)(NVar8.unknown + -8) + 0x10);
    _swift_retain(lVar14);
    _swift_retain(lVar5);
    _swift_retain(lVar6);
    _swift_retain(lVar17);
    _swift_retain(lVar13);
    _swift_retain(lVar15);
    _swift_retain(lVar16);
    _swift_retain(lVar4);
    _swift_bridgeObjectRetain(lVar19);
    _swift_retain(lVar10);
    (*pcVar11)(lVar18,lVar1,NVar8.unknown);
    puVar9 = &DAT_10055f708;
    FUN_100002f94(&DAT_10055f708,&DAT_100434ee0);
    *(undefined8 *)(lVar18 + *(int *)(puVar9 + 0x1c)) =
         *(undefined8 *)(lVar1 + *(int *)(puVar9 + 0x1c));
    puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
    puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
    *puVar2 = *puVar3;
    lVar14 = puVar3[2];
    uVar20 = puVar3[1];
    puVar2[2] = puVar3[2];
    puVar2[1] = uVar20;
    _swift_retain();
    _swift_bridgeObjectRetain(uVar20);
  }
  else {
    uVar12 = (ulong)uVar7 & 0xff;
    param_1 = (long *)(lVar14 + (uVar12 + 0x10 & (uVar12 ^ 0xffffffffffffffff)));
  }
  _swift_retain(lVar14);
  return param_1;
}

