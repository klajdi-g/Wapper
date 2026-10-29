// rea decompile_all
// name: FUN_1000a3988
// address: 0x1000a3988
// body: available
// range: 0x1000a3988-0x1000a40df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000a3e04 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000a3988(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  GeometryProxy GVar7;
  ushort *puVar8;
  ushort *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  ulong uVar10;
  long lVar11;
  long extraout_x12;
  long extraout_x12_00;
  Date DVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined *puVar18;
  char cVar19;
  Date from;
  long lVar20;
  undefined8 uVar21;
  undefined8 local_160;
  undefined *local_158;
  long local_150;
  long local_148;
  undefined *local_140;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  undefined *local_118;
  long local_110;
  undefined8 local_108;
  undefined *local_100;
  long local_f8;
  long local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined7 uStack_d7;
  undefined8 uStack_d0;
  
  local_108 = param_5;
  local_e0 = param_1;
  local_140 = (undefined *)SwiftUI::GeometryProxy::typeMetadataAccessor();
  local_148 = *(long *)(local_140 + -8);
  lVar15 = *(long *)(local_148 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar5 = (long)&local_160 - (lVar15 + 0xfU & 0xfffffffffffffff0);
  local_150 = lVar5;
  local_158 = (undefined *)Foundation::Date::typeMetadataAccessor();
  local_160 = *(long *)(local_158 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_160 + 0x40));
  from.unknown = (undefined *)(lVar5 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar20 = (long)from.unknown - extraout_x12;
  local_118 = (undefined *)SwiftUI::PeriodicTimelineSchedule::typeMetadataAccessor();
  local_120 = *(long *)(local_118 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_120 + 0x40));
  lVar11 = lVar20 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_138 = lVar11;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar11 = lVar11 - extraout_x12_00;
  puVar4 = &DAT_10054fb00;
  local_130 = lVar11;
  FUN_100002f94(&DAT_10054fb00,&USHORT_100421100);
  local_110 = *(long *)(puVar4 + -8);
  local_e8 = puVar4;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_110 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar11 = lVar11 - extraout_x8_01;
  puVar4 = &DAT_10054fb08;
  local_128 = lVar11;
  FUN_100002f94(&DAT_10054fb08,&USHORT_100421108);
  local_100 = puVar4;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar11 - extraout_x8_02;
  lVar5 = 0;
  local_f0 = lVar11;
  FUN_1000aff7c();
  local_f8 = lVar5;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar11 = lVar11 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_10054c040;
  FUN_100002f94(&DAT_10054c040,&DAT_100420500);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  DVar12.unknown = (undefined *)(lVar11 - extraout_x8_04);
  lVar5 = 0;
  FUN_10009e280();
  lVar17 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar17 + 0x40));
  puVar18 = DVar12.unknown + -(extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  FUN_1000a31dc(DVar12.unknown);
  puVar4 = DVar12.unknown;
  (**(code **)(lVar17 + 0x30))(DVar12.unknown,1,lVar5);
  if ((int)puVar4 == 1) {
    FUN_10002a29c(DVar12.unknown,&DAT_10054c040,&DAT_100420500);
    if ((*(byte *)((long)param_4 + 0x59) & 1) == 0) {
      uVar13 = 1;
      uVar16 = local_e0;
      goto LAB_1000a408c;
    }
    Foundation::Date::get_now(DVar12);
    puVar4 = local_158;
    lVar5 = local_160;
    (**(code **)(local_160 + 0x10))(from.unknown,lVar20,local_158);
    lVar17 = local_130;
    SwiftUI::PeriodicTimelineSchedule::init(from,2.4);
    (**(code **)(lVar5 + 8))(lVar20,puVar4);
    puVar18 = local_140;
    lVar11 = local_148;
    lVar5 = local_150;
    (**(code **)(local_148 + 0x10))(local_150,local_108,local_140);
    uVar10 = (ulong)*(byte *)(lVar11 + 0x50);
    uVar14 = uVar10 + 0x6b & (uVar10 ^ 0xffffffffffffffff);
    puVar4 = &DAT_100528bc0;
    _swift_allocObject(&DAT_100528bc0,uVar14 + lVar15,uVar10 | 7);
    uVar16 = param_4[4];
    uVar21 = param_4[7];
    uVar13 = param_4[6];
    *(undefined8 *)(puVar4 + 0x38) = param_4[5];
    *(undefined8 *)(puVar4 + 0x30) = uVar16;
    *(undefined8 *)(puVar4 + 0x48) = uVar21;
    *(undefined8 *)(puVar4 + 0x40) = uVar13;
    uVar16 = param_4[8];
    *(undefined8 *)(puVar4 + 0x58) = param_4[9];
    *(undefined8 *)(puVar4 + 0x50) = uVar16;
    uVar16 = *(undefined8 *)((long)param_4 + 0x4b);
    *(undefined8 *)(puVar4 + 99) = *(undefined8 *)((long)param_4 + 0x53);
    *(undefined8 *)(puVar4 + 0x5b) = uVar16;
    uVar16 = *param_4;
    uVar21 = param_4[3];
    uVar13 = param_4[2];
    *(undefined8 *)(puVar4 + 0x18) = param_4[1];
    *(undefined8 *)(puVar4 + 0x10) = uVar16;
    *(undefined8 *)(puVar4 + 0x28) = uVar21;
    *(undefined8 *)(puVar4 + 0x20) = uVar13;
    (**(code **)(lVar11 + 0x20))(puVar4 + uVar14,lVar5,puVar18);
    puVar3 = local_118;
    lVar11 = local_120;
    (**(code **)(local_120 + 0x10))(local_138,lVar17,local_118);
    puVar18 = &DAT_100528be8;
    _swift_allocObject(&DAT_100528be8,0x20,7);
    *(code **)(puVar18 + 0x10) = FUN_1000b0df8;
    *(undefined **)(puVar18 + 0x18) = puVar4;
    FUN_1000b0d30(param_4,&local_d8);
    puVar4 = &DAT_10054eec8;
    FUN_1000036d0(&DAT_10054eec8,PTR_typeMetadataAccessor_100522ab0,
                  PTR_SwiftUI__SwiftUI__PeriodicTimelineSchedule_>SwiftUI__TimelineSchedule_100522aa8
                 );
    puVar6 = &DAT_10054fb18;
    FUN_1000036d0(&DAT_10054fb18,FUN_1000aff7c,&DAT_100421030);
    lVar5 = local_128;
    (extension_SwiftUI)::SwiftUI::TimelineView::_init
              (local_128,puVar6,FUN_1000b0e6c,puVar18,puVar3,local_f8,puVar4,puVar6);
    (**(code **)(lVar11 + 8))(lVar17,puVar3);
    puVar4 = local_e8;
    lVar15 = local_f0;
    lVar11 = local_110;
    (**(code **)(local_110 + 0x10))(local_f0,lVar5,local_e8);
    _swift_storeEnumTagMultiPayload(lVar15,local_100,1);
    FUN_1000b0e74();
    uVar16 = local_e0;
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar15);
    (**(code **)(lVar11 + 8))(lVar5,puVar4);
  }
  else {
    FUN_100043db0(DVar12.unknown,puVar18);
    GVar7.unknown = puVar18;
    FUN_100029504(puVar18,lVar11,FUN_10009e280);
    cVar19 = *(char *)(param_4 + 0xb);
    if (*(char *)(param_4 + 0xb) == '\f') {
      SwiftUI::AppStorage::get_wrappedValue((undefined *)param_4[8]);
      GVar7.unknown = (undefined *)CONCAT71(uStack_d7,local_d8);
      FUN_100078414(GVar7.unknown,uStack_d0);
      cVar19 = '\0';
      if (((uint)GVar7.unknown & 0xff) != 0xc) {
        cVar19 = (char)GVar7.unknown;
      }
    }
    SwiftUI::GeometryProxy::get_size(GVar7);
    uVar10 = param_4[9];
    lVar5 = param_4[10];
    uVar16 = param_4[7];
    puVar8 = &USHORT_100421120;
    _swift_getKeyPath(&USHORT_100421120);
    puVar9 = &USHORT_100421148;
    _swift_getKeyPath(&USHORT_100421148);
    Combine::Published::_get_subscript(&local_d8,uVar16,puVar8,puVar9);
    _swift_release(puVar8);
    _swift_release(puVar9);
    uVar16 = CONCAT71(uStack_d7,local_d8);
    if (lVar5 == 0) {
      _swift_bridgeObjectRelease(uVar16);
LAB_1000a3f88:
      uVar16 = local_e0;
      uVar13 = param_4[3];
      puVar8 = &USHORT_100421168;
      _swift_getKeyPath(&USHORT_100421168);
      puVar4 = &DAT_100421190;
      _swift_getKeyPath(&DAT_100421190);
      Combine::Published::_get_subscript(&local_d8,uVar13,puVar8,puVar4);
      _swift_release(puVar8);
      _swift_release(puVar4);
    }
    else {
      _swift_bridgeObjectRetain(lVar5);
      FUN_1002165a4(uVar10,lVar5,uVar16);
      _swift_bridgeObjectRelease(uVar16);
      _swift_bridgeObjectRelease(lVar5);
      if ((uVar10 & 1) == 0) goto LAB_1000a3f88;
      uVar16 = local_e0;
      local_d8 = 0;
    }
    lVar15 = local_f0;
    lVar5 = local_f8;
    *(char *)(lVar11 + *(int *)(local_f8 + 0x14)) = cVar19;
    puVar1 = (undefined8 *)(lVar11 + *(int *)(lVar5 + 0x18));
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar2 = (undefined1 *)(lVar11 + *(int *)(lVar5 + 0x1c));
    *puVar2 = 1;
    puVar2[1] = local_d8;
    *(undefined1 *)(lVar11 + *(int *)(lVar5 + 0x20)) = 0;
    FUN_100029504(lVar11,lVar15,FUN_1000aff7c);
    _swift_storeEnumTagMultiPayload(lVar15,local_100,0);
    FUN_1000036d0(&DAT_10054fb18,FUN_1000aff7c,&DAT_100421030);
    FUN_1000b0e74();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar15);
    FUN_100029548(lVar11,FUN_1000aff7c);
    FUN_100029548(puVar18,FUN_10009e280);
  }
  uVar13 = 0;
LAB_1000a408c:
  puVar4 = &DAT_10054fb10;
  FUN_100002f94(&DAT_10054fb10,&USHORT_100421118);
  (**(code **)(*(long *)(puVar4 + -8) + 0x38))(uVar16,uVar13,1,puVar4);
  return;
}

