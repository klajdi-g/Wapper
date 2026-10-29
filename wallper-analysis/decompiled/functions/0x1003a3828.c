// rea decompile_all
// name: FUN_1003a3828
// address: 0x1003a3828
// body: available
// range: 0x1003a3828-0x1003a3b2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1003a3828(void)

{
  int iVar1;
  long lVar2;
  ContiguousArray CVar3;
  undefined *puVar4;
  ContiguousArray CVar5;
  ID IVar6;
  undefined *extraout_x1;
  undefined *extraout_x1_00;
  long unaff_x20;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_b0 [8];
  undefined *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *puStack_90;
  code *local_88;
  undefined *local_80;
  undefined *local_78;
  
  lVar2 = 0;
  FUN_10039c2bc();
  lVar7 = *(long *)(lVar2 + -8);
  lVar9 = *(long *)(lVar7 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  FUN_10039e248();
  iVar1 = *(int *)(lVar2 + 0x24);
  local_a8 = (undefined *)0x0;
  CVar3.unknown = &DAT_10054ba40;
  FUN_100002f94(&DAT_10054ba40,&DAT_100423be0);
  SwiftUI::State::set_wrappedValue((State *)(unaff_x20 + iVar1),&local_a8);
  local_78 = PTR___swiftEmptyArrayStorage_100524190;
  Swift::ContiguousArray::_reserveCapacity(2,CVar3);
  FUN_100029504();
  uVar8 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar10 = uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff);
  uVar11 = lVar9 + uVar10 + 7 & 0xfffffffffffffff8;
  puVar4 = &DAT_10053cca8;
  _swift_allocObject(&DAT_10053cca8,uVar11 + 8,uVar8 | 7);
  FUN_100007e64(auStack_b0 + -(lVar9 + 0xfU & 0xfffffffffffffff0),puVar4 + uVar10,FUN_10039c2bc);
  *(undefined8 *)(puVar4 + uVar11) = 1;
  local_88 = thunk_FUN_1003a63a4;
  local_a8 = PTR___NSConcreteStackBlock_100521110;
  local_a0 = 0x42000000;
  local_98 = FUN_10016802c;
  puStack_90 = &DAT_10053ccc0;
  local_80 = puVar4;
  CVar5.unknown = __Block_copy(&local_a8);
  _swift_release(local_80);
  IVar6 = NSTimer::scheduledTimerWithTimeInterval_repeats_block_
                    ((ID)&_OBJC_CLASS___NSTimer,0x3fb47ae147ae147b,0,CVar5.unknown);
  CVar3.unknown = extraout_x1;
  __Block_release(CVar5.unknown);
  Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique(CVar5);
                    /* WARNING: Load size is inaccurate */
  CVar5.unknown = local_78[0x10];
  Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer((__int64)CVar5.unknown,CVar3);
  Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity(CVar5.unknown,IVar6);
  Swift::ContiguousArray::__endMutation(CVar5);
  FUN_100029504();
  puVar4 = &DAT_10053ccf8;
  _swift_allocObject(&DAT_10053ccf8,uVar11 + 8,uVar8 | 7);
  FUN_100007e64(auStack_b0 + -(lVar9 + 0xfU & 0xfffffffffffffff0),puVar4 + uVar10,FUN_10039c2bc);
  *(undefined8 *)(puVar4 + uVar11) = 2;
  local_88 = thunk_FUN_1003a63a4;
  local_a8 = PTR___NSConcreteStackBlock_100521110;
  local_a0 = 0x42000000;
  local_98 = FUN_10016802c;
  puStack_90 = &DAT_10053cd10;
  local_80 = puVar4;
  CVar5.unknown = __Block_copy(&local_a8);
  _swift_release(local_80);
  IVar6 = NSTimer::scheduledTimerWithTimeInterval_repeats_block_
                    ((ID)&_OBJC_CLASS___NSTimer,0x3fc1eb851eb851ec,0,CVar5.unknown);
  CVar3.unknown = extraout_x1_00;
  __Block_release(CVar5.unknown);
  Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique(CVar5);
                    /* WARNING: Load size is inaccurate */
  CVar5.unknown = local_78[0x10];
  Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer((__int64)CVar5.unknown,CVar3);
  Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity(CVar5.unknown,IVar6);
  Swift::ContiguousArray::__endMutation(CVar5);
  iVar1 = *(int *)(lVar2 + 0x2c);
  local_a8 = local_78;
  puVar4 = &DAT_10055bd78;
  FUN_100002f94(&DAT_10055bd78,&DAT_100430b00);
  SwiftUI::State::set_wrappedValue((State *)(unaff_x20 + iVar1),&local_a8,puVar4);
  return;
}

