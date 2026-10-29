// rea decompile_all
// name: FUN_10038004c
// address: 0x10038004c
// body: available
// range: 0x10038004c-0x1003802af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10038004c(long param_1,undefined *param_2)

{
  _StringGuts _Var1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  _StringGuts _Var8;
  _StringGuts _Var9;
  long lVar10;
  undefined *puVar11;
  long extraout_x8;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined *apuStack_b0 [2];
  long local_a0;
  long local_98;
  undefined1 auStack_90 [16];
  undefined *local_80;
  undefined *puStack_78;
  long local_70;
  code *pcStack_68;
  
  lVar6 = 0;
  puVar11 = param_2;
  FUN_100266c40();
  lVar15 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar15 + 0x40));
  lVar6 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar12 = (undefined8 *)((long)apuStack_b0 + lVar6);
  if (*(long *)(param_1 + 0x10) != 0) {
    _Var1.unknown = *(undefined **)(param_1 + 0x20);
    _Var9.unknown = *(undefined **)(param_1 + 0x28);
    lVar7 = 0;
    FUN_10038ffac();
    iVar2 = *(int *)(lVar7 + 0x14);
    _Var8.unknown = _Var9.unknown;
    _swift_bridgeObjectRetain();
    FUN_10026ac6c();
    if (_Var1.unknown == _Var8.unknown && _Var9.unknown == puVar11) {
      _swift_bridgeObjectRelease(_Var9.unknown);
      _Var9.unknown = puVar11;
    }
    else {
      bVar5 = Swift::_stringCompareWithSmolCheck
                        (_Var1,_Var9,(_StringComparisonResult)(__int8)_Var8.unknown);
      _swift_bridgeObjectRelease(puVar11);
      if (!bVar5) {
        iVar3 = *(int *)(lVar7 + 0x18);
        lVar10 = 0;
        local_a0 = lVar7;
        local_98 = (long)iVar2;
        FUN_10025ee04();
        uVar14 = 0;
        lVar7 = *(long *)(param_2 + iVar3 + *(int *)(lVar10 + 0x20));
        uVar13 = *(ulong *)(lVar7 + 0x10);
        apuStack_b0[1] = param_2 + iVar3;
        while( true ) {
          if (uVar13 == uVar14) goto LAB_100380120;
          if (*(ulong *)(lVar7 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10038026c);
            (*pcVar4)();
          }
          FUN_100029504(lVar7 + ((ulong)*(byte *)(lVar15 + 0x50) + 0x20 &
                                ((ulong)*(byte *)(lVar15 + 0x50) ^ 0xffffffffffffffff)) +
                        *(long *)(lVar15 + 0x48) * uVar14,puVar12,FUN_100266c40);
          _Var8.unknown = *(undefined **)((long)apuStack_b0 + lVar6 + 8);
          if ((undefined *)*puVar12 == _Var1.unknown && _Var8.unknown == _Var9.unknown) break;
          uVar14 = uVar14 + 1;
          bVar5 = Swift::_stringCompareWithSmolCheck
                            ((undefined *)*puVar12,_Var8,
                             (_StringComparisonResult)(__int8)_Var1.unknown);
          pcVar4 = FUN_100266c40;
          FUN_100029548(puVar12);
          if (bVar5) {
LAB_1003801fc:
            lVar6 = *(long *)(param_2 + *(int *)(local_a0 + 0x20));
            if (lVar6 != 0) {
              lVar15 = lVar6;
              _swift_retain();
              FUN_10026ac6c(local_98);
              local_80 = _Var1.unknown;
              puStack_78 = _Var9.unknown;
              local_70 = lVar15;
              pcStack_68 = pcVar4;
              FUN_1001b9fc0(apuStack_b0[1],FUN_10039a0ac,auStack_90);
              _swift_bridgeObjectRelease(_Var9.unknown);
              _swift_release(lVar6);
              _swift_bridgeObjectRelease(pcVar4);
              return 1;
            }
            FUN_1001b7378(0);
            FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,
                          &TargetProtocolConformanceDescriptor_10042a5d0);
            SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1003802b0);
            (*pcVar4)();
          }
        }
        pcVar4 = FUN_100266c40;
        FUN_100029548(puVar12);
        goto LAB_1003801fc;
      }
    }
LAB_100380120:
    _swift_bridgeObjectRelease(_Var9.unknown);
  }
  return 0;
}

