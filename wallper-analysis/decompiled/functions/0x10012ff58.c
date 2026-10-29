// rea decompile_all
// name: FUN_10012ff58
// address: 0x10012ff58
// body: available
// range: 0x10012ff58-0x100130053 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10012ff58(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  Date DVar2;
  undefined8 uVar3;
  long extraout_x8;
  Date DVar4;
  long lVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar5 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar5 + 0x40));
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _swift_bridgeObjectRelease(uVar3);
  DVar4.unknown = *(undefined **)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = PTR___swiftEmptyArrayStorage_100524190;
  _swift_bridgeObjectRetain(param_3);
  _swift_bridgeObjectRelease();
  Foundation::Date::get_distantPast(DVar4);
  lVar1 = _TtC7Wallper23LockScreenRepairMonitor::pausedUntil;
  _swift_beginAccess(param_1 + _TtC7Wallper23LockScreenRepairMonitor::pausedUntil,auStack_68,0x21,0)
  ;
  (**(code **)(lVar5 + 0x28))
            (param_1 + lVar1,auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),DVar2.unknown);
  _swift_endAccess(auStack_68);
  FUN_100130054((param_4 ^ 0xffffffff) & 1);
  FUN_1001312e0();
  return;
}

