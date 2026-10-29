// rea decompile_all
// name: FUN_1003abe74
// address: 0x1003abe74
// body: available
// range: 0x1003abe74-0x1003ac113 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003abe74(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auStack_50 [13];
  char local_43;
  byte local_42;
  byte local_41;
  
  lVar2 = 0;
  FUN_1003afcec();
  lVar6 = *(long *)(lVar2 + -8);
  lVar2 = *(long *)(lVar6 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  SwiftUI::AppStorage::get_wrappedValue((AppStorage)*(undefined **)(param_1 + 0x30));
  if ((local_41 & 1) == 0) {
    FUN_10012f230(0);
    _swift_initStaticObject();
    FUN_100029504(param_1,auStack_50 + -(lVar2 + 0xfU & 0xfffffffffffffff0),FUN_1003afcec);
    uVar5 = (ulong)*(byte *)(lVar6 + 0x50);
    uVar7 = uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff);
    puVar3 = &DAT_10053d0d8;
    _swift_allocObject(&DAT_10053d0d8,uVar7 + lVar2,uVar5 | 7);
    FUN_100007e64(auStack_50 + -(lVar2 + 0xfU & 0xfffffffffffffff0),puVar3 + uVar7,FUN_1003afcec);
    FUN_10012eb04(FUN_1003b0d54,puVar3);
    _swift_release(puVar3);
  }
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    puVar3 = &DAT_1004350e0;
    _swift_getKeyPath(&DAT_1004350e0);
    puVar4 = &DAT_100435108;
    _swift_getKeyPath(&DAT_100435108);
    _swift_retain(lVar2);
    Combine::Published::_get_subscript(&local_42);
    _swift_release(puVar3);
    _swift_release(puVar4);
    _swift_release(lVar2);
    if ((local_42 & 1) == 0) {
      puVar3 = &DAT_100435128;
      _swift_getKeyPath(&DAT_100435128);
      puVar4 = &DAT_100435150;
      _swift_getKeyPath(&DAT_100435150);
      _swift_retain(lVar2);
      Combine::Published::_get_subscript(&local_43);
      _swift_release(puVar3);
      _swift_release(puVar4);
      _swift_release(lVar2);
      if (local_43 == '\x01') {
        lVar6 = *(long *)(param_1 + 0x20);
        if (lVar6 == 0) {
          FUN_10013b98c(0);
          FUN_1000036d0(&DAT_100553150,FUN_10013b98c,&TargetProtocolConformanceDescriptor_1004274b8)
          ;
          _swift_retain(lVar2);
          SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1003ac114);
          (*pcVar1)();
        }
        FUN_100129f84(0);
        _swift_initStaticObject();
        _swift_retain(lVar2);
        _swift_retain(lVar6);
        FUN_10012940c(lVar2,lVar6);
        _swift_release(lVar2);
        _swift_release(lVar6);
      }
    }
    return;
  }
  FUN_10014e37c(0);
  FUN_1000036d0(&DAT_100553148,FUN_10014e37c,&TargetProtocolConformanceDescriptor_100427f04);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003ac0c4);
  (*pcVar1)();
}

