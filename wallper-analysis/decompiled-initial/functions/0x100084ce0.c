// rea decompile_all
// name: FUN_100084ce0
// address: 0x100084ce0
// body: available
// range: 0x100084ce0-0x1000851ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100084db0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100084ce0(undefined8 *param_1,long param_2,undefined1 param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  long lVar3;
  Interpolation IVar4;
  ResizingMode RVar5;
  undefined7 extraout_var;
  undefined *puVar6;
  long lVar7;
  State SVar8;
  Image IVar9;
  Image IVar10;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  EdgeInsets capInsets;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_340 [8];
  NSImage *local_338;
  long local_330;
  undefined *puStack_328;
  long local_320;
  long lStack_318;
  undefined8 *local_310;
  undefined1 auStack_308 [72];
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  double dStack_290;
  double dStack_288;
  undefined8 local_280;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  double dStack_240;
  double dStack_238;
  undefined8 local_230;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  double dStack_1f0;
  double dStack_1e8;
  undefined8 local_1e0;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  double local_1a0;
  double dStack_198;
  undefined8 local_190;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  code *local_168;
  undefined *local_160;
  undefined8 uStack_158;
  double local_150;
  double local_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  byte local_100 [8];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  
  local_310 = param_1;
  IVar4 = SwiftUI::Image::Interpolation::typeMetadataAccessor();
  extraout_var = (undefined7)((ulong)param_2 >> 8);
  lStack_318 = CONCAT71(extraout_var,IVar4.value);
  local_320 = *(long *)(lStack_318 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_320 + 0x40));
  puVar13 = auStack_340 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  RVar5 = SwiftUI::Image::ResizingMode::typeMetadataAccessor();
  puStack_328 = (undefined *)CONCAT71(extraout_var,RVar5.value);
  local_330 = *(long *)(puStack_328 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_330 + 0x40));
  capInsets.unknown = puVar13 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_d0 = 0;
  puVar6 = &DAT_10054bd30;
  FUN_100002f94(&DAT_10054bd30,&DAT_10041d460);
  SwiftUI::State::init(&uStack_158,puVar6,puVar6);
  local_148 = 0.0;
  local_140 = 0;
  local_180 = 0x646168732d6d7261;
  uStack_178 = 0xea0000000000776f;
  local_170 = CONCAT71(local_170._1_7_,param_3);
  puVar6 = &DAT_1005285f0;
  _swift_allocObject(&DAT_1005285f0,0x40,7);
  *(undefined8 *)(puVar6 + 0x10) = 0x646168732d6d7261;
  *(undefined8 *)(puVar6 + 0x18) = 0xea0000000000776f;
  *(undefined8 *)(puVar6 + 0x28) = 0x4084000000000000;
  *(undefined8 *)(puVar6 + 0x20) = 0x4084000000000000;
  *(code **)(puVar6 + 0x30) = FUN_10002a200;
  *(undefined8 *)(puVar6 + 0x38) = 0;
  local_168 = FUN_10009952c;
  local_90 = local_140;
  uStack_c8 = uStack_178;
  local_d0 = local_180;
  pcStack_b8 = FUN_10009952c;
  uStack_c0 = local_170;
  uStack_a8 = uStack_158;
  uStack_98 = local_148;
  uStack_a0 = local_150;
  local_160 = puVar6;
  local_b0 = puVar6;
  FUN_1000851f0(&local_130,&local_d0);
  FUN_100093a3c(&local_d0);
  lVar7 = 0;
  FUN_100095ec0();
  puVar1 = (undefined1 *)(param_2 + *(int *)(lVar7 + 0x2c));
  uVar2 = *puVar1;
  uVar12 = *(undefined8 *)(puVar1 + 8);
  SVar8.unknown = &DAT_10054ab50;
  uStack_178 = uVar12;
  local_180._0_1_ = uVar2;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar8);
  dVar15 = *(double *)(param_2 + *(int *)(lVar7 + 0x14));
  dVar16 = 1.1;
  if ((char)local_1d0 == '\0') {
    dVar16 = 0.35;
  }
  uStack_178 = uVar12;
  local_180._0_1_ = uVar2;
  SwiftUI::State::get_wrappedValue(SVar8);
  dVar14 = 1.8;
  if ((char)local_1d0 == '\0') {
    dVar14 = 0.55;
  }
  dVar16 = dVar16 * dVar15;
  dVar15 = dVar15 * dVar14;
  local_180 = CONCAT71(local_180._1_7_,uVar2);
  uStack_178 = uVar12;
  SwiftUI::State::get_wrappedValue(SVar8);
  local_190 = 0x3fd47ae147ae147b;
  if ((char)local_1d0 == '\0') {
    local_190 = 0x3fe0000000000000;
  }
  uStack_1c8 = uStack_128;
  local_1d0 = local_130;
  uStack_1b8 = uStack_118;
  local_1c0 = uStack_120;
  uStack_1a8 = uStack_108;
  local_1b0 = local_110;
  uStack_178 = uStack_128;
  local_180 = local_130;
  local_168 = (code *)uStack_118;
  local_170 = uStack_120;
  uStack_158 = uStack_108;
  local_160 = (undefined *)local_110;
  local_1a0 = dVar16;
  dStack_198 = dVar15;
  local_150 = dVar16;
  local_148 = dVar15;
  local_140 = local_190;
  FUN_1000087e4(&local_1d0,&local_220,&DAT_10054f600,&DAT_100420af8);
  FUN_10002a29c(&local_180,&DAT_10054f600,&DAT_100420af8);
  if (DAT_10054ef88 != -1) {
    _swift_once(&DAT_10054ef88,FUN_100078738);
  }
  if (DAT_100577be8 == (NSImage *)0x0) {
    uVar11 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
  }
  else {
    local_338 = DAT_100577be8;
    IVar9 = SwiftUI::Image::init(DAT_100577be8);
    puVar6 = puStack_328;
    lVar7 = local_330;
    IVar10.unknown = puStack_328;
    (**(code **)(local_330 + 0x68))
              (capInsets.unknown,
               *(undefined4 *)
                PTR___enum_case_for_SwiftUI_Image_ResizingMode_stretch_SwiftUI_Image_ResizingMode_Type___>_SwiftUI_Image_ResizingMode_1005232f0
              );
    IVar10 = SwiftUI::Image::resizable(capInsets,(ResizingMode)(__int8)IVar9.unknown,IVar10);
    _swift_release(IVar9.unknown);
    (**(code **)(lVar7 + 8))(capInsets.unknown,puVar6);
    lVar3 = lStack_318;
    lVar7 = local_320;
    (**(code **)(local_320 + 0x68))
              (puVar13,*(undefined4 *)
                        PTR___enum_case_for_SwiftUI_Image_Interpolation_high_SwiftUI_Image_Interpolation_Type___>_SwiftUI_Image_Interpolation_100523300
               ,lStack_318);
    IVar9 = SwiftUI::Image::interpolation((Interpolation)(__int8)puVar13,IVar10);
    _swift_release(IVar10.unknown);
    (**(code **)(lVar7 + 8))(puVar13,lVar3);
    FUN_1000853d8(local_100,IVar9.unknown);
    uVar11 = (ulong)local_100[0];
    _swift_release(IVar9.unknown);
    _swift_retain(uStack_f0);
  }
  local_280 = local_190;
  local_230 = local_190;
  uStack_298 = uStack_1a8;
  local_2a0 = local_1b0;
  dStack_288 = dStack_198;
  dStack_290 = local_1a0;
  uStack_248 = uStack_1a8;
  local_250 = local_1b0;
  dStack_238 = dStack_198;
  dStack_240 = local_1a0;
  uStack_2b8 = uStack_1c8;
  local_2c0 = local_1d0;
  uStack_2a8 = uStack_1b8;
  uStack_2b0 = local_1c0;
  uStack_268 = uStack_1c8;
  local_270 = local_1d0;
  uStack_258 = uStack_1b8;
  uStack_260 = local_1c0;
  local_1e0 = local_190;
  uStack_1f8 = uStack_1a8;
  local_200 = local_1b0;
  dStack_1e8 = dStack_198;
  dStack_1f0 = local_1a0;
  uStack_218 = uStack_1c8;
  local_220 = local_1d0;
  uStack_208 = uStack_1b8;
  uStack_210 = local_1c0;
  FUN_1000087e4(&local_270,auStack_308,&DAT_10054f600,&DAT_100420af8);
  FUN_100099568(uVar11,local_f8,uStack_f0,local_e8,uStack_e0,local_d8);
  FUN_100099578(uVar11,local_f8,uStack_f0,local_e8,uStack_e0,local_d8);
  local_310[5] = uStack_1f8;
  local_310[4] = local_200;
  local_310[7] = dStack_1e8;
  local_310[6] = dStack_1f0;
  local_310[1] = uStack_218;
  *local_310 = local_220;
  local_310[3] = uStack_208;
  local_310[2] = uStack_210;
  local_310[8] = local_1e0;
  local_310[9] = uVar11;
  local_310[10] = local_f8;
  local_310[0xb] = uStack_f0;
  local_310[0xc] = local_e8;
  local_310[0xd] = uStack_e0;
  local_310[0xe] = local_d8;
  FUN_100099578(uVar11,local_f8,uStack_f0,local_e8,uStack_e0,local_d8);
  FUN_10002a29c(&local_2c0,&DAT_10054f600,&DAT_100420af8);
  return;
}

