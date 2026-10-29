// rea decompile_all
// name: FUN_10012d7c0
// address: 0x10012d7c0
// body: available
// range: 0x10012d7c0-0x10012daf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10012d7c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,uint param_7)

{
  void *pvVar1;
  undefined *puVar2;
  Locale LVar3;
  LocalizationValue LVar4;
  StringInterpolation SVar5;
  long lVar6;
  LocalizationValue LVar7;
  UUID UVar8;
  long extraout_x8;
  long extraout_x8_00;
  char *pcVar9;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar10;
  String SVar11;
  String SVar12;
  String local_90;
  uint local_7c;
  undefined1 auStack_78 [24];
  
  puVar2 = &DAT_10054a9c8;
  local_7c = param_7;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_90.bridgeObject = (void *)((long)&local_90 - extraout_x8);
  LVar3 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar3.unknown + -8) + 0x40));
  pcVar9 = (char *)(((long)&local_90 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  local_90.str = pcVar9;
  LVar4 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar4.unknown + -8) + 0x40));
  LVar4.unknown = pcVar9 + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  SVar5 = LocalizationValue::StringInterpolation::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(SVar5.unknown + -8) + 0x40));
  lVar6 = 0;
  FUN_10025ee04();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar10 = (long)(LVar4.unknown + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  FUN_1001b59d0(lVar10,param_1,param_2,param_3,param_5);
  SVar5.unknown = (undefined *)0x0;
  _swift_beginAccess(param_6 + 0x10,auStack_78,0,0);
  param_6 = param_6 + 0x10;
  _swift_weakLoadStrong();
  if (param_6 != 0) {
    FUN_10012d680();
    _swift_release(param_6);
  }
  if ((local_7c & 1) == 0) {
    if (DAT_100551178 != -1) {
      _swift_once(&DAT_100551178,FUN_1000c7edc);
    }
    LocalizationValue::StringInterpolation::_init(0xe,1);
    SVar12.bridgeObject = (void *)0xab000000009c80e2;
    SVar12.str = (char *)0x2064657461657243;
    LocalizationValue::StringInterpolation::_appendLiteral(SVar12,SVar5);
    LocalizationValue::StringInterpolation::_appendInterpolation
              (*(String *)(lVar10 + *(int *)(lVar6 + 0x14)),SVar5);
    SVar11.bridgeObject = (void *)0xa300000000000000;
    SVar11.str = (char *)0x9d80e2;
    LocalizationValue::StringInterpolation::_appendLiteral(SVar11,SVar5);
    LVar7 = LocalizationValue::_init(LVar4.unknown + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
    Foundation::Locale::get_current((Locale)LVar7.unknown);
    SVar12 = (extension_Foundation)::Swift::String::_init(LVar4,(Locale)0x0);
    UVar8 = Foundation::UUID::typeMetadataAccessor();
    pvVar1 = local_90.bridgeObject;
    lVar6 = *(long *)(UVar8.unknown + -8);
    (**(code **)(lVar6 + 0x10))(local_90.bridgeObject,lVar10,UVar8.unknown);
    (**(code **)(lVar6 + 0x38))(pvVar1,0,1,UVar8.unknown);
    FUN_1000c7780(SVar12.str,SVar12.bridgeObject,0x6461622e74786574,0xef73756c702e6567,pvVar1);
    _swift_bridgeObjectRelease(SVar12.bridgeObject);
    FUN_10002a29c(pvVar1,&DAT_10054a9c8,&DAT_10041bbe0);
  }
  else {
    FUN_1000ccbfc(lVar10);
  }
  FUN_10012e230(lVar10);
  return;
}

