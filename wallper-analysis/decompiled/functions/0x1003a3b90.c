// rea decompile_all
// name: FUN_1003a3b90
// address: 0x1003a3b90
// body: available
// range: 0x1003a3b90-0x1003a3df3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003a3ce4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003a3b90(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  EnvironmentObject<undefined> EVar4;
  undefined8 *puVar5;
  long lVar6;
  UUID UVar7;
  long extraout_x8;
  long extraout_x12;
  long lVar8;
  long lVar9;
  code *pcVar10;
  undefined *local_70;
  undefined8 uStack_68;
  
  puVar2 = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  lVar8 = (long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar9 = lVar8 - extraout_x12;
  FUN_1001b7378(0);
  puVar3 = &DAT_100553df0;
  FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
  EVar4 = SwiftUI::EnvironmentObject::init();
  *param_1 = EVar4.unknown;
  param_1[1] = puVar3;
  FUN_100279594(0);
  puVar5 = &DAT_100553dd0;
  FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
  EVar4 = SwiftUI::EnvironmentObject::init();
  param_1[2] = EVar4.unknown;
  param_1[3] = puVar5;
  lVar6 = 0;
  FUN_10039c2bc();
  iVar1 = *(int *)(lVar6 + 0x18);
  UVar7 = Foundation::UUID::typeMetadataAccessor();
  pcVar10 = *(code **)(*(long *)(UVar7.unknown + -8) + 0x38);
  (*pcVar10)(lVar9,1,1,UVar7.unknown);
  FUN_1000087e4(lVar9,lVar8,&DAT_10054a9c8,&DAT_10041bbe0);
  SwiftUI::State::init((long)param_1 + (long)iVar1,UVar7.unknown,puVar2);
  FUN_10002a29c(lVar9,&DAT_10054a9c8,&DAT_10041bbe0);
  local_70 = (undefined *)0x0;
  uStack_68 = 0xe000000000000000;
  SwiftUI::State::init
            ((long)param_1 + (long)*(int *)(lVar6 + 0x1c),UVar7.unknown,
             PTR___type_metadata_for_Swift_String_100523a98);
  iVar1 = *(int *)(lVar6 + 0x20);
  (*pcVar10)(lVar9,1,1,UVar7.unknown);
  FUN_1000087e4(lVar9,lVar8,&DAT_10054a9c8,&DAT_10041bbe0);
  SwiftUI::State::init((long)param_1 + (long)iVar1,UVar7.unknown,puVar2);
  FUN_10002a29c(lVar9,&DAT_10054a9c8,&DAT_10041bbe0);
  local_70 = (undefined *)0xffffffffffffffff;
  SwiftUI::State::init
            ((long)param_1 + (long)*(int *)(lVar6 + 0x24),UVar7.unknown,
             PTR___type_metadata_for_Swift_Int_100523bd8);
  local_70 = (undefined *)((ulong)local_70 & 0xffffffffffffff00);
  SwiftUI::State::init
            ((long)param_1 + (long)*(int *)(lVar6 + 0x28),UVar7.unknown,
             PTR___type_metadata_for_Swift_Bool_100523b70);
  iVar1 = *(int *)(lVar6 + 0x2c);
  local_70 = PTR___swiftEmptyArrayStorage_100524190;
  puVar2 = &DAT_10055bd80;
  FUN_100002f94(&DAT_10055bd80,&DAT_100430b08);
  SwiftUI::State::init((long)param_1 + (long)iVar1,puVar2,puVar2);
  return;
}

