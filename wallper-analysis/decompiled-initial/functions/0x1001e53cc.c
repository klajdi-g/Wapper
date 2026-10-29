// rea decompile_all
// name: FUN_1001e53cc
// address: 0x1001e53cc
// body: available
// range: 0x1001e53cc-0x1001e551b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001e5518 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001e53cc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  URL UVar3;
  undefined8 uVar4;
  code *pcVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long unaff_x22;
  long lVar10;
  long lVar11;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x2d8);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x300));
  puVar1 = &DAT_10042ae68;
  _swift_getKeyPath(&DAT_10042ae68);
  puVar2 = &DAT_10042ae90;
  _swift_getKeyPath(&DAT_10042ae90);
  Combine::Published::_get_subscript(unaff_x22 + 0x260,uVar7,puVar1,puVar2);
  _swift_release(puVar2);
  _swift_release(puVar1);
  lVar8 = *(long *)(unaff_x22 + 0x260);
  if (*(long *)(lVar8 + 0x10) == 0) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x2f0);
  }
  else {
    uVar6 = *(ulong *)(unaff_x22 + 0x2d0);
    lVar9 = *(long *)(unaff_x22 + 0x2c8);
    _swift_bridgeObjectRetain(lVar8);
    FUN_10000464c(lVar9);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x2f0);
    if ((uVar6 & 1) != 0) {
      lVar10 = *(long *)(lVar8 + 0x38);
      UVar3 = Foundation::URL::typeMetadataAccessor();
      lVar11 = *(long *)(UVar3.unknown + -8);
      (**(code **)(lVar11 + 0x10))(uVar7,lVar10 + *(long *)(lVar11 + 0x48) * lVar9,UVar3.unknown);
      _swift_bridgeObjectRelease(lVar8);
      pcVar5 = *(code **)(lVar11 + 0x38);
      uVar4 = 0;
      goto LAB_1001e54e8;
    }
    _swift_bridgeObjectRelease(lVar8);
  }
  UVar3 = Foundation::URL::typeMetadataAccessor();
  pcVar5 = *(code **)(*(long *)(UVar3.unknown + -8) + 0x38);
  uVar4 = 1;
LAB_1001e54e8:
  (*pcVar5)(uVar7,uVar4,1,UVar3.unknown);
  _swift_bridgeObjectRelease(lVar8);
  _swift_task_switch(FUN_1001e551c,0,0);
  return;
}

