// rea decompile_all
// name: FUN_1001531e4
// address: 0x1001531e4
// body: available
// range: 0x1001531e4-0x100153ac7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1001531e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  _StringGuts _Var1;
  bool bVar2;
  Date DVar3;
  undefined *puVar4;
  _StringGuts *p_Var5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined7 extraout_var;
  ulong uVar11;
  long extraout_x8;
  long lVar12;
  _StringGuts _Var13;
  code *pcVar14;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  uint local_2c4;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined *local_2b0;
  long local_2a8;
  long local_2a0;
  uint local_294;
  undefined1 auStack_290 [176];
  undefined *local_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined *local_1c8;
  _StringGuts local_1c0;
  _StringGuts _Stack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined1 auStack_198 [80];
  undefined *local_148;
  undefined *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *local_78;
  
  lVar12 = 0x746e65746e6f43;
  DVar3 = Foundation::Date::typeMetadataAccessor();
  local_2a0 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_2a0 + 0x40));
  local_2a8 = (long)&local_2e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
LAB_10015333c:
    _Var13.unknown = (undefined *)0x0;
LAB_100153340:
    local_294 = 1;
LAB_100153348:
    uStack_88 = 0;
    local_90 = (undefined *)0x0;
    local_78 = (undefined *)0x0;
    uStack_80 = 0;
LAB_100153350:
    FUN_10002a29c(&local_90,&DAT_10054d428,&DAT_100420300);
LAB_100153368:
    uStack_88 = 0;
    local_90 = (undefined *)0x0;
    local_78 = (undefined *)0x0;
    uStack_80 = 0;
LAB_100153370:
    FUN_10002a29c(&local_90,&DAT_10054d428,&DAT_100420300);
