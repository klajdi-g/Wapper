// rea decompile_all
// name: FUN_1000b7ffc
// address: 0x1000b7ffc
// body: available
// range: 0x1000b7ffc-0x1000b88c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000b8198 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000b7ffc(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  _StringGuts _Var2;
  _StringGuts _Var3;
  undefined1 uVar4;
  Storage storage;
  code *pcVar5;
  bool bVar6;
  byte bVar7;
  State SVar8;
  long lVar9;
  undefined **ppuVar10;
  LocalizationValue LVar11;
  Locale LVar12;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  String stringLiteral;
  String SVar18;
  undefined8 *local_240;
  undefined *local_238;
  ulong uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  byte local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  String local_1e0;
  undefined *local_1d0;
  undefined8 uStack_1c8;
  undefined1 local_1c0;
  undefined7 uStack_1bf;
  undefined8 local_1b8;
  undefined *local_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  byte local_170;
  undefined7 uStack_160;
  undefined1 local_159;
  undefined7 uStack_158;
  undefined1 uStack_151;
  undefined7 uStack_150;
  undefined1 local_149;
  undefined7 uStack_148;
  undefined1 uStack_141;
  undefined7 uStack_140;
  undefined1 local_139;
  undefined7 uStack_138;
  undefined1 uStack_131;
  undefined7 uStack_130;
  undefined1 local_129;
  undefined1 uStack_128;
  undefined6 uStack_127;
  undefined1 uStack_121;
  undefined1 uStack_120;
  undefined6 uStack_11f;
  short local_119;
  undefined *local_110;
  ulong uStack_108;
  String local_100;
  undefined *local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined2 local_d0;
  undefined *local_c0;
  undefined8 uStack_b8;
  char *local_b0;
  void *pvStack_a8;
  undefined *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined2 local_80;
  
  lVar15 = *(long *)(param_2 + 0x58);
  uStack_b8 = *(undefined8 *)(param_2 + 0x18);
  local_c0 = *(undefined **)(param_2 + 0x10);
  SVar8.unknown = &DAT_10054ba40;
  FUN_100002f94(&DAT_10054ba40,&DAT_100423be0);
  SwiftUI::State::get_wrappedValue(SVar8);
  puVar14 = local_110;
  if ((long)local_110 < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1000b88b8);
    (*pcVar5)();
  }
  puVar17 = *(undefined **)(lVar15 + 0x10);
  if (puVar17 <= local_110) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1000b88bc);
    (*pcVar5)();
  }
  lVar9 = 0;
  local_240 = param_1;
  FUN_1000bc244();
  uVar13 = (ulong)*(byte *)(*(long *)(lVar9 + -8) + 0x50);
  lVar15 = lVar15 + (uVar13 + 0x20 & (uVar13 ^ 0xffffffffffffffff));
  lVar16 = *(long *)(*(long *)(lVar9 + -8) + 0x48);
  puVar1 = (undefined8 *)(lVar15 + lVar16 * (long)puVar14 + (long)*(int *)(lVar9 + 0x14));
  _Var2.unknown = (undefined *)*puVar1;
  _Var3.unknown = (undefined *)puVar1[1];
  storage.value = (__int8)&stack0xfffffffffffffff0;
  if ((_Var2.unknown == (undefined *)0xd00000000000001a &&
       _Var3.unknown == (undefined *)0x80000001004dd090) ||
     (bVar6 = Swift::_stringCompareWithSmolCheck(_Var2,_Var3,(_StringComparisonResult)0x1a), bVar6))
  {
    bVar7 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
    if ((bVar7 & 1) == 0) {
      local_110 = (undefined *)0x0;
      uStack_108 = CONCAT71(uStack_108._1_7_,1);
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init(storage);
      puVar14 = local_c0;
      uVar4 = (undefined1)uStack_b8;
    }
    else {
      SwiftUI::AppStorage::get_projectedValue((AppStorage)*(undefined **)(param_2 + 0x50));
      uStack_98 = uStack_b8;
      local_a0 = local_c0;
      uVar4 = local_b0._0_1_;
      local_c0 = (undefined *)0x7369642e6b636f6c;
      uStack_b8 = 0xec00000079616c70;
      local_b0 = (char *)0xd00000000000002e;
      pvStack_a8 = (void *)0x80000001004dbd80;
      local_90 = CONCAT71(local_90._1_7_,uVar4);
      local_88 = 0x4045000000000000;
      uStack_108 = 0xec00000079616c70;
      local_110 = (undefined *)0x7369642e6b636f6c;
      local_100.bridgeObject = (void *)0x80000001004dbd80;
      local_100.str = (char *)0xd00000000000002e;
      uStack_e8 = uStack_98;
      local_f0 = local_a0;
      local_d8 = 0x4045000000000000;
      local_e0 = local_90;
      ppuVar10 = &local_c0;
      FUN_1000bcf7c(ppuVar10,&local_1b0);
      FUN_1000bcf3c();
      local_1b0 = (undefined *)SwiftUI::AnyView::_init(ppuVar10,&DAT_100529320,ppuVar10);
      uStack_1a8 = uStack_1a8 & 0xffffffffffffff00;
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)&local_1b0);
      FUN_1000bcfb0(&local_c0);
      puVar14 = local_110;
      uVar4 = (undefined1)uStack_108;
    }
    uStack_b8 = CONCAT71(uStack_b8._1_7_,uVar4);
    local_80 = (ushort)local_80._1_1_ << 8;
    local_c0 = puVar14;
    FUN_100047ac4(puVar14,uVar4);
    FUN_100047ac4(puVar14,uVar4);
    FUN_100002f94(&DAT_1005509f8,&DAT_100422480);
    FUN_1000bcecc();
    FUN_1000bcf3c();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(storage.value + 0x50));
    uStack_188 = uStack_210;
    local_190 = local_218;
    uStack_178 = uStack_200;
    uStack_180 = local_208;
    local_170 = local_1f8;
    uStack_1a8 = uStack_230;
    local_1b0 = local_238;
    uStack_198 = uStack_220;
    uStack_1a0 = local_228;
    uStack_e8 = uStack_210;
    local_f0 = (undefined *)local_218;
    local_d8 = uStack_200;
    local_e0 = local_208;
    uStack_108 = uStack_230;
    local_110 = local_238;
    local_d0 = (ushort)local_1f8;
    FUN_1000087e4(&local_1b0,&local_c0,&DAT_1005509e0,&DAT_100422478);
    FUN_100002f94(&DAT_1005509e0,&DAT_100422478);
    FUN_1000bce54();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init(storage);
    FUN_100047b2c(puVar14,uVar4);
    FUN_100047b2c(puVar14,uVar4);
  }
  else {
    uStack_b8 = *(undefined8 *)(param_2 + 0x18);
    local_c0 = *(undefined **)(param_2 + 0x10);
    SwiftUI::State::get_wrappedValue(SVar8);
    if (puVar17 <= local_110) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1000b88c0);
      (*pcVar5)();
    }
    puVar1 = (undefined8 *)(lVar15 + (long)local_110 * lVar16 + (long)*(int *)(lVar9 + 0x14));
    _Var2.unknown = (undefined *)*puVar1;
    _Var3.unknown = (undefined *)puVar1[1];
    if ((_Var2.unknown != (undefined *)0xd000000000000013 ||
         _Var3.unknown != (undefined *)0x80000001004dd2a0) &&
       (bVar6 = Swift::_stringCompareWithSmolCheck(_Var2,_Var3,(_StringComparisonResult)0x13),
       !bVar6)) {
      uStack_b8 = *(undefined8 *)(param_2 + 0x18);
      local_c0 = *(undefined **)(param_2 + 0x10);
      SwiftUI::State::get_wrappedValue(SVar8);
      if (puVar17 <= local_110) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1000b88c4);
        (*pcVar5)();
      }
      puVar1 = (undefined8 *)(lVar15 + (long)local_110 * lVar16 + (long)*(int *)(lVar9 + 0x14));
      _Var2.unknown = (undefined *)*puVar1;
      _Var3.unknown = (undefined *)puVar1[1];
      if ((_Var2.unknown == (undefined *)0xd000000000000012 &&
           _Var3.unknown == (undefined *)0x80000001004dd340) ||
         (bVar6 = Swift::_stringCompareWithSmolCheck(_Var2,_Var3,(_StringComparisonResult)0x12),
         bVar6)) {
        LVar11 = LocalizationValue::_typeMetadataAccessor();
        (*(code *)PTR____chkstk_darwin_100521118)
                  (*(undefined8 *)(*(long *)(LVar11.unknown + -8) + 0x40));
        SVar18.bridgeObject = (void *)0x80000001004dd420;
        SVar18.str = (char *)0xd000000000000016;
        LocalizationValue::_init(SVar18);
        LVar12 = Foundation::Locale::typeMetadataAccessor();
        (*(code *)PTR____chkstk_darwin_100521118)
                  (*(undefined8 *)(*(long *)(LVar12.unknown + -8) + 0x40));
        Foundation::Locale::get_current(LVar12);
        SVar18 = (extension_Foundation)::Swift::String::_init
                           ((undefined *)
                            ((long)&local_240 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0)),
                            (Locale)0x0);
        SwiftUI::AppStorage::get_projectedValue((AppStorage)*(undefined **)(param_2 + 0x40));
        local_110 = (undefined *)0x7265776f70;
        uStack_108 = 0xe500000000000000;
        local_f0 = local_c0;
        uStack_e8 = uStack_b8;
        local_e0 = CONCAT71(local_e0._1_7_,local_b0._0_1_);
        local_d8 = 0x4045000000000000;
        local_d0 = CONCAT11(1,(undefined1)local_d0);
        local_100 = SVar18;
        FUN_100002f94(&DAT_1005509e0,&DAT_100422478);
        FUN_1000bce54();
        FUN_1000bcf3c();
        (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init(storage);
        local_119 = local_80;
      }
      else {
        local_c0 = (undefined *)0x0;
        uStack_b8 = 0;
        local_b0 = (char *)0x0;
        pvStack_a8 = (void *)0x0;
        local_a0 = (undefined *)0x0;
        uStack_98 = 0;
        local_90 = 0;
        local_88 = 0;
        local_119 = -0x100;
      }
      goto LAB_1000b8354;
    }
    LVar11 = LocalizationValue::_typeMetadataAccessor();
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(undefined8 *)(*(long *)(LVar11.unknown + -8) + 0x40));
    stringLiteral.bridgeObject = (void *)0x80000001004dd440;
    stringLiteral.str = (char *)0xd000000000000014;
    LocalizationValue::_init(stringLiteral);
    LVar12 = Foundation::Locale::typeMetadataAccessor();
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(undefined8 *)(*(long *)(LVar12.unknown + -8) + 0x40));
    Foundation::Locale::get_current(LVar12);
    SVar18 = (extension_Foundation)::Swift::String::_init
                       ((undefined *)((long)&local_240 - (extraout_x8 + 0xfU & 0xfffffffffffffff0)),
                        (Locale)0x0);
    SwiftUI::AppStorage::get_projectedValue((AppStorage)*(undefined **)(param_2 + 0x48));
    uVar4 = local_b0._0_1_;
    uStack_98 = uStack_b8;
    local_a0 = local_c0;
    local_1f0 = 0x6461622e6c6c6562;
    uStack_1e8 = 0xea00000000006567;
    local_1d0 = local_c0;
    uStack_1c8 = uStack_b8;
    local_1c0 = local_b0._0_1_;
    local_1b8 = 0x4045000000000000;
    local_1e0.bridgeObject = SVar18.bridgeObject;
    local_1e0.str = SVar18.str;
    uStack_b8 = 0xea00000000006567;
    local_c0 = (undefined *)0x6461622e6c6c6562;
    pvStack_a8 = local_1e0.bridgeObject;
    local_b0 = local_1e0.str;
    local_90 = CONCAT71(uStack_1bf,uVar4);
    local_88 = 0x4045000000000000;
    local_80 = CONCAT11(local_80._1_1_,1);
    local_1e0 = SVar18;
    FUN_1000bcf7c(&local_1f0,&local_110);
    FUN_1000bcf7c(&local_1f0,&local_110);
    FUN_100002f94(&DAT_1005509f8,&DAT_100422480);
    FUN_1000bcecc();
    FUN_1000bcf3c();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(storage.value + 0x50));
    uStack_188 = uStack_210;
    local_190 = local_218;
    uStack_178 = uStack_200;
    uStack_180 = local_208;
    local_170 = local_1f8;
    uStack_1a8 = uStack_230;
    local_1b0 = local_238;
    uStack_198 = uStack_220;
    uStack_1a0 = local_228;
    uStack_e8 = uStack_210;
    local_f0 = (undefined *)local_218;
    local_d8 = uStack_200;
    local_e0 = local_208;
    uStack_108 = uStack_230;
    local_110 = local_238;
    local_d0 = (ushort)local_1f8;
    FUN_1000087e4(&local_1b0,&local_c0,&DAT_1005509e0,&DAT_100422478);
    FUN_100002f94(&DAT_1005509e0,&DAT_100422478);
    FUN_1000bce54();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init(storage);
    FUN_1000bcfb0(&local_1f0);
    FUN_1000bcfb0(&local_1f0);
  }
  FUN_10002a29c(&local_238,&DAT_1005509e0,&DAT_100422478);
  local_119 = local_80;
