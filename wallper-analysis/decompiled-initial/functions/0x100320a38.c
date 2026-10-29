// rea decompile_all
// name: FUN_100320a38
// address: 0x100320a38
// body: available
// range: 0x100320a38-0x100320b53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100320a38(ulong *param_1)

{
  ContiguousArray CVar1;
  __int64 _Var2;
  _ContiguousArrayBuffer<undefined> _Var3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong minimumCapacity;
  ulong uVar7;
  undefined *local_78;
  ulong uStack_70;
  undefined1 auStack_68 [8];
  long local_60;
  ulong uStack_58;
  
  CVar1.unknown = (undefined *)0x0;
  FUN_10040211c();
  lVar5 = *(long *)(CVar1.unknown + -8);
  uVar4 = *param_1;
  uVar6 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar6 & 1) == 0) {
    FUN_1002652b8();
  }
  uVar6 = *(ulong *)(uVar4 + 0x10);
  uVar7 = (ulong)*(byte *)(lVar5 + 0x50) + 0x20 &
          ((ulong)*(byte *)(lVar5 + 0x50) ^ 0xffffffffffffffff);
  local_60 = uVar4 + uVar7;
  uStack_58 = uVar6;
  _Var2 = Swift::_minimumMergeRunLength(uVar6);
  if (_Var2 < (long)uVar6) {
    minimumCapacity = uVar6 >> 1;
    _Var3.unknown = PTR___swiftEmptyArrayStorage_100524190;
    if (1 < uVar6) {
      _Var3 = Swift::ContiguousArray::_allocateBufferUninitialized(minimumCapacity,CVar1);
      *(ulong *)(_Var3.unknown + 0x10) = minimumCapacity;
    }
    local_78 = _Var3.unknown + uVar7;
    uStack_70 = minimumCapacity;
    FUN_100328c94(&local_78,auStack_68,&local_60,_Var2);
    *(undefined8 *)(_Var3.unknown + 0x10) = 0;
    _swift_release(_Var3.unknown);
  }
  else if (uVar6 != 0) {
    FUN_100329784(0,uVar6,1,&local_60);
  }
  *param_1 = uVar4;
  return;
}

