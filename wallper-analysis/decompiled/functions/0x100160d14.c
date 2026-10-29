// rea decompile_all
// name: FUN_100160d14
// address: 0x100160d14
// body: available
// range: 0x100160d14-0x100160fcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100160d14(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ID IVar4;
  JSONDecoder *pJVar5;
  Data DVar6;
  code *pcVar7;
  ID self;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  self = *(ID *)(unaff_x22 + 0x88);
  _swift_dynamicCastObjCClass(self,&_OBJC_CLASS___NSHTTPURLResponse);
  IVar4 = 0;
  if (self == 0) {
LAB_100160e2c:
    uVar8 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x78);
    lVar2 = *(long *)(unaff_x22 + 0x40);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x38);
    FUN_100163bbc();
    _swift_allocError(&DAT_10052f4d0,IVar4,0,0);
    _swift_willThrow();
    FUN_100093624(uVar10,uVar8);
    (**(code **)(lVar2 + 8))(uVar1,uVar11);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x30);
    (**(code **)(*(long *)(unaff_x22 + 0x60) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x58));
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar11);
                    /* WARNING: Could not recover jumptable at 0x000100160ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  IVar4 = objc_stub::statusCode(self);
  if (IVar4 == 0x194) {
    lVar2 = *(long *)(unaff_x22 + 0x60);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x58);
    lVar3 = *(long *)(unaff_x22 + 0x40);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x38);
    FUN_100093624(*(undefined8 *)(unaff_x22 + 0x78),*(undefined8 *)(unaff_x22 + 0x80));
    (**(code **)(lVar3 + 8))(uVar1,uVar11);
    pcVar7 = *(code **)(lVar2 + 8);
  }
  else {
    if (IVar4 != 200) goto LAB_100160e2c;
    lVar9 = *(long *)(unaff_x22 + 0x90);
    pJVar5 = Foundation::JSONDecoder::typeMetadataAccessor();
    _swift_allocObject(pJVar5,*(undefined4 *)(pJVar5 + 0x30),*(undefined2 *)(pJVar5 + 0x34));
    pJVar5 = Foundation::JSONDecoder::init(pJVar5);
    DVar6.unknown = &DAT_100555340;
    FUN_100002f94(&DAT_100555340,&DAT_100428d90);
    FUN_100163bfc();
    Foundation::JSONDecoder::_decode(pJVar5,DVar6);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x78);
    lVar2 = *(long *)(unaff_x22 + 0x60);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x58);
    lVar3 = *(long *)(unaff_x22 + 0x40);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x38);
    if (lVar9 == 0) {
      FUN_100093624(uVar13,uVar1);
      _swift_release(pJVar5);
      (**(code **)(lVar3 + 8))(uVar11,uVar12);
      (**(code **)(lVar2 + 8))(uVar8,uVar10);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x10);
      goto LAB_100160f34;
    }
    _swift_errorRelease();
    FUN_100093624(uVar13,uVar1);
    _swift_release(pJVar5);
    (**(code **)(lVar3 + 8))(uVar11,uVar12);
    pcVar7 = *(code **)(lVar2 + 8);
  }
  (*pcVar7)(uVar8,uVar10);
  uVar8 = 0;
LAB_100160f34:
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x30);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x68));
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar11);
                    /* WARNING: Could not recover jumptable at 0x000100160f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar8);
  return;
}

