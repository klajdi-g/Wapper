// rea decompile_all
// name: FUN_1002f0f50
// address: 0x1002f0f50
// body: available
// range: 0x1002f0f50-0x1002f1313 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002f1194 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1002f0f50(undefined8 param_1,long param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  State SVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  LocalizedStringKey LVar10;
  Text TVar11;
  HierarchicalShapeStyle HVar12;
  Text TVar13;
  undefined8 uVar14;
  Text TVar15;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  String stringLiteral;
  undefined8 auStack_b0 [2];
  long alStack_a0 [2];
  undefined *local_90 [3];
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar2 = 0;
  local_90[2] = (undefined *)param_1;
  FUN_1002f58d4();
  lVar19 = *(long *)(lVar2 + -8);
  lVar22 = *(long *)(lVar19 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar21 = (long)alStack_a0 - (lVar22 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_10055b2f0;
  FUN_100002f94(&DAT_10055b2f0,&DAT_10042fb10);
  alStack_a0[1] = *(long *)(puVar3 + -8);
  local_90[1] = puVar3;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(alStack_a0[1] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = lVar21 - extraout_x8;
  puVar3 = &DAT_10055b328;
  FUN_100002f94(&DAT_10055b328,&DAT_10042fb60);
  local_90[0] = puVar3;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar18 = (undefined8 *)(lVar20 - extraout_x8_00);
  puVar1 = (undefined8 *)(param_2 + *(int *)(lVar2 + 0x34));
  uVar6 = *puVar1;
  uVar14 = puVar1[1];
  SVar4.unknown = &DAT_10055b220;
  local_70 = uVar6;
  uStack_68 = uVar14;
  FUN_100002f94(&DAT_10055b220,&DAT_10042fa78);
  SwiftUI::State::get_wrappedValue(SVar4);
  lVar2 = *(long *)(local_78 + 0x10);
  _swift_bridgeObjectRelease();
  if (lVar2 == 0) {
    uVar14 = 0x80000001004e5b70;
    stringLiteral.bridgeObject = (void *)0x80000001004e5b70;
    stringLiteral.str = (char *)0xd00000000000001a;
    LVar10 = SwiftUI::LocalizedStringKey::init(stringLiteral);
    *(undefined2 *)(puVar18 + -1) = 0x100;
    puVar18[-2] = 0;
    uVar17 = (ulong)(param_4 & 1);
    TVar11 = SwiftUI::Text::_init(LVar10);
    HVar12 = SwiftUI::HierarchicalShapeStyle::get_secondary(TVar11.unknown);
    local_70 = CONCAT44(local_70._4_4_,(int)HVar12.unknown);
    FUN_100025b4c();
    TVar15 = TVar11;
    uVar6 = uVar14;
    uVar16 = uVar17;
    TVar13 = SwiftUI::Text::_foregroundStyle();
    FUN_100025b34(TVar11.unknown,uVar14,uVar17);
    _swift_bridgeObjectRelease(param_5);
    *puVar18 = TVar13.unknown;
    puVar18[1] = TVar15.unknown;
    *(char *)(puVar18 + 2) = (char)uVar6;
    puVar18[3] = uVar16;
    _swift_storeEnumTagMultiPayload(puVar18,local_90[0],0);
    FUN_1002fa1cc();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar18);
  }
  else {
    local_70 = uVar6;
    uStack_68 = uVar14;
    SwiftUI::State::get_wrappedValue(SVar4);
    FUN_100029504(param_2,lVar21,FUN_1002f58d4);
    uVar16 = (ulong)*(byte *)(lVar19 + 0x50);
    uVar17 = uVar16 + 0x10 & (uVar16 ^ 0xffffffffffffffff);
    puVar3 = &DAT_100539668;
    _swift_allocObject(&DAT_100539668,uVar17 + lVar22,uVar16 | 7);
    FUN_100007e64(lVar21,puVar3 + uVar17,FUN_1002f58d4);
    puVar5 = &DAT_10055b038;
    FUN_100002f94(&DAT_10055b038,&DAT_10042f8c8);
    uVar6 = 0;
    FUN_1002fa254(0);
    puVar7 = &DAT_10055b330;
    FUN_1000087a0(&DAT_10055b330,&DAT_10055b038,&DAT_10042f8c8,
                  PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100523b60);
    puVar8 = &DAT_10055b2f8;
    FUN_1000036d0(&DAT_10055b2f8,FUN_1002fa254,&TargetProtocolConformanceDescriptor_10042fbe4);
    puVar9 = &DAT_10055b338;
    FUN_1000036d0(&DAT_10055b338,FUN_1002f58e8,&TargetProtocolConformanceDescriptor_10042f960);
    puVar18[-2] = puVar9;
    (extension_SwiftUI)::SwiftUI::ForEach::_init
              (lVar20,puVar9,FUN_1002fa39c,puVar3,puVar5,
               PTR___type_metadata_for_Swift_String_100523a98,uVar6,puVar7,puVar8);
    puVar3 = local_90[1];
    lVar2 = alStack_a0[1];
    (**(code **)(alStack_a0[1] + 0x10))(puVar18,lVar20,local_90[1]);
    _swift_storeEnumTagMultiPayload(puVar18,local_90[0],1);
    FUN_1002fa1cc();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar18);
    (**(code **)(lVar2 + 8))(lVar20,puVar3);
  }
  return;
}

