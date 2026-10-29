// rea decompile_all
// name: FUN_1000c7edc
// address: 0x1000c7edc
// body: available
// range: 0x1000c7edc-0x1000c8003 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000c7fc0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000c7edc(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x12;
  long lVar5;
  
  puVar2 = &DAT_10054ac58;
  FUN_100002f94(&DAT_10054ac58,&DAT_10041bf70);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar5 = (long)(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
          extraout_x12;
  lVar3 = 0;
  FUN_1000c82fc();
  _swift_allocObject();
  lVar1 = _TtC7Wallper19PlaylistToastCenter::_current;
  lVar4 = 0;
  FUN_1000c8bec();
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar5,1,1,lVar4);
  FUN_1000087e4(lVar5,&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                &DAT_10054ac58,&DAT_10041bf70);
  Combine::Published::init(lVar3 + lVar1,lVar4,puVar2);
  FUN_10002a29c(lVar5,&DAT_10054ac58,&DAT_10041bf70);
  *(undefined8 *)(lVar3 + _TtC7Wallper19PlaylistToastCenter::dismissWork) = 0;
  DAT_100577c10 = lVar3;
  return;
}

