// rea decompile_all
// name: FUN_100065f4c
// address: 0x100065f4c
// body: available
// range: 0x100065f4c-0x10006605f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100065f4c(ID param_1)

{
  ID IVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  Published *pPVar5;
  uint local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long local_38;
  
  IVar1 = objc_stub::representedObject(param_1);
  if (IVar1 == 0) {
    uStack_68 = 0;
    local_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar1);
  }
  uStack_48 = uStack_68;
  local_50 = local_70;
  local_38 = lStack_58;
  uStack_40 = uStack_60;
  if (lStack_58 == 0) {
    FUN_10002a29c(&local_50,&DAT_10054d428,&DAT_100420300);
  }
  else {
    puVar2 = local_78;
    _swift_dynamicCast(puVar2,&local_50,PTR___type_metadata_for_Any_100524178 + 8,
                       PTR___type_metadata_for_Swift_Int_100523bd8,6);
    if (((ulong)puVar2 & 1) != 0) {
      FUN_100229618();
      if ((local_78[0] & 0xff) != 6) {
        pPVar5 = *(Published **)
                  (unaff_x20 +
                  _TtC7WallperP33_1BB0B006840CE298DFD371C13BB5537221AutoAdvanceMenuTarget::manager);
        puVar3 = &DAT_10041ebb0;
        _swift_getKeyPath(&DAT_10041ebb0);
        puVar4 = &DAT_10041ebd8;
        _swift_getKeyPath(&DAT_10041ebd8);
        local_50 = CONCAT71(local_50._1_7_,(char)local_78[0]);
        _swift_retain(pPVar5);
        Combine::Published::_set_subscript(pPVar5,&local_50,pPVar5,puVar3,puVar4);
        FUN_100217830();
      }
    }
  }
  return;
}

