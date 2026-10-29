// rea decompile_all
// name: FUN_1003b0ba8
// address: 0x1003b0ba8
// body: available
// range: 0x1003b0ba8-0x1003b0cf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003b0cf0 to 0x10041481c _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003b0ba8(void)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  UUID UVar5;
  NavigationPath NVar6;
  undefined *puVar7;
  long unaff_x20;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  
  lVar4 = 0;
  FUN_1003afcec();
  uVar8 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar11 = uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff);
  lVar9 = *(long *)(*(long *)(lVar4 + -8) + 0x40);
  UVar5 = Foundation::UUID::typeMetadataAccessor();
  lVar10 = *(long *)(UVar5.unknown + -8);
  uVar8 = (ulong)*(byte *)(lVar10 + 0x50);
  puVar1 = (undefined8 *)(unaff_x20 + uVar11);
  _swift_release(*puVar1);
  _swift_release(puVar1[2]);
  _swift_release(puVar1[4]);
  _swift_release(puVar1[6]);
  _swift_release(puVar1[7]);
  _swift_release(puVar1[9]);
  _swift_release(puVar1[0xc]);
  _swift_release(puVar1[0xe]);
  _swift_bridgeObjectRelease(puVar1[0x10]);
  _swift_release(puVar1[0x11]);
  lVar2 = (long)puVar1 + (long)*(int *)(lVar4 + 0x34);
  NVar6 = SwiftUI::NavigationPath::typeMetadataAccessor();
  (**(code **)(*(long *)(NVar6.unknown + -8) + 8))(lVar2,NVar6.unknown);
  puVar7 = &DAT_10055f708;
  FUN_100002f94(&DAT_10055f708,&DAT_100434ee0);
  _swift_release(*(undefined8 *)(lVar2 + *(int *)(puVar7 + 0x1c)));
  iVar3 = *(int *)(lVar4 + 0x38);
  _swift_bridgeObjectRelease(*(undefined8 *)((long)puVar1 + (long)iVar3 + 8));
  _swift_release(*(undefined8 *)((long)puVar1 + (long)iVar3 + 0x10));
  (**(code **)(lVar10 + 8))
            (unaff_x20 + (uVar11 + lVar9 + uVar8 & (uVar8 ^ 0xffffffffffffffff)),UVar5.unknown);
  _swift_deallocObject();
  return;
}

