// rea decompile_all
// name: FUN_10029dc60
// address: 0x10029dc60
// body: available
// range: 0x10029dc60-0x10029de3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10029dc60(void)

{
  undefined *puVar1;
  long lVar2;
  TaskPriority TVar3;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  puVar1 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_70 + -extraout_x8;
  lVar2 = 0;
  FUN_1002a473c();
  lVar8 = *(long *)(lVar2 + -8);
  lVar6 = *(long *)(lVar8 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar5 = (long)puVar4 - (lVar6 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar2 = lVar5 - extraout_x12;
  if ((DAT_100559c28 & 1) == 0) {
    if (DAT_100559c18 != -1) {
      _swift_once(&DAT_100559c18,FUN_10029d6b0);
    }
    _swift_beginAccess(&DAT_100559c20,auStack_68,0,0);
    if (*(long *)(DAT_100559c20 + 0x10) != 0) {
      uVar7 = (ulong)*(byte *)(lVar8 + 0x50);
      uVar9 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
      TVar3.unknown = (undefined *)(DAT_100559c20 + uVar9);
      FUN_1002a4774(TVar3.unknown,lVar2);
      DAT_100559c28 = 1;
      Swift::TaskPriority::get_utility(TVar3);
      TVar3 = Swift::TaskPriority::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar3.unknown + -8) + 0x38))(puVar4,0,1,TVar3.unknown);
      FUN_1002a4774(lVar2,lVar5);
      puVar1 = &DAT_100537740;
      _swift_allocObject(&DAT_100537740,uVar9 + lVar6,uVar7 | 7);
      *(undefined8 *)(puVar1 + 0x10) = 0;
      *(undefined8 *)(puVar1 + 0x18) = 0;
      FUN_1002a4818(lVar5,puVar1 + uVar9);
      FUN_100176d50(0,0,puVar4,&DAT_10042dde0,puVar1);
      _swift_release();
      FUN_10002a29c(puVar4,&DAT_100561090,&DAT_10041c870);
      FUN_1002a47b8(lVar2);
    }
  }
  return;
}

