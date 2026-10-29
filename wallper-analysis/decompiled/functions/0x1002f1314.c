// rea decompile_all
// name: FUN_1002f1314
// address: 0x1002f1314
// body: available
// range: 0x1002f1314-0x1002f14a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002f1484 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1002f1314(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  lVar5 = 0;
  FUN_1002f58d4();
  lVar13 = *(long *)(lVar5 + -8);
  lVar9 = *(long *)(lVar13 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar8 = auStack_70 + -(lVar9 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  FUN_1002f58e8();
  lVar5 = *(long *)(lVar5 + -8);
  lVar11 = *(long *)(lVar5 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = (long)puVar8 - (lVar11 + 0xfU & 0xfffffffffffffff0);
  FUN_100029504(param_2,param_1,FUN_1002f58e8);
  FUN_100029504(param_2,lVar12,FUN_1002f58e8);
  FUN_100029504(param_3,puVar8,FUN_1002f58d4);
  bVar2 = *(byte *)(lVar5 + 0x50);
  uVar7 = (ulong)bVar2 + 0x10 & ((ulong)bVar2 ^ 0xffffffffffffffff);
  bVar3 = *(byte *)(lVar13 + 0x50);
  uVar10 = lVar11 + (ulong)bVar3 + uVar7 & ((ulong)bVar3 ^ 0xffffffffffffffff);
  puVar6 = &DAT_100539690;
  _swift_allocObject(&DAT_100539690,uVar10 + lVar9,bVar2 | bVar3 | 7);
  FUN_100007e64(lVar12,puVar6 + uVar7,FUN_1002f58e8);
  FUN_100007e64(puVar8,puVar6 + uVar10,FUN_1002f58d4);
  lVar5 = 0;
  FUN_1002fa254();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar5 + 0x14));
  *puVar1 = FUN_1002fa6a8;
  puVar1[1] = puVar6;
  iVar4 = *(int *)(lVar5 + 0x18);
  local_68 = 0;
  puVar6 = &DAT_10054bd30;
  FUN_100002f94(&DAT_10054bd30,&DAT_10041d460);
  SwiftUI::State::init(param_1 + iVar4,puVar6,puVar6);
  return;
}

