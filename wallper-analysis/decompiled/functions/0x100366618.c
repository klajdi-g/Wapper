// rea decompile_all
// name: FUN_100366618
// address: 0x100366618
// body: available
// range: 0x100366618-0x1003669c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100366618(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  Locale LVar3;
  LocalizationValue LVar4;
  StringInterpolation SVar5;
  long lVar6;
  long lVar7;
  LocalizationValue LVar8;
  UUID UVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  String SVar14;
  String SVar15;
  
  puVar2 = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = &stack0xffffffffffffffa0 + -extraout_x8;
  LVar3 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar3.unknown + -8) + 0x40));
  LVar4 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar4.unknown + -8) + 0x40));
  LVar4.unknown =
       puVar10 + (-(extraout_x8_01 + 0xfU & 0xfffffffffffffff0) -
                 (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  SVar5 = LocalizationValue::StringInterpolation::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(SVar5.unknown + -8) + 0x40));
  puVar2 = &DAT_10054ac38;
  FUN_100002f94(&DAT_10054ac38,&DAT_10041e8e0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)(LVar4.unknown + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_03;
  lVar6 = 0;
  FUN_10025ee04();
  lVar13 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar13 + 0x40));
  lVar11 = lVar12 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  FUN_100386f18();
  lVar7 = *(long *)(param_1 + *(int *)(lVar7 + 0x14));
  if (lVar7 != 0) {
    _swift_retain(lVar7);
    FUN_1001ba2f8(lVar12,param_1);
    _swift_release(lVar7);
    lVar7 = lVar12;
    (**(code **)(lVar13 + 0x30))(lVar12,1,lVar6);
    if ((int)lVar7 == 1) {
      FUN_10002a29c(lVar12,&DAT_10054ac38,&DAT_10041e8e0);
    }
    else {
      pcVar1 = FUN_10025ee04;
      FUN_100007e64(lVar12,lVar11);
      if (DAT_100551178 != -1) {
        _swift_once(&DAT_100551178,FUN_1000c7edc);
      }
      LocalizationValue::StringInterpolation::_init(0xe,1);
      SVar15.bridgeObject = (void *)0xab000000009c80e2;
      SVar15.str = (char *)0x2064657461657243;
      LocalizationValue::StringInterpolation::_appendLiteral(SVar15,(StringInterpolation)pcVar1);
      LocalizationValue::StringInterpolation::_appendInterpolation
                (*(String *)(lVar11 + *(int *)(lVar6 + 0x14)),(StringInterpolation)pcVar1);
      SVar14.bridgeObject = (void *)0xa300000000000000;
      SVar14.str = (char *)0x9d80e2;
      LocalizationValue::StringInterpolation::_appendLiteral(SVar14,(StringInterpolation)pcVar1);
      LVar8 = LocalizationValue::_init
                        (LVar4.unknown + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
      Foundation::Locale::get_current((Locale)LVar8.unknown);
      SVar15 = (extension_Foundation)::Swift::String::_init(LVar4,(Locale)0x0);
      UVar9 = Foundation::UUID::typeMetadataAccessor();
      lVar6 = *(long *)(UVar9.unknown + -8);
      (**(code **)(lVar6 + 0x10))(puVar10,lVar11,UVar9.unknown);
      (**(code **)(lVar6 + 0x38))(puVar10,0,1,UVar9.unknown);
      FUN_1000c7780(SVar15.str,SVar15.bridgeObject,0xd000000000000015,0x80000001004e6b20,puVar10);
      _swift_bridgeObjectRelease(SVar15.bridgeObject);
      FUN_10002a29c(puVar10,&DAT_10054a9c8,&DAT_10041bbe0);
      FUN_100029548(lVar11,FUN_10025ee04);
    }
    return;
  }
  FUN_1001b7378(0);
  FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003669c8);
  (*pcVar1)();
}

