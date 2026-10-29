// rea decompile_all
// name: FUN_1000851f0
// address: 0x1000851f0
// body: available
// range: 0x1000851f0-0x1000853d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000851f0(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  State SVar6;
  ulong uVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_d0 [8];
  char local_c8 [72];
  undefined1 local_80;
  undefined8 local_78;
  
  lVar3 = 0;
  FUN_100095ec0();
  lVar9 = *(long *)(lVar3 + -8);
  lVar8 = *(long *)(lVar9 + 0x40);
  lVar4 = lVar3;
  (*(code *)PTR____chkstk_darwin_100521118)();
  uVar2 = *(undefined1 *)(unaff_x20 + *(int *)(lVar4 + 0x18));
  FUN_100029504();
  uVar7 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar10 = uVar7 + 0x58 & (uVar7 ^ 0xffffffffffffffff);
  puVar5 = &DAT_100528640;
  _swift_allocObject(&DAT_100528640,uVar10 + lVar8,uVar7 | 7);
  uVar11 = param_2[4];
  uVar14 = param_2[7];
  uVar13 = param_2[6];
  *(undefined8 *)(puVar5 + 0x38) = param_2[5];
  *(undefined8 *)(puVar5 + 0x30) = uVar11;
  *(undefined8 *)(puVar5 + 0x48) = uVar14;
  *(undefined8 *)(puVar5 + 0x40) = uVar13;
  *(undefined8 *)(puVar5 + 0x50) = param_2[8];
  uVar14 = *param_2;
  uVar13 = param_2[3];
  uVar11 = param_2[2];
  *(undefined8 *)(puVar5 + 0x18) = param_2[1];
  *(undefined8 *)(puVar5 + 0x10) = uVar14;
  *(undefined8 *)(puVar5 + 0x28) = uVar13;
  *(undefined8 *)(puVar5 + 0x20) = uVar11;
  FUN_100007e64(auStack_d0 + -(lVar8 + 0xfU & 0xfffffffffffffff0),puVar5 + uVar10,FUN_100095ec0);
  puVar1 = (undefined1 *)(unaff_x20 + *(int *)(lVar3 + 0x28));
  local_80 = *puVar1;
  local_78 = *(undefined8 *)(puVar1 + 8);
  FUN_100093a08(param_2,local_c8);
  SVar6.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar6);
  dVar12 = 0.0;
  if (local_c8[0] == '\x01') {
    if (DAT_10054f608 != -1) {
      _swift_once(&DAT_10054f608,FUN_10007c30c);
    }
    dVar12 = DAT_10054f610;
    if (DAT_10054f618 != -1) {
      _swift_once(&DAT_10054f618,FUN_10007c238);
    }
    dVar12 = (dVar12 - DAT_10054f620) * 0.017453292519943295;
  }
  *param_1 = uVar2;
  *(code **)(param_1 + 8) = FUN_100099a60;
  *(undefined **)(param_1 + 0x10) = puVar5;
  *(double *)(param_1 + 0x18) = dVar12;
  *(undefined8 *)(param_1 + 0x28) = 0x3fd4b88c73f4915a;
  *(undefined8 *)(param_1 + 0x20) = 0x3fe86bca1af286bd;
  return;
}

