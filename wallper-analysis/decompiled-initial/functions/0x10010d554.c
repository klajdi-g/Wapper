// rea decompile_all
// name: FUN_10010d554
// address: 0x10010d554
// body: available
// range: 0x10010d554-0x10010dbb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010010db08 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10010d554(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ModifiedContent MVar5;
  undefined *puVar6;
  State SVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  Hasher HVar13;
  long extraout_x8;
  long lVar14;
  ulong uVar15;
  long extraout_x12;
  ulong uVar16;
  code *pcVar17;
  long lVar18;
  __uint64 _Var19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 auStack_1e0 [2];
  undefined8 local_1d0;
  undefined *local_1c8;
  undefined8 *local_1c0;
  undefined *local_1b8;
  undefined *local_1b0;
  undefined *local_1a8;
  undefined8 local_1a0;
  undefined *local_198;
  undefined *local_190;
  long local_188;
  undefined *local_180;
  long local_178;
  long local_170;
  undefined *local_168;
  undefined *local_160;
  undefined *local_158;
  undefined8 local_150;
  undefined *local_148;
  undefined *local_140;
  undefined *local_138;
  undefined *local_130;
  undefined *local_128;
  undefined *local_120;
  undefined *local_118;
  undefined *local_110;
  undefined *puStack_108;
  undefined *local_100;
  undefined *puStack_f8;
  undefined *local_f0;
  undefined *puStack_e8;
  undefined8 local_e0;
  undefined *puStack_d8;
  undefined *local_d0;
  undefined *puStack_c8;
  undefined *local_c0;
  undefined *puStack_b8;
  undefined *local_b0;
  undefined *local_70;
  
  puVar4 = &DAT_100553098;
  HVar13.unknown = &DAT_100425d60;
  local_1a0 = param_4;
  local_150 = param_1;
  FUN_100002fe4(&DAT_100553098,&DAT_100425d60);
  FUN_100002fe4(&DAT_1005530a0,&DAT_100425d68);
  local_1d0 = param_3;
  local_1c8 = (undefined *)SwiftUI::ModifiedContent::typeMetadataAccessor();
  local_1b8 = (undefined *)SwiftUI::ModifiedContent::typeMetadataAccessor();
  local_1b0 = (undefined *)SwiftUI::ModifiedContent::typeMetadataAccessor();
  local_1a8 = (undefined *)SwiftUI::ModifiedContent::typeMetadataAccessor();
  MVar5 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  SwiftUI::AccessibilityAttachmentModifier::typeMetadataAccessor();
  local_198 = MVar5.unknown;
  MVar5 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  FUN_100002fe4(&DAT_1005530a8,&DAT_100425d70);
  local_190 = MVar5.unknown;
  MVar5 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  puVar6 = &DAT_1005530b0;
  FUN_1000087a0(&DAT_1005530b0,&DAT_100553098,&DAT_100425d60,
                PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100523b60);
  puStack_c8 = PTR___type_metadata_for_Swift_Int_100523bd8;
  local_b0 = PTR___protocol_witness_table_for_Swift_Int___Swift_Hashable_in_Swift_100523be0;
  local_180 = puVar6;
  local_168 = MVar5.unknown;
  local_158 = puVar4;
  local_d0 = puVar4;
  local_c0 = MVar5.unknown;
  puStack_b8 = puVar6;
  local_160 = (undefined *)SwiftUI::ForEach::typeMetadataAccessor();
  local_170 = *(long *)(local_160 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_170 + 0x40));
  lVar14 = (long)&local_1d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_188 = lVar14;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = lVar14 - extraout_x12;
  lVar18 = param_2[1];
  puStack_c8 = (undefined *)param_2[6];
  local_d0 = (undefined *)param_2[5];
  SVar7.unknown = &DAT_1005530d8;
  local_1c0 = param_2;
  local_178 = lVar14;
  FUN_100002f94(&DAT_1005530d8,&DAT_100425d88);
  SwiftUI::State::get_wrappedValue(SVar7);
  uVar16 = *(ulong *)(lVar18 + 0x10);
  _swift_bridgeObjectRetain(local_70);
  puVar4 = PTR___swiftEmptyArrayStorage_100524190;
  if (uVar16 != 0) {
    uVar20 = 0;
LAB_10010d7c4:
    uVar8 = uVar20;
    uVar1 = uVar20;
    if (uVar20 <= uVar16) {
      uVar1 = uVar16;
    }
    do {
      if (uVar8 == uVar1) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x10010dbb4);
        (*pcVar17)();
      }
      uVar20 = uVar8 + 1;
      if (*(long *)((long)local_70 + 0x10) != 0) {
        _Var19 = *(__uint64 *)(lVar18 + 0x20 + uVar8 * 8);
        uVar8 = Swift::Hasher::_hash(*(__int64 *)((long)local_70 + 0x28),_Var19,HVar13);
        uVar15 = -1L << ((ulong)*(byte *)((long)local_70 + 0x20) & 0x3f);
        uVar8 = uVar8 & (uVar15 ^ 0xffffffffffffffff);
        if ((*(ulong *)((long)local_70 + 0x38 + (uVar8 >> 6) * 8) >> (uVar8 & 0x3f) & 1) != 0) {
          do {
            if (*(__uint64 *)(*(long *)((long)local_70 + 0x30) + uVar8 * 8) == _Var19) {
              puVar6 = puVar4;
              _swift_isUniquelyReferenced_nonNull_native();
              local_d0 = puVar4;
              if (((ulong)puVar6 & 1) == 0) {
                HVar13.unknown = (undefined *)0x1;
                FUN_1001c5be8(0,*(long *)(puVar4 + 0x10) + 1);
              }
              uVar1 = *(ulong *)(local_d0 + 0x10);
              if (*(ulong *)(local_d0 + 0x18) >> 1 <= uVar1) {
                HVar13.unknown = (undefined *)0x1;
                FUN_1001c5be8(1 < *(ulong *)(local_d0 + 0x18),uVar1 + 1);
              }
              *(ulong *)(local_d0 + 0x10) = uVar1 + 1;
              *(__uint64 *)(local_d0 + uVar1 * 8 + 0x20) = _Var19;
              puVar4 = local_d0;
              if (uVar20 == uVar16) goto LAB_10010d8c8;
              goto LAB_10010d7c4;
            }
            uVar8 = uVar8 + 1 & ~uVar15;
          } while ((*(ulong *)((long)local_70 + 0x38 + (uVar8 >> 6) * 8) >> (uVar8 & 0x3f) & 1) != 0
                  );
        }
      }
      uVar8 = uVar20;
    } while (uVar20 != uVar16);
  }
