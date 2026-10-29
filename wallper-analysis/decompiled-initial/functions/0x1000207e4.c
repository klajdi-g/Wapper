// rea decompile_all
// name: FUN_1000207e4
// address: 0x1000207e4
// body: available
// range: 0x1000207e4-0x100020923 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000207e4(undefined8 *param_1,long *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  EnvironmentObject<undefined> EVar5;
  AppStorage<__int64> AVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  String SVar10;
  undefined1 auStack_a8 [72];
  
  puVar2 = &DAT_100525d60;
  _swift_allocObject(&DAT_100525d60,0x58,7);
  lVar7 = param_2[4];
  lVar9 = param_2[7];
  lVar8 = param_2[6];
  *(long *)(puVar2 + 0x38) = param_2[5];
  *(long *)(puVar2 + 0x30) = lVar7;
  *(long *)(puVar2 + 0x48) = lVar9;
  *(long *)(puVar2 + 0x40) = lVar8;
  *(long *)(puVar2 + 0x50) = param_2[8];
  lVar9 = *param_2;
  lVar8 = param_2[3];
  lVar7 = param_2[2];
  *(long *)(puVar2 + 0x18) = param_2[1];
  *(long *)(puVar2 + 0x10) = lVar9;
  *(long *)(puVar2 + 0x28) = lVar8;
  *(long *)(puVar2 + 0x20) = lVar7;
  FUN_10002b2a8(param_2,auStack_a8);
  uVar3 = 0;
  FUN_1001b7378();
  puVar4 = &DAT_100553df0;
  FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
  EVar5 = SwiftUI::EnvironmentObject::init();
  SVar10.bridgeObject = (void *)0xeb00000000626154;
  SVar10.str = (char *)0x64657463656c6573;
  AVar6 = SwiftUI::AppStorage::_init(0,SVar10);
  lVar7 = *param_2;
  if (lVar7 != 0) {
    _swift_retain(lVar7);
    (extension_SwiftUI)::Combine::ObservableObject::_get_environmentStore();
    *param_1 = EVar5.unknown;
    param_1[1] = puVar4;
    param_1[2] = FUN_10002b644;
    param_1[3] = puVar2;
    param_1[4] = AVar6.unknown;
    param_1[5] = uVar3;
    param_1[6] = lVar7;
    return;
  }
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100020924);
  (*pcVar1)();
}

