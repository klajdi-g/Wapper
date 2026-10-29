// rea decompile_all
// name: FUN_100157428
// address: 0x100157428
// body: available
// range: 0x100157428-0x10015758f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100157428(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ID IVar6;
  JSONDecoder *pJVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  
  IVar6 = objc_stub::statusCode(*(ID *)(unaff_x22 + 0x98));
  if (IVar6 == 200) {
    lVar2 = *(long *)(unaff_x22 + 0xa0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x90);
    lVar1 = *(long *)(unaff_x22 + 0x70);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x68);
    pJVar7 = Foundation::JSONDecoder::typeMetadataAccessor();
    _swift_allocObject(pJVar7,*(undefined4 *)(pJVar7 + 0x30),*(undefined2 *)(pJVar7 + 0x34));
    pJVar7 = Foundation::JSONDecoder::init(pJVar7);
    FUN_100158e98();
    Foundation::JSONDecoder::_decode(pJVar7,(Data)0x10052f160);
    (**(code **)(lVar1 + 8))(uVar3,uVar11);
    FUN_100093624(uVar8,uVar10);
    _swift_release(pJVar7);
    if (lVar2 == 0) {
      uVar9 = *(undefined1 *)(unaff_x22 + 0x10);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x18);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x20);
      goto LAB_100157524;
    }
    _swift_errorRelease(lVar2);
  }
  else {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x88);
    (**(code **)(*(long *)(unaff_x22 + 0x70) + 8))
              (*(undefined8 *)(unaff_x22 + 0x78),*(undefined8 *)(unaff_x22 + 0x68));
    FUN_100093624(uVar10,uVar8);
  }
  uVar9 = 0;
  uVar8 = 0;
  uVar10 = 1;
LAB_100157524:
  uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x78));
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar11);
                    /* WARNING: Could not recover jumptable at 0x000100157580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar9,uVar8,uVar10);
  return;
}

