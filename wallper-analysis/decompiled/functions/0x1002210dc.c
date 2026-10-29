// rea decompile_all
// name: FUN_1002210dc
// address: 0x1002210dc
// body: available
// range: 0x1002210dc-0x1002212cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002210dc(undefined8 param_1,undefined8 *param_2)

{
  URL UVar1;
  undefined *puVar2;
  URL UVar3;
  undefined7 extraout_var;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  String SVar8;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar7 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar7 + 0x40));
  puVar2 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  lVar5 = (long)(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
          (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar6 = lVar5 - extraout_x12;
  UVar3.unknown = (undefined *)0x0;
  FUN_10040211c();
  UVar3.unknown._0_1_ = Foundation::URL::get_isFileURL(UVar3);
  UVar3.unknown._1_7_ = extraout_var;
  if (UVar3.unknown._0_1_) {
    (**(code **)(lVar7 + 0x38))(lVar6,1,1,UVar1.unknown);
  }
  else {
    UVar3 = Foundation::URL::deletingPathExtension(UVar3);
    SVar8 = Foundation::URL::get_lastPathComponent(UVar3);
    (**(code **)(lVar7 + 8))
              (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar1.unknown);
    FUN_100268ac4(lVar6,SVar8.str,SVar8.bridgeObject);
    _swift_bridgeObjectRelease(SVar8.bridgeObject);
  }
  FUN_100007e1c(lVar6,lVar5,&DAT_100553d90,&DAT_10041bf10);
  pcVar4 = *(code **)(lVar7 + 0x30);
  lVar6 = lVar5;
  (*pcVar4)(lVar5,1,UVar1.unknown);
  if ((int)lVar6 == 1) {
    FUN_100268ac4(param_1,*param_2,param_2[1]);
    lVar6 = lVar5;
    (*pcVar4)(lVar5,1,UVar1.unknown);
    if ((int)lVar6 != 1) {
      FUN_10002a29c(lVar5,&DAT_100553d90,&DAT_10041bf10);
    }
  }
  else {
    (**(code **)(lVar7 + 0x20))(param_1,lVar5,UVar1.unknown);
    (**(code **)(lVar7 + 0x38))(param_1,0,1,UVar1.unknown);
  }
  return;
}

