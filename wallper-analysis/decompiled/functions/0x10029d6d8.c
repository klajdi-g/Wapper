// rea decompile_all
// name: FUN_10029d6d8
// address: 0x10029d6d8
// body: available
// range: 0x10029d6d8-0x10029dc5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10029d6d8(undefined8 param_1,double param_2,double param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  code *pcVar6;
  bool bVar7;
  URL UVar8;
  SHA256Digest SVar9;
  SHA256 SVar10;
  undefined *puVar11;
  URL UVar12;
  char *pcVar13;
  undefined *puVar14;
  char *pcVar15;
  void *pvVar16;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  undefined1 auStack_e0 [8];
  undefined8 local_d8;
  undefined1 *local_d0;
  long lStack_c8;
  char *local_c0;
  undefined *local_b8;
  char *local_b0;
  long local_a8;
  long local_a0;
  undefined8 uStack_98;
  String local_90;
  undefined *local_80;
  undefined7 extraout_var;
  
  UVar8 = Foundation::URL::typeMetadataAccessor();
  lVar18 = *(long *)(UVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar18 + 0x40));
  SVar9 = CryptoKit::SHA256Digest::typeMetadataAccessor();
  local_a0 = *(long *)(SVar9.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_a0 + 0x40));
  lVar19 = (long)(auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  SVar10 = CryptoKit::SHA256::typeMetadataAccessor();
  local_b0 = *(char **)(SVar10.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_b0 + 0x40));
  lVar20 = lVar19 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar11 = &DAT_100559c70;
  FUN_100002f94(&DAT_100559c70,&DAT_10042de78);
  UVar12.unknown = puVar11;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_a8 = lVar20 - extraout_x8_02;
  UVar12.unknown._0_1_ = Foundation::URL::get_isFileURL(UVar12);
  UVar12.unknown._1_7_ = extraout_var;
  if (((!UVar12.unknown._0_1_) || (param_2 < 1.0)) || (param_3 < 1.0)) {
                    /* WARNING: Could not recover jumptable at 0x00010029da6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar18 + 0x38))(param_1,1,1,UVar8.unknown);
    return;
  }
  local_d8 = param_1;
  local_d0 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_c8 = lVar18;
  local_c0 = (char *)UVar8;
  SVar21 = Foundation::URL::get_path(UVar12);
  FUN_100284930(SVar21.str,SVar21.bridgeObject);
  pvVar16 = SVar21.bridgeObject;
  pcVar13 = SVar21.str;
  FUN_1000036d0(&DAT_1005552d0,PTR_typeMetadataAccessor_100521940,
                PTR_CryptoKit__CryptoKit__SHA256_>CryptoKit__HashFunction_100521938);
  CryptoKit::HashFunction::init();
  FUN_10011a30c(pcVar13,pvVar16);
  FUN_100161b9c(pcVar13,pvVar16,lVar20);
  FUN_100093624(pcVar13,pvVar16);
  lVar18 = local_a8;
  local_b8 = SVar9.unknown;
  CryptoKit::HashFunction::_finalize();
  FUN_100093624(pcVar13,pvVar16);
  (**(code **)(local_b0 + 8))(lVar20,SVar10.unknown);
  *(undefined8 *)(lVar18 + *(int *)(puVar11 + 0x24)) = 5;
  local_80 = PTR___swiftEmptyArrayStorage_100524190;
  FUN_1001c5bc4(0,0,0);
  puVar17 = local_80;
  (**(code **)(local_a0 + 0x10))(lVar19,lVar18,local_b8);
  FUN_1000036d0(&DAT_1005552f0,PTR_typeMetadataAccessor_1005218f8,
                PTR_CryptoKit__CryptoKit__SHA256Digest_>Swift__Sequence_100521908);
  Swift::Sequence::_makeIterator();
  puVar3 = PTR___protocol_witness_table_for_Swift_UInt8___Swift_CVarArg_in_Swift_100524098;
  puVar11 = PTR___type_metadata_for_Swift_UInt8_100524090;
  pcVar13 = local_90.str;
  lVar18 = -5;
  uStack_98 = 2;
  local_a0 = 1;
  pvVar16 = local_90.bridgeObject;
  do {
    if (pvVar16 == (void *)*(ulong *)((long)pcVar13 + 0x10)) break;
    if (*(ulong *)((long)pcVar13 + 0x10) <= pvVar16) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10029dc3c);
      (*pcVar6)();
    }
    uVar2 = *(undefined1 *)((long)pcVar13 + (long)pvVar16 + 0x20);
    puVar14 = &DAT_10054b500;
    FUN_100002f94(&DAT_10054b500,&DAT_100434890);
    _swift_allocObject();
    *(undefined8 *)(puVar14 + 0x18) = uStack_98;
    *(long *)(puVar14 + 0x10) = local_a0;
    *(undefined **)(puVar14 + 0x38) = puVar11;
    *(undefined **)(puVar14 + 0x40) = puVar3;
    puVar14[0x20] = uVar2;
    SVar21 = (extension_Foundation)::Swift::String::_init();
    uVar1 = *(ulong *)(puVar17 + 0x10);
    local_80 = puVar17;
    if (*(ulong *)(puVar17 + 0x18) >> 1 <= uVar1) {
      local_b0 = SVar21.str;
      FUN_1001c5bc4(1 < *(ulong *)(puVar17 + 0x18),uVar1 + 1,1);
      SVar21.bridgeObject = SVar21.bridgeObject;
      SVar21.str = local_b0;
    }
    *(ulong *)(local_80 + 0x10) = uVar1 + 1;
    *(String *)(local_80 + uVar1 * 0x10 + 0x20) = SVar21;
    pvVar16 = (void *)((long)pvVar16 + 1);
    bVar7 = lVar18 != -1;
    lVar18 = lVar18 + 1;
    puVar17 = local_80;
  } while (bVar7);
  _swift_bridgeObjectRelease(pcVar13);
  FUN_10002a29c(local_a8,&DAT_100559c70,&DAT_10042de78);
  local_90.str = puVar17;
  FUN_100002f94(&DAT_100553858,&DAT_100429e10);
  puVar11 = &DAT_1005546b8;
  FUN_1000087a0(&DAT_1005546b8,&DAT_100553858,&DAT_100429e10,
                PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100523b48);
  SVar21 = (extension_Swift)::Swift::BidirectionalCollection::_joined
                     ((String)(ZEXT816(0xe000000000000000) << 0x40));
  _swift_release(puVar17);
  if (DAT_100559be8 != -1) {
    _swift_once(&DAT_100559be8,FUN_10029d568);
  }
  pcVar13 = local_c0;
  pcVar15 = local_c0;
  FUN_100099338(local_c0,&DAT_100559bf0);
  lVar18 = lStack_c8;
  puVar5 = local_d0;
  UVar12.unknown = pcVar13;
  (**(code **)(lStack_c8 + 0x10))(local_d0,pcVar15);
  SVar22.bridgeObject = (void *)0xe200000000000000;
  SVar22.str = (char *)0x3276;
  SVar25.bridgeObject = puVar11;
  SVar25.str = UVar12.unknown;
  local_90 = SVar21;
  Swift::String::append(SVar22,SVar25);
  SVar23.bridgeObject = (void *)0xe100000000000000;
  SVar23.str = (char *)0x40;
  SVar26.bridgeObject = puVar11;
  SVar26.str = UVar12.unknown;
  Swift::String::append(SVar23,SVar26);
  if (0x7fe < (ulong)param_3 >> 0x34) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10029dc58);
    (*pcVar6)();
  }
  if (param_3 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10029dc5c);
    (*pcVar6)();
  }
  if (param_3 < 9.223372036854776e+18) {
    local_80 = (undefined *)(long)param_3;
    SVar21 = Swift::CustomStringConvertible::get_description();
    SVar27.bridgeObject = puVar11;
    SVar27.str = UVar12.unknown;
    Swift::String::append(SVar21,SVar27);
    _swift_bridgeObjectRelease(SVar21.bridgeObject);
    SVar24.bridgeObject = (void *)0xe400000000000000;
    SVar24.str = (char *)0x34706d2e;
    SVar28.bridgeObject = puVar11;
    SVar28.str = UVar12.unknown;
    Swift::String::append(SVar24,SVar28);
    uVar4 = local_d8;
    pvVar16 = local_90.bridgeObject;
    Foundation::URL::appendingPathComponent(local_90,UVar12);
    _swift_bridgeObjectRelease(pvVar16);
    (**(code **)(lVar18 + 8))(puVar5,pcVar13);
    (**(code **)(lVar18 + 0x38))(uVar4,0,1,pcVar13);
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10029dc60);
  (*pcVar6)();
}

