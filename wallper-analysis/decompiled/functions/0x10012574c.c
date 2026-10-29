// rea decompile_all
// name: FUN_10012574c
// address: 0x10012574c
// body: available
// range: 0x10012574c-0x100125bdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10012574c(void)

{
  _StringGuts _Var1;
  long lVar2;
  _StringGuts _Var3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  Published *pPVar11;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  code *pcVar15;
  
  puVar14 = (undefined8 *)(unaff_x22 + 0x88);
  uVar8 = *puVar14;
  pPVar11 = (Published *)(unaff_x22 + 0x30);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar2 = *(long *)(unaff_x22 + 0x60);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x40);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x90));
  puVar5 = &DAT_1004269c0;
  _swift_getKeyPath(&DAT_1004269c0);
  puVar6 = &DAT_1004269e8;
  _swift_getKeyPath(&DAT_1004269e8);
  Combine::Published::_get_subscript(uVar8,uVar12,puVar5,puVar6);
  _swift_release(puVar6);
  _swift_release(puVar5);
  pcVar15 = *(code **)(lVar2 + 0x30);
  (*pcVar15)(uVar8,1,uVar9);
  if ((int)uVar8 == 0) {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x88);
    puVar14 = *(undefined8 **)(unaff_x22 + 0x68);
    puVar5 = *(undefined **)(unaff_x22 + 0x48);
    puVar6 = *(undefined **)(unaff_x22 + 0x50);
    FUN_10010b814(uVar9,puVar14);
    FUN_10002a29c(uVar9,&DAT_100551e50,&DAT_100429e60);
    _Var1.unknown = (undefined *)*puVar14;
    _Var3.unknown = (undefined *)puVar14[1];
    _swift_bridgeObjectRetain(_Var3.unknown);
    FUN_10010c26c(puVar14);
    if ((_Var1.unknown == puVar5) && (_Var3.unknown == puVar6)) {
      _swift_bridgeObjectRelease(_Var3.unknown);
LAB_100125870:
      puVar14 = (undefined8 *)(unaff_x22 + 0x80);
      uVar9 = *puVar14;
      uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x40);
      (**(code **)(*(long *)(unaff_x22 + 0x60) + 0x38))(uVar9,1,1,*(undefined8 *)(unaff_x22 + 0x58))
      ;
      puVar5 = &DAT_1004269c0;
      _swift_getKeyPath(&DAT_1004269c0);
      puVar6 = &DAT_1004269e8;
      _swift_getKeyPath(&DAT_1004269e8);
      FUN_1000087e4(uVar9,uVar8,&DAT_100551e50,&DAT_100429e60);
      _swift_retain(uVar12);
      Combine::Published::_set_subscript(pPVar11,uVar8,uVar12,puVar5,puVar6);
      goto LAB_1001258f0;
    }
    bVar4 = Swift::_stringCompareWithSmolCheck
                      (_Var1,_Var3,
                       (_StringComparisonResult)(__int8)*(undefined8 *)(unaff_x22 + 0x48));
    _swift_bridgeObjectRelease(_Var3.unknown);
    if (bVar4) goto LAB_100125870;
  }
  else {
LAB_1001258f0:
    FUN_10002a29c(*puVar14,&DAT_100551e50,&DAT_100429e60);
  }
  puVar14 = (undefined8 *)(unaff_x22 + 0x70);
  uVar9 = *puVar14;
  uVar8 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x40);
  puVar5 = &DAT_100426a18;
  _swift_getKeyPath(&DAT_100426a18);
  puVar6 = &DAT_100426a40;
  _swift_getKeyPath(&DAT_100426a40);
  Combine::Published::_get_subscript(uVar9,uVar12,puVar5,puVar6);
  _swift_release(puVar6);
  _swift_release(puVar5);
  (*pcVar15)(uVar9,1,uVar8);
  if ((int)uVar9 == 0) {
    puVar14 = *(undefined8 **)(unaff_x22 + 0x68);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x70);
    puVar5 = *(undefined **)(unaff_x22 + 0x48);
    puVar6 = *(undefined **)(unaff_x22 + 0x50);
    FUN_10010b814(uVar9,puVar14);
    FUN_10002a29c(uVar9,&DAT_100551e50,&DAT_100429e60);
    _Var1.unknown = (undefined *)*puVar14;
    _Var3.unknown = (undefined *)puVar14[1];
    _swift_bridgeObjectRetain(_Var3.unknown);
    FUN_10010c26c(puVar14);
    if ((_Var1.unknown == puVar5) && (_Var3.unknown == puVar6)) {
      _swift_bridgeObjectRelease(_Var3.unknown);
    }
    else {
      bVar4 = Swift::_stringCompareWithSmolCheck
                        (_Var1,_Var3,
                         (_StringComparisonResult)(__int8)*(undefined8 *)(unaff_x22 + 0x48));
      _swift_bridgeObjectRelease(_Var3.unknown);
      if (!bVar4) goto LAB_100125a88;
    }
    puVar14 = (undefined8 *)(unaff_x22 + 0x80);
    uVar9 = *puVar14;
    uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x40);
    (**(code **)(*(long *)(unaff_x22 + 0x60) + 0x38))(uVar9,1,1,*(undefined8 *)(unaff_x22 + 0x58));
    _swift_getKeyPath(&DAT_100426a18);
    _swift_getKeyPath(&DAT_100426a40);
    FUN_1000087e4(uVar9,uVar8,&DAT_100551e50,&DAT_100429e60);
    _swift_retain(uVar12);
    Combine::Published::_set_subscript();
  }
  FUN_10002a29c(*puVar14,&DAT_100551e50,&DAT_100429e60);
LAB_100125a88:
  uVar7 = *(ulong *)(unaff_x22 + 0x48);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x40);
  puVar5 = &DAT_100426978;
  _swift_getKeyPath(&DAT_100426978);
  puVar6 = &DAT_1004269a0;
  _swift_getKeyPath(&DAT_1004269a0);
  Combine::Published::_get_subscript(pPVar11,uVar8,puVar5,puVar6);
  _swift_release(puVar6);
  _swift_release(puVar5);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x30);
  FUN_10026abd8(uVar7,uVar9,uVar8);
  _swift_bridgeObjectRelease(uVar8);
  if ((uVar7 & 1) == 0) {
    pcVar10 = (code *)(unaff_x22 + 0x10);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x48);
    pPVar11 = *(Published **)(unaff_x22 + 0x50);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x40);
    puVar5 = &DAT_100426930;
    _swift_getKeyPath(&DAT_100426930);
    puVar6 = &DAT_100426958;
    _swift_getKeyPath(&DAT_100426958);
    pcVar15 = pcVar10;
    Combine::Published::_modify_subscript(pPVar11,pcVar10,uVar8,puVar5,puVar6);
    FUN_10027ee20(uVar12,uVar9,pPVar11,uVar8);
    (*pcVar15)(pcVar10,0);
    _swift_release(puVar6);
    _swift_release(puVar5);
    FUN_10002a29c(uVar12,&DAT_100551e50,&DAT_100429e60);
  }
  uVar9 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x68);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x88));
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar13);
                    /* WARNING: Could not recover jumptable at 0x000100125bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

