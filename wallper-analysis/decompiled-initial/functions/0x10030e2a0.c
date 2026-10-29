// rea decompile_all
// name: FUN_10030e2a0
// address: 0x10030e2a0
// body: available
// range: 0x10030e2a0-0x10030e39b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10030e2a0(ulong *param_1)

{
  __int64 _Var1;
  _ContiguousArrayBuffer<undefined> _Var2;
  ulong uVar3;
  ulong uVar4;
  ulong minimumCapacity;
  undefined *local_68;
  ulong uStack_60;
  undefined1 auStack_58 [8];
  long local_50;
  ulong uStack_48;
  
  uVar3 = *param_1;
  uVar4 = uVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar4 & 1) == 0) {
    FUN_100265344();
  }
  uVar4 = *(ulong *)(uVar3 + 0x10);
  local_50 = uVar3 + 0x20;
  uStack_48 = uVar4;
  _Var1 = Swift::_minimumMergeRunLength(uVar4);
  if (_Var1 < (long)uVar4) {
    minimumCapacity = uVar4 >> 1;
    _Var2.unknown = PTR___swiftEmptyArrayStorage_100524190;
    if (1 < uVar4) {
      _Var2 = Swift::ContiguousArray::_allocateBufferUninitialized
                        (minimumCapacity,(ContiguousArray)0x10053f330);
      *(ulong *)(_Var2.unknown + 0x10) = minimumCapacity;
    }
    local_68 = _Var2.unknown + 0x20;
    uStack_60 = minimumCapacity;
    FUN_100319a9c(&local_68,auStack_58,&local_50,_Var1);
    *(undefined8 *)(_Var2.unknown + 0x10) = 0;
    _swift_release(_Var2.unknown);
  }
  else if (uVar4 != 0) {
    FUN_10031a578(0,uVar4,1,&local_50);
  }
  *param_1 = uVar3;
  return;
}

