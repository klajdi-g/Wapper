// rea decompile_all
// name: FUN_1000de5d0
// address: 0x1000de5d0
// body: available
// range: 0x1000de5d0-0x1000de743 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000de724 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000de5d0(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_78 [16];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar6 = *param_2;
  uVar7 = uVar6;
  FUN_100265634();
  puVar1 = &DAT_1004237f8;
  local_68 = uVar7;
  _swift_getKeyPath(&DAT_1004237f8);
  uVar7 = param_2[2];
  uStack_58 = param_2[4];
  local_60 = param_2[3];
  puVar2 = &DAT_10052a548;
  _swift_allocObject(&DAT_10052a548,0x38,7);
  uVar8 = *param_2;
  uVar10 = param_2[3];
  uVar9 = param_2[2];
  *(undefined8 *)(puVar2 + 0x18) = param_2[1];
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  *(undefined8 *)(puVar2 + 0x28) = uVar10;
  *(undefined8 *)(puVar2 + 0x20) = uVar9;
  *(undefined8 *)(puVar2 + 0x30) = param_2[4];
  puVar3 = &DAT_10052a570;
  _swift_allocObject(&DAT_10052a570,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_1000e130c;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  _swift_bridgeObjectRetain(uVar6);
  _swift_retain(uVar7);
  FUN_1000087e4(&local_60,auStack_78,&DAT_100551900,&DAT_100423820);
  puVar2 = &DAT_10054e050;
  FUN_100002f94(&DAT_10054e050,&DAT_1004229a0);
  puVar4 = &DAT_1005518e8;
  FUN_100002f94(&DAT_1005518e8,&DAT_1004237e8);
  puVar5 = &DAT_10054e060;
  FUN_1000087a0(&DAT_10054e060,&DAT_10054e050,&DAT_1004229a0,
                PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100523b60);
  FUN_1000e1214();
  (extension_SwiftUI)::SwiftUI::ForEach::_init
            (param_1,puVar5,puVar1,FUN_100069314,puVar3,puVar2,puVar4,puVar5,
             PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100523aa8);
  return;
}

