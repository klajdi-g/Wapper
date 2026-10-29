// rea decompile_all
// name: FUN_100310ee0
// address: 0x100310ee0
// body: available
// range: 0x100310ee0-0x100311113 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100310ee0(long *param_1)

{
  State SVar1;
  code *pcVar2;
  State SVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  char local_78 [8];
  State local_70;
  long lStack_68;
  State local_60;
  long lStack_58;
  long local_48;
  
  lStack_58 = param_1[8];
  local_60.unknown = (undefined *)param_1[7];
  local_70.unknown._0_1_ = 1;
  SVar3.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::set_wrappedValue(&local_60,&local_70,SVar3.unknown);
  lStack_58 = param_1[0x1a];
  local_60.unknown = (undefined *)param_1[0x19];
  lStack_68 = param_1[0x1a];
  local_70.unknown = (undefined *)param_1[0x19];
  local_48 = lStack_58;
  FUN_1000087e4(&local_48,local_78,&DAT_10054b608,&DAT_10041c9a0);
  SwiftUI::State::get_wrappedValue(SVar3);
  if (local_78[0] == '\x01') {
    lVar6 = *param_1;
    if (lVar6 == 0) goto LAB_1003110d0;
    puVar4 = &DAT_100430a60;
    _swift_getKeyPath(&DAT_100430a60);
    puVar5 = &DAT_100430a88;
    _swift_getKeyPath(&DAT_100430a88);
    _swift_retain(lVar6);
    Combine::Published::_get_subscript(&local_70);
    _swift_release(puVar4);
    _swift_release(puVar5);
    _swift_release(lVar6);
    SVar1.unknown = local_70.unknown;
    lStack_68 = lStack_58;
    local_70.unknown = local_60.unknown;
    local_78[0] = '\0';
    SwiftUI::State::set_wrappedValue(&local_70,local_78,SVar3.unknown);
    FUN_10002a29c(&local_60,&DAT_10054ab50,&DAT_10041d0f0);
    FUN_10030e474(SVar1.unknown);
    FUN_10030f54c(SVar1.unknown);
    _swift_bridgeObjectRelease(SVar1.unknown);
  }
  else {
    FUN_10002a29c(&local_60,&DAT_10054ab50,&DAT_10041d0f0);
  }
  lVar6 = *param_1;
  if (lVar6 != 0) {
    puVar4 = &DAT_100430b20;
    _swift_getKeyPath(&DAT_100430b20);
    puVar5 = &DAT_100430b48;
    _swift_getKeyPath(&DAT_100430b48);
    _swift_retain(lVar6);
    Combine::Published::_get_subscript(&local_70);
    _swift_release(puVar4);
    _swift_release(puVar5);
    _swift_release(lVar6);
    if (((ulong)local_70.unknown & 1) != 0) {
      FUN_100311114();
    }
    FUN_1003111f8();
    return;
  }
LAB_1003110d0:
  FUN_100279594(0);
  FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100311114);
  (*pcVar2)();
}