LAB_10010d8c8:
  _swift_bridgeObjectRelease_n(local_70,2);
  puVar6 = &DAT_100425d98;
  local_70 = puVar4;
  _swift_getKeyPath(&DAT_100425d98);
  puVar4 = &DAT_10052c6e8;
  _swift_allocObject(&DAT_10052c6e8,0x78,7);
  uVar3 = local_1a0;
  puVar2 = local_1c0;
  *(undefined8 *)(puVar4 + 0x10) = local_1d0;
  *(undefined8 *)(puVar4 + 0x18) = local_1a0;
  uVar21 = local_1c0[4];
  uVar23 = local_1c0[7];
  uVar22 = local_1c0[6];
  *(undefined8 *)(puVar4 + 0x48) = local_1c0[5];
  *(undefined8 *)(puVar4 + 0x40) = uVar21;
  *(undefined8 *)(puVar4 + 0x58) = uVar23;
  *(undefined8 *)(puVar4 + 0x50) = uVar22;
  uVar21 = local_1c0[8];
  *(undefined8 *)(puVar4 + 0x68) = local_1c0[9];
  *(undefined8 *)(puVar4 + 0x60) = uVar21;
  *(undefined8 *)(puVar4 + 0x70) = local_1c0[10];
  uVar21 = *local_1c0;
  uVar23 = local_1c0[3];
  uVar22 = local_1c0[2];
  *(undefined8 *)(puVar4 + 0x28) = local_1c0[1];
  *(undefined8 *)(puVar4 + 0x20) = uVar21;
  *(undefined8 *)(puVar4 + 0x38) = uVar23;
  *(undefined8 *)(puVar4 + 0x30) = uVar22;
  lVar18 = 0;
  FUN_10010f404(0,local_1d0,local_1a0);
  (**(code **)(*(long *)(lVar18 + -8) + 0x10))(&local_d0,puVar2,lVar18);
  puVar9 = &DAT_1005530b8;
  FUN_1000087a0(&DAT_1005530b8,&DAT_1005530a0,&DAT_100425d68,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100522bc8
               );
  puVar12 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
  local_e0 = uVar3;
  puVar10 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
  puStack_d8 = puVar9;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
             local_1c8,&local_e0);
  puStack_e8 = 
  PTR___protocol_witness_table_for_SwiftUI__CompositingGroupEffect___SwiftUI_ViewModifier_in_SwiftUI_100522a40
  ;
  puVar9 = puVar12;
  local_f0 = puVar10;
  _swift_getWitnessTable(puVar12,local_1b8,&local_f0);
  puStack_f8 = 
  PTR___protocol_witness_table_for_SwiftUI__OffsetEffect___SwiftUI_ViewModifier_in_SwiftUI_100521ff0
  ;
  puVar10 = puVar12;
  local_100 = puVar9;
  _swift_getWitnessTable(puVar12,local_1b0,&local_100);
  puStack_108 = 
  PTR___protocol_witness_table_for_SwiftUI__OpacityEffect___SwiftUI_ViewModifier_in_SwiftUI_100522190
  ;
  puVar9 = puVar12;
  local_110 = puVar10;
  _swift_getWitnessTable(puVar12,local_1a8,&local_110);
  local_118 = 
  PTR___protocol_witness_table_for_SwiftUI__AllowsHitTestingModifier___SwiftUI_ViewModifier_in_SwiftUI_100522b18
  ;
  puVar10 = puVar12;
  local_120 = puVar9;
  _swift_getWitnessTable(puVar12,local_198,&local_120);
  puVar9 = &DAT_1005515d8;
  FUN_1000036d0(&DAT_1005515d8,PTR_typeMetadataAccessor_100522be8,
                PTR_SwiftUI__SwiftUI__AccessibilityAttachmentModifier_>SwiftUI__ViewModifier_100522be0
               );
  puVar11 = puVar12;
  local_130 = puVar10;
  local_128 = puVar9;
  _swift_getWitnessTable(puVar12,local_190,&local_130);
  puVar9 = &DAT_1005530c0;
  FUN_1000087a0(&DAT_1005530c0,&DAT_1005530a8,&DAT_100425d70,
                PTR_SwiftUI__SwiftUI___TraitWritingModifier<undefined>_>SwiftUI__ViewModifier_100522978
               );
  puVar10 = local_168;
  local_140 = puVar11;
  local_138 = puVar9;
  _swift_getWitnessTable(puVar12,local_168,&local_140);
  *(undefined **)(lVar14 + -0x10) = puVar12;
  lVar14 = local_188;
  (extension_SwiftUI)::SwiftUI::ForEach::_init
            (local_188,puVar12,puVar6,FUN_10010f56c,puVar4,local_158,puVar10,local_180,
             PTR___protocol_witness_table_for_Swift_Int___Swift_Hashable_in_Swift_100523be0);
  puVar4 = local_160;
  puVar6 = PTR__SwiftUI__SwiftUI__ForEach<undefined,undefined,undefined>_>SwiftUI__View_100523598;
  local_148 = puVar12;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ForEach<undefined,undefined,undefined>_>SwiftUI__View_100523598,
             local_160,&local_148);
  lVar18 = local_178;
  thunk_FUN_1000bdaa4(local_178,lVar14,puVar4,puVar6);
  pcVar17 = *(code **)(local_170 + 8);
  (*pcVar17)(lVar14,puVar4);
  thunk_FUN_1000bdaa4(local_150,lVar18,puVar4,puVar6);
  (*pcVar17)(lVar18,puVar4);
  return;
}

