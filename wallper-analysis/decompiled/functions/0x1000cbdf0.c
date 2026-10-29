// rea decompile_all
// name: FUN_1000cbdf0
// address: 0x1000cbdf0
// body: available
// range: 0x1000cbdf0-0x1000cbfbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000cbdf0(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar6;
  undefined1 *puVar7;
  
  puVar4 = &DAT_10054a9d0;
  FUN_100002f94(&DAT_10054a9d0,&DAT_10041bc60);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  puVar7 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar6 = puVar7 + -extraout_x12;
  if (*param_1 == '\x01') {
    FUN_100029504(param_5,puVar6,FUN_1001d59ac);
    lVar5 = 0;
    FUN_1001d59ac();
    (**(code **)(*(long *)(lVar5 + -8) + 0x38))(puVar6,0,1,lVar5);
    lVar5 = param_4[3];
    if (lVar5 == 0) {
LAB_1000cbf78:
      FUN_1001b7378(0);
      FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
      SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1000cbfbc);
      (*pcVar3)();
    }
    uVar1 = *param_4;
    uVar2 = param_4[1];
    _swift_retain(lVar5);
    FUN_1000cd408(uVar1,uVar2,puVar6,param_6,lVar5);
    puVar7 = puVar6;
  }
  else {
    FUN_100029504(param_5,puVar7,FUN_1001d59ac);
    lVar5 = 0;
    FUN_1001d59ac();
    (**(code **)(*(long *)(lVar5 + -8) + 0x38))(puVar7,0,1,lVar5);
    lVar5 = param_4[3];
    if (lVar5 == 0) goto LAB_1000cbf78;
    uVar1 = *param_4;
    uVar2 = param_4[1];
    _swift_retain(lVar5);
    FUN_1000cdb08(uVar1,uVar2,param_6,puVar7,lVar5);
  }
  _swift_release(lVar5);
  FUN_10002a29c(puVar7,&DAT_10054a9d0,&DAT_10041bc60);
  return;
}

