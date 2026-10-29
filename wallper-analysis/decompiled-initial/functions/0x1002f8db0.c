// rea decompile_all
// name: FUN_1002f8db0
// address: 0x1002f8db0
// body: available
// range: 0x1002f8db0-0x1002f9067 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002f9064 to 0x10041481c _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002f8db0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  URL UVar9;
  undefined *puVar10;
  long lVar11;
  long unaff_x20;
  long lVar12;
  code *pcVar13;
  ulong uVar14;
  long lVar15;
  
  lVar7 = 0;
  FUN_1002f58d4();
  lVar11 = *(long *)(lVar7 + -8);
  bVar4 = *(byte *)(lVar11 + 0x50);
  uVar14 = (ulong)bVar4 + 0x10 & ((ulong)bVar4 ^ 0xffffffffffffffff);
  lVar8 = 0;
  FUN_1002f58e8();
  lVar15 = *(long *)(lVar8 + -8);
  puVar1 = (undefined8 *)(unaff_x20 + uVar14);
  _swift_release(*puVar1);
  iVar6 = *(int *)(lVar7 + 0x14);
  UVar9 = Foundation::URL::typeMetadataAccessor();
  pcVar13 = *(code **)(*(long *)(UVar9.unknown + -8) + 8);
  (*pcVar13)((long)puVar1 + (long)iVar6,UVar9.unknown);
  (*pcVar13)((long)puVar1 + (long)*(int *)(lVar7 + 0x18),UVar9.unknown);
  iVar6 = *(int *)(lVar7 + 0x1c);
  _swift_bridgeObjectRelease(*(undefined8 *)((long)puVar1 + (long)iVar6 + 8));
  _swift_release(*(undefined8 *)((long)puVar1 + (long)iVar6 + 0x10));
  iVar6 = *(int *)(lVar7 + 0x20);
  _swift_bridgeObjectRelease(*(undefined8 *)((long)puVar1 + (long)iVar6 + 8));
  _swift_release(*(undefined8 *)((long)puVar1 + (long)iVar6 + 0x10));
  iVar6 = *(int *)(lVar7 + 0x24);
  _swift_bridgeObjectRelease(*(undefined8 *)((long)puVar1 + (long)iVar6 + 8));
  _swift_release(*(undefined8 *)((long)puVar1 + (long)iVar6 + 0x10));
  iVar6 = *(int *)(lVar7 + 0x28);
  _swift_bridgeObjectRelease(*(undefined8 *)((long)puVar1 + (long)iVar6 + 8));
  _swift_release(*(undefined8 *)((long)puVar1 + (long)iVar6 + 0x10));
  iVar6 = *(int *)(lVar7 + 0x2c);
  _swift_bridgeObjectRelease(*(undefined8 *)((long)puVar1 + (long)iVar6 + 8));
  _swift_release(*(undefined8 *)((long)puVar1 + (long)iVar6 + 0x10));
  _swift_release(*(undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x30) + 8));
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x34));
  _swift_bridgeObjectRelease(*puVar2);
  _swift_release(puVar2[1]);
  _swift_release(*(undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x38) + 8));
  _swift_release(*(undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x3c) + 8));
  lVar3 = (long)puVar1 + (long)*(int *)(lVar7 + 0x40);
  lVar12 = lVar3;
  (**(code **)(lVar15 + 0x30))(lVar3,1,lVar8);
  if ((int)lVar12 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x18));
    (*pcVar13)(lVar3 + *(int *)(lVar8 + 0x18),UVar9.unknown);
    (*pcVar13)(lVar3 + *(int *)(lVar8 + 0x1c),UVar9.unknown);
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + *(int *)(lVar8 + 0x20) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + *(int *)(lVar8 + 0x24) + 8));
  }
  bVar5 = *(byte *)(lVar15 + 0x50);
  uVar14 = *(long *)(lVar11 + 0x40) + (ulong)bVar5 + uVar14 & ((ulong)bVar5 ^ 0xffffffffffffffff);
  lVar12 = *(long *)(lVar15 + 0x40);
  puVar10 = &DAT_10055b0f0;
  FUN_100002f94(&DAT_10055b0f0,&DAT_10042f918);
  _swift_release(*(undefined8 *)(lVar3 + *(int *)(puVar10 + 0x1c)));
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x44));
  _swift_bridgeObjectRelease(*puVar2);
  _swift_release(puVar2[1]);
  puVar1 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x48));
  _swift_release(*puVar1);
  _swift_release(puVar1[1]);
  lVar3 = unaff_x20 + uVar14;
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x18));
  (*pcVar13)(lVar3 + *(int *)(lVar8 + 0x18),UVar9.unknown);
  (*pcVar13)(lVar3 + *(int *)(lVar8 + 0x1c),UVar9.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + *(int *)(lVar8 + 0x20) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + *(int *)(lVar8 + 0x24) + 8));
  _swift_deallocObject(unaff_x20,uVar14 + lVar12,bVar4 | bVar5 | 7);
  return;
}

