// rea decompile_all
// name: FUN_100300a9c
// address: 0x100300a9c
// body: available
// range: 0x100300a9c-0x100300bc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100300a9c(ulong *param_1)

{
  ContiguousArray CVar1;
  ContiguousArray CVar2;
  _ContiguousArrayBuffer<undefined> _Var3;
  ulong uVar4;
  ulong uVar5;
  undefined *local_68;
  ulong uStack_60;
  undefined1 auStack_58 [8];
  long local_50;
  ulong uStack_48;
  
  uVar4 = *param_1;
  uVar5 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  *param_1 = uVar4;
  if ((uVar5 & 1) == 0) {
    FUN_100265330();
    *param_1 = uVar4;
  }
  uVar5 = *(ulong *)(uVar4 + 0x10);
  local_50 = uVar4 + 0x20;
  uStack_48 = uVar5;
  CVar1.unknown = (undefined *)Swift::_minimumMergeRunLength(uVar5);
  if ((long)CVar1.unknown < (long)uVar5) {
    uVar4 = uVar5 >> 1;
    _Var3.unknown = PTR___swiftEmptyArrayStorage_100524190;
    if (1 < uVar5) {
      CVar2.unknown = (undefined *)0x0;
      FUN_100044230(0,&DAT_100558e50,&PTR__OBJC_CLASS___NSScreen_10053f9b0);
      _Var3 = Swift::ContiguousArray::_allocateBufferUninitialized(uVar4,CVar2);
      *(ulong *)(_Var3.unknown + 0x10) = uVar4;
    }
    local_68 = _Var3.unknown + 0x20;
    CVar2.unknown = (undefined *)&local_68;
    uStack_60 = uVar4;
    FUN_10030b658(CVar2.unknown,auStack_58,&local_50,CVar1.unknown);
    *(undefined8 *)(_Var3.unknown + 0x10) = 0;
    Swift::ContiguousArray::__endMutation(CVar2);
    _swift_release();
    CVar1.unknown = _Var3.unknown;
  }
  else if (uVar5 != 0) {
    CVar1.unknown = (undefined *)0x0;
    FUN_10030bb04(0,uVar5,1,&local_50);
  }
  Swift::ContiguousArray::__endMutation(CVar1);
  return;
}

