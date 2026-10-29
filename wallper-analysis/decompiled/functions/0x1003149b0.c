// rea decompile_all
// name: FUN_1003149b0
// address: 0x1003149b0
// body: available
// range: 0x1003149b0-0x100314ae3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100314a9c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003149b0(long *param_1,long *param_2,void *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  _StringGuts _Var3;
  bool bVar4;
  State SVar5;
  undefined *puVar6;
  undefined8 local_190;
  long lStack_188;
  undefined8 local_180;
  undefined1 local_60;
  undefined7 uStack_5f;
  _StringGuts _Stack_58;
  
  puVar1 = (undefined *)*param_2;
  puVar2 = (undefined *)param_2[1];
  lStack_188 = *(long *)((long)param_3 + 0x18);
  local_190 = *(undefined8 *)((long)param_3 + 0x10);
  local_180 = *(undefined8 *)((long)param_3 + 0x20);
  _swift_bridgeObjectRetain(puVar2);
  SVar5.unknown = &DAT_10054dd08;
  FUN_100002f94(&DAT_10054dd08,&DAT_10041ea50);
  SwiftUI::State::get_wrappedValue(SVar5);
  _Var3.unknown._1_7_ = uStack_5f;
  _Var3.unknown._0_1_ = local_60;
  if (_Var3.unknown == puVar1 && _Stack_58.unknown == puVar2) {
    bVar4 = true;
  }
  else {
    bVar4 = Swift::_stringCompareWithSmolCheck
                      (_Var3,_Stack_58,(_StringComparisonResult)(__int8)puVar1);
  }
  _swift_bridgeObjectRelease(_Stack_58.unknown);
  puVar6 = &DAT_10053a760;
  _swift_allocObject(&DAT_10053a760,0x148,7);
  _memcpy(puVar6 + 0x10,param_3,0x121);
  *(undefined **)(puVar6 + 0x138) = puVar1;
  *(undefined **)(puVar6 + 0x140) = puVar2;
  local_60 = 0;
  _swift_bridgeObjectRetain(puVar2);
  FUN_1003181f4(param_3,&local_190);
  SwiftUI::State::init(&local_190,puVar6,PTR___type_metadata_for_Swift_Bool_100523b70);
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar2;
  *(bool *)(param_1 + 2) = bVar4;
  param_1[3] = (long)FUN_10031cf94;
  param_1[4] = (long)puVar6;
  *(undefined1 *)(param_1 + 5) = (undefined1)local_190;
  param_1[6] = lStack_188;
  return;
}