LAB_1000b8354:
  local_100.bridgeObject = pvStack_a8;
  local_100.str = local_b0;
  uStack_141 = SUB81(pvStack_a8,0);
  uStack_140 = (undefined7)((ulong)pvStack_a8 >> 8);
  local_149 = SUB81(local_b0,0);
  uStack_148 = (undefined7)((ulong)local_b0 >> 8);
  uStack_131 = (undefined1)uStack_98;
  uStack_130 = (undefined7)((ulong)uStack_98 >> 8);
  local_139 = SUB81(local_a0,0);
  uStack_138 = (undefined7)((ulong)local_a0 >> 8);
  uStack_121 = (undefined1)local_88;
  uStack_120 = (undefined1)((ulong)local_88 >> 8);
  uStack_11f = (undefined6)((ulong)local_88 >> 0x10);
  local_129 = (undefined1)local_90;
  uStack_128 = (undefined1)((ulong)local_90 >> 8);
  uStack_127 = (undefined6)((ulong)local_90 >> 0x10);
  uStack_151 = (undefined1)uStack_b8;
  uStack_150 = (undefined7)((ulong)uStack_b8 >> 8);
  local_159 = SUB81(local_c0,0);
  uStack_158 = (undefined7)((ulong)local_c0 >> 8);
  *local_240 = 0;
  *(undefined1 *)(local_240 + 1) = 1;
  *(ulong *)((long)local_240 + 0x11) = CONCAT17(uStack_151,uStack_158);
  *(ulong *)((long)local_240 + 9) = CONCAT17(local_159,uStack_160);
  *(ulong *)((long)local_240 + 0x4a) = CONCAT26(local_119,uStack_11f);
  *(ulong *)((long)local_240 + 0x42) = CONCAT17(uStack_120,CONCAT16(uStack_121,uStack_127));
  *(ulong *)((long)local_240 + 0x41) = CONCAT17(uStack_121,(int7)((ulong)local_90 >> 8));
  *(ulong *)((long)local_240 + 0x39) = CONCAT17(local_129,uStack_130);
  *(ulong *)((long)local_240 + 0x31) = CONCAT17(uStack_131,uStack_138);
  *(ulong *)((long)local_240 + 0x29) = CONCAT17(local_139,uStack_140);
  *(ulong *)((long)local_240 + 0x21) = CONCAT17(uStack_141,uStack_148);
  *(ulong *)((long)local_240 + 0x19) = CONCAT17(local_149,uStack_150);
  local_110 = local_c0;
  uStack_108 = uStack_b8;
  local_f0 = local_a0;
  uStack_e8 = uStack_98;
  local_e0 = local_90;
  local_d8 = local_88;
  local_d0 = local_119;
  local_80 = local_119;
  FUN_1000087e4(&local_110,&local_1b0,&DAT_1005509d8,&DAT_100422470);
  FUN_10002a29c(&local_c0,&DAT_1005509d8,&DAT_100422470);
  return;
}

