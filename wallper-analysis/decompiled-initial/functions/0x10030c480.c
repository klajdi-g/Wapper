// rea decompile_all
// name: FUN_10030c480
// address: 0x10030c480
// body: available
// range: 0x10030c480-0x10030c56b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10030c568 to 0x10041481c _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10030c480(void)

{
  URL UVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  code *pcVar7;
  long lVar8;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar8 = *(long *)(UVar1.unknown + -8);
  uVar4 = (ulong)*(byte *)(lVar8 + 0x50) + 0x10 &
          ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff);
  lVar5 = *(long *)(lVar8 + 0x40);
  lVar2 = 0;
  FUN_10030a830();
  uVar6 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  pcVar7 = *(code **)(lVar8 + 8);
  (*pcVar7)(unaff_x20 + uVar4,UVar1.unknown);
  lVar5 = unaff_x20 + (uVar4 + lVar5 + uVar6 & (uVar6 ^ 0xffffffffffffffff));
  lVar3 = lVar5;
  (**(code **)(lVar8 + 0x30))(lVar5,1,UVar1.unknown);
  if ((int)lVar3 == 0) {
    (*pcVar7)(lVar5,UVar1.unknown);
  }
  _swift_release(*(undefined8 *)(lVar5 + *(int *)(lVar2 + 0x14) + 8));
  _swift_release(*(undefined8 *)(lVar5 + *(int *)(lVar2 + 0x18) + 8));
  _swift_deallocObject();
  return;
}

