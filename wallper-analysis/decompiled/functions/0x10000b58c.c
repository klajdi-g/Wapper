// rea decompile_all
// name: FUN_10000b58c
// address: 0x10000b58c
// body: available
// range: 0x10000b58c-0x10000b767 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000b58c(void)

{
  undefined1 uVar1;
  char cVar2;
  code *pcVar3;
  AppStorage *pAVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long unaff_x20;
  AppStorage *pAVar8;
  ulong local_48;
  
  pAVar8 = *(AppStorage **)(unaff_x20 + 0x28);
  if (pAVar8 == (AppStorage *)0x0) {
    FUN_100226ac0(0);
    FUN_1000036d0(&DAT_10054aa48,FUN_100226ac0,&TargetProtocolConformanceDescriptor_10042b420);
    SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10000b768);
    (*pcVar3)();
  }
  pAVar4 = pAVar8;
  _swift_retain_n(pAVar8,2);
  FUN_1002159e0();
  puVar5 = &DAT_10041c828;
  _swift_getKeyPath(&DAT_10041c828);
  puVar6 = &DAT_10041c850;
  _swift_getKeyPath(&DAT_10041c850);
  if (((ulong)pAVar4 & 1) == 0) {
    Combine::Published::_get_subscript(&local_48,pAVar8,puVar5,puVar6);
    _swift_release(puVar5);
    _swift_release(puVar6);
    cVar2 = (char)local_48;
    _swift_release(pAVar8);
    if (cVar2 != '\0') {
      FUN_100215b20();
      goto LAB_10000b704;
    }
    SwiftUI::AppStorage::get_wrappedValue((AppStorage)*(undefined **)(unaff_x20 + 0xd8));
    uVar7 = local_48;
    FUN_100229618();
    uVar1 = (undefined1)uVar7;
    if ((uVar7 & 0xfe) == 0) {
      uVar1 = 1;
    }
    if (((uint)uVar7 & 0xff) == 6) {
      uVar1 = 1;
    }
    _swift_getKeyPath(&DAT_10041c828);
    _swift_getKeyPath(&DAT_10041c850);
    local_48 = CONCAT71(local_48._1_7_,uVar1);
  }
  else {
    Combine::Published::_get_subscript(&local_48,pAVar8,puVar5,puVar6);
    _swift_release(puVar5);
    _swift_release(puVar6);
    _swift_release(pAVar8);
    local_48 = *(ulong *)(&DAT_10041cc60 + (local_48 & 0xff) * 8);
    SwiftUI::AppStorage::set_wrappedValue
              (pAVar8,&local_48,*(undefined8 *)(unaff_x20 + 0xd8),
               PTR___type_metadata_for_Swift_Int_100523bd8);
    _swift_getKeyPath(&DAT_10041c828);
    _swift_getKeyPath(&DAT_10041c850);
    local_48 = local_48 & 0xffffffffffffff00;
  }
  _swift_retain(pAVar8);
  Combine::Published::_set_subscript();
  FUN_100217830();
LAB_10000b704:
  _swift_release(pAVar8);
  return;
}

