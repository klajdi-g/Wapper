// rea decompile_all
// name: FUN_10036bc70
// address: 0x10036bc70
// body: available
// range: 0x10036bc70-0x10036bd73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_10036bc70(long param_1,long param_2)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    lVar3 = 0;
    FUN_10038ee8c();
    lVar5 = *(long *)(param_2 + *(int *)(lVar3 + 0x28));
    if (lVar5 == 0) {
      FUN_1001b7378(0);
      FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
      _swift_bridgeObjectRetain(uVar4);
      SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10036bd74);
      (*pcVar2)();
    }
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    iVar1 = *(int *)(lVar3 + 0x14);
    _swift_bridgeObjectRetain(uVar4);
    _swift_retain(lVar5);
    FUN_1001b6858(uVar6,uVar4,param_2 + iVar1,param_2);
    _swift_bridgeObjectRelease(uVar4);
    _swift_release(lVar5);
    (**(code **)(param_2 + *(int *)(lVar3 + 0x24)))();
  }
  return lVar7 != 0;
}

