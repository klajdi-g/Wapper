// rea decompile_all
// name: FUN_100065010
// address: 0x100065010
// body: available
// range: 0x100065010-0x1000651bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100065070 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100065010(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  code *pcVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ObservedObject<undefined> OVar6;
  AppStorage<bool> AVar7;
  AppStorage<bool> AVar8;
  long lVar9;
  AnyView AVar10;
  String SVar11;
  String SVar12;
  undefined *local_50;
  undefined *puStack_48;
  
  lVar9 = *(long *)(param_2 + 0x20);
  if (lVar9 != 0) {
    uVar4 = 0;
    FUN_100226ac0();
    puVar5 = &DAT_10054aa48;
    FUN_1000036d0(&DAT_10054aa48,FUN_100226ac0,&TargetProtocolConformanceDescriptor_10042b420);
    _swift_retain(lVar9);
    OVar6 = SwiftUI::ObservedObject::init(puVar5,uVar4,puVar5);
    puVar5 = &DAT_10054df48;
    FUN_100002f94(&DAT_10054df48,&DAT_10041ed80);
    SwiftUI::State::init(&local_50,puVar5,puVar5);
    puVar1 = puStack_48;
    puVar5 = local_50;
    bVar3 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
    AVar10.unknown = (undefined *)0x0;
    if ((bVar3 & 1) != 0) {
      SVar11.bridgeObject = (void *)0x80000001004dc560;
      SVar11.str = (char *)0xd000000000000018;
      AVar7 = SwiftUI::AppStorage::_init(true,SVar11);
      SVar12.bridgeObject = (void *)0x80000001004dbc80;
      SVar12.str = (char *)0xd000000000000016;
      AVar8 = SwiftUI::AppStorage::_init(true,SVar12);
      local_50 = AVar7.unknown;
      puStack_48 = AVar8.unknown;
      FUN_100068e90();
      AVar10 = SwiftUI::AnyView::_init(AVar8.unknown,&DAT_1005274a8,AVar8.unknown);
      _swift_retain();
    }
    *param_1 = OVar6.unknown;
    param_1[1] = uVar4;
    param_1[2] = puVar5;
    param_1[3] = puVar1;
    param_1[4] = AVar10.unknown;
    _swift_retain(uVar4);
    _swift_release(uVar4);
    _swift_release(AVar10.unknown);
    return;
  }
  FUN_100226ac0(0);
  FUN_1000036d0(&DAT_10054aa48,FUN_100226ac0,&TargetProtocolConformanceDescriptor_10042b420);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1000651c0);
  (*pcVar2)();
}

