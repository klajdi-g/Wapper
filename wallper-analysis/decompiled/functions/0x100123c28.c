// rea decompile_all
// name: FUN_100123c28
// address: 0x100123c28
// body: available
// range: 0x100123c28-0x100124373 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100123c28(uint param_1,char *param_2,char *param_3,void *param_4,undefined8 param_5,
                  undefined8 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  char *pcVar2;
  void *pvVar3;
  _StringGuts _Var4;
  _StringGuts _Var5;
  int iVar6;
  undefined *puVar7;
  bool bVar8;
  undefined *puVar9;
  long lVar10;
  Date DVar11;
  undefined *puVar12;
  Published **ppPVar13;
  Published *pPVar14;
  Published *pPVar15;
  Published *pPVar16;
  char *pcVar17;
  long extraout_x8;
  long extraout_x8_00;
  long lVar18;
  void *pvVar19;
  undefined8 *puVar20;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar21;
  undefined8 unaff_x20;
  code *pcVar22;
  long lVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  long local_d0;
  undefined8 *local_c8;
  uint local_c0;
  uint local_bc;
  code *local_b8;
  void *local_b0;
  Published *local_80;
  undefined *puStack_78;
  
  puVar9 = &DAT_100551e50;
  pcVar17 = param_3;
  local_c0 = param_1;
  local_b8 = (code *)param_5;
  local_b0 = param_4;
  FUN_100002f94(&DAT_100551e50,&DAT_100429e60);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar9 + -8) + 0x40));
  lVar18 = (long)&local_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_d0 = lVar18 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  pvVar19 = (void *)((lVar18 - extraout_x12) - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar23 = (long)pvVar19 - extraout_x12_01;
  lVar10 = 0;
  FUN_100126a5c();
  lVar21 = *(long *)(lVar10 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar21 + 0x40));
  puVar20 = (undefined8 *)(lVar23 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  local_c8 = puVar20;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar20 = (undefined8 *)((long)puVar20 - extraout_x12_02);
  local_80 = (Published *)0x0;
  puStack_78 = (undefined *)0xe000000000000000;
  param_1 = param_1 & 0xff;
  local_bc = (uint)(param_1 != 0);
  pcVar2 = (char *)0x6b636f6c;
  if (param_1 != 1) {
    pcVar2 = (char *)0x64616f6c6e776f64;
  }
  pvVar3 = (void *)0xe400000000000000;
  if (param_1 != 1) {
    pvVar3 = (void *)0xe800000000000000;
  }
  SVar24.bridgeObject = pvVar3;
  SVar24.str = pcVar2;
  SVar27.bridgeObject = param_4;
  SVar27.str = pcVar17;
  Swift::String::append(SVar24,SVar27);
  _swift_bridgeObjectRelease(pvVar3);
  SVar25.bridgeObject = (void *)0xe100000000000000;
  SVar25.str = (char *)0x3a;
  SVar28.bridgeObject = param_4;
  SVar28.str = pcVar17;
  Swift::String::append(SVar25,SVar28);
  SVar26.bridgeObject = param_3;
  SVar26.str = param_2;
  SVar29.bridgeObject = param_4;
  SVar29.str = pcVar17;
  Swift::String::append(SVar26,SVar29);
  puVar7 = puStack_78;
  pPVar16 = local_80;
  iVar6 = *(int *)(lVar10 + 0x38);
  DVar11 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar11.unknown + -8) + 0x38))
            ((long)puVar20 + (long)iVar6,1,1,DVar11.unknown);
  Foundation::Date::init();
  *puVar20 = pPVar16;
  puVar20[1] = puVar7;
  pcVar22 = local_b8;
  iVar6 = *(int *)(lVar10 + 0x14);
  _swift_bridgeObjectRetain(local_b8);
  _swift_bridgeObjectRetain(param_3);
  _swift_bridgeObjectRetain(puVar7);
  Foundation::UUID::init();
  puVar1 = (undefined8 *)((long)puVar20 + (long)*(int *)(lVar10 + 0x18));
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(char *)((long)puVar20 + (long)*(int *)(lVar10 + 0x1c)) = (char)local_c0;
  puVar1 = (undefined8 *)((long)puVar20 + (long)*(int *)(lVar10 + 0x20));
  *puVar1 = local_b0;
  puVar1[1] = pcVar22;
  puVar1 = (undefined8 *)((long)puVar20 + (long)*(int *)(lVar10 + 0x24));
  *puVar1 = 0;
  *(char *)(puVar1 + 1) = (char)local_bc;
  puVar1 = (undefined8 *)((long)puVar20 + (long)*(int *)(lVar10 + 0x28));
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)((long)puVar20 + (long)*(int *)(lVar10 + 0x2c));
  *puVar1 = param_6;
  *(undefined1 *)(puVar1 + 1) = param_7;
  puVar1 = (undefined8 *)((long)puVar20 + (long)*(int *)(lVar10 + 0x30));
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)((long)puVar20 + (long)*(int *)(lVar10 + 0x3c)) = 0;
  FUN_10010b814(puVar20,lVar23);
  local_b8 = *(code **)(lVar21 + 0x38);
  (*local_b8)(lVar23,0,1,lVar10);
  puVar9 = &DAT_100426930;
  _swift_getKeyPath(&DAT_100426930);
  puVar12 = &DAT_100426958;
  _swift_getKeyPath(&DAT_100426958);
  _swift_bridgeObjectRetain(puVar7);
  ppPVar13 = &local_80;
  Combine::Published::_modify_subscript((Published *)(long)iVar6,ppPVar13,unaff_x20,puVar9,puVar12);
  local_b0 = (void *)lVar23;
  FUN_100123160(lVar23,pPVar16,puVar7);
  (*(code *)ppPVar13)(&local_80,0);
  _swift_release(puVar9);
  _swift_release(puVar12);
  puVar9 = &DAT_100426978;
  _swift_getKeyPath(&DAT_100426978);
  puVar12 = &DAT_1004269a0;
  _swift_getKeyPath(&DAT_1004269a0);
  Combine::Published::_get_subscript(&local_80,unaff_x20,puVar9,puVar12);
  _swift_release(puVar9);
  _swift_release(puVar12);
  pPVar15 = local_80;
  pPVar14 = pPVar16;
  FUN_10026abd8(pPVar16,puVar7,local_80);
  _swift_bridgeObjectRelease(pPVar15);
  if (((ulong)pPVar14 & 1) == 0) {
    puVar9 = &DAT_100426978;
    _swift_getKeyPath(&DAT_100426978);
    puVar12 = &DAT_1004269a0;
    _swift_getKeyPath(&DAT_1004269a0);
    _swift_bridgeObjectRetain(puVar7);
    ppPVar13 = &local_80;
    Combine::Published::_modify_subscript(pPVar14,ppPVar13,unaff_x20,puVar9,puVar12);
    FUN_1002880f4(0,0,pPVar16,puVar7);
    _swift_bridgeObjectRelease(puVar7);
    (*(code *)ppPVar13)(&local_80,0);
    _swift_release(puVar9);
    _swift_release(puVar12);
  }
  puVar9 = &DAT_1004269c0;
  _swift_getKeyPath(&DAT_1004269c0);
  puVar12 = &DAT_1004269e8;
  _swift_getKeyPath(&DAT_1004269e8);
  Combine::Published::_get_subscript(pvVar19,unaff_x20,puVar9,puVar12);
  _swift_release(puVar9);
  _swift_release(puVar12);
  pcVar22 = *(code **)(lVar21 + 0x30);
  lVar21 = (long)pvVar19;
  (*pcVar22)(pvVar19,1,lVar10);
  puVar1 = local_c8;
  if ((int)lVar21 == 0) {
    FUN_10010b814(pvVar19,local_c8);
    FUN_10002a29c(pvVar19,&DAT_100551e50,&DAT_100429e60);
    _Var4.unknown = (undefined *)*puVar1;
    _Var5.unknown = (undefined *)puVar1[1];
    _swift_bridgeObjectRetain(_Var5.unknown);
    FUN_10010c26c(puVar1);
    if (((Published *)_Var4.unknown == pPVar16) && (_Var5.unknown == puVar7)) {
      _swift_bridgeObjectRelease(_Var5.unknown);
LAB_100124120:
      pvVar19 = local_b0;
      (*local_b8)(local_b0,1,1,lVar10);
      puVar9 = &DAT_1004269c0;
      _swift_getKeyPath(&DAT_1004269c0);
      pPVar15 = (Published *)&DAT_1004269e8;
      _swift_getKeyPath(&DAT_1004269e8);
      lVar21 = local_d0;
      FUN_1000087e4(pvVar19,local_d0,&DAT_100551e50,&DAT_100429e60);
      _swift_retain(unaff_x20);
      Combine::Published::_set_subscript(pPVar15,lVar21,unaff_x20,puVar9,pPVar15);
      goto LAB_100124198;
    }
    bVar8 = Swift::_stringCompareWithSmolCheck(_Var4,_Var5,(_StringComparisonResult)(__int8)pPVar16)
    ;
    _swift_bridgeObjectRelease(_Var5.unknown);
    if (bVar8) goto LAB_100124120;
  }
  else {
LAB_100124198:
    FUN_10002a29c(pvVar19,&DAT_100551e50,&DAT_100429e60);
  }
  puVar9 = &DAT_100426a18;
  _swift_getKeyPath(&DAT_100426a18);
  puVar12 = &DAT_100426a40;
  _swift_getKeyPath(&DAT_100426a40);
  Combine::Published::_get_subscript(lVar18,unaff_x20,puVar9,puVar12);
  _swift_release(puVar9);
  _swift_release(puVar12);
  lVar21 = lVar18;
  (*pcVar22)(lVar18,1,lVar10);
  puVar1 = local_c8;
  if ((int)lVar21 == 0) {
    FUN_10010b814(lVar18,local_c8);
    FUN_10002a29c(lVar18,&DAT_100551e50,&DAT_100429e60);
    _Var4.unknown = (undefined *)*puVar1;
    _Var5.unknown = (undefined *)puVar1[1];
    _swift_bridgeObjectRetain(_Var5.unknown);
    FUN_10010c26c(puVar1);
    if (((Published *)_Var4.unknown == pPVar16) && (_Var5.unknown == puVar7)) {
      _swift_bridgeObjectRelease(_Var5.unknown);
      _swift_bridgeObjectRelease(puVar7);
    }
    else {
      bVar8 = Swift::_stringCompareWithSmolCheck
                        (_Var4,_Var5,(_StringComparisonResult)(__int8)pPVar16);
      _swift_bridgeObjectRelease(_Var5.unknown);
      _swift_bridgeObjectRelease(puVar7);
      if (!bVar8) goto LAB_10012434c;
    }
    pvVar19 = local_b0;
    (*local_b8)(local_b0,1,1,lVar10);
    puVar9 = &DAT_100426a18;
    _swift_getKeyPath(&DAT_100426a18);
    pPVar16 = (Published *)&DAT_100426a40;
    _swift_getKeyPath(&DAT_100426a40);
    lVar10 = local_d0;
    FUN_1000087e4(pvVar19,local_d0,&DAT_100551e50,&DAT_100429e60);
    _swift_retain(unaff_x20);
    Combine::Published::_set_subscript(pPVar16,lVar10,unaff_x20,puVar9,pPVar16);
    FUN_10002a29c(pvVar19,&DAT_100551e50,&DAT_100429e60);
  }
  else {
    FUN_10002a29c(lVar18,&DAT_100551e50,&DAT_100429e60);
    _swift_bridgeObjectRelease(puVar7);
  }
LAB_10012434c:
  FUN_10010c26c(puVar20);
  return;
}

