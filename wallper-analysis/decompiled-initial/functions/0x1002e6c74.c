// rea decompile_all
// name: FUN_1002e6c74
// address: 0x1002e6c74
// body: available
// range: 0x1002e6c74-0x1002e70a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


LocalizedStringKey FUN_1002e6c74(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  bool bVar6;
  StringInterpolation SVar7;
  State SVar8;
  LocalizedStringKey LVar9;
  undefined8 uVar10;
  char *pcVar11;
  uint uVar12;
  void *pvVar13;
  undefined *puVar14;
  undefined *puVar15;
  long extraout_x8;
  ulong uVar16;
  long unaff_x20;
  long lVar17;
  ulong *puVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 *local_68;
  
  SVar7 = SwiftUI::LocalizedStringKey::StringInterpolation::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(SVar7.unknown + -8) + 0x40));
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x78);
  local_80 = *(undefined8 *)(unaff_x20 + 0x70);
  SVar8.unknown = &DAT_10054ba40;
  uVar12 = 0x423be0;
  FUN_100002f94();
  SwiftUI::State::get_wrappedValue(SVar8);
  if (DAT_100559bc8 == -1) {
    FUN_10029a9ec();
  }
  else {
    SVar8.unknown = (undefined *)&DAT_100559bc8;
    uVar12 = 0x299578;
    _swift_once();
    FUN_10029a9ec();
  }
  if ((((ulong)SVar8.unknown & 1) == 0) || (FUN_10029a480(), (uVar12 & 0xff) == 1)) {
    LVar9.unknown = (undefined *)0x0;
  }
  else {
    if (DAT_100557bb0 != -1) {
      _swift_once(&DAT_100557bb0,FUN_100233158);
    }
    lVar19 = DAT_100577d38;
    lVar17 = _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL;
    _swift_beginAccess(DAT_100577d38 + _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL,
                       &local_80,0,0);
    lVar17 = *(long *)(lVar19 + lVar17);
    puVar18 = (ulong *)(lVar17 + 0x40);
    uVar16 = -1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
    uVar21 = 0xffffffffffffffff;
    if (-uVar16 < 0x40) {
      uVar21 = ~(-1L << (-uVar16 & 0x3f));
    }
    uVar21 = uVar21 & *puVar18;
    _swift_bridgeObjectRetain_n(lVar17,2);
    lVar19 = 0;
    uVar3 = uVar21;
    lVar4 = lVar19;
    do {
      while (lVar20 = lVar4, uVar22 = uVar3, uVar21 == 0) {
        bVar6 = SCARRY8(lVar19,1);
        lVar19 = lVar19 + 1;
        if (bVar6) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1002e706c);
          (*pcVar5)();
        }
        if ((long)(0x3f - uVar16 >> 6) <= lVar19) {
          _swift_bridgeObjectRelease(lVar17);
          SVar7.unknown = (undefined *)~uVar16;
          FUN_10002f6ec(lVar17,puVar18,SVar7.unknown,lVar20,0);
          SwiftUI::AppStorage::get_wrappedValue((AppStorage)*(undefined **)(unaff_x20 + 0x38));
          if ((((ulong)local_68 & 1) == 0) ||
             (SwiftUI::AppStorage::get_wrappedValue((AppStorage)*(undefined **)(unaff_x20 + 0x30)),
             ((byte)local_68 & 1) != 0)) {
            SwiftUI::LocalizedStringKey::StringInterpolation::init(10,1);
            SVar23.bridgeObject = (void *)0xe800000000000000;
            SVar23.str = (char *)0x2079726574746142;
            SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral(SVar23,SVar7);
            puVar14 = PTR___type_metadata_for_Swift_Int_100523bd8;
            puVar15 = 
            PTR___protocol_witness_table_for_Swift_Int___SwiftUI__FormatSpecifiable_in_SwiftUI_100523800
            ;
            local_68 = (undefined8 *)SVar8.unknown;
          }
          else {
            SwiftUI::LocalizedStringKey::StringInterpolation::init(0x24,2);
            SVar24.bridgeObject = (void *)0xe800000000000000;
            SVar24.str = (char *)0x2079726574746142;
            SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral(SVar24,SVar7);
            puVar14 = PTR___type_metadata_for_Swift_Int_100523bd8;
            puVar15 = 
            PTR___protocol_witness_table_for_Swift_Int___SwiftUI__FormatSpecifiable_in_SwiftUI_100523800
            ;
            SVar7.unknown = (undefined *)0xe400000000000000;
            local_68 = (undefined8 *)SVar8.unknown;
            SwiftUI::LocalizedStringKey::StringInterpolation::_appendInterpolation
                      (&local_68,0x646c6c25,0xe400000000000000,
                       PTR___type_metadata_for_Swift_Int_100523bd8,
                       PTR___protocol_witness_table_for_Swift_Int___SwiftUI__FormatSpecifiable_in_SwiftUI_100523800
                      );
            SVar25.bridgeObject = (void *)0x80000001004e52c0;
            SVar25.str = (char *)0x100000000000001a;
            SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral(SVar25,SVar7);
            SwiftUI::AppStorage::get_wrappedValue((AppStorage)*(undefined **)(unaff_x20 + 0x40));
          }
          SVar7.unknown = (undefined *)0xe400000000000000;
          SwiftUI::LocalizedStringKey::StringInterpolation::_appendInterpolation
                    (&local_68,0x646c6c25,0xe400000000000000,puVar14,puVar15);
          pcVar11 = (char *)0x2e25;
          pvVar13 = (void *)0xe200000000000000;
          goto LAB_1002e6f9c;
        }
        uVar3 = uVar22;
        lVar4 = lVar20;
        uVar21 = puVar18[lVar19];
      }
      uVar3 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      uVar21 = uVar21 - 1 & uVar21;
      puVar1 = (undefined8 *)
               (*(long *)(lVar17 + 0x30) + LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) * 0x10 +
               lVar19 * 0x400);
      uVar10 = *puVar1;
      uVar2 = puVar1[1];
      _swift_bridgeObjectRetain(uVar2);
      FUN_10023ae7c(uVar10,uVar2);
      _swift_bridgeObjectRelease(uVar2);
      uVar3 = uVar21;
      lVar4 = lVar19;
    } while (((uint)uVar10 & 0xff) != 2);
    _swift_bridgeObjectRelease(lVar17);
    SVar7.unknown = (undefined *)~uVar16;
    FUN_10002f6ec(lVar17,puVar18,SVar7.unknown,lVar20,uVar22);
    SwiftUI::LocalizedStringKey::StringInterpolation::init(0x36,1);
    SVar27.bridgeObject = (void *)0xe800000000000000;
    SVar27.str = (char *)0x2079726574746142;
    SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral(SVar27,SVar7);
    SVar7.unknown = (undefined *)0xe400000000000000;
    local_68 = (undefined8 *)SVar8.unknown;
    SwiftUI::LocalizedStringKey::StringInterpolation::_appendInterpolation
              (&local_68,0x646c6c25,0xe400000000000000,PTR___type_metadata_for_Swift_Int_100523bd8,
               PTR___protocol_witness_table_for_Swift_Int___SwiftUI__FormatSpecifiable_in_SwiftUI_100523800
              );
    pcVar11 = (char *)0x100000000000002e;
    pvVar13 = (void *)0x80000001004e52e0;
LAB_1002e6f9c:
    SVar26.bridgeObject = pvVar13;
    SVar26.str = pcVar11;
    SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral(SVar26,SVar7);
    LVar9 = SwiftUI::LocalizedStringKey::init
                      ((StringInterpolation)
                       (&stack0xffffffffffffff60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)));
  }
  return (LocalizedStringKey)LVar9.unknown;
}

