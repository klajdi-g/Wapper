// rea decompile_all
// name: FUN_1000c92fc
// address: 0x1000c92fc
// body: available
// range: 0x1000c92fc-0x1000c957b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000c92fc(long param_1)

{
  undefined *puVar1;
  UUID UVar2;
  long lVar3;
  long lVar4;
  Published *pPVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  undefined1 *puVar6;
  DispatchWorkItem *this;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  puVar1 = &DAT_10054ac58;
  FUN_100002f94(&DAT_10054ac58,&DAT_10041bf70);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar1 + -8) + 0x40));
  puVar6 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar7 = (long)puVar6 - extraout_x12;
  puVar1 = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar7 - extraout_x8_00;
  UVar2 = Foundation::UUID::typeMetadataAccessor();
  lVar10 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar10 + 0x40));
  lVar8 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  FUN_1000c8bec();
  FUN_1000087e4(param_1 + *(int *)(lVar3 + 0x1c),lVar9,&DAT_10054a9c8,&DAT_10041bbe0);
  lVar4 = lVar9;
  (**(code **)(lVar10 + 0x30))(lVar9,1,UVar2.unknown);
  if ((int)lVar4 == 1) {
    FUN_10002a29c(lVar9,&DAT_10054a9c8,&DAT_10041bbe0);
  }
  else {
    (**(code **)(lVar10 + 0x20))(lVar8,lVar9,UVar2.unknown);
    if (DAT_100551178 != -1) {
      _swift_once(&DAT_100551178,FUN_1000c7edc);
    }
    lVar4 = DAT_100577c10;
    this = *(DispatchWorkItem **)(DAT_100577c10 + _TtC7Wallper19PlaylistToastCenter::dismissWork);
    if (this != (DispatchWorkItem *)0x0) {
      _swift_retain(this);
      Dispatch::DispatchWorkItem::cancel(this);
      _swift_release(this);
    }
    (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar7,1,1,lVar3);
    pPVar5 = (Published *)&DAT_100422d28;
    _swift_getKeyPath(&DAT_100422d28);
    puVar1 = &DAT_100422d50;
    _swift_getKeyPath(&DAT_100422d50);
    FUN_1000087e4(lVar7,puVar6,&DAT_10054ac58,&DAT_10041bf70);
    _swift_retain(lVar4);
    Combine::Published::_set_subscript(pPVar5,puVar6,lVar4,pPVar5,puVar1);
    FUN_10002a29c(lVar7,&DAT_10054ac58,&DAT_10041bf70);
    FUN_1000ccbfc(lVar8);
    (**(code **)(lVar10 + 8))(lVar8,UVar2.unknown);
  }
  return;
}

