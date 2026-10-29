// rea decompile_all
// name: FUN_10035f7a4
// address: 0x10035f7a4
// body: available
// range: 0x10035f7a4-0x10035f99f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10035f7a4(long param_1)

{
  State *pSVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
  State SVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  byte local_51;
  undefined1 local_50;
  undefined7 uStack_4f;
  undefined *local_48;
  
  FUN_10035f9a0();
  lVar4 = 0;
  FUN_100386f18();
  pSVar1 = (State *)(param_1 + *(int *)(lVar4 + 0x2c));
  local_50 = *(undefined1 *)&pSVar1->unknown;
  local_48 = pSVar1[1].unknown;
  SVar5.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar5);
  if ((local_51 & 1) == 0) {
    local_50 = 1;
    SwiftUI::State::set_wrappedValue(pSVar1,&local_50,SVar5.unknown);
    lVar8 = *(long *)(param_1 + *(int *)(lVar4 + 0x18));
    if (lVar8 == 0) {
      FUN_100279594(0);
      FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
      SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10035f9a0);
      (*pcVar3)();
    }
    puVar6 = &DAT_100433668;
    _swift_getKeyPath(&DAT_100433668);
    puVar7 = &DAT_100433690;
    _swift_getKeyPath(&DAT_100433690);
    _swift_retain(lVar8);
    Combine::Published::_get_subscript(&local_50);
    _swift_release(puVar6);
    _swift_release(puVar7);
    _swift_release(lVar8);
    lVar9 = *(long *)(CONCAT71(uStack_4f,local_50) + 0x10);
    _swift_bridgeObjectRelease();
    if (lVar9 == 0) {
      puVar6 = &DAT_1004336b8;
      _swift_getKeyPath(&DAT_1004336b8);
      puVar7 = &DAT_1004336e0;
      _swift_getKeyPath(&DAT_1004336e0);
      _swift_retain(lVar8);
      Combine::Published::_get_subscript(&local_50);
      _swift_release(puVar6);
      _swift_release(puVar7);
      _swift_release(lVar8);
      lVar8 = *(long *)(CONCAT71(uStack_4f,local_50) + 0x10);
      _swift_bridgeObjectRelease();
      iVar2 = *(int *)(lVar4 + 0x28);
      if (lVar8 == 0) {
        local_50 = 2;
      }
      else {
        local_50 = 1;
      }
    }
    else {
      iVar2 = *(int *)(lVar4 + 0x28);
      local_50 = 0;
    }
    puVar6 = &DAT_10055de38;
    FUN_100002f94(&DAT_10055de38,&DAT_1004336b0);
    SwiftUI::State::set_wrappedValue((State *)(param_1 + iVar2),&local_50,puVar6);
  }
  return;
}

