// rea decompile_all
// name: FUN_1001eb1bc
// address: 0x1001eb1bc
// body: available
// range: 0x1001eb1bc-0x1001eb29b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001eb1bc(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  URL UVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  lVar2 = *(long *)(unaff_x22 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x30);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x50));
  _swift_beginAccess(lVar2 + _TtC7Wallper14PreviewManager::transparentIDs,unaff_x22 + 0x10,0x21,0);
  uVar6 = uVar1;
  FUN_100227384(uVar4,uVar1);
  _swift_endAccess(unaff_x22 + 0x10);
  _swift_bridgeObjectRelease(uVar6);
  UVar5 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar5.unknown + -8) + 0x38))(uVar3,1,1,UVar5.unknown);
  FUN_1001dee2c(uVar4,uVar1,uVar3);
  FUN_10002a29c(uVar3,&DAT_100553d90,&DAT_10041bf10);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001001eb298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

