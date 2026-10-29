// rea decompile_all
// name: FUN_1000d37d0
// address: 0x1000d37d0
// body: available
// range: 0x1000d37d0-0x1000d3c83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000d37d0(ulong param_1)

{
  Locale LVar1;
  LocalizationValue LVar2;
  StringInterpolation SVar3;
  State SVar4;
  State SVar5;
  char *pcVar6;
  LocalizationValue LVar7;
  undefined *puVar8;
  State SVar9;
  void *pvVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong *unaff_x20;
  undefined *puVar11;
  undefined *puVar12;
  String SVar13;
  String SVar14;
  undefined *local_d0;
  undefined8 local_c8;
  State local_c0;
  void *pvStack_b8;
  ulong local_b0;
  State local_a0;
  ulong uStack_98;
  ulong local_90;
  ulong uStack_88;
  undefined *local_80;
  ulong uStack_78;
  ulong local_68;
  
  LVar1 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  LVar2 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  LVar2.unknown =
       (undefined *)
       ((long)&local_d0 +
       (-(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) - (extraout_x8 + 0xfU & 0xfffffffffffffff0)));
  SVar3 = LocalizationValue::StringInterpolation::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(SVar3.unknown + -8) + 0x40));
  uStack_78 = unaff_x20[0xe];
  local_80 = (undefined *)unaff_x20[0xd];
  uStack_98 = unaff_x20[0xe];
  local_a0.unknown = (undefined *)unaff_x20[0xd];
  local_68 = uStack_78;
  FUN_1000087e4(&local_68,&local_c0,&DAT_10054b608,&DAT_10041c9a0);
  SVar4.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar4);
  if ((char)local_c0.unknown == '\x01') {
    uStack_98 = unaff_x20[0x10];
    local_a0.unknown = (undefined *)unaff_x20[0xf];
    local_90 = unaff_x20[0x11];
    SVar5.unknown = &DAT_10054dd08;
    FUN_100002f94(&DAT_10054dd08,&DAT_10041ea50);
    SwiftUI::State::get_wrappedValue(SVar5);
    SVar5.unknown = local_c0.unknown;
    FUN_1000d5ab4();
    if (((uint)pvStack_b8 & 0xff) != 1) {
      puVar12 = (undefined *)*unaff_x20;
      if (SVar5.unknown == puVar12) {
        puVar11 = (undefined *)0x0;
      }
      else {
        puVar8 = SVar5.unknown;
        pvVar10 = pvStack_b8;
        (*(code *)unaff_x20[4])();
        puVar11 = SVar5.unknown;
        if (pvVar10 != (void *)0x0) {
          if ((param_1 & 1) != 0) {
            FUN_10002a29c(&local_80,&DAT_10054ab50,&DAT_10041d0f0);
            FUN_1000d407c(puVar8,pvVar10);
            _swift_bridgeObjectRelease(pvVar10);
            return;
          }
          uStack_98 = uStack_78;
          local_a0.unknown = local_80;
          local_c0.unknown = local_c0.unknown & 0xffffffffffffff00;
          SwiftUI::State::set_wrappedValue(&local_a0,&local_c0,SVar4.unknown);
          FUN_10002a29c(&local_80,&DAT_10054ab50,&DAT_10041d0f0);
          uStack_98 = unaff_x20[0x13];
          local_a0.unknown = (undefined *)unaff_x20[0x12];
          local_90 = unaff_x20[0x14];
          FUN_100002f94(&DAT_10054ab90,&DAT_10041bdb0);
          SwiftUI::State::set_wrappedValue();
          return;
        }
      }
      uStack_98 = unaff_x20[0xb];
      local_a0.unknown = (undefined *)unaff_x20[10];
      local_90 = unaff_x20[0xc];
      pvStack_b8 = (void *)unaff_x20[0xb];
      local_c0.unknown = (undefined *)unaff_x20[10];
      local_b0 = unaff_x20[0xc];
      uStack_88 = local_90;
      FUN_1000087e4(&uStack_88,&local_d0,&DAT_100551458,&DAT_100423120);
      SVar9.unknown = &DAT_100551460;
      FUN_100002f94(&DAT_100551460,&DAT_100423128);
      SwiftUI::State::get_wrappedValue(SVar9);
      puVar8 = puVar12;
      if ((char)local_c8 != '\x01') {
        puVar8 = local_d0;
      }
      pvStack_b8 = (void *)unaff_x20[0x18];
      local_c0.unknown = (undefined *)unaff_x20[0x17];
      local_d0 = (undefined *)CONCAT71(local_d0._1_7_,(long)SVar5.unknown < (long)puVar8);
      SwiftUI::State::set_wrappedValue(&local_c0,&local_d0,SVar4.unknown);
      pvStack_b8 = (void *)unaff_x20[0xb];
      local_c0.unknown = (undefined *)unaff_x20[10];
      local_b0 = unaff_x20[0xc];
      local_c8 = CONCAT71(local_c8._1_7_,SVar5.unknown == puVar12);
      local_d0 = puVar11;
      SwiftUI::State::set_wrappedValue();
      FUN_10002a29c(&local_a0,&DAT_100551460,&DAT_100423128);
      pvStack_b8 = (void *)uStack_78;
      local_c0.unknown = local_80;
      local_d0 = (undefined *)((ulong)local_d0 & 0xffffffffffffff00);
      SwiftUI::State::set_wrappedValue();
      FUN_10002a29c(&local_80,&DAT_10054ab50,&DAT_10041d0f0);
      pvStack_b8 = (void *)unaff_x20[0x13];
      local_c0.unknown = (undefined *)unaff_x20[0x12];
      local_b0 = unaff_x20[0x14];
      local_d0 = (undefined *)0x0;
      local_c8 = 0;
      FUN_100002f94(&DAT_10054ab90,&DAT_10041bdb0);
      SwiftUI::State::set_wrappedValue();
      if ((param_1 & 1) == 0) {
        return;
      }
      FUN_1000d2230();
      (*(code *)unaff_x20[8])();
      return;
    }
    pcVar6 = (char *)0x366;
    FUN_10025f020();
    if ((param_1 & 1) != 0) {
      SVar3.unknown = &DAT_10041d0f0;
      FUN_10002a29c(&local_80,&DAT_10054ab50);
      LocalizationValue::StringInterpolation::_init(0x11,1);
      SVar14.bridgeObject = (void *)0x80000001004dd4e0;
      SVar14.str = (char *)0xd000000000000011;
      LocalizationValue::StringInterpolation::_appendLiteral(SVar14,SVar3);
      SVar13.bridgeObject = pvStack_b8;
      SVar13.str = pcVar6;
      LocalizationValue::StringInterpolation::_appendInterpolation(SVar13,SVar3);
      _swift_bridgeObjectRelease(pvStack_b8);
      LocalizationValue::StringInterpolation::_appendLiteral
                ((String)(ZEXT816(0xe000000000000000) << 0x40),SVar3);
      LVar7 = LocalizationValue::_init
                        (LVar2.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
      Foundation::Locale::get_current((Locale)LVar7.unknown);
      SVar14 = (extension_Foundation)::Swift::String::_init(LVar2,(Locale)0x0);
      FUN_1000d407c(SVar14.str);
      _swift_bridgeObjectRelease(SVar14.bridgeObject);
      return;
    }
    _swift_bridgeObjectRelease(pvStack_b8);
    uStack_98 = uStack_78;
    local_a0.unknown = local_80;
    local_c0.unknown = local_c0.unknown & 0xffffffffffffff00;
    SwiftUI::State::set_wrappedValue(&local_a0,&local_c0,SVar4.unknown);
  }
  FUN_10002a29c(&local_80,&DAT_10054ab50,&DAT_10041d0f0);
  return;
}

