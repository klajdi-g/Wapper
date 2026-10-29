// rea decompile_all
// name: FUN_1004025fc
// address: 0x1004025fc
// body: available
// range: 0x1004025fc-0x10040273b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004025fc(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  ContiguousArray CVar1;
  __int64 _Var2;
  _ContiguousArrayBuffer<undefined> _Var3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong minimumCapacity;
  undefined *local_80;
  ulong uStack_78;
  long local_70;
  ulong uStack_68;
  undefined1 auStack_58 [8];
  
  CVar1.unknown = (undefined *)0x0;
  FUN_10040211c();
  lVar5 = *(long *)(CVar1.unknown + -8);
  uVar4 = *param_1;
  uVar6 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar6 & 1) == 0) {
    FUN_1002652b8();
  }
  uVar7 = *(ulong *)(uVar4 + 0x10);
  uVar6 = (ulong)*(byte *)(lVar5 + 0x50) + 0x20 &
          ((ulong)*(byte *)(lVar5 + 0x50) ^ 0xffffffffffffffff);
  local_70 = uVar4 + uVar6;
  uStack_68 = uVar7;
  _Var2 = Swift::_minimumMergeRunLength(uVar7);
  if (_Var2 < (long)uVar7) {
    minimumCapacity = uVar7 >> 1;
    _Var3.unknown = PTR___swiftEmptyArrayStorage_100524190;
    if (1 < uVar7) {
      _Var3 = Swift::ContiguousArray::_allocateBufferUninitialized(minimumCapacity,CVar1);
      *(ulong *)(_Var3.unknown + 0x10) = minimumCapacity;
    }
    local_80 = _Var3.unknown + uVar6;
    uStack_78 = minimumCapacity;
    FUN_100408204(&local_80,auStack_58,&local_70,_Var2,param_2,param_3);
    *(undefined8 *)(_Var3.unknown + 0x10) = 0;
    _swift_release(_Var3.unknown);
  }
  else if (uVar7 != 0) {
    FUN_100408ee4(0,uVar7,1,&local_70,param_2,param_3);
  }
  *param_1 = uVar4;
  return;
}

