// rea decompile_all
// name: FUN_1003bf1fc
// address: 0x1003bf1fc
// body: available
// range: 0x1003bf1fc-0x1003bf573 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003bf1fc(byte *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  State SVar4;
  long lVar5;
  byte bVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar7;
  long extraout_x12;
  long extraout_x12_00;
  long lVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long local_80;
  long local_78;
  undefined8 local_70;
  byte *local_68;
  
  lVar1 = 0;
  local_70 = param_4;
  local_68 = param_1;
  FUN_10040211c();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar11 + 0x40));
  lVar8 = (long)&local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_10054b6b8;
  local_80 = lVar8;
  FUN_100002f94(&DAT_10054b6b8,&DAT_10041ca50);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = lVar8 - extraout_x8_00;
  puVar3 = &DAT_10054ac40;
  FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  lVar7 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_78 = lVar7;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar7 = lVar7 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = lVar7 - extraout_x12_00;
  FUN_1003cff30(0,param_5,param_6);
  SVar4.unknown = &DAT_1005602d0;
  FUN_100002f94(&DAT_1005602d0,&DAT_100435db8);
  SwiftUI::State::get_wrappedValue(SVar4);
  (**(code **)(lVar11 + 0x38))(lVar7,1,1,lVar1);
  lVar12 = (long)*(int *)(puVar2 + 0x30);
  FUN_1000087e4(lVar10,lVar8,&DAT_10054ac40,&DAT_10041ce70);
  FUN_1000087e4(lVar7,lVar8 + lVar12,&DAT_10054ac40,&DAT_10041ce70);
  pcVar9 = *(code **)(lVar11 + 0x30);
  lVar5 = lVar8;
  (*pcVar9)(lVar8,1,lVar1);
  lVar11 = local_78;
  if ((int)lVar5 == 1) {
    FUN_10002a29c(lVar7,&DAT_10054ac40,&DAT_10041ce70);
    FUN_10002a29c(lVar10,&DAT_10054ac40,&DAT_10041ce70);
    lVar12 = lVar8 + lVar12;
    (*pcVar9)(lVar12,1,lVar1);
    if ((int)lVar12 == 1) {
      FUN_10002a29c(lVar8,&DAT_10054ac40,&DAT_10041ce70);
      bVar6 = 0;
      goto LAB_1003bf548;
    }
  }
  else {
    FUN_1000087e4(lVar8,local_78,&DAT_10054ac40,&DAT_10041ce70);
    lVar5 = lVar8 + lVar12;
    (*pcVar9)(lVar5,1,lVar1);
    lVar1 = local_80;
    if ((int)lVar5 != 1) {
      FUN_100007e64(lVar8 + lVar12,local_80,FUN_10040211c);
      lVar12 = lVar11;
      FUN_10040a7a0(lVar11,lVar1);
      FUN_100029548(lVar1,FUN_10040211c);
      FUN_10002a29c(lVar7,&DAT_10054ac40,&DAT_10041ce70);
      FUN_10002a29c(lVar10,&DAT_10054ac40,&DAT_10041ce70);
      FUN_100029548(lVar11,FUN_10040211c);
      FUN_10002a29c(lVar8,&DAT_10054ac40,&DAT_10041ce70);
      bVar6 = (byte)lVar12 ^ 1;
      goto LAB_1003bf548;
    }
    FUN_10002a29c(lVar7,&DAT_10054ac40,&DAT_10041ce70);
    FUN_10002a29c(lVar10,&DAT_10054ac40,&DAT_10041ce70);
    FUN_100029548(lVar11,FUN_10040211c);
  }
  FUN_10002a29c(lVar8,&DAT_10054b6b8,&DAT_10041ca50);
  bVar6 = 1;
LAB_1003bf548:
  *local_68 = bVar6 & 1;
  return;
}

