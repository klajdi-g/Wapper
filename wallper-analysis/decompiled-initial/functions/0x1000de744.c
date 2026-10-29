// rea decompile_all
// name: FUN_1000de744
// address: 0x1000de744
// body: available
// range: 0x1000de744-0x1000de88b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000de810 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000de744(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  EnvironmentObject<undefined> EVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  FUN_100029504(param_3,param_1,FUN_10040211c);
  uVar4 = 0;
  FUN_100279594();
  puVar5 = &DAT_100553dd0;
  FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
  uVar10 = *(undefined8 *)(param_4 + 0x10);
  uVar9 = *(undefined8 *)(param_4 + 8);
  _swift_retain(*(undefined8 *)(param_4 + 0x10));
  EVar6 = SwiftUI::EnvironmentObject::init();
  lVar7 = 0;
  FUN_1000e12c4();
  *(undefined8 *)(param_1 + *(int *)(lVar7 + 0x14)) = param_2;
  puVar2 = (undefined8 *)(param_1 + *(int *)(lVar7 + 0x18));
  puVar2[1] = uVar10;
  *puVar2 = uVar9;
  puVar2 = (undefined8 *)(param_1 + *(int *)(lVar7 + 0x1c));
  *puVar2 = EVar6.unknown;
  puVar2[1] = puVar5;
  SwiftUI::State::init
            (param_1 + *(int *)(lVar7 + 0x20),lVar7,PTR___type_metadata_for_Swift_Bool_100523b70);
  lVar7 = *(long *)(param_4 + 0x18);
  if (lVar7 != 0) {
    _swift_retain(lVar7);
    (extension_SwiftUI)::Combine::ObservableObject::_get_environmentStore();
    puVar8 = &DAT_1005518e8;
    FUN_100002f94(&DAT_1005518e8,&DAT_1004237e8);
    iVar1 = *(int *)(puVar8 + 0x24);
    *(undefined8 *)(param_1 + iVar1) = uVar4;
    ((undefined8 *)(param_1 + iVar1))[1] = lVar7;
    return;
  }
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1000de88c);
  (*pcVar3)();
}

