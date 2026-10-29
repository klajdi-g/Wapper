// rea decompile_all
// name: FUN_10037b81c
// address: 0x10037b81c
// body: available
// range: 0x10037b81c-0x10037b9cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010037b990 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10037b81c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  EnvironmentObject<undefined> EVar6;
  undefined8 *puVar7;
  EnvironmentObject<undefined> EVar8;
  undefined *puVar9;
  EnvironmentObject<undefined> EVar10;
  
  lVar3 = 0;
  FUN_10038ffac();
  FUN_100029504(param_3,(long)param_1 + (long)*(int *)(lVar3 + 0x14),FUN_10040211c);
  FUN_100029504(param_4,(long)param_1 + (long)*(int *)(lVar3 + 0x18),FUN_10025ee04);
  lVar4 = 0;
  FUN_100387a1c();
  uVar2 = *(undefined1 *)(param_4 + *(int *)(lVar4 + 0x18));
  FUN_1001b7378(0);
  puVar5 = &DAT_100553df0;
  FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
  EVar6 = SwiftUI::EnvironmentObject::init();
  FUN_100279594(0);
  puVar7 = &DAT_100553dd0;
  FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
  EVar8 = SwiftUI::EnvironmentObject::init();
  FUN_100226ac0(0);
  puVar9 = &DAT_10054aa48;
  FUN_1000036d0(&DAT_10054aa48,FUN_100226ac0,&TargetProtocolConformanceDescriptor_10042b420);
  EVar10 = SwiftUI::EnvironmentObject::init();
  *param_1 = param_2;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar3 + 0x1c)) = uVar2;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x20));
  *puVar1 = EVar6.unknown;
  puVar1[1] = puVar5;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x24));
  *puVar1 = EVar8.unknown;
  puVar1[1] = puVar7;
  puVar7 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x28));
  *puVar7 = EVar10.unknown;
  puVar7[1] = puVar9;
  puVar5 = PTR___type_metadata_for_Swift_Bool_100523b70;
  SwiftUI::State::init
            ((long)param_1 + (long)*(int *)(lVar3 + 0x2c),EVar10.unknown,
             PTR___type_metadata_for_Swift_Bool_100523b70);
  SwiftUI::State::init((long)param_1 + (long)*(int *)(lVar3 + 0x30),EVar10.unknown,puVar5);
  return;
}

