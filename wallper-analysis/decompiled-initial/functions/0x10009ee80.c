// rea decompile_all
// name: FUN_10009ee80
// address: 0x10009ee80
// body: available
// range: 0x10009ee80-0x10009f5db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10009ee80(undefined8 *param_1)

{
  ulong uVar1;
  char *pcVar2;
  int iVar3;
  undefined1 auVar4 [16];
  char *pcVar5;
  void *pvVar6;
  char *pcVar7;
  bool bVar8;
  undefined *puVar9;
  undefined *puVar10;
  ID IVar11;
  NSString *pNVar12;
  ID IVar13;
  undefined8 *puVar14;
  URL UVar15;
  NSURL *pNVar16;
  char *pcVar17;
  undefined8 uVar18;
  undefined *puVar19;
  ulong extraout_x1;
  undefined *puVar20;
  undefined *puVar21;
  void *in_x3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 *puVar22;
  long extraout_x12;
  long extraout_x12_00;
  long lVar23;
  void *pvVar24;
  undefined8 *puVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  NSURL *apNStack_110 [2];
  char *local_100;
  undefined *local_f8;
  void *local_f0;
  ID local_e8;
  char *local_e0;
  undefined *local_d8;
  void *local_d0;
  undefined *local_c8;
  long local_c0;
  undefined *puStack_b8;
  undefined8 *local_b0;
  char *local_a8;
  long local_a0;
  undefined1 auStack_98 [24];
  char *local_80;
  undefined *puStack_78;
  
  puStack_b8 = (undefined *)Foundation::URL::typeMetadataAccessor();
  local_c0 = *(long *)(puStack_b8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_c0 + 0x40));
  puVar10 = (undefined *)((long)apNStack_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar9 = &DAT_10054f990;
  local_c8 = puVar10;
  FUN_100002f94(&DAT_10054f990,&DAT_100420e30);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar9 + -8) + 0x40));
  puVar22 = (undefined8 *)(puVar10 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  local_b0 = puVar22;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar22 = (undefined8 *)((long)puVar22 - extraout_x12);
  puVar10 = &DAT_10054f998;
  FUN_100002f94(&DAT_10054f998,&DAT_100420e38);
  local_a0 = *(long *)(puVar10 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_a0 + 0x40));
  lVar23 = (long)puVar22 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar25 = (undefined8 *)(lVar23 - extraout_x12_00);
  IVar11 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar13 = NSUserDefaults::stringForKey_(IVar11,pNVar12);
  if (IVar13 != 0) {
    local_f0 = (void *)lVar23;
    SVar26 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    puVar19 = SVar26.bridgeObject;
    local_a8 = SVar26.str;
    uVar1 = (ulong)local_a8 & 0xffffffffffff;
    if (((ulong)puVar19 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)puVar19 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      local_d8 = puVar10;
      pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar13 = NSUserDefaults::stringForKey_(IVar11,pNVar12);
      if (IVar13 == 0) {
        SVar26 = (String)(ZEXT816(0xe000000000000000) << 0x40);
      }
      else {
        SVar26 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      }
      local_d0 = SVar26.bridgeObject;
      local_e0 = SVar26.str;
      pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      local_e8 = IVar11;
      IVar11 = NSUserDefaults::stringForKey_(IVar11);
      if (IVar11 == 0) {
        auVar4._8_8_ = 0;
        auVar4._0_8_ = extraout_x1;
        SVar26 = (String)(auVar4 << 0x40);
        pvVar24 = (void *)0xe000000000000000;
      }
      else {
        SVar26 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        pvVar24 = SVar26.bridgeObject;
      }
      pcVar2 = local_e0;
      local_80 = local_a8;
      puStack_78 = puVar19;
      _swift_bridgeObjectRetain(puVar19);
      SVar27.bridgeObject = (void *)0xe100000000000000;
      SVar27.str = (char *)0x7c;
      SVar31.bridgeObject = in_x3;
      SVar31.str = (char *)pNVar12;
      Swift::String::append(SVar27,SVar31);
      puVar10 = puStack_78;
      _swift_bridgeObjectRetain(puStack_78);
      SVar28.bridgeObject = local_d0;
      SVar28.str = pcVar2;
      SVar32.bridgeObject = in_x3;
      SVar32.str = (char *)pNVar12;
      Swift::String::append(SVar28,SVar32);
      _swift_bridgeObjectRelease(puVar10);
      puVar10 = puStack_78;
      _swift_bridgeObjectRetain(puStack_78);
      SVar29.bridgeObject = (void *)0xe100000000000000;
      SVar29.str = (char *)0x7c;
      SVar33.bridgeObject = in_x3;
      SVar33.str = (char *)pNVar12;
      Swift::String::append(SVar29,SVar33);
      _swift_bridgeObjectRelease(puVar10);
      puVar10 = puStack_78;
      _swift_bridgeObjectRetain(puStack_78);
      SVar30.bridgeObject = pvVar24;
      SVar30.str = SVar26.str;
      SVar34.bridgeObject = in_x3;
      SVar34.str = (char *)pNVar12;
      Swift::String::append(SVar30,SVar34);
      _swift_bridgeObjectRelease(puVar10);
      puVar10 = puStack_78;
      pcVar2 = local_80;
      if (DAT_10054f9a0 != -1) {
        _swift_once(&DAT_10054f9a0,FUN_10009e798);
      }
      FUN_100099338(puVar9,&DAT_10054f9a8);
      _swift_beginAccess();
      FUN_1000087e4(puVar9,puVar22,&DAT_10054f990,&DAT_100420e30);
      puVar20 = local_d8;
      puVar14 = puVar22;
      (**(code **)(local_a0 + 0x30))(puVar22,1,local_d8);
      if ((int)puVar14 == 1) {
        puVar20 = &DAT_10054f990;
        puVar21 = &DAT_100420e30;
        puVar25 = puVar22;
      }
      else {
        FUN_1000a3068(puVar22,puVar25);
        if ((((undefined *)*puVar25 == pcVar2) && ((undefined *)puVar25[1] == puVar10)) ||
           (bVar8 = Swift::_stringCompareWithSmolCheck
                              ((undefined *)*puVar25,(undefined *)puVar25[1],
                               (_StringComparisonResult)(__int8)pcVar2), bVar8)) {
          _swift_bridgeObjectRelease(puVar10);
          _swift_bridgeObjectRelease(puVar19);
          _swift_bridgeObjectRelease(local_d0);
          _swift_bridgeObjectRelease(pvVar24);
          pvVar24 = local_f0;
          FUN_1000087e4(puVar25,local_f0,&DAT_10054f998,&DAT_100420e38);
          _swift_bridgeObjectRelease(*(undefined8 *)((long)pvVar24 + 8));
          FUN_100043db0((long)pvVar24 + (long)*(int *)(puVar20 + 0x30),param_1);
          lVar23 = 0;
          FUN_10009e280();
          (**(code **)(*(long *)(lVar23 + -8) + 0x38))(param_1,0,1,lVar23);
          FUN_10002a29c(puVar25,&DAT_10054f998,&DAT_100420e38);
          return;
        }
        puVar20 = &DAT_10054f998;
        puVar21 = &DAT_100420e38;
      }
      local_100 = pcVar2;
      local_f0 = pvVar24;
      FUN_10002a29c(puVar25,puVar20,puVar21);
      puVar21 = puStack_b8;
      lVar23 = local_c0;
      puVar20 = local_c8;
      local_f8 = puVar10;
      if (DAT_10054f9c0 != -1) {
        _swift_once(&DAT_10054f9c0,FUN_10009e65c);
      }
      puVar10 = puVar21;
      FUN_100099338(puVar21,&DAT_10054f9c8);
      UVar15.unknown = puVar20;
      (**(code **)(lVar23 + 0x10))(puVar20,puVar10,puVar21);
      pNVar16 = Foundation::URL::_bridgeToObjectiveC(UVar15);
      _CGImageSourceCreateWithURL(pNVar16,0);
      if (pNVar16 == (NSURL *)0x0) {
        apNStack_110[1] = (NSURL *)0x0;
      }
      else {
        FUN_10010f93c(pNVar16,0x5dc);
        apNStack_110[1] = pNVar16;
      }
      (**(code **)(lVar23 + 8))(puVar20,puVar21);
      pcVar7 = local_a8;
      pvVar6 = local_d0;
      pcVar5 = local_e0;
      pvVar24 = local_f0;
      pcVar17 = local_a8;
      FUN_100161e0c(local_a8,puVar19,local_e0,local_d0,SVar26.str,local_f0);
      _swift_bridgeObjectRelease(pvVar24);
      pcVar2 = PTR___swiftEmptyArrayStorage_100524190;
      if (pcVar17 != (char *)0x0) {
        pcVar2 = pcVar17;
      }
      if (DAT_1005553a8 != -1) {
        _swift_once(&DAT_1005553a8,FUN_100159ccc);
      }
      uVar18 = 0;
      FUN_10015f8e8(0);
      FUN_100099338();
      lVar23 = 0;
      FUN_10009e280();
      FUN_100029504(uVar18,(long)param_1 + (long)*(int *)(lVar23 + 0x2c),FUN_10015f8e8);
      puVar22 = local_b0;
      puVar20 = local_d8;
      puVar10 = local_f8;
      *param_1 = pcVar7;
      param_1[1] = puVar19;
      param_1[2] = pcVar5;
      param_1[3] = pvVar6;
      param_1[4] = apNStack_110[1];
      param_1[5] = 0;
      param_1[6] = pcVar2;
      param_1[7] = 0xffffffffffffffff;
      *(undefined1 *)(param_1 + 8) = 0;
      puVar25 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar23 + 0x30));
      *puVar25 = 0;
      *(undefined1 *)(puVar25 + 1) = 1;
      iVar3 = *(int *)(local_d8 + 0x30);
      *local_b0 = local_100;
      puVar22[1] = puVar10;
      FUN_100029504(param_1,(long)puVar22 + (long)iVar3,FUN_10009e280);
      (**(code **)(local_a0 + 0x38))(puVar22,0,1,puVar20);
      _swift_beginAccess(puVar9,auStack_98,0x21,0);
      FUN_1000a3018(puVar22,puVar9);
      _swift_endAccess(auStack_98);
      (**(code **)(*(long *)(lVar23 + -8) + 0x38))(param_1,0,1,lVar23);
      return;
    }
    _swift_bridgeObjectRelease(puVar19);
  }
  lVar23 = 0;
  FUN_10009e280();
                    /* WARNING: Could not recover jumptable at 0x00010009f0f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar23 + -8) + 0x38))(param_1,1,1,lVar23);
  return;
}

