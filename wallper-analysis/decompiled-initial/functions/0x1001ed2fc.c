// rea decompile_all
// name: FUN_1001ed2fc
// address: 0x1001ed2fc
// body: available
// range: 0x1001ed2fc-0x1001ed413 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001ed410 to 0x10041481c _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001ed2fc(void)

{
  URL UVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  ulong uVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar7 = *(long *)(UVar1.unknown + -8);
  uVar4 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar8 = uVar4 + 0x28 & (uVar4 ^ 0xffffffffffffffff);
  uVar9 = *(long *)(lVar7 + 0x40) + uVar4 + uVar8 & (uVar4 ^ 0xffffffffffffffff);
  uVar4 = *(long *)(lVar7 + 0x40) + uVar9 + 7 & 0xfffffffffffffff8;
  puVar2 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  uVar5 = *(byte *)(*(long *)(puVar2 + -8) + 0x50) + uVar4 + 0x10 &
          ((ulong)*(byte *)(*(long *)(puVar2 + -8) + 0x50) ^ 0xffffffffffffffff);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  pcVar6 = *(code **)(lVar7 + 8);
  (*pcVar6)(unaff_x20 + uVar8,UVar1.unknown);
  (*pcVar6)(unaff_x20 + uVar9,UVar1.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + uVar4 + 8));
  lVar3 = unaff_x20 + uVar5;
  (**(code **)(lVar7 + 0x30))(lVar3,1,UVar1.unknown);
  if ((int)lVar3 == 0) {
    (*pcVar6)(unaff_x20 + uVar5,UVar1.unknown);
  }
  _swift_deallocObject();
  return;
}

