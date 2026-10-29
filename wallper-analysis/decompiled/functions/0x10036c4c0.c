// rea decompile_all
// name: FUN_10036c4c0
// address: 0x10036c4c0
// body: available
// range: 0x10036c4c0-0x10036c63b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10036c4c0(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x8;
  long lVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined1 auStack_60 [16];
  undefined8 local_50;
  undefined1 *puStack_48;
  
  puVar2 = &DAT_100550ec0;
  FUN_100002f94(&DAT_100550ec0,&DAT_100422eb0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_60 + -extraout_x8;
  lVar3 = 0;
  FUN_10038ee8c();
  lVar6 = *(long *)(param_1 + *(int *)(lVar3 + 0x28));
  if (lVar6 != 0) {
    lVar3 = param_1 + *(int *)(lVar3 + 0x14);
    lVar4 = 0;
    FUN_1001d59ac();
    uVar8 = *(undefined8 *)(lVar3 + *(int *)(lVar4 + 0x24));
    FUN_100029504(lVar3,puVar7,FUN_1001d537c);
    lVar3 = 0;
    FUN_1001d537c();
    (**(code **)(*(long *)(lVar3 + -8) + 0x38))(puVar7,0,1,lVar3);
    _swift_retain(lVar6);
    uVar5 = uVar8;
    _swift_bridgeObjectRetain();
    FUN_10020c98c();
    _swift_bridgeObjectRelease(uVar8);
    local_50 = uVar5;
    puStack_48 = puVar7;
    FUN_1001b9fc0(param_1,thunk_FUN_1000ce1b4,auStack_60);
    _swift_release(lVar6);
    _swift_bridgeObjectRelease(uVar5);
    FUN_10002a29c(puVar7,&DAT_100550ec0,&DAT_100422eb0);
    return;
  }
  FUN_1001b7378(0);
  FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10036c63c);
  (*pcVar1)();
}

