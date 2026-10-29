// rea decompile_all
// name: FUN_10019d28c
// address: 0x10019d28c
// body: available
// range: 0x10019d28c-0x10019d41b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10019d28c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  NSData *pNVar4;
  long lVar5;
  ulong uVar6;
  Data DVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 200));
  bVar3 = (extension_Swift)::Swift::Task::_get_isCancelled((Task)0x0);
  DVar7.unknown = *(undefined **)(unaff_x22 + 0xf0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xf8);
  if (!bVar3) {
    pNVar4 = Foundation::Data::_bridgeToObjectiveC(DVar7);
    _CGImageSourceCreateWithData(pNVar4,0);
    if ((pNVar4 != (NSData *)0x0) && (FUN_10010f93c(pNVar4,0x5dc), pNVar4 != (NSData *)0x0)) {
      if (*(long *)(*(long *)(unaff_x22 + 0xa0) + 0x10) == 0) {
LAB_10019d3ec:
        uVar9 = 0xe100000000000000;
      }
      else {
        _swift_bridgeObjectRetain(*(long *)(unaff_x22 + 0xa0));
        lVar5 = 0x697463656c6c6f63;
        uVar6 = 0xee00656d614e6e6f;
        FUN_10000464c(0x697463656c6c6f63);
        lVar8 = *(long *)(unaff_x22 + 0xa0);
        if ((uVar6 & 1) == 0) {
          _swift_bridgeObjectRelease(lVar8);
          goto LAB_10019d3ec;
        }
        FUN_1000280d4(*(long *)(lVar8 + 0x38) + lVar5 * 0x20,unaff_x22 + 0x30);
        _swift_bridgeObjectRelease(lVar8);
        uVar6 = unaff_x22 + 0x90;
        _swift_dynamicCast(uVar6,unaff_x22 + 0x30,PTR___type_metadata_for_Any_100524178 + 8,
                           PTR___type_metadata_for_Swift_String_100523a98,6);
        if ((uVar6 & 1) == 0) goto LAB_10019d3ec;
        uVar9 = *(undefined8 *)(unaff_x22 + 0x98);
      }
      uVar1 = *(undefined8 *)(unaff_x22 + 0xf0);
      uVar2 = *(undefined8 *)(unaff_x22 + 0xf8);
      (**(code **)(*(long *)(unaff_x22 + 0xb8) + 8))
                (*(undefined8 *)(unaff_x22 + 0xc0),*(undefined8 *)(unaff_x22 + 0xb0));
      FUN_100093624(uVar1,uVar2);
      _swift_bridgeObjectRelease(uVar9);
      goto LAB_10019d3b4;
    }
    DVar7.unknown = *(undefined **)(unaff_x22 + 0xf0);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xf8);
  }
  (**(code **)(*(long *)(unaff_x22 + 0xb8) + 8))
            (*(undefined8 *)(unaff_x22 + 0xc0),*(undefined8 *)(unaff_x22 + 0xb0));
  FUN_100093624(DVar7.unknown,uVar9);
  pNVar4 = (NSData *)0x0;
LAB_10019d3b4:
  uVar9 = *(undefined8 *)(unaff_x22 + 0xa8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xc0));
  _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010019d3e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(pNVar4);
  return;
}

