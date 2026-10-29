// rea decompile_all
// name: FUN_10034443c
// address: 0x10034443c
// body: available
// range: 0x10034443c-0x10034482f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010034465c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10034443c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  VerticalAlignment VVar6;
  VerticalAlignment VVar7;
  undefined *puVar8;
  undefined *puVar9;
  Set _all;
  EnvironmentObject<undefined> EVar10;
  long lVar11;
  long extraout_x8;
  long extraout_x12;
  Set unaff_x20;
  code *pcVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  ulong local_90;
  undefined1 local_88;
  
  puVar5 = &DAT_10054ac40;
  FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar13 = (long)&local_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = lVar13 - extraout_x12;
                    /* WARNING: Load size is inaccurate */
  VVar6.unknown = *unaff_x20.unknown;
  FUN_100345088(VVar6.unknown,*(undefined8 *)((long)unaff_x20.unknown + 8),
                *(undefined1 *)((long)unaff_x20.unknown + 0x20),
                *(undefined8 *)((long)unaff_x20.unknown + 0x28));
  VVar7 = SwiftUI::VerticalAlignment::get_center(VVar6);
  puVar8 = &DAT_10055d2b8;
  FUN_100002f94(&DAT_10055d2b8,&DAT_100432840);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar8 + 0x4c));
  *puVar1 = VVar7.unknown;
  puVar1[1] = 0x4020000000000000;
  *(undefined1 *)(puVar1 + 2) = 0;
  puVar9 = &DAT_10055d2c0;
  FUN_100002f94(&DAT_10055d2c0,&DAT_100432848);
  FUN_100344830((long)puVar1 + (long)*(int *)(puVar9 + 0x2c));
  _all = SwiftUI::Edge::Set::get_horizontal(unaff_x20);
  uVar15 = 0x4050000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  puVar9 = &DAT_10055d2c8;
  FUN_100002f94(&DAT_10055d2c8,&DAT_100432850);
  puVar2 = (undefined1 *)((long)puVar1 + (long)*(int *)(puVar9 + 0x24));
  *puVar2 = (char)_all.unknown;
  *(undefined8 *)(puVar2 + 8) = uVar15;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  puVar2[0x28] = 0;
  uVar15 = 0;
  FUN_100279594();
  FUN_10034551c();
  EVar10 = SwiftUI::EnvironmentObject::init();
  *param_1 = 0x616964654d20794d;
  param_1[1] = 0xe800000000000000;
  param_1[2] = VVar6.unknown;
  *(undefined4 *)(param_1 + 3) = 0x100;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  iVar3 = *(int *)(puVar8 + 0x50);
  *(undefined8 *)((long)param_1 + (long)iVar3) = EVar10.unknown;
  ((undefined8 *)((long)param_1 + (long)iVar3))[1] = uVar15;
  iVar3 = *(int *)(puVar8 + 0x54);
  puVar9 = &DAT_100432858;
  _swift_getKeyPath();
  *(undefined **)((long)param_1 + (long)iVar3) = puVar9;
  puVar9 = &DAT_10055c948;
  FUN_100002f94(&DAT_10055c948,&DAT_100435240);
  _swift_storeEnumTagMultiPayload((long)param_1 + (long)iVar3,puVar9,0);
  iVar3 = *(int *)(puVar8 + 0x58);
  puVar9 = &DAT_100432888;
  _swift_getKeyPath();
  *(undefined8 *)((long)param_1 + (long)iVar3) = puVar9;
  *(undefined1 *)((undefined8 *)((long)param_1 + (long)iVar3) + 1) = 0;
  puVar4 = PTR___type_metadata_for_Swift_Bool_100523b70;
  local_90 = local_90 & 0xffffffffffffff00;
  SwiftUI::State::init
            ((long)param_1 + (long)*(int *)(puVar8 + 0x5c),puVar9,
             PTR___type_metadata_for_Swift_Bool_100523b70);
  local_90 = local_90 & 0xffffffffffffff00;
  SwiftUI::State::init((long)param_1 + (long)*(int *)(puVar8 + 0x60),puVar9,puVar4);
  local_90 = 0;
  SwiftUI::State::init
            ((long)param_1 + (long)*(int *)(puVar8 + 100),puVar9,
             PTR___type_metadata_for_Swift_Int_100523bd8);
  iVar3 = *(int *)(puVar8 + 0x68);
  local_90 = CONCAT71(local_90._1_7_,0xe);
  puVar9 = &DAT_10055bd10;
  FUN_100002f94(&DAT_10055bd10,&DAT_100430a40);
  SwiftUI::State::init((long)param_1 + (long)iVar3,puVar9,puVar9);
  iVar3 = *(int *)(puVar8 + 0x6c);
  lVar11 = 0;
  FUN_10040211c();
  pcVar12 = *(code **)(*(long *)(lVar11 + -8) + 0x38);
  (*pcVar12)(lVar14,1,1,lVar11);
  FUN_1000087e4(lVar14,lVar13,&DAT_10054ac40,&DAT_10041ce70);
  SwiftUI::State::init((long)param_1 + (long)iVar3,lVar11,puVar5);
  FUN_10002f6f4(lVar14);
  iVar3 = *(int *)(puVar8 + 0x70);
  (*pcVar12)(lVar14,1,1,lVar11);
  FUN_1000087e4(lVar14,lVar13,&DAT_10054ac40,&DAT_10041ce70);
  SwiftUI::State::init((long)param_1 + (long)iVar3,lVar11,puVar5);
  FUN_10002f6f4(lVar14);
  iVar3 = *(int *)(puVar8 + 0x74);
  local_90 = 0;
  puVar5 = &DAT_100552970;
  FUN_100002f94(&DAT_100552970,&DAT_10042f240);
  SwiftUI::State::init((long)param_1 + (long)iVar3,puVar5,puVar5);
  local_90 = local_90 & 0xffffffffffffff00;
  SwiftUI::State::init((long)param_1 + (long)*(int *)(puVar8 + 0x78),puVar5,&DAT_10053d860);
  local_90 = CONCAT71(local_90._1_7_,1);
  SwiftUI::State::init
            ((long)param_1 + (long)*(int *)(puVar8 + 0x7c),puVar5,
             PTR___type_metadata_for_Swift_Bool_100523b70);
  iVar3 = *(int *)(puVar8 + 0x80);
  local_90 = 0;
  local_88 = 1;
  puVar5 = &DAT_100554b60;
  FUN_100002f94(&DAT_100554b60,&DAT_100427e50);
  SwiftUI::State::init((long)param_1 + (long)iVar3,puVar5,puVar5);
  return;
}

