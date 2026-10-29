// rea decompile_all
// name: FUN_10029b6a4
// address: 0x10029b6a4
// body: available
// range: 0x10029b6a4-0x10029b7af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010029b7a4) */

undefined1  [16]
FUN_10029b6a4(undefined *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  _StringObject _Var2;
  UnsafeBufferPointer<__int8> UVar3;
  void *pvVar4;
  void *pvVar5;
  String SVar6;
  undefined1 auVar7 [16];
  undefined *local_50;
  ulong uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_50 = param_1;
  uStack_48 = param_2;
  local_40 = param_3;
  uStack_38 = param_4;
  FUN_10029c7bc();
  _swift_bridgeObjectRetain(param_4);
  SVar6 = Swift::String::_init
                    (&local_50,PTR___type_metadata_for_Swift_Substring_100523c70,
                     PTR___protocol_witness_table_for_Swift_Substring___Swift_LosslessStringConvertible_in_Swift_100523c88
                     ,param_1);
  pvVar4 = SVar6.bridgeObject;
  puVar1 = local_50;
  if (((ulong)pvVar4 >> 0x3c & 1) != 0) {
    FUN_10029bb2c();
    _swift_bridgeObjectRelease(pvVar4);
    puVar1 = local_50;
    pvVar4 = SVar6.bridgeObject;
  }
  local_50 = SVar6.str;
  pvVar5 = SVar6.bridgeObject;
  if (((ulong)pvVar4 >> 0x3d & 1) == 0) {
    if (((ulong)local_50 >> 0x3c & 1) == 0) {
      pvVar4 = pvVar5;
      _Var2.unknown = local_50;
      local_50 = puVar1;
      UVar3 = Swift::_StringObject::get_sharedUTF8(_Var2);
    }
    else {
      UVar3.unknown = (undefined *)(((ulong)pvVar5 & 0xfffffffffffffff) + 0x20);
      pvVar4 = (void *)((ulong)local_50 & 0xffffffffffff);
      local_50 = puVar1;
    }
    FUN_10029b8b0(UVar3.unknown);
  }
  else {
    pvVar4 = (void *)((ulong)pvVar5 >> 0x38 & 0xf);
    uStack_48 = (ulong)pvVar5 & 0xffffffffffffff;
    UVar3.unknown = (undefined *)&local_50;
    FUN_10029b8b0(UVar3.unknown,pvVar4,param_5);
  }
  _swift_bridgeObjectRelease(pvVar5);
  auVar7._8_8_ = pvVar4;
  auVar7._0_8_ = UVar3.unknown;
  return auVar7;
}

