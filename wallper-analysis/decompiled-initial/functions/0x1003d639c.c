// rea decompile_all
// name: FUN_1003d639c
// address: 0x1003d639c
// body: available
// range: 0x1003d639c-0x1003d64d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003d639c(long param_1)

{
  long *plVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long local_50;
  undefined *puStack_48;
  
  lVar4 = 0;
  FUN_1003e4bc8();
  iVar2 = *(int *)(lVar4 + 0x44);
  local_50 = CONCAT71(local_50._1_7_,1);
  puVar5 = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::set_wrappedValue((State *)(param_1 + iVar2),&local_50);
  plVar1 = (long *)(param_1 + *(int *)(lVar4 + 0x24));
  puVar6 = (undefined *)plVar1[1];
  if (puVar6 == (undefined *)0x0) {
    lVar8 = *(long *)(param_1 + *(int *)(lVar4 + 0x30));
    if (lVar8 == 0) {
      FUN_100279594(0);
      FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
      SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1003d64d4);
      (*pcVar3)();
    }
    _swift_retain(lVar8);
    lVar7 = param_1;
    FUN_10026a7c8();
    _swift_release(lVar8);
    puVar6 = (undefined *)0x0;
  }
  else {
    lVar7 = *plVar1;
    puVar5 = puVar6;
  }
  iVar2 = *(int *)(lVar4 + 0x48);
  local_50 = lVar7;
  puStack_48 = puVar5;
  _swift_bridgeObjectRetain(puVar6);
  puVar5 = &DAT_10054dd08;
  FUN_100002f94(&DAT_10054dd08,&DAT_10041ea50);
  SwiftUI::State::set_wrappedValue((State *)(param_1 + iVar2),&local_50,puVar5);
  return;
}

