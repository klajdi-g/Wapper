// rea decompile_all
// name: FUN_1000abae4
// address: 0x1000abae4
// body: available
// range: 0x1000abae4-0x1000abdbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000abc60 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000abae4(long param_1,long param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  long lVar5;
  undefined *puVar6;
  VerticalAlignment VVar7;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar8;
  long extraout_x12;
  long extraout_x12_00;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 auStack_80 [2];
  
  puVar12 = &DAT_1005501e0;
  FUN_100002f94(&DAT_1005501e0,&DAT_100421a08);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar12 + -8) + 0x40));
  lVar9 = (long)auStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar10 = (undefined8 *)(lVar9 - extraout_x12);
  puVar12 = &DAT_1005501e8;
  FUN_100002f94(&DAT_1005501e8,&DAT_100421a10);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar12 + -8) + 0x40));
  lVar11 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar12 = (undefined *)(lVar11 - extraout_x12_00);
  bVar2 = *(long *)(param_2 + 0x20) == 0;
  if (bVar2) {
    lVar5 = 0;
    FUN_10009a6f8();
    pcVar8 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
  }
  else {
    FUN_100029504(param_2,puVar12,FUN_10009e280);
    lVar5 = 0;
    FUN_1000b0fd4();
    puVar1 = (undefined8 *)(param_2 + *(int *)(lVar5 + 0x18));
    uVar13 = *puVar1;
    uVar14 = puVar1[1];
    uVar3 = *(undefined1 *)(param_2 + *(int *)(lVar5 + 0x1c));
    lVar5 = 0;
    FUN_10009a6f8();
    iVar4 = *(int *)(lVar5 + 0x14);
    *(undefined8 *)(puVar12 + iVar4) = uVar13;
    *(undefined8 *)((long)(puVar12 + iVar4) + 8) = uVar14;
    puVar12[*(int *)(lVar5 + 0x18)] = uVar3;
    iVar4 = *(int *)(lVar5 + 0x1c);
    puVar6 = &DAT_100421a28;
    _swift_getKeyPath();
    *(undefined **)(puVar12 + iVar4) = puVar6;
    *(undefined1 *)((long)(puVar12 + iVar4) + 8) = 0;
    iVar4 = *(int *)(lVar5 + 0x20);
    auStack_80[1] = 0;
    puVar6 = &DAT_10054bd30;
    FUN_100002f94(&DAT_10054bd30,&DAT_10041d460);
    SwiftUI::State::init(puVar12 + iVar4,puVar6,puVar6);
    pcVar8 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
  }
  VVar7.unknown = puVar12;
  (*pcVar8)(puVar12,bVar2,1,lVar5);
  VVar7 = SwiftUI::VerticalAlignment::get_center(VVar7);
  *puVar10 = VVar7.unknown;
  puVar10[1] = 0;
  *(undefined1 *)(puVar10 + 2) = 0;
  puVar6 = &DAT_1005501f0;
  FUN_100002f94(&DAT_1005501f0,&DAT_100421a18);
  FUN_1000abdc0((long)puVar10 + (long)*(int *)(puVar6 + 0x2c),param_2);
  FUN_1000087e4(puVar12,lVar11,&DAT_1005501e8,&DAT_100421a10);
  FUN_1000087e4(puVar10,lVar9,&DAT_1005501e0,&DAT_100421a08);
  FUN_1000087e4(lVar11,param_1,&DAT_1005501e8,&DAT_100421a10);
  puVar6 = &DAT_1005501f8;
  FUN_100002f94(&DAT_1005501f8,&DAT_100421a20);
  FUN_1000087e4(lVar9,param_1 + *(int *)(puVar6 + 0x30),&DAT_1005501e0,&DAT_100421a08);
  FUN_10002a29c(puVar10,&DAT_1005501e0,&DAT_100421a08);
  FUN_10002a29c(puVar12,&DAT_1005501e8,&DAT_100421a10);
  FUN_10002a29c(lVar9,&DAT_1005501e0,&DAT_100421a08);
  FUN_10002a29c(lVar11,&DAT_1005501e8,&DAT_100421a10);
  return;
}

