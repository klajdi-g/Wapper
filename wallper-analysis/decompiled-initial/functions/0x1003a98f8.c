// rea decompile_all
// name: FUN_1003a98f8
// address: 0x1003a98f8
// body: available
// range: 0x1003a98f8-0x1003a9c73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003a9a7c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003a98f8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  EnvironmentObject<undefined> EVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x12;
  long lVar9;
  long lVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_78;
  ulong local_70;
  undefined1 local_68;
  
  puVar3 = &DAT_10054ac40;
  FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  lVar9 = (long)&local_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = lVar9 - extraout_x12;
  local_78 = *param_2;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  FUN_100279594(0);
  puVar4 = &DAT_100553dd0;
  FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
  uVar12 = param_2[2];
  uStack_88 = param_2[2];
  local_90 = param_2[1];
  _swift_bridgeObjectRetain(local_90);
  _swift_bridgeObjectRetain(uVar12);
  EVar5 = SwiftUI::EnvironmentObject::init();
  param_1[0xd] = EVar5.unknown;
  param_1[0xe] = puVar4;
  puVar6 = &DAT_10055f7f8;
  FUN_100002f94(&DAT_10055f7f8,&DAT_100434fa0);
  iVar1 = *(int *)(puVar6 + 0x54);
  puVar7 = &DAT_100435210;
  _swift_getKeyPath();
  *(undefined **)((long)param_1 + (long)iVar1) = puVar7;
  puVar7 = &DAT_10055c948;
  FUN_100002f94(&DAT_10055c948,&DAT_100435240);
  _swift_storeEnumTagMultiPayload((long)param_1 + (long)iVar1,puVar7,0);
  iVar1 = *(int *)(puVar6 + 0x58);
  puVar7 = &DAT_100435248;
  _swift_getKeyPath();
  *(undefined8 *)((long)param_1 + (long)iVar1) = puVar7;
  *(undefined1 *)((undefined8 *)((long)param_1 + (long)iVar1) + 1) = 0;
  puVar2 = PTR___type_metadata_for_Swift_Bool_100523b70;
  local_70 = local_70 & 0xffffffffffffff00;
  SwiftUI::State::init
            ((long)param_1 + (long)*(int *)(puVar6 + 0x5c),puVar7,
             PTR___type_metadata_for_Swift_Bool_100523b70);
  local_70 = local_70 & 0xffffffffffffff00;
  SwiftUI::State::init((long)param_1 + (long)*(int *)(puVar6 + 0x60),puVar7,puVar2);
  local_70 = 0;
  SwiftUI::State::init
            ((long)param_1 + (long)*(int *)(puVar6 + 100),puVar7,
             PTR___type_metadata_for_Swift_Int_100523bd8);
  iVar1 = *(int *)(puVar6 + 0x68);
  local_70 = CONCAT71(local_70._1_7_,0xe);
  puVar7 = &DAT_10055bd10;
  FUN_100002f94(&DAT_10055bd10,&DAT_100430a40);
  SwiftUI::State::init((long)param_1 + (long)iVar1,puVar7,puVar7);
  iVar1 = *(int *)(puVar6 + 0x6c);
  lVar8 = 0;
  FUN_10040211c();
  pcVar11 = *(code **)(*(long *)(lVar8 + -8) + 0x38);
  (*pcVar11)(lVar10,1,1,lVar8);
  FUN_1000087e4(lVar10,lVar9,&DAT_10054ac40,&DAT_10041ce70);
  SwiftUI::State::init((long)param_1 + (long)iVar1,lVar8,puVar3);
  FUN_10002a29c(lVar10,&DAT_10054ac40,&DAT_10041ce70);
  iVar1 = *(int *)(puVar6 + 0x70);
  (*pcVar11)(lVar10,1,1,lVar8);
  FUN_1000087e4(lVar10,lVar9,&DAT_10054ac40,&DAT_10041ce70);
  SwiftUI::State::init((long)param_1 + (long)iVar1,lVar8,puVar3);
  FUN_10002a29c(lVar10,&DAT_10054ac40,&DAT_10041ce70);
  iVar1 = *(int *)(puVar6 + 0x74);
  local_70 = 0;
  puVar3 = &DAT_100552970;
  FUN_100002f94(&DAT_100552970,&DAT_10042f240);
  SwiftUI::State::init((long)param_1 + (long)iVar1,puVar3,puVar3);
  local_70 = local_70 & 0xffffffffffffff00;
  SwiftUI::State::init((long)param_1 + (long)*(int *)(puVar6 + 0x78),puVar3,&DAT_10053d860);
  local_70 = CONCAT71(local_70._1_7_,1);
  SwiftUI::State::init
            ((long)param_1 + (long)*(int *)(puVar6 + 0x7c),puVar3,
             PTR___type_metadata_for_Swift_Bool_100523b70);
  iVar1 = *(int *)(puVar6 + 0x80);
  local_70 = 0;
  local_68 = 1;
  puVar3 = &DAT_100554b60;
  FUN_100002f94(&DAT_100554b60,&DAT_100427e50);
  SwiftUI::State::init((long)param_1 + (long)iVar1,puVar3,puVar3);
  *param_1 = local_78;
  param_1[2] = uStack_88;
  param_1[1] = local_90;
  *(undefined2 *)((long)param_1 + 0x19) = 0;
  *(undefined1 *)((long)param_1 + 0x1b) = 1;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  return;
}

