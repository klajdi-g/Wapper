// rea decompile_all
// name: FUN_100111e60
// address: 0x100111e60
// body: available
// range: 0x100111e60-0x100112007 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100111e60(long param_1,ID param_2,long param_3)

{
  code *pcVar1;
  URL UVar2;
  ID IVar3;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar6 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar6 + 0x40));
  puVar4 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  if (param_1 == 1) {
    IVar3 = objc_stub::URLs(param_2);
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    uVar5 = *(ulong *)(IVar3 + 0x10);
    if (uVar5 != 0) {
      uVar7 = 0;
      do {
        if (*(ulong *)(IVar3 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100111fc8);
          (*pcVar1)();
        }
        (**(code **)(lVar6 + 0x10))
                  ((long)puVar4 - extraout_x12,
                   IVar3 + ((ulong)*(byte *)(lVar6 + 0x50) + 0x20 &
                           ((ulong)*(byte *)(lVar6 + 0x50) ^ 0xffffffffffffffff)) +
                   *(long *)(lVar6 + 0x48) * uVar7,UVar2.unknown);
        (**(code **)(lVar6 + 0x20))(puVar4,(long)puVar4 - extraout_x12,UVar2.unknown);
        if (param_3 == 0) {
          FUN_100279594(0);
          FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178)
          ;
          SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100112008);
          (*pcVar1)();
        }
        uVar7 = uVar7 + 1;
        _swift_retain(param_3);
        FUN_10026d448(puVar4);
        _swift_release(param_3);
        (**(code **)(lVar6 + 8))(puVar4,UVar2.unknown);
      } while (uVar5 != uVar7);
    }
    _swift_bridgeObjectRelease(IVar3);
  }
  return;
}

