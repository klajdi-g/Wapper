// rea decompile_all
// name: FUN_10010b988
// address: 0x10010b988
// body: available
// range: 0x10010b988-0x10010bac7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010010b9f0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10010b988(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ObservedObject<undefined> OVar9;
  undefined1 local_80;
  undefined7 uStack_7f;
  undefined8 local_78;
  
  uVar7 = 0;
  FUN_100125cc0();
  puVar8 = &DAT_100551cb0;
  FUN_1000036d0(&DAT_100551cb0,FUN_100125cc0,&TargetProtocolConformanceDescriptor_1004268e8);
  OVar9 = SwiftUI::ObservedObject::init(puVar8,uVar7,puVar8);
  SwiftUI::State::init(&local_80,OVar9.unknown,PTR___type_metadata_for_Swift_Double_100523b90);
  uVar4 = local_78;
  puVar8 = PTR___type_metadata_for_Swift_Bool_100523b70;
  uVar1 = CONCAT71(uStack_7f,local_80);
  SwiftUI::State::init(&local_80,OVar9.unknown,PTR___type_metadata_for_Swift_Bool_100523b70);
  uVar5 = local_78;
  uVar2 = local_80;
  SwiftUI::State::init(&local_80,OVar9.unknown,puVar8);
  uVar6 = local_78;
  uVar3 = local_80;
  SwiftUI::State::init(&local_80,OVar9.unknown,puVar8);
  *param_1 = OVar9.unknown;
  param_1[1] = uVar7;
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = uVar1;
  param_1[5] = uVar4;
  *(undefined1 *)(param_1 + 6) = uVar2;
  param_1[7] = uVar5;
  *(undefined1 *)(param_1 + 8) = uVar3;
  param_1[9] = uVar6;
  *(undefined1 *)(param_1 + 10) = local_80;
  param_1[0xb] = local_78;
  return;
}

