// rea decompile_all
// name: FUN_1002a6c48
// address: 0x1002a6c48
// body: available
// range: 0x1002a6c48-0x1002a6f7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002a6f7c to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002a6c48(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 uVar5;
  Data DVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  ID IVar10;
  long lVar11;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  code *pcVar15;
  undefined8 uVar16;
  code *pcVar17;
  undefined8 uVar18;
  code *local_70;
  
  lVar9 = *(long *)PTR____stack_chk_guard_100521138;
  IVar10 = *(ID *)(unaff_x22 + 0x1c8);
  _swift_dynamicCastObjCClass(IVar10,&_OBJC_CLASS___NSHTTPURLResponse);
  if (IVar10 == 0) {
    uVar7 = *(ulong *)(unaff_x22 + 0x1c0);
LAB_1002a6db4:
    local_70 = *(code **)(unaff_x22 + 0x198);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x148);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x150);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x140);
    lVar11 = *(long *)(unaff_x22 + 0x128);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x130);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xb8);
    FUN_100093624(*(undefined8 *)(unaff_x22 + 0x1b8),uVar7);
    pcVar15 = *(code **)(lVar11 + 8);
    (*pcVar15)(uVar3,uVar12);
    FUN_10002a29c(uVar1,&DAT_100553d90,&DAT_10041bf10);
    (*pcVar15)(uVar14,uVar12);
    (*pcVar15)(uVar5,uVar12);
    (*pcVar15)(uVar2,uVar12);
    uVar5 = 1;
  }
  else {
    IVar10 = objc_stub::statusCode(IVar10);
    uVar7 = *(ulong *)(unaff_x22 + 0x1c0);
    if (99 < IVar10 - 200) goto LAB_1002a6db4;
    uVar4 = (uint)(uVar7 >> 0x20);
    uVar8 = uVar4 >> 0x1e;
    if (1 < uVar4 >> 0x1e) {
      if ((uVar8 == 2) &&
         (DVar6.unknown = *(undefined **)(unaff_x22 + 0x1b8),
         *(long *)(DVar6.unknown + 0x10) != *(long *)(DVar6.unknown + 0x18))) goto LAB_1002a6cf0;
      goto LAB_1002a6db4;
    }
    if (uVar8 == 0) {
      if ((uVar7 & 0xff000000000000) == 0) goto LAB_1002a6db4;
      DVar6.unknown = *(undefined **)(unaff_x22 + 0x1b8);
    }
    else {
      DVar6.unknown = *(undefined **)(unaff_x22 + 0x1b8);
      if ((long)(int)DVar6.unknown == (long)DVar6.unknown >> 0x20) goto LAB_1002a6db4;
    }
LAB_1002a6cf0:
    lVar11 = *(long *)(unaff_x22 + 0x1d0);
    Foundation::Data::_write
              ((URL)*(undefined **)(unaff_x22 + 0x140),(NSDataWritingOptions)0x1,DVar6);
    if (lVar11 != 0) {
      FUN_100093624(*(undefined8 *)(unaff_x22 + 0x1b8),*(undefined8 *)(unaff_x22 + 0x1c0));
      pcVar15 = *(code **)(unaff_x22 + 0x198);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x148);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x150);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x140);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x118);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x120);
      uVar13 = *(undefined8 *)(unaff_x22 + 0xb8);
      pcVar17 = *(code **)(*(long *)(unaff_x22 + 0x128) + 8);
      (*pcVar17)(*(undefined8 *)(unaff_x22 + 0x130),uVar3);
      FUN_10002a29c(uVar1,&DAT_100553d90,&DAT_10041bf10);
      (*pcVar17)(uVar12,uVar3);
      (*pcVar17)(uVar5,uVar3);
      (*pcVar17)(uVar2,uVar3);
      _swift_errorRelease(lVar11);
      (*pcVar15)(uVar13,1,1,uVar3);
      goto LAB_1002a6e4c;
    }
    local_70 = *(code **)(unaff_x22 + 0x198);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x148);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x150);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x140);
    lVar11 = *(long *)(unaff_x22 + 0x128);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x130);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xb8);
    FUN_100093624(*(undefined8 *)(unaff_x22 + 0x1b8),*(undefined8 *)(unaff_x22 + 0x1c0));
    pcVar15 = *(code **)(lVar11 + 8);
    (*pcVar15)(uVar3,uVar12);
    FUN_10002a29c(uVar1,&DAT_100553d90,&DAT_10041bf10);
    (*pcVar15)(uVar5,uVar12);
    (*pcVar15)(uVar2,uVar12);
    (**(code **)(lVar11 + 0x20))(uVar13,uVar14,uVar12);
    uVar5 = 0;
  }
  (*local_70)(uVar13,uVar5,1,uVar12);
LAB_1002a6e4c:
  uVar5 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar16 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar18 = *(undefined8 *)(unaff_x22 + 0xd8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x150));
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar18);
  if (*(long *)PTR____stack_chk_guard_100521138 != lVar9) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
                    /* WARNING: Could not recover jumptable at 0x0001002a6eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

