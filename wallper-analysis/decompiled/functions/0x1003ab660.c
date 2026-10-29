// rea decompile_all
// name: FUN_1003ab660
// address: 0x1003ab660
// body: available
// range: 0x1003ab660-0x1003ab7ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003ab660(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  NavigationPath NVar2;
  long lVar3;
  undefined *puVar4;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_60 [8];
  undefined8 local_58;
  
  NVar2 = SwiftUI::NavigationPath::typeMetadataAccessor();
  lVar6 = *(long *)(NVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar6 + 0x40));
  puVar5 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  if (DAT_1005597a0 != -1) {
    _swift_once(&DAT_1005597a0,FUN_10029310c);
  }
  FUN_1002931ec(param_1,param_2);
  SwiftUI::NavigationPath::init();
  lVar3 = 0;
  FUN_1003afcec();
  iVar1 = *(int *)(lVar3 + 0x34);
  (**(code **)(lVar6 + 0x10))(puVar5,(long)puVar5 - extraout_x12,NVar2.unknown);
  puVar4 = &DAT_10055f708;
  FUN_100002f94(&DAT_10055f708,&DAT_100434ee0);
  SwiftUI::State::set_wrappedValue((State *)(param_3 + iVar1),puVar5,puVar4);
  (**(code **)(lVar6 + 8))((long)puVar5 - extraout_x12,NVar2.unknown);
  local_58 = 1;
  SwiftUI::AppStorage::set_wrappedValue();
  return;
}

