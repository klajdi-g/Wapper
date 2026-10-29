// rea decompile_all
// name: FUN_100045d90
// address: 0x100045d90
// body: available
// range: 0x100045d90-0x100045f17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100045d90(undefined8 param_1,MainActor *param_2,undefined *param_3,char *param_4,
                  void *param_5)

{
  code *pcVar1;
  MainActor *pMVar2;
  undefined *puVar3;
  undefined *puVar4;
  _StringGuts _Var5;
  char *pcVar6;
  MainActor *unaff_x20;
  long unaff_x21;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  
  _Var5.unknown = param_3;
  pcVar6 = param_4;
  pMVar2 = Swift::MainActor::get_shared(unaff_x20,param_2);
  _swift_release();
  _swift_task_getMainExecutor();
  _swift_task_isCurrentExecutor();
  if (((ulong)pMVar2 & 1) == 0) {
    Swift::_StringGuts::grow(0x42,_Var5);
    SVar7.bridgeObject = (void *)0x80000001004dc320;
    SVar7.str = (char *)0xd00000000000003f;
    SVar10.bridgeObject = param_5;
    SVar10.str = pcVar6;
    Swift::String::append(SVar7,SVar10);
    SVar7 = Swift::__typeName(SUB81(unaff_x20,0));
    SVar11.bridgeObject = param_5;
    SVar11.str = pcVar6;
    Swift::String::append(SVar7,SVar11);
    _swift_bridgeObjectRelease(SVar7.bridgeObject);
    SVar8.bridgeObject = (void *)0xe100000000000000;
    SVar8.str = (char *)0x2e;
    SVar12.bridgeObject = param_5;
    SVar12.str = pcVar6;
    Swift::String::append(SVar8,SVar12);
    SVar9.bridgeObject = (void *)0x2;
    SVar9.str = (char *)0xb;
    Swift::_assertionFailure
              ((StaticString)0x1004dc328,SVar9,(StaticString)0x0,0xe000000000000000,
               (__uint32)param_4);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100045f18);
    (*pcVar1)();
  }
  puVar3 = &DAT_1005268d8;
  _swift_allocObject(&DAT_1005268d8,0x20,7);
  *(MainActor **)(puVar3 + 0x10) = param_2;
  *(undefined **)(puVar3 + 0x18) = param_3;
  (*(code *)param_2)(param_1);
  puVar4 = puVar3;
  _swift_isEscapingClosureAtFileLocation(puVar3,"",0,0,0,0);
  _swift_release(puVar3);
  if (unaff_x21 == 0) {
    if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100045e7c);
      (*pcVar1)();
    }
  }
  else if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100045e50);
    (*pcVar1)();
  }
  return;
}

