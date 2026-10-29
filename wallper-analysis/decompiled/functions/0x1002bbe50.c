// rea decompile_all
// name: FUN_1002bbe50
// address: 0x1002bbe50
// body: available
// range: 0x1002bbe50-0x1002bbf97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002bbe50(long param_1,undefined8 param_2)

{
  ulong uVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  String SVar8;
  undefined1 local_98 [16];
  undefined1 local_88 [24];
  undefined1 auStack_70 [8];
  undefined1 local_68 [24];
  undefined1 auStack_48 [8];
  void *pvVar7;
  
  auVar3[0xf] = 0;
  auVar3._0_15_ = local_98._1_15_;
  local_98 = auVar3 << 8;
  puVar4 = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::set_wrappedValue((State *)(param_1 + 0x30),local_98,puVar4);
  _swift_getErrorValue(param_2,auStack_48,local_68);
  SVar8 = (extension_Foundation)::Swift::Error::get_localizedDescription();
  pvVar7 = SVar8.bridgeObject;
  _swift_bridgeObjectRelease(pvVar7);
  uVar1 = (ulong)SVar8.str & 0xffffffffffff;
  if (((ulong)pvVar7 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)pvVar7 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    SVar8.bridgeObject = (void *)0x80000001004e3f60;
    SVar8.str = (char *)0xd00000000000002f;
  }
  else {
    _swift_getErrorValue(param_2,auStack_70,local_88);
    SVar8 = (extension_Foundation)::Swift::Error::get_localizedDescription();
  }
  lVar5 = 0;
  FUN_1002bc1b0();
  iVar2 = *(int *)(lVar5 + 0x2c);
  puVar6 = &DAT_10054dd08;
  local_98 = (undefined1  [16])SVar8;
  FUN_100002f94(&DAT_10054dd08,&DAT_10041ea50);
  SwiftUI::State::set_wrappedValue((State *)(param_1 + iVar2),local_98,puVar6);
  local_98[0] = 1;
  SwiftUI::State::set_wrappedValue((State *)(param_1 + *(int *)(lVar5 + 0x28)),local_98,puVar4);
  return;
}

