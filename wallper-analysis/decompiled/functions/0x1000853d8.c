// rea decompile_all
// name: FUN_1000853d8
// address: 0x1000853d8
// body: available
// range: 0x1000853d8-0x1000855a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000853d8(undefined1 *param_1,undefined8 param_2)

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
  double dVar11;
  undefined1 auStack_90 [15];
  char local_81;
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
  uVar10 = uVar7 + 0x18 & (uVar7 ^ 0xffffffffffffffff);
  puVar5 = &DAT_100528618;
  _swift_allocObject(&DAT_100528618,uVar10 + lVar8,uVar7 | 7);
  *(undefined8 *)(puVar5 + 0x10) = param_2;
  FUN_100007e64(auStack_90 + -(lVar8 + 0xfU & 0xfffffffffffffff0),puVar5 + uVar10,FUN_100095ec0);
  puVar1 = (undefined1 *)(unaff_x20 + *(int *)(lVar3 + 0x28));
  local_80 = *puVar1;
  local_78 = *(undefined8 *)(puVar1 + 8);
  _swift_retain(param_2);
  SVar6.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar6);
  dVar11 = 0.0;
  if (local_81 == '\x01') {
    if (DAT_10054f608 != -1) {
      _swift_once(&DAT_10054f608,FUN_10007c30c);
    }
    dVar11 = DAT_10054f610;
    if (DAT_10054f618 != -1) {
      _swift_once(&DAT_10054f618,FUN_10007c238);
    }
    dVar11 = (dVar11 - DAT_10054f620) * 0.017453292519943295;
  }
  *param_1 = uVar2;
  *(code **)(param_1 + 8) = FUN_1000997b8;
  *(undefined **)(param_1 + 0x10) = puVar5;
  *(double *)(param_1 + 0x18) = dVar11;
  *(undefined8 *)(param_1 + 0x28) = 0x3fd4b88c73f4915a;
  *(undefined8 *)(param_1 + 0x20) = 0x3fe86bca1af286bd;
  return;
}

