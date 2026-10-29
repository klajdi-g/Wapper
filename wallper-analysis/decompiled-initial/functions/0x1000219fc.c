// rea decompile_all
// name: FUN_1000219fc
// address: 0x1000219fc
// body: available
// range: 0x1000219fc-0x100021b2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100021b28 to 0x1004149fc _swift_retain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000219fc(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 uVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  Source SVar8;
  Source SVar9;
  undefined8 uVar10;
  undefined8 *unaff_x20;
  
  uVar2 = *unaff_x20;
  puVar3 = (undefined *)unaff_x20[1];
  uVar4 = *(undefined1 *)(unaff_x20 + 2);
  uVar10 = unaff_x20[3];
  puVar6 = &DAT_100525c20;
  _swift_allocObject(&DAT_100525c20,0x30,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar2;
  *(undefined **)(puVar6 + 0x18) = puVar3;
  puVar6[0x20] = uVar4;
  *(undefined8 *)(puVar6 + 0x28) = uVar10;
  puVar7 = &DAT_10054b6c0;
  FUN_100002f94(&DAT_10054b6c0,&DAT_10041cb98);
  (**(code **)(*(long *)(puVar7 + -8) + 0x10))(param_1,param_2,puVar7);
  puVar7 = &DAT_10054b6c8;
  FUN_100002f94(&DAT_10054b6c8,&DAT_10041cba0);
  iVar5 = *(int *)(puVar7 + 0x24);
  *(undefined8 *)(param_1 + iVar5) = FUN_10002b200;
  ((undefined8 *)(param_1 + iVar5))[1] = puVar6;
  _swift_retain(uVar10);
  SVar8.unknown = puVar3;
  _swift_bridgeObjectRetain();
  SVar9 = (extension_SwiftUI)::Anchor::Source::_get_bounds(SVar8);
  puVar6 = &DAT_100525c48;
  _swift_allocObject(&DAT_100525c48,0x30,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar2;
  *(undefined **)(puVar6 + 0x18) = puVar3;
  puVar6[0x20] = uVar4;
  *(undefined8 *)(puVar6 + 0x28) = uVar10;
  puVar7 = &DAT_10054b6d0;
  FUN_100002f94(&DAT_10054b6d0,&DAT_10041cba8);
  puVar1 = (undefined8 *)(param_1 + *(int *)(puVar7 + 0x24));
  *puVar1 = SVar9.unknown;
  puVar1[1] = FUN_10002b284;
  puVar1[2] = puVar6;
  _swift_bridgeObjectRetain(puVar3);
  _swift_retain(uVar10);
  return;
}

