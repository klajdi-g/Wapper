// rea decompile_all
// name: FUN_1002a9100
// address: 0x1002a9100
// body: available
// range: 0x1002a9100-0x1002a9257 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_1002a9100(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  void *pvVar1;
  char *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  TimeZone TVar5;
  TimeZone TVar6;
  long extraout_x8;
  long lVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  char *pcStack_68;
  
  TVar5 = Foundation::TimeZone::typeMetadataAccessor();
  lVar7 = *(long *)(TVar5.unknown + -8);
  TVar6 = TVar5;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar7 + 0x40));
  TVar6 = Foundation::TimeZone::get_current(TVar6);
  SVar8 = Foundation::TimeZone::get_identifier(TVar6);
  (**(code **)(lVar7 + 8))(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),TVar5.unknown);
  pcVar2 = DAT_100559dc8;
  SVar10.bridgeObject = param_4;
  SVar10.str = param_3;
  if (DAT_100559dc0.unknown != (undefined *)0x0) {
    uVar3 = DAT_100559de0;
    if ((SVar8 == _DAT_100559db8) ||
       (SVar10 = SVar8,
       bVar4 = Swift::_stringCompareWithSmolCheck
                         (DAT_100559db8,DAT_100559dc0,(_StringComparisonResult)(__int8)SVar8.str),
       bVar4)) {
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRelease(SVar8.bridgeObject);
      return pcVar2;
    }
  }
  SVar9 = SVar8;
  FUN_1002a8798();
  uVar3 = DAT_100559dd0;
  pcVar2 = DAT_100559dc8;
  DAT_100559dd0 = SVar9.bridgeObject;
  pvVar1 = DAT_100559dc0.unknown;
  local_70 = DAT_100559dd8;
  pcStack_68 = DAT_100559db8.unknown;
  local_78 = DAT_100559de0;
  _DAT_100559db8 = SVar8;
  DAT_100559dc8 = SVar9.str;
  _DAT_100559dd8 = SVar10;
  _swift_bridgeObjectRetain(SVar10.bridgeObject);
  FUN_1002a9acc(pcStack_68,pvVar1,pcVar2,uVar3,local_70,local_78);
  return SVar9.str;
}

