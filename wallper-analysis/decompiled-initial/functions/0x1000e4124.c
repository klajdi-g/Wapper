// rea decompile_all
// name: FUN_1000e4124
// address: 0x1000e4124
// body: available
// range: 0x1000e4124-0x1000e42b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000e4124(void)

{
  code *pcVar1;
  byte bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte *pbVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  byte local_51;
  State local_50;
  undefined8 uStack_48;
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  if (lVar8 != 0) {
    uVar7 = 2;
    lVar3 = lVar8;
    _swift_retain_n(lVar8,2);
    FUN_1000e3868();
    puVar4 = &DAT_100423b98;
    _swift_getKeyPath(&DAT_100423b98);
    puVar5 = &DAT_100423bc0;
    _swift_getKeyPath(&DAT_100423bc0);
    Combine::Published::_get_subscript(&local_50,lVar8,puVar4,puVar5);
    _swift_release(puVar4);
    _swift_release(puVar5);
    FUN_1002165a4(lVar3,uVar7,local_50.unknown);
    _swift_release(lVar8);
    _swift_bridgeObjectRelease(uVar7);
    _swift_bridgeObjectRelease(local_50.unknown);
    uStack_48 = *(undefined8 *)(unaff_x20 + 0x90);
    local_50.unknown = *(undefined **)(unaff_x20 + 0x88);
    local_51 = (byte)lVar3 & 1;
    puVar4 = &DAT_10054ab50;
    FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
    pbVar6 = &local_51;
    puVar5 = puVar4;
    SwiftUI::State::set_wrappedValue(&local_50,pbVar6,puVar4);
    bVar2 = (byte)pbVar6;
    FUN_1000e3868();
    FUN_10026ad9c();
    _swift_release(lVar8);
    _swift_bridgeObjectRelease(puVar5);
    uStack_48 = *(undefined8 *)(unaff_x20 + 0xb0);
    local_50.unknown = *(undefined **)(unaff_x20 + 0xa8);
    local_51 = bVar2 & 1;
    SwiftUI::State::set_wrappedValue(&local_50,&local_51,puVar4);
    return;
  }
  FUN_100279594(0);
  FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000e42b4);
  (*pcVar1)();
}

