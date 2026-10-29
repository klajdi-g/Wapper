// rea decompile_all
// name: FUN_1003a94e8
// address: 0x1003a94e8
// body: available
// range: 0x1003a94e8-0x1003a95c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003a94e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  EnvironmentObject<undefined> EVar4;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  FUN_100279594(0);
  puVar3 = &DAT_100553dd0;
  FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
  _swift_bridgeObjectRetain(uVar2);
  EVar4 = SwiftUI::EnvironmentObject::init();
  FUN_1000f78e4(&local_f8,uVar1,uVar2,EVar4.unknown,puVar3);
  param_1[0x11] = uStack_70;
  param_1[0x10] = local_78;
  param_1[0x13] = uStack_60;
  param_1[0x12] = local_68;
  param_1[0x15] = uStack_50;
  param_1[0x14] = local_58;
  param_1[0x16] = local_48;
  param_1[9] = uStack_b0;
  param_1[8] = local_b8;
  param_1[0xb] = uStack_a0;
  param_1[10] = local_a8;
  param_1[0xd] = uStack_90;
  param_1[0xc] = local_98;
  param_1[0xf] = uStack_80;
  param_1[0xe] = local_88;
  param_1[1] = uStack_f0;
  *param_1 = local_f8;
  param_1[3] = uStack_e0;
  param_1[2] = local_e8;
  param_1[5] = uStack_d0;
  param_1[4] = local_d8;
  param_1[7] = uStack_c0;
  param_1[6] = local_c8;
  return;
}

