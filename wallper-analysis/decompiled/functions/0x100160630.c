// rea decompile_all
// name: FUN_100160630
// address: 0x100160630
// body: available
// range: 0x100160630-0x1001608f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100160630(void)

{
  long lVar1;
  long lVar2;
  ID IVar3;
  JSONDecoder *pJVar4;
  code *pcVar5;
  undefined8 uVar6;
  ID self;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  self = *(ID *)(unaff_x22 + 0xa0);
  _swift_dynamicCastObjCClass(self,&_OBJC_CLASS___NSHTTPURLResponse);
  IVar3 = 0;
  if (self == 0) {
LAB_10016073c:
    uVar9 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
    lVar1 = *(long *)(unaff_x22 + 0x58);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x50);
    FUN_100163bbc();
    _swift_allocError(&DAT_10052f4d0,IVar3,0,0);
    _swift_willThrow();
    FUN_100093624(uVar6,uVar9);
    (**(code **)(lVar1 + 8))(uVar7,uVar10);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x48);
    (**(code **)(*(long *)(unaff_x22 + 0x78) + 8))(uVar7,*(undefined8 *)(unaff_x22 + 0x70));
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar10);
                    /* WARNING: Could not recover jumptable at 0x0001001607f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  IVar3 = objc_stub::statusCode(self);
  if (IVar3 == 0x194) {
    lVar1 = *(long *)(unaff_x22 + 0x78);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
    lVar2 = *(long *)(unaff_x22 + 0x58);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x50);
    FUN_100093624(*(undefined8 *)(unaff_x22 + 0x90),*(undefined8 *)(unaff_x22 + 0x98));
    (**(code **)(lVar2 + 8))(uVar7,uVar10);
    pcVar5 = *(code **)(lVar1 + 8);
  }
  else {
    if (IVar3 != 200) goto LAB_10016073c;
    lVar8 = *(long *)(unaff_x22 + 0xa8);
    pJVar4 = Foundation::JSONDecoder::typeMetadataAccessor();
    _swift_allocObject(pJVar4,*(undefined4 *)(pJVar4 + 0x30),*(undefined2 *)(pJVar4 + 0x34));
    pJVar4 = Foundation::JSONDecoder::init(pJVar4);
    FUN_100163c6c();
    Foundation::JSONDecoder::_decode(pJVar4,(Data)0x10052f568);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x90);
    lVar1 = *(long *)(unaff_x22 + 0x78);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
    lVar2 = *(long *)(unaff_x22 + 0x58);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x50);
    if (lVar8 == 0) {
      FUN_100093624(uVar13,uVar7);
      _swift_release(pJVar4);
      (**(code **)(lVar2 + 8))(uVar10,uVar11);
      (**(code **)(lVar1 + 8))(uVar9,uVar6);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x10);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x18);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x20);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x28);
      goto LAB_100160850;
    }
    _swift_errorRelease();
    FUN_100093624(uVar13,uVar7);
    _swift_release(pJVar4);
    (**(code **)(lVar2 + 8))(uVar10,uVar11);
    pcVar5 = *(code **)(lVar1 + 8);
  }
  (*pcVar5)(uVar9,uVar6);
  uVar7 = 0;
  uVar6 = 0;
  uVar9 = 0;
  uVar10 = 1;
LAB_100160850:
  uVar11 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x48);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x80));
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar12);
                    /* WARNING: Could not recover jumptable at 0x0001001608ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar9,uVar6,uVar7,uVar10);
  return;
}

