// rea decompile_all
// name: FUN_1001d2874
// address: 0x1001d2874
// body: available
// range: 0x1001d2874-0x1001d2afb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001d2874(Bucket param_1,long param_2)

{
  _HashTable _Var1;
  code *pcVar2;
  UUID UVar3;
  Bucket BVar4;
  ulong uVar5;
  long lVar6;
  long extraout_x8;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  __int64 seed;
  undefined1 auStack_80 [8];
  code *local_78;
  ulong local_70;
  long local_68;
  
  UVar3 = Foundation::UUID::typeMetadataAccessor();
  lVar12 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar12 + 0x40));
  _Var1.unknown = (undefined *)(param_2 + 0x40);
  uVar7 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  puVar13 = (undefined *)((ulong)(param_1.unknown + 1) & (uVar7 ^ 0xffffffffffffffff));
  if ((*(ulong *)(_Var1.unknown + ((ulong)puVar13 >> 6) * 8) >> ((ulong)puVar13 & 0x3f) & 1) != 0) {
    uVar7 = ~uVar7;
    BVar4 = Swift::_HashTable::previousHole(param_1,_Var1);
    local_70 = (ulong)(BVar4.unknown + 1) & uVar7;
    lVar9 = *(long *)(lVar12 + 0x48);
    local_78 = *(code **)(lVar12 + 0x10);
    local_68 = lVar12;
    do {
      lVar12 = lVar9 * (long)puVar13;
      (*local_78)(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                  *(long *)(param_2 + 0x30) + lVar12,UVar3.unknown);
      seed = *(__int64 *)(param_2 + 0x28);
      FUN_1000036d0(&DAT_10054a128,PTR_typeMetadataAccessor_100520bd8,
                    PTR_Foundation__Foundation__UUID_>Swift__Hashable_100520bf0);
      uVar5 = Swift::Hashable::_rawHashValue(seed);
      (**(code **)(local_68 + 8))
                (auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar3.unknown);
      uVar5 = uVar5 & uVar7;
      if ((long)param_1.unknown < (long)local_70) {
        if (local_70 <= uVar5 || (long)uVar5 <= (long)param_1.unknown) {
LAB_1001d29f8:
          lVar8 = lVar9 * (long)param_1.unknown;
          uVar5 = *(long *)(param_2 + 0x30) + lVar8;
          lVar6 = *(long *)(param_2 + 0x30) + lVar12;
          if ((lVar8 < lVar12) || ((ulong)(lVar6 + lVar9) <= uVar5)) {
            _swift_arrayInitWithTakeFrontToBack(uVar5,lVar6,1,UVar3.unknown);
          }
          else if (lVar8 - lVar12 != 0) {
            _swift_arrayInitWithTakeBackToFront(uVar5,lVar6,1,UVar3.unknown);
          }
          lVar12 = *(long *)(param_2 + 0x38);
          lVar6 = 0;
          FUN_1001d537c();
          lVar11 = *(long *)(*(long *)(lVar6 + -8) + 0x48);
          lVar8 = lVar11 * (long)param_1.unknown;
          uVar5 = lVar12 + lVar8;
          lVar10 = lVar11 * (long)puVar13;
          lVar12 = lVar12 + lVar10;
          param_1.unknown = puVar13;
          if (lVar8 < lVar10 || (ulong)(lVar12 + lVar11) <= uVar5) {
            _swift_arrayInitWithTakeFrontToBack(uVar5,lVar12,1,lVar6);
          }
          else if (lVar8 - lVar10 != 0) {
            _swift_arrayInitWithTakeBackToFront(uVar5,lVar12,1);
          }
        }
      }
      else if (local_70 <= uVar5 && (long)uVar5 <= (long)param_1.unknown) goto LAB_1001d29f8;
      puVar13 = (undefined *)((ulong)(puVar13 + 1) & uVar7);
    } while ((*(ulong *)(_Var1.unknown + ((ulong)puVar13 >> 6) * 8) >> ((ulong)puVar13 & 0x3f) & 1)
             != 0);
  }
  uVar7 = (ulong)param_1.unknown >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(_Var1.unknown + uVar7) =
       *(ulong *)(_Var1.unknown + uVar7) & (-1L << ((ulong)param_1.unknown & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1001d2afc);
  (*pcVar2)();
}