LAB_100153388:
    local_2c4 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_1);
    uVar11 = 0;
    FUN_10000464c(0x746e65746e6f43);
    if ((uVar11 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
      goto LAB_10015333c;
    }
    FUN_1000280d4(*(long *)(param_1 + 0x38) + lVar12 * 0x20,&local_90);
    _swift_bridgeObjectRelease(param_1);
    puVar4 = &DAT_10054f980;
    FUN_100002f94(&DAT_10054f980,&DAT_10042a870);
    puVar7 = PTR___type_metadata_for_Any_100524178;
    p_Var5 = &local_1c0;
    _swift_dynamicCast(p_Var5,&local_90,PTR___type_metadata_for_Any_100524178 + 8,puVar4,6);
    _Var13.unknown = local_1c0.unknown;
    if (((ulong)p_Var5 & 1) == 0) goto LAB_10015333c;
    if (local_1c0.unknown == (undefined *)0x0) goto LAB_100153340;
    if (*(long *)(local_1c0.unknown + 0x10) == 0) {
      local_294 = 0;
      goto LAB_100153348;
    }
    _swift_bridgeObjectRetain(local_1c0.unknown);
    lVar12 = 0x736563696f6843;
    uVar11 = 0;
    FUN_10000464c(0x736563696f6843);
    if ((uVar11 & 1) == 0) {
      uStack_88 = 0;
      local_90 = (undefined *)0x0;
      local_78 = (undefined *)0x0;
      uStack_80 = 0;
    }
    else {
      FUN_1000280d4(*(long *)(_Var13.unknown + 0x38) + lVar12 * 0x20,&local_90);
    }
    _swift_bridgeObjectRelease(_Var13.unknown);
    if (local_78 == (undefined *)0x0) {
      local_294 = 0;
      goto LAB_100153350;
    }
    puVar4 = &DAT_10054f988;
    FUN_100002f94(&DAT_10054f988,&DAT_100428ac0);
    p_Var5 = &local_1c0;
    _swift_dynamicCast(p_Var5,&local_90,puVar7 + 8,puVar4,6);
    _Var1.unknown = local_1c0.unknown;
    if (((ulong)p_Var5 & 1) == 0) {
LAB_100153a14:
      local_294 = 0;
      goto LAB_100153368;
    }
    if (*(long *)(local_1c0.unknown + 0x10) == 0) {
      _swift_bridgeObjectRelease(local_1c0.unknown);
      goto LAB_100153a14;
    }
    lVar12 = *(long *)(local_1c0.unknown + 0x20);
    _swift_bridgeObjectRetain(lVar12);
    _swift_bridgeObjectRelease(_Var1.unknown);
    if (lVar12 == 0) goto LAB_100153a14;
    if (*(long *)(lVar12 + 0x10) == 0) {
LAB_100153a24:
      uStack_88 = 0;
      local_90 = (undefined *)0x0;
      local_78 = (undefined *)0x0;
      uStack_80 = 0;
    }
    else {
      _swift_bridgeObjectRetain(lVar12);
      lVar10 = 0x72656469766f7250;
      uVar11 = 0;
      FUN_10000464c(0x72656469766f7250);
      if ((uVar11 & 1) == 0) {
        _swift_bridgeObjectRelease(lVar12);
        goto LAB_100153a24;
      }
      FUN_1000280d4(*(long *)(lVar12 + 0x38) + lVar10 * 0x20,&local_90);
      _swift_bridgeObjectRelease(lVar12);
    }
    _swift_bridgeObjectRelease(lVar12);
    if (local_78 == (undefined *)0x0) {
      local_294 = 0;
      goto LAB_100153370;
    }
    p_Var5 = &local_1c0;
    _swift_dynamicCast(p_Var5,&local_90,puVar7 + 8,PTR___type_metadata_for_Swift_String_100523a98,6)
    ;
    _Var1.unknown = _Stack_1b8.unknown;
    if (((ulong)p_Var5 & 1) == 0) {
      local_294 = 0;
      goto LAB_100153388;
    }
    if ((local_1c0.unknown == (undefined *)0xd000000000000022) &&
       (_Stack_1b8.unknown == (undefined *)0x80000001004de000)) {
      _swift_bridgeObjectRelease(0x80000001004de000);
      local_294 = 0;
      local_2c4 = 1;
    }
    else {
      bVar2 = Swift::_stringCompareWithSmolCheck(local_1c0,_Stack_1b8,(_StringComparisonResult)0x22)
      ;
      local_2c4 = (uint)CONCAT71(extraout_var,bVar2);
      _swift_bridgeObjectRelease(_Var1.unknown);
      local_294 = 0;
    }
  }
  puVar4 = &DAT_10054c048;
  FUN_100002f94(&DAT_10054c048,&DAT_10041d7b0);
  puVar6 = puVar4;
  _swift_initStackObject();
  uStack_2b8 = 6;
  local_2c0 = 3;
  *(undefined8 *)(puVar6 + 0x18) = 6;
  *(undefined8 *)(puVar6 + 0x10) = 3;
  *(undefined8 *)(puVar6 + 0x20) = 0x72656469766f7250;
  *(undefined8 *)(puVar6 + 0x28) = 0xe800000000000000;
  *(undefined8 *)(puVar6 + 0x30) = 0xd000000000000022;
  *(undefined8 *)(puVar6 + 0x38) = 0x80000001004de000;
  *(undefined **)(puVar6 + 0x48) = PTR___type_metadata_for_Swift_String_100523a98;
  *(undefined8 *)(puVar6 + 0x50) = 0x73656c6946;
  *(undefined8 *)(puVar6 + 0x58) = 0xe500000000000000;
  puVar7 = &DAT_100554fe0;
  FUN_100002f94(&DAT_100554fe0,&DAT_100428aa8);
  *(undefined **)(puVar6 + 0x60) = PTR___swiftEmptyArrayStorage_100524190;
  *(undefined **)(puVar6 + 0x78) = puVar7;
  *(undefined8 *)(puVar6 + 0x80) = 0x72756769666e6f43;
  *(undefined **)(puVar6 + 0xa8) = PTR___type_metadata_for_Foundation_Data_100520ae0;
  *(undefined8 *)(puVar6 + 0x88) = 0xed00006e6f697461;
  *(undefined8 *)(puVar6 + 0x90) = param_2;
  *(undefined8 *)(puVar6 + 0x98) = param_3;
  FUN_10011a30c(param_2,param_3);
  puVar8 = puVar6;
  FUN_100005b10();
  _swift_setDeallocating(puVar6);
  puVar7 = &DAT_10054a1c0;
  FUN_100002f94(&DAT_10054a1c0,&DAT_10041a250);
  local_2b0 = puVar7;
  _swift_arrayDestroy(puVar6 + 0x20,3);
  puVar9 = puVar4;
  _swift_initStackObject(puVar4,auStack_198);
  uStack_2d8 = 2;
  local_2e0 = 1;
  *(undefined8 *)(puVar9 + 0x18) = 2;
  *(undefined8 *)(puVar9 + 0x10) = 1;
  *(undefined8 *)(puVar9 + 0x20) = 0x736563696f6843;
  *(undefined8 *)(puVar9 + 0x28) = 0xe700000000000000;
  puVar7 = &DAT_100554fe8;
  FUN_100002f94(&DAT_100554fe8,&DAT_100428ab8);
  _swift_allocObject();
  *(undefined8 *)(puVar7 + 0x18) = uStack_2d8;
  *(undefined8 *)(puVar7 + 0x10) = local_2e0;
  *(undefined **)(puVar7 + 0x20) = puVar8;
  puVar6 = &DAT_10054f988;
  FUN_100002f94(&DAT_10054f988,&DAT_100428ac0);
  *(undefined **)(puVar9 + 0x48) = puVar6;
  *(undefined **)(puVar9 + 0x30) = puVar7;
  puVar7 = puVar9;
  FUN_100005b10();
  _swift_setDeallocating(puVar9);
  FUN_10002a29c(puVar9 + 0x20,&DAT_10054a1c0,&DAT_10041a250);
  local_148 = puVar7;
  if (((local_294 & 1) == 0) && (*(long *)(_Var13.unknown + 0x10) != 0)) {
    _swift_bridgeObjectRetain(_Var13.unknown);
    lVar12 = 0x656c6666756853;
    uVar11 = 0;
    FUN_10000464c(0x656c6666756853);
    if ((uVar11 & 1) == 0) {
      _Stack_1b8.unknown = (undefined *)0x0;
      local_1c0.unknown = (undefined *)0x0;
      lStack_1a8 = 0;
      uStack_1b0 = 0;
    }
    else {
      FUN_1000280d4(*(long *)(_Var13.unknown + 0x38) + lVar12 * 0x20,&local_1c0);
    }
    _swift_bridgeObjectRelease(_Var13.unknown);
  }
  else {
    _Stack_1b8.unknown = (undefined *)0x0;
    local_1c0.unknown = (undefined *)0x0;
    lStack_1a8 = 0;
    uStack_1b0 = 0;
  }
  puStack_1d8 = _Stack_1b8.unknown;
  local_1e0 = local_1c0.unknown;
  local_1c8 = (undefined *)lStack_1a8;
  uStack_1d0 = uStack_1b0;
  if (lStack_1a8 == 0) {
    local_78 = PTR___type_metadata_for_Swift_String_100523a98;
    local_90 = (undefined *)0x6c6c756e24;
    uStack_88 = 0xe500000000000000;
  }
  else {
    FUN_100007d88(&local_1e0,&local_90);
  }
  puStack_1d8 = (undefined *)uStack_88;
  local_1e0 = local_90;
  local_1c8 = local_78;
  uStack_1d0 = uStack_80;
  if (local_78 == (undefined *)0x0) {
    FUN_10002a29c(&local_1e0,&DAT_10054d428,&DAT_100420300);
    FUN_10027eb2c(&local_1c0,0x656c6666756853,0xe700000000000000);
    FUN_10002a29c(&local_1c0,&DAT_10054d428,&DAT_100420300);
  }
  else {
    FUN_100007d88(&local_1e0,&local_1c0);
    puVar6 = puVar7;
    _swift_isUniquelyReferenced_nonNull_native(puVar7);
    local_1e0 = puVar7;
    FUN_100340514(&local_1c0,0x656c6666756853,0xe700000000000000,puVar6);
    local_148 = local_1e0;
  }
  if ((local_2c4 & 1) == 0) {
    _swift_bridgeObjectRelease(_Var13.unknown);
  }
  else {
    if ((local_294 & 1) == 0) {
      if (*(long *)(_Var13.unknown + 0x10) != 0) {
        _swift_bridgeObjectRetain(_Var13.unknown);
        uVar11 = 0;
        lVar12 = -0x2fffffffffffffed;
        FUN_10000464c(0xd000000000000013);
        if ((uVar11 & 1) != 0) {
          FUN_1000280d4(*(long *)(_Var13.unknown + 0x38) + lVar12 * 0x20,&local_1c0);
          _swift_bridgeObjectRelease_n(_Var13.unknown,2);
          goto LAB_100153750;
        }
        _swift_bridgeObjectRelease(_Var13.unknown);
      }
      _Stack_1b8.unknown = (undefined *)0x0;
      local_1c0.unknown = (undefined *)0x0;
      lStack_1a8 = 0;
      uStack_1b0 = 0;
      _swift_bridgeObjectRelease(_Var13.unknown);
    }
    else {
      _Stack_1b8.unknown = (undefined *)0x0;
      local_1c0.unknown = (undefined *)0x0;
      lStack_1a8 = 0;
      uStack_1b0 = 0;
    }
LAB_100153750:
    puStack_1d8 = _Stack_1b8.unknown;
    local_1e0 = local_1c0.unknown;
    local_1c8 = (undefined *)lStack_1a8;
    uStack_1d0 = uStack_1b0;
    if (lStack_1a8 != 0) {
      FUN_100007d88(&local_1e0,&local_90);
      goto LAB_100153784;
    }
  }
  local_78 = PTR___type_metadata_for_Swift_String_100523a98;
  local_90 = (undefined *)0x6c6c756e24;
  uStack_88 = 0xe500000000000000;
