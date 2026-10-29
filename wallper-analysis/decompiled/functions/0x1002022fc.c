// rea decompile_all
// name: FUN_1002022fc
// address: 0x1002022fc
// body: available
// range: 0x1002022fc-0x10020268f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002022fc(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  char *pcVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long unaff_x22;
  bool bVar15;
  undefined8 uVar16;
  void *pvVar17;
  code *pcVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x60);
  SVar21 = *(String *)(unaff_x22 + 0x40);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x38);
  _swift_release(*(undefined8 *)(unaff_x22 + 0xa0));
  SVar19.bridgeObject = param_4;
  SVar19.str = param_3;
  Swift::String::append(SVar21,SVar19);
  lVar14 = 0x3a6b636f6c;
  pcVar8 = (char *)0xe500000000000000;
  puVar5 = &DAT_10042b198;
  _swift_getKeyPath(&DAT_10042b198);
  puVar6 = &DAT_10042b1c0;
  _swift_getKeyPath(&DAT_10042b1c0);
  Combine::Published::_get_subscript(unaff_x22 + 0x30,uVar16,puVar5,puVar6);
  _swift_release(puVar6);
  _swift_release(puVar5);
  lVar11 = *(long *)(unaff_x22 + 0x30);
  if (*(long *)(lVar11 + 0x10) == 0) {
    bVar15 = true;
  }
  else {
    _swift_bridgeObjectRetain(lVar11);
    pcVar7 = pcVar8;
    FUN_10000464c(0x3a6b636f6c);
    bVar15 = ((ulong)pcVar7 & 1) == 0;
    if (!bVar15) {
      FUN_100029504(*(long *)(lVar11 + 0x38) +
                    *(long *)(*(long *)(unaff_x22 + 0x90) + 0x48) * lVar14,
                    *(undefined8 *)(unaff_x22 + 0x80),FUN_100126a5c);
    }
    _swift_bridgeObjectRelease(lVar11);
  }
  pvVar3 = *(void **)(unaff_x22 + 0x88);
  lVar14 = *(long *)(unaff_x22 + 0x90);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x80);
  pcVar18 = *(code **)(lVar14 + 0x38);
  pvVar17 = pvVar3;
  (*pcVar18)(uVar16,bVar15,1);
  _swift_bridgeObjectRelease(lVar11);
  (**(code **)(lVar14 + 0x30))(uVar16,1,pvVar3);
  if ((int)uVar16 == 1) {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x80);
    _swift_bridgeObjectRelease(0xe500000000000000);
    pcVar8 = &DAT_100429e60;
    FUN_10002a29c(uVar9,&DAT_100551e50);
  }
  else {
    lVar12 = *(long *)(unaff_x22 + 0x98);
    lVar11 = *(long *)(unaff_x22 + 0x88);
    lVar14 = *(long *)(unaff_x22 + 0x50);
    FUN_100007e64(*(undefined8 *)(unaff_x22 + 0x80),lVar12,FUN_100126a5c);
    plVar1 = (long *)(lVar12 + *(int *)(lVar11 + 0x28));
    if (lVar14 < 2) {
      lVar14 = 1;
    }
    if (((char)plVar1[1] == '\x01') || (*plVar1 != lVar14)) {
      puVar2 = (undefined8 *)
               (*(long *)(unaff_x22 + 0x98) + (long)*(int *)(*(long *)(unaff_x22 + 0x88) + 0x24));
      *puVar2 = 0;
      *(undefined1 *)(puVar2 + 1) = 1;
    }
    lVar11 = *(long *)(unaff_x22 + 0x98);
    lVar12 = *(long *)(unaff_x22 + 0x88);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x50);
    pvVar17 = *(void **)(unaff_x22 + 0x38);
    *plVar1 = lVar14;
    *(undefined1 *)(plVar1 + 1) = 0;
    puVar2 = (undefined8 *)(lVar11 + *(int *)(lVar12 + 0x2c));
    *puVar2 = uVar10;
    *(undefined1 *)(puVar2 + 1) = 0;
    puVar2 = (undefined8 *)(lVar11 + *(int *)(lVar12 + 0x30));
    uVar10 = puVar2[1];
    _swift_bridgeObjectRetain(uVar4);
    _swift_bridgeObjectRelease(uVar10);
    *puVar2 = uVar16;
    puVar2[1] = uVar9;
    FUN_100029504(lVar11,uVar13,FUN_100126a5c);
    (*pcVar18)(uVar13,0,1,lVar12);
    puVar5 = &DAT_10042b198;
    _swift_getKeyPath(&DAT_10042b198);
    puVar6 = &DAT_10042b1c0;
    _swift_getKeyPath(&DAT_10042b1c0);
    pcVar18 = (code *)(unaff_x22 + 0x10);
    Combine::Published::_modify_subscript();
    FUN_100123160(uVar13,0x3a6b636f6c);
    (*pcVar18)(unaff_x22 + 0x10,0);
    _swift_release(puVar6);
    _swift_release(puVar5);
    FUN_100029548(lVar11,FUN_100126a5c);
  }
  bVar15 = (*(byte *)(unaff_x22 + 0xa8) & 1) == 0;
  if (bVar15) {
    SVar21.bridgeObject = pvVar17;
    SVar21.str = pcVar8;
    Swift::String::append(*(String *)(unaff_x22 + 0x40),SVar21);
    uVar9 = 0x4000000000000000;
  }
  else {
    SVar20.bridgeObject = pvVar17;
    SVar20.str = pcVar8;
    Swift::String::append(*(String *)(unaff_x22 + 0x40),SVar20);
    uVar9 = 0x3ff3333333333333;
  }
  FUN_100124e14(uVar9,0x3a6b636f6c,0xe500000000000000,bVar15);
  lVar14 = *(long *)(unaff_x22 + 0x68);
  _swift_bridgeObjectRelease(0xe500000000000000);
  if (lVar14 != 0) {
    (**(code **)(unaff_x22 + 0x68))();
  }
  uVar9 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x80);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x98));
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010020268c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

