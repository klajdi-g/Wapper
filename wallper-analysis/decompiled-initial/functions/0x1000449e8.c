// rea decompile_all
// name: FUN_1000449e8
// address: 0x1000449e8
// body: available
// range: 0x1000449e8-0x100044e07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100044d6c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000449e8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  byte bVar1;
  RGBColorSpace RVar2;
  undefined *puVar3;
  ulong uVar4;
  Color CVar5;
  Color CVar6;
  UnitPoint UVar7;
  Gradient gradient;
  StateObject SVar8;
  State SVar9;
  undefined **ppuVar10;
  UnitPoint startPoint;
  long extraout_x8;
  long extraout_x12;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 local_110;
  undefined *puStack_108;
  undefined *local_100;
  undefined8 uStack_f8;
  byte local_f0;
  undefined7 uStack_ef;
  undefined1 local_e8;
  undefined *local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  UnitPoint endPoint;
  
  bVar1 = Swift::_stdlib_isOSVersionAtLeast(0xf,0,0);
  if ((bVar1 & 1) == 0) {
    CVar5.unknown = &DAT_10054af98;
    FUN_100002f94(&DAT_10054af98,&DAT_10041c1a0);
    _swift_allocObject();
    *(undefined8 *)(CVar5.unknown + 0x18) = 6;
    *(undefined8 *)(CVar5.unknown + 0x10) = 3;
    CVar6 = SwiftUI::Color::get_black(CVar5);
    *(undefined **)(CVar5.unknown + 0x20) = CVar6.unknown;
    RVar2 = SwiftUI::Color::RGBColorSpace::typeMetadataAccessor();
    endPoint.unknown = (undefined *)CONCAT71((int7)((ulong)CVar6.unknown >> 8),RVar2.value);
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(undefined8 *)(*(long *)(endPoint.unknown + -8) + 0x40));
    lVar11 = (long)&local_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
    startPoint.unknown =
         (undefined *)
         (ulong)*(uint *)
                 PTR___enum_case_for_SwiftUI_Color_RGBColorSpace_sRGB_SwiftUI_Color_RGBColorSpace_Type___>_SwiftUI_Color_RGBColorSpace_1005231e0
    ;
    (**(code **)(extraout_x12 + 0x68))(lVar11);
    CVar6 = SwiftUI::Color::init((RGBColorSpace)(__int8)lVar11,0.1,0.02,0.25,1.0);
    *(undefined **)(CVar5.unknown + 0x28) = CVar6.unknown;
    CVar6 = SwiftUI::Color::get_black(CVar6);
    *(undefined **)(CVar5.unknown + 0x30) = CVar6.unknown;
    UVar7 = SwiftUI::UnitPoint::get_topLeading(CVar6.unknown);
    SwiftUI::UnitPoint::get_bottomTrailing(UVar7);
    gradient = SwiftUI::Gradient::init();
    SwiftUI::LinearGradient::init(gradient,startPoint,endPoint);
    local_e0 = local_b0;
    uStack_d0 = uStack_a0;
    uStack_d8 = uStack_a8;
    uStack_c0 = uStack_90;
    local_c8 = local_98;
    local_b8 = 1;
    FUN_10002ac94();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init
              ((Storage)((char)&stack0xfffffffffffffff0 + 0x30));
    goto LAB_100044dc8;
  }
  uVar12 = param_5[3];
  puVar13 = &DAT_10041dd68;
  _swift_getKeyPath(&DAT_10041dd68);
  puVar3 = &DAT_10041dd90;
  _swift_getKeyPath(&DAT_10041dd90);
  Combine::Published::_get_subscript(&local_110,uVar12,puVar13,puVar3);
  _swift_release(puVar13);
  _swift_release(puVar3);
  if ((char)local_110 == '\x01') {
    uVar4 = param_5[0xd];
    lVar11 = param_5[0xe];
    uVar12 = param_5[5];
    puVar13 = &DAT_10041ddb8;
    _swift_getKeyPath(&DAT_10041ddb8);
    puVar3 = &DAT_10041dde0;
    _swift_getKeyPath(&DAT_10041dde0);
    Combine::Published::_get_subscript(&local_110,uVar12,puVar13,puVar3);
    _swift_release(puVar13);
    _swift_release(puVar3);
    if (lVar11 == 0) {
      _swift_bridgeObjectRelease(local_110);
    }
    else {
      _swift_bridgeObjectRetain(lVar11);
      FUN_1002165a4(uVar4,lVar11,local_110);
      _swift_bridgeObjectRelease(local_110);
      _swift_bridgeObjectRelease(lVar11);
      if ((uVar4 & 1) != 0) goto LAB_100044b08;
    }
    uVar12 = param_5[0xb];
    FUN_1003280cc(uVar12,*(undefined1 *)(param_5 + 0xc));
    local_f0 = (byte)uVar12;
  }
  else {
LAB_100044b08:
    local_f0 = 0;
  }
  uVar12 = param_5[1];
  puVar13 = (undefined *)*param_5;
  SVar8.unknown = (undefined *)param_5[6];
  local_b0 = puVar13;
  uStack_a8 = uVar12;
  FUN_100044994();
  FUN_100047f94(&DAT_10054d430);
  _swift_retain(uVar12);
  SwiftUI::StateObject::get_wrappedValue(SVar8);
  SwiftUI::GeometryProxy::get_size((GeometryProxy)SVar8.unknown);
  uStack_d8 = param_5[10];
  local_e0 = (undefined *)param_5[9];
  SVar9.unknown = &DAT_10054ac50;
  FUN_100002f94(&DAT_10054ac50,&DAT_10041dd60);
  SwiftUI::State::get_wrappedValue(SVar9);
  local_f0 = local_f0 & 1;
  ppuVar10 = &local_b0;
  local_110 = uVar12;
  puStack_108 = SVar8.unknown;
  local_100 = puVar13;
  uStack_f8 = param_3;
  FUN_1000087e4(ppuVar10,&local_e0,&DAT_10054d438,&DAT_10041ddb0);
  FUN_100046714();
  _swift_retain(SVar8.unknown);
  local_e0 = (undefined *)SwiftUI::AnyView::_init(ppuVar10,&DAT_1005267d8,ppuVar10);
  FUN_10002ac94();
  uStack_d0 = 0;
  uStack_d8 = 0;
  uStack_c0 = 0;
  local_c8 = 0;
  local_b8 = 0;
  (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init
            ((Storage)((char)&stack0xfffffffffffffff0 + 0x30));
  FUN_10002a29c(&local_b0,&DAT_10054d438,&DAT_10041ddb0);
  _swift_release(SVar8.unknown);
LAB_100044dc8:
  param_1[1] = puStack_108;
  *param_1 = local_110;
  param_1[3] = uStack_f8;
  param_1[2] = local_100;
  param_1[4] = CONCAT71(uStack_ef,local_f0);
  *(undefined1 *)(param_1 + 5) = local_e8;
  return;
}

