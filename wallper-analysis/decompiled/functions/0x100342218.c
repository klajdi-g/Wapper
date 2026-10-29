// rea decompile_all
// name: FUN_100342218
// address: 0x100342218
// body: available
// range: 0x100342218-0x100342323 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_100342218(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  RoundedCornerStyle RVar6;
  RoundedRectangle RVar7;
  undefined7 extraout_var;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar8 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  _swift_retain();
  _swift_release(uVar8);
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  uVar8 = *(undefined8 *)(param_2 + 0x18);
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar10;
  _swift_retain(uVar8);
  _swift_release(uVar9);
  param_1[0x20] = param_2[0x20];
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  _swift_retain();
  _swift_release(uVar8);
  uVar9 = *(undefined8 *)(param_2 + 0x30);
  uVar3 = param_2[0x38];
  FUN_100047ac4(uVar9,uVar3);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar9;
  uVar4 = param_1[0x38];
  param_1[0x38] = uVar3;
  FUN_100047b2c(uVar8,uVar4);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x28));
  *puVar1 = *puVar2;
  puVar1[1] = puVar2[1];
  RVar7 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
  iVar5 = *(int *)(RVar7.unknown + 0x14);
  RVar6 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,RVar6.value) + -8) + 0x18))
            ((undefined1 *)((long)puVar1 + (long)iVar5),(undefined1 *)((long)puVar2 + (long)iVar5),
             CONCAT71(extraout_var,RVar6.value));
  return param_1;
}

