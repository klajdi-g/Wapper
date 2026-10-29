// rea decompile_all
// name: FUN_1000e5ac4
// address: 0x1000e5ac4
// body: available
// range: 0x1000e5ac4-0x1000e5bff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000e5ac4(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  byte local_51;
  State local_50;
  undefined8 uStack_48;
  
  lVar6 = *(long *)(param_2 + 0x10);
  if (lVar6 != 0) {
    lVar2 = lVar6;
    lVar5 = param_2;
    _swift_retain();
    FUN_1000e3868();
    puVar3 = &DAT_100423b98;
    _swift_getKeyPath(&DAT_100423b98);
    puVar4 = &DAT_100423bc0;
    _swift_getKeyPath(&DAT_100423bc0);
    Combine::Published::_get_subscript(&local_50,lVar6,puVar3,puVar4);
    _swift_release(puVar3);
    _swift_release(puVar4);
    FUN_1002165a4(lVar2,lVar5,local_50.unknown);
    _swift_release(lVar6);
    _swift_bridgeObjectRelease(lVar5);
    _swift_bridgeObjectRelease(local_50.unknown);
    uStack_48 = *(undefined8 *)(param_2 + 0x90);
    local_50.unknown = *(undefined **)(param_2 + 0x88);
    local_51 = (byte)lVar2 & 1;
    puVar3 = &DAT_10054ab50;
    FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
    SwiftUI::State::set_wrappedValue(&local_50,&local_51,puVar3);
    return;
  }
  FUN_100279594(0);
  FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000e5c00);
  (*pcVar1)();
}

