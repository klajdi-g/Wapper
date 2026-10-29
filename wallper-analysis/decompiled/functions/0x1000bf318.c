// rea decompile_all
// name: FUN_1000bf318
// address: 0x1000bf318
// body: available
// range: 0x1000bf318-0x1000bf897 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000bf688 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000bf318(undefined8 *param_1,Alignment param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  undefined8 *puVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  GeometryProxy GVar6;
  Alignment AVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  CGSize CVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  Alignment AVar21;
  ulong uVar22;
  double dVar23;
  double dVar24;
  undefined8 auStack_140 [2];
  undefined *local_130;
  long local_128 [3];
  undefined8 *local_110 [5];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  
  lVar4 = 0;
  FUN_1000c61a0();
  lVar16 = *(long *)(lVar4 + -8);
  lVar20 = *(long *)(lVar16 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar15 = (long)&local_130 - (lVar20 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100550d90;
  FUN_100002f94(&DAT_100550d90,&DAT_100422950);
  local_128[1] = *(long *)(puVar5 + -8);
  local_110[2] = (undefined8 *)puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(local_128[1] + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100550d98;
  local_128[0] = lVar15 - extraout_x8;
  FUN_100002f94(&DAT_100550d98,&DAT_100422958);
  local_110[1] = (undefined8 *)puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = (lVar15 - extraout_x8) - extraout_x8_00;
  puVar5 = &DAT_10054ac40;
  FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  AVar21.unknown = (undefined *)(lVar19 - extraout_x8_01);
  GVar6.unknown = &DAT_100550da0;
  puVar5 = &DAT_100422960;
  FUN_100002f94();
  local_110[0] = (undefined8 *)GVar6.unknown;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(GVar6.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = (long)AVar21.unknown - extraout_x8_02;
  local_110[3] = (undefined8 *)param_3;
  GVar6.unknown = (undefined *)SwiftUI::GeometryProxy::get_size(GVar6);
  cVar1 = *(char *)(param_4 + *(int *)(lVar4 + 0x1c));
  FUN_1000bf898();
  AVar7 = SwiftUI::Alignment::get_bottom(GVar6.unknown);
  *param_1 = AVar7.unknown;
  param_1[1] = puVar5;
  puVar5 = &DAT_100550da8;
  local_110[4] = param_1;
  FUN_100002f94(&DAT_100550da8,&DAT_100422968);
  local_128[2] = (long)*(int *)(puVar5 + 0x2c);
  if (*(long *)(GVar6.unknown + 0x10) == 0) {
    lVar4 = 0;
    FUN_10040211c();
    (**(code **)(*(long *)(lVar4 + -8) + 0x38))(AVar21.unknown,1,1,lVar4);
    FUN_1000c0360(lVar14,AVar21.unknown,0);
    FUN_10002a29c(AVar21.unknown,&DAT_10054ac40,&DAT_10041ce70);
    SwiftUI::Alignment::get_center(AVar21);
    SwiftUI::_FrameLayout::_init(param_2);
    puVar18 = (undefined8 *)(lVar14 + *(int *)((long)local_110[0] + 0x24));
    puVar18[1] = uStack_e0;
    *puVar18 = local_e8;
    puVar18[3] = uStack_d0;
    puVar18[2] = local_d8;
    puVar18[5] = uStack_c0;
    puVar18[4] = local_c8;
    FUN_1000c6cc8(lVar14,lVar19);
    _swift_storeEnumTagMultiPayload(lVar19,local_110[1],0);
    FUN_1000c6928();
    FUN_1000c6c58();
    puVar18 = local_110[4];
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar19);
    FUN_1000c6d18(lVar14);
    _swift_bridgeObjectRelease();
  }
  else {
    bVar3 = cVar1 == '\0';
    dVar23 = 0.07;
    if (bVar3) {
      dVar23 = 0.05;
    }
    dVar24 = (double)param_2.unknown * 0.015;
    if (bVar3) {
      dVar24 = 0.0;
    }
    AVar7.unknown = GVar6.unknown;
    FUN_100265634();
    puVar5 = &DAT_100422970;
    local_b8 = AVar7.unknown;
    _swift_getKeyPath();
    local_130 = puVar5;
    FUN_100029504(param_4,lVar15,FUN_1000c61a0);
    uVar13 = (ulong)*(byte *)(lVar16 + 0x50);
    uVar17 = uVar13 + 0x10 & (uVar13 ^ 0xffffffffffffffff);
    uVar22 = lVar20 + uVar17 + 7 & 0xfffffffffffffff8;
    puVar5 = &DAT_1005295e8;
    _swift_allocObject(&DAT_1005295e8,uVar22 + 0x20,uVar13 | 7);
    FUN_100007e64(lVar15,puVar5 + uVar17,FUN_1000c61a0);
    *(undefined **)(puVar5 + uVar22) = param_2.unknown;
    *(double *)(puVar5 + uVar22 + 8) = (double)param_2.unknown / 1.6;
    *(double *)(puVar5 + uVar22 + 0x10) = dVar24;
    *(double *)(puVar5 + uVar22 + 0x18) = (double)param_2.unknown * dVar23;
    puVar8 = &DAT_100529610;
    _swift_allocObject(&DAT_100529610,0x20,7);
    *(code **)(puVar8 + 0x10) = FUN_1000c6770;
    *(undefined **)(puVar8 + 0x18) = puVar5;
    puVar5 = &DAT_100550db0;
    FUN_100002f94(&DAT_100550db0,&DAT_100422990);
    puVar9 = &DAT_100550db8;
    FUN_100002f94(&DAT_100550db8,&DAT_100422998);
    puVar10 = puVar9;
    FUN_1000c6820();
    puVar11 = puVar10;
    FUN_1000c68b0();
    *(undefined **)(lVar14 + -0x10) = puVar11;
    lVar4 = local_128[0];
    (extension_SwiftUI)::SwiftUI::ForEach::_init
              (local_128[0],puVar11,local_130,FUN_100069314,puVar8,puVar5,puVar9,puVar10,
               PTR___protocol_witness_table_for_Swift_Int___Swift_Hashable_in_Swift_100523be0);
    puVar2 = local_110[2];
    lVar14 = local_128[1];
    (**(code **)(local_128[1] + 0x10))(lVar19,lVar4,local_110[2]);
    _swift_storeEnumTagMultiPayload(lVar19,local_110[1],1);
    FUN_1000c6928();
    FUN_1000c6c58();
    puVar18 = local_110[4];
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar19);
    (**(code **)(lVar14 + 8))(lVar4,puVar2);
    _swift_bridgeObjectRelease();
  }
  CVar12 = SwiftUI::GeometryProxy::get_size(GVar6);
  SwiftUI::Alignment::get_bottom((Alignment)CVar12.unknown);
  SwiftUI::_FrameLayout::_init(param_2);
  puVar5 = &DAT_100550e50;
  FUN_100002f94(&DAT_100550e50,&DAT_1004229e8);
  puVar18 = (undefined8 *)((long)puVar18 + (long)*(int *)(puVar5 + 0x24));
  puVar18[1] = uStack_b0;
  *puVar18 = local_b8;
  puVar18[3] = uStack_a0;
  puVar18[2] = local_a8;
  puVar18[5] = uStack_90;
  puVar18[4] = local_98;
  return;
}

