// rea decompile_all
// name: FUN_100201ee4
// address: 0x100201ee4
// body: available
// range: 0x100201ee4-0x1002021ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100201ee4(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  Published *pPVar10;
  long unaff_x22;
  bool bVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  code *pcVar16;
  String SVar17;
  
  lVar13 = *(long *)(unaff_x22 + 0x50);
  lVar9 = *(long *)(unaff_x22 + 0x58);
  _swift_release(*(undefined8 *)(unaff_x22 + 0xa0));
  lVar1 = lVar13 + lVar9;
  if (SCARRY8(lVar13,lVar9)) {
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x1002021f0);
    (*pcVar16)();
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x38);
  SVar17.bridgeObject = param_4;
  SVar17.str = param_3;
  Swift::String::append(*(String *)(unaff_x22 + 0x40),SVar17);
  lVar13 = 0x3a6b636f6c;
  uVar7 = 0;
  puVar5 = &DAT_10042b198;
  _swift_getKeyPath(&DAT_10042b198);
  puVar6 = &DAT_10042b1c0;
  _swift_getKeyPath(&DAT_10042b1c0);
  Combine::Published::_get_subscript(unaff_x22 + 0x30,uVar12,puVar5,puVar6);
  _swift_release(puVar6);
  _swift_release(puVar5);
  lVar9 = *(long *)(unaff_x22 + 0x30);
  if (*(long *)(lVar9 + 0x10) == 0) {
    bVar11 = true;
  }
  else {
    _swift_bridgeObjectRetain(lVar9);
    FUN_10000464c(0x3a6b636f6c);
    bVar11 = (uVar7 & 1) == 0;
    if (!bVar11) {
      FUN_100029504(*(long *)(lVar9 + 0x38) + *(long *)(*(long *)(unaff_x22 + 0x90) + 0x48) * lVar13
                    ,*(undefined8 *)(unaff_x22 + 0x80),FUN_100126a5c);
    }
    _swift_bridgeObjectRelease(lVar9);
  }
  uVar12 = *(undefined8 *)(unaff_x22 + 0x88);
  lVar13 = *(long *)(unaff_x22 + 0x90);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x80);
  pcVar16 = *(code **)(lVar13 + 0x38);
  (*pcVar16)(uVar14,bVar11,1,uVar12);
  _swift_bridgeObjectRelease(lVar9);
  (**(code **)(lVar13 + 0x30))(uVar14,1,uVar12);
  if ((int)uVar14 == 1) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x80);
    _swift_bridgeObjectRelease(0xe500000000000000);
    FUN_10002a29c(uVar8,&DAT_100551e50,&DAT_100429e60);
  }
  else {
    lVar9 = *(long *)(unaff_x22 + 0x98);
    lVar13 = *(long *)(unaff_x22 + 0x88);
    FUN_100007e64(*(undefined8 *)(unaff_x22 + 0x80),lVar9,FUN_100126a5c);
    plVar2 = (long *)(lVar9 + *(int *)(lVar13 + 0x28));
    if (lVar1 < 2) {
      lVar1 = 1;
    }
    if (((char)plVar2[1] == '\x01') || (*plVar2 != lVar1)) {
      puVar3 = (undefined8 *)
               (*(long *)(unaff_x22 + 0x98) + (long)*(int *)(*(long *)(unaff_x22 + 0x88) + 0x24));
      *puVar3 = 0;
      *(undefined1 *)(puVar3 + 1) = 1;
    }
    lVar13 = *(long *)(unaff_x22 + 0x98);
    lVar9 = *(long *)(unaff_x22 + 0x88);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x70);
    pPVar10 = *(Published **)(unaff_x22 + 0x78);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x38);
    *plVar2 = lVar1;
    *(undefined1 *)(plVar2 + 1) = 0;
    puVar3 = (undefined8 *)(lVar13 + *(int *)(lVar9 + 0x2c));
    *puVar3 = uVar14;
    *(undefined1 *)(puVar3 + 1) = 0;
    puVar3 = (undefined8 *)(lVar13 + *(int *)(lVar9 + 0x30));
    uVar14 = puVar3[1];
    _swift_bridgeObjectRetain(uVar12);
    _swift_bridgeObjectRelease(uVar14);
    *puVar3 = uVar4;
    puVar3[1] = uVar8;
    FUN_100029504(lVar13,pPVar10,FUN_100126a5c);
    (*pcVar16)(pPVar10,0,1,lVar9);
    puVar5 = &DAT_10042b198;
    _swift_getKeyPath(&DAT_10042b198);
    puVar6 = &DAT_10042b1c0;
    _swift_getKeyPath(&DAT_10042b1c0);
    pcVar16 = (code *)(unaff_x22 + 0x10);
    Combine::Published::_modify_subscript(pPVar10,pcVar16,uVar15,puVar5,puVar6);
    FUN_100123160(pPVar10,0x3a6b636f6c,0xe500000000000000,uVar15);
    (*pcVar16)(unaff_x22 + 0x10,0);
    _swift_release(puVar6);
    _swift_release(puVar5);
    FUN_100029548(lVar13,FUN_100126a5c);
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x80);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x98));
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x0001002021e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

