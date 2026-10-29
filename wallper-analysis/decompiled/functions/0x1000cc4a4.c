// rea decompile_all
// name: FUN_1000cc4a4
// address: 0x1000cc4a4
// body: available
// range: 0x1000cc4a4-0x1000cc907 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000cc4a4(undefined8 *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  Locale LVar3;
  LocalizationValue LVar4;
  StringInterpolation SVar5;
  long lVar6;
  LocalizationValue LVar7;
  UUID UVar8;
  StringInterpolation SVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar10;
  long lVar11;
  long lVar12;
  String SVar13;
  String SVar14;
  String aSStack_b0 [4];
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar2 = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)aSStack_b0 - extraout_x8;
  LVar3 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar3.unknown + -8) + 0x40));
  LVar4 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar4.unknown + -8) + 0x40));
  LVar4.unknown =
       (undefined *)
       ((lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0)) -
       (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  SVar5 = LocalizationValue::StringInterpolation::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(SVar5.unknown + -8) + 0x40));
  SVar5.unknown = LVar4.unknown + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  FUN_10025ee04();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar11 = (long)SVar5.unknown - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    if (DAT_100557eb0 != -1) {
      _swift_once(&DAT_100557eb0,FUN_10025a3bc);
    }
    if (*(long *)(DAT_100577d68 + _TtC7Wallper13WindowManager::mainWindow) != 0) {
      lVar6 = param_1[3];
      if (lVar6 != 0) {
        FUN_10012db48(0);
        _swift_initStaticObject();
        puVar2 = &DAT_100549eb0;
        FUN_100002f94(&DAT_100549eb0,&DAT_100426be0);
        _swift_allocObject();
        uStack_68 = param_1[1];
        local_70 = *param_1;
        *(undefined8 *)(puVar2 + 0x18) = 2;
        *(undefined8 *)(puVar2 + 0x10) = 1;
        *(undefined8 *)(puVar2 + 0x28) = uStack_68;
        *(undefined8 *)(puVar2 + 0x20) = local_70;
        _swift_retain(lVar6);
        FUN_100043d74(&local_70,aSStack_b0);
        FUN_10012cd14(lVar6,puVar2,0,0);
        _swift_release(lVar6);
        _swift_release(puVar2);
        return;
      }
      goto LAB_1000cc8c4;
    }
  }
  lVar12 = param_1[3];
  if (lVar12 != 0) {
    puVar2 = &DAT_100549eb0;
    FUN_100002f94(&DAT_100549eb0,&DAT_100426be0);
    _swift_initStackObject();
    uStack_68 = param_1[1];
    local_70 = *param_1;
    *(undefined8 *)(puVar2 + 0x18) = 2;
    *(undefined8 *)(puVar2 + 0x10) = 1;
    *(undefined8 *)(puVar2 + 0x28) = uStack_68;
    *(undefined8 *)(puVar2 + 0x20) = local_70;
    _swift_retain(lVar12);
    FUN_100043d74(&local_70,aSStack_b0);
    SVar9.unknown = (undefined *)0x0;
    FUN_1001b59d0(lVar11,0,0xe000000000000000,0,puVar2);
    _swift_release(lVar12);
    _swift_setDeallocating(puVar2);
    FUN_100043c00(puVar2 + 0x20);
    if (DAT_100551178 != -1) {
      _swift_once(&DAT_100551178,FUN_1000c7edc);
    }
    LocalizationValue::StringInterpolation::_init(0xe,1);
    SVar14.bridgeObject = (void *)0xab000000009c80e2;
    SVar14.str = (char *)0x2064657461657243;
    LocalizationValue::StringInterpolation::_appendLiteral(SVar14,SVar9);
    LocalizationValue::StringInterpolation::_appendInterpolation
              (*(String *)(lVar11 + *(int *)(lVar6 + 0x14)),SVar9);
    SVar13.bridgeObject = (void *)0xa300000000000000;
    SVar13.str = (char *)0x9d80e2;
    LocalizationValue::StringInterpolation::_appendLiteral(SVar13,SVar9);
    LVar7 = LocalizationValue::_init(SVar5);
    Foundation::Locale::get_current((Locale)LVar7.unknown);
    SVar14 = (extension_Foundation)::Swift::String::_init(LVar4,(Locale)0x0);
    UVar8 = Foundation::UUID::typeMetadataAccessor();
    lVar6 = *(long *)(UVar8.unknown + -8);
    (**(code **)(lVar6 + 0x10))(lVar10,lVar11,UVar8.unknown);
    (**(code **)(lVar6 + 0x38))(lVar10,0,1,UVar8.unknown);
    FUN_1000c7780(SVar14.str,SVar14.bridgeObject,0x6461622e74786574,0xef73756c702e6567,lVar10);
    _swift_bridgeObjectRelease(SVar14.bridgeObject);
    FUN_10002a29c(lVar10,&DAT_10054a9c8,&DAT_10041bbe0);
    FUN_100029548(lVar11,FUN_10025ee04);
    return;
  }
LAB_1000cc8c4:
  FUN_1001b7378(0);
  FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000cc908);
  (*pcVar1)();
}

