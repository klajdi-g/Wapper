// rea decompile_all
// name: FUN_1001c28ac
// address: 0x1001c28ac
// body: available
// range: 0x1001c28ac-0x1001c2e1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_1001c28ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  int iVar1;
  long lVar2;
  UUID UVar3;
  undefined *puVar4;
  long lVar5;
  char *pcVar6;
  UUID UVar7;
  code *pcVar8;
  long extraout_x8;
  long extraout_x8_00;
  char *pcVar9;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  undefined *puVar10;
  long extraout_x12;
  long lVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  code *pcVar15;
  Calendar CVar16;
  long lVar17;
  void *pvVar18;
  String SVar19;
  undefined1 auVar20 [16];
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  char acStack_c0 [8];
  undefined *local_b8;
  long local_b0;
  char *local_a8;
  char *local_a0;
  long local_98;
  undefined8 local_90;
  undefined *local_88;
  char *local_80;
  long local_78;
  String local_70;
  
  local_90 = param_1;
  local_88 = (undefined *)Foundation::Calendar::typeMetadataAccessor();
  local_98 = *(long *)(local_88 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_98 + 0x40));
  pcVar9 = acStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar10 = &DAT_10054a9d0;
  local_a0 = pcVar9;
  FUN_100002f94(&DAT_10054a9d0,&DAT_10041bc60);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar9 = pcVar9 + -extraout_x8_00;
  lVar2 = 0;
  local_80 = pcVar9;
  FUN_1001d537c();
  local_b0 = lVar2;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar10 = &DAT_10054a9c8;
  local_a8 = pcVar9 + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)(pcVar9 + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_02;
  UVar3 = Foundation::UUID::typeMetadataAccessor();
  lVar12 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar12 + 0x40));
  puVar10 = (undefined *)(lVar11 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  local_b8 = puVar10;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = (long)puVar10 - extraout_x12;
  puVar10 = &DAT_10054ac38;
  FUN_100002f94(&DAT_10054ac38,&DAT_10041e8e0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  CVar16.unknown = (undefined *)(lVar14 - extraout_x8_04);
  lVar2 = 0;
  FUN_10025ee04();
  lVar17 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar17 + 0x40));
  local_78 = (long)CVar16.unknown - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  puVar10 = &DAT_10042a740;
  _swift_getKeyPath(&DAT_10042a740);
  puVar4 = &DAT_10042a768;
  _swift_getKeyPath(&DAT_10042a768);
  Combine::Published::_get_subscript(&local_70);
  _swift_release(puVar10);
  _swift_release(puVar4);
  pcVar9 = (char *)0x0;
  pvVar18 = (void *)0x0;
  if (((byte)local_70.str & 1) == 0) {
    puVar10 = &DAT_10042a670;
    _swift_getKeyPath(&DAT_10042a670);
    puVar4 = &DAT_10042a698;
    _swift_getKeyPath(&DAT_10042a698);
    Combine::Published::_get_subscript(lVar11);
    _swift_release(puVar10);
    _swift_release(puVar4);
    lVar5 = lVar11;
    (**(code **)(lVar12 + 0x30))(lVar11,1,UVar3.unknown);
    if ((int)lVar5 == 1) {
      FUN_10002a29c(lVar11,&DAT_10054a9c8,&DAT_10041bbe0);
      (**(code **)(lVar17 + 0x38))(CVar16.unknown,1,1,lVar2);
    }
    else {
      pcVar15 = *(code **)(lVar12 + 0x20);
      (*pcVar15)(lVar14,lVar11,UVar3.unknown);
      FUN_1001b6e74(CVar16.unknown,lVar14);
      pcVar13 = *(code **)(lVar12 + 8);
      (*pcVar13)(lVar14,UVar3.unknown);
      puVar10 = CVar16.unknown;
      (**(code **)(lVar17 + 0x30))(CVar16.unknown,1,lVar2);
      lVar2 = local_78;
      if ((int)puVar10 != 1) {
        FUN_100007e64(CVar16.unknown,local_78,FUN_10025ee04);
        pcVar9 = local_a0;
        Foundation::Calendar::get_current(CVar16);
        UVar7.unknown = local_80;
        FUN_1001d62f0(local_80,local_90,pcVar9);
        (**(code **)(local_98 + 8))(pcVar9,local_88);
        lVar11 = 0;
        FUN_1001d59ac();
        pcVar6 = UVar7.unknown;
        (**(code **)(*(long *)(lVar11 + -8) + 0x30))(UVar7.unknown,1,lVar11);
        pcVar9 = local_a8;
        if ((int)pcVar6 == 1) {
          pcVar8 = (code *)&DAT_10041bc60;
          FUN_10002a29c(UVar7.unknown,&DAT_10054a9d0);
          SVar22.bridgeObject = (void *)0xe500000000000000;
          SVar22.str = (char *)0x7974706d65;
        }
        else {
          pcVar8 = FUN_1001d537c;
          FUN_100029504(UVar7.unknown,local_a8);
          FUN_100029548(UVar7.unknown,FUN_1001d59ac);
          UVar7.unknown = pcVar9;
          _swift_getEnumCaseMultiPayload(pcVar9,local_b0);
          puVar10 = local_b8;
          iVar1 = (int)UVar7.unknown;
          if (iVar1 < 2) {
            if (iVar1 == 0) {
              pcVar6 = (char *)0x746867696e;
              if (*pcVar9 != '\x01') {
                pcVar6 = (char *)0x796164;
              }
              pvVar18 = (void *)0xe500000000000000;
              if (*pcVar9 != '\x01') {
                pvVar18 = (void *)0xe300000000000000;
              }
              SVar22.bridgeObject = pvVar18;
              SVar22.str = pcVar6;
            }
            else {
              UVar7.unknown = local_b8;
              pcVar8 = (code *)UVar3;
              (*pcVar15)(local_b8,pcVar9);
              SVar22 = Foundation::UUID::get_uuidString(UVar7);
              (*pcVar13)(puVar10,UVar3.unknown);
              UVar7.unknown = puVar10;
            }
          }
          else if (iVar1 == 2) {
            local_70.bridgeObject = (void *)0xeb000000002d6563;
            local_70.str = (char *)0x6e61726165707061;
            pcVar6 = (char *)0x6b726164;
            if (*pcVar9 != '\x01') {
              pcVar6 = (char *)0x746867696c;
            }
            UVar7.unknown = (undefined *)0xe400000000000000;
            if (*pcVar9 != '\x01') {
              UVar7.unknown = (undefined *)0xe500000000000000;
            }
            SVar21.bridgeObject = UVar7.unknown;
            SVar21.str = pcVar6;
            SVar25.bridgeObject = param_4;
            SVar25.str = (char *)pcVar8;
            Swift::String::append(SVar21,SVar25);
            _swift_bridgeObjectRelease();
            SVar22 = local_70;
          }
          else {
            SVar22.bridgeObject = (void *)0xe300000000000000;
            SVar22.str = (char *)0x6c6c61;
          }
        }
        local_70 = Foundation::UUID::get_uuidString(UVar7);
        SVar19.bridgeObject = (void *)0xe100000000000000;
        SVar19.str = (char *)0x7c;
        SVar23.bridgeObject = param_4;
        SVar23.str = (char *)pcVar8;
        Swift::String::append(SVar19,SVar23);
        SVar24.bridgeObject = param_4;
        SVar24.str = (char *)pcVar8;
        Swift::String::append(SVar22,SVar24);
        _swift_bridgeObjectRelease(SVar22.bridgeObject);
        pcVar9 = local_70.str;
        pvVar18 = local_70.bridgeObject;
        FUN_100029548(lVar2,FUN_10025ee04);
        goto LAB_1001c2cd4;
      }
    }
    FUN_10002a29c(CVar16.unknown,&DAT_10054ac38,&DAT_10041e8e0);
    pcVar9 = (char *)0x0;
    pvVar18 = (void *)0x0;
  }
LAB_1001c2cd4:
  auVar20._8_8_ = pvVar18;
  auVar20._0_8_ = pcVar9;
  return auVar20;
}

