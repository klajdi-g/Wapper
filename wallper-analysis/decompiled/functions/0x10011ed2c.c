// rea decompile_all
// name: FUN_10011ed2c
// address: 0x10011ed2c
// body: available
// range: 0x10011ed2c-0x10011f38b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10011ed2c(undefined8 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  byte bVar3;
  code *pcVar4;
  long lVar5;
  undefined *puVar6;
  URL UVar7;
  undefined *puVar8;
  long lVar9;
  Animation AVar10;
  Animation AVar11;
  State SVar12;
  char *pcVar13;
  LocalizedStringKey LVar14;
  undefined8 uVar15;
  void *pvVar16;
  long extraout_x8;
  long lVar17;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  String *unaff_x20;
  long lVar18;
  undefined *puVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  String SVar23;
  String SVar24;
  long local_f0 [2];
  undefined *local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  long local_b0;
  uint local_a8;
  undefined1 local_a1;
  undefined1 local_a0;
  undefined7 uStack_9f;
  undefined8 local_98;
  byte local_90;
  undefined8 local_88;
  
  lVar5 = 0;
  FUN_10011c000();
  lVar18 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = (long)local_f0 - (extraout_x12 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_1005535c8;
  local_d8 = extraout_x12;
  local_d0 = lVar17;
  FUN_100002f94(&DAT_1005535c8,&DAT_1004265e8);
  local_f0[1] = *(long *)(puVar6 + -8);
  local_e0 = puVar6;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(local_f0[1] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = lVar17 - extraout_x8;
  puVar6 = &DAT_1005535d0;
  local_f0[0] = lVar17;
  FUN_100002f94(&DAT_1005535d0,&DAT_1004265f0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = lVar17 - extraout_x8_00;
  puVar19 = &DAT_10054ac40;
  local_b0 = lVar17;
  FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = lVar17 - extraout_x8_01;
  puVar19 = *(undefined **)((long)&unaff_x20->str + (long)*(int *)(lVar5 + 0x1c));
  local_c8 = lVar5;
  if (puVar19 == (undefined *)0x0) {
    FUN_100279594(0);
    FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
    SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10011f38c);
    (*pcVar4)();
  }
  lVar5 = 0;
  FUN_10040211c();
  UVar7.unknown = puVar19;
  _swift_retain();
  SVar23 = Foundation::URL::get_lastPathComponent(UVar7);
  pvVar16 = SVar23.bridgeObject;
  uVar21 = (ulong)SVar23.str & 0xffffffffffff;
  if (((ulong)pvVar16 & 0x2000000000000000) != 0) {
    uVar21 = (ulong)pvVar16 >> 0x38 & 0xf;
  }
  local_c0 = puVar6;
  local_b8 = param_1;
  if (uVar21 == 0) {
    _swift_bridgeObjectRelease(pvVar16);
    SVar23 = *unaff_x20;
    _swift_bridgeObjectRetain(unaff_x20->bridgeObject);
  }
  pcVar13 = SVar23.str;
  puVar6 = &DAT_1004265f8;
  _swift_getKeyPath(&DAT_1004265f8);
  puVar8 = &DAT_100426620;
  _swift_getKeyPath(&DAT_100426620);
  Combine::Published::_get_subscript(&local_a0,puVar19,puVar6,puVar8);
  _swift_release(puVar6);
  _swift_release(puVar8);
  FUN_1002165a4(pcVar13,SVar23.bridgeObject,CONCAT71(uStack_9f,local_a0));
  local_a8 = (uint)pcVar13;
  _swift_release(puVar19);
  _swift_bridgeObjectRelease(SVar23.bridgeObject);
  _swift_bridgeObjectRelease(CONCAT71(uStack_9f,local_a0));
  UVar7.unknown = puVar19;
  _swift_retain();
  SVar23 = Foundation::URL::get_lastPathComponent(UVar7);
  pvVar16 = SVar23.bridgeObject;
  uVar21 = (ulong)SVar23.str & 0xffffffffffff;
  if (((ulong)pvVar16 & 0x2000000000000000) != 0) {
    uVar21 = (ulong)pvVar16 >> 0x38 & 0xf;
  }
  SVar24 = SVar23;
  if (uVar21 == 0) {
    _swift_bridgeObjectRelease(pvVar16);
    pcVar13 = unaff_x20->bridgeObject;
    SVar24 = *unaff_x20;
    _swift_bridgeObjectRetain();
    SVar23.bridgeObject = pvVar16;
    SVar23.str = pcVar13;
  }
  pvVar16 = SVar24.bridgeObject;
  FUN_1002748c4();
  pcVar13 = SVar23.str;
  _swift_bridgeObjectRelease(SVar23.bridgeObject);
  if (*(long *)(pcVar13 + 0x10) != 0) {
    _swift_bridgeObjectRetain(pcVar13);
    FUN_10000464c(SVar24.str);
    if (((ulong)SVar24.bridgeObject & 1) != 0) {
      lVar20 = *(long *)(lVar5 + -8);
      FUN_100029504(*(long *)(pcVar13 + 0x38) + *(long *)(lVar20 + 0x48) * (long)SVar24.str,lVar17,
                    FUN_10040211c);
      _swift_bridgeObjectRelease(pcVar13);
      uVar15 = 0;
      goto LAB_10011eff0;
    }
    _swift_bridgeObjectRelease(pcVar13);
  }
  lVar20 = *(long *)(lVar5 + -8);
  uVar15 = 1;
LAB_10011eff0:
  (**(code **)(lVar20 + 0x38))(lVar17,uVar15,1,lVar5);
  _swift_bridgeObjectRelease(pvVar16);
  _swift_bridgeObjectRelease(pcVar13);
  _swift_release(puVar19);
  lVar9 = lVar17;
  (**(code **)(lVar20 + 0x30))(lVar17,1,lVar5);
  if ((int)lVar9 == 1) {
    FUN_10002a29c(lVar17,&DAT_10054ac40,&DAT_10041ce70);
    uVar15 = *(undefined8 *)((long)&unaff_x20->str + (long)*(int *)(lVar5 + 0x20));
  }
  else {
    uVar15 = *(undefined8 *)(lVar17 + *(int *)(lVar5 + 0x20));
    FUN_100029548(lVar17,FUN_10040211c);
  }
  lVar17 = local_d0;
  FUN_100029504();
  uVar22 = (ulong)*(byte *)(lVar18 + 0x50);
  uVar21 = uVar22 + 0x10 & (uVar22 ^ 0xffffffffffffffff);
  puVar6 = &DAT_10052cfd8;
  _swift_allocObject(&DAT_10052cfd8,uVar21 + local_d8,uVar22 | 7);
  FUN_100121718(lVar17,puVar6 + uVar21);
  bVar3 = (byte)local_a8 & 1;
  local_90 = bVar3;
  local_88 = uVar15;
  FUN_100002f94(&DAT_1005535d8,&DAT_100426640);
  FUN_100121d3c();
  lVar5 = local_f0[0];
  SwiftUI::Button::_init();
  puVar6 = &DAT_100553638;
  FUN_1000087a0(&DAT_100553638,&DAT_1005535c8,&DAT_1004265e8,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
  FUN_100037164();
  lVar18 = local_b0;
  puVar19 = local_e0;
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle(local_b0);
  (**(code **)(local_f0[1] + 8))(lVar5,puVar19);
  FUN_100029504();
  puVar19 = &DAT_10052d000;
  _swift_allocObject(&DAT_10052d000,uVar21 + local_d8,uVar22 | 7);
  FUN_100121718(lVar17,puVar19 + uVar21);
  AVar11.unknown = &DAT_100553640;
  FUN_100002f94(&DAT_100553640,&DAT_100426670);
  iVar2 = *(int *)(AVar11.unknown + 0x24);
  *(undefined8 *)(lVar18 + iVar2) = FUN_100121f7c;
  ((undefined8 *)(lVar18 + iVar2))[1] = puVar19;
  AVar10 = SwiftUI::Animation::easeOut(0.15,AVar11);
  AVar11.unknown = &DAT_100553648;
  FUN_100002f94(&DAT_100553648,&DAT_100426678);
  iVar2 = *(int *)(AVar11.unknown + 0x24);
  *(undefined8 *)(lVar18 + iVar2) = AVar10.unknown;
  *(byte *)((undefined8 *)(lVar18 + iVar2) + 1) = bVar3;
  AVar11 = SwiftUI::Animation::easeOut(0.15,AVar11);
  puVar1 = (undefined1 *)((long)&unaff_x20->str + (long)*(int *)(local_c8 + 0x24));
  local_a0 = *puVar1;
  local_98 = *(undefined8 *)(puVar1 + 8);
  SVar12.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar12);
  iVar2 = *(int *)(local_c0 + 0x24);
  *(undefined8 *)(lVar18 + iVar2) = AVar11.unknown;
  *(undefined1 *)((undefined8 *)(lVar18 + iVar2) + 1) = local_a1;
  if ((local_a8 & 1) == 0) {
    pcVar13 = (char *)0x4c206f7420646441;
    pvVar16 = (void *)0xec00000064656b69;
  }
  else {
    pvVar16 = (void *)0x80000001004dbed0;
    pcVar13 = (char *)0xd000000000000011;
  }
  SVar24.bridgeObject = pvVar16;
  SVar24.str = pcVar13;
  LVar14 = SwiftUI::LocalizedStringKey::init(SVar24);
  FUN_100121fd4();
  lVar5 = local_b0;
  (extension_SwiftUI)::SwiftUI::View::_help(LVar14);
  _swift_bridgeObjectRelease(puVar6);
  _swift_bridgeObjectRelease(pvVar16);
  FUN_10002a29c(lVar5,&DAT_1005535d0,&DAT_1004265f0);
  return;
}

