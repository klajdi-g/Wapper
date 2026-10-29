// rea decompile_all
// name: FUN_1000c083c
// address: 0x1000c083c
// body: available
// range: 0x1000c083c-0x1000c09f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000c083c(long param_1,double param_2,undefined8 param_3,double param_4,double param_5,
                  long param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  Alignment AVar5;
  long extraout_x8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  puVar3 = &DAT_10054ac40;
  FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  AVar5.unknown = (undefined *)((long)&local_b0 - extraout_x8);
  FUN_100029504(param_7,AVar5.unknown,FUN_10040211c);
  lVar4 = 0;
  FUN_10040211c();
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(AVar5.unknown,0,1,lVar4);
  FUN_1000c0360(param_1,AVar5.unknown,param_6);
  FUN_10002a29c(AVar5.unknown,&DAT_10054ac40,&DAT_10041ce70);
  SwiftUI::Alignment::get_center(AVar5);
  SwiftUI::_FrameLayout::_init((undefined *)(param_2 * ((double)param_6 * -0.07 + 1.0)));
  puVar3 = &DAT_100550da0;
  FUN_100002f94(&DAT_100550da0,&DAT_100422960);
  puVar1 = (undefined8 *)(param_1 + *(int *)(puVar3 + 0x24));
  puVar1[1] = uStack_a8;
  *puVar1 = local_b0;
  puVar1[3] = uStack_98;
  puVar1[2] = uStack_a0;
  puVar1[5] = uStack_88;
  puVar1[4] = local_90;
  puVar3 = &DAT_100550db8;
  FUN_100002f94(&DAT_100550db8,&DAT_100422998);
  iVar2 = *(int *)(puVar3 + 0x24);
  *(undefined8 *)(param_1 + iVar2) = 0;
  ((undefined8 *)(param_1 + iVar2))[1] = -(param_4 + param_5 * (double)param_6);
  return;
}

