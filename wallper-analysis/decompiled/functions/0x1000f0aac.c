// rea decompile_all
// name: FUN_1000f0aac
// address: 0x1000f0aac
// body: available
// range: 0x1000f0aac-0x1000f0be7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000f0aac(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  URL UVar3;
  undefined1 *puVar4;
  URL UVar5;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  
  puVar2 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &stack0xffffffffffffffb0 + -extraout_x8;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar8 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar8 + 0x40));
  puVar7 = puVar6 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_1000087e4(param_1,puVar6,&DAT_100553d90,&DAT_10041bf10);
  puVar4 = puVar6;
  (**(code **)(lVar8 + 0x30))(puVar6,1,UVar3.unknown);
  if ((int)puVar4 == 1) {
    FUN_10002a29c(puVar6,&DAT_100553d90,&DAT_10041bf10);
  }
  else {
    UVar5.unknown = puVar7;
    (**(code **)(lVar8 + 0x20))(puVar7,puVar6,UVar3.unknown);
    bVar1 = Foundation::URL::get_isFileURL(UVar5);
    if (bVar1) {
      FUN_1000f13e0(puVar7);
    }
    (**(code **)(lVar8 + 8))(puVar7,UVar3.unknown);
  }
  return;
}

