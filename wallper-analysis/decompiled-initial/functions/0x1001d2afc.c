// rea decompile_all
// name: FUN_1001d2afc
// address: 0x1001d2afc
// body: available
// range: 0x1001d2afc-0x1001d2d7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001d2afc(Bucket param_1,long param_2)

{
  _HashTable _Var1;
  long lVar2;
  code *pcVar3;
  UUID UVar4;
  Bucket BVar5;
  ulong uVar6;
  long extraout_x8;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  __int64 seed;
  long lVar11;
  undefined1 auStack_80 [8];
  code *local_78;
  ulong local_70;
  long local_68;
  
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  lVar8 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar8 + 0x40));
  _Var1.unknown = (undefined *)(param_2 + 0x40);
  uVar7 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  puVar10 = (undefined *)((ulong)(param_1.unknown + 1) & (uVar7 ^ 0xffffffffffffffff));
  if ((*(ulong *)(_Var1.unknown + ((ulong)puVar10 >> 6) * 8) >> ((ulong)puVar10 & 0x3f) & 1) != 0) {
    uVar7 = ~uVar7;
    BVar5 = Swift::_HashTable::previousHole(param_1,_Var1);
    local_70 = (ulong)(BVar5.unknown + 1) & uVar7;
    lVar9 = *(long *)(lVar8 + 0x48);
    local_78 = *(code **)(lVar8 + 0x10);
    local_68 = lVar8;
    do {
      lVar8 = lVar9 * (long)puVar10;
      (*local_78)(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                  *(long *)(param_2 + 0x30) + lVar8,UVar4.unknown);
      seed = *(__int64 *)(param_2 + 0x28);
      FUN_1000036d0(&DAT_10054a128,PTR_typeMetadataAccessor_100520bd8,
                    PTR_Foundation__Foundation__UUID_>Swift__Hashable_100520bf0);
      uVar6 = Swift::Hashable::_rawHashValue(seed);
      (**(code **)(local_68 + 8))
                (auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar4.unknown);
      uVar6 = uVar6 & uVar7;
      if ((long)param_1.unknown < (long)local_70) {
        if (local_70 <= uVar6 || (long)uVar6 <= (long)param_1.unknown) {
LAB_1001d2c70:
          lVar11 = lVar9 * (long)param_1.unknown;
          uVar6 = *(long *)(param_2 + 0x30) + lVar11;
          lVar2 = *(long *)(param_2 + 0x30) + lVar8;
          if ((lVar11 < lVar8) || ((ulong)(lVar2 + lVar9) <= uVar6)) {
            _swift_arrayInitWithTakeFrontToBack(uVar6,lVar2,1,UVar4.unknown);
          }
          else if (lVar11 - lVar8 != 0) {
            _swift_arrayInitWithTakeBackToFront(uVar6,lVar2,1,UVar4.unknown);
          }
          uVar6 = *(long *)(param_2 + 0x38) + lVar11;
          lVar2 = *(long *)(param_2 + 0x38) + lVar8;
          param_1.unknown = puVar10;
          if ((lVar11 < lVar8) || ((ulong)(lVar2 + lVar9) <= uVar6)) {
            _swift_arrayInitWithTakeFrontToBack(uVar6,lVar2,1,UVar4.unknown);
          }
          else if (lVar11 - lVar8 != 0) {
            _swift_arrayInitWithTakeBackToFront(uVar6,lVar2,1,UVar4.unknown);
          }
        }
      }
      else if (local_70 <= uVar6 && (long)uVar6 <= (long)param_1.unknown) goto LAB_1001d2c70;
      puVar10 = (undefined *)((ulong)(puVar10 + 1) & uVar7);
    } while ((*(ulong *)(_Var1.unknown + ((ulong)puVar10 >> 6) * 8) >> ((ulong)puVar10 & 0x3f) & 1)
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
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1001d2d80);
  (*pcVar3)();
}

