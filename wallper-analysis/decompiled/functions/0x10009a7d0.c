// rea decompile_all
// name: FUN_10009a7d0
// address: 0x10009a7d0
// body: available
// range: 0x10009a7d0-0x10009a973 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10009a7d0(void)

{
  long lVar1;
  code *pcVar2;
  _DictionaryStorage *this;
  long lVar3;
  ulong uVar4;
  undefined *self;
  NSDictionary *pNVar5;
  ulong uVar6;
  ulong local_b0;
  undefined1 auStack_a8 [64];
  undefined8 local_68;
  undefined1 local_60;
  undefined *local_48;
  
  uVar6 = 0;
  local_68 = *(undefined8 *)PTR__kCIContextCacheIntermediates_1005217c8;
  local_48 = PTR___type_metadata_for_Swift_Bool_100523b70;
  local_60 = 0;
  this = (_DictionaryStorage *)&DAT_10054a1a8;
  FUN_100002f94(&DAT_10054a1a8,&DAT_10041a238);
  lVar3 = 1;
  Swift::_DictionaryStorage::_allocate(this,1);
  FUN_1000087e4(&local_68,&local_b0,&DAT_10054a1b0,&DAT_10041a240);
  _swift_retain(lVar3);
  uVar4 = local_b0;
  thunk_FUN_1000046e0();
  if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10009a970);
    (*pcVar2)();
  }
  lVar1 = lVar3 + (uVar4 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (uVar4 & 0x3f);
  *(ulong *)(*(long *)(lVar3 + 0x30) + uVar4 * 8) = local_b0;
  FUN_100007d88(auStack_a8,*(long *)(lVar3 + 0x38) + uVar4 * 0x20);
  _swift_release(lVar3);
  FUN_10002a29c(&local_68,&DAT_10054a1b0,&DAT_10041a240);
  if (!SCARRY8(*(long *)(lVar3 + 0x10),1)) {
    *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
    self = &_OBJC_CLASS___CIContext;
    _objc_allocWithZone();
    FUN_1000080e0(0);
    FUN_1000036d0(&DAT_10054a620,FUN_1000080e0,&TargetProtocolConformanceDescriptor_10041b4d8);
    pNVar5 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    _swift_release(lVar3);
    DAT_10054f760 = objc_stub::initWithOptions_((ID)self,pNVar5);
    return 0;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10009a974);
  (*pcVar2)();
}

