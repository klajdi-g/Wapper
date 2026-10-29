// rea decompile_all
// name: FUN_1002bbf98
// address: 0x1002bbf98
// body: available
// range: 0x1002bbf98-0x1002bc1af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002bc0ac */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1002bbf98(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  EnvironmentObject<undefined> EVar4;
  long lVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x12;
  long lVar7;
  long lVar8;
  ulong local_70 [2];
  
  puVar2 = &DAT_100554ab8;
  FUN_100002f94(&DAT_100554ab8,&DAT_100427d98);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  lVar7 = (long)local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar8 = lVar7 - extraout_x12;
  FUN_10013b98c(0);
  puVar3 = &DAT_100553150;
  FUN_1000036d0(&DAT_100553150,FUN_10013b98c,&TargetProtocolConformanceDescriptor_1004274b8);
  EVar4 = SwiftUI::EnvironmentObject::init();
  *param_1 = EVar4.unknown;
  param_1[1] = puVar3;
  FUN_10014e37c(0);
  puVar3 = &DAT_100553148;
  FUN_1000036d0(&DAT_100553148,FUN_10014e37c,&TargetProtocolConformanceDescriptor_100427f04);
  EVar4 = SwiftUI::EnvironmentObject::init();
  param_1[2] = EVar4.unknown;
  param_1[3] = puVar3;
  puVar3 = PTR___type_metadata_for_Swift_Bool_100523b70;
  local_70[0] = local_70[0] & 0xffffffffffffff00;
  SwiftUI::State::init(param_1 + 4,EVar4.unknown,PTR___type_metadata_for_Swift_Bool_100523b70);
  local_70[0] = local_70[0] & 0xffffffffffffff00;
  SwiftUI::State::init(param_1 + 6,EVar4.unknown,puVar3);
  lVar5 = 0;
  FUN_1002bc1b0();
  iVar1 = *(int *)(lVar5 + 0x20);
  lVar6 = 0;
  FUN_100400294();
  (**(code **)(*(long *)(lVar6 + -8) + 0x38))(lVar8,1,1,lVar6);
  FUN_1000087e4(lVar8,lVar7,&DAT_100554ab8,&DAT_100427d98);
  SwiftUI::State::init((long)param_1 + (long)iVar1,lVar6,puVar2);
  FUN_10002a29c(lVar8,&DAT_100554ab8,&DAT_100427d98);
  local_70[0] = local_70[0] & 0xffffffffffffff00;
  SwiftUI::State::init((long)param_1 + (long)*(int *)(lVar5 + 0x24),lVar6,puVar3);
  local_70[0] = local_70[0] & 0xffffffffffffff00;
  SwiftUI::State::init((long)param_1 + (long)*(int *)(lVar5 + 0x28),lVar6,puVar3);
  local_70[0] = 0xd000000000000027;
  local_70[1] = 0x80000001004e3e70;
  SwiftUI::State::init
            ((long)param_1 + (long)*(int *)(lVar5 + 0x2c),lVar6,
             PTR___type_metadata_for_Swift_String_100523a98);
  return;
}

