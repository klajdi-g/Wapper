// rea decompile_all
// name: FUN_1002f9854
// address: 0x1002f9854
// body: available
// range: 0x1002f9854-0x1002f9abb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002f9ab8 to 0x10041481c _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002f9854(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  URL UVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long unaff_x20;
  ulong uVar10;
  long lVar11;
  code *pcVar12;
  
  lVar5 = 0;
  FUN_1002f58d4();
  lVar11 = *(long *)(lVar5 + -8);
  uVar10 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar10 = uVar10 + 0x18 & (uVar10 ^ 0xffffffffffffffff);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  puVar1 = (undefined8 *)(unaff_x20 + uVar10);
  _swift_release(*puVar1);
  iVar4 = *(int *)(lVar5 + 0x14);
  UVar6 = Foundation::URL::typeMetadataAccessor();
  pcVar12 = *(code **)(*(long *)(UVar6.unknown + -8) + 8);
  (*pcVar12)((long)puVar1 + (long)iVar4,UVar6.unknown);
  (*pcVar12)((long)puVar1 + (long)*(int *)(lVar5 + 0x18),UVar6.unknown);
  iVar4 = *(int *)(lVar5 + 0x1c);
  _swift_bridgeObjectRelease(*(undefined8 *)((long)puVar1 + (long)iVar4 + 8));
  _swift_release(*(undefined8 *)((long)puVar1 + (long)iVar4 + 0x10));
  iVar4 = *(int *)(lVar5 + 0x20);
  _swift_bridgeObjectRelease(*(undefined8 *)((long)puVar1 + (long)iVar4 + 8));
  _swift_release(*(undefined8 *)((long)puVar1 + (long)iVar4 + 0x10));
  iVar4 = *(int *)(lVar5 + 0x24);
  _swift_bridgeObjectRelease(*(undefined8 *)((long)puVar1 + (long)iVar4 + 8));
  _swift_release(*(undefined8 *)((long)puVar1 + (long)iVar4 + 0x10));
  iVar4 = *(int *)(lVar5 + 0x28);
  _swift_bridgeObjectRelease(*(undefined8 *)((long)puVar1 + (long)iVar4 + 8));
  _swift_release(*(undefined8 *)((long)puVar1 + (long)iVar4 + 0x10));
  iVar4 = *(int *)(lVar5 + 0x2c);
  _swift_bridgeObjectRelease(*(undefined8 *)((long)puVar1 + (long)iVar4 + 8));
  _swift_release(*(undefined8 *)((long)puVar1 + (long)iVar4 + 0x10));
  _swift_release(*(undefined8 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x30) + 8));
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x34));
  _swift_bridgeObjectRelease(*puVar2);
  _swift_release(puVar2[1]);
  _swift_release(*(undefined8 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x38) + 8));
  _swift_release(*(undefined8 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x3c) + 8));
  lVar3 = (long)puVar1 + (long)*(int *)(lVar5 + 0x40);
  lVar7 = 0;
  FUN_1002f58e8();
  lVar9 = lVar3;
  (**(code **)(*(long *)(lVar7 + -8) + 0x30))(lVar3,1,lVar7);
  if ((int)lVar9 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x18));
    (*pcVar12)(lVar3 + *(int *)(lVar7 + 0x18),UVar6.unknown);
    (*pcVar12)(lVar3 + *(int *)(lVar7 + 0x1c),UVar6.unknown);
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + *(int *)(lVar7 + 0x20) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + *(int *)(lVar7 + 0x24) + 8));
  }
  lVar9 = *(long *)(lVar11 + 0x40);
  puVar8 = &DAT_10055b0f0;
  FUN_100002f94(&DAT_10055b0f0,&DAT_10042f918);
  _swift_release(*(undefined8 *)(lVar3 + *(int *)(puVar8 + 0x1c)));
  puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x44));
  _swift_bridgeObjectRelease(*puVar2);
  _swift_release(puVar2[1]);
  puVar1 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x48));
  _swift_release(*puVar1);
  _swift_release(puVar1[1]);
  _swift_release(*(undefined8 *)(unaff_x20 + (uVar10 + lVar9 + 7 & 0xfffffffffffffff8) + 0x18));
  _swift_deallocObject();
  return;
}

