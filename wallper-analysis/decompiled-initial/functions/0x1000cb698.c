// rea decompile_all
// name: FUN_1000cb698
// address: 0x1000cb698
// body: available
// range: 0x1000cb698-0x1000cb82f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000cb698(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined *puVar4;
  long lVar5;
  long extraout_x8;
  code *pcVar6;
  long extraout_x12;
  undefined1 *puVar7;
  undefined1 *puVar8;
  
  puVar4 = &DAT_10054a9d0;
  FUN_100002f94(&DAT_10054a9d0,&DAT_10041bc60);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  puVar8 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar7 = puVar8 + -extraout_x12;
  cVar3 = *param_1;
  lVar5 = 0;
  FUN_1001d59ac();
  pcVar6 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
  if (cVar3 == '\x01') {
    (*pcVar6)(puVar7,1,1);
    lVar5 = param_4[3];
    if (lVar5 == 0) {
LAB_1000cb7ec:
      FUN_1001b7378(0);
      FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
      SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1000cb830);
      (*pcVar6)();
    }
    uVar1 = *param_4;
    uVar2 = param_4[1];
    _swift_retain(lVar5);
    FUN_1000cd408(uVar1,uVar2,puVar7,param_5,lVar5);
    puVar8 = puVar7;
  }
  else {
    (*pcVar6)(puVar8,1,1,lVar5);
    lVar5 = param_4[3];
    if (lVar5 == 0) goto LAB_1000cb7ec;
    uVar1 = *param_4;
    uVar2 = param_4[1];
    _swift_retain(lVar5);
    FUN_1000cdb08(uVar1,uVar2,param_5,puVar8,lVar5);
  }
  _swift_release(lVar5);
  FUN_10002a29c(puVar8,&DAT_10054a9d0,&DAT_10041bc60);
  return;
}

