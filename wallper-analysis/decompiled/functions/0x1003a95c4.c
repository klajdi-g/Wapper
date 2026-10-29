// rea decompile_all
// name: FUN_1003a95c4
// address: 0x1003a95c4
// body: available
// range: 0x1003a95c4-0x1003a98f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003a97e0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003a95c4(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  UUID UVar4;
  EnvironmentObject<undefined> EVar5;
  undefined8 *puVar6;
  EnvironmentObject<undefined> EVar7;
  undefined *puVar8;
  EnvironmentObject<undefined> EVar9;
  long lVar10;
  long lVar11;
  long extraout_x8;
  long extraout_x12;
  long lVar12;
  undefined1 auStack_80 [8];
  undefined *local_78;
  ulong local_70;
  undefined8 uStack_68;
  
  puVar3 = &DAT_100550ec0;
  FUN_100002f94(&DAT_100550ec0,&DAT_100422eb0);
  local_78 = puVar3;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = (long)(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar4.unknown + -8) + 0x10))(param_1,param_2,UVar4.unknown);
  FUN_1001b7378(0);
  puVar3 = &DAT_100553df0;
  FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
  EVar5 = SwiftUI::EnvironmentObject::init();
  FUN_100279594(0);
  puVar6 = &DAT_100553dd0;
  FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
  EVar7 = SwiftUI::EnvironmentObject::init();
  FUN_100226ac0(0);
  puVar8 = &DAT_10054aa48;
  FUN_1000036d0(&DAT_10054aa48,FUN_100226ac0,&TargetProtocolConformanceDescriptor_10042b420);
  EVar9 = SwiftUI::EnvironmentObject::init();
  lVar10 = 0;
  FUN_100386f18();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar10 + 0x14));
  *puVar1 = EVar5.unknown;
  puVar1[1] = puVar3;
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar10 + 0x18));
  *puVar1 = EVar7.unknown;
  puVar1[1] = puVar6;
  puVar6 = (undefined8 *)(param_1 + *(int *)(lVar10 + 0x1c));
  *puVar6 = EVar9.unknown;
  puVar6[1] = puVar8;
  iVar2 = *(int *)(lVar10 + 0x20);
  puVar3 = &DAT_100435210;
  _swift_getKeyPath();
  *(undefined **)(param_1 + iVar2) = puVar3;
  puVar3 = &DAT_10055c948;
  FUN_100002f94(&DAT_10055c948,&DAT_100435240);
  _swift_storeEnumTagMultiPayload(param_1 + iVar2,puVar3,0);
  iVar2 = *(int *)(lVar10 + 0x24);
  lVar11 = 0;
  FUN_1001d537c();
  (**(code **)(*(long *)(lVar11 + -8) + 0x38))(lVar12,1,1,lVar11);
  FUN_1000087e4(lVar12,auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),&DAT_100550ec0,
                &DAT_100422eb0);
  SwiftUI::State::init(param_1 + iVar2,lVar11,local_78);
  FUN_10002a29c(lVar12,&DAT_100550ec0,&DAT_100422eb0);
  local_70 = local_70 & 0xffffffffffffff00;
  SwiftUI::State::init(param_1 + *(int *)(lVar10 + 0x28),lVar11,&DAT_10053bd30);
  puVar8 = PTR___type_metadata_for_Swift_Bool_100523b70;
  local_70 = local_70 & 0xffffffffffffff00;
  SwiftUI::State::init
            (param_1 + *(int *)(lVar10 + 0x2c),lVar11,PTR___type_metadata_for_Swift_Bool_100523b70);
  puVar3 = PTR___type_metadata_for_Swift_String_100523a98;
  local_70 = 0;
  uStack_68 = 0xe000000000000000;
  SwiftUI::State::init
            (param_1 + *(int *)(lVar10 + 0x30),lVar11,PTR___type_metadata_for_Swift_String_100523a98
            );
  local_70 = local_70 & 0xffffffffffffff00;
  SwiftUI::State::init(param_1 + *(int *)(lVar10 + 0x34),lVar11,puVar8);
  local_70 = 0;
  uStack_68 = 0xe000000000000000;
  SwiftUI::State::init(param_1 + *(int *)(lVar10 + 0x38),lVar11,puVar3);
  local_70 = local_70 & 0xffffffffffffff00;
  SwiftUI::State::init(param_1 + *(int *)(lVar10 + 0x3c),lVar11,puVar8);
  puVar3 = PTR___type_metadata_for_Swift_Int_100523bd8;
  local_70 = 0xffffffffffffffff;
  SwiftUI::State::init
            (param_1 + *(int *)(lVar10 + 0x40),lVar11,PTR___type_metadata_for_Swift_Int_100523bd8);
  local_70 = 0;
  SwiftUI::State::init(param_1 + *(int *)(lVar10 + 0x44),lVar11,puVar3);
  return;
}

