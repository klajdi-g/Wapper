// rea decompile_all
// name: FUN_1003defe8
// address: 0x1003defe8
// body: available
// range: 0x1003defe8-0x1003df25b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003defe8(long param_1,long param_2,long param_3,long *param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  _StringGuts _Var6;
  undefined *puVar7;
  long extraout_x8;
  long lVar8;
  long extraout_x12;
  long extraout_x13;
  undefined *puVar9;
  undefined *puVar10;
  _StringGuts _Var11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long local_a8 [4];
  long local_88;
  long lStack_80;
  long local_78;
  long local_70;
  undefined1 *local_68;
  
  lVar5 = 0;
  FUN_10040211c();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  local_68 = &stack0xffffffffffffff50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar8 = (long)(&stack0xffffffffffffff50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
          extraout_x13;
  if (param_3 != param_2) {
    local_70 = *param_4;
    local_a8[0] = *(long *)(extraout_x12 + 0x48);
    lVar14 = local_70 + local_a8[0] * (param_3 + -1);
    local_78 = -local_a8[0];
    param_1 = param_1 - param_3;
    lVar13 = local_70 + local_a8[0] * param_3;
    local_a8[1] = param_2;
    local_a8[2] = lVar13;
    local_a8[3] = param_1;
    local_88 = lVar14;
    lStack_80 = param_3;
LAB_1003df13c:
    do {
      FUN_100029504(lVar14,lVar8,FUN_10040211c);
      puVar1 = (undefined8 *)(lVar13 + *(int *)(lVar5 + 0x34));
      puVar9 = (undefined *)puVar1[1];
      if (puVar9 == (undefined *)0x0) {
        _Var6.unknown = (undefined *)0x0;
        _Var11.unknown = (undefined *)0xe000000000000000;
      }
      else {
        _Var6.unknown = (undefined *)*puVar1;
        _Var11.unknown = puVar9;
      }
      puVar1 = (undefined8 *)(lVar8 + *(int *)(lVar5 + 0x34));
      puVar10 = (undefined *)puVar1[1];
      if (puVar10 == (undefined *)0x0) {
        puVar7 = (undefined *)0x0;
        puVar12 = (undefined *)0xe000000000000000;
        if (_Var6.unknown == (undefined *)0x0) goto LAB_1003df1a8;
LAB_1003df1b0:
        bVar4 = Swift::_stringCompareWithSmolCheck
                          (_Var6,_Var11,(_StringComparisonResult)(__int8)puVar7);
        _swift_bridgeObjectRetain(puVar10);
        _swift_bridgeObjectRetain(puVar9);
        _swift_bridgeObjectRelease(_Var11.unknown);
        _swift_bridgeObjectRelease(puVar12);
        FUN_100029548(lVar8,FUN_10040211c);
        puVar2 = local_68;
        if (bVar4) {
          if (local_70 == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1003df25c);
            (*pcVar3)();
          }
          FUN_100007e64(lVar13,local_68,FUN_10040211c);
          _swift_arrayInitWithTakeFrontToBack(lVar13,lVar14,1,lVar5);
          FUN_100007e64(puVar2,lVar14,FUN_10040211c);
          lVar14 = lVar14 + local_78;
          lVar13 = lVar13 + local_78;
          bVar4 = param_1 != -1;
          param_1 = param_1 + 1;
          if (bVar4) goto LAB_1003df13c;
        }
      }
      else {
        puVar7 = (undefined *)*puVar1;
        puVar12 = puVar10;
        if (_Var6.unknown != puVar7) goto LAB_1003df1b0;
LAB_1003df1a8:
        if (_Var11.unknown != puVar12) goto LAB_1003df1b0;
        _swift_bridgeObjectRetain(puVar10);
        _swift_bridgeObjectRetain(puVar9);
        _swift_bridgeObjectRelease(_Var11.unknown);
        _swift_bridgeObjectRelease(puVar12);
        FUN_100029548(lVar8,FUN_10040211c);
      }
      lStack_80 = lStack_80 + 1;
      lVar14 = local_88 + local_a8[0];
      param_1 = local_a8[3] + -1;
      lVar13 = local_a8[2] + local_a8[0];
      local_a8[2] = lVar13;
      local_a8[3] = param_1;
      local_88 = lVar14;
    } while (lStack_80 != local_a8[1]);
  }
  return;
}

