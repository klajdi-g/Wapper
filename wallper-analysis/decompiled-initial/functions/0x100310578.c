// rea decompile_all
// name: FUN_100310578
// address: 0x100310578
// body: available
// range: 0x100310578-0x100310edf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100310578(undefined8 param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  Alignment AVar7;
  undefined *puVar8;
  SafeAreaRegions SVar9;
  Set SVar10;
  Alignment AVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined *puVar14;
  undefined *puVar15;
  Published PVar16;
  State SVar17;
  undefined *puVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar22;
  long extraout_x8_03;
  long *unaff_x20;
  undefined8 *puVar23;
  long lVar24;
  undefined *local_210 [2];
  long local_200 [2];
  undefined *local_1f0;
  long local_1e8;
  long local_1e0;
  undefined *local_1d8;
  long local_1d0;
  long local_1c8;
  undefined *local_1c0;
  undefined8 local_1b8;
  undefined *local_1b0;
  long lStack_1a8;
  long local_1a0;
  undefined *local_190;
  undefined *puStack_188;
  undefined **local_180;
  undefined **local_178;
  
  puVar6 = &DAT_10055bc88;
  local_1b8 = param_1;
  FUN_100002f94(&DAT_10055bc88,&BYTE_100430998);
  local_210[0] = puVar6;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = -extraout_x8;
  puVar23 = (undefined8 *)((long)local_210 + lVar3);
  puVar6 = &DAT_10055bc90;
  FUN_100002f94(&DAT_10055bc90,&BYTE_1004309a0);
  local_210[1] = puVar6;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar24 = (long)puVar23 - extraout_x8_00;
  puVar6 = &DAT_10055bc98;
  FUN_100002f94(&DAT_10055bc98,&BYTE_1004309a8);
  local_200[1] = *(long *)(puVar6 + -8);
  local_1f0 = puVar6;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(local_200[1] + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_10055bca0;
  local_200[0] = lVar24 - extraout_x8_01;
  FUN_100002f94(&DAT_10055bca0,&BYTE_1004309b0);
  local_1e0 = *(long *)(puVar6 + -8);
  local_1d8 = puVar6;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_1e0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar22 = (lVar24 - extraout_x8_01) - extraout_x8_02;
  AVar11.unknown = &DAT_10055bca8;
  pbVar12 = &BYTE_1004309b8;
  local_1e8 = lVar22;
  FUN_100002f94();
  local_1c8 = *(long *)(AVar11.unknown + -8);
  local_1c0 = AVar11.unknown;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_1c8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  local_1d0 = lVar22 - extraout_x8_03;
  AVar7 = SwiftUI::Alignment::get_center(AVar11);
  puVar6 = &DAT_10053a2b0;
  _swift_allocObject(&DAT_10053a2b0,0x131,7);
  _memcpy(puVar6 + 0x10,unaff_x20,0x121);
  puVar8 = &DAT_10055bcb0;
  FUN_100002f94(&DAT_10055bcb0,&BYTE_1004309c0);
  lVar22 = (long)puVar23 + (long)*(int *)(puVar8 + 0x24);
  FUN_1003181f4();
  SVar9.unknown = (undefined *)unaff_x20;
  FUN_100312158(lVar22);
  SVar9 = SwiftUI::SafeAreaRegions::get_all(SVar9);
  SVar10 = SwiftUI::Edge::Set::get_all(SVar9.unknown);
  AVar11.unknown = &DAT_10055bcb8;
  pbVar13 = &BYTE_1004309c8;
  FUN_100002f94();
  iVar2 = *(int *)(AVar11.unknown + 0x24);
  *(undefined8 *)(lVar22 + iVar2) = SVar9.unknown;
  *(char *)((undefined8 *)(lVar22 + iVar2) + 1) = (char)SVar10.unknown;
  AVar11 = SwiftUI::Alignment::get_center(AVar11);
  puVar8 = &DAT_10055bcc0;
  FUN_100002f94(&DAT_10055bcc0,&BYTE_1004309d0);
  iVar2 = *(int *)(puVar8 + 0x24);
  *(undefined8 *)(lVar22 + iVar2) = AVar11.unknown;
  ((undefined8 *)(lVar22 + iVar2))[1] = pbVar13;
  *puVar23 = AVar7.unknown;
  *(byte **)((long)local_210 + lVar3 + 8) = pbVar12;
  *(code **)((long)local_210 + lVar3 + 0x10) = FUN_1003181ec;
  *(undefined **)((long)local_210 + lVar3 + 0x18) = puVar6;
  puVar6 = &DAT_10053a2d8;
  _swift_allocObject(&DAT_10053a2d8,0x131,7);
  _memcpy(puVar6 + 0x10,unaff_x20,0x121);
  puVar18 = local_210[0];
  puVar1 = (undefined8 *)((long)puVar23 + (long)*(int *)(local_210[0] + 0x24));
  *puVar1 = FUN_100318228;
  puVar1[1] = puVar6;
  puVar1[2] = 0;
  puVar1[3] = 0;
  lVar22 = unaff_x20[0x1e];
  pbVar12 = &BYTE_1004309d8;
  _swift_getKeyPath(&BYTE_1004309d8);
  pbVar13 = &BYTE_100430a00;
  _swift_getKeyPath(&BYTE_100430a00);
  FUN_1003181f4();
  Combine::Published::_get_subscript(&local_190,lVar22,pbVar12,pbVar13);
  _swift_release(pbVar12);
  _swift_release(pbVar13);
  puVar4 = puStack_188;
  lStack_1a8 = (long)puStack_188;
  local_1b0 = local_190;
  puVar6 = &DAT_10053a300;
  _swift_allocObject(&DAT_10053a300,0x131,7);
  _memcpy(puVar6 + 0x10,unaff_x20,0x121);
  FUN_1003181f4();
  puVar8 = &DAT_100549db0;
  FUN_100002f94(&DAT_100549db0,&DAT_100419ed0);
  puVar14 = puVar8;
  FUN_1003197fc();
  puVar15 = puVar14;
  FUN_10000384c();
  (extension_SwiftUI)::SwiftUI::View::_onChange
            (lVar24,&local_1b0,0,FUN_1003197dc,puVar6,puVar18,puVar8,puVar14,puVar15);
  _swift_release(puVar6);
  _swift_bridgeObjectRelease(puVar4);
  FUN_10002a29c(puVar23,&DAT_10055bc88,&BYTE_100430998);
  puVar6 = &DAT_10053a328;
  _swift_allocObject(&DAT_10053a328,0x131,7);
  _memcpy(puVar6 + 0x10,unaff_x20,0x121);
  puVar8 = &DAT_10055bcf0;
  FUN_100002f94(&DAT_10055bcf0,&DAT_100430a30);
  puVar1 = (undefined8 *)(lVar24 + *(int *)(puVar8 + 0x24));
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = FUN_10031992c;
  puVar1[3] = puVar6;
  lVar22 = *unaff_x20;
  if (lVar22 != 0) {
    _swift_beginAccess(lVar22 + _TtC7Wallper17VideoLibraryStore::_isLoaded,&local_1b0,0x21,0);
    puVar6 = &DAT_10055bcf8;
    FUN_100002f94(&DAT_10055bcf8,&DAT_100430a38);
    FUN_1003181f4();
    _swift_retain(lVar22);
    PVar16.unknown = &DAT_100557e80;
    FUN_100002f94(&DAT_100557e80,&DAT_10041cf60);
    Combine::Published::_get_projectedValue(PVar16);
    _swift_endAccess(&local_1b0);
    puVar8 = &DAT_10053a350;
    _swift_allocObject(&DAT_10053a350,0x131,7);
    _memcpy(puVar8 + 0x10,unaff_x20,0x121);
    iVar2 = *(int *)(puVar6 + 0x38);
    *(undefined8 *)(lVar24 + iVar2) = FUN_100319934;
    ((undefined8 *)(lVar24 + iVar2))[1] = puVar8;
    _swift_beginAccess(lVar22 + _TtC7Wallper17VideoLibraryStore::_allVideos,&local_1b0,0x21,0);
    puVar4 = local_210[1];
    FUN_1003181f4();
    PVar16.unknown = &DAT_10054b948;
    FUN_100002f94(&DAT_10054b948,&DAT_10042b8a0);
    Combine::Published::_get_projectedValue(PVar16);
    _swift_endAccess(&local_1b0);
    _swift_release(lVar22);
    puVar6 = &DAT_10053a378;
    _swift_allocObject(&DAT_10053a378,0x131,7);
    _memcpy(puVar6 + 0x10,unaff_x20,0x121);
    iVar2 = *(int *)(puVar4 + 0x38);
    *(undefined8 *)(lVar24 + iVar2) = FUN_10031993c;
    ((undefined8 *)(lVar24 + iVar2))[1] = puVar6;
    lStack_1a8 = unaff_x20[3];
    local_1b0 = (undefined *)unaff_x20[2];
    local_1a0 = unaff_x20[4];
    FUN_1003181f4();
    SVar17.unknown = &DAT_10054dd08;
    FUN_100002f94(&DAT_10054dd08,&DAT_10041ea50);
    SwiftUI::State::get_wrappedValue(SVar17);
    local_1b0 = local_190;
    lStack_1a8 = (long)puStack_188;
    puVar6 = &DAT_10053a3a0;
    _swift_allocObject(&DAT_10053a3a0,0x131,7);
    _memcpy(puVar6 + 0x10,unaff_x20,0x121);
    FUN_1003181f4();
    puVar8 = &DAT_10055bd00;
    FUN_1000087a0(&DAT_10055bd00,&DAT_10055bc90,&BYTE_1004309a0,
                  PTR_SwiftUI__SwiftUI__SubscriptionView<undefined,undefined>_>SwiftUI__View_1005223c8
                 );
    lVar22 = local_200[0];
    (extension_SwiftUI)::SwiftUI::View::_onChange
              (local_200[0],&local_1b0,0,FUN_100319944,puVar6,puVar4,
               PTR___type_metadata_for_Swift_String_100523a98,puVar8,
               PTR___protocol_witness_table_for_Swift_String___Swift_Equatable_in_Swift_100523ab0);
    _swift_bridgeObjectRelease(puStack_188);
    _swift_release(puVar6);
    FUN_10002a29c(lVar24,&DAT_10055bc90,&BYTE_1004309a0);
    puStack_188 = (undefined *)unaff_x20[6];
    local_190 = (undefined *)unaff_x20[5];
    SVar17.unknown = &DAT_10055bd08;
    FUN_100002f94(&DAT_10055bd08,&DAT_100435de0);
    SwiftUI::State::get_wrappedValue(SVar17);
    puVar6 = &DAT_10053a3c8;
    _swift_allocObject(&DAT_10053a3c8,0x131,7);
    _memcpy(puVar6 + 0x10,unaff_x20,0x121);
    FUN_1003181f4();
    puVar18 = &DAT_10055bd10;
    FUN_100002f94(&DAT_10055bd10,&DAT_100430a40);
    local_190 = puVar4;
    puStack_188 = PTR___type_metadata_for_Swift_String_100523a98;
    local_178 = (undefined **)
                PTR___protocol_witness_table_for_Swift_String___Swift_Equatable_in_Swift_100523ab0;
    ppuVar19 = &local_190;
    local_180 = (undefined **)puVar8;
    _swift_getOpaqueTypeConformance2
              (ppuVar19,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_onChange<A_where_A1:_Swift_Equatable>(of:_A1,initial:_Swift_Bool,_:_()__>_())__>_some>>_100523150
               ,1);
    ppuVar21 = ppuVar19;
    FUN_100319964();
    lVar3 = local_1e8;
    puVar8 = local_1f0;
    (extension_SwiftUI)::SwiftUI::View::_onChange
              (local_1e8,&local_1b0,0,FUN_10031994c,puVar6,local_1f0,puVar18,ppuVar19,ppuVar21);
    _swift_release(puVar6);
    (**(code **)(local_200[1] + 8))(lVar22,puVar8);
    puStack_188 = (undefined *)unaff_x20[0x10];
    local_190 = (undefined *)unaff_x20[0xf];
    SVar17.unknown = &DAT_10055bd28;
    FUN_100002f94(&DAT_10055bd28,&DAT_100430a48);
    SwiftUI::State::get_wrappedValue(SVar17);
    puVar6 = &DAT_10053a3f0;
    _swift_allocObject(&DAT_10053a3f0,0x131,7);
    _memcpy(puVar6 + 0x10,unaff_x20,0x121);
    FUN_1003181f4();
    local_190 = puVar8;
    ppuVar20 = &local_190;
    puStack_188 = puVar18;
    local_180 = ppuVar19;
    local_178 = ppuVar21;
    _swift_getOpaqueTypeConformance2
              (ppuVar20,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_onChange<A_where_A1:_Swift_Equatable>(of:_A1,initial:_Swift_Bool,_:_()__>_())__>_some>>_100523150
               ,1);
    ppuVar21 = ppuVar20;
    FUN_100319a14();
    lVar22 = local_1d0;
    puVar8 = local_1d8;
    (extension_SwiftUI)::SwiftUI::View::_onChange
              (local_1d0,&local_1b0,0,thunk_FUN_10031994c,puVar6,local_1d8,&DAT_10053f2a0,ppuVar20,
               ppuVar21);
    _swift_release(puVar6);
    (**(code **)(local_1e0 + 8))(lVar3,puVar8);
    puStack_188 = (undefined *)unaff_x20[0x12];
    local_190 = (undefined *)unaff_x20[0x11];
    SVar17.unknown = &DAT_10055bd38;
    FUN_100002f94(&DAT_10055bd38,&DAT_100430a50);
    SwiftUI::State::get_wrappedValue(SVar17);
    puVar6 = &DAT_10053a418;
    _swift_allocObject(&DAT_10053a418,0x131,7);
    _memcpy(puVar6 + 0x10,unaff_x20,0x121);
    FUN_1003181f4();
    local_190 = puVar8;
    puStack_188 = &DAT_10053f2a0;
    ppuVar19 = &local_190;
    local_180 = ppuVar20;
    local_178 = ppuVar21;
    _swift_getOpaqueTypeConformance2
              (ppuVar19,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_onChange<A_where_A1:_Swift_Equatable>(of:_A1,initial:_Swift_Bool,_:_()__>_())__>_some>>_100523150
               ,1);
    ppuVar20 = ppuVar19;
    FUN_100319a54();
    puVar8 = local_1c0;
    (extension_SwiftUI)::SwiftUI::View::_onChange
              (local_1b8,&local_1b0,0,thunk_FUN_10031994c,puVar6,local_1c0,&DAT_10053f210,ppuVar19,
               ppuVar20);
    _swift_release(puVar6);
    (**(code **)(local_1c8 + 8))(lVar22,puVar8);
    return;
  }
  FUN_1003181f4();
  FUN_100279594(0);
  FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x100310ee0);
  (*pcVar5)();
}

