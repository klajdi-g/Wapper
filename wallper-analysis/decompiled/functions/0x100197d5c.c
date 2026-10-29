// rea decompile_all
// name: FUN_100197d5c
// address: 0x100197d5c
// body: available
// range: 0x100197d5c-0x10019814b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100197d5c(void)

{
  long lVar1;
  bool bVar2;
  ID *pIVar3;
  ID IVar4;
  long lVar5;
  undefined8 uVar6;
  Date DVar7;
  void *pvVar8;
  _StringGuts _Var9;
  _StringGuts _Var10;
  ID IVar11;
  undefined8 uVar12;
  String *pSVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x22;
  long lVar16;
  undefined8 extraout_d0;
  double dVar17;
  String SVar18;
  String SVar19;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  pIVar3 = *(ID **)(unaff_x22 + 0xd0);
  IVar11 = pIVar3[1];
  if (IVar11 == 0) {
    IVar11 = *pIVar3;
    if (IVar11 == 0) {
LAB_10019801c:
      FUN_100029548(pIVar3,FUN_10028e828);
    }
    else {
      IVar4 = objc_stub::numberOfItems(IVar11);
      if (IVar4 == 3) {
        IVar4 = objc_stub::descriptorAtIndex_(IVar11,1);
        if ((IVar4 == 0) || (IVar4 = objc_stub::stringValue(IVar4), IVar4 == 0)) {
          pIVar3 = *(ID **)(unaff_x22 + 0xd0);
        }
        else {
          SVar18 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          _Var9.unknown = SVar18.bridgeObject;
          IVar4 = objc_stub::descriptorAtIndex_(IVar11,2);
          if (IVar4 == 0) {
            FUN_100029548(*(undefined8 *)(unaff_x22 + 0xd0),FUN_10028e828);
            _swift_bridgeObjectRelease(_Var9.unknown);
            goto LAB_100198020;
          }
          objc_stub::doubleValue(IVar4);
          IVar11 = objc_stub::descriptorAtIndex_(IVar11,3);
          if ((IVar11 != 0) && (IVar11 = objc_stub::stringValue(IVar11), IVar11 != 0)) {
            SVar19 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
            _Var10.unknown = SVar19.bridgeObject;
            if ((SVar18.str == (undefined *)0x676e6979616c70) &&
               (_Var9.unknown == (undefined *)0xe700000000000000)) {
              bVar2 = true;
            }
            else {
              _Var10.unknown = _Var9.unknown;
              bVar2 = Swift::_stringCompareWithSmolCheck
                                ((_StringGuts)SVar18.str,_Var9,(_StringComparisonResult)0x70);
            }
            lVar5 = *(long *)(unaff_x22 + 200);
            lVar1 = *(long *)(unaff_x22 + 0xd0);
            lVar16 = *(long *)(unaff_x22 + 0xa8);
            _swift_bridgeObjectRelease(_Var9.unknown);
            dVar17 = Foundation::Date::timeIntervalSince
                               ((undefined *)(lVar1 + *(int *)(lVar5 + 0x18)),(Date)_Var10.unknown);
            DVar7.unknown = (undefined *)0x0;
            FUN_1001b08c0();
            Foundation::Date::addingTimeInterval(dVar17 * 0.5,DVar7);
            FUN_100029548(lVar1,FUN_10028e828);
            uVar14 = 0;
            *(bool *)lVar16 = bVar2;
            *(undefined8 *)(lVar16 + 8) = extraout_d0;
            *(String *)(lVar16 + 0x10) = SVar19;
            goto LAB_10019802c;
          }
          pIVar3 = *(ID **)(unaff_x22 + 0xd0);
          _swift_bridgeObjectRelease(_Var9.unknown);
        }
        goto LAB_10019801c;
      }
      FUN_100029548(*(undefined8 *)(unaff_x22 + 0xd0),FUN_10028e828);
    }
LAB_100198020:
    **(undefined8 **)(unaff_x22 + 0xa8) = 0;
  }
  else {
    SVar18 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pvVar8 = SVar18.bridgeObject;
    pSVar13 = (String *)(unaff_x22 + 0x90);
    *pSVar13 = SVar18;
    _swift_bridgeObjectRetain(pvVar8);
    Swift::__bridgeAnythingNonVerbatimToObjectiveC
              (pSVar13,PTR___type_metadata_for_Swift_String_100523a98);
    IVar11 = objc_stub::__swift_objectForKeyedSubscript_(IVar11,pSVar13);
    _swift_unknownObjectRelease(pSVar13);
    uVar14 = *(undefined8 *)(unaff_x22 + 0xd0);
    if (IVar11 == 0) {
      _swift_bridgeObjectRelease(pvVar8);
      FUN_100029548(uVar14,FUN_10028e828);
      uStack_88 = 0;
      local_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      Swift::__bridgeAnyObjectToAny();
      _swift_bridgeObjectRelease(pvVar8);
      _swift_unknownObjectRelease(IVar11);
      FUN_100029548(uVar14,FUN_10028e828);
    }
    *(undefined8 *)(unaff_x22 + 0x78) = uStack_88;
    *(undefined8 *)(unaff_x22 + 0x70) = local_90;
    *(undefined8 *)(unaff_x22 + 0x88) = uStack_78;
    *(undefined8 *)(unaff_x22 + 0x80) = uStack_80;
    if (*(long *)(unaff_x22 + 0x88) == 0) {
      FUN_10002a29c(unaff_x22 + 0x70,&DAT_10054d428,&DAT_100420300);
LAB_100197fcc:
      uVar14 = 0;
    }
    else {
      lVar5 = unaff_x22 + 0xa0;
      _swift_dynamicCast(lVar5,unaff_x22 + 0x70,PTR___type_metadata_for_Any_100524178 + 8,
                         PTR___type_metadata_for_Swift_Int_100523bd8,6);
      if ((int)lVar5 == 0) goto LAB_100197fcc;
      uVar14 = *(undefined8 *)(unaff_x22 + 0xa0);
    }
    **(undefined8 **)(unaff_x22 + 0xa8) = uVar14;
  }
  uVar14 = 1;
LAB_10019802c:
  uVar12 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar6 = 0;
  FUN_1001b08d4(0);
  _swift_storeEnumTagMultiPayload(uVar15,uVar6,uVar14);
  _swift_task_dealloc(uVar12);
                    /* WARNING: Could not recover jumptable at 0x000100198078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

