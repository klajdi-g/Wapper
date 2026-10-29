// rea decompile_all
// name: FUN_100380314
// address: 0x100380314
// body: available
// range: 0x100380314-0x1003804ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003803c4 to 0x1004149e4 _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100380314(long param_1)

{
  int iVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  UUID UVar5;
  undefined8 uVar6;
  TargetProtocolConformanceDescriptor *pTVar7;
  long extraout_x8;
  long lVar8;
  undefined1 *puVar9;
  
  puVar3 = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = &stack0xffffffffffffffb0 + -extraout_x8;
  lVar4 = 0;
  FUN_10038ffac();
  if (*(char *)(param_1 + *(int *)(lVar4 + 0x1c)) == '\x01') {
    lVar8 = *(long *)(param_1 + *(int *)(lVar4 + 0x28));
    if (lVar8 != 0) {
      iVar1 = *(int *)(lVar4 + 0x14);
      _swift_retain(lVar8);
      FUN_100222130(param_1 + iVar1);
      _swift_release(lVar8);
      return;
    }
    FUN_100226ac0(0);
    pcVar2 = FUN_100226ac0;
    puVar3 = &DAT_10054aa48;
    pTVar7 = &TargetProtocolConformanceDescriptor_10042b420;
  }
  else {
    lVar8 = *(long *)(param_1 + *(int *)(lVar4 + 0x20));
    if (lVar8 != 0) {
      iVar1 = *(int *)(lVar4 + 0x18);
      UVar5 = Foundation::UUID::typeMetadataAccessor();
      lVar4 = *(long *)(UVar5.unknown + -8);
      (**(code **)(lVar4 + 0x10))(puVar9,param_1 + iVar1,UVar5.unknown);
      uVar6 = 0;
      (**(code **)(lVar4 + 0x38))(puVar9,0,1,UVar5.unknown);
      lVar4 = lVar8;
      _swift_retain(lVar8);
      FUN_10026ac6c();
      FUN_1001b3850(puVar9,lVar4,uVar6);
      _swift_release(lVar8);
      _swift_bridgeObjectRelease(uVar6);
      FUN_10002a29c(puVar9,&DAT_10054a9c8,&DAT_10041bbe0);
      return;
    }
    FUN_1001b7378(0);
    pcVar2 = FUN_1001b7378;
    puVar3 = &DAT_100553df0;
    pTVar7 = &TargetProtocolConformanceDescriptor_10042a5d0;
  }
  FUN_1000036d0(puVar3,pcVar2,pTVar7);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100380500);
  (*pcVar2)();
}

