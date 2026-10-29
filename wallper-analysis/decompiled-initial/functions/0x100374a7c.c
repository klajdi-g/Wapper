// rea decompile_all
// name: FUN_100374a7c
// address: 0x100374a7c
// body: available
// range: 0x100374a7c-0x100374dff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100374a7c(byte *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  Binding BVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar8;
  long extraout_x12;
  long extraout_x12_00;
  byte bVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  undefined1 auStack_80 [8];
  undefined1 *local_78;
  long local_70;
  byte *local_68;
  
  lVar2 = 0;
  local_68 = param_1;
  FUN_1001d537c();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar11 + 0x40));
  puVar3 = &DAT_100550eb8;
  local_78 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_100002f94(&DAT_100550eb8,&DAT_100422a48);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  puVar4 = &DAT_100550ec0;
  FUN_100002f94(&DAT_100550ec0,&DAT_100422eb0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar8 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_70 = lVar8;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar8 = lVar8 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = lVar8 - extraout_x12_00;
  lVar5 = 0;
  FUN_10038f3a0();
  BVar6.unknown = &DAT_10055eb98;
  FUN_100002f94(&DAT_10055eb98,&DAT_1004343f8);
  SwiftUI::Binding::get_wrappedValue(BVar6);
  FUN_100029504(param_4 + *(int *)(lVar5 + 0x14),lVar8,FUN_1001d537c);
  (**(code **)(lVar11 + 0x38))(lVar8,0,1,lVar2);
  lVar5 = (long)*(int *)(puVar3 + 0x30);
  FUN_1000087e4(lVar13,lVar10,&DAT_100550ec0,&DAT_100422eb0);
  FUN_1000087e4(lVar8,lVar10 + lVar5,&DAT_100550ec0,&DAT_100422eb0);
  pcVar12 = *(code **)(lVar11 + 0x30);
  lVar7 = lVar10;
  (*pcVar12)(lVar10,1,lVar2);
  lVar11 = local_70;
  if ((int)lVar7 == 1) {
    FUN_10002a29c(lVar8,&DAT_100550ec0,&DAT_100422eb0);
    FUN_10002a29c(lVar13,&DAT_100550ec0,&DAT_100422eb0);
    lVar5 = lVar10 + lVar5;
    (*pcVar12)(lVar5,1,lVar2);
    if ((int)lVar5 == 1) {
      FUN_10002a29c(lVar10,&DAT_100550ec0,&DAT_100422eb0);
      bVar9 = 1;
      goto LAB_100374dd4;
    }
  }
  else {
    FUN_1000087e4(lVar10,local_70,&DAT_100550ec0,&DAT_100422eb0);
    lVar7 = lVar10 + lVar5;
    (*pcVar12)(lVar7,1,lVar2);
    puVar1 = local_78;
    if ((int)lVar7 != 1) {
      FUN_100007e64(lVar10 + lVar5,local_78,FUN_1001d537c);
      lVar5 = lVar11;
      FUN_1001da410(lVar11,puVar1);
      bVar9 = (byte)lVar5;
      FUN_100029548(puVar1,FUN_1001d537c);
      FUN_10002a29c(lVar8,&DAT_100550ec0,&DAT_100422eb0);
      FUN_10002a29c(lVar13,&DAT_100550ec0,&DAT_100422eb0);
      FUN_100029548(lVar11,FUN_1001d537c);
      FUN_10002a29c(lVar10,&DAT_100550ec0,&DAT_100422eb0);
      goto LAB_100374dd4;
    }
    FUN_10002a29c(lVar8,&DAT_100550ec0,&DAT_100422eb0);
    FUN_10002a29c(lVar13,&DAT_100550ec0,&DAT_100422eb0);
    FUN_100029548(lVar11,FUN_1001d537c);
  }
  FUN_10002a29c(lVar10,&DAT_100550eb8,&DAT_100422a48);
  bVar9 = 0;
LAB_100374dd4:
  *local_68 = bVar9 & 1;
  return;
}

