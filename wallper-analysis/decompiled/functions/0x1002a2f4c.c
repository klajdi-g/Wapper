// rea decompile_all
// name: FUN_1002a2f4c
// address: 0x1002a2f4c
// body: available
// range: 0x1002a2f4c-0x1002a30b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002a2f4c(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  code *pcVar5;
  Status SVar6;
  _StringGuts _Var7;
  char *pcVar8;
  void *pvVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  undefined8 local_70;
  undefined *puStack_68;
  char *pcStack_60;
  void *pvStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  char local_40;
  
  (extension_AVFoundation)::__C::AVAsynchronousKeyValueLoading::_status();
  if (local_40 == '\0') {
    param_1[1] = puStack_68;
    *param_1 = local_70;
    param_1[3] = pvStack_58;
    param_1[2] = pcStack_60;
    param_1[5] = uStack_48;
    param_1[4] = local_50;
  }
  else {
    if (local_40 != '\x01') {
      _Var7.unknown = puStack_68;
      pcVar8 = pcStack_60;
      pvVar9 = pvStack_58;
      FUN_1002a4af8(local_70);
      Swift::_StringGuts::grow(0x16,_Var7);
      _swift_bridgeObjectRelease(0xe000000000000000);
      auVar2._8_8_ = pvStack_58;
      auVar2._0_8_ = pcStack_60;
      auVar1._8_8_ = pvStack_58;
      auVar1._0_8_ = pcStack_60;
      auVar3._8_8_ = puStack_68;
      auVar3._0_8_ = local_70;
      NEON_ext(auVar3,auVar1,8,1);
      auVar4._8_8_ = uStack_48;
      auVar4._0_8_ = local_50;
      NEON_ext(auVar2,auVar4,8,1);
      SVar6.value = 0x60;
      FUN_100002f94(&DAT_100559c60,&DAT_10042de60);
      SVar10 = AVFoundation::AVAsyncProperty::Status::get_description(SVar6);
      SVar12.bridgeObject = pvVar9;
      SVar12.str = pcVar8;
      Swift::String::append(SVar10,SVar12);
      _swift_bridgeObjectRelease(SVar10.bridgeObject);
      SVar10.bridgeObject = (void *)0xe100000000000000;
      SVar10.str = (char *)0x29;
      SVar13.bridgeObject = pvVar9;
      SVar13.str = pcVar8;
      Swift::String::append(SVar10,SVar13);
      SVar11.bridgeObject = (void *)0x2;
      SVar11.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x1004dc328,SVar11,(StaticString)0xd000000000000013,
                 0x80000001004e3a10,0x4e3a00);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1002a30b8);
      (*pcVar5)();
    }
    _swift_willThrow();
  }
  return;
}

