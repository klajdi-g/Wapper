// rea decompile_all
// name: FUN_1001a0364
// address: 0x1001a0364
// body: available
// range: 0x1001a0364-0x1001a06af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001a06a8 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1001a06ac to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001a0364(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  String SVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  Published *pPVar14;
  long unaff_x22;
  code *pcVar15;
  undefined8 uVar16;
  bool bVar17;
  long lVar18;
  String SVar19;
  
  lVar12 = *(long *)PTR____stack_chk_guard_100521138;
  SVar3 = *(String *)(unaff_x22 + 0x168);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x160);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x1f8));
  SVar19.bridgeObject = param_4;
  SVar19.str = param_3;
  Swift::String::append(SVar3,SVar19);
  lVar9 = 0x3a6b636f6c;
  uVar10 = 0;
  lVar4 = 0;
  FUN_100126a5c();
  lVar18 = *(long *)(lVar4 + -8);
  uVar5 = *(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  puVar6 = &DAT_100429e18;
  _swift_getKeyPath(&DAT_100429e18);
  puVar7 = &DAT_100429e40;
  _swift_getKeyPath(&DAT_100429e40);
  Combine::Published::_get_subscript(unaff_x22 + 0x128,uVar16,puVar6,puVar7);
  _swift_release(puVar7);
  _swift_release(puVar6);
  lVar13 = *(long *)(unaff_x22 + 0x128);
  puVar6 = &DAT_100551e50;
  FUN_100002f94(&DAT_100551e50,&DAT_100429e60);
  uVar11 = *(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xf;
  uVar8 = uVar11 & 0xfffffffffffffff0;
  _swift_task_alloc();
  if (*(long *)(lVar13 + 0x10) == 0) {
    bVar17 = true;
  }
  else {
    _swift_bridgeObjectRetain(lVar13);
    FUN_10000464c(0x3a6b636f6c);
    bVar17 = (uVar10 & 1) == 0;
    if (!bVar17) {
      FUN_100029504(*(long *)(lVar13 + 0x38) + *(long *)(lVar18 + 0x48) * lVar9,uVar8,FUN_100126a5c)
      ;
    }
    _swift_bridgeObjectRelease(lVar13);
  }
  pcVar15 = *(code **)(lVar18 + 0x38);
  (*pcVar15)(uVar8,bVar17,1,lVar4);
  _swift_bridgeObjectRelease(lVar13);
  uVar10 = uVar8;
  (**(code **)(lVar18 + 0x30))(uVar8,1,lVar4);
  if ((int)uVar10 == 1) {
    _swift_bridgeObjectRelease(0xe500000000000000);
    FUN_10002a29c(uVar8,&DAT_100551e50,&DAT_100429e60);
    _swift_task_dealloc(uVar8);
  }
  else {
    FUN_100007e64(uVar8,uVar5,FUN_100126a5c);
    _swift_task_dealloc(uVar8);
    plVar1 = (long *)(uVar5 + (long)*(int *)(lVar4 + 0x28));
    if (((char)plVar1[1] == '\x01') || (*plVar1 != 2)) {
      puVar2 = (undefined8 *)(uVar5 + (long)*(int *)(lVar4 + 0x24));
      *puVar2 = 0;
      *(undefined1 *)(puVar2 + 1) = 1;
    }
    pPVar14 = *(Published **)(unaff_x22 + 0x160);
    *plVar1 = 2;
    *(undefined1 *)(plVar1 + 1) = 0;
    puVar2 = (undefined8 *)(uVar5 + (long)*(int *)(lVar4 + 0x30));
    _swift_bridgeObjectRelease(puVar2[1]);
    puVar2[1] = 0xef6f656469762067;
    *puVar2 = 0x6e697265646e6552;
    uVar11 = uVar11 & 0xfffffffffffffff0;
    _swift_task_alloc(uVar11);
    FUN_100029504(uVar5,uVar11,FUN_100126a5c);
    (*pcVar15)(uVar11,0,1,lVar4);
    puVar6 = &DAT_100429e18;
    _swift_getKeyPath(&DAT_100429e18);
    puVar7 = &DAT_100429e40;
    _swift_getKeyPath(&DAT_100429e40);
    pcVar15 = (code *)(unaff_x22 + 0x40);
    Combine::Published::_modify_subscript(pPVar14,pcVar15,pPVar14,puVar6,puVar7);
    FUN_100123160(uVar11,0x3a6b636f6c,0xe500000000000000);
    (*pcVar15)(unaff_x22 + 0x40,0);
    _swift_release(puVar7);
    _swift_release(puVar6);
    _swift_task_dealloc(uVar11);
    FUN_100029548(uVar5,FUN_100126a5c);
  }
  _swift_task_dealloc(uVar5);
  if (*(long *)PTR____stack_chk_guard_100521138 != lVar12) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _swift_task_switch(FUN_1001a06b0,0,0);
  return;
}

