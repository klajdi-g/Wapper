// rea decompile_all
// name: FUN_1003b9868
// address: 0x1003b9868
// body: available
// range: 0x1003b9868-0x1003b99c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003b98b0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003b9868(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ObservedObject<undefined> OVar8;
  undefined1 local_78;
  undefined7 uStack_77;
  undefined8 local_70;
  undefined8 local_68;
  
  SwiftUI::State::init(&local_78,param_2,PTR___type_metadata_for_Swift_String_100523a98);
  uVar4 = local_70;
  puVar7 = PTR___type_metadata_for_Swift_Bool_100523b70;
  uVar1 = CONCAT71(uStack_77,local_78);
  SwiftUI::State::init(&local_78,param_2,PTR___type_metadata_for_Swift_Bool_100523b70);
  uVar5 = local_70;
  uVar3 = local_78;
  SwiftUI::State::init(&local_78,param_2,puVar7);
  if (DAT_100556f80 != -1) {
    _swift_once(&DAT_100556f80,FUN_1001dd604);
  }
  uVar2 = DAT_100577cf0;
  uVar6 = 0;
  FUN_1001eba34();
  puVar7 = &DAT_100553e00;
  FUN_1000036d0(&DAT_100553e00,FUN_1001eba34,&TargetProtocolConformanceDescriptor_10042add0);
  _swift_retain(uVar2);
  OVar8 = SwiftUI::ObservedObject::init(puVar7,uVar6,puVar7);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  param_1[5] = param_7;
  param_1[6] = uVar1;
  param_1[7] = uVar4;
  param_1[8] = local_68;
  *(undefined1 *)(param_1 + 9) = uVar3;
  param_1[10] = uVar5;
  *(undefined1 *)(param_1 + 0xb) = local_78;
  param_1[0xc] = local_70;
  param_1[0xd] = OVar8.unknown;
  param_1[0xe] = uVar6;
  return;
}

