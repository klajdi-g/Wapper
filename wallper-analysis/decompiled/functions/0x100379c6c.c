// rea decompile_all
// name: FUN_100379c6c
// address: 0x100379c6c
// body: available
// range: 0x100379c6c-0x100379dd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100379c6c(long param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  code *pcVar4;
  long lVar5;
  State SVar6;
  long lVar7;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  char local_50;
  long lStack_48;
  
  lVar5 = 0;
  FUN_10034c390();
  puVar1 = (undefined1 *)(param_1 + *(int *)(lVar5 + 0x24));
  uStack_78 = *(undefined8 *)(puVar1 + 8);
  local_80 = CONCAT71(local_80._1_7_,*puVar1);
  SVar6.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar6);
  if (local_50 == '\x01') {
    lVar7 = *(long *)(param_1 + *(int *)(lVar5 + 0x1c));
    if (lVar7 == 0) {
      FUN_1001b7378(0);
      FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
      SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100379dd8);
      (*pcVar4)();
    }
    iVar3 = *(int *)(lVar5 + 0x14);
    puVar2 = (undefined8 *)(param_1 + *(int *)(lVar5 + 0x20));
    uStack_78 = puVar2[1];
    local_80 = *puVar2;
    local_70 = puVar2[2];
    _swift_retain(lVar7);
    SVar6.unknown = &DAT_10054dd08;
    FUN_100002f94(&DAT_10054dd08,&DAT_10041ea50);
    SwiftUI::State::get_wrappedValue(SVar6);
    lVar5 = lStack_48;
    FUN_1001d3a38();
    if (lVar5 != 0) {
      local_70 = param_1 + iVar3;
      FUN_1001b9fc0(param_1,param_2,&local_80);
      _swift_bridgeObjectRelease(lVar5);
    }
    _swift_release(lVar7);
    _swift_bridgeObjectRelease(lStack_48);
  }
  return;
}

