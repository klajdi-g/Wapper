// rea decompile_all
// name: FUN_100162e2c
// address: 0x100162e2c
// body: available
// range: 0x100162e2c-0x100162f1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100162e2c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  char cVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar5 = *(long *)(unaff_x22 + 0x90);
  if (lVar5 == 0) {
    cVar3 = *(char *)(unaff_x22 + 0x81);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x68));
    if (cVar3 != '\x02') {
      puVar4 = (undefined *)0x0;
      if ((*(byte *)(unaff_x22 + 0x81) & 1) != 0) {
        puVar4 = PTR___swiftEmptyArrayStorage_100524190;
      }
      goto LAB_100162ef0;
    }
  }
  else {
    if (lVar5 != 1) {
      uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
      puVar2 = *(undefined **)(unaff_x22 + 0x88);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x68);
      _swift_bridgeObjectRetain(lVar5);
      puVar4 = puVar2;
      FUN_100162308(puVar2,lVar5);
      FUN_100163cac(uVar6,uVar1,puVar2,lVar5);
      FUN_100163cac(uVar6,uVar1,puVar2,lVar5);
      _swift_bridgeObjectRelease(uVar7);
      goto LAB_100162ef0;
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x68));
  }
  puVar4 = (undefined *)0x0;
LAB_100162ef0:
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x000100162f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar4);
  return;
}

