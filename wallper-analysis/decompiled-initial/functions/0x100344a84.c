// rea decompile_all
// name: FUN_100344a84
// address: 0x100344a84
// body: available
// range: 0x100344a84-0x100344c6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100344c1c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100344a84(undefined8 *param_1,char *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  State SVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 local_b0;
  undefined1 local_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  cVar1 = *param_2;
  if (cVar1 == '\0') {
    local_b0 = 0xe300000000000000;
    uVar5 = 0xeb000000006c6c69;
    uVar7 = 0x662e7265646c6f66;
    uVar6 = 0x6c6c41;
  }
  else if (cVar1 == '\x01') {
    uVar5 = 0x80000001004e5ed0;
    local_b0 = 0xe500000000000000;
    uVar6 = 0x6c61636f4c;
    uVar7 = 0xd000000000000012;
  }
  else {
    local_b0 = 0xe500000000000000;
    uVar6 = 0x64656b694c;
    uVar5 = 0xea00000000006c6c;
    uVar7 = 0x69662e7472616568;
  }
  uStack_68 = param_3[5];
  uStack_70 = param_3[4];
  uStack_78 = param_3[5];
  local_80 = param_3[4];
  SVar3.unknown = &DAT_10055d318;
  FUN_100002f94(&DAT_10055d318,&DAT_1004328e8);
  SwiftUI::State::get_wrappedValue(SVar3);
  bVar2 = (char)local_90 == cVar1;
  uStack_78 = param_3[1];
  local_80 = *param_3;
  uStack_88 = param_3[3];
  local_90 = param_3[2];
  puVar4 = &DAT_10053b660;
  _swift_allocObject(&DAT_10053b660,0x41,7);
  uVar8 = *param_3;
  uVar10 = param_3[3];
  uVar9 = param_3[2];
  *(undefined8 *)(puVar4 + 0x18) = param_3[1];
  *(undefined8 *)(puVar4 + 0x10) = uVar8;
  *(undefined8 *)(puVar4 + 0x28) = uVar10;
  *(undefined8 *)(puVar4 + 0x20) = uVar9;
  uVar8 = param_3[4];
  *(undefined8 *)(puVar4 + 0x38) = param_3[5];
  *(undefined8 *)(puVar4 + 0x30) = uVar8;
  puVar4[0x40] = cVar1;
  FUN_1000087e4(&local_80,local_a0,&DAT_100551900,&DAT_100423820);
  FUN_1000087e4(&local_90,local_a0,&DAT_10055d310,&DAT_1004328e0);
  FUN_1000087e4(&uStack_70,local_a0,&DAT_10055d318,&DAT_1004328e8);
  SwiftUI::State::init(local_a0,puVar4,PTR___type_metadata_for_Swift_Bool_100523b70);
  *param_1 = uVar6;
  param_1[1] = local_b0;
  param_1[2] = uVar7;
  param_1[3] = uVar5;
  *(bool *)(param_1 + 4) = bVar2;
  param_1[5] = FUN_100345660;
  param_1[6] = puVar4;
  *(undefined1 *)(param_1 + 7) = local_a0[0];
  param_1[8] = local_98;
  return;
}

