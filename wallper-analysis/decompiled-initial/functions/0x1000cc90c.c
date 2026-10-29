// rea decompile_all
// name: FUN_1000cc90c
// address: 0x1000cc90c
// body: available
// range: 0x1000cc90c-0x1000ccbfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1000cc90c(UUID param_1,UUID param_2,UUID param_3)

{
  _StringGuts _Var1;
  undefined *puVar2;
  _StringGuts _Var3;
  int iVar4;
  undefined1 *puVar5;
  bool bVar6;
  UUID UVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  undefined1 auStack_70 [8];
  undefined1 *local_68;
  
  UVar7 = Foundation::UUID::typeMetadataAccessor();
  lVar14 = *(long *)(UVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar14 + 0x40));
  puVar8 = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  puVar8 = &DAT_10054a9c0;
  FUN_100002f94(&DAT_10054a9c0,&DAT_100422d20);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar12 - extraout_x8_01;
  bVar6 = Foundation::UUID::___infix(param_1,param_2,param_3);
  if (bVar6) {
    lVar9 = 0;
    FUN_1000c8bec();
                    /* WARNING: Load size is inaccurate */
    _Var1.unknown = param_1.unknown[*(int *)(lVar9 + 0x14)];
    _Var3.unknown = *(undefined **)((long)(param_1.unknown + *(int *)(lVar9 + 0x14)) + 8);
    puVar2 = *(undefined **)(param_2.unknown + *(int *)(lVar9 + 0x14));
    if ((_Var1.unknown == puVar2 &&
         _Var3.unknown == *(undefined **)((long)(param_2.unknown + *(int *)(lVar9 + 0x14)) + 8)) ||
       (bVar6 = Swift::_stringCompareWithSmolCheck
                          (_Var1,_Var3,(_StringComparisonResult)(__int8)puVar2), bVar6)) {
                    /* WARNING: Load size is inaccurate */
      _Var1.unknown = param_1.unknown[*(int *)(lVar9 + 0x18)];
      _Var3.unknown = *(undefined **)((long)(param_1.unknown + *(int *)(lVar9 + 0x18)) + 8);
      puVar2 = *(undefined **)(param_2.unknown + *(int *)(lVar9 + 0x18));
      if ((_Var1.unknown == puVar2 &&
           _Var3.unknown == *(undefined **)((long)(param_2.unknown + *(int *)(lVar9 + 0x18)) + 8))
         || (bVar6 = Swift::_stringCompareWithSmolCheck
                               (_Var1,_Var3,(_StringComparisonResult)(__int8)puVar2), bVar6)) {
        iVar4 = *(int *)(lVar9 + 0x1c);
        lVar9 = (long)*(int *)(puVar8 + 0x30);
        local_68 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
        FUN_1000087e4(param_1.unknown + iVar4,lVar11,&DAT_10054a9c8,&DAT_10041bbe0);
        FUN_1000087e4(param_2.unknown + iVar4,lVar11 + lVar9,&DAT_10054a9c8,&DAT_10041bbe0);
        pcVar13 = *(code **)(lVar14 + 0x30);
        lVar10 = lVar11;
        (*pcVar13)(lVar11,1,UVar7.unknown);
        if ((int)lVar10 == 1) {
          lVar9 = lVar11 + lVar9;
          (*pcVar13)(lVar9,1,UVar7.unknown);
          if ((int)lVar9 == 1) {
            FUN_10002a29c(lVar11,&DAT_10054a9c8,&DAT_10041bbe0);
            return 1;
          }
        }
        else {
          FUN_1000087e4(lVar11,lVar12,&DAT_10054a9c8,&DAT_10041bbe0);
          lVar10 = lVar11 + lVar9;
          (*pcVar13)(lVar10,1,UVar7.unknown);
          puVar5 = local_68;
          if ((int)lVar10 != 1) {
            (**(code **)(lVar14 + 0x20))(local_68,lVar11 + lVar9,UVar7.unknown);
            puVar8 = &DAT_10054a130;
            FUN_1000036d0(&DAT_10054a130,PTR_typeMetadataAccessor_100520bd8,
                          PTR_Foundation__Foundation__UUID_>Swift__Equatable_100520bf8);
            bVar6 = Swift::Equatable::___infix(lVar12,puVar5,UVar7.unknown,puVar8);
            pcVar13 = *(code **)(lVar14 + 8);
            (*pcVar13)(puVar5,UVar7.unknown);
            (*pcVar13)(lVar12,UVar7.unknown);
            FUN_10002a29c(lVar11,&DAT_10054a9c8,&DAT_10041bbe0);
            if (!bVar6) {
              return 0;
            }
            return 1;
          }
          (**(code **)(lVar14 + 8))(lVar12,UVar7.unknown);
        }
        FUN_10002a29c(lVar11,&DAT_10054a9c0,&DAT_100422d20);
      }
    }
  }
  return 0;
}

