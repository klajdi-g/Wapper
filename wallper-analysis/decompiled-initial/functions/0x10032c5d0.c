// rea decompile_all
// name: FUN_10032c5d0
// address: 0x10032c5d0
// body: available
// range: 0x10032c5d0-0x10032c88f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010032c678 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10032c5d0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  EnvironmentObject<undefined> EVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  uint7 uStack_227;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined *puStack_200;
  undefined1 local_1f8;
  undefined7 uStack_1f7;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined *local_150;
  
  FUN_100279594(0);
  puVar3 = &DAT_100553dd0;
  FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
  EVar4 = SwiftUI::EnvironmentObject::init();
  uVar5 = 0;
  FUN_100327604();
  uVar6 = uVar5;
  _swift_allocObject();
  local_150 = (undefined *)0x0;
  Combine::Published::init
            (uVar6 + _TtC7WallperP33_10B5BC8A445113D7DE69555D7FD5BD6815HeroScrollState::_offset,
             uVar6,PTR___type_metadata_for_CoreGraphics_CGFloat_100524430);
  local_150 = (undefined *)uVar6;
  SwiftUI::State::init(&uStack_220,uVar6,uVar5);
  puVar1 = PTR___type_metadata_for_Swift_Bool_100523b70;
  local_150 = (undefined *)((ulong)local_150 & 0xffffffffffffff00);
  SwiftUI::State::init(&uStack_210,uVar6,PTR___type_metadata_for_Swift_Bool_100523b70);
  puVar7 = &DAT_100431a18;
  _swift_getKeyPath();
  local_1f8 = 0;
  local_150 = (undefined *)((ulong)local_150 & 0xffffffffffffff00);
  puStack_200 = puVar7;
  SwiftUI::State::init(&uStack_1f0,puVar7,puVar1);
  puVar2 = PTR___swiftEmptyArrayStorage_100524190;
  local_150 = PTR___swiftEmptyArrayStorage_100524190;
  puVar7 = &DAT_100558960;
  FUN_100002f94(&DAT_100558960,&DAT_10042b290);
  SwiftUI::State::init(&uStack_1e0,puVar7,puVar7);
  local_150 = puVar2;
  SwiftUI::State::init(&uStack_1d0,puVar7,puVar7);
  local_150 = puVar2;
  SwiftUI::State::init(&uStack_1c0,puVar7,puVar7);
  local_150 = puVar2;
  SwiftUI::State::init(&uStack_1b0,puVar7,puVar7);
  local_150 = (undefined *)((ulong)local_150 & 0xffffffffffffff00);
  SwiftUI::State::init(&uStack_1a0,puVar7,puVar1);
  puVar1 = PTR___type_metadata_for_Swift_Int_100523bd8;
  local_150 = (undefined *)0xffffffffffffffff;
  SwiftUI::State::init(&uStack_190,puVar7,PTR___type_metadata_for_Swift_Int_100523bd8);
  local_150 = (undefined *)0x0;
  SwiftUI::State::init(&uStack_180,puVar7,puVar1);
  local_150 = (undefined *)0xffffffffffffffff;
  SwiftUI::State::init(&uStack_170,puVar7,puVar1);
  local_150 = puVar2;
  puVar7 = &DAT_10055bd80;
  FUN_100002f94(&DAT_10055bd80,&DAT_100430b08);
  SwiftUI::State::init(&uStack_160,puVar7,puVar7);
  param_1[0x19] = uStack_180;
  param_1[0x18] = local_188;
  param_1[0x1b] = uStack_170;
  param_1[0x1a] = local_178;
  param_1[0x1d] = uStack_160;
  param_1[0x1c] = local_168;
  param_1[0x1e] = local_158;
  param_1[0x11] = uStack_1c0;
  param_1[0x10] = local_1c8;
  param_1[0x13] = uStack_1b0;
  param_1[0x12] = local_1b8;
  param_1[0x15] = uStack_1a0;
  param_1[0x14] = local_1a8;
  param_1[0x17] = uStack_190;
  param_1[0x16] = local_198;
  param_1[9] = puStack_200;
  param_1[8] = local_208;
  param_1[0xb] = uStack_1f0;
  param_1[10] = CONCAT71(uStack_1f7,local_1f8);
  param_1[0xd] = uStack_1e0;
  param_1[0xc] = local_1e8;
  param_1[0xf] = uStack_1d0;
  param_1[0xe] = local_1d8;
  param_1[1] = puVar3;
  *param_1 = EVar4.unknown;
  param_1[3] = 0;
  param_1[2] = FUN_100321398;
  param_1[5] = uStack_220;
  param_1[4] = (ulong)uStack_227 << 8;
  param_1[7] = uStack_210;
  param_1[6] = local_218;
  return;
}

