// rea decompile_all
// name: FUN_1003a7efc
// address: 0x1003a7efc
// body: available
// range: 0x1003a7efc-0x1003a8167 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003a8088 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003a7efc(undefined8 *param_1)

{
  int iVar1;
  NavigationPath NVar2;
  undefined8 *puVar3;
  EnvironmentObject<undefined> EVar4;
  undefined *puVar5;
  AppStorage<bool> AVar6;
  AppStorage<__int64> AVar7;
  undefined8 uVar8;
  long lVar9;
  long extraout_x8;
  long extraout_x12;
  long lVar10;
  long lVar11;
  long lVar12;
  String SVar13;
  String SVar14;
  ulong local_60 [2];
  
  NVar2 = SwiftUI::NavigationPath::typeMetadataAccessor();
  lVar12 = *(long *)(NVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar12 + 0x40));
  lVar10 = (long)local_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar11 = lVar10 - extraout_x12;
  FUN_100279594(0);
  puVar3 = &DAT_100553dd0;
  FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
  EVar4 = SwiftUI::EnvironmentObject::init();
  *param_1 = EVar4.unknown;
  param_1[1] = puVar3;
  FUN_10014e37c(0);
  puVar5 = &DAT_100553148;
  FUN_1000036d0(&DAT_100553148,FUN_10014e37c,&TargetProtocolConformanceDescriptor_100427f04);
  EVar4 = SwiftUI::EnvironmentObject::init();
  param_1[2] = EVar4.unknown;
  param_1[3] = puVar5;
  FUN_10013b98c(0);
  puVar5 = &DAT_100553150;
  FUN_1000036d0(&DAT_100553150,FUN_10013b98c,&TargetProtocolConformanceDescriptor_1004274b8);
  EVar4 = SwiftUI::EnvironmentObject::init();
  param_1[4] = EVar4.unknown;
  param_1[5] = puVar5;
  SVar13.bridgeObject = (void *)0x80000001004e41e0;
  SVar13.str = (char *)0xd000000000000016;
  AVar6 = SwiftUI::AppStorage::_init(false,SVar13);
  param_1[6] = AVar6.unknown;
  SVar14.bridgeObject = (void *)0xeb00000000626154;
  SVar14.str = (char *)0x64657463656c6573;
  AVar7 = SwiftUI::AppStorage::_init(0,SVar14);
  param_1[7] = AVar7.unknown;
  puVar5 = PTR___type_metadata_for_Swift_Bool_100523b70;
  local_60[0] = CONCAT71(local_60[0]._1_7_,1);
  SwiftUI::State::init(param_1 + 8,AVar7.unknown,PTR___type_metadata_for_Swift_Bool_100523b70);
  uVar8 = 0;
  FUN_100007ce0(0);
  local_60[0] = 0;
  local_60[1] = 0;
  SwiftUI::State::init(param_1 + 10,uVar8,uVar8);
  local_60[0] = local_60[0] & 0xffffffffffffff00;
  SwiftUI::State::init(param_1 + 0xd,uVar8,puVar5);
  local_60[0] = 0;
  local_60[1] = 0;
  puVar5 = &DAT_100549db0;
  FUN_100002f94(&DAT_100549db0,&DAT_100419ed0);
  SwiftUI::State::init(param_1 + 0xf,puVar5,puVar5);
  lVar9 = 0;
  FUN_1003afcec();
  iVar1 = *(int *)(lVar9 + 0x34);
  SwiftUI::NavigationPath::init();
  (**(code **)(lVar12 + 0x10))(lVar10,lVar11,NVar2.unknown);
  SwiftUI::State::init((long)param_1 + (long)iVar1,lVar9,NVar2.unknown);
  (**(code **)(lVar12 + 8))(lVar11,NVar2.unknown);
  local_60[0] = 0;
  local_60[1] = 0;
  SwiftUI::State::init((long)param_1 + (long)*(int *)(lVar9 + 0x38),lVar9,puVar5);
  return;
}

