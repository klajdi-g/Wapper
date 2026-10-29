// rea decompile_all
// name: FUN_1000f0be8
// address: 0x1000f0be8
// body: available
// range: 0x1000f0be8-0x1000f0d93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000f0be8(undefined8 param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  undefined *puVar3;
  URL UVar4;
  long lVar5;
  URL UVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 local_70;
  undefined1 local_61;
  
  puVar3 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)&local_70 - extraout_x8;
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar9 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar9 + 0x40));
  puVar8 = (undefined *)(lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  lVar5 = 0;
  FUN_1000fa84c();
  iVar1 = *(int *)(lVar5 + 0x1c);
  local_61 = 0;
  puVar3 = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::set_wrappedValue((State *)(param_2 + iVar1),&local_61,puVar3);
  iVar1 = *(int *)(lVar5 + 0x18);
  local_70 = 0;
  puVar3 = &DAT_10054eed8;
  FUN_100002f94(&DAT_10054eed8,&DAT_1004249f0);
  SwiftUI::State::set_wrappedValue((State *)(param_2 + iVar1),&local_70,puVar3);
  FUN_1000087e4(param_2,lVar7,&DAT_100553d90,&DAT_10041bf10);
  lVar5 = lVar7;
  (**(code **)(lVar9 + 0x30))(lVar7,1,UVar4.unknown);
  if ((int)lVar5 == 1) {
    FUN_10002a29c(lVar7,&DAT_100553d90,&DAT_10041bf10);
  }
  else {
    UVar6.unknown = puVar8;
    (**(code **)(lVar9 + 0x20))(puVar8,lVar7,UVar4.unknown);
    bVar2 = Foundation::URL::get_isFileURL(UVar6);
    if (bVar2) {
      FUN_1000f13e0(puVar8);
    }
    (**(code **)(lVar9 + 8))(puVar8,UVar4.unknown);
  }
  return;
}

