// rea decompile_all
// name: FUN_100045f18
// address: 0x100045f18
// body: available
// range: 0x100045f18-0x1000460cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_100045f18(MainActor *param_1,undefined *param_2,char *param_3,void *param_4)

{
  code *pcVar1;
  MainActor *pMVar2;
  undefined *puVar3;
  undefined *puVar4;
  _StringGuts _Var5;
  MainActor *unaff_x20;
  long unaff_x21;
  uint flags;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  StaticString local_70;
  __uint64 _Stack_68;
  
  flags = (uint)param_3;
  _Var5.unknown = param_2;
  pMVar2 = Swift::MainActor::get_shared(unaff_x20,param_1);
  _swift_release();
  _swift_task_getMainExecutor();
  _swift_task_isCurrentExecutor();
  if (((ulong)pMVar2 & 1) == 0) {
    local_70.unknown = (undefined *)0x0;
    _Stack_68 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x42,_Var5);
    SVar6.bridgeObject = (void *)0x80000001004dc320;
    SVar6.str = (char *)0xd00000000000003f;
    SVar9.bridgeObject = param_4;
    SVar9.str = param_3;
    Swift::String::append(SVar6,SVar9);
    SVar6 = Swift::__typeName(SUB81(unaff_x20,0));
    SVar10.bridgeObject = param_4;
    SVar10.str = param_3;
    Swift::String::append(SVar6,SVar10);
    _swift_bridgeObjectRelease(SVar6.bridgeObject);
    SVar7.bridgeObject = (void *)0xe100000000000000;
    SVar7.str = (char *)0x2e;
    SVar11.bridgeObject = param_4;
    SVar11.str = param_3;
    Swift::String::append(SVar7,SVar11);
    SVar8.bridgeObject = (void *)0x2;
    SVar8.str = (char *)0xb;
    Swift::_assertionFailure((StaticString)0x1004dc328,SVar8,local_70,_Stack_68,flags);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000460d0);
    (*pcVar1)();
  }
  puVar3 = &DAT_100526900;
  _swift_allocObject(&DAT_100526900,0x20,7);
  *(MainActor **)(puVar3 + 0x10) = param_1;
  *(undefined **)(puVar3 + 0x18) = param_2;
  (*(code *)param_1)(&local_70);
  if (unaff_x21 == 0) {
    flags = (uint)(byte)local_70.unknown;
    puVar4 = puVar3;
    _swift_isEscapingClosureAtFileLocation(puVar3,"",0,0,0,0);
    _swift_release(puVar3);
    if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100046034);
      (*pcVar1)();
    }
  }
  else {
    puVar4 = puVar3;
    _swift_isEscapingClosureAtFileLocation(puVar3,"",0,0,0,0);
    _swift_release(puVar3);
    if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100045fd4);
      (*pcVar1)();
    }
  }
  return flags & 1;
}

