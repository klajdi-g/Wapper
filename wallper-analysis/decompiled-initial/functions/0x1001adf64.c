// rea decompile_all
// name: FUN_1001adf64
// address: 0x1001adf64
// body: available
// range: 0x1001adf64-0x1001ae2ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined1  [16] FUN_1001adf64(ID param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  ulong uVar1;
  undefined *puVar2;
  String *pSVar3;
  ID IVar4;
  ulong *puVar5;
  char **ppcVar6;
  void *pvVar7;
  char *pcVar8;
  String SVar9;
  undefined1 auVar10 [16];
  String SVar11;
  char *local_98;
  ulong local_90;
  ulong uStack_88;
  String local_80;
  undefined8 uStack_70;
  long lStack_68;
  String local_60;
  undefined8 uStack_50;
  long local_48;
  
  local_80 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pvVar7 = local_80.bridgeObject;
  _swift_bridgeObjectRetain(pvVar7);
  pSVar3 = &local_80;
  Swift::__bridgeAnythingNonVerbatimToObjectiveC
            (pSVar3,PTR___type_metadata_for_Swift_String_100523a98);
  IVar4 = objc_stub::__swift_objectForKeyedSubscript_(param_1,pSVar3);
  _swift_unknownObjectRelease(pSVar3);
  if (IVar4 == 0) {
    _swift_bridgeObjectRelease(pvVar7);
    local_80 = (String)ZEXT816(0);
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar4);
    _swift_bridgeObjectRelease(pvVar7);
  }
  puVar2 = PTR___type_metadata_for_Any_100524178;
  local_60 = local_80;
  local_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    FUN_10002a29c(&local_60,&DAT_10054d428,&DAT_100420300);
  }
  else {
    puVar5 = &local_90;
    param_4 = PTR___type_metadata_for_Swift_String_100523a98;
    _swift_dynamicCast(puVar5,&local_60,PTR___type_metadata_for_Any_100524178 + 8,
                       PTR___type_metadata_for_Swift_String_100523a98,6);
    if (((ulong)puVar5 & 1) != 0) {
      uVar1 = local_90 & 0xffffffffffff;
      if ((uStack_88 & 0x2000000000000000) != 0) {
        uVar1 = uStack_88 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) goto LAB_1001ae294;
      _swift_bridgeObjectRelease(uStack_88);
    }
  }
  local_80 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pvVar7 = local_80.bridgeObject;
  _swift_bridgeObjectRetain(pvVar7);
  pSVar3 = &local_80;
  Swift::__bridgeAnythingNonVerbatimToObjectiveC
            (pSVar3,PTR___type_metadata_for_Swift_String_100523a98);
  IVar4 = objc_stub::__swift_objectForKeyedSubscript_(param_1,pSVar3);
  _swift_unknownObjectRelease(pSVar3);
  if (IVar4 == 0) {
    _swift_bridgeObjectRelease(pvVar7);
    local_80 = (String)ZEXT816(0);
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar4);
    _swift_bridgeObjectRelease(pvVar7);
  }
  local_60 = local_80;
  local_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    FUN_10002a29c(&local_60,&DAT_10054d428,&DAT_100420300);
  }
  else {
    puVar5 = &local_90;
    param_4 = PTR___type_metadata_for_Swift_String_100523a98;
    _swift_dynamicCast(puVar5,&local_60,puVar2 + 8,PTR___type_metadata_for_Swift_String_100523a98,6)
    ;
    if (((ulong)puVar5 & 1) != 0) {
      uVar1 = local_90 & 0xffffffffffff;
      if ((uStack_88 & 0x2000000000000000) != 0) {
        uVar1 = uStack_88 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) goto LAB_1001ae294;
      _swift_bridgeObjectRelease(uStack_88);
    }
  }
  local_90 = 0x20726f727265;
  uStack_88 = 0xe600000000000000;
  local_60 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pvVar7 = local_60.bridgeObject;
  _swift_bridgeObjectRetain(pvVar7);
  pSVar3 = &local_60;
  Swift::__bridgeAnythingNonVerbatimToObjectiveC
            (pSVar3,PTR___type_metadata_for_Swift_String_100523a98);
  IVar4 = objc_stub::__swift_objectForKeyedSubscript_(param_1,pSVar3);
  _swift_unknownObjectRelease(pSVar3);
  if (IVar4 == 0) {
    _swift_bridgeObjectRelease(pvVar7);
    local_80 = (String)ZEXT816(0);
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar4);
    _swift_bridgeObjectRelease(pvVar7);
  }
  local_60 = local_80;
  local_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    pcVar8 = &DAT_100420300;
    FUN_10002a29c(&local_60,&DAT_10054d428);
LAB_1001ae25c:
    local_98 = (char *)0x0;
  }
  else {
    ppcVar6 = &local_98;
    pcVar8 = puVar2 + 8;
    param_4 = PTR___type_metadata_for_Swift_Int_100523bd8;
    _swift_dynamicCast(ppcVar6,&local_60,pcVar8,PTR___type_metadata_for_Swift_Int_100523bd8,6);
    if ((int)ppcVar6 == 0) goto LAB_1001ae25c;
  }
  local_60.str = local_98;
  SVar9 = Swift::CustomStringConvertible::get_description();
  SVar11.bridgeObject = param_4;
  SVar11.str = pcVar8;
  Swift::String::append(SVar9,SVar11);
  _swift_bridgeObjectRelease(SVar9.bridgeObject);
LAB_1001ae294:
  auVar10._8_8_ = uStack_88;
  auVar10._0_8_ = local_90;
  return auVar10;
}

