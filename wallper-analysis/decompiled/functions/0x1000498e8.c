// rea decompile_all
// name: FUN_1000498e8
// address: 0x1000498e8
// body: available
// range: 0x1000498e8-0x100049a6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000498e8(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  State *pSVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  State *pSVar6;
  undefined1 local_71;
  State local_70;
  undefined8 uStack_68;
  State local_60;
  undefined8 uStack_58;
  
  FUN_1000492d4();
  if (param_2 == 0) {
    uStack_58 = *(undefined8 *)(unaff_x20 + 0xf8);
    local_60.unknown = *(undefined **)(unaff_x20 + 0xf0);
    local_70.unknown = local_70.unknown & 0xffffffffffffff00;
    puVar2 = &DAT_10054ab50;
    FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
    pSVar3 = &local_70;
    pSVar6 = &local_60;
    goto LAB_100049a30;
  }
  if (DAT_100557bb0 != -1) {
    _swift_once(&DAT_100557bb0,FUN_100233158);
  }
  lVar1 = DAT_100577d38;
  lVar5 = _TtC7Wallper21VideoWallpaperManager::windows;
  _swift_beginAccess(DAT_100577d38 + _TtC7Wallper21VideoWallpaperManager::windows,&local_60,0,0);
  lVar5 = *(long *)(lVar1 + lVar5);
  if (*(long *)(lVar5 + 0x10) == 0) {
LAB_1000499a4:
    FUN_100253e84(param_1,param_2);
    _swift_bridgeObjectRelease(param_2);
    local_71 = param_1 != 0;
    uStack_68 = *(undefined8 *)(unaff_x20 + 0xf8);
    local_70.unknown = *(undefined **)(unaff_x20 + 0xf0);
  }
  else {
    _swift_bridgeObjectRetain(lVar5);
    uVar4 = param_2;
    FUN_10000464c(param_1);
    _swift_bridgeObjectRelease(lVar5);
    if ((uVar4 & 1) == 0) goto LAB_1000499a4;
    FUN_10023c0d0(param_1,param_2);
    _swift_bridgeObjectRelease(param_2);
    uStack_68 = *(undefined8 *)(unaff_x20 + 0xf8);
    local_70.unknown = *(undefined **)(unaff_x20 + 0xf0);
    local_71 = (byte)param_1 & 1;
  }
  puVar2 = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  pSVar3 = (State *)&local_71;
  pSVar6 = &local_70;
LAB_100049a30:
  SwiftUI::State::set_wrappedValue(pSVar6,pSVar3,puVar2);
  FUN_100049a6c();
  return;
}

