// rea decompile_all
// name: FUN_1002f90e4
// address: 0x1002f90e4
// body: available
// range: 0x1002f90e4-0x1002f9397 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002f9394 to 0x10041481c _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002f90e4(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  URL UVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  long unaff_x20;
  long lVar10;
  ulong uVar11;
  code *pcVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  
  UVar5 = Foundation::URL::typeMetadataAccessor();
  lVar10 = *(long *)(UVar5.unknown + -8);
  uVar9 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar11 = uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff);
  lVar1 = *(long *)(lVar10 + 0x40) + uVar9;
  uVar14 = lVar1 + uVar11 & (uVar9 ^ 0xffffffffffffffff);
  uVar13 = lVar1 + uVar14 & (uVar9 ^ 0xffffffffffffffff);
  uVar15 = *(long *)(lVar10 + 0x40) + uVar13 + 7 & 0xfffffffffffffff8;
  lVar6 = 0;
  FUN_1002f58d4();
  uVar9 = (ulong)*(byte *)(*(long *)(lVar6 + -8) + 0x50);
  pcVar12 = *(code **)(lVar10 + 8);
  (*pcVar12)(unaff_x20 + uVar11,UVar5.unknown);
  (*pcVar12)(unaff_x20 + uVar14,UVar5.unknown);
  (*pcVar12)(unaff_x20 + uVar13,UVar5.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + uVar15));
  puVar2 = (undefined8 *)(unaff_x20 + (uVar9 + uVar15 + 8 & (uVar9 ^ 0xffffffffffffffff)));
  _swift_release(*puVar2);
  (*pcVar12)((long)puVar2 + (long)*(int *)(lVar6 + 0x14),UVar5.unknown);
  (*pcVar12)((long)puVar2 + (long)*(int *)(lVar6 + 0x18),UVar5.unknown);
  iVar4 = *(int *)(lVar6 + 0x1c);
  _swift_bridgeObjectRelease(*(undefined8 *)((long)puVar2 + (long)iVar4 + 8));
  _swift_release(*(undefined8 *)((long)puVar2 + (long)iVar4 + 0x10));
  iVar4 = *(int *)(lVar6 + 0x20);
  _swift_bridgeObjectRelease(*(undefined8 *)((long)puVar2 + (long)iVar4 + 8));
  _swift_release(*(undefined8 *)((long)puVar2 + (long)iVar4 + 0x10));
  iVar4 = *(int *)(lVar6 + 0x24);
  _swift_bridgeObjectRelease(*(undefined8 *)((long)puVar2 + (long)iVar4 + 8));
  _swift_release(*(undefined8 *)((long)puVar2 + (long)iVar4 + 0x10));
  iVar4 = *(int *)(lVar6 + 0x28);
  _swift_bridgeObjectRelease(*(undefined8 *)((long)puVar2 + (long)iVar4 + 8));
  _swift_release(*(undefined8 *)((long)puVar2 + (long)iVar4 + 0x10));
  iVar4 = *(int *)(lVar6 + 0x2c);
  _swift_bridgeObjectRelease(*(undefined8 *)((long)puVar2 + (long)iVar4 + 8));
  _swift_release(*(undefined8 *)((long)puVar2 + (long)iVar4 + 0x10));
  _swift_release(*(undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x30) + 8));
  puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x34));
  _swift_bridgeObjectRelease(*puVar3);
  _swift_release(puVar3[1]);
  _swift_release(*(undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x38) + 8));
  _swift_release(*(undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x3c) + 8));
  lVar1 = (long)puVar2 + (long)*(int *)(lVar6 + 0x40);
  lVar7 = 0;
  FUN_1002f58e8();
  lVar10 = lVar1;
  (**(code **)(*(long *)(lVar7 + -8) + 0x30))(lVar1,1,lVar7);
  if ((int)lVar10 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x18));
    (*pcVar12)(lVar1 + *(int *)(lVar7 + 0x18),UVar5.unknown);
    (*pcVar12)(lVar1 + *(int *)(lVar7 + 0x1c),UVar5.unknown);
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar7 + 0x20) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar7 + 0x24) + 8));
  }
  puVar8 = &DAT_10055b0f0;
  FUN_100002f94(&DAT_10055b0f0,&DAT_10042f918);
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(puVar8 + 0x1c)));
  puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x44));
  _swift_bridgeObjectRelease(*puVar3);
  _swift_release(puVar3[1]);
  puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x48));
  _swift_release(*puVar2);
  _swift_release(puVar2[1]);
  _swift_deallocObject();
  return;
}

