// rea decompile_all
// name: FUN_100374e00
// address: 0x100374e00
// body: available
// range: 0x100374e00-0x1003751ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100374e00(byte *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  Binding BVar6;
  ulong uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  undefined8 extraout_x13;
  long extraout_x14;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  code *pcVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long local_90;
  undefined *local_88;
  long lStack_80;
  long local_78;
  undefined8 local_70;
  long local_68;
  
  lVar2 = 0;
  FUN_1001d537c();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = (long)&local_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100550eb8;
  FUN_100002f94(&DAT_100550eb8,&DAT_100422a48);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = lVar9 - extraout_x8_00;
  puVar4 = &DAT_100550ec0;
  FUN_100002f94(&DAT_100550ec0,&DAT_100422eb0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_100521118)();
  (*(code *)PTR____chkstk_darwin_100521118)();
  uVar14 = ((lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0)) - extraout_x12) - extraout_x12_00
  ;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = uVar14 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar15 = lVar13 - extraout_x12_02;
  if ((*param_1 & 1) != 0) {
    return;
  }
  lVar5 = 0;
  local_90 = lVar9;
  local_78 = extraout_x14;
  local_70 = extraout_x13;
  FUN_10038f3a0();
  iVar1 = *(int *)(lVar5 + 0x24);
  BVar6.unknown = &DAT_10055eb98;
  FUN_100002f94(&DAT_10055eb98,&DAT_1004343f8);
  local_88 = BVar6.unknown;
  lStack_80 = (long)iVar1;
  SwiftUI::Binding::get_wrappedValue(BVar6);
  local_68 = param_4;
  FUN_100029504(param_4 + *(int *)(lVar5 + 0x14),lVar13,FUN_1001d537c);
  pcVar12 = *(code **)(lVar10 + 0x38);
  (*pcVar12)(lVar13,0,1,lVar2);
  lVar9 = (long)*(int *)(puVar3 + 0x30);
  FUN_1000087e4(lVar15,lVar8,&DAT_100550ec0,&DAT_100422eb0);
  FUN_1000087e4(lVar13,lVar8 + lVar9,&DAT_100550ec0,&DAT_100422eb0);
  pcVar11 = *(code **)(lVar10 + 0x30);
  lVar10 = lVar8;
  (*pcVar11)(lVar8,1,lVar2);
  if ((int)lVar10 == 1) {
    FUN_10002a29c(lVar13,&DAT_100550ec0,&DAT_100422eb0);
    FUN_10002a29c(lVar15,&DAT_100550ec0,&DAT_100422eb0);
    lVar9 = lVar8 + lVar9;
    (*pcVar11)(lVar9,1,lVar2);
    if ((int)lVar9 == 1) {
      FUN_10002a29c(lVar8,&DAT_100550ec0,&DAT_100422eb0);
LAB_100375190:
      lVar8 = local_68;
      puVar3 = &DAT_100550ec0;
      (*pcVar12)(local_78,1,1,lVar2);
      puVar4 = &DAT_100422eb0;
      FUN_1000087e4(local_78,local_70,&DAT_100550ec0,&DAT_100422eb0);
      SwiftUI::Binding::set_wrappedValue((Binding *)(lVar8 + lStack_80),local_70,local_88);
      lVar8 = local_78;
      goto LAB_1003751dc;
    }
  }
  else {
    FUN_1000087e4(lVar8,uVar14,&DAT_100550ec0,&DAT_100422eb0);
    lVar10 = lVar8 + lVar9;
    (*pcVar11)(lVar10,1,lVar2);
    lVar5 = local_90;
    if ((int)lVar10 != 1) {
      FUN_100007e64(lVar8 + lVar9,local_90,FUN_1001d537c);
      uVar7 = uVar14;
      FUN_1001da410(uVar14,lVar5);
      FUN_100029548(lVar5,FUN_1001d537c);
      FUN_10002a29c(lVar13,&DAT_100550ec0,&DAT_100422eb0);
      FUN_10002a29c(lVar15,&DAT_100550ec0,&DAT_100422eb0);
      FUN_100029548(uVar14,FUN_1001d537c);
      FUN_10002a29c(lVar8,&DAT_100550ec0,&DAT_100422eb0);
      if ((uVar7 & 1) == 0) {
        return;
      }
      goto LAB_100375190;
    }
    FUN_10002a29c(lVar13,&DAT_100550ec0,&DAT_100422eb0);
    FUN_10002a29c(lVar15,&DAT_100550ec0,&DAT_100422eb0);
    FUN_100029548(uVar14,FUN_1001d537c);
  }
  puVar3 = &DAT_100550eb8;
  puVar4 = &DAT_100422a48;
LAB_1003751dc:
  FUN_10002a29c(lVar8,puVar3,puVar4);
  return;
}

