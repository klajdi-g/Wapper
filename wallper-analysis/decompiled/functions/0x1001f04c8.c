// rea decompile_all
// name: FUN_1001f04c8
// address: 0x1001f04c8
// body: available
// range: 0x1001f04c8-0x1001f05af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1001f04c8(long param_1,ContiguousArray param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ContiguousArray CVar3;
  long lVar4;
  ContiguousArray CVar5;
  undefined8 local_90;
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [32];
  undefined *local_48;
  
  local_48 = PTR___swiftEmptyArrayStorage_100524190;
  lVar4 = *(__int64 *)(param_1 + 0x10);
  Swift::ContiguousArray::_reserveCapacity(lVar4,param_2);
  puVar1 = PTR___type_metadata_for_Any_100524178;
  while( true ) {
    if (lVar4 == 0) {
      return local_48;
    }
    param_1 = param_1 + 0x20;
    FUN_1000280d4(param_1,auStack_68);
    FUN_100007d88(auStack_68,auStack_88);
    uVar2 = 0;
    FUN_100008068(0);
    CVar3.unknown = auStack_88;
    CVar5.unknown = (undefined *)&local_90;
    _swift_dynamicCast(&local_90,CVar3.unknown,puVar1 + 8,uVar2,6);
    uVar2 = local_90;
    if (((ulong)CVar5.unknown & 1) == 0) break;
    Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique(CVar5);
                    /* WARNING: Load size is inaccurate */
    CVar5.unknown = local_48[0x10];
    Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer((__int64)CVar5.unknown,CVar3);
    Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity(CVar5.unknown,uVar2);
    Swift::ContiguousArray::__endMutation(CVar5);
    lVar4 = lVar4 + -1;
  }
  _swift_release(local_48);
  return (undefined *)0x0;
}

