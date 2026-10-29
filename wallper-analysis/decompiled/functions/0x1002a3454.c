// rea decompile_all
// name: FUN_1002a3454
// address: 0x1002a3454
// body: available
// range: 0x1002a3454-0x1002a35bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


String FUN_1002a3454(AVAnyAsyncProperty *param_1)

{
  String *pSVar1;
  void *pvVar2;
  code *pcVar3;
  long lVar4;
  AVAnyAsyncProperty *pAVar5;
  _StringGuts _Var6;
  StaticString *pSVar7;
  AVAnyAsyncProperty *unaff_x20;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  StaticString local_70;
  __uint64 _Stack_68;
  undefined8 *local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  
  AVFoundation::AVAnyAsyncProperty::get_description(unaff_x20,param_1);
  local_50 = 0x2e;
  uStack_48 = 0xe100000000000000;
  local_60 = &local_50;
  pSVar7 = &local_70;
  lVar4 = 0x7fffffffffffffff;
  _Var6.unknown = (undefined *)0x1;
  FUN_1001b49f4();
  if (*(long *)(lVar4 + 0x10) != 0) {
    pSVar1 = (String *)(lVar4 + *(long *)(lVar4 + 0x10) * 0x20);
    SVar8 = *pSVar1;
    pvVar2 = pSVar1[1].bridgeObject;
    _swift_bridgeObjectRetain(pvVar2);
    _swift_bridgeObjectRelease(lVar4);
    SVar8 = Swift::String::__fromSubstring(SVar8);
    _swift_bridgeObjectRelease(pvVar2);
    return SVar8;
  }
  _swift_bridgeObjectRelease();
  local_70.unknown = (undefined *)0x0;
  _Stack_68 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x44,_Var6);
  pAVar5 = (AVAnyAsyncProperty *)0xd000000000000041;
  SVar8.bridgeObject = (void *)0x80000001004e3a30;
  SVar8.str = (char *)0xd000000000000041;
  SVar11.bridgeObject = pSVar7;
  SVar11.str = (char *)param_1;
  Swift::String::append(SVar8,SVar11);
  SVar8 = AVFoundation::AVAnyAsyncProperty::get_description(unaff_x20,pAVar5);
  SVar12.bridgeObject = pSVar7;
  SVar12.str = (char *)param_1;
  Swift::String::append(SVar8,SVar12);
  _swift_bridgeObjectRelease(SVar8.bridgeObject);
  SVar9.bridgeObject = (void *)0xe100000000000000;
  SVar9.str = (char *)0x29;
  SVar13.bridgeObject = pSVar7;
  SVar13.str = (char *)param_1;
  Swift::String::append(SVar9,SVar13);
  SVar10.bridgeObject = (void *)0x2;
  SVar10.str = (char *)0xb;
  Swift::_assertionFailure((StaticString)0x1004dc328,SVar10,local_70,_Stack_68,0x4e3a00);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1002a35bc);
  (*pcVar3)();
}

