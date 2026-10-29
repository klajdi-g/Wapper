// rea decompile_all
// name: FUN_100367bb4
// address: 0x100367bb4
// body: available
// range: 0x100367bb4-0x100367d83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100367d34 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100367bb4(ulong *param_1,byte *param_2,ulong param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  bool bVar3;
  long lVar4;
  State SVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined1 auStack_90 [8];
  ulong local_88;
  ulong uStack_80;
  byte local_71;
  undefined1 local_70 [8];
  ulong local_68;
  
  lVar4 = 0;
  uVar7 = param_3;
  FUN_100386f18();
  lVar11 = *(long *)(lVar4 + -8);
  lVar10 = *(long *)(lVar11 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  bVar2 = *param_2;
  uVar9 = (ulong)bVar2;
  FUN_10035d008();
  if (bVar2 == 0) {
    uVar12 = 0xea00000000006c6c;
    uVar8 = 0x69662e7472616568;
  }
  else if (bVar2 == 1) {
    uVar12 = 0x80000001004ddb70;
    uVar8 = 0xd000000000000016;
  }
  else {
    uVar8 = 0xd000000000000014;
    uVar12 = 0x80000001004e69e0;
  }
  puVar1 = (undefined1 *)(param_3 + (long)*(int *)(lVar4 + 0x28));
  local_70[0] = *puVar1;
  local_68 = *(ulong *)(puVar1 + 8);
  SVar5.unknown = &DAT_10055de38;
  local_88 = uVar7;
  uStack_80 = uVar9;
  FUN_100002f94(&DAT_10055de38,&DAT_1004336b0);
  SwiftUI::State::get_wrappedValue(SVar5);
  bVar3 = local_71 == bVar2;
  FUN_100029504(param_3,auStack_90 + -(lVar10 + 0xfU & 0xfffffffffffffff0),FUN_100386f18);
  uVar7 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar9 = uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff);
  lVar4 = uVar9 + lVar10;
  puVar6 = &DAT_10053bfa8;
  _swift_allocObject(&DAT_10053bfa8,lVar4 + 1,uVar7 | 7);
  FUN_100007e64(auStack_90 + -(lVar10 + 0xfU & 0xfffffffffffffff0),puVar6 + uVar9,FUN_100386f18);
  puVar6[lVar4] = bVar2;
  local_71 = 0;
  SwiftUI::State::init(local_70,puVar6,PTR___type_metadata_for_Swift_Bool_100523b70);
  *param_1 = uStack_80;
  param_1[1] = local_88;
  param_1[2] = uVar8;
  param_1[3] = uVar12;
  *(bool *)(param_1 + 4) = bVar3;
  param_1[5] = (ulong)FUN_1003891a8;
  param_1[6] = (ulong)puVar6;
  *(undefined1 *)(param_1 + 7) = local_70[0];
  param_1[8] = local_68;
  return;
}

