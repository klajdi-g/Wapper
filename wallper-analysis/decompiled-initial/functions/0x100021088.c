// rea decompile_all
// name: FUN_100021088
// address: 0x100021088
// body: available
// range: 0x100021088-0x1000211df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100021088(long *param_1,AppStorage *param_2)

{
  code *pcVar1;
  UUID UVar2;
  long extraout_x8;
  long lVar3;
  long lVar4;
  long lVar5;
  String local_50;
  
  UVar2.unknown = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(UVar2.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = (long)&local_50 - extraout_x8;
  local_50 = Foundation::UUID::get_uuidString(UVar2);
  SwiftUI::AppStorage::set_wrappedValue
            (param_2,&local_50,param_1[6],PTR___type_metadata_for_Swift_String_100523a98);
  lVar4 = *param_1;
  if (lVar4 != 0) {
    UVar2 = Foundation::UUID::typeMetadataAccessor();
    lVar5 = *(long *)(UVar2.unknown + -8);
    (**(code **)(lVar5 + 0x10))(lVar3,param_2,UVar2.unknown);
    (**(code **)(lVar5 + 0x38))(lVar3,0,1,UVar2.unknown);
    _swift_retain(lVar4);
    FUN_1001b3850(lVar3,0,0);
    _swift_release(lVar4);
    FUN_10002a29c(lVar3,&DAT_10054a9c8,&DAT_10041bbe0);
    return;
  }
  FUN_1001b7378(0);
  FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000211e0);
  (*pcVar1)();
}

