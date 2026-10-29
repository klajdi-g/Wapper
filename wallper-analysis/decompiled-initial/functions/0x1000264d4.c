// rea decompile_all
// name: FUN_1000264d4
// address: 0x1000264d4
// body: available
// range: 0x1000264d4-0x10002683f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100026508 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000264d4(void *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  Animation AVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  undefined1 auStack_260 [16];
  undefined8 local_250;
  undefined *local_248;
  undefined8 *puStack_240;
  undefined *local_238;
  undefined *puStack_230;
  undefined *local_228;
  undefined *puStack_220;
  code *local_218;
  undefined8 uStack_210;
  undefined1 local_208;
  undefined *local_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1f0 [24];
  undefined1 auStack_1d8 [16];
  undefined1 auStack_1c8 [16];
  undefined1 auStack_1b8 [32];
  undefined *local_198;
  undefined *local_190;
  undefined *local_188;
  undefined1 auStack_180 [16];
  undefined *local_170;
  undefined8 uStack_168;
  undefined *local_160;
  undefined *local_158;
  ulong local_150 [34];
  
  local_150[0] = local_150[0] & 0xffffffffffffff00;
  SwiftUI::State::init(auStack_260,param_2,PTR___type_metadata_for_Swift_Bool_100523b70);
  local_250 = 0;
  FUN_100279594(0);
  puVar3 = &DAT_100553dd0;
  FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
  local_248 = (undefined *)SwiftUI::EnvironmentObject::init();
  puStack_240 = puVar3;
  FUN_100226ac0(0);
  puVar4 = &DAT_10054aa48;
  FUN_1000036d0(&DAT_10054aa48,FUN_100226ac0,&TargetProtocolConformanceDescriptor_10042b420);
  local_238 = (undefined *)SwiftUI::EnvironmentObject::init();
  puStack_230 = puVar4;
  FUN_1001b7378(0);
  puVar4 = &DAT_100553df0;
  FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
  local_228 = (undefined *)SwiftUI::EnvironmentObject::init();
  local_218 = FUN_100009bdc;
  uStack_210 = 0;
  local_208 = 0;
  puStack_220 = puVar4;
  if (DAT_1005564c0 != -1) {
    _swift_once(&DAT_1005564c0,FUN_10017806c);
  }
  uVar2 = DAT_100577cc0;
  uVar5 = 0;
  FUN_1001a81c0();
  puVar4 = &DAT_10054aa50;
  FUN_1000036d0(&DAT_10054aa50,FUN_1001a81c0,&TargetProtocolConformanceDescriptor_100429ab0);
  _swift_retain(uVar2);
  local_200 = (undefined *)SwiftUI::ObservedObject::init(puVar4,uVar5,puVar4);
  local_150[0] = 0;
  local_150[1] = 0;
  puVar4 = &DAT_100549db0;
  uStack_1f8 = uVar5;
  FUN_100002f94(&DAT_100549db0,&DAT_100419ed0);
  SwiftUI::State::init(auStack_1f0,puVar4,puVar4);
  puVar1 = PTR___type_metadata_for_Swift_Bool_100523b70;
  local_150[0] = local_150[0] & 0xffffffffffffff00;
  SwiftUI::State::init(auStack_1d8,puVar4,PTR___type_metadata_for_Swift_Bool_100523b70);
  local_150[0] = local_150[0] & 0xffffffffffffff00;
  SwiftUI::State::init(auStack_1c8,puVar4,puVar1);
  local_150[0] = local_150[0] & 0xffffffffffffff00;
  SwiftUI::GestureState::init(auStack_1b8,puVar4,puVar1);
  SVar7.bridgeObject = (void *)0x80000001004dbc80;
  SVar7.str = (char *)0xd000000000000016;
  local_198 = (undefined *)SwiftUI::AppStorage::_init(true,SVar7);
  SVar8.bridgeObject = (void *)0xec00000072614275;
  SVar8.str = (char *)0x6e654d7470616461;
  local_190 = (undefined *)SwiftUI::AppStorage::_init(false,SVar8);
  SVar9.bridgeObject = (void *)0x80000001004dbca0;
  SVar9.str = (char *)0xd000000000000019;
  local_188 = (undefined *)SwiftUI::AppStorage::_init(300,SVar9);
  local_150[0] = 0x3ff0000000000000;
  SwiftUI::State::init(auStack_180,local_188,PTR___type_metadata_for_Swift_Double_100523b90);
  if (DAT_100551178 != -1) {
    _swift_once(&DAT_100551178,FUN_1000c7edc);
  }
  uVar2 = DAT_100577c10;
  uVar5 = 0;
  FUN_1000c82fc();
  puVar4 = &DAT_10054aa58;
  FUN_1000036d0(&DAT_10054aa58,FUN_1000c82fc,&TargetProtocolConformanceDescriptor_100422cd4);
  _swift_retain(uVar2);
  local_170 = (undefined *)SwiftUI::ObservedObject::init(puVar4,uVar5,puVar4);
  AVar6.unknown = &DAT_10054aac0;
  uStack_168 = uVar5;
  FUN_100002f94(&DAT_10054aac0,&DAT_10042a890);
  _swift_initStaticObject();
  local_160 = AVar6.unknown;
  local_158 = (undefined *)SwiftUI::Animation::spring(0.28,0.95,0.25,AVar6);
  _memcpy(local_150,auStack_260,0x110);
  _memcpy(param_1,local_150,0x110);
  return;
}

