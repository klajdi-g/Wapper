// rea decompile_all
// name: FUN_100380670
// address: 0x100380670
// body: available
// range: 0x100380670-0x10038081b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100380670(long param_1)

{
  int iVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  long extraout_x8;
  undefined1 *puVar8;
  long lVar9;
  undefined1 auStack_a0 [16];
  undefined *local_90;
  undefined1 *puStack_88;
  undefined1 auStack_80 [48];
  
  puVar3 = &DAT_100550ec0;
  FUN_100002f94(&DAT_100550ec0,&DAT_100422eb0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_a0 + -extraout_x8;
  lVar4 = 0;
  FUN_10038ffac();
  lVar9 = *(long *)(param_1 + *(int *)(lVar4 + 0x20));
  if (lVar9 != 0) {
    puVar3 = &DAT_100549eb0;
    FUN_100002f94(&DAT_100549eb0,&DAT_100426be0);
    puVar7 = auStack_80;
    _swift_initStackObject();
    *(undefined8 *)(puVar3 + 0x18) = 2;
    *(undefined8 *)(puVar3 + 0x10) = 1;
    lVar5 = lVar9;
    _swift_retain();
    FUN_10026ac6c();
    *(long *)(puVar3 + 0x20) = lVar5;
    *(undefined1 **)(puVar3 + 0x28) = puVar7;
    iVar1 = *(int *)(lVar4 + 0x18);
    lVar4 = 0;
    FUN_1001d537c();
    (**(code **)(*(long *)(lVar4 + -8) + 0x38))(puVar8,1,1,lVar4);
    puVar6 = puVar3;
    FUN_10020c98c();
    local_90 = puVar6;
    puStack_88 = puVar8;
    FUN_1001b9fc0(param_1 + iVar1,thunk_FUN_1000ce1b4,auStack_a0);
    _swift_bridgeObjectRelease(puVar6);
    _swift_setDeallocating(puVar3);
    FUN_100043c00(puVar3 + 0x20);
    _swift_release(lVar9);
    FUN_10002a29c(puVar8,&DAT_100550ec0,&DAT_100422eb0);
    return;
  }
  FUN_1001b7378(0);
  FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10038081c);
  (*pcVar2)();
}

