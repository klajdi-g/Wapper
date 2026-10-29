// rea decompile_all
// name: FUN_10004b1a4
// address: 0x10004b1a4
// body: available
// range: 0x10004b1a4-0x10004bc1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010004b550 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10004b1a4(undefined8 param_1)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  __int64 *p_Var2;
  undefined1 *puVar3;
  _CocoaArrayWrapper _Var4;
  int iVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  code *pcVar11;
  undefined *puVar12;
  Alignment AVar13;
  Alignment AVar14;
  undefined *puVar15;
  State SVar16;
  StateObject SVar17;
  void *pvVar18;
  undefined8 *puVar19;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined *unaff_x20;
  __int64 _Var20;
  long lVar21;
  long lVar22;
  undefined8 *puVar23;
  undefined *local_330;
  __int64 local_328 [5];
  undefined8 local_300 [43];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined *puStack_88;
  undefined *local_80;
  
  puVar12 = &DAT_10054d5d0;
  local_328[0] = param_1;
  FUN_100002f94(&DAT_10054d5d0,&DAT_10041dfd0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar21 = (long)&local_330 - extraout_x8;
  AVar13.unknown = &DAT_10054d5d8;
  puVar12 = &DAT_10041dfd8;
  FUN_100002f94();
  local_330 = AVar13.unknown;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(AVar13.unknown + -8) + 0x40));
  puVar23 = (undefined8 *)(lVar21 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar22 = (long)puVar23 - extraout_x12;
  AVar13 = SwiftUI::Alignment::get_center(AVar13);
  *puVar23 = AVar13.unknown;
  puVar23[1] = puVar12;
  puVar12 = &DAT_10054d5e0;
  puVar15 = &DAT_10041dfe0;
  FUN_100002f94();
  AVar13.unknown = unaff_x20;
  FUN_10004bc1c((long)puVar23 + (long)*(int *)(puVar12 + 0x2c));
  AVar14 = SwiftUI::Alignment::get_bottom(AVar13);
  puVar12 = &DAT_10054d5e8;
  FUN_100002f94(&DAT_10054d5e8,&DAT_10041dfe8);
  iVar5 = *(int *)(puVar12 + 0x24);
  FUN_10004c85c(lVar21);
  FUN_100058a10(lVar21,(long)puVar23 + (long)iVar5);
  AVar13.unknown = &DAT_10054d5f0;
  puVar12 = &DAT_10041dff0;
  FUN_100002f94();
  puVar19 = (undefined8 *)((long)puVar23 + (long)iVar5 + (long)*(int *)(AVar13.unknown + 0x24));
  *puVar19 = AVar14.unknown;
  puVar19[1] = puVar15;
  AVar13 = SwiftUI::Alignment::get_bottom(AVar13);
  FUN_10004cbac(&local_1a8);
  uStack_128 = uStack_180;
  local_130 = local_188;
  uStack_118 = uStack_170;
  uStack_120 = uStack_178;
  uStack_108 = uStack_160;
  local_110 = local_168;
  uStack_148 = uStack_1a0;
  local_150 = local_1a8;
  uStack_138 = uStack_190;
  uStack_140 = uStack_198;
  local_100 = local_158;
  puVar15 = &DAT_10054d5f8;
  local_f8 = AVar13.unknown;
  local_f0 = puVar12;
  FUN_100002f94(&DAT_10054d5f8,&DAT_10041dff8);
  puVar10 = local_f8;
  uVar8 = local_100;
  uVar6 = local_110;
  puVar19 = (undefined8 *)((long)puVar23 + (long)*(int *)(puVar15 + 0x24));
  puVar19[9] = uStack_108;
  puVar19[8] = uVar6;
  puVar19[0xb] = puVar10;
  puVar19[10] = uVar8;
  puVar19[0xc] = local_f0;
  uVar9 = uStack_138;
  uVar8 = uStack_140;
  uVar6 = local_150;
  puVar19[1] = uStack_148;
  *puVar19 = uVar6;
  puVar19[3] = uVar9;
  puVar19[2] = uVar8;
  uVar9 = uStack_118;
  uVar8 = uStack_120;
  uVar6 = local_130;
  puVar19[5] = uStack_128;
  puVar19[4] = uVar6;
  puVar19[7] = uVar9;
  puVar19[6] = uVar8;
  uStack_d8 = uStack_1a0;
  local_e0 = local_1a8;
  uStack_c8 = uStack_190;
  uStack_d0 = uStack_198;
  uStack_a8 = uStack_170;
  local_b0 = uStack_178;
  uStack_98 = uStack_160;
  uStack_a0 = local_168;
  uStack_b8 = uStack_180;
  local_c0 = local_188;
  local_90 = local_158;
  puVar15 = &DAT_10054d600;
  puStack_88 = AVar13.unknown;
  local_80 = puVar12;
  FUN_1000087e4(&local_150,local_300,&DAT_10054d600,&DAT_10041e000);
  AVar13.unknown = (undefined *)&local_e0;
  FUN_10002a29c(AVar13.unknown,&DAT_10054d600,&DAT_10041e000);
  AVar14 = SwiftUI::Alignment::get_bottom(AVar13);
  puVar12 = &DAT_10054d608;
  FUN_100002f94(&DAT_10054d608,&DAT_10041e008);
  iVar5 = *(int *)(puVar12 + 0x24);
  FUN_10004cf2c((long)puVar23 + (long)iVar5);
  AVar13.unknown = &DAT_10054d610;
  FUN_100002f94(&DAT_10054d610,&DAT_10041e010);
  puVar19 = (undefined8 *)((long)puVar23 + (long)iVar5 + (long)*(int *)(AVar13.unknown + 0x24));
  *puVar19 = AVar14.unknown;
  puVar19[1] = puVar15;
  SwiftUI::Alignment::get_center(AVar13);
  SwiftUI::_FrameLayout::_init((Alignment)0x4073800000000000);
  puVar12 = &DAT_10054d618;
  FUN_100002f94(&DAT_10054d618,&DAT_10041e018);
  puVar19 = (undefined8 *)((long)puVar23 + (long)*(int *)(puVar12 + 0x24));
  puVar19[1] = uStack_1a0;
  *puVar19 = local_1a8;
  puVar19[3] = uStack_190;
  puVar19[2] = uStack_198;
  puVar19[5] = uStack_180;
  puVar19[4] = local_188;
  puVar12 = &DAT_100526c88;
  _swift_allocObject(&DAT_100526c88,0x168,7);
  _memcpy(puVar12 + 0x10,unaff_x20,0x158);
  puVar15 = &DAT_10054d620;
  FUN_100002f94(&DAT_10054d620,&DAT_10041e020);
  puVar19 = (undefined8 *)((long)puVar23 + (long)*(int *)(puVar15 + 0x24));
  *puVar19 = FUN_100058a64;
  puVar19[1] = puVar12;
  puVar19[2] = 0;
  puVar19[3] = 0;
  FUN_100058a6c();
  NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  if (DAT_100557a88 != -1) {
    _swift_once(&DAT_100557a88,FUN_100255fac);
  }
  puVar12 = &DAT_10054d628;
  FUN_100002f94(&DAT_10054d628,&DAT_10041e028);
  (extension_Foundation)::__C::NSNotificationCenter::_publisher
            ((long)puVar23 + (long)*(int *)(puVar12 + 0x34),puVar12,0);
  puVar15 = &DAT_100526cb0;
  _swift_allocObject(&DAT_100526cb0,0x168,7);
  _memcpy(puVar15 + 0x10,unaff_x20,0x158);
  iVar5 = *(int *)(puVar12 + 0x38);
  *(undefined8 *)((long)puVar23 + (long)iVar5) = FUN_100058aa0;
  ((undefined8 *)((long)puVar23 + (long)iVar5))[1] = puVar15;
  FUN_100058a6c();
  NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  if (DAT_100557aa8 != -1) {
    _swift_once(&DAT_100557aa8,FUN_100255f78);
  }
  puVar12 = &DAT_10054d630;
  FUN_100002f94(&DAT_10054d630,&DAT_10041e030);
  (extension_Foundation)::__C::NSNotificationCenter::_publisher
            ((long)puVar23 + (long)*(int *)(puVar12 + 0x34),puVar12,0);
  puVar15 = &DAT_100526cd8;
  _swift_allocObject(&DAT_100526cd8,0x168,7);
  _memcpy(puVar15 + 0x10,unaff_x20,0x158);
  iVar5 = *(int *)(puVar12 + 0x38);
  *(undefined8 *)((long)puVar23 + (long)iVar5) = FUN_100058ac0;
  ((undefined8 *)((long)puVar23 + (long)iVar5))[1] = puVar15;
  FUN_100058a6c();
  NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  if (DAT_100557bb8 != -1) {
    _swift_once(&DAT_100557bb8,FUN_100256014);
  }
  puVar12 = &DAT_10054d638;
  FUN_100002f94(&DAT_10054d638,&DAT_10041e038);
  (extension_Foundation)::__C::NSNotificationCenter::_publisher
            ((long)puVar23 + (long)*(int *)(puVar12 + 0x34),puVar12,0);
  puVar15 = &DAT_100526d00;
  _swift_allocObject(&DAT_100526d00,0x168,7);
  _memcpy(puVar15 + 0x10,unaff_x20,0x158);
  iVar5 = *(int *)(puVar12 + 0x38);
  *(undefined8 *)((long)puVar23 + (long)iVar5) = FUN_100058ac8;
  ((undefined8 *)((long)puVar23 + (long)iVar5))[1] = puVar15;
  local_328[2] = *(__int64 *)(unaff_x20 + 200);
  local_328[1] = *(__int64 *)(unaff_x20 + 0xc0);
  local_328[3] = *(__int64 *)(unaff_x20 + 0xd0);
  FUN_100058a6c();
  SVar16.unknown = &DAT_10054ab90;
  FUN_100002f94(&DAT_10054ab90,&DAT_10041bdb0);
  SwiftUI::State::get_wrappedValue(SVar16);
  uVar6 = CONCAT71(local_300[0]._1_7_,(undefined1)local_300[0]);
  puVar12 = &DAT_100526d28;
  _swift_allocObject(&DAT_100526d28,0x168,7);
  _memcpy(puVar12 + 0x10,unaff_x20,0x158);
  puVar15 = &DAT_10054d640;
  FUN_100002f94(&DAT_10054d640,&DAT_10041e048);
  puVar19 = (undefined8 *)((long)puVar23 + (long)*(int *)(puVar15 + 0x24));
  *puVar19 = uVar6;
  puVar19[1] = local_300[1];
  puVar19[2] = thunk_FUN_100058aa0;
  puVar19[3] = puVar12;
                    /* WARNING: Load size is inaccurate */
  SVar17.unknown = unaff_x20[0xd8];
  FUN_100058a6c();
  FUN_10016ed68(0);
  FUN_1000036d0(&DAT_10054aba0,FUN_10016ed68,&TargetProtocolConformanceDescriptor_1004295e8);
  SwiftUI::StateObject::get_wrappedValue(SVar17);
  puVar12 = &DAT_10041deb0;
  _swift_getKeyPath(&DAT_10041deb0);
  puVar15 = &DAT_10041ded8;
  _swift_getKeyPath(&DAT_10041ded8);
  Combine::Published::_get_subscript(local_300,SVar17.unknown,puVar12,puVar15);
  _swift_release(puVar12);
  _swift_release(puVar15);
  _swift_release(SVar17.unknown);
  puVar12 = (undefined *)CONCAT71(local_300[0]._1_7_,(undefined1)local_300[0]);
  if (local_300[0]._1_7_ >> 0x36 == 0) {
    _Var20 = *(__int64 *)(((ulong)puVar12 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var4.unknown = (undefined *)((ulong)puVar12 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar12) {
      _Var4.unknown = puVar12;
    }
    _Var20 = Swift::_CocoaArrayWrapper::get_endIndex(_Var4);
  }
  _swift_bridgeObjectRelease(puVar12);
  puVar12 = &DAT_100526d50;
  _swift_allocObject(&DAT_100526d50,0x168,7);
  _memcpy(puVar12 + 0x10,unaff_x20,0x158);
  puVar15 = &DAT_10054d648;
  FUN_100002f94(&DAT_10054d648,&DAT_10041e050);
  p_Var2 = (__int64 *)((long)puVar23 + (long)*(int *)(puVar15 + 0x24));
  *p_Var2 = _Var20;
  p_Var2[1] = (__int64)FUN_100058ae8;
  p_Var2[2] = (__int64)puVar12;
  lVar21 = *(long *)(unaff_x20 + 0x60);
  if (lVar21 == 0) {
    FUN_100058a6c();
    FUN_100279594(0);
    pcVar11 = FUN_100279594;
    puVar19 = &DAT_100553dd0;
    pTVar1 = &TargetProtocolConformanceDescriptor_10042d178;
  }
  else {
    puVar12 = &DAT_10041e058;
    _swift_getKeyPath(&DAT_10041e058);
    puVar15 = &DAT_10041e080;
    _swift_getKeyPath(&DAT_10041e080);
    FUN_100058a6c();
    _swift_retain(lVar21);
    Combine::Published::_get_subscript(local_300);
    _swift_release(puVar12);
    _swift_release(puVar15);
    uVar7 = (undefined1)local_300[0];
    puVar12 = &DAT_100526d78;
    _swift_allocObject(&DAT_100526d78,0x168,7);
    _memcpy(puVar12 + 0x10,unaff_x20,0x158);
    puVar15 = &DAT_10054d650;
    FUN_100002f94(&DAT_10054d650,&DAT_10041e0a0);
    puVar3 = (undefined1 *)((long)puVar23 + (long)*(int *)(puVar15 + 0x24));
    *puVar3 = uVar7;
    *(code **)(puVar3 + 8) = FUN_100058af8;
    *(undefined **)(puVar3 + 0x10) = puVar12;
    puVar12 = &DAT_10041e0a8;
    _swift_getKeyPath(&DAT_10041e0a8);
    puVar15 = &DAT_10041e0d0;
    _swift_getKeyPath(&DAT_10041e0d0);
    FUN_100058a6c();
    Combine::Published::_get_subscript(local_300,lVar21,puVar12,puVar15);
    _swift_release(puVar12);
    _swift_release(puVar15);
    _swift_release(lVar21);
    uVar6 = CONCAT71(local_300[0]._1_7_,(undefined1)local_300[0]);
    puVar12 = &DAT_100526da0;
    _swift_allocObject(&DAT_100526da0,0x168,7);
    _memcpy(puVar12 + 0x10,unaff_x20,0x158);
    puVar15 = &DAT_10054d658;
    FUN_100002f94(&DAT_10054d658,&DAT_10041e0f0);
    puVar19 = (undefined8 *)((long)puVar23 + (long)*(int *)(puVar15 + 0x24));
    *puVar19 = uVar6;
    puVar19[1] = thunk_FUN_100058ac8;
    puVar19[2] = puVar12;
    lVar21 = *(long *)(unaff_x20 + 0x80);
    if (lVar21 != 0) {
      puVar12 = &DAT_10041e0f8;
      _swift_getKeyPath(&DAT_10041e0f8);
      puVar15 = &DAT_10041e120;
      _swift_getKeyPath(&DAT_10041e120);
      FUN_100058a6c();
      _swift_retain(lVar21);
      Combine::Published::_get_subscript(local_300);
      _swift_release(puVar12);
      _swift_release(puVar15);
      _swift_release(lVar21);
      puVar12 = &DAT_100526dc8;
      _swift_allocObject(&DAT_100526dc8,0x168,7);
      pvVar18 = _memcpy(puVar12 + 0x10,unaff_x20,0x158);
      puVar15 = local_330;
      puVar3 = (undefined1 *)((long)puVar23 + (long)*(int *)(local_330 + 0x24));
      *puVar3 = (undefined1)local_300[0];
      *(code **)(puVar3 + 8) = FUN_100058b34;
      *(undefined **)(puVar3 + 0x10) = puVar12;
      FUN_100058b3c();
      thunk_FUN_1000bdaa4(lVar22,puVar23,puVar15,pvVar18);
      FUN_100058a6c();
      FUN_10002a29c(puVar23,&DAT_10054d5d8,&DAT_10041dfd8);
      thunk_FUN_1000bdaa4(local_328[0],lVar22,puVar15,pvVar18);
      FUN_10002a29c(lVar22,&DAT_10054d5d8,&DAT_10041dfd8);
      return;
    }
    FUN_100058a6c();
    FUN_1001373cc(0);
    pcVar11 = FUN_1001373cc;
    puVar19 = (undefined8 *)&DAT_100553de0;
    pTVar1 = &TargetProtocolConformanceDescriptor_100426ef0;
  }
  FUN_1000036d0(puVar19,pcVar11,pTVar1);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x10004bc1c);
  (*pcVar11)();
}

