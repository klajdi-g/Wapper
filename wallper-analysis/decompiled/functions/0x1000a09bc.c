// rea decompile_all
// name: FUN_1000a09bc
// address: 0x1000a09bc
// body: available
// range: 0x1000a09bc-0x1000a0b17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000a09bc(void)

{
  Data DVar1;
  long lVar2;
  URL to;
  NSData *pNVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x22;
  undefined8 uVar7;
  
  uVar5 = *(ulong *)(unaff_x22 + 0xb0);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x28));
  if (uVar5 >> 0x3c < 0xf) {
    pNVar3 = Foundation::Data::_bridgeToObjectiveC((Data)*(undefined **)(unaff_x22 + 0xa8));
    _CGImageSourceCreateWithData(pNVar3,0);
    if ((pNVar3 == (NSData *)0x0) || (FUN_10010f93c(pNVar3,0x5dc), pNVar3 == (NSData *)0x0)) {
      uVar4 = *(undefined8 *)(unaff_x22 + 0xa8);
      uVar7 = *(undefined8 *)(unaff_x22 + 0xb0);
    }
    else {
      if (DAT_10054f928 != -1) {
        _swift_once(&DAT_10054f928,FUN_10009ff34);
      }
      DVar1.unknown = *(undefined **)(unaff_x22 + 0xa8);
      lVar6 = *(long *)(unaff_x22 + 0x98);
      lVar2 = *(long *)(unaff_x22 + 0x18);
      to.unknown = *(undefined **)(unaff_x22 + 0x20);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x10);
      uVar4 = uVar7;
      FUN_100099338(uVar7,&DAT_10054f930);
      (**(code **)(lVar2 + 0x10))(to.unknown,uVar4,uVar7);
      Foundation::Data::_write(to,(NSDataWritingOptions)0x1,DVar1);
      if (lVar6 != 0) {
        _swift_errorRelease(lVar6);
      }
      uVar4 = *(undefined8 *)(unaff_x22 + 0xa8);
      uVar7 = *(undefined8 *)(unaff_x22 + 0xb0);
      (**(code **)(*(long *)(unaff_x22 + 0x18) + 8))
                (*(undefined8 *)(unaff_x22 + 0x20),*(undefined8 *)(unaff_x22 + 0x10));
      DAT_10054f848 = pNVar3;
    }
    FUN_1000a3004(uVar4,uVar7);
  }
  DAT_10054f948 = 0;
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0001000a0afc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

