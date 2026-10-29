// rea decompile_all
// name: FUN_1003c6c98
// address: 0x1003c6c98
// body: available
// range: 0x1003c6c98-0x1003c6def inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003c6d74 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003c6c98(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  long param_5)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  State SVar10;
  long unaff_x20;
  undefined1 local_88;
  undefined7 uStack_87;
  undefined8 local_80;
  undefined1 local_78;
  undefined1 local_70;
  undefined8 local_68;
  
  puVar1 = (undefined1 *)(unaff_x20 + *(int *)(param_5 + 0x78));
  local_70 = *puVar1;
  local_68 = *(undefined8 *)(puVar1 + 8);
  _swift_bridgeObjectRetain(param_3);
  SVar10.unknown = &DAT_100560308;
  FUN_100002f94(&DAT_100560308,&DAT_100435de8);
  SwiftUI::State::get_projectedValue(SVar10);
  uVar9 = local_78;
  uVar6 = local_80;
  uVar2 = CONCAT71(uStack_87,local_88);
  puVar1 = (undefined1 *)(unaff_x20 + *(int *)(param_5 + 0x7c));
  local_70 = *puVar1;
  local_68 = *(undefined8 *)(puVar1 + 8);
  SVar10.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_projectedValue(SVar10);
  uVar7 = local_80;
  puVar4 = PTR___type_metadata_for_Swift_Bool_100523b70;
  uVar3 = CONCAT71(uStack_87,local_88);
  local_70 = 0;
  SwiftUI::State::init(&local_88,SVar10.unknown,PTR___type_metadata_for_Swift_Bool_100523b70);
  uVar8 = local_80;
  uVar5 = local_88;
  local_70 = 0;
  SwiftUI::State::init(&local_88,SVar10.unknown,puVar4);
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 2) = param_4;
  param_1[3] = uVar2;
  param_1[4] = uVar6;
  *(undefined1 *)(param_1 + 5) = uVar9;
  param_1[6] = uVar3;
  param_1[7] = uVar7;
  *(undefined1 *)(param_1 + 8) = local_78;
  *(undefined1 *)(param_1 + 9) = uVar5;
  param_1[10] = uVar8;
  *(undefined1 *)(param_1 + 0xb) = local_88;
  param_1[0xc] = local_80;
  return;
}

