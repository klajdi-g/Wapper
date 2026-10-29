// rea decompile_all
// name: FUN_100153ac8
// address: 0x100153ac8
// body: available
// range: 0x100153ac8-0x1001540eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100153ac8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  _StringGuts _Var12;
  long lVar13;
  _StringGuts local_80;
  _StringGuts _Stack_78;
  undefined *local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *local_58;
  int iVar3;
  int iVar4;
  
  puVar1 = PTR___type_metadata_for_Swift_String_100523a98;
  uVar7 = 0;
  iVar2 = (int)&local_80;
  iVar3 = (int)&local_80;
  iVar4 = (int)&local_80;
  lVar13 = 0x64656b6e694c;
  lVar11 = *param_1;
  if (*(long *)(lVar11 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar11);
    lVar6 = 0x65707954;
    uVar10 = 0;
    FUN_10000464c(0x65707954);
    if ((uVar10 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar11);
      goto LAB_100153b9c;
    }
    FUN_1000280d4(*(long *)(lVar11 + 0x38) + lVar6 * 0x20,&local_70);
    _swift_bridgeObjectRelease(lVar11);
    _swift_dynamicCast(&local_80,&local_70,PTR___type_metadata_for_Any_100524178 + 8,
                       PTR___type_metadata_for_Swift_String_100523a98,6);
    if ((uVar7 & 1) == 0) goto LAB_100153b9c;
    if ((local_80.unknown == (undefined *)0x64656b6e696c) &&
       (_Stack_78.unknown == (undefined *)0xe600000000000000)) {
      _swift_bridgeObjectRelease(0xe600000000000000);
    }
    else {
      bVar5 = Swift::_stringCompareWithSmolCheck(local_80,_Stack_78,(_StringComparisonResult)0x6c);
      _swift_bridgeObjectRelease(_Stack_78.unknown);
      if (!bVar5) goto LAB_100153b9c;
    }
LAB_100153bec:
    if (*(long *)(lVar11 + 0x10) == 0) {
LAB_100153d88:
      _Var12.unknown = (undefined *)0x0;
    }
    else {
      _swift_bridgeObjectRetain(lVar11);
      uVar7 = 0;
      FUN_10000464c(0x64656b6e694c);
      if ((uVar7 & 1) == 0) {
        _swift_bridgeObjectRelease(lVar11);
        goto LAB_100153d88;
      }
      FUN_1000280d4(*(long *)(lVar11 + 0x38) + lVar13 * 0x20,&local_70);
      _swift_bridgeObjectRelease(lVar11);
      puVar8 = &DAT_10054f980;
      FUN_100002f94(&DAT_10054f980,&DAT_10042a870);
      _swift_dynamicCast(&local_80,&local_70,PTR___type_metadata_for_Any_100524178 + 8,puVar8,6);
      _Var12.unknown = local_80.unknown;
      if (iVar2 == 0) {
        _Var12.unknown = (undefined *)0x0;
      }
    }
    puVar9 = _Var12.unknown;
    FUN_1001531e4(_Var12.unknown,param_2,param_3);
    _swift_bridgeObjectRelease(_Var12.unknown);
    puVar8 = &DAT_10054f980;
    FUN_100002f94(&DAT_10054f980,&DAT_10042a870);
    local_70 = puVar9;
    local_58 = puVar8;
    FUN_100122ed0(&local_70,0x64656b6e694c,0xe600000000000000);
    local_58 = puVar1;
    local_70 = (undefined *)0x64656b6e696c;
    uStack_68 = 0xe600000000000000;
    FUN_100122ed0(&local_70,0x65707954,0xe400000000000000);
    lVar11 = *param_1;
    if (*(long *)(lVar11 + 0x10) != 0) {
      _swift_bridgeObjectRetain(lVar11);
      lVar13 = 0x706f746b736544;
      uVar7 = 0;
      FUN_10000464c(0x706f746b736544);
      if ((uVar7 & 1) != 0) {
        FUN_1000280d4(*(long *)(lVar11 + 0x38) + lVar13 * 0x20,&local_70);
        _swift_bridgeObjectRelease(lVar11);
        FUN_10002a29c(&local_70,&DAT_10054d428,&DAT_100420300);
        bVar5 = true;
        goto LAB_100153c94;
      }
      _swift_bridgeObjectRelease(lVar11);
    }
    uStack_68 = 0;
    local_70 = (undefined *)0x0;
    local_58 = (undefined *)0x0;
    uStack_60 = 0;
    FUN_10002a29c(&local_70,&DAT_10054d428,&DAT_100420300);
LAB_100153e8c:
    lVar13 = *param_1;
    if (*(long *)(lVar13 + 0x10) != 0) {
      _swift_bridgeObjectRetain(lVar13);
      lVar11 = 0x656c6449;
      uVar7 = 0;
      FUN_10000464c(0x656c6449);
      if ((uVar7 & 1) != 0) {
        FUN_1000280d4(*(long *)(lVar13 + 0x38) + lVar11 * 0x20,&local_70);
        _swift_bridgeObjectRelease(lVar13);
        FUN_10002a29c(&local_70,&DAT_10054d428,&DAT_100420300);
        goto LAB_100153ee4;
      }
      _swift_bridgeObjectRelease(lVar13);
    }
    uStack_68 = 0;
    local_70 = (undefined *)0x0;
    local_58 = (undefined *)0x0;
    uStack_60 = 0;
    FUN_10002a29c(&local_70,&DAT_10054d428,&DAT_100420300);
    goto LAB_100153ff0;
  }
