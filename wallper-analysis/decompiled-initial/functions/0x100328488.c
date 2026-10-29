// rea decompile_all
// name: FUN_100328488
// address: 0x100328488
// body: available
// range: 0x100328488-0x1003286eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Type propagation algorithm not settling */

void FUN_100328488(undefined8 param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  DismissAction DVar4;
  OS_os_log *pOVar6;
  OS_os_log *pOVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  EnvironmentValues EVar11;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 auStack_50 [2];
  ulong uVar5;
  
  puVar2 = &DAT_10055c948;
  FUN_100002f94(&DAT_10055c948,&DAT_100435240);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = (undefined8 *)((long)auStack_50 - extraout_x8);
  FUN_1000087e4();
  puVar3 = puVar12;
  _swift_getEnumCaseMultiPayload(puVar12,puVar2);
  if ((int)puVar3 == 1) {
    DVar4 = SwiftUI::DismissAction::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar4.unknown + -8) + 0x20))(param_1,puVar12,DVar4.unknown);
  }
  else {
    uVar13 = *puVar12;
    bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xb,0,0,0xe,0,0);
    uVar5 = (ulong)bVar1;
    static_(extension_in_os):__C.os_log_type_t.fault.getter_:___C.os_log_type_t::_get_fault();
    pOVar6 = SwiftUI::Log::get_runtimeIssuesLog((Log)(__int8)uVar5);
    if ((bVar1 & 1) == 0) {
      os::_os_log(uVar5,0x100000000,pOVar6,
                  "Accessing Environment\'s value outside of being installed on a View. This will always read the default value and will not update."
                  ,0x80,2,PTR___swiftEmptyArrayStorage_100524190);
    }
    else {
      pOVar7 = pOVar6;
      _os_log_type_enabled(pOVar6,(uint)uVar5 & 0xff);
      if (((ulong)pOVar7 & 1) != 0) {
        puVar8 = (undefined4 *)0xc;
        _swift_slowAlloc(0xc,0xffffffffffffffff);
        uVar9 = 0x20;
        _swift_slowAlloc(0x20,0xffffffffffffffff);
        *puVar8 = 0x8200102;
        uVar10 = 0x417373696d736944;
        auStack_50[1] = uVar9;
        FUN_10012dbb0(0x417373696d736944,0xed00006e6f697463,auStack_50 + 1);
        *(undefined8 *)(puVar8 + 1) = uVar10;
        __os_log_impl(0x100000000,pOVar6,(uint)uVar5 & 0xff,
                      "Accessing Environment<%s>\'s value outside of being installed on a View. This will always read the default value and will not update."
                      ,puVar8,0xc);
        FUN_100043f24(uVar9);
        _swift_slowDealloc(uVar9,0xffffffffffffffff,0xffffffffffffffff);
        _swift_slowDealloc(puVar8,0xffffffffffffffff,0xffffffffffffffff);
      }
    }
    EVar11 = SwiftUI::EnvironmentValues::typeMetadataAccessor();
    lVar15 = *(long *)(EVar11.unknown + -8);
    (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar15 + 0x40));
    lVar14 = (long)puVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
    SwiftUI::EnvironmentValues::init();
    _swift_getAtKeyPath(param_1,lVar14,uVar13);
    _swift_release(uVar13);
    (**(code **)(lVar15 + 8))(lVar14,EVar11.unknown);
  }
  return;
}

