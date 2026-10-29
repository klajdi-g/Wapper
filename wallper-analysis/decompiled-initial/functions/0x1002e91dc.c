// rea decompile_all
// name: FUN_1002e91dc
// address: 0x1002e91dc
// body: available
// range: 0x1002e91dc-0x1002e9613 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002e9264 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1002e91dc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  ObservedObject<undefined> OVar3;
  AppStorage<String> AVar4;
  AppStorage<bool> AVar5;
  AppStorage<bool> AVar6;
  AppStorage<bool> AVar7;
  AppStorage<bool> AVar8;
  AppStorage<bool> AVar9;
  AppStorage<__int64> AVar10;
  AppStorage<bool> AVar11;
  AppStorage<double> AVar12;
  AppStorage<double> AVar13;
  LocalizedStringKey LVar14;
  undefined8 uVar15;
  byte bVar16;
  undefined8 uVar17;
  String wrappedValue;
  String SVar18;
  String SVar19;
  String stringLiteral;
  String stringLiteral_00;
  String stringLiteral_01;
  String stringLiteral_02;
  String stringLiteral_03;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 local_100;
  undefined7 uStack_ff;
  ulong local_f0;
  
  if (DAT_100555940 != -1) {
    _swift_once(&DAT_100555940,FUN_10016e078);
  }
  uVar17 = DAT_100577cb0;
  uVar1 = 0;
  FUN_10016ed68();
  puVar2 = &DAT_10054aba0;
  FUN_1000036d0(&DAT_10054aba0,FUN_10016ed68,&TargetProtocolConformanceDescriptor_1004295e8);
  _swift_retain(uVar17);
  OVar3 = SwiftUI::ObservedObject::init(puVar2,uVar1,puVar2);
  wrappedValue.bridgeObject = (void *)0xe600000000000000;
  wrappedValue.str = (char *)0x65766974616e;
  SVar27.bridgeObject = (void *)0x80000001004de540;
  SVar27.str = (char *)0xd000000000000012;
  AVar4 = SwiftUI::AppStorage::_init(wrappedValue,SVar27);
  SVar20.bridgeObject = (void *)0x80000001004de4c0;
  SVar20.str = (char *)0xd000000000000011;
  AVar5 = SwiftUI::AppStorage::_init(true,SVar20);
  SVar21.bridgeObject = (void *)0x80000001004de5a0;
  SVar21.str = (char *)0xd000000000000018;
  AVar6 = SwiftUI::AppStorage::_init(true,SVar21);
  SVar22.bridgeObject = (void *)0x80000001004de5c0;
  SVar22.str = (char *)0xd000000000000015;
  AVar7 = SwiftUI::AppStorage::_init(false,SVar22);
  SVar23.bridgeObject = (void *)0x80000001004de4e0;
  SVar23.str = (char *)0xd000000000000012;
  AVar8 = SwiftUI::AppStorage::_init(false,SVar23);
  SVar24.bridgeObject = (void *)0x80000001004de500;
  SVar24.str = (char *)0xd000000000000011;
  AVar9 = SwiftUI::AppStorage::_init(true,SVar24);
  SVar25.bridgeObject = (void *)0x80000001004de520;
  SVar25.str = (char *)0xd000000000000013;
  AVar10 = SwiftUI::AppStorage::_init(0x14,SVar25);
  uVar17 = 0;
  SVar26.bridgeObject = (void *)0x80000001004de580;
  SVar26.str = (char *)0xd000000000000016;
  AVar11 = SwiftUI::AppStorage::_init(true,SVar26);
  SVar18.bridgeObject = (void *)0xeb00000000656d75;
  SVar18.str = (char *)0x6c6f566f65646976;
  AVar12 = SwiftUI::AppStorage::_init(0.0,SVar18);
  SVar19.bridgeObject = (void *)0x80000001004de560;
  SVar19.str = (char *)0xd000000000000016;
  AVar13 = SwiftUI::AppStorage::_init(0.8,SVar19);
  local_f0 = local_f0 & 0xffffffffffffff00;
  SwiftUI::State::init(&local_130,AVar13.unknown,PTR___type_metadata_for_Swift_Bool_100523b70);
  puVar2 = PTR___type_metadata_for_Swift_Int_100523bd8;
  local_f0 = 0;
  SwiftUI::State::init(&uStack_120,AVar13.unknown,PTR___type_metadata_for_Swift_Int_100523bd8);
  local_f0 = 0;
  SwiftUI::State::init(&local_110,AVar13.unknown,puVar2);
  if (DAT_100559bd0 != -1) {
    _swift_once(&DAT_100559bd0,FUN_100299618);
  }
  local_100 = DAT_100577e08;
  puVar2 = &DAT_10055ac10;
  FUN_100002f94(&DAT_10055ac10,&DAT_10042f390);
  bVar16 = 7;
  _swift_allocObject();
  *(undefined8 *)(puVar2 + 0x18) = 10;
  *(undefined8 *)(puVar2 + 0x10) = 5;
  *(undefined8 *)(puVar2 + 0x20) = 0x65766974616e;
  *(undefined8 *)(puVar2 + 0x28) = 0xe600000000000000;
  uVar15 = 0x80000001004e5160;
  stringLiteral.bridgeObject = (void *)0x80000001004e5160;
  stringLiteral.str = (char *)0xd000000000000017;
  LVar14 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  *(undefined **)(puVar2 + 0x30) = LVar14.unknown;
  *(undefined8 *)(puVar2 + 0x38) = uVar15;
  puVar2[0x40] = bVar16 & 1;
  *(undefined8 *)(puVar2 + 0x48) = uVar17;
  *(undefined8 *)(puVar2 + 0x50) = 0x6b34;
  *(undefined8 *)(puVar2 + 0x58) = 0xe200000000000000;
  stringLiteral_00.bridgeObject = (void *)0xe200000000000000;
  stringLiteral_00.str = (char *)0x4b34;
  uVar15 = 0xe200000000000000;
  LVar14 = SwiftUI::LocalizedStringKey::init(stringLiteral_00);
  *(undefined **)(puVar2 + 0x60) = LVar14.unknown;
  *(undefined8 *)(puVar2 + 0x68) = uVar15;
  puVar2[0x70] = bVar16 & 1;
  *(undefined8 *)(puVar2 + 0x78) = uVar17;
  *(undefined8 *)(puVar2 + 0x80) = 0x7030343431;
  *(undefined8 *)(puVar2 + 0x88) = 0xe500000000000000;
  stringLiteral_01.bridgeObject = (void *)0xe500000000000000;
  stringLiteral_01.str = (char *)0x7030343431;
  uVar15 = 0xe500000000000000;
  LVar14 = SwiftUI::LocalizedStringKey::init(stringLiteral_01);
  *(undefined **)(puVar2 + 0x90) = LVar14.unknown;
  *(undefined8 *)(puVar2 + 0x98) = uVar15;
  puVar2[0xa0] = bVar16 & 1;
  *(undefined8 *)(puVar2 + 0xa8) = uVar17;
  *(undefined8 *)(puVar2 + 0xb0) = 0x7030383031;
  *(undefined8 *)(puVar2 + 0xb8) = 0xe500000000000000;
  stringLiteral_02.bridgeObject = (void *)0xe500000000000000;
  stringLiteral_02.str = (char *)0x7030383031;
  uVar15 = 0xe500000000000000;
  LVar14 = SwiftUI::LocalizedStringKey::init(stringLiteral_02);
  *(undefined **)(puVar2 + 0xc0) = LVar14.unknown;
  *(undefined8 *)(puVar2 + 200) = uVar15;
  puVar2[0xd0] = bVar16 & 1;
  *(undefined8 *)(puVar2 + 0xd8) = uVar17;
  *(undefined8 *)(puVar2 + 0xe0) = 0x70303237;
  *(undefined8 *)(puVar2 + 0xe8) = 0xe400000000000000;
  uVar15 = 0x80000001004e5180;
  stringLiteral_03.bridgeObject = (void *)0x80000001004e5180;
  stringLiteral_03.str = (char *)0x1000000000000017;
  LVar14 = SwiftUI::LocalizedStringKey::init(stringLiteral_03);
  *(undefined **)(puVar2 + 0xf0) = LVar14.unknown;
  *(undefined8 *)(puVar2 + 0xf8) = uVar15;
  puVar2[0x100] = bVar16 & 1;
  *(undefined8 *)(puVar2 + 0x108) = uVar17;
  param_1[0xd] = uStack_128;
  param_1[0xc] = local_130;
  param_1[0xf] = uStack_118;
  param_1[0xe] = uStack_120;
  param_1[0x11] = uStack_108;
  param_1[0x10] = local_110;
  param_1[0x13] = puVar2;
  param_1[0x12] = CONCAT71(uStack_ff,local_100);
  param_1[5] = AVar7.unknown;
  param_1[4] = AVar6.unknown;
  param_1[7] = AVar9.unknown;
  param_1[6] = AVar8.unknown;
  param_1[9] = AVar11.unknown;
  param_1[8] = AVar10.unknown;
  param_1[0xb] = AVar13.unknown;
  param_1[10] = AVar12.unknown;
  param_1[1] = uVar1;
  *param_1 = OVar3.unknown;
  param_1[3] = AVar5.unknown;
  param_1[2] = AVar4.unknown;
  return;
}

