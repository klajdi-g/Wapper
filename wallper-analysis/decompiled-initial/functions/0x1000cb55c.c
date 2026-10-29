// rea decompile_all
// name: FUN_1000cb55c
// address: 0x1000cb55c
// body: available
// range: 0x1000cb55c-0x1000cb697 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000cb55c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  _StringGuts _Var3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long extraout_x8;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  bool bVar12;
  undefined8 auStack_70 [2];
  
  lVar6 = 0;
  auStack_70[1] = param_1;
  FUN_100266c40();
  lVar10 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar10 + 0x40));
  lVar6 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar9 = (undefined8 *)((long)auStack_70 + lVar6);
  puVar1 = (undefined *)*param_5;
  puVar2 = (undefined *)param_5[1];
  lVar7 = 0;
  FUN_10025ee04();
  uVar11 = 0;
  lVar7 = *(long *)(param_4 + *(int *)(lVar7 + 0x20));
  uVar8 = *(ulong *)(lVar7 + 0x10);
  do {
    bVar5 = uVar8 == uVar11;
    bVar12 = !bVar5;
    if (bVar5) break;
    if (*(ulong *)(lVar7 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1000cb698);
      (*pcVar4)();
    }
    FUN_100029504(lVar7 + ((ulong)*(byte *)(lVar10 + 0x50) + 0x20 &
                          ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff)) +
                  *(long *)(lVar10 + 0x48) * uVar11,puVar9,FUN_100266c40);
    _Var3.unknown = *(undefined **)((long)auStack_70 + lVar6 + 8);
    if ((undefined *)*puVar9 == puVar1 && _Var3.unknown == puVar2) {
      FUN_100029548(puVar9,FUN_100266c40);
      bVar12 = true;
      break;
    }
    uVar11 = uVar11 + 1;
    bVar5 = Swift::_stringCompareWithSmolCheck
                      ((undefined *)*puVar9,_Var3,(_StringComparisonResult)(__int8)puVar1);
    FUN_100029548(puVar9,FUN_100266c40);
  } while (!bVar5);
  *(bool *)auStack_70[1] = bVar12;
  return;
}

