// rea decompile_all
// name: FUN_1002d5a64
// address: 0x1002d5a64
// body: available
// range: 0x1002d5a64-0x1002d5d6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002d5c30 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1002d5a64(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  EnvironmentObject<undefined> EVar3;
  undefined *puVar4;
  EnvironmentObject<undefined> EVar5;
  AppStorage<bool> AVar6;
  AppStorage<bool> AVar7;
  AppStorage<bool> AVar8;
  AppStorage<bool> AVar9;
  AppStorage<bool> AVar10;
  AppStorage<bool> AVar11;
  AppStorage<bool> AVar12;
  undefined8 uVar13;
  undefined *puVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong local_110;
  undefined8 uStack_108;
  
  FUN_1001373cc(0);
  puVar2 = &DAT_100553de0;
  FUN_1000036d0(&DAT_100553de0,FUN_1001373cc,&TargetProtocolConformanceDescriptor_100426ef0);
  EVar3 = SwiftUI::EnvironmentObject::init();
  FUN_100231228(0);
  puVar4 = &DAT_10054d6a8;
  FUN_1000036d0(&DAT_10054d6a8,FUN_100231228,&TargetProtocolConformanceDescriptor_10042bb2c);
  EVar5 = SwiftUI::EnvironmentObject::init();
  SVar15.bridgeObject = (void *)0xec0000006e69676f;
  SVar15.str = (char *)0x4c6e4f7472617473;
  AVar6 = SwiftUI::AppStorage::_init(false,SVar15);
  SVar16.bridgeObject = (void *)0x80000001004dcf30;
  SVar16.str = (char *)0xd000000000000014;
  AVar7 = SwiftUI::AppStorage::_init(false,SVar16);
  SVar17.bridgeObject = (void *)0xee00657461647055;
  SVar17.str = (char *)0x6e4f796669746f6e;
  AVar8 = SwiftUI::AppStorage::_init(true,SVar17);
  SVar18.bridgeObject = (void *)0x80000001004dbc80;
  SVar18.str = (char *)0xd000000000000016;
  AVar9 = SwiftUI::AppStorage::_init(true,SVar18);
  SVar19.bridgeObject = (void *)0x80000001004dc560;
  SVar19.str = (char *)0xd000000000000018;
  AVar10 = SwiftUI::AppStorage::_init(true,SVar19);
  SVar20.bridgeObject = (void *)0xec00000072614275;
  SVar20.str = (char *)0x6e654d7470616461;
  AVar11 = SwiftUI::AppStorage::_init(false,SVar20);
  SVar21.bridgeObject = (void *)0x80000001004e41e0;
  SVar21.str = (char *)0xd000000000000016;
  AVar12 = SwiftUI::AppStorage::_init(false,SVar21);
  puVar1 = PTR___type_metadata_for_Swift_Bool_100523b70;
  local_110 = local_110 & 0xffffffffffffff00;
  SwiftUI::State::init(&uStack_198,AVar12.unknown,PTR___type_metadata_for_Swift_Bool_100523b70);
  local_110 = 0;
  uVar13 = 0;
  FUN_1000086b0(0);
  SwiftUI::State::init(&uStack_188,uVar13,uVar13);
  local_110 = local_110 & 0xffffffffffffff00;
  SwiftUI::State::init(&uStack_178,uVar13,puVar1);
  local_110 = local_110 & 0xffffffffffffff00;
  SwiftUI::State::init(&uStack_168,uVar13,puVar1);
  local_110._0_1_ = 2;
  puVar14 = &DAT_10055a6f0;
  FUN_100002f94(&DAT_10055a6f0,&DAT_10042e8f8);
  SwiftUI::State::init(&uStack_158,puVar14,puVar14);
  local_110._0_1_ = 0;
  SwiftUI::State::init(&uStack_148,puVar14,puVar1);
  local_110 = (ulong)local_110._1_7_ << 8;
  SwiftUI::State::init(&uStack_138,puVar14,puVar1);
  local_110 = 0;
  uStack_108 = 0xe000000000000000;
  SwiftUI::State::init(&uStack_128,puVar14,PTR___type_metadata_for_Swift_String_100523a98);
  param_1[0x15] = uStack_148;
  param_1[0x14] = local_150;
  param_1[0x17] = uStack_138;
  param_1[0x16] = uStack_140;
  param_1[0x19] = uStack_128;
  param_1[0x18] = local_130;
  param_1[0x1b] = uStack_118;
  param_1[0x1a] = uStack_120;
  param_1[0xd] = uStack_188;
  param_1[0xc] = local_190;
  param_1[0xf] = uStack_178;
  param_1[0xe] = uStack_180;
  param_1[0x11] = uStack_168;
  param_1[0x10] = local_170;
  param_1[0x13] = uStack_158;
  param_1[0x12] = uStack_160;
  param_1[5] = AVar7.unknown;
  param_1[4] = AVar6.unknown;
  param_1[7] = AVar9.unknown;
  param_1[6] = AVar8.unknown;
  param_1[9] = AVar11.unknown;
  param_1[8] = AVar10.unknown;
  param_1[0xb] = uStack_198;
  param_1[10] = AVar12.unknown;
  param_1[1] = puVar2;
  *param_1 = EVar3.unknown;
  param_1[3] = puVar4;
  param_1[2] = EVar5.unknown;
  return;
}

