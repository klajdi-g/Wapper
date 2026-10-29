// rea decompile_all
// name: FUN_100341fcc
// address: 0x100341fcc
// body: available
// range: 0x100341fcc-0x1003420cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_100341fcc(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  RoundedCornerStyle RVar7;
  RoundedRectangle RVar8;
  undefined7 extraout_var;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  
  uVar4 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar4 >> 0x11 & 1) == 0) {
    *(short *)param_1 = (short)*param_2;
    lVar11 = param_2[3];
    lVar12 = param_2[1];
    param_1[2] = param_2[2];
    param_1[1] = lVar12;
    param_1[3] = lVar11;
    *(char *)(param_1 + 4) = (char)param_2[4];
    lVar9 = param_2[5];
    lVar3 = param_2[6];
    param_1[5] = lVar9;
    lVar6 = param_2[7];
    _swift_retain(lVar12);
    _swift_retain(lVar11);
    _swift_retain(lVar9);
    FUN_100047ac4(lVar3,(char)lVar6);
    param_1[6] = lVar3;
    *(char *)(param_1 + 7) = (char)lVar6;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
    uVar13 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar13;
    RVar8 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
    iVar5 = *(int *)(RVar8.unknown + 0x14);
    RVar7 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var,RVar7.value) + -8) + 0x10))
              ((long)puVar1 + (long)iVar5,(long)puVar2 + (long)iVar5,
               CONCAT71(extraout_var,RVar7.value));
  }
  else {
    lVar9 = *param_2;
    *param_1 = lVar9;
    uVar10 = (ulong)uVar4 & 0xff;
    param_1 = (long *)(lVar9 + (uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}

