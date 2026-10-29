// rea decompile_all
// name: FUN_100115d08
// address: 0x100115d08
// body: available
// range: 0x100115d08-0x100115f73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100115e00 to 0x100117d1c FUN_100117d1c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100115f70 to 0x100413514 /usr/lib/swift/libswift_Concurrency.dylib::(extension_Swift)::Swift::Task::$get_value (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100115d08(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  uint uVar3;
  long *plVar4;
  undefined *puVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  ID IVar11;
  undefined8 uVar12;
  long unaff_x22;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  code *pcVar17;
  ulong uVar18;
  long lVar19;
  
  IVar11 = *(ID *)(unaff_x22 + 0x280);
  _swift_dynamicCastObjCClass(IVar11,&_OBJC_CLASS___NSHTTPURLResponse);
  if ((IVar11 != 0) && (IVar11 = objc_stub::statusCode(IVar11), IVar11 == 200)) {
    uVar3 = (uint)(*(ulong *)(unaff_x22 + 0x278) >> 0x20);
    uVar7 = uVar3 >> 0x1e;
    if (uVar3 >> 0x1e < 2) {
      if (uVar7 == 0) {
        if ((*(ulong *)(unaff_x22 + 0x278) & 0xff000000000000) == 0) goto LAB_100115dac;
        goto LAB_100115e20;
      }
      lVar19 = (long)(int)*(long *)(unaff_x22 + 0x270);
      lVar9 = *(long *)(unaff_x22 + 0x270) >> 0x20;
    }
    else {
      if (uVar7 != 2) goto LAB_100115dac;
      lVar19 = *(long *)(*(long *)(unaff_x22 + 0x270) + 0x10);
      lVar9 = *(long *)(*(long *)(unaff_x22 + 0x270) + 0x18);
    }
    if (lVar19 != lVar9) {
LAB_100115e20:
      uVar10 = *(undefined8 *)(unaff_x22 + 0x278);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x270);
      uVar16 = (ulong)*(byte *)(unaff_x22 + 0x2c8);
      pcVar17 = *(code **)(unaff_x22 + 0x240);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x238);
      uVar2 = *(undefined1 *)(unaff_x22 + 0x2d2);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x200);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x110);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x118);
      lVar19 = *(long *)(unaff_x22 + 0x108);
      uVar14 = *(undefined8 *)(unaff_x22 + 0xf0);
      Swift::TaskPriority::get_userInitiated((TaskPriority)0x0);
      (*pcVar17)(uVar1,0,1,uVar13);
      FUN_100119d34(uVar14,uVar6);
      uVar15 = uVar16 + 0x20 & (uVar16 ^ 0xffffffffffffffff);
      uVar18 = uVar15 + lVar19 + 7 & 0xfffffffffffffff8;
      puVar5 = &DAT_10052ccc8;
      _swift_allocObject(&DAT_10052ccc8,uVar18 + 0x19,uVar16 | 7);
      *(undefined8 *)(puVar5 + 0x10) = 0;
      *(undefined8 *)(puVar5 + 0x18) = 0;
      FUN_100119e80(uVar6,puVar5 + uVar15);
      *(undefined8 *)(puVar5 + uVar18) = uVar12;
      *(undefined8 *)((long)(puVar5 + uVar18) + 8) = uVar10;
      *(undefined8 *)(puVar5 + uVar18 + 0x10) = uVar8;
      *(undefined1 *)((long)(puVar5 + uVar18 + 0x10) + 8) = uVar2;
      FUN_10011a30c(uVar12,uVar10);
      uVar6 = 0;
      FUN_100176fac(0,0,uVar1,&DAT_1004262a0,puVar5);
      *(undefined8 *)(unaff_x22 + 0x290) = uVar6;
      FUN_10002a29c(uVar1,&DAT_100561090,&DAT_10041c870);
      plVar4 = (long *)(ulong)*(uint *)(PTR__get_value_100524738 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x298) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_100115f74;
      (extension_Swift)::Swift::Task::_get_value((undefined *)(unaff_x22 + 0x88));
      return;
    }
  }
LAB_100115dac:
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x1f8));
  plVar4 = (long *)0x2c0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x2b8) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1001164b4;
  FUN_100117d1c(*(undefined8 *)(unaff_x22 + 0x1b8),*(undefined8 *)(unaff_x22 + 0x1c0),
                *(undefined8 *)(unaff_x22 + 0x1e8));
  return;
}

