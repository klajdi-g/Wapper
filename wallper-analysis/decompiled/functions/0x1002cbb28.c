// rea decompile_all
// name: FUN_1002cbb28
// address: 0x1002cbb28
// body: available
// range: 0x1002cbb28-0x1002cbc1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002cbc18 to 0x10041481c _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002cbb28(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  URL UVar4;
  long lVar5;
  long unaff_x20;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  lVar2 = 0;
  FUN_1002cb204();
  uVar6 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  uVar7 = uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff);
  lVar5 = *(long *)(*(long *)(lVar2 + -8) + 0x40);
  puVar3 = &DAT_100556a40;
  FUN_100002f94(&DAT_100556a40,&DAT_10042abc0);
  lVar8 = *(long *)(puVar3 + -8);
  uVar6 = (ulong)*(byte *)(lVar8 + 0x50);
  lVar1 = unaff_x20 + uVar7;
  UVar4 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar4.unknown + -8) + 8))(lVar1,UVar4.unknown);
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar2 + 0x14) + 8));
  (**(code **)(lVar8 + 8))
            (unaff_x20 +
             ((lVar5 + uVar7 + 7 & 0xfffffffffffffff8) + uVar6 + 8 & (uVar6 ^ 0xffffffffffffffff)),
             puVar3);
  _swift_deallocObject();
  return;
}

