// rea decompile_all
// name: FUN_1003205b4
// address: 0x1003205b4
// body: available
// range: 0x1003205b4-0x100320893 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100320624 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003205b4(void *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  FocusState<bool> FVar8;
  byte bVar9;
  undefined *local_290;
  undefined8 *puStack_288;
  undefined1 auStack_280 [24];
  undefined1 auStack_268 [16];
  undefined1 auStack_258 [16];
  undefined1 auStack_248 [16];
  undefined1 auStack_238 [16];
  undefined1 auStack_228 [16];
  undefined1 auStack_218 [16];
  undefined1 auStack_208 [16];
  undefined1 auStack_1f8 [16];
  undefined1 auStack_1e8 [16];
  undefined1 auStack_1d8 [16];
  undefined1 auStack_1c8 [16];
  undefined1 auStack_1b8 [16];
  undefined *local_1a8;
  undefined8 uStack_1a0;
  undefined1 auStack_198 [16];
  undefined8 local_188;
  byte local_180;
  undefined *local_178;
  byte local_170;
  undefined *local_168;
  undefined8 uStack_160;
  
  FUN_100279594(0);
  puVar5 = &DAT_100553dd0;
  FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
  local_290 = (undefined *)SwiftUI::EnvironmentObject::init();
  local_168 = (undefined *)0x0;
  uStack_160 = 0xe000000000000000;
  puStack_288 = puVar5;
  SwiftUI::State::init(auStack_280,local_290,PTR___type_metadata_for_Swift_String_100523a98);
  local_168._0_1_ = 0xe;
  puVar6 = &DAT_10055bd10;
  FUN_100002f94(&DAT_10055bd10,&DAT_100430a40);
  SwiftUI::State::init(auStack_268,puVar6,puVar6);
  puVar1 = PTR___type_metadata_for_Swift_Bool_100523b70;
  local_168 = (undefined *)((ulong)local_168._1_7_ << 8);
  SwiftUI::State::init(auStack_258,puVar6,PTR___type_metadata_for_Swift_Bool_100523b70);
  puVar2 = PTR___type_metadata_for_Swift_Int_100523bd8;
  local_168 = (undefined *)0xffffffffffffffff;
  SwiftUI::State::init(auStack_248,puVar6,PTR___type_metadata_for_Swift_Int_100523bd8);
  local_168 = (undefined *)((ulong)local_168 & 0xffffffffffffff00);
  SwiftUI::State::init(auStack_238,puVar6,puVar1);
  puVar3 = PTR___swiftEmptyArrayStorage_100524190;
  local_168 = PTR___swiftEmptyArrayStorage_100524190;
  puVar6 = &DAT_10055bd80;
  FUN_100002f94(&DAT_10055bd80,&DAT_100430b08);
  SwiftUI::State::init(auStack_228,puVar6,puVar6);
  local_168._0_1_ = 2;
  SwiftUI::State::init(auStack_218,puVar6,&DAT_10053f2a0);
  local_168 = (undefined *)((ulong)local_168._1_7_ << 8);
  SwiftUI::State::init(auStack_208,puVar6,&DAT_10053f210);
  local_168 = (undefined *)0x1e;
  SwiftUI::State::init(auStack_1f8,puVar6,puVar2);
  local_168 = puVar3;
  puVar6 = &DAT_100558960;
  FUN_100002f94(&DAT_100558960,&DAT_10042b290);
  SwiftUI::State::init(auStack_1e8,puVar6,puVar6);
  local_168 = puVar3;
  puVar6 = &DAT_10055c0e0;
  FUN_100002f94(&DAT_10055c0e0,&DAT_100430e30);
  SwiftUI::State::init(auStack_1d8,puVar6,puVar6);
  local_168 = (undefined *)CONCAT71(local_168._1_7_,1);
  SwiftUI::State::init(auStack_1c8,puVar6,puVar1);
  local_168 = (undefined *)0x0;
  puVar6 = &DAT_10055bd58;
  FUN_100002f94(&DAT_10055bd58,&DAT_100430ac0);
  SwiftUI::State::init(auStack_1b8,puVar6,puVar6);
  if (DAT_1005597a0 != -1) {
    _swift_once(&DAT_1005597a0,FUN_10029310c);
  }
  uVar4 = DAT_100577dd0;
  uVar7 = 0;
  FUN_100293360();
  FUN_1000036d0(&DAT_10055c478,FUN_100293360,&TargetProtocolConformanceDescriptor_10042d9c0);
  bVar9 = (byte)uVar7;
  _swift_retain(uVar4);
  local_1a8 = (undefined *)SwiftUI::ObservedObject::init();
  local_168 = (undefined *)0x0;
  puVar6 = PTR___type_metadata_for_Swift_Int_100523bd8;
  uStack_1a0 = uVar7;
  SwiftUI::State::init(auStack_198);
  local_188 = 0x1e;
  FVar8 = SwiftUI::FocusState::_init();
  local_180 = (byte)FVar8.unknown & 1;
  local_170 = bVar9 & 1;
  local_178 = puVar6;
  _memcpy(&local_168,&local_290,0x121);
  _memcpy(param_1,&local_168,0x121);
  return;
}

