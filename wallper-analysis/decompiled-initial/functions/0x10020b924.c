// rea decompile_all
// name: FUN_10020b924
// address: 0x10020b924
// body: available
// range: 0x10020b924-0x10020bc93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_10020b924(long *param_1,char *param_2,void *param_3,long param_4)

{
  String SVar1;
  bool bVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  char *pcVar12;
  char *pcVar13;
  _StringGuts _Var14;
  char *pcVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  char *local_80;
  undefined *puStack_78;
  undefined1 auStack_70 [32];
  
  SVar1.bridgeObject = param_3;
  SVar1.str = param_2;
  uVar10 = 0;
  uVar6 = 0;
  uVar7 = 0;
  uVar8 = 0;
  lVar11 = *param_1;
  if (*(long *)(lVar11 + 0x10) == 0) {
LAB_10020b9e0:
    SVar16 = (String)(ZEXT816(0xe000000000000000) << 0x40);
  }
  else {
    _swift_bridgeObjectRetain(lVar11);
    puVar3 = &DAT_00006469;
    uVar9 = 0;
    FUN_10000464c(&DAT_00006469);
    if ((uVar9 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar11);
      goto LAB_10020b9e0;
    }
    FUN_1000280d4(*(long *)(lVar11 + 0x38) + (long)puVar3 * 0x20,auStack_70);
    _swift_bridgeObjectRelease(lVar11);
    _swift_dynamicCast(&local_80,auStack_70,PTR___type_metadata_for_Any_100524178 + 8,
                       PTR___type_metadata_for_Swift_String_100523a98,6);
    puVar5 = puStack_78;
    if ((uVar10 & 1) == 0) goto LAB_10020b9e0;
    SVar16.bridgeObject = puStack_78;
    SVar16.str = local_80;
    SVar16 = Swift::String::uppercased(SVar16);
    _swift_bridgeObjectRelease(puVar5);
  }
  _Var14.unknown = SVar16.bridgeObject;
  uVar10 = (ulong)SVar16.str & 0xffffffffffff;
  if (((ulong)_Var14.unknown & 0x2000000000000000) != 0) {
    uVar10 = (ulong)_Var14.unknown >> 0x38 & 0xf;
  }
  if ((uVar10 == 0) || (SVar16 == SVar1)) {
    bVar2 = false;
    goto LAB_10020ba10;
  }
  bVar2 = Swift::_stringCompareWithSmolCheck
                    ((_StringGuts)SVar16.str,_Var14,(_StringComparisonResult)(__int8)param_2);
  _swift_bridgeObjectRelease(_Var14.unknown);
  if (bVar2) {
    return false;
  }
  pcVar13 = PTR___swiftEmptyArrayStorage_100524190;
  if (*(long *)(lVar11 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar11);
    lVar4 = 0x69726f6765746163;
    uVar10 = 0xea00000000007365;
    FUN_10000464c(0x69726f6765746163);
    if ((uVar10 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar11);
      pcVar13 = PTR___swiftEmptyArrayStorage_100524190;
    }
    else {
      FUN_1000280d4(*(long *)(lVar11 + 0x38) + lVar4 * 0x20,auStack_70);
      _swift_bridgeObjectRelease(lVar11);
      puVar5 = &DAT_100553858;
      FUN_100002f94(&DAT_100553858,&DAT_100429e10);
      _swift_dynamicCast(&local_80,auStack_70,PTR___type_metadata_for_Any_100524178 + 8,puVar5,6);
      pcVar13 = PTR___swiftEmptyArrayStorage_100524190;
      if ((uVar6 & 1) != 0) {
        pcVar13 = local_80;
      }
    }
  }
  pcVar15 = PTR___swiftEmptyArrayStorage_100524190;
  if (*(long *)(lVar11 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar11);
    lVar4 = 0x6765746163627573;
    uVar10 = 0xed0000736569726f;
    FUN_10000464c(0x6765746163627573);
    if ((uVar10 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar11);
      pcVar15 = PTR___swiftEmptyArrayStorage_100524190;
    }
    else {
      FUN_1000280d4(*(long *)(lVar11 + 0x38) + lVar4 * 0x20,auStack_70);
      _swift_bridgeObjectRelease(lVar11);
      puVar5 = &DAT_100553858;
      FUN_100002f94(&DAT_100553858,&DAT_100429e10);
      _swift_dynamicCast(&local_80,auStack_70,PTR___type_metadata_for_Any_100524178 + 8,puVar5,6);
      pcVar15 = PTR___swiftEmptyArrayStorage_100524190;
      if ((uVar7 & 1) != 0) {
        pcVar15 = local_80;
      }
    }
  }
  if (*(long *)(lVar11 + 0x10) == 0) {
LAB_10020bc14:
    pcVar12 = (char *)0x0;
    _Var14.unknown = (undefined *)0xe000000000000000;
  }
  else {
    _swift_bridgeObjectRetain(lVar11);
    lVar4 = 0x4449746f6873;
    uVar10 = 0;
    FUN_10000464c(0x4449746f6873);
    if ((uVar10 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar11);
      goto LAB_10020bc14;
    }
    FUN_1000280d4(*(long *)(lVar11 + 0x38) + lVar4 * 0x20,auStack_70);
    _swift_bridgeObjectRelease(lVar11);
    _swift_dynamicCast(&local_80,auStack_70,PTR___type_metadata_for_Any_100524178 + 8,
                       PTR___type_metadata_for_Swift_String_100523a98,6);
    pcVar12 = local_80;
    _Var14.unknown = puStack_78;
    if ((uVar8 & 1) == 0) goto LAB_10020bc14;
  }
  uVar10 = *(ulong *)(param_4 + 0x28);
  FUN_10026abd8(uVar10,*(undefined8 *)(param_4 + 0x30),pcVar13);
  _swift_bridgeObjectRelease(pcVar13);
  if ((uVar10 & 1) == 0) {
    uVar10 = *(ulong *)(param_4 + 0x38);
    FUN_10026abd8(uVar10,*(undefined8 *)(param_4 + 0x40),pcVar15);
    _swift_bridgeObjectRelease(pcVar15);
    if ((uVar10 & 1) == 0) {
      SVar17.bridgeObject = (void *)0xe700000000000000;
      SVar17.str = (char *)0x5f4d4f54535543;
      SVar18.bridgeObject = _Var14.unknown;
      SVar18.str = pcVar12;
      bVar2 = Swift::String::hasPrefix(SVar17,SVar18);
    }
    else {
      bVar2 = true;
    }
  }
  else {
    _swift_bridgeObjectRelease(pcVar15);
    bVar2 = true;
  }
LAB_10020ba10:
  _swift_bridgeObjectRelease(_Var14.unknown);
  return bVar2;
}

