// rea decompile_all
// name: FUN_10000aae4
// address: 0x10000aae4
// body: available
// range: 0x10000aae4-0x10000ac73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10000aae4(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  long unaff_x20;
  long lVar4;
  byte local_71;
  State local_70;
  undefined8 uStack_68;
  State local_60;
  undefined8 uStack_58;
  
  FUN_100009f74();
  if (param_2 == 0) {
    uStack_58 = *(undefined8 *)(unaff_x20 + 0x90);
    local_60.unknown = *(undefined **)(unaff_x20 + 0x88);
    local_70.unknown = local_70.unknown & 0xffffffffffffff00;
    puVar2 = &DAT_10054ab50;
    FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
    SwiftUI::State::set_wrappedValue(&local_60,&local_70,puVar2);
    goto LAB_10000ac3c;
  }
  if (DAT_100557bb0 != -1) {
    _swift_once(&DAT_100557bb0,FUN_100233158);
  }
  lVar1 = DAT_100577d38;
  lVar4 = _TtC7Wallper21VideoWallpaperManager::windows;
  _swift_beginAccess(DAT_100577d38 + _TtC7Wallper21VideoWallpaperManager::windows,&local_60,0,0);
  lVar4 = *(long *)(lVar1 + lVar4);
  if (*(long *)(lVar4 + 0x10) == 0) {
LAB_10000aba0:
    FUN_100253e84(param_1,param_2);
    _swift_bridgeObjectRelease(param_2);
    local_71 = param_1 != 0;
    uStack_68 = *(undefined8 *)(unaff_x20 + 0x90);
    local_70.unknown = *(undefined **)(unaff_x20 + 0x88);
  }
  else {
    _swift_bridgeObjectRetain(lVar4);
    uVar3 = param_2;
    FUN_10000464c(param_1);
    _swift_bridgeObjectRelease(lVar4);
    if ((uVar3 & 1) == 0) goto LAB_10000aba0;
    FUN_10023c0d0(param_1,param_2);
    _swift_bridgeObjectRelease(param_2);
    uStack_68 = *(undefined8 *)(unaff_x20 + 0x90);
    local_70.unknown = *(undefined **)(unaff_x20 + 0x88);
    local_71 = (byte)param_1 & 1;
  }
  puVar2 = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::set_wrappedValue(&local_70,&local_71,puVar2);
  FUN_10000a2bc();
LAB_10000ac3c:
  FUN_10000ac74();
  return;
}

