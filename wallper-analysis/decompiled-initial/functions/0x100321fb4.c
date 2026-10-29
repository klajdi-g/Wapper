// rea decompile_all
// name: FUN_100321fb4
// address: 0x100321fb4
// body: available
// range: 0x100321fb4-0x1003222b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100321fb4(long *param_1)

{
  State SVar1;
  code *pcVar2;
  undefined *puVar3;
  StateObject SVar4;
  StateObject SVar5;
  undefined *puVar6;
  State SVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined1 local_61;
  State local_60;
  long lStack_58;
  
  lStack_58 = param_1[0xc];
  local_60.unknown = (undefined *)param_1[0xb];
  local_61 = 1;
  puVar3 = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::set_wrappedValue(&local_60,&local_61,puVar3);
  SVar5.unknown = (undefined *)param_1[2];
  FUN_10002ea18(0);
  FUN_1000036d0(&DAT_10055c5e8,FUN_10002ea18,&TargetProtocolConformanceDescriptor_10041cd50);
  SVar4.unknown = SVar5.unknown;
  SwiftUI::StateObject::get_wrappedValue(SVar5);
  lVar11 = *(long *)(SVar4.unknown + _TtC7Wallper21HeroCarouselViewModel::sourceVideos);
  _swift_bridgeObjectRetain(lVar11);
  _swift_release(SVar4.unknown);
  lVar10 = *(long *)(lVar11 + 0x10);
  _swift_bridgeObjectRelease(lVar11);
  if (lVar10 == 0) {
    SwiftUI::StateObject::get_wrappedValue(SVar5);
    lVar10 = *param_1;
    if (lVar10 == 0) goto LAB_100322270;
    puVar3 = &DAT_100431308;
    _swift_getKeyPath(&DAT_100431308);
    puVar6 = &DAT_100431330;
    _swift_getKeyPath(&DAT_100431330);
    _swift_retain(lVar10);
    Combine::Published::_get_subscript(&local_60);
    _swift_release(puVar3);
    _swift_release(puVar6);
    _swift_release(lVar10);
    SVar1.unknown = local_60.unknown;
    SVar7.unknown = local_60.unknown;
    FUN_1003213cc(local_60.unknown);
    _swift_bridgeObjectRelease(SVar1.unknown);
    FUN_10002c4ec(SVar7.unknown,0,0);
    _swift_release(SVar5.unknown);
    _swift_bridgeObjectRelease(SVar7.unknown);
  }
  lVar10 = *param_1;
  if (lVar10 != 0) {
    puVar3 = &DAT_100431308;
    _swift_getKeyPath(&DAT_100431308);
    puVar6 = &DAT_100431330;
    _swift_getKeyPath(&DAT_100431330);
    _swift_retain_n(lVar10,2);
    Combine::Published::_get_subscript(&local_60);
    _swift_release(puVar3);
    _swift_release(puVar6);
    SVar1.unknown = local_60.unknown;
    puVar3 = &DAT_100431220;
    puVar8 = puVar3;
    _swift_getKeyPath(&DAT_100431220);
    puVar6 = &DAT_100431248;
    puVar9 = puVar6;
    _swift_getKeyPath(&DAT_100431248);
    Combine::Published::_get_subscript(&local_60,lVar10,puVar8,puVar9);
    _swift_release(puVar8);
    _swift_release(puVar9);
    _swift_release(lVar10);
    FUN_1003222b4(SVar1.unknown,(ulong)local_60.unknown & 0xff);
    _swift_bridgeObjectRelease(SVar1.unknown);
    _swift_getKeyPath(&DAT_100431220);
    _swift_getKeyPath(&DAT_100431248);
    Combine::Published::_get_subscript(&local_60,lVar10,puVar3,puVar6);
    _swift_release(puVar3);
    _swift_release(puVar6);
    _swift_release(lVar10);
    if (((ulong)local_60.unknown & 1) != 0) {
      FUN_100322758();
    }
    return;
  }
LAB_100322270:
  FUN_100279594(0);
  FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1003222b4);
  (*pcVar2)();
}

