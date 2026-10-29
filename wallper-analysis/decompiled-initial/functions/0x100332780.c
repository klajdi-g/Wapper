// rea decompile_all
// name: FUN_100332780
// address: 0x100332780
// body: available
// range: 0x100332780-0x100332a1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100332780(undefined8 param_1,String *param_2,long param_3)

{
  code *pcVar1;
  bool bVar2;
  char *pcVar3;
  Iterator IVar4;
  State SVar5;
  undefined *puVar7;
  char *pcVar8;
  Iterator IVar9;
  undefined *puVar10;
  _StringGuts _Var11;
  ulong uVar12;
  _StringGuts _Var13;
  undefined8 uVar14;
  String SVar15;
  Character CVar16;
  Character CVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  undefined *local_b0;
  undefined *puStack_a8;
  String local_a0;
  undefined8 local_90;
  ulong uStack_88;
  undefined *local_78;
  undefined *puStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  void *pvVar6;
  
  local_a0 = *param_2;
  local_60 = 0x2d;
  uStack_58 = 0xe100000000000000;
  local_78 = (undefined *)0x0;
  puStack_70 = (undefined *)0xe000000000000000;
  FUN_100026df4();
  IVar9.unknown = (undefined *)0x0;
  SVar15 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                     (&local_60,&local_78,0,0,0,1,PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,param_1,param_1,param_1);
  pvVar6 = SVar15.bridgeObject;
  pcVar3 = (char *)0x10;
  FUN_1001d39ac();
  pcVar8 = SVar15.bridgeObject;
  SVar15.bridgeObject = SVar15.str;
  _swift_bridgeObjectRelease(pvVar6);
  SVar15.str = pcVar3;
  puVar10 = IVar9.unknown;
  SVar15 = Swift::String::__fromSubstring(SVar15);
  puVar7 = SVar15.bridgeObject;
  IVar4.unknown = puVar7;
  _swift_bridgeObjectRelease();
  local_78 = (undefined *)0x0;
  puStack_70 = (undefined *)0xe000000000000000;
  uStack_88 = (ulong)SVar15.str & 0xffffffffffff;
  if (((ulong)puVar7 & 0x2000000000000000) != 0) {
    uStack_88 = (ulong)puVar7 >> 0x38 & 0xf;
  }
  local_90 = 0;
  local_a0 = SVar15;
  Swift::String::Iterator::_next(IVar9);
  if (IVar4.unknown == (undefined *)0x0) {
    _Var11.unknown = (undefined *)0xe000000000000000;
    _Var13.unknown = (undefined *)0x0;
  }
  else {
    CVar16.bridgeObject = IVar4.unknown;
    CVar16.str = IVar9.unknown;
    SVar19.bridgeObject = puVar10;
    SVar19.str = pcVar8;
    IVar9.unknown = IVar4.unknown;
    Swift::String::append(CVar16,SVar19);
    _swift_bridgeObjectRelease();
    Swift::String::Iterator::_next(IVar4);
    _Var11.unknown = puStack_70;
    _Var13.unknown = local_78;
    if (IVar9.unknown != (undefined *)0x0) {
      uVar12 = 1;
      do {
        if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100332a20);
          (*pcVar1)();
        }
        if ((uVar12 & 3) == 0) {
          SVar18.bridgeObject = (void *)0xe100000000000000;
          SVar18.str = (char *)0x2d;
          SVar21.bridgeObject = puVar10;
          SVar21.str = pcVar8;
          Swift::String::append(SVar18,SVar21);
        }
        CVar17.bridgeObject = IVar9.unknown;
        CVar17.str = IVar4.unknown;
        SVar20.bridgeObject = puVar10;
        SVar20.str = pcVar8;
        puVar7 = IVar9.unknown;
        Swift::String::append(CVar17,SVar20);
        _swift_bridgeObjectRelease();
        Swift::String::Iterator::_next(IVar9);
        uVar12 = uVar12 + 1;
        IVar4.unknown = IVar9.unknown;
        IVar9.unknown = puVar7;
        _Var11.unknown = puStack_70;
        _Var13.unknown = local_78;
      } while (puVar7 != (undefined *)0x0);
    }
  }
  _swift_bridgeObjectRelease(local_a0.bridgeObject);
  uVar14 = *(undefined8 *)(param_3 + 0x50);
  uStack_58 = *(undefined8 *)(param_3 + 0x48);
  local_60 = *(undefined8 *)(param_3 + 0x40);
  local_a0 = *(String *)(param_3 + 0x40);
  local_90 = uVar14;
  local_68 = uVar14;
  FUN_100043d74(&local_60,&local_b0);
  FUN_1000087e4(&local_68,&local_b0,&DAT_10055a7a0,&DAT_10042e998);
  SVar5.unknown = &DAT_10054dd08;
  FUN_100002f94(&DAT_10054dd08,&DAT_10041ea50);
  SwiftUI::State::get_wrappedValue(SVar5);
  puVar10 = puStack_a8;
  if ((_Var13.unknown == local_b0) && (_Var11.unknown == puStack_a8)) {
    _swift_bridgeObjectRelease(puStack_a8);
  }
  else {
    bVar2 = Swift::_stringCompareWithSmolCheck
                      (_Var13,_Var11,(_StringComparisonResult)(__int8)local_b0);
    _swift_bridgeObjectRelease(puVar10);
    if (!bVar2) {
      local_a0 = *(String *)(param_3 + 0x40);
      local_b0 = _Var13.unknown;
      puStack_a8 = _Var11.unknown;
      local_90 = uVar14;
      _swift_bridgeObjectRetain(_Var11.unknown);
      SwiftUI::State::set_wrappedValue((State *)&local_a0,&local_b0,SVar5.unknown);
    }
  }
  FUN_100043c00(&local_60);
  FUN_10002a29c(&local_68,&DAT_10055a7a0,&DAT_10042e998);
  _swift_bridgeObjectRelease(_Var11.unknown);
  return;
}

