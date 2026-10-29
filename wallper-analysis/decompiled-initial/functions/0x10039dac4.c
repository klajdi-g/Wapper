// rea decompile_all
// name: FUN_10039dac4
// address: 0x10039dac4
// body: available
// range: 0x10039dac4-0x10039e0fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10039dac4(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  code *pcVar7;
  SafeAreaRegions SVar8;
  Set SVar9;
  undefined8 uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  code *pcVar11;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long lVar12;
  code *pcVar13;
  long *unaff_x20;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long local_c0 [4];
  long local_a0;
  undefined *local_98;
  long local_90;
  long local_88;
  undefined *local_80;
  code *local_78;
  long local_68;
  
  lVar3 = 0;
  local_c0[1] = param_2;
  local_90 = param_1;
  FUN_10025ee04();
  lVar18 = *(long *)(lVar3 + -8);
  local_88 = lVar3;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar18 + 0x40));
  lVar19 = (long)local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_c0[0] = lVar19;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar19 = lVar19 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar20 = lVar19 - extraout_x12_00;
  puVar4 = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = lVar20 - extraout_x8_00;
  local_80 = (undefined *)Foundation::UUID::typeMetadataAccessor();
  lVar12 = *(long *)(local_80 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar12 + 0x40));
  lVar3 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_10054ac38;
  local_c0[2] = lVar3;
  FUN_100002f94(&DAT_10054ac38,&DAT_10041e8e0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar3 = lVar3 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_c0[3] = lVar3;
  (*(code *)PTR____chkstk_darwin_100521118)();
  pcVar11 = (code *)(lVar3 - extraout_x12_01);
  local_78 = pcVar11;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar16 = (long)pcVar11 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar4 = &DAT_10054ac40;
  local_a0 = lVar16 - extraout_x12_03;
  FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_98 = (undefined *)((lVar16 - extraout_x12_03) - extraout_x8_03);
  lVar3 = *unaff_x20;
  if (lVar3 == 0) {
    FUN_1001b7378(0);
    FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
    SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x10039e0fc);
    (*pcVar11)();
  }
  puVar4 = &DAT_100434a80;
  _swift_getKeyPath(&DAT_100434a80);
  puVar5 = &DAT_100434aa8;
  _swift_getKeyPath(&DAT_100434aa8);
  _swift_retain(lVar3);
  Combine::Published::_get_subscript(lVar15);
  _swift_release(puVar4);
  _swift_release(puVar5);
  puVar4 = local_80;
  lVar6 = lVar15;
  (**(code **)(lVar12 + 0x30))(lVar15,1,local_80);
  lVar2 = local_c0[2];
  if ((int)lVar6 == 1) {
    _swift_release(lVar3);
    FUN_10002a29c(lVar15,&DAT_10054a9c8,&DAT_10041bbe0);
    lVar12 = local_88;
    (**(code **)(lVar18 + 0x38))(lVar16,1,1,local_88);
  }
  else {
    (**(code **)(lVar12 + 0x20))(local_c0[2],lVar15,puVar4);
    FUN_1001b6e74(lVar16,lVar2);
    _swift_release(lVar3);
    (**(code **)(lVar12 + 8))(lVar2,puVar4);
    lVar12 = local_88;
  }
  pcVar11 = local_78;
  FUN_1003a63fc(lVar16,local_78);
  pcVar13 = *(code **)(lVar18 + 0x30);
  pcVar7 = pcVar11;
  (*pcVar13)(pcVar11,1,lVar12);
  lVar15 = local_a0;
  if ((int)pcVar7 == 1) {
    puVar4 = &DAT_100434ac8;
    local_78 = pcVar13;
    _swift_getKeyPath(&DAT_100434ac8);
    puVar5 = &DAT_100434af0;
    _swift_getKeyPath(&DAT_100434af0);
    _swift_retain(lVar3);
    Combine::Published::_get_subscript(&local_68);
    _swift_release(puVar4);
    _swift_release(puVar5);
    _swift_release(lVar3);
    uVar14 = *(ulong *)(local_68 + 0x10);
    if (uVar14 != 0) {
      uVar17 = 0;
      do {
        if (*(ulong *)(local_68 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x10039e0b8);
          (*pcVar11)();
        }
        FUN_100029504(local_68 +
                      ((ulong)*(byte *)(lVar18 + 0x50) + 0x20 &
                      ((ulong)*(byte *)(lVar18 + 0x50) ^ 0xffffffffffffffff)) +
                      *(long *)(lVar18 + 0x48) * uVar17,lVar20,FUN_10025ee04);
        FUN_100007e64(lVar20,lVar19,FUN_10025ee04);
        if (*(long *)(*(long *)(lVar19 + *(int *)(lVar12 + 0x20)) + 0x10) != 0) {
          _swift_bridgeObjectRelease(local_68);
          lVar15 = local_a0;
          FUN_100007e64(lVar19,local_a0,FUN_10025ee04);
          uVar10 = 0;
          goto LAB_10039df24;
        }
        uVar17 = uVar17 + 1;
        FUN_100029548(lVar19,FUN_10025ee04);
      } while (uVar14 != uVar17);
    }
    _swift_bridgeObjectRelease(local_68);
    uVar10 = 1;
    lVar15 = local_a0;
LAB_10039df24:
    (**(code **)(lVar18 + 0x38))(lVar15,uVar10,1,lVar12);
    pcVar13 = local_78;
    pcVar7 = pcVar11;
    (*local_78)(pcVar11,1,lVar12);
    lVar19 = local_90;
    puVar4 = local_98;
    lVar3 = local_c0[3];
    if ((int)pcVar7 != 1) {
      FUN_10002a29c(pcVar11,&DAT_10054ac38,&DAT_10041e8e0);
    }
  }
  else {
    FUN_100007e64(pcVar11,local_a0,FUN_10025ee04);
    (**(code **)(lVar18 + 0x38))(lVar15,0,1,lVar12);
    lVar3 = local_c0[3];
    lVar19 = local_90;
    puVar4 = local_98;
  }
  FUN_1000087e4(lVar15,lVar3,&DAT_10054ac38,&DAT_10041e8e0);
  lVar16 = lVar3;
  (*pcVar13)(lVar3,1,lVar12);
  lVar12 = local_c0[0];
  if ((int)lVar16 == 1) {
    FUN_10002a29c(lVar15,&DAT_10054ac38,&DAT_10041e8e0);
    lVar3 = 0;
    FUN_10040211c();
    (**(code **)(*(long *)(lVar3 + -8) + 0x38))(puVar4,1,1,lVar3);
  }
  else {
    FUN_100007e64(lVar3,local_c0[0],FUN_10025ee04);
    FUN_10039fc90(puVar4,lVar12,local_c0[1]);
    FUN_100029548(lVar12,FUN_10025ee04);
    FUN_10002a29c(lVar15,&DAT_10054ac38,&DAT_10041e8e0);
  }
  SVar8.unknown = puVar4;
  FUN_1003a00d0(lVar19);
  SVar8 = SwiftUI::SafeAreaRegions::get_all(SVar8);
  SVar9 = SwiftUI::Edge::Set::get_all(SVar8.unknown);
  FUN_10002a29c(puVar4,&DAT_10054ac40,&DAT_10041ce70);
  puVar4 = &DAT_10055f338;
  FUN_100002f94(&DAT_10055f338,&DAT_100434b10);
  iVar1 = *(int *)(puVar4 + 0x24);
  *(undefined8 *)(lVar19 + iVar1) = SVar8.unknown;
  *(char *)((undefined8 *)(lVar19 + iVar1) + 1) = (char)SVar9.unknown;
  return;
}

