// rea decompile_all
// name: FUN_1002fa3e8
// address: 0x1002fa3e8
// body: available
// range: 0x1002fa3e8-0x1002fa6a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002fa6a4 to 0x10041481c _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002fa3e8(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  URL UVar7;
  undefined *puVar8;
  long unaff_x20;
  ulong uVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  ulong uVar13;
  
  lVar5 = 0;
  FUN_1002f58e8();
  lVar11 = *(long *)(lVar5 + -8);
  uVar9 = (ulong)*(byte *)(lVar11 + 0x50) + 0x10 &
          ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff);
  lVar10 = *(long *)(lVar11 + 0x40);
  lVar6 = 0;
  FUN_1002f58d4();
  uVar13 = (ulong)*(byte *)(*(long *)(lVar6 + -8) + 0x50);
  lVar1 = unaff_x20 + uVar9;
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x18));
  iVar4 = *(int *)(lVar5 + 0x18);
  UVar7 = Foundation::URL::typeMetadataAccessor();
  pcVar12 = *(code **)(*(long *)(UVar7.unknown + -8) + 8);
  (*pcVar12)(lVar1 + iVar4,UVar7.unknown);
  (*pcVar12)(lVar1 + *(int *)(lVar5 + 0x1c),UVar7.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x20) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x24) + 8));
  puVar2 = (undefined8 *)(unaff_x20 + (uVar9 + lVar10 + uVar13 & (uVar13 ^ 0xffffffffffffffff)));
  _swift_release(*puVar2);
  (*pcVar12)((long)puVar2 + (long)*(int *)(lVar6 + 0x14),UVar7.unknown);
  (*pcVar12)((long)puVar2 + (long)*(int *)(lVar6 + 0x18),UVar7.unknown);
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
  lVar10 = lVar1;
  (**(code **)(lVar11 + 0x30))(lVar1,1,lVar5);
  if ((int)lVar10 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x18));
    (*pcVar12)(lVar1 + *(int *)(lVar5 + 0x18),UVar7.unknown);
    (*pcVar12)(lVar1 + *(int *)(lVar5 + 0x1c),UVar7.unknown);
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x20) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x24) + 8));
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

