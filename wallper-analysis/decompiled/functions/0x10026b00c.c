// rea decompile_all
// name: FUN_10026b00c
// address: 0x10026b00c
// body: available
// range: 0x10026b00c-0x10026b217 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10026b00c(char *param_1,void *param_2)

{
  long lVar1;
  char *pcVar2;
  ID self;
  void *pvVar3;
  code *pcVar4;
  code *pcVar5;
  long unaff_x20;
  long lVar6;
  String SVar7;
  String SVar8;
  undefined8 local_58;
  void *pvStack_50;
  
  FUN_10027f304();
  lVar1 = _TtC7Wallper17VideoLibraryStore::downloadSessions;
  _swift_beginAccess(unaff_x20 + _TtC7Wallper17VideoLibraryStore::downloadSessions,&local_58,0x20,0)
  ;
  lVar6 = *(long *)(unaff_x20 + lVar1);
  if (*(long *)(lVar6 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar6);
    pcVar2 = param_1;
    pvVar3 = param_2;
    FUN_10000464c();
    if (((ulong)pvVar3 & 1) != 0) {
      self = *(ID *)(*(long *)(lVar6 + 0x38) + (long)pcVar2 * 8);
      _swift_endAccess(&local_58);
      _swift_bridgeObjectRelease(lVar6);
      objc_stub::invalidateAndCancel(self);
      _swift_beginAccess(unaff_x20 + lVar1,&local_58,0x21,0);
      _swift_bridgeObjectRetain(param_2);
      FUN_10027ef80(param_1,param_2,thunk_FUN_1001d1dc4,FUN_1001cc838);
      _swift_endAccess(&local_58);
      _swift_bridgeObjectRelease(param_2);
      _swift_beginAccess(unaff_x20 + _TtC7Wallper17VideoLibraryStore::downloadDelegates,&local_58,
                         0x21,0);
      _swift_bridgeObjectRetain(param_2);
      pcVar4 = thunk_FUN_1001d1dc4;
      pcVar5 = FUN_1001cc824;
      FUN_10027ef80(param_1,param_2);
      _swift_endAccess(&local_58);
      _swift_bridgeObjectRelease(param_2);
      if (DAT_1005539e8 != -1) {
        _swift_once(&DAT_1005539e8,FUN_1001237d4);
      }
      local_58 = 0x64616f6c6e776f64;
      pvStack_50 = (void *)0xe90000000000003a;
      SVar7.bridgeObject = param_2;
      SVar7.str = param_1;
      SVar8.bridgeObject = pcVar5;
      SVar8.str = (char *)pcVar4;
      Swift::String::append(SVar7,SVar8);
      pvVar3 = pvStack_50;
      FUN_100124e14(0x3fe3333333333333,local_58,pvStack_50,1);
      _swift_bridgeObjectRelease(param_2);
      param_2 = pvVar3;
      goto LAB_10026b1e0;
    }
    _swift_bridgeObjectRelease(lVar6);
  }
  _swift_endAccess(&local_58);
LAB_10026b1e0:
  _swift_bridgeObjectRelease(param_2);
  return;
}

