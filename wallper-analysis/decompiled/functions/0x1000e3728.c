// rea decompile_all
// name: FUN_1000e3728
// address: 0x1000e3728
// body: available
// range: 0x1000e3728-0x1000e3867 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000e3728(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  long *unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar6 = unaff_x20[2];
  if (lVar6 != 0) {
    lVar2 = *unaff_x20;
    uVar4 = unaff_x20[1];
    lVar1 = lVar6;
    _swift_retain();
    FUN_1002748c4();
    _swift_bridgeObjectRelease(param_3);
    if ((*(long *)(lVar1 + 0x10) == 0) || (FUN_10000464c(lVar2), (uVar4 & 1) == 0)) {
      _swift_bridgeObjectRelease(lVar1);
      _swift_release(lVar6);
      lVar3 = 0;
      FUN_10040211c();
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar3 + -8) + 0x38);
      uVar5 = 1;
    }
    else {
      lVar7 = *(long *)(lVar1 + 0x38);
      lVar3 = 0;
      FUN_10040211c();
      lVar8 = *(long *)(lVar3 + -8);
      FUN_100029504(lVar7 + *(long *)(lVar8 + 0x48) * lVar2,param_1,FUN_10040211c);
      _swift_bridgeObjectRelease(lVar1);
      _swift_release(lVar6);
      UNRECOVERED_JUMPTABLE = *(code **)(lVar8 + 0x38);
      uVar5 = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x0001000e3820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,uVar5,1,lVar3);
    return;
  }
  FUN_100279594(0);
  FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1000e3868);
  (*UNRECOVERED_JUMPTABLE)();
}

