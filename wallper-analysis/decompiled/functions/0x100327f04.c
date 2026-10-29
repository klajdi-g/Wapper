// rea decompile_all
// name: FUN_100327f04
// address: 0x100327f04
// body: available
// range: 0x100327f04-0x10032804f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100328000 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100327f04(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  EnvironmentObject<undefined> EVar7;
  long unaff_x20;
  undefined8 uVar8;
  
  FUN_10002f154();
  uVar8 = *(undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x14) + 8);
  puVar3 = &DAT_100431470;
  _swift_getKeyPath(&DAT_100431470);
  puVar4 = &DAT_100431498;
  _swift_getKeyPath(&DAT_100431498);
  lVar5 = 0;
  FUN_100038a80();
  Combine::Published::_get_subscript(param_1 + *(int *)(lVar5 + 0x14),uVar8,puVar3,puVar4);
  _swift_release(puVar3);
  _swift_release(puVar4);
  uVar2 = *(undefined1 *)(unaff_x20 + *(int *)(param_2 + 0x18));
  FUN_100279594(0);
  puVar6 = &DAT_100553dd0;
  FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
  EVar7 = SwiftUI::EnvironmentObject::init();
  *(undefined1 *)(param_1 + *(int *)(lVar5 + 0x18)) = uVar2;
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar5 + 0x1c));
  *puVar1 = EVar7.unknown;
  puVar1[1] = puVar6;
  SwiftUI::State::init
            (param_1 + *(int *)(lVar5 + 0x20),EVar7.unknown,
             PTR___type_metadata_for_Swift_Bool_100523b70);
  *(undefined8 *)(param_1 + *(int *)(lVar5 + 0x24)) = 0x3ff199999999999a;
  *(undefined8 *)(param_1 + *(int *)(lVar5 + 0x28)) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + *(int *)(lVar5 + 0x2c)) = 0x4072c00000000000;
  return;
}

