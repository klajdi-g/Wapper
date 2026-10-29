// rea decompile_all
// name: FUN_1001da870
// address: 0x1001da870
// body: available
// range: 0x1001da870-0x1001da997 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001da870(undefined8 param_1,char *param_2,void *param_3,char *param_4,void *param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  URL UVar4;
  long lVar5;
  _StringGuts _Var6;
  long extraout_x8;
  long lVar7;
  long lVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  undefined8 local_50;
  undefined8 local_48;
  
  puVar3 = &DAT_100553d90;
  _Var6.unknown = &DAT_10041bf10;
  FUN_100002f94();
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)&local_50 - extraout_x8;
  local_50 = 0;
  local_48 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x27,_Var6);
  _swift_bridgeObjectRelease(local_48);
  local_50 = 0xd000000000000021;
  local_48 = 0x80000001004e0bd0;
  SVar9.bridgeObject = param_3;
  SVar9.str = param_2;
  SVar11.bridgeObject = param_5;
  SVar11.str = param_4;
  Swift::String::append(SVar9,SVar11);
  SVar10.bridgeObject = (void *)0xe400000000000000;
  SVar10.str = (char *)0x676e702e;
  SVar12.bridgeObject = param_5;
  SVar12.str = param_4;
  Swift::String::append(SVar10,SVar12);
  uVar1 = local_48;
  Foundation::URL::_init();
  _swift_bridgeObjectRelease(uVar1);
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar8 = *(long *)(UVar4.unknown + -8);
  lVar5 = lVar7;
  (**(code **)(lVar8 + 0x30))(lVar7,1,UVar4.unknown);
  if ((int)lVar5 != 1) {
    (**(code **)(lVar8 + 0x20))(param_1,lVar7,UVar4.unknown);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1001da998);
  (*pcVar2)();
}

