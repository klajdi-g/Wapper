// rea decompile_all
// name: FUN_10037b9cc
// address: 0x10037b9cc
// body: available
// range: 0x10037b9cc-0x10037bbbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_10037b9cc(long param_1,long param_2)

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
  bool bVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  long alStack_70 [2];
  
  lVar6 = 0;
  FUN_100266c40();
  lVar11 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar11 + 0x40));
  lVar6 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar10 = (undefined8 *)((long)alStack_70 + lVar6);
  if (*(long *)(param_1 + 0x10) == 0) {
    bVar9 = false;
  }
  else {
    puVar1 = *(undefined **)(param_1 + 0x20);
    puVar2 = *(undefined **)(param_1 + 0x28);
    lVar7 = 0;
    FUN_10025ee04();
    lVar7 = *(long *)(param_2 + *(int *)(lVar7 + 0x20));
    uVar12 = *(ulong *)(lVar7 + 0x10);
    alStack_70[1] = param_2;
    _swift_bridgeObjectRetain(puVar2);
    uVar8 = 0;
    do {
      bVar5 = uVar12 == uVar8;
      bVar9 = !bVar5;
      if (bVar5) goto LAB_10037bb48;
      if (*(ulong *)(lVar7 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10037bb78);
        (*pcVar4)();
      }
      FUN_100029504(lVar7 + ((ulong)*(byte *)(lVar11 + 0x50) + 0x20 &
                            ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff)) +
                    *(long *)(lVar11 + 0x48) * uVar8,puVar10,FUN_100266c40);
      _Var3.unknown = *(undefined **)((long)alStack_70 + lVar6 + 8);
      if ((undefined *)*puVar10 == puVar1 && _Var3.unknown == puVar2) {
        FUN_100029548(puVar10,FUN_100266c40);
        break;
      }
      uVar8 = uVar8 + 1;
      bVar5 = Swift::_stringCompareWithSmolCheck
                        ((undefined *)*puVar10,_Var3,(_StringComparisonResult)(__int8)puVar1);
      FUN_100029548(puVar10,FUN_100266c40);
    } while (!bVar5);
    lVar11 = 0;
    FUN_100387a1c();
    lVar6 = alStack_70[1];
    lVar11 = *(long *)(alStack_70[1] + *(int *)(lVar11 + 0x1c));
    if (lVar11 == 0) {
      FUN_1001b7378(0);
      FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
      SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10037bbbc);
      (*pcVar4)();
    }
    _swift_bridgeObjectRetain(puVar2);
    _swift_retain(lVar11);
    FUN_1001d4970(lVar6,lVar11,puVar1,puVar2,0,0);
    _swift_release(lVar11);
    _swift_bridgeObjectRelease(puVar2);
LAB_10037bb48:
    _swift_bridgeObjectRelease(puVar2);
  }
  return bVar9;
}

