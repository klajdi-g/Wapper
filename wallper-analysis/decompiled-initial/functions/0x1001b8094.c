// rea decompile_all
// name: FUN_1001b8094
// address: 0x1001b8094
// body: available
// range: 0x1001b8094-0x1001b8c77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001001b8370) */
/* WARNING: Removing unreachable block (ram,0x0001001b8c48) */
/* WARNING: Removing unreachable block (ram,0x0001001b853c) */
/* WARNING: Removing unreachable block (ram,0x0001001b8c60) */
/* WARNING: Removing unreachable block (ram,0x0001001b86dc) */
/* WARNING: Removing unreachable block (ram,0x0001001b8864) */
/* WARNING: Removing unreachable block (ram,0x0001001b8744) */
/* WARNING: Removing unreachable block (ram,0x0001001b8880) */

void FUN_1001b8094(void)

{
  code *pcVar1;
  bool bVar2;
  Logger LVar3;
  DispatchWorkItemFlags DVar4;
  DispatchQoS DVar5;
  long lVar6;
  undefined *puVar7;
  UUID UVar8;
  ID IVar9;
  NSString *pNVar10;
  Data DVar11;
  Data DVar12;
  JSONDecoder *pJVar13;
  Published *pPVar14;
  long lVar15;
  undefined *puVar16;
  undefined8 extraout_x1;
  undefined8 uVar17;
  UUID UVar18;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  UUID UVar19;
  long lVar20;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 unaff_x20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  UUID UVar25;
  long lVar26;
  String SVar27;
  undefined1 auStack_1a0 [72];
  char local_e0;
  undefined7 uStack_df;
  undefined1 local_a0 [64];
  
  LVar3 = os::Logger::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar3.unknown + -8) + 0x40));
  DVar4 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(DVar4.unknown + -8) + 0x40));
  DVar5 = Dispatch::DispatchQoS::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(DVar5.unknown + -8) + 0x40));
  lVar6 = 0;
  FUN_10025ee04();
  lVar26 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar26 + 0x40));
  UVar25.unknown =
       auStack_1a0 +
       (((-(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) - (extraout_x8 + 0xfU & 0xfffffffffffffff0))
        - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0)) -
       (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  puVar7 = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar7 + -8) + 0x40));
  lVar22 = (long)UVar25.unknown - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar20 = lVar22 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar24 = lVar20 - extraout_x12_00;
  UVar8 = Foundation::UUID::typeMetadataAccessor();
  lVar6 = *(long *)(UVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar6 + 0x40));
  UVar19.unknown = (undefined *)(lVar24 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0));
  IVar9 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  DVar11.unknown = (undefined *)NSUserDefaults::dataForKey_(IVar9,pNVar10);
  if (DVar11.unknown != (undefined *)0x0) {
    uVar17 = extraout_x1;
    DVar12 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar11);
    pJVar13 = Foundation::JSONDecoder::typeMetadataAccessor();
    _swift_allocObject(pJVar13,*(undefined4 *)(pJVar13 + 0x30),*(undefined2 *)(pJVar13 + 0x34));
    pJVar13 = Foundation::JSONDecoder::init(pJVar13);
    DVar11.unknown = &DAT_10054a968;
    FUN_100002f94(&DAT_10054a968,&DAT_10041f070);
    FUN_1001d4f30(&DAT_1005569f0,&DAT_1005569f8,&DAT_10042c488,
                  PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100523b58);
    Foundation::JSONDecoder::_decode(pJVar13,DVar11);
    _swift_release(pJVar13);
    pPVar14 = (Published *)&DAT_10042a610;
    _swift_getKeyPath(&DAT_10042a610);
    puVar7 = &DAT_10042a638;
    _swift_getKeyPath(&DAT_10042a638);
    _swift_retain(unaff_x20);
    Combine::Published::_set_subscript(pPVar14,local_a0,unaff_x20,pPVar14,puVar7);
    FUN_100093624(DVar12.unknown,uVar17);
  }
  pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar9 = NSUserDefaults::stringForKey_(IVar9,pNVar10);
  if (IVar9 != 0) {
    SVar27 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    Foundation::UUID::_init();
    _swift_bridgeObjectRelease(SVar27.bridgeObject);
    lVar15 = lVar24;
    (**(code **)(lVar6 + 0x30))(lVar24,1,UVar8.unknown);
    if ((int)lVar15 == 1) {
      FUN_10002a29c(lVar24,&DAT_10054a9c8,&DAT_10041bbe0);
    }
    else {
      (**(code **)(lVar6 + 0x20))(UVar19.unknown,lVar24,UVar8.unknown);
      puVar7 = &DAT_10042a610;
      _swift_getKeyPath(&DAT_10042a610);
      puVar16 = &DAT_10042a638;
      _swift_getKeyPath(&DAT_10042a638);
      Combine::Published::_get_subscript(&local_e0,unaff_x20,puVar7,puVar16);
      _swift_release(puVar7);
      _swift_release(puVar16);
      uVar21 = 0;
      lVar24 = CONCAT71(uStack_df,local_e0);
      uVar23 = *(ulong *)(lVar24 + 0x10);
      do {
        if (uVar23 == uVar21) {
          _swift_bridgeObjectRelease(lVar24);
          (**(code **)(lVar6 + 8))(UVar19.unknown,UVar8.unknown);
          goto LAB_1001b8b28;
        }
        if (*(ulong *)(lVar24 + 0x10) <= uVar21) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1001b8c48);
          (*pcVar1)();
        }
        UVar18.unknown = FUN_10025ee04;
        FUN_100029504(lVar24 + ((ulong)*(byte *)(lVar26 + 0x50) + 0x20 &
                               ((ulong)*(byte *)(lVar26 + 0x50) ^ 0xffffffffffffffff)) +
                      *(long *)(lVar26 + 0x48) * uVar21,UVar25.unknown);
        uVar21 = uVar21 + 1;
        bVar2 = Foundation::UUID::___infix(UVar25,UVar19,UVar18);
        FUN_100029548(UVar25.unknown,FUN_10025ee04);
      } while (!bVar2);
      _swift_bridgeObjectRelease(lVar24);
      (**(code **)(lVar6 + 0x10))(lVar20,UVar19.unknown,UVar8.unknown);
      (**(code **)(lVar6 + 0x38))(lVar20,0,1,UVar8.unknown);
      pPVar14 = (Published *)&DAT_10042a670;
      _swift_getKeyPath(&DAT_10042a670);
      puVar7 = &DAT_10042a698;
      _swift_getKeyPath(&DAT_10042a698);
      FUN_1000087e4(lVar20,lVar22,&DAT_10054a9c8,&DAT_10041bbe0);
      _swift_retain(unaff_x20);
      Combine::Published::_set_subscript(pPVar14,lVar22,unaff_x20,pPVar14,puVar7);
      FUN_1001b69c4();
      FUN_10002a29c(lVar20,&DAT_10054a9c8,&DAT_10041bbe0);
      (**(code **)(lVar6 + 8))(UVar19.unknown,UVar8.unknown);
    }
  }
LAB_1001b8b28:
  puVar7 = &DAT_10042a740;
  _swift_getKeyPath(&DAT_10042a740);
  puVar16 = &DAT_10042a768;
  _swift_getKeyPath(&DAT_10042a768);
  Combine::Published::_get_subscript(&local_e0,unaff_x20,puVar7,puVar16);
  _swift_release(puVar7);
  _swift_release(puVar16);
  if (local_e0 == '\x01') {
    (**(code **)(lVar6 + 0x38))(lVar20,1,1,UVar8.unknown);
    pPVar14 = (Published *)&DAT_10042a670;
    _swift_getKeyPath(&DAT_10042a670);
    puVar7 = &DAT_10042a698;
    _swift_getKeyPath(&DAT_10042a698);
    FUN_1000087e4(lVar20,lVar22,&DAT_10054a9c8,&DAT_10041bbe0);
    _swift_retain(unaff_x20);
    Combine::Published::_set_subscript(pPVar14,lVar22,unaff_x20,pPVar14,puVar7);
    FUN_1001b69c4();
    FUN_10002a29c(lVar20,&DAT_10054a9c8,&DAT_10041bbe0);
  }
  return;
}

