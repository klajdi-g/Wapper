// rea decompile_all
// name: FUN_1000af0f8
// address: 0x1000af0f8
// body: available
// range: 0x1000af0f8-0x1000af1f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000af184 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000af0f8(ulong *param_1,undefined8 param_2,undefined *param_3,ulong param_4,ulong param_5,
                  ulong param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *local_98;
  undefined *local_90;
  ulong local_88;
  undefined8 local_80;
  bool local_78;
  ulong local_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  undefined1 local_50;
  
  uVar1 = param_5 & 0xffffffffffff;
  if ((param_6 & 0x2000000000000000) != 0) {
    uVar1 = param_6 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    local_98 = (undefined *)((ulong)local_98 & 0xffffffffffffff00);
    SwiftUI::State::init(&local_70,param_4,PTR___type_metadata_for_Swift_Bool_100523b70);
    local_90 = (undefined *)(local_70 & 0xff);
    local_88 = uStack_68;
    local_80 = 0;
    local_98 = param_3;
  }
  else {
    local_70 = param_5;
    uStack_68 = param_6;
    FUN_100026df4();
    _swift_bridgeObjectRetain(param_6);
    puVar2 = PTR___type_metadata_for_Swift_String_100523a98;
    local_98 = (undefined *)SwiftUI::Text::_init();
    local_88 = param_4 & 0xff;
    local_90 = puVar2;
    local_80 = param_7;
  }
  local_78 = uVar1 != 0;
  FUN_1000b4758();
  (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)&local_98);
  param_1[1] = uStack_68;
  *param_1 = local_70;
  param_1[3] = uStack_58;
  param_1[2] = uStack_60;
  *(undefined1 *)(param_1 + 4) = local_50;
  return;
}

