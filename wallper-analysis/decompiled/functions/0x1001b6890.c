// rea decompile_all
// name: FUN_1001b6890
// address: 0x1001b6890
// body: available
// range: 0x1001b6890-0x1001b69c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001b6890(ulong *param_1)

{
  long *plVar1;
  bool bVar2;
  __int64 _Var3;
  _ContiguousArrayBuffer<undefined> _Var4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *local_68;
  ulong uStack_60;
  undefined1 auStack_58 [8];
  long *local_50;
  ulong uStack_48;
  
  uVar11 = *param_1;
  uVar12 = uVar11;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar12 & 1) == 0) {
    FUN_1002652e0();
  }
  uVar12 = *(ulong *)(uVar11 + 0x10);
  plVar1 = (long *)(uVar11 + 0x20);
  local_50 = plVar1;
  uStack_48 = uVar12;
  _Var3 = Swift::_minimumMergeRunLength(uVar12);
  if (_Var3 < (long)uVar12) {
    uVar13 = uVar12 >> 1;
    _Var4.unknown = PTR___swiftEmptyArrayStorage_100524190;
    if (1 < uVar12) {
      _Var4 = Swift::ContiguousArray::_allocateBufferUninitialized
                        (uVar13,(ContiguousArray)0x100535f00);
      *(ulong *)(_Var4.unknown + 0x10) = uVar13;
    }
    local_68 = _Var4.unknown + 0x20;
    uStack_60 = uVar13;
    FUN_1001d30a8(&local_68,auStack_58,&local_50,_Var3);
    *(undefined8 *)(_Var4.unknown + 0x10) = 0;
    _swift_release(_Var4.unknown);
  }
  else if ((uVar12 != 0) && (uVar12 != 1)) {
    lVar5 = -1;
    uVar13 = 1;
    plVar6 = plVar1;
    do {
      lVar7 = plVar1[uVar13];
      lVar8 = lVar5;
      plVar9 = plVar6;
      do {
        lVar10 = *plVar9;
        if (lVar10 <= lVar7) break;
        *plVar9 = lVar7;
        plVar9[1] = lVar10;
        bVar2 = lVar8 != -1;
        lVar8 = lVar8 + 1;
        plVar9 = plVar9 + -1;
      } while (bVar2);
      uVar13 = uVar13 + 1;
      plVar6 = plVar6 + 1;
      lVar5 = lVar5 + -1;
    } while (uVar13 != uVar12);
  }
  *param_1 = uVar11;
  return;
}