LAB_100153b9c:
  if (*(long *)(lVar11 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar11);
    uVar7 = 0;
    lVar6 = lVar13;
    FUN_10000464c(0x64656b6e694c);
    if ((uVar7 & 1) != 0) {
      FUN_1000280d4(*(long *)(lVar11 + 0x38) + lVar6 * 0x20,&local_70);
      _swift_bridgeObjectRelease(lVar11);
      FUN_10002a29c(&local_70,&DAT_10054d428,&DAT_100420300);
      goto LAB_100153bec;
    }
    _swift_bridgeObjectRelease(lVar11);
  }
  uStack_68 = 0;
  local_70 = (undefined *)0x0;
  local_58 = (undefined *)0x0;
  uStack_60 = 0;
  FUN_10002a29c(&local_70,&DAT_10054d428,&DAT_100420300);
  bVar5 = false;
LAB_100153c94:
  lVar13 = 0x706f746b736544;
  if (*(long *)(lVar11 + 0x10) == 0) {
LAB_100153d28:
    _Var12.unknown = (undefined *)0x0;
  }
  else {
    _swift_bridgeObjectRetain(lVar11);
    uVar7 = 0;
    FUN_10000464c(0x706f746b736544);
    if ((uVar7 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar11);
      goto LAB_100153d28;
    }
    FUN_1000280d4(*(long *)(lVar11 + 0x38) + lVar13 * 0x20,&local_70);
    _swift_bridgeObjectRelease(lVar11);
    puVar8 = &DAT_10054f980;
    FUN_100002f94(&DAT_10054f980,&DAT_10042a870);
    _swift_dynamicCast(&local_80,&local_70,PTR___type_metadata_for_Any_100524178 + 8,puVar8,6);
    _Var12.unknown = local_80.unknown;
    if (iVar3 == 0) {
      _Var12.unknown = (undefined *)0x0;
    }
  }
  puVar9 = _Var12.unknown;
  FUN_1001531e4(_Var12.unknown,param_2,param_3);
  _swift_bridgeObjectRelease(_Var12.unknown);
  puVar8 = &DAT_10054f980;
  FUN_100002f94(&DAT_10054f980,&DAT_10042a870);
  local_70 = puVar9;
  local_58 = puVar8;
  FUN_100122ed0(&local_70,0x706f746b736544,0xe700000000000000);
  if (bVar5) goto LAB_100153e8c;
LAB_100153ee4:
  lVar13 = *param_1;
  if (*(long *)(lVar13 + 0x10) == 0) {
LAB_100153f9c:
    local_80.unknown = (undefined *)0x0;
  }
  else {
    _swift_bridgeObjectRetain(lVar13);
    lVar11 = 0x656c6449;
    uVar7 = 0;
    FUN_10000464c(0x656c6449);
    if ((uVar7 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar13);
      goto LAB_100153f9c;
    }
    FUN_1000280d4(*(long *)(lVar13 + 0x38) + lVar11 * 0x20,&local_70);
    _swift_bridgeObjectRelease(lVar13);
    puVar8 = &DAT_10054f980;
    FUN_100002f94(&DAT_10054f980,&DAT_10042a870);
    _swift_dynamicCast(&local_80,&local_70,PTR___type_metadata_for_Any_100524178 + 8,puVar8,6);
    if (iVar4 == 0) {
      local_80.unknown = (undefined *)0x0;
    }
  }
  puVar9 = local_80.unknown;
  FUN_1001531e4(local_80.unknown,param_2,param_3);
  _swift_bridgeObjectRelease(local_80.unknown);
  puVar8 = &DAT_10054f980;
  FUN_100002f94(&DAT_10054f980,&DAT_10042a870);
  local_70 = puVar9;
  local_58 = puVar8;
  FUN_100122ed0(&local_70,0x656c6449,0xe400000000000000);
LAB_100153ff0:
  lVar13 = *param_1;
  if (*(long *)(lVar13 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar13);
    lVar11 = 0x65707954;
    uVar7 = 0;
    FUN_10000464c(0x65707954);
    if ((uVar7 & 1) != 0) {
      FUN_1000280d4(*(long *)(lVar13 + 0x38) + lVar11 * 0x20,&local_70);
      _swift_bridgeObjectRelease(lVar13);
      FUN_10002a29c(&local_70,&DAT_10054d428,&DAT_100420300);
      return;
    }
    _swift_bridgeObjectRelease(lVar13);
  }
  uStack_68 = 0;
  local_70 = (undefined *)0x0;
  local_58 = (undefined *)0x0;
  uStack_60 = 0;
  FUN_10002a29c(&local_70,&DAT_10054d428,&DAT_100420300);
  local_58 = puVar1;
  local_70 = (undefined *)0x7564697669646e69;
  uStack_68 = 0xea00000000006c61;
  FUN_100122ed0(&local_70,0x65707954,0xe400000000000000);
  return;
}

