// rea decompile_all
// name: FUN_100261d54
// address: 0x100261d54
// body: available
// range: 0x100261d54-0x100261ea3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100262858) */
/* WARNING: Removing unreachable block (ram,0x000100262db4) */
/* WARNING: Removing unreachable block (ram,0x0001002627ec) */
/* WARNING: Removing unreachable block (ram,0x000100262510) */
/* WARNING: Removing unreachable block (ram,0x000100262484) */
/* WARNING: Removing unreachable block (ram,0x0001002626d8) */
/* WARNING: Removing unreachable block (ram,0x000100262804) */
/* WARNING: Removing unreachable block (ram,0x0001002628bc) */
/* WARNING: Removing unreachable block (ram,0x0001002628d4) */
/* WARNING: Removing unreachable block (ram,0x000100262a08) */
/* WARNING: Removing unreachable block (ram,0x00010026276c) */
/* WARNING: Removing unreachable block (ram,0x000100262790) */
/* WARNING: Removing unreachable block (ram,0x000100262918) */
/* WARNING: Removing unreachable block (ram,0x000100262934) */
/* WARNING: Removing unreachable block (ram,0x000100262948) */
/* WARNING: Removing unreachable block (ram,0x0001002623b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_100261d54(ulong param_1,undefined8 param_2,char *param_3)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  char *pcVar9;
  Hasher into;
  Date DVar10;
  UUID UVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  char *pcVar15;
  char *pcVar16;
  long extraout_x8;
  long extraout_x8_00;
  long lVar17;
  long extraout_x8_01;
  long lVar18;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  ulong uVar19;
  long in_x12;
  long extraout_x12;
  long extraout_x12_00;
  undefined **in_x16;
  Hasher unaff_x19;
  undefined8 uVar20;
  undefined8 uVar21;
  byte *unaff_x20;
  undefined8 *puVar22;
  undefined *puVar23;
  undefined8 uVar24;
  code *pcVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 *unaff_x29;
  undefined8 *puVar31;
  undefined8 unaff_x30;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  String SVar50;
  String SVar51;
  String SVar52;
  undefined8 *in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined1 auStack_e0 [64];
  char *pcStack_a0;
  long lStack_78;
  undefined1 auStack_70 [24];
  
  pcVar15 = (char *)0xe200000000000000;
  into.unknown = &DAT_00006469;
  pcVar16 = (char *)(param_1 & 0xff);
  pcVar9 = pcVar15;
  puVar31 = unaff_x29;
  switch(pcVar16) {
  default:
    pcVar15 = (char *)0xe400000000000000;
  case (char *)0x2a:
  case (char *)0x30:
  case (char *)0x38:
  case (char *)0x48:
  case (char *)0x50:
  case (char *)0x70:
  case (char *)0x7e:
  case (char *)0xb6:
  case (char *)0xd0:
  case (char *)0xde:
  case (char *)0xf8:
    into.unknown = (undefined1 *)0x656d616e;
  case (char *)0x6e:
  case (char *)0x96:
  case (char *)0x98:
  case (char *)0xce:
  case (char *)0xf6:
    auVar32._8_8_ = pcVar15;
    auVar32._0_8_ = into.unknown;
    return auVar32;
  case (char *)0x2:
    pcVar15 = (char *)0xe900000000000074;
  case (char *)0x42:
  case (char *)0x5a:
    into.unknown = (undefined1 *)0x7263;
  case (char *)0x88:
    auVar37._0_8_ = (ulong)into.unknown | 0x4164657461650000;
    auVar37._8_8_ = pcVar15;
    return auVar37;
  case (char *)0x3:
    auVar38._8_8_ = 0xe400000000000000;
    auVar38._0_8_ = 0x65646f6d;
    return auVar38;
  case (char *)0x4:
    pcVar15 = (char *)0xe500000000000000;
    into.unknown = (undefined1 *)0x6d657469;
  case (char *)0x18:
  case (char *)0x20:
  case (char *)0x62:
  case (char *)0x76:
  case (char *)0x8a:
  case (char *)0x9e:
  case (char *)0xa6:
  case (char *)0xae:
  case (char *)0xc2:
  case (char *)0xd6:
  case (char *)0xea:
  case (char *)0xfe:
    auVar34._0_8_ = (ulong)into.unknown | 0x7300000000;
    auVar34._8_8_ = pcVar15;
    return auVar34;
  case (char *)0x5:
    auVar40._8_8_ = 0xe600000000000000;
    auVar40._0_8_ = 0x676e696d6974;
    return auVar40;
  case (char *)0x6:
    pcVar15 = (char *)0x676e69;
  case (char *)0x85:
  case (char *)0xbd:
    pcVar15 = (char *)((ulong)pcVar15 & 0xffffffffffff | 0xeb00000000000000);
  case (char *)0xe5:
    into.unknown = (undefined1 *)0x6867696e;
  case (char *)0x60:
    auVar41._0_8_ = (ulong)into.unknown | 0x6d69547400000000;
    auVar41._8_8_ = pcVar15;
    return auVar41;
  case (char *)0x7:
    pcVar15 = (char *)0xe800000000000000;
    into.unknown = (undefined1 *)0x53796164;
  case (char *)0xe4:
    into.unknown = into.unknown | 0x617400000000;
  case (char *)0x74:
    auVar39._0_8_ = (ulong)into.unknown | 0x7472000000000000;
    auVar39._8_8_ = pcVar15;
    return auVar39;
  case (char *)0x8:
    auVar43._8_8_ = 0xea00000000007472;
    auVar43._0_8_ = 0x617453746867696e;
    return auVar43;
  case (char *)0x9:
    auVar36._8_8_ = 0xe500000000000000;
    auVar36._0_8_ = 0x73746f6c73;
    return auVar36;
  case (char *)0xa:
  case (char *)0xc4:
    auVar42._8_8_ = 0xe800000000000000;
    auVar42._0_8_ = 0x7344496f65646976;
    return auVar42;
  case (char *)0xb:
  case (char *)0xaa:
    pcVar15 = (char *)0x44496f65;
  case (char *)0xa2:
    pcVar15 = (char *)((ulong)pcVar15 | 0x7300000000);
  case (char *)0x28:
    pcVar15 = (char *)((ulong)pcVar15 & 0xffffffffffff | 0xed00000000000000);
    into.unknown = (undefined1 *)0x696e;
  case (char *)0xc0:
    into.unknown = into.unknown | 0x567468670000;
  case (char *)0xa0:
    auVar33._0_8_ = (ulong)into.unknown | 0x6469000000000000;
    auVar33._8_8_ = pcVar15;
    return auVar33;
  case (char *)0xc:
    into.unknown = (undefined1 *)0x61447369;
  case (char *)0x86:
  case (char *)0xbe:
  case (char *)0xe6:
  case (char *)0xec:
    into.unknown = into.unknown | 0x4e7900000000;
  case (char *)0x9c:
  case (char *)0xa4:
  case (char *)0xac:
    into.unknown = into.unknown | 0x6769000000000000;
    pcVar15 = (char *)0xea00000000007468;
  case (char *)0x0:
  case (char *)0xb0:
    auVar35._8_8_ = pcVar15;
    auVar35._0_8_ = into.unknown;
    return auVar35;
  case (char *)0xd:
    Swift::Hasher::init(0);
    FUN_100261d54();
    into.unknown = &stack0x00000008;
    pcVar9 = unaff_x19.unknown;
    param_3 = pcVar15;
    unaff_x19.unknown = pcVar15;
  case (char *)0x79:
    pcVar15 = pcVar9;
    SVar51.bridgeObject = param_3;
    SVar51.str = pcVar15;
    Swift::String::hash(into,SVar51);
    _swift_bridgeObjectRelease();
    into.unknown = (undefined *)Swift::Hasher::_finalize(unaff_x19);
  case (char *)0xf:
    auVar44._8_8_ = pcVar15;
    auVar44._0_8_ = into.unknown;
    return auVar44;
  case (char *)0x12:
    param_3 = &DAT_00006469;
    unaff_x20 = (byte *)0xe200000000000000;
    into.unknown = unaff_x19.unknown;
  case (char *)0xe:
  case (char *)0x11:
    SVar52.bridgeObject = unaff_x20;
    SVar52.str = param_3;
    Swift::String::hash(into,SVar52);
    _swift_bridgeObjectRelease(unaff_x20);
    auVar45._8_8_ = param_3;
    auVar45._0_8_ = unaff_x20;
    return auVar45;
  case (char *)0x13:
  case (char *)0xd9:
    register0x00000008 = (BADSPACEBASE *)auStack_70;
  case (char *)0x14:
  case (char *)0x8c:
    *(byte **)((long)register0x00000008 + 0x50) = unaff_x20;
    *(undefined **)((long)register0x00000008 + 0x58) = unaff_x19.unknown;
    *(undefined8 **)((long)register0x00000008 + 0x60) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + 0x68) = unaff_x30;
    unaff_x19.unknown = (char *)(ulong)*unaff_x20;
  case (char *)0x10:
    param_3 = unaff_x19.unknown;
    Swift::Hasher::init(0x6469);
    FUN_100261d54();
    into.unknown = (undefined *)((long)register0x00000008 + 8);
    unaff_x19.unknown = pcVar15;
  case (char *)0x2f:
    SVar50.bridgeObject = unaff_x19.unknown;
    SVar50.str = param_3;
    Swift::String::hash(into,SVar50);
    _swift_bridgeObjectRelease();
    auVar46._0_8_ = Swift::Hasher::_finalize(unaff_x19);
    auVar46._8_8_ = param_3;
    return auVar46;
  case (char *)0x2c:
  case (char *)0x2d:
  case (char *)0x2e:
  case (char *)0x7b:
  case (char *)0xb3:
  case (char *)0xdb:
    goto switchD_100261d78_caseD_2c;
  case (char *)0x5c:
  case (char *)0x65:
  case (char *)0x8d:
  case (char *)0xc5:
  case (char *)0xed:
    break;
  case (char *)0x78:
  case (char *)0x84:
    into.unknown = _DAT_00006469;
    pcVar15 = _DAT_00006471;
    FUN_1002685c4(_DAT_00006469,_DAT_00006471);
    unaff_x19.unknown = pcVar16;
  case (char *)0xa8:
    *unaff_x19.unknown = (char)into.unknown;
    auVar47._8_8_ = pcVar15;
    auVar47._0_8_ = into.unknown;
    return auVar47;
  case (char *)0xa1:
    into.unknown = (undefined *)(ulong)*unaff_x20;
    FUN_100261d54();
    unaff_x19.unknown = pcVar16;
  case (char *)0xd5:
  case (char *)0xe9:
  case (char *)0xfd:
    *(undefined **)unaff_x19.unknown = into.unknown;
    *(char **)(unaff_x19.unknown + 8) = pcVar15;
  case (char *)0x61:
  case (char *)0x64:
  case (char *)0x75:
  case (char *)0x89:
  case (char *)0x9d:
  case (char *)0xa5:
  case (char *)0xad:
  case (char *)0xc1:
    auVar48._8_8_ = pcVar15;
    auVar48._0_8_ = into.unknown;
    return auVar48;
  case (char *)0xb1:
    puVar31 = &stack0x00000050;
    register0x00000008 = (BADSPACEBASE *)auStack_e0;
    unaff_x20 = &DAT_00006469;
    lVar17 = 0;
    in_stack_00000050 = unaff_x29;
    in_stack_00000058 = unaff_x30;
    pcStack_a0 = pcVar16;
    FUN_100266c40();
    pcVar16 = *(char **)(lVar17 + -8);
    lStack_78 = lVar17;
  case (char *)0xbc:
  case (char *)0xd8:
    puVar31[-0x1f] = pcVar16;
    pcVar16 = *(char **)(pcVar16 + 0x40);
  case (char *)0xa9:
    (*(code *)PTR____chkstk_darwin_100521118)(pcVar16);
    register0x00000008 =
         (BADSPACEBASE *)((long)register0x00000008 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    puVar31[-0x20] = register0x00000008;
    in_x16 = (undefined **)PTR____chkstk_darwin_100521118;
  case (char *)0x7a:
  case (char *)0xb2:
  case (char *)0xda:
    (*(code *)in_x16)();
    pcVar16 = (char *)register0x00000008;
    in_x12 = extraout_x12;
  case (char *)0xfc:
    register0x00000008 = (BADSPACEBASE *)(pcVar16 + -in_x12);
    puVar31[-0x21] = register0x00000008;
    puVar14 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    pcVar16 = *(char **)(*(long *)(puVar14 + -8) + 0x40);
  case (char *)0xe8:
    (*(code *)PTR____chkstk_darwin_100521118)(pcVar16);
    register0x00000008 =
         (BADSPACEBASE *)((long)register0x00000008 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
    puVar31[-0x1d] = register0x00000008;
    in_x16 = &PTR__NSAppleScriptErrorBriefMessage_100521000;
  case (char *)0x44:
    in_x16 = (undefined **)in_x16[0x23];
  case (char *)0xd4:
    (*(code *)in_x16)();
    in_x12 = extraout_x12_00;
  }
  pcVar16 = (char *)register0x00000008;
switchD_100261d78_caseD_2c:
  puVar31[-0x1b] = (long)pcVar16 - in_x12;
  DVar10 = Foundation::Date::typeMetadataAccessor();
  lVar17 = *(long *)(DVar10.unknown + -8);
  puVar31[-0xf] = lVar17;
  puVar31[-0xe] = DVar10.unknown;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar17 + 0x40));
  lVar18 = ((long)pcVar16 - in_x12) - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar31[-0x1c] = lVar18;
  UVar11 = Foundation::UUID::typeMetadataAccessor();
  puVar31[-0x11] = UVar11.unknown;
  lVar17 = *(long *)(UVar11.unknown + -8);
  puVar31[-0x13] = lVar17;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar17 + 0x40));
  lVar18 = lVar18 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  puVar31[-0x1a] = lVar18;
  puVar14 = &DAT_1005580f8;
  FUN_100002f94(&DAT_1005580f8,&DAT_10042c4c8);
  lVar17 = *(long *)(puVar14 + -8);
  puVar31[-0x18] = lVar17;
  puVar31[-0x17] = puVar14;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = lVar18 - extraout_x8_03;
  lVar17 = 0;
  FUN_10025ee04();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar17 + -8) + 0x40));
  lVar28 = lVar18 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  Foundation::UUID::init();
  puVar31[-0x10] = (long)*(int *)(lVar17 + 0x18);
  Foundation::Date::init();
  iVar2 = *(int *)(lVar17 + 0x24);
  *(undefined1 *)(lVar28 + iVar2) = 1;
  iVar3 = *(int *)(lVar17 + 0x28);
  *(undefined1 *)(lVar28 + iVar3) = 1;
  iVar4 = *(int *)(lVar17 + 0x2c);
  *(undefined8 *)(lVar28 + iVar4) = 0x1a4;
  iVar5 = *(int *)(lVar17 + 0x30);
  *(undefined8 *)(lVar28 + iVar5) = 0x474;
  puVar31[-0x16] = lVar17;
  iVar6 = *(int *)(lVar17 + 0x34);
  puVar31[-0x12] = lVar28;
  *(undefined **)(lVar28 + iVar6) = PTR___swiftEmptyArrayStorage_100524190;
  uVar20 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar31[-0x14] = unaff_x20;
  FUN_100007bd0(unaff_x20,uVar20);
  FUN_100266c54();
  lVar17 = puVar31[-0x15];
  Swift::Decoder::_container();
  if (lVar17 == 0) {
    puVar31[-0x15] = (long)iVar2;
    puVar31[-0x22] = (long)iVar3;
    puVar31[-0x23] = (long)iVar4;
    puVar31[-0x24] = (long)iVar5;
    puVar31[-0x25] = (long)iVar6;
    lVar27 = puVar31[-0x19];
    *(undefined1 *)(puVar31 + -0xd) = 0;
    puVar14 = &DAT_100558108;
    FUN_1000036d0(&DAT_100558108,PTR_typeMetadataAccessor_100520bd8,
                  PTR_Foundation__Foundation__UUID_>Swift__Decodable_100520c00);
    uVar20 = puVar31[-0x1a];
    uVar30 = puVar31[-0x11];
    uVar29 = puVar31[-0x17];
    Swift::KeyedDecodingContainer::_decode(uVar20,uVar30,puVar31 + -0xd,uVar29,uVar30,puVar14);
    lVar17 = puVar31[-0x13];
    lVar28 = puVar31[-0x12];
    (**(code **)(lVar17 + 0x28))(lVar28,uVar20,uVar30);
    *(undefined1 *)(puVar31 + -0xd) = 1;
    SVar50 = Swift::KeyedDecodingContainer::_decode(puVar31 + -0xd,uVar29);
    *(String *)(lVar28 + *(int *)(puVar31[-0x16] + 0x14)) = SVar50;
    *(undefined1 *)(puVar31 + -0xd) = 2;
    puVar14 = &DAT_100558e30;
    FUN_1000036d0(&DAT_100558e30,PTR_typeMetadataAccessor_100520b80,
                  PTR_Foundation__Foundation__Date_>Swift__Decodable_100520bb0);
    uVar20 = puVar31[-0x1b];
    uVar24 = puVar31[-0xe];
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (uVar20,uVar24,puVar31 + -0xd,uVar29,uVar24,puVar14);
    puVar31[-0x1a] = 0;
    uVar21 = puVar31[-0x1d];
    FUN_100007e1c(uVar20,uVar21,&DAT_10054b950,&DAT_10041d870);
    lVar26 = puVar31[-0xf];
    pcVar25 = *(code **)(lVar26 + 0x30);
    puVar31[-0x1b] = pcVar25;
    uVar20 = uVar21;
    (*pcVar25)(uVar21,1,uVar24);
    if ((int)uVar20 == 1) {
      Foundation::Date::init();
      uVar20 = uVar21;
      (*(code *)puVar31[-0x1b])(uVar21,1,uVar24);
      if ((int)uVar20 != 1) {
        FUN_10002a29c(uVar21,&DAT_10054b950,&DAT_10041d870);
      }
    }
    else {
      (**(code **)(lVar26 + 0x20))(puVar31[-0x1c],uVar21,uVar24);
    }
    (**(code **)(lVar26 + 0x28))(lVar28 + puVar31[-0x10],puVar31[-0x1c],uVar24);
    puVar14 = &DAT_100558110;
    FUN_100002f94(&DAT_100558110,&DAT_10042c4d0);
    *(undefined1 *)(puVar31 + -9) = 4;
    puVar23 = &DAT_100558118;
    FUN_100266e20(&DAT_100558118,&DAT_100558120,&TargetProtocolConformanceDescriptor_10042cd50,
                  PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100523b58);
    lVar26 = puVar31[-0x1a];
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (puVar31 + -0xd,puVar14,puVar31 + -9,uVar29,puVar14,puVar23);
    if (lVar26 == 0) {
      puVar31[-0x1a] = lVar18;
      lVar17 = (long)*(int *)(puVar31[-0x16] + 0x1c);
      lVar18 = (long)*(int *)(puVar31[-0x16] + 0x20);
      if (puVar31[-0xd] == 0) {
        puVar31[-0x15] = lVar17;
        puVar14 = &DAT_100553858;
        FUN_100002f94(&DAT_100553858,&DAT_100429e10);
        *(undefined1 *)(puVar31 + -9) = 10;
        puVar23 = &DAT_100558128;
        FUN_100266f2c(&DAT_100558128,
                      PTR___protocol_witness_table_for_Swift_String___Swift_Decodable_in_Swift_100523ac0
                      ,PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100523b58);
        uVar20 = puVar31[-0x17];
        Swift::KeyedDecodingContainer::_decodeIfPresent
                  (puVar31 + -0xd,puVar14,puVar31 + -9,uVar20,puVar14,puVar23);
        puVar31[-0x1b] = lVar18;
        puVar13 = PTR___swiftEmptyArrayStorage_100524190;
        if ((undefined *)puVar31[-0xd] != (undefined *)0x0) {
          puVar13 = (undefined *)puVar31[-0xd];
        }
        *(undefined1 *)(puVar31 + -9) = 0xb;
        Swift::KeyedDecodingContainer::_decodeIfPresent
                  (puVar31 + -0xd,puVar14,puVar31 + -9,uVar20,puVar14,puVar23);
        puVar31[-0x1c] = puVar13;
        puVar14 = PTR___swiftEmptyArrayStorage_100524190;
        if ((undefined *)puVar31[-0xd] != (undefined *)0x0) {
          puVar14 = (undefined *)puVar31[-0xd];
        }
        *(undefined1 *)(puVar31 + -0xd) = 0xc;
        puVar12 = puVar31 + -0xd;
        Swift::KeyedDecodingContainer::_decodeIfPresent(puVar12,uVar20);
        puVar31[-0xe] = puVar14;
        puVar31[-9] = PTR___swiftEmptySetSingleton_1005241a0;
        lVar17 = *(long *)(puVar31[-0x1c] + 0x10);
        *(int *)(puVar31 + -0x1d) = (int)puVar12;
        puVar14 = PTR___swiftEmptyArrayStorage_100524190;
        if (lVar17 == 0) {
          lVar18 = puVar31[-0x1b];
        }
        else {
          puVar12 = (undefined8 *)(puVar31[-0x1c] + 0x28);
          lVar18 = puVar31[-0x1b];
          do {
            uVar20 = puVar12[-1];
            uVar21 = *puVar12;
            _swift_bridgeObjectRetain_n(uVar21,2);
            puVar22 = puVar31 + -0xd;
            FUN_1001ca054(puVar22,uVar20,uVar21);
            _swift_bridgeObjectRelease(puVar31[-0xc]);
            if (((ulong)puVar22 & 1) == 0) {
              _swift_bridgeObjectRelease(uVar21);
            }
            else {
              puVar22 = (undefined8 *)puVar31[-0x21];
              (**(code **)(puVar31[-0x13] + 0x38))
                        ((long)puVar22 + (long)*(int *)(lVar27 + 0x18),1,1,puVar31[-0x11]);
              *puVar22 = uVar20;
              puVar22[1] = uVar21;
              *(undefined1 *)(puVar22 + 2) = 0;
              *(undefined1 *)((long)puVar22 + (long)*(int *)(lVar27 + 0x1c)) = 2;
              puVar23 = puVar14;
              _swift_isUniquelyReferenced_nonNull_native();
              puVar13 = puVar14;
              if (((ulong)puVar23 & 1) == 0) {
                puVar13 = (undefined *)0x0;
                FUN_1001c4b68(0,*(long *)(puVar14 + 0x10) + 1,1,puVar14);
              }
              lVar28 = puVar31[-0x1f];
              uVar1 = *(ulong *)(puVar13 + 0x10);
              puVar14 = puVar13;
              if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar1) {
                puVar14 = (undefined *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
                FUN_1001c4b68(puVar14,uVar1 + 1,1,puVar13);
              }
              *(ulong *)(puVar14 + 0x10) = uVar1 + 1;
              uVar19 = (ulong)*(byte *)(lVar28 + 0x50);
              FUN_100007e64(puVar31[-0x21],
                            puVar14 + *(long *)(lVar28 + 0x48) * uVar1 +
                                      (uVar19 + 0x20 & (uVar19 ^ 0xffffffffffffffff)),FUN_100266c40)
              ;
            }
            puVar12 = puVar12 + 2;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
        }
        _swift_bridgeObjectRelease(puVar31[-0x1c]);
        lVar17 = *(long *)(puVar31[-0xe] + 0x10);
        if (lVar17 == 0) {
          uVar20 = puVar31[-0x1e];
        }
        else {
          puVar12 = (undefined8 *)(puVar31[-0xe] + 0x28);
          do {
            uVar20 = puVar12[-1];
            uVar21 = *puVar12;
            _swift_bridgeObjectRetain_n(uVar21,2);
            puVar22 = puVar31 + -0xd;
            FUN_1001ca054(puVar22,uVar20,uVar21);
            _swift_bridgeObjectRelease(puVar31[-0xc]);
            if (((ulong)puVar22 & 1) == 0) {
              _swift_bridgeObjectRelease(uVar21);
              uVar20 = puVar31[-0x1e];
            }
            else {
              puVar22 = (undefined8 *)puVar31[-0x20];
              (**(code **)(puVar31[-0x13] + 0x38))
                        ((long)puVar22 + (long)*(int *)(lVar27 + 0x18),1,1,puVar31[-0x11]);
              *puVar22 = uVar20;
              puVar22[1] = uVar21;
              *(undefined1 *)(puVar22 + 2) = 1;
              *(undefined1 *)((long)puVar22 + (long)*(int *)(lVar27 + 0x1c)) = 2;
              puVar23 = puVar14;
              _swift_isUniquelyReferenced_nonNull_native();
              puVar13 = puVar14;
              if (((ulong)puVar23 & 1) == 0) {
                puVar13 = (undefined *)0x0;
                FUN_1001c4b68(0,*(long *)(puVar14 + 0x10) + 1,1,puVar14);
              }
              uVar20 = puVar31[-0x1e];
              uVar1 = *(ulong *)(puVar13 + 0x10);
              puVar14 = puVar13;
              if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar1) {
                puVar14 = (undefined *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
                FUN_1001c4b68(puVar14,uVar1 + 1,1,puVar13);
              }
              *(ulong *)(puVar14 + 0x10) = uVar1 + 1;
              uVar19 = (ulong)*(byte *)(puVar31[-0x1f] + 0x50);
              FUN_100007e64(puVar31[-0x20],
                            puVar14 + *(long *)(puVar31[-0x1f] + 0x48) * uVar1 +
                                      (uVar19 + 0x20 & (uVar19 ^ 0xffffffffffffffff)),FUN_100266c40)
              ;
            }
            puVar12 = puVar12 + 2;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
        }
        _swift_bridgeObjectRelease(puVar31[-0xe]);
        _swift_bridgeObjectRelease(puVar31[-9]);
        (**(code **)(puVar31[-0x18] + 8))(puVar31[-0x1a],puVar31[-0x17]);
        puVar23 = (undefined *)puVar31[-0x12];
        *(undefined **)(puVar23 + lVar18) = puVar14;
        puVar23[puVar31[-0x15]] = (byte)*(undefined4 *)(puVar31 + -0x1d) & 1;
      }
      else {
        *(undefined8 *)(lVar28 + lVar18) = puVar31[-0xd];
        *(undefined1 *)(puVar31 + -9) = 3;
        FUN_100266c94();
        puVar23 = &DAT_100535e50;
        uVar20 = puVar31[-0x17];
        Swift::KeyedDecodingContainer::_decodeIfPresent
                  (puVar31 + -0xd,&DAT_100535e50,puVar31 + -9,uVar20,&DAT_100535e50,puVar14);
        cVar7 = '\0';
        if (*(char *)(puVar31 + -0xd) != '\x04') {
          cVar7 = *(char *)(puVar31 + -0xd);
        }
        *(char *)(lVar28 + lVar17) = cVar7;
        *(undefined1 *)(puVar31 + -9) = 5;
        FUN_100266cd4();
        Swift::KeyedDecodingContainer::_decodeIfPresent
                  (puVar31 + -0xd,&DAT_100535dc0,puVar31 + -9,uVar20,&DAT_100535dc0,puVar23);
        cVar7 = *(char *)(puVar31 + -0xd);
        if (cVar7 == '\x02') {
          cVar7 = '\x01';
        }
        *(char *)(lVar28 + puVar31[-0x15]) = cVar7;
        *(undefined1 *)(puVar31 + -9) = 6;
        puVar14 = &DAT_100535dc0;
        Swift::KeyedDecodingContainer::_decodeIfPresent
                  (puVar31 + -0xd,&DAT_100535dc0,puVar31 + -9,uVar20,&DAT_100535dc0,puVar23);
        if (*(char *)(puVar31 + -0xd) != '\x02') {
          cVar7 = *(char *)(puVar31 + -0xd);
        }
        *(char *)(puVar31[-0x12] + puVar31[-0x22]) = cVar7;
        *(undefined1 *)(puVar31 + -9) = 7;
        FUN_100266d14();
        Swift::KeyedDecodingContainer::_decodeIfPresent
                  (puVar31 + -0xd,&DAT_100535f00,puVar31 + -9,uVar20,&DAT_100535f00,puVar14);
        uVar21 = 0x1a4;
        if (*(char *)(puVar31 + -0xc) != '\x01') {
          uVar21 = puVar31[-0xd];
        }
        *(undefined8 *)(puVar31[-0x12] + puVar31[-0x23]) = uVar21;
        *(undefined1 *)(puVar31 + -9) = 8;
        Swift::KeyedDecodingContainer::_decodeIfPresent
                  (puVar31 + -0xd,&DAT_100535f00,puVar31 + -9,uVar20,&DAT_100535f00,puVar14);
        uVar21 = 0x474;
        if (*(char *)(puVar31 + -0xc) != '\x01') {
          uVar21 = puVar31[-0xd];
        }
        *(undefined8 *)(puVar31[-0x12] + puVar31[-0x24]) = uVar21;
        puVar14 = &DAT_100558148;
        FUN_100002f94(&DAT_100558148,&DAT_10042c4d8);
        *(undefined1 *)(puVar31 + -9) = 9;
        puVar23 = &DAT_100558150;
        FUN_100266d54(&DAT_100558150,&DAT_100558158,&TargetProtocolConformanceDescriptor_10042ccb0,
                      PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100523b58);
        Swift::KeyedDecodingContainer::_decodeIfPresent
                  (puVar31 + -0xd,puVar14,puVar31 + -9,uVar20,puVar14,puVar23);
        puVar14 = PTR___swiftEmptyArrayStorage_100524190;
        if ((undefined *)puVar31[-0xd] != (undefined *)0x0) {
          puVar14 = (undefined *)puVar31[-0xd];
        }
        (**(code **)(puVar31[-0x18] + 8))(puVar31[-0x1a],puVar31[-0x17]);
        puVar23 = (undefined *)puVar31[-0x12];
        *(undefined **)(puVar23 + puVar31[-0x25]) = puVar14;
        uVar20 = puVar31[-0x1e];
      }
      pcVar25 = FUN_10025ee04;
      FUN_100029504(puVar23,uVar20,FUN_10025ee04);
      FUN_100043f24(puVar31[-0x14]);
      FUN_100029548(puVar23,FUN_10025ee04);
      goto LAB_100262424;
    }
    (**(code **)(puVar31[-0x18] + 8))(lVar18,uVar29);
    bVar8 = true;
  }
  else {
    uVar30 = puVar31[-0x11];
    bVar8 = false;
    lVar17 = puVar31[-0x13];
    lVar28 = puVar31[-0x12];
  }
  puVar23 = PTR___swiftEmptyArrayStorage_100524190;
  pcVar25 = (code *)puVar31[-0xe];
  FUN_100043f24(puVar31[-0x14]);
  (**(code **)(lVar17 + 8))(lVar28,uVar30);
  if (bVar8) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar28 + *(int *)(puVar31[-0x16] + 0x14) + 8));
  }
  (**(code **)(puVar31[-0xf] + 8))(lVar28 + puVar31[-0x10],pcVar25);
  _swift_bridgeObjectRelease(puVar23);
LAB_100262424:
  auVar49._8_8_ = pcVar25;
  auVar49._0_8_ = puVar23;
  return auVar49;
}

