// rea decompile_all
// name: FUN_10013abd8
// address: 0x10013abd8
// body: available
// range: 0x10013abd8-0x10013af1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010013ad40) */

void FUN_10013abd8(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  JSONDecoder *pJVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd8);
  lVar2 = *(long *)(unaff_x22 + 0xe0);
  uVar10 = *(undefined8 *)(unaff_x22 + 200);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xd0);
  _swift_release(*(undefined8 *)(unaff_x22 + 0xa0));
  FUN_10013c448(uVar1,uVar10,uVar11,0x7665642064616f6c,0xec00000073656369);
  if (lVar2 == 0) {
    lVar2 = *(long *)(unaff_x22 + 0x48);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x40);
    pJVar5 = Foundation::JSONDecoder::typeMetadataAccessor();
    _swift_allocObject(pJVar5,*(undefined4 *)(pJVar5 + 0x30),*(undefined2 *)(pJVar5 + 0x34));
    pJVar5 = Foundation::JSONDecoder::init(pJVar5);
    (**(code **)(lVar2 + 0x68))
              (uVar1,*(undefined4 *)
                      PTR___enum_case_for_Foundation_JSONDecoder_KeyDecodingStrategy_convertFromSnakeCase_Foundation_JSONDecoder_KeyDecodingStrategy_Type___>_Foundation_JSONDecoder_KeyDecodingStrategy_100520710
               ,uVar10);
    Foundation::JSONDecoder::set_keyDecodingStrategy(pJVar5,(KeyDecodingStrategy)(__int8)uVar1);
    if (DAT_100559110 != -1) {
      _swift_once(&DAT_100559110,FUN_10028f2ac);
    }
    lVar2 = *(long *)(unaff_x22 + 0x30);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar10 = uVar11;
    FUN_100099338(uVar11,&DAT_100577db0);
    (**(code **)(lVar2 + 0x10))(uVar1,uVar10,uVar11);
    Foundation::JSONDecoder::set_dateDecodingStrategy(pJVar5,(DateDecodingStrategy)(__int8)uVar1);
    FUN_10013d3e8();
    Foundation::JSONDecoder::_decode(pJVar5,(Data)0x10052ddf0);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar9 = *(undefined8 *)(unaff_x22 + 200);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 0xb8);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x58);
    lVar2 = *(long *)(unaff_x22 + 0x60);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x20);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x10);
    _swift_getKeyPath(&DAT_1004275e0);
    _swift_getKeyPath(&DAT_100427608);
    *(undefined8 *)(unaff_x22 + 0x18) = uVar13;
    _swift_retain(uVar15);
    Combine::Published::_set_subscript();
    _swift_release(pJVar5);
    FUN_100093624(uVar9,uVar1);
    (**(code **)(lVar2 + 8))(uVar8,uVar12);
    (*UNRECOVERED_JUMPTABLE)(uVar14,uVar4);
    _swift_task_dealloc(uVar14);
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar11);
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar6);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 0xb8);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x58);
    lVar2 = *(long *)(unaff_x22 + 0x60);
    FUN_100093624(*(undefined8 *)(unaff_x22 + 200),*(undefined8 *)(unaff_x22 + 0xd0));
    (**(code **)(lVar2 + 8))(uVar1,uVar10);
    (*UNRECOVERED_JUMPTABLE)(uVar8,uVar11);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x38);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x98));
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar11);
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(uVar14);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010013ae00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

