// rea decompile_all
// name: FUN_1000e9124
// address: 0x1000e9124
// body: available
// range: 0x1000e9124-0x1000e93b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000e9124(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  State SVar4;
  State SVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 local_79;
  
  puVar3 = param_2;
  FUN_1000e3a0c();
  lVar11 = puVar3[2];
  _swift_bridgeObjectRelease();
  uStack_138 = param_2[0x12];
  uVar13 = param_2[0x11];
  SVar4.unknown = &DAT_10054ab50;
  local_140 = uVar13;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SVar5.unknown = SVar4.unknown;
  SwiftUI::State::get_wrappedValue(SVar4);
  uVar2 = local_79;
  FUN_1000e3a0c();
  lVar12 = *(long *)(SVar5.unknown + 0x10);
  _swift_bridgeObjectRelease();
  FUN_1000e8f58();
  if (((ulong)SVar5.unknown & 1) == 0) {
    uStack_138 = param_2[0x14];
    uVar13 = param_2[0x13];
    SVar5.unknown = SVar4.unknown;
    local_140 = uVar13;
    SwiftUI::State::get_wrappedValue(SVar4);
    uVar10 = local_79;
  }
  else {
    uVar10 = 0;
  }
  FUN_1000e8f58();
  if (((ulong)SVar5.unknown & 1) == 0) {
    uStack_138 = param_2[0x16];
    uVar13 = param_2[0x15];
    local_140 = uVar13;
    SwiftUI::State::get_wrappedValue(SVar4);
  }
  else {
    local_79 = 1;
  }
  uVar9 = 0x80000001004dd740;
  if (lVar11 != 0) {
    uVar9 = 0xe600000000000000;
  }
  uVar1 = 0xd000000000000010;
  if (lVar11 != 0) {
    uVar1 = 0x657669746341;
  }
  FUN_1000e42b4();
  puVar6 = &DAT_10052a938;
  _swift_allocObject(&DAT_10052a938,200,7);
  uVar14 = param_2[0x10];
  uVar16 = param_2[0x13];
  uVar15 = param_2[0x12];
  *(undefined8 *)(puVar6 + 0x98) = param_2[0x11];
  *(undefined8 *)(puVar6 + 0x90) = uVar14;
  *(undefined8 *)(puVar6 + 0xa8) = uVar16;
  *(undefined8 *)(puVar6 + 0xa0) = uVar15;
  uVar14 = param_2[0x14];
  *(undefined8 *)(puVar6 + 0xb8) = param_2[0x15];
  *(undefined8 *)(puVar6 + 0xb0) = uVar14;
  *(undefined8 *)(puVar6 + 0xc0) = param_2[0x16];
  uVar14 = param_2[8];
  uVar16 = param_2[0xb];
  uVar15 = param_2[10];
  *(undefined8 *)(puVar6 + 0x58) = param_2[9];
  *(undefined8 *)(puVar6 + 0x50) = uVar14;
  *(undefined8 *)(puVar6 + 0x68) = uVar16;
  *(undefined8 *)(puVar6 + 0x60) = uVar15;
  uVar14 = param_2[0xc];
  uVar16 = param_2[0xf];
  uVar15 = param_2[0xe];
  *(undefined8 *)(puVar6 + 0x78) = param_2[0xd];
  *(undefined8 *)(puVar6 + 0x70) = uVar14;
  *(undefined8 *)(puVar6 + 0x88) = uVar16;
  *(undefined8 *)(puVar6 + 0x80) = uVar15;
  uVar14 = *param_2;
  uVar16 = param_2[3];
  uVar15 = param_2[2];
  *(undefined8 *)(puVar6 + 0x18) = param_2[1];
  *(undefined8 *)(puVar6 + 0x10) = uVar14;
  *(undefined8 *)(puVar6 + 0x28) = uVar16;
  *(undefined8 *)(puVar6 + 0x20) = uVar15;
  uVar14 = param_2[4];
  uVar16 = param_2[7];
  uVar15 = param_2[6];
  *(undefined8 *)(puVar6 + 0x38) = param_2[5];
  *(undefined8 *)(puVar6 + 0x30) = uVar14;
  *(undefined8 *)(puVar6 + 0x48) = uVar16;
  *(undefined8 *)(puVar6 + 0x40) = uVar15;
  puVar7 = &DAT_10052a960;
  _swift_allocObject(&DAT_10052a960,200,7);
  uVar14 = param_2[0x10];
  uVar16 = param_2[0x13];
  uVar15 = param_2[0x12];
  *(undefined8 *)(puVar7 + 0x98) = param_2[0x11];
  *(undefined8 *)(puVar7 + 0x90) = uVar14;
  *(undefined8 *)(puVar7 + 0xa8) = uVar16;
  *(undefined8 *)(puVar7 + 0xa0) = uVar15;
  uVar14 = param_2[0x14];
  *(undefined8 *)(puVar7 + 0xb8) = param_2[0x15];
  *(undefined8 *)(puVar7 + 0xb0) = uVar14;
  *(undefined8 *)(puVar7 + 0xc0) = param_2[0x16];
  uVar14 = param_2[8];
  uVar16 = param_2[0xb];
  uVar15 = param_2[10];
  *(undefined8 *)(puVar7 + 0x58) = param_2[9];
  *(undefined8 *)(puVar7 + 0x50) = uVar14;
  *(undefined8 *)(puVar7 + 0x68) = uVar16;
  *(undefined8 *)(puVar7 + 0x60) = uVar15;
  uVar14 = param_2[0xc];
  uVar16 = param_2[0xf];
  uVar15 = param_2[0xe];
  *(undefined8 *)(puVar7 + 0x78) = param_2[0xd];
  *(undefined8 *)(puVar7 + 0x70) = uVar14;
  *(undefined8 *)(puVar7 + 0x88) = uVar16;
  *(undefined8 *)(puVar7 + 0x80) = uVar15;
  uVar14 = *param_2;
  uVar16 = param_2[3];
  uVar15 = param_2[2];
  *(undefined8 *)(puVar7 + 0x18) = param_2[1];
  *(undefined8 *)(puVar7 + 0x10) = uVar14;
  *(undefined8 *)(puVar7 + 0x28) = uVar16;
  *(undefined8 *)(puVar7 + 0x20) = uVar15;
  uVar14 = param_2[4];
  uVar16 = param_2[7];
  uVar15 = param_2[6];
  *(undefined8 *)(puVar7 + 0x38) = param_2[5];
  *(undefined8 *)(puVar7 + 0x30) = uVar14;
  *(undefined8 *)(puVar7 + 0x48) = uVar16;
  *(undefined8 *)(puVar7 + 0x40) = uVar15;
  puVar8 = &DAT_10052a988;
  _swift_allocObject(&DAT_10052a988,200,7);
  uVar14 = param_2[0x10];
  uVar16 = param_2[0x13];
  uVar15 = param_2[0x12];
  *(undefined8 *)(puVar8 + 0x98) = param_2[0x11];
  *(undefined8 *)(puVar8 + 0x90) = uVar14;
  *(undefined8 *)(puVar8 + 0xa8) = uVar16;
  *(undefined8 *)(puVar8 + 0xa0) = uVar15;
  uVar14 = param_2[0x14];
  *(undefined8 *)(puVar8 + 0xb8) = param_2[0x15];
  *(undefined8 *)(puVar8 + 0xb0) = uVar14;
  *(undefined8 *)(puVar8 + 0xc0) = param_2[0x16];
  uVar14 = param_2[8];
  uVar16 = param_2[0xb];
  uVar15 = param_2[10];
  *(undefined8 *)(puVar8 + 0x58) = param_2[9];
  *(undefined8 *)(puVar8 + 0x50) = uVar14;
  *(undefined8 *)(puVar8 + 0x68) = uVar16;
  *(undefined8 *)(puVar8 + 0x60) = uVar15;
  uVar14 = param_2[0xc];
  uVar16 = param_2[0xf];
  uVar15 = param_2[0xe];
  *(undefined8 *)(puVar8 + 0x78) = param_2[0xd];
  *(undefined8 *)(puVar8 + 0x70) = uVar14;
  *(undefined8 *)(puVar8 + 0x88) = uVar16;
  *(undefined8 *)(puVar8 + 0x80) = uVar15;
  uVar14 = *param_2;
  uVar16 = param_2[3];
  uVar15 = param_2[2];
  *(undefined8 *)(puVar8 + 0x18) = param_2[1];
  *(undefined8 *)(puVar8 + 0x10) = uVar14;
  *(undefined8 *)(puVar8 + 0x28) = uVar16;
  *(undefined8 *)(puVar8 + 0x20) = uVar15;
  uVar14 = param_2[4];
  uVar16 = param_2[7];
  uVar15 = param_2[6];
  *(undefined8 *)(puVar8 + 0x38) = param_2[5];
  *(undefined8 *)(puVar8 + 0x30) = uVar14;
  *(undefined8 *)(puVar8 + 0x48) = uVar16;
  *(undefined8 *)(puVar8 + 0x40) = uVar15;
  *param_1 = uVar1;
  param_1[1] = uVar9;
  *(undefined1 *)(param_1 + 2) = uVar2;
  *(bool *)((long)param_1 + 0x11) = lVar12 != 0;
  *(undefined1 *)((long)param_1 + 0x12) = uVar10;
  *(undefined1 *)((long)param_1 + 0x13) = local_79;
  param_1[3] = uVar13;
  param_1[4] = FUN_1000f8368;
  param_1[5] = puVar6;
  param_1[6] = FUN_1000f8388;
  param_1[7] = puVar7;
  param_1[8] = FUN_1000f8390;
  param_1[9] = puVar8;
  FUN_1000f80c4(param_2,&local_140);
  FUN_1000f80c4(param_2,&local_140);
  FUN_1000f80c4(param_2,&local_140);
  return;
}