LAB_100153784:
  puStack_1d8 = (undefined *)uStack_88;
  local_1e0 = local_90;
  local_1c8 = local_78;
  uStack_1d0 = uStack_80;
  if (local_78 == (undefined *)0x0) {
    FUN_10002a29c(&local_1e0,&DAT_10054d428,&DAT_100420300);
    FUN_10027eb2c(&local_1c0,0xd000000000000013,0x80000001004deb10);
    FUN_10002a29c(&local_1c0,&DAT_10054d428,&DAT_100420300);
    puVar7 = local_148;
  }
  else {
    FUN_100007d88(&local_1e0,&local_1c0);
    puVar7 = local_148;
    puVar6 = local_148;
    _swift_isUniquelyReferenced_nonNull_native(local_148);
    local_1e0 = puVar7;
    FUN_100340514(&local_1c0,0xd000000000000013,0x80000001004deb10,puVar6);
    puVar7 = local_1e0;
  }
  lVar12 = local_2a8;
  Foundation::Date::init();
  _swift_initStackObject(puVar4,auStack_290);
  *(undefined8 *)(puVar4 + 0x18) = uStack_2b8;
  *(undefined8 *)(puVar4 + 0x10) = local_2c0;
  *(undefined8 *)(puVar4 + 0x20) = 0x746e65746e6f43;
  *(undefined8 *)(puVar4 + 0x28) = 0xe700000000000000;
  puVar6 = &DAT_10054f980;
  FUN_100002f94(&DAT_10054f980,&DAT_10042a870);
  *(undefined **)(puVar4 + 0x30) = puVar7;
  *(undefined **)(puVar4 + 0x48) = puVar6;
  *(undefined8 *)(puVar4 + 0x50) = 0x7465537473614c;
  *(undefined8 *)(puVar4 + 0x58) = 0xe700000000000000;
  *(undefined **)(puVar4 + 0x78) = DVar3.unknown;
  FUN_1000ccd8c(puVar4 + 0x60);
  lVar10 = local_2a0;
  pcVar14 = *(code **)(local_2a0 + 0x10);
  (*pcVar14)();
  *(undefined8 *)(puVar4 + 0x80) = 0x6573557473614c;
  *(undefined8 *)(puVar4 + 0x88) = 0xe700000000000000;
  *(undefined **)(puVar4 + 0xa8) = DVar3.unknown;
  FUN_1000ccd8c(puVar4 + 0x90);
  (*pcVar14)();
  _swift_bridgeObjectRetain(puVar7);
  puVar6 = puVar4;
  FUN_100005b10(puVar4);
  _swift_setDeallocating(puVar4);
  _swift_arrayDestroy(puVar4 + 0x20,3,local_2b0);
  (**(code **)(lVar10 + 8))(lVar12,DVar3.unknown);
  _swift_bridgeObjectRelease(puVar7);
  return puVar6;
}

