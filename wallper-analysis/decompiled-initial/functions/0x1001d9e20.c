// rea decompile_all
// name: FUN_1001d9e20
// address: 0x1001d9e20
// body: available
// range: 0x1001d9e20-0x1001d9fc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_1001d9e20(long param_1,long param_2)

{
  _StringGuts _Var1;
  undefined *puVar2;
  _StringGuts _Var3;
  bool bVar4;
  long lVar5;
  UUID UVar6;
  long extraout_x8;
  long lVar7;
  ulong uVar8;
  long extraout_x12;
  long extraout_x13;
  UUID UVar9;
  UUID UVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar5 = 0;
  FUN_100266c2c();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  UVar9.unknown = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  UVar10.unknown = UVar9.unknown + -extraout_x13;
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == *(long *)(param_2 + 0x10)) {
    if ((lVar7 == 0) || (param_1 == param_2)) {
      bVar4 = true;
    }
    else {
      uVar8 = (ulong)*(byte *)(extraout_x12 + 0x50) + 0x20 &
              ((ulong)*(byte *)(extraout_x12 + 0x50) ^ 0xffffffffffffffff);
      param_1 = param_1 + uVar8;
      param_2 = param_2 + uVar8;
      lVar11 = *(long *)(extraout_x12 + 0x48);
      do {
        lVar7 = lVar7 + -1;
        FUN_100029504(param_1,UVar10.unknown,FUN_100266c2c);
        UVar6.unknown = FUN_100266c2c;
        FUN_100029504(param_2,UVar9.unknown);
        bVar4 = Foundation::UUID::___infix(UVar10,UVar9,UVar6);
        if (!bVar4) {
LAB_1001d9f84:
          FUN_100029548(UVar9.unknown,FUN_100266c2c);
          FUN_100029548(UVar10.unknown,FUN_100266c2c);
          goto LAB_1001d9fa4;
        }
                    /* WARNING: Load size is inaccurate */
        _Var1.unknown = UVar10.unknown[*(int *)(lVar5 + 0x14)];
        _Var3.unknown = *(undefined **)((long)(UVar10.unknown + *(int *)(lVar5 + 0x14)) + 8);
        puVar2 = *(undefined **)(UVar9.unknown + *(int *)(lVar5 + 0x14));
        if ((_Var1.unknown != puVar2 ||
             _Var3.unknown != *(undefined **)((long)(UVar9.unknown + *(int *)(lVar5 + 0x14)) + 8))
           && (bVar4 = Swift::_stringCompareWithSmolCheck
                                 (_Var1,_Var3,(_StringComparisonResult)(__int8)puVar2), !bVar4))
        goto LAB_1001d9f84;
        lVar12 = *(long *)(UVar10.unknown + *(int *)(lVar5 + 0x18));
        lVar13 = *(long *)(UVar9.unknown + *(int *)(lVar5 + 0x18));
        FUN_100029548(UVar9.unknown,FUN_100266c2c);
        FUN_100029548(UVar10.unknown,FUN_100266c2c);
        bVar4 = lVar12 == lVar13;
        if (!bVar4) {
          return bVar4;
        }
        param_2 = param_2 + lVar11;
        param_1 = param_1 + lVar11;
      } while (lVar7 != 0);
    }
  }
  else {
LAB_1001d9fa4:
    bVar4 = false;
  }
  return bVar4;
}

