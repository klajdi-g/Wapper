// rea decompile_all
// name: FUN_100311dec
// address: 0x100311dec
// body: available
// range: 0x100311dec-0x100312157 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100311dec(void)

{
  undefined *puVar1;
  ContiguousArray CVar2;
  undefined *puVar3;
  ContiguousArray CVar4;
  ID IVar5;
  undefined *extraout_x1;
  undefined *extraout_x1_00;
  undefined *extraout_x1_01;
  void *unaff_x20;
  State local_1d0;
  undefined8 uStack_1c8;
  undefined *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *puStack_90;
  code *local_88;
  undefined *local_80;
  undefined *local_78;
  
  FUN_100311488();
  uStack_1c8 = *(undefined8 *)((long)unaff_x20 + 0x50);
  local_1d0.unknown = *(undefined **)((long)unaff_x20 + 0x48);
  local_a8 = (undefined *)0x0;
  CVar2.unknown = &DAT_10054ba40;
  FUN_100002f94(&DAT_10054ba40,&DAT_100423be0);
  SwiftUI::State::set_wrappedValue(&local_1d0,&local_a8);
  local_78 = PTR___swiftEmptyArrayStorage_100524190;
  Swift::ContiguousArray::_reserveCapacity(3,CVar2);
  puVar3 = &DAT_10053a468;
  _swift_allocObject(&DAT_10053a468,0x140,7);
  _memcpy(puVar3 + 0x10,unaff_x20,0x121);
  *(undefined8 *)(puVar3 + 0x138) = 1;
  puVar1 = PTR___NSConcreteStackBlock_100521110;
  local_88 = thunk_FUN_10031bab4;
  local_a8 = PTR___NSConcreteStackBlock_100521110;
  local_a0 = 0x42000000;
  local_98 = FUN_10016802c;
  puStack_90 = &DAT_10053a480;
  local_80 = puVar3;
  CVar4.unknown = __Block_copy(&local_a8);
  puVar3 = local_80;
  FUN_1003181f4();
  _swift_release(puVar3);
  IVar5 = NSTimer::scheduledTimerWithTimeInterval_repeats_block_
                    ((ID)&_OBJC_CLASS___NSTimer,0x3fb47ae147ae147b,0,CVar4.unknown);
  CVar2.unknown = extraout_x1;
  __Block_release(CVar4.unknown);
  Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique(CVar4);
                    /* WARNING: Load size is inaccurate */
  CVar4.unknown = local_78[0x10];
  Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer((__int64)CVar4.unknown,CVar2);
  Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity(CVar4.unknown,IVar5);
  Swift::ContiguousArray::__endMutation(CVar4);
  puVar3 = &DAT_10053a4b8;
  _swift_allocObject(&DAT_10053a4b8,0x140,7);
  _memcpy(puVar3 + 0x10,unaff_x20,0x121);
  *(undefined8 *)(puVar3 + 0x138) = 2;
  local_88 = thunk_FUN_10031bab4;
  local_a8 = puVar1;
  local_a0 = 0x42000000;
  local_98 = FUN_10016802c;
  puStack_90 = &DAT_10053a4d0;
  local_80 = puVar3;
  CVar4.unknown = __Block_copy(&local_a8);
  puVar3 = local_80;
  FUN_1003181f4();
  _swift_release(puVar3);
  IVar5 = NSTimer::scheduledTimerWithTimeInterval_repeats_block_
                    ((ID)&_OBJC_CLASS___NSTimer,0x3fc1eb851eb851ec,0,CVar4.unknown);
  CVar2.unknown = extraout_x1_00;
  __Block_release(CVar4.unknown);
  Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique(CVar4);
                    /* WARNING: Load size is inaccurate */
  CVar4.unknown = local_78[0x10];
  Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer((__int64)CVar4.unknown,CVar2);
  Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity(CVar4.unknown,IVar5);
  Swift::ContiguousArray::__endMutation(CVar4);
  puVar3 = &DAT_10053a508;
  _swift_allocObject(&DAT_10053a508,0x140,7);
  _memcpy(puVar3 + 0x10,unaff_x20,0x121);
  *(undefined8 *)(puVar3 + 0x138) = 3;
  local_88 = thunk_FUN_10031bab4;
  local_a8 = puVar1;
  local_a0 = 0x42000000;
  local_98 = FUN_10016802c;
  puStack_90 = &DAT_10053a520;
  local_80 = puVar3;
  CVar4.unknown = __Block_copy(&local_a8);
  puVar3 = local_80;
  FUN_1003181f4();
  _swift_release(puVar3);
  IVar5 = NSTimer::scheduledTimerWithTimeInterval_repeats_block_
                    ((ID)&_OBJC_CLASS___NSTimer,0x3fc999999999999a,0,CVar4.unknown);
  CVar2.unknown = extraout_x1_01;
  __Block_release(CVar4.unknown);
  Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique(CVar4);
                    /* WARNING: Load size is inaccurate */
  CVar4.unknown = local_78[0x10];
  Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer((__int64)CVar4.unknown,CVar2);
  Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity(CVar4.unknown,IVar5);
  Swift::ContiguousArray::__endMutation(CVar4);
  uStack_1c8 = *(undefined8 *)((long)unaff_x20 + 0x70);
  local_1d0.unknown = *(undefined **)((long)unaff_x20 + 0x68);
  local_a8 = local_78;
  puVar3 = &DAT_10055bd78;
  FUN_100002f94(&DAT_10055bd78,&DAT_100430b00);
  SwiftUI::State::set_wrappedValue(&local_1d0,&local_a8,puVar3);
  return;
}

