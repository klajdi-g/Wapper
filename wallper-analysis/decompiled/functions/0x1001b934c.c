// rea decompile_all
// name: FUN_1001b934c
// address: 0x1001b934c
// body: available
// range: 0x1001b934c-0x1001b9517 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001b934c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  UUID UVar5;
  undefined8 uVar6;
  long extraout_x8;
  code *pcVar7;
  undefined1 uVar8;
  undefined1 *puVar9;
  undefined1 uVar10;
  long lVar11;
  
  lVar2 = 0;
  FUN_1001d537c();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar9 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_100029504(param_4,puVar9);
  puVar3 = puVar9;
  _swift_getEnumCaseMultiPayload(puVar9,lVar2);
  iVar1 = (int)puVar3;
  if (iVar1 < 2) {
    if (iVar1 != 0) {
      lVar4 = 0;
      FUN_100266c40();
      lVar2 = (long)*(int *)(lVar4 + 0x18);
      UVar5 = Foundation::UUID::typeMetadataAccessor();
      lVar11 = *(long *)(UVar5.unknown + -8);
      (**(code **)(lVar11 + 0x20))((long)param_1 + lVar2,puVar9,UVar5.unknown);
      pcVar7 = *(code **)(lVar11 + 0x38);
      uVar6 = 0;
      goto LAB_1001b94d8;
    }
    uVar8 = *puVar9;
    lVar4 = 0;
    FUN_100266c40();
    iVar1 = *(int *)(lVar4 + 0x18);
    UVar5 = Foundation::UUID::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar5.unknown + -8) + 0x38))
              ((long)param_1 + (long)iVar1,1,1,UVar5.unknown);
  }
  else {
    if (iVar1 == 2) {
      uVar10 = *puVar9;
      lVar4 = 0;
      FUN_100266c40();
      iVar1 = *(int *)(lVar4 + 0x18);
      UVar5 = Foundation::UUID::typeMetadataAccessor();
      (**(code **)(*(long *)(UVar5.unknown + -8) + 0x38))
                ((long)param_1 + (long)iVar1,1,1,UVar5.unknown);
      uVar8 = 2;
      goto LAB_1001b94e4;
    }
    lVar4 = 0;
    FUN_100266c40();
    lVar2 = (long)*(int *)(lVar4 + 0x18);
    UVar5 = Foundation::UUID::typeMetadataAccessor();
    pcVar7 = *(code **)(*(long *)(UVar5.unknown + -8) + 0x38);
    uVar6 = 1;
LAB_1001b94d8:
    (*pcVar7)((long)param_1 + lVar2,uVar6,1,UVar5.unknown);
    uVar8 = 2;
  }
  uVar10 = 2;
LAB_1001b94e4:
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 2) = uVar8;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar4 + 0x1c)) = uVar10;
  _swift_bridgeObjectRetain(param_3);
  return;
}

