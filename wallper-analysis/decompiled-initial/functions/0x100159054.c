// rea decompile_all
// name: FUN_100159054
// address: 0x100159054
// body: available
// range: 0x100159054-0x1001594cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_100159054(undefined *param_1,undefined *param_2,char *param_3,void *param_4,char *param_5,
             void *param_6,char *param_7,void *param_8)

{
  String SVar1;
  String SVar2;
  char *pcVar3;
  void *pvVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  Encoding EVar8;
  UUID UVar9;
  UUID UVar10;
  Encoding EVar11;
  _StringGuts _Var12;
  Data DVar13;
  char *pcVar14;
  void *pvVar15;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar16;
  Encoding using;
  long lVar17;
  long lVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  String SVar41;
  Data local_c0;
  Data DStack_b8;
  char *local_b0;
  char *local_a8;
  void *pvStack_a0;
  void *local_98;
  char *local_90;
  void *local_88;
  char *local_80;
  void *local_78;
  char *local_70;
  undefined *puStack_68;
  
  local_c0.unknown = param_1;
  DStack_b8.unknown = param_2;
  local_a8 = param_7;
  pvStack_a0 = param_8;
  local_98 = param_6;
  local_90 = param_3;
  local_88 = param_4;
  EVar8 = Encoding::_typeMetadataAccessor();
  lVar17 = *(long *)(EVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar17 + 0x40));
  using.unknown = (undefined *)((long)&local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  UVar9 = Foundation::UUID::typeMetadataAccessor();
  lVar18 = *(long *)(UVar9.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar18 + 0x40));
  local_70 = (char *)0x2d7265706c6c6177;
  puStack_68 = (void *)0xe800000000000000;
  UVar10 = Foundation::UUID::init();
  SVar19 = Foundation::UUID::get_uuidString(UVar10);
  (**(code **)(lVar18 + 8))
            ((long)using.unknown - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0),UVar9.unknown);
  SVar29.bridgeObject = param_4;
  SVar29.str = param_3;
  Swift::String::append(SVar19,SVar29);
  _swift_bridgeObjectRelease(SVar19.bridgeObject);
  puVar6 = puStack_68;
  local_b0 = local_70;
  SVar19.bridgeObject = puStack_68;
  SVar19.str = local_70;
  puStack_68 = (undefined *)0xc000000000000000;
  local_70 = (char *)0x0;
  local_80 = (char *)0x2d2d;
  local_78 = (void *)0xe200000000000000;
  SVar30.bridgeObject = param_4;
  SVar30.str = param_3;
  Swift::String::append(SVar19,SVar30);
  SVar20.bridgeObject = (void *)0xe200000000000000;
  SVar20.str = (char *)0xa0d;
  EVar11.unknown = (undefined *)0xa0d;
  SVar31.bridgeObject = param_4;
  SVar31.str = param_3;
  Swift::String::append(SVar20,SVar31);
  pvVar4 = local_78;
  pcVar14 = local_80;
  Encoding::_get_utf8(EVar11);
  _Var12.unknown = (undefined *)0x0;
  EVar11.unknown = using.unknown;
  pvVar15 = pvVar4;
  (extension_Foundation)::Swift::String::_data(using,false);
  pcVar16 = *(code **)(lVar17 + 8);
  (*pcVar16)(using.unknown,EVar8.unknown);
  if (0xe < (ulong)_Var12.unknown >> 0x3c) {
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x1001594c4);
    (*pcVar16)();
  }
  Foundation::Data::append((Data)EVar11.unknown,(Data)_Var12.unknown);
  FUN_1000a3004(EVar11.unknown);
  _swift_bridgeObjectRelease(pvVar4);
  local_80 = (char *)0x0;
  local_78 = (void *)0xe000000000000000;
  Swift::_StringGuts::grow(0x3a,_Var12);
  SVar21.bridgeObject = (void *)0x80000001004decc0;
  SVar21.str = (char *)0xd000000000000026;
  SVar32.bridgeObject = pvVar15;
  SVar32.str = pcVar14;
  Swift::String::append(SVar21,SVar32);
  SVar22.bridgeObject = local_98;
  SVar22.str = param_5;
  SVar33.bridgeObject = pvVar15;
  SVar33.str = pcVar14;
  Swift::String::append(SVar22,SVar33);
  SVar23.bridgeObject = (void *)0xed0000223d656d61;
  SVar23.str = (char *)0x6e656c6966203b22;
  SVar34.bridgeObject = pvVar15;
  SVar34.str = pcVar14;
  Swift::String::append(SVar23,SVar34);
  SVar2.bridgeObject = local_88;
  SVar2.str = local_90;
  SVar35.bridgeObject = pvVar15;
  SVar35.str = pcVar14;
  Swift::String::append(SVar2,SVar35);
  EVar11.unknown = (undefined *)0xa0d22;
  SVar24.bridgeObject = (void *)0xe300000000000000;
  SVar24.str = (char *)0xa0d22;
  SVar36.bridgeObject = pvVar15;
  SVar36.str = pcVar14;
  Swift::String::append(SVar24,SVar36);
  pvVar4 = local_78;
  pcVar14 = local_80;
  Encoding::_get_utf8(EVar11);
  _Var12.unknown = (undefined *)0x0;
  EVar11.unknown = using.unknown;
  pvVar15 = pvVar4;
  (extension_Foundation)::Swift::String::_data(using,false);
  (*pcVar16)(using.unknown,EVar8.unknown);
  if (0xe < (ulong)_Var12.unknown >> 0x3c) {
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x1001594c8);
    (*pcVar16)();
  }
  Foundation::Data::append((Data)EVar11.unknown,(Data)_Var12.unknown);
  FUN_1000a3004(EVar11.unknown);
  _swift_bridgeObjectRelease(pvVar4);
  local_80 = (char *)0x0;
  local_78 = (void *)0xe000000000000000;
  Swift::_StringGuts::grow(0x14,_Var12);
  _swift_bridgeObjectRelease(local_78);
  local_80 = (char *)0x2d746e65746e6f43;
  local_78 = (void *)0xee00203a65707954;
  SVar1.bridgeObject = pvStack_a0;
  SVar1.str = local_a8;
  SVar37.bridgeObject = pvVar15;
  SVar37.str = pcVar14;
  Swift::String::append(SVar1,SVar37);
  EVar11.unknown = (undefined *)0xa0d0a0d;
  SVar25.bridgeObject = (void *)0xe400000000000000;
  SVar25.str = (char *)0xa0d0a0d;
  SVar38.bridgeObject = pvVar15;
  SVar38.str = pcVar14;
  Swift::String::append(SVar25,SVar38);
  pvVar4 = local_78;
  pcVar14 = local_80;
  Encoding::_get_utf8(EVar11);
  DVar13.unknown = (undefined *)0x0;
  EVar11.unknown = using.unknown;
  pvVar15 = pvVar4;
  (extension_Foundation)::Swift::String::_data(using,false);
  (*pcVar16)(using.unknown,EVar8.unknown);
  if (0xe < (ulong)DVar13.unknown >> 0x3c) {
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x1001594cc);
    (*pcVar16)();
  }
  Foundation::Data::append((Data)EVar11.unknown,DVar13);
  FUN_1000a3004(EVar11.unknown,DVar13.unknown);
  _swift_bridgeObjectRelease(pvVar4);
  Foundation::Data::append(local_c0,DStack_b8);
  pcVar3 = local_b0;
  local_80 = (char *)0x2d2d0a0d;
  local_78 = (void *)0xe400000000000000;
  SVar26.bridgeObject = puVar6;
  SVar26.str = local_b0;
  SVar39.bridgeObject = pvVar15;
  SVar39.str = pcVar14;
  Swift::String::append(SVar26,SVar39);
  EVar11.unknown = (undefined *)0xa0d2d2d;
  SVar27.bridgeObject = (void *)0xe400000000000000;
  SVar27.str = (char *)0xa0d2d2d;
  SVar40.bridgeObject = pvVar15;
  SVar40.str = pcVar14;
  Swift::String::append(SVar27,SVar40);
  pvVar4 = local_78;
  pcVar14 = local_80;
  Encoding::_get_utf8(EVar11);
  DVar13.unknown = (undefined *)0x0;
  EVar11.unknown = using.unknown;
  pvVar15 = pvVar4;
  (extension_Foundation)::Swift::String::_data(using,false);
  (*pcVar16)(using.unknown,EVar8.unknown);
  if ((ulong)DVar13.unknown >> 0x3c < 0xf) {
    Foundation::Data::append((Data)EVar11.unknown,DVar13);
    FUN_1000a3004(EVar11.unknown,DVar13.unknown);
    _swift_bridgeObjectRelease(pvVar4);
    puVar7 = puStack_68;
    pcVar5 = local_70;
    local_80 = (char *)0x0;
    local_78 = (void *)0xe000000000000000;
    _Var12.unknown = puStack_68;
    FUN_10011a30c(local_70);
    Swift::_StringGuts::grow(0x20,_Var12);
    _swift_bridgeObjectRelease(local_78);
    local_80 = (char *)0xd00000000000001e;
    local_78 = (void *)0x80000001004decf0;
    SVar28.bridgeObject = puVar6;
    SVar28.str = pcVar3;
    SVar41.bridgeObject = pvVar15;
    SVar41.str = pcVar14;
    Swift::String::append(SVar28,SVar41);
    _swift_bridgeObjectRelease(puVar6);
    FUN_100093624(pcVar5,puVar7);
    return pcVar5;
  }
                    /* WARNING: Does not return */
  pcVar16 = (code *)SoftwareBreakpoint(1,0x1001594d0);
  (*pcVar16)();
}

