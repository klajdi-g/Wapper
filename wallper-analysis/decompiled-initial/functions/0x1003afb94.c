// rea decompile_all
// name: FUN_1003afb94
// address: 0x1003afb94
// body: available
// range: 0x1003afb94-0x1003afc9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003afb94(double param_1,double param_2,long param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  Binding BVar4;
  double local_98;
  double local_90;
  Binding local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(param_3 + 0x10,auStack_68,0,0);
  param_3 = param_3 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_3 != 0) {
    puVar1 = (undefined8 *)
             (param_3 +
             _TtCV7WallperP33_4C1A01B9C218D1703E7256E92C2C26AB16WindowSizeReader6Reader::size);
    local_88.unknown = (undefined *)*puVar1;
    uStack_80 = puVar1[1];
    uStack_70 = puVar1[3];
    local_78 = puVar1[2];
    BVar4.unknown = &DAT_10055f700;
    FUN_100002f94(&DAT_10055f700,&DAT_100434ed8);
    SwiftUI::Binding::get_wrappedValue(BVar4);
    if ((param_1 != local_98) || (param_2 != local_90)) {
      puVar2 = (undefined *)*puVar1;
      uVar3 = puVar1[1];
      uStack_70 = puVar1[3];
      local_78 = puVar1[2];
      local_98 = param_1;
      local_90 = param_2;
      local_88.unknown = puVar2;
      uStack_80 = uVar3;
      _swift_retain(puVar2);
      _swift_retain(uVar3);
      SwiftUI::Binding::set_wrappedValue(&local_88,&local_98,BVar4.unknown);
      _swift_release(uVar3);
      _swift_release(puVar2);
    }
  }
  return;
}

