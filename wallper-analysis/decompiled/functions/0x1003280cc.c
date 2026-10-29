// rea decompile_all
// name: FUN_1003280cc
// address: 0x1003280cc
// body: available
// range: 0x1003280cc-0x1003282a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

uint FUN_1003280cc(ulong param_1,undefined8 param_2)

{
  byte bVar1;
  ulong uVar2;
  OS_os_log *pOVar3;
  OS_os_log *pOVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  EnvironmentValues EVar8;
  long extraout_x8;
  long lVar9;
  long lVar10;
  undefined8 local_50;
  byte local_41;
  
  if (((uint)param_2 & 0xff) != 1) {
    bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xb,0,0,0xe,0,0);
    uVar2 = param_1;
    _swift_retain();
    static_(extension_in_os):__C.os_log_type_t.fault.getter_:___C.os_log_type_t::_get_fault();
    pOVar3 = SwiftUI::Log::get_runtimeIssuesLog((Log)(__int8)uVar2);
    if ((bVar1 & 1) == 0) {
      os::_os_log(uVar2,0x100000000,pOVar3,
                  "Accessing Environment\'s value outside of being installed on a View. This will always read the default value and will not update."
                  ,0x80,2,PTR___swiftEmptyArrayStorage_100524190);
    }
    else {
      pOVar4 = pOVar3;
      _os_log_type_enabled(pOVar3,(uint)uVar2 & 0xff);
      if (((ulong)pOVar4 & 1) != 0) {
        puVar5 = (undefined4 *)0xc;
        _swift_slowAlloc(0xc,0xffffffffffffffff);
        uVar6 = 0x20;
        _swift_slowAlloc(0x20,0xffffffffffffffff);
        *puVar5 = 0x8200102;
        uVar7 = 0x6c6f6f42;
        local_50 = uVar6;
        FUN_10012dbb0(0x6c6f6f42,0xe400000000000000,&local_50);
        *(undefined8 *)(puVar5 + 1) = uVar7;
        __os_log_impl(0x100000000,pOVar3,(uint)uVar2 & 0xff,
                      "Accessing Environment<%s>\'s value outside of being installed on a View. This will always read the default value and will not update."
                      ,puVar5,0xc);
        FUN_100043f24(uVar6);
        _swift_slowDealloc(uVar6,0xffffffffffffffff,0xffffffffffffffff);
        _swift_slowDealloc(puVar5,0xffffffffffffffff,0xffffffffffffffff);
      }
    }
    EVar8 = SwiftUI::EnvironmentValues::typeMetadataAccessor();
    lVar10 = *(long *)(EVar8.unknown + -8);
    (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar10 + 0x40));
    lVar9 = (long)&local_50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
    SwiftUI::EnvironmentValues::init();
    _swift_getAtKeyPath(&local_41,lVar9,param_1);
    FUN_100047b2c(param_1,param_2);
    (**(code **)(lVar10 + 8))(lVar9,EVar8.unknown);
    param_1 = (ulong)local_41;
  }
  return (uint)param_1 & 1;
}

