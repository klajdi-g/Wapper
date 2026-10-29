// rea decompile_all
// name: FUN_1002ba008
// address: 0x1002ba008
// body: available
// range: 0x1002ba008-0x1002ba45f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002ba008(long param_1,long param_2,long *param_3)

{
  undefined8 *puVar1;
  _StringGuts _Var2;
  _StringGuts _Var3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  code *pcVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  undefined7 extraout_var;
  undefined *puVar13;
  State SVar14;
  TargetProtocolConformanceDescriptor *pTVar15;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  undefined1 auStack_b0 [12];
  undefined4 local_a4;
  long local_a0 [5];
  undefined1 *local_78;
  undefined1 local_70;
  long local_68;
  
  lVar9 = 0;
  FUN_100400294();
  lVar20 = *(long *)(lVar9 + -8);
  lVar17 = *(long *)(lVar20 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar16 = auStack_b0 + -(lVar17 + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0;
  FUN_1002bc1b0();
  local_a0[0] = *(long *)(lVar10 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = (long)puVar16 - (extraout_x12 + 0xfU & 0xfffffffffffffff0);
  puVar11 = &DAT_100554ab8;
  local_a0[1] = extraout_x12;
  local_a0[2] = lVar10;
  FUN_100002f94(&DAT_100554ab8,&DAT_100427d98);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar10 - extraout_x8;
  FUN_100029504(param_2,param_1,FUN_100400294);
  lVar21 = *param_3;
  if (lVar21 == 0) {
    FUN_10013b98c(0);
    pcVar7 = FUN_10013b98c;
    puVar11 = &DAT_100553150;
    pTVar15 = &TargetProtocolConformanceDescriptor_1004274b8;
  }
  else {
    _swift_retain(lVar21);
    FUN_100138eb0(lVar10);
    _swift_release(lVar21);
    lVar12 = lVar10;
    local_a0[3] = lVar20;
    (**(code **)(lVar20 + 0x30))(lVar10,1,lVar9);
    if ((int)lVar12 == 1) {
      FUN_10002a29c(lVar10,&DAT_100554ab8,&DAT_100427d98);
      local_a4 = 0;
    }
    else {
      _Var2.unknown = *(undefined **)(lVar10 + 0x10);
      _Var3.unknown = *(undefined **)(lVar10 + 0x18);
      _swift_bridgeObjectRetain(_Var3.unknown);
      FUN_100029548(lVar10,FUN_100400294);
      if (_Var2.unknown == *(undefined **)(param_2 + 0x10) &&
          _Var3.unknown == *(undefined **)(param_2 + 0x18)) {
        _swift_bridgeObjectRelease(_Var3.unknown);
        local_a4 = 1;
      }
      else {
        bVar8 = Swift::_stringCompareWithSmolCheck
                          (_Var2,_Var3,
                           (_StringComparisonResult)(__int8)*(undefined **)(param_2 + 0x10));
        local_a4 = (undefined4)CONCAT71(extraout_var,bVar8);
        _swift_bridgeObjectRelease(_Var3.unknown);
      }
    }
    lVar9 = param_3[2];
    local_a0[4] = lVar17;
    local_78 = puVar16;
    if (lVar9 != 0) {
      puVar11 = &DAT_10042e1b8;
      _swift_getKeyPath(&DAT_10042e1b8);
      puVar13 = &DAT_10042e1e0;
      _swift_getKeyPath(&DAT_10042e1e0);
      lVar10 = 0;
      FUN_1002c3644();
      iVar6 = *(int *)(lVar10 + 0x18);
      _swift_retain(lVar9);
      Combine::Published::_get_subscript(param_1 + iVar6);
      _swift_release(puVar11);
      _swift_release(puVar13);
      _swift_release(lVar9);
      local_70 = (undefined1)param_3[6];
      local_68 = param_3[7];
      SVar14.unknown = &DAT_10054ab50;
      FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
      SwiftUI::State::get_wrappedValue(SVar14);
      puVar11 = &DAT_10042e330;
      _swift_getKeyPath(&DAT_10042e330);
      puVar13 = &DAT_10042e358;
      _swift_getKeyPath(&DAT_10042e358);
      iVar6 = *(int *)(lVar10 + 0x20);
      _swift_retain(lVar21);
      Combine::Published::_get_subscript(param_1 + iVar6);
      _swift_release(puVar11);
      _swift_release(puVar13);
      _swift_release(lVar21);
      puVar11 = &DAT_10042e2e8;
      _swift_getKeyPath(&DAT_10042e2e8);
      puVar13 = &DAT_10042e310;
      _swift_getKeyPath(&DAT_10042e310);
      iVar6 = *(int *)(lVar10 + 0x24);
      _swift_retain(lVar21);
      Combine::Published::_get_subscript(param_1 + iVar6);
      _swift_release(lVar21);
      _swift_release(puVar11);
      _swift_release(puVar13);
      lVar9 = local_a0[2];
      FUN_100029504(param_3,local_a0[2],FUN_1002bc1b0);
      puVar16 = local_78;
      FUN_100029504(param_2,local_78,FUN_100400294);
      bVar4 = *(byte *)(local_a0[0] + 0x50);
      uVar18 = (ulong)bVar4 + 0x10 & ((ulong)bVar4 ^ 0xffffffffffffffff);
      bVar5 = *(byte *)(local_a0[3] + 0x50);
      uVar19 = local_a0[1] + (ulong)bVar5 + uVar18 & ((ulong)bVar5 ^ 0xffffffffffffffff);
      puVar11 = &DAT_100537e58;
      _swift_allocObject(&DAT_100537e58,uVar19 + local_a0[4],bVar4 | bVar5 | 7);
      FUN_100007e64(lVar9,puVar11 + uVar18,FUN_1002bc1b0);
      FUN_100007e64(puVar16,puVar11 + uVar19,FUN_100400294);
      *(byte *)(param_1 + *(int *)(lVar10 + 0x14)) = (byte)local_a4 & 1;
      puVar1 = (undefined8 *)(param_1 + *(int *)(lVar10 + 0x28));
      *puVar1 = FUN_1002c3c54;
      puVar1[1] = puVar11;
      return;
    }
    FUN_10014e37c(0);
    pcVar7 = FUN_10014e37c;
    puVar11 = &DAT_100553148;
    pTVar15 = &TargetProtocolConformanceDescriptor_100427f04;
  }
  FUN_1000036d0(puVar11,pcVar7,pTVar15);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x1002ba460);
  (*pcVar7)();
}

