// rea decompile_all
// name: FUN_100260e48
// address: 0x100260e48
// body: available
// range: 0x100260e48-0x1002611b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001002610e0) */
/* WARNING: Removing unreachable block (ram,0x00010026106c) */
/* WARNING: Removing unreachable block (ram,0x000100261144) */
/* WARNING: Removing unreachable block (ram,0x000100261154) */
/* WARNING: Removing unreachable block (ram,0x000100261158) */
/* WARNING: Removing unreachable block (ram,0x000100260fcc) */

void FUN_100260e48(void *param_1,long param_2)

{
  int iVar1;
  char *pcVar2;
  undefined *puVar3;
  long lVar4;
  UUID UVar5;
  char *pcVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar8;
  long unaff_x21;
  String *pSVar9;
  long lVar10;
  String SVar11;
  String SStack_a0;
  char *local_90;
  long local_88;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar3 = &DAT_10054a9c8;
  SStack_a0.bridgeObject = param_1;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)&SStack_a0 - extraout_x8;
  puVar3 = &DAT_1005584d8;
  FUN_100002f94(&DAT_1005584d8,&DAT_10042ce08);
  lVar10 = *(long *)(puVar3 + -8);
  local_90 = puVar3;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_100266c40();
  lVar8 = lVar4;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  pSVar9 = (String *)((lVar7 - extraout_x8_00) - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  lVar8 = (long)*(int *)(lVar8 + 0x18);
  UVar5 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar5.unknown + -8) + 0x38))((long)&pSVar9->str + lVar8,1,1,UVar5.unknown);
  FUN_100007bd0(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_100268628();
  local_88 = lVar7 - extraout_x8_00;
  Swift::Decoder::_container();
  pcVar2 = local_90;
  if (unaff_x21 == 0) {
    local_51 = 0;
    SVar11 = Swift::KeyedDecodingContainer::_decode(&local_51,local_90);
    pcVar6 = SVar11.str;
    *pSVar9 = SVar11;
    local_53 = 1;
    FUN_100268668();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_52,&DAT_100535ee0,&local_53,pcVar2,&DAT_100535ee0,pcVar6);
    *(undefined1 *)&pSVar9[1].str = local_52;
    local_54 = 2;
    puVar3 = &DAT_100558108;
    FUN_1000036d0(&DAT_100558108,PTR_typeMetadataAccessor_100520bd8,
                  PTR_Foundation__Foundation__UUID_>Swift__Decodable_100520c00);
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (lVar7,UVar5.unknown,&local_54,pcVar2,UVar5.unknown,puVar3);
    FUN_1001d4cf4(lVar7,(long)&pSVar9->str + lVar8);
    local_56 = 3;
    FUN_1002686a8();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_55,&DAT_100535d30,&local_56,pcVar2,&DAT_100535d30,lVar7);
    iVar1 = *(int *)(lVar4 + 0x1c);
    (**(code **)(lVar10 + 8))(local_88,pcVar2);
    *(undefined1 *)((long)&pSVar9->str + (long)iVar1) = local_55;
    FUN_100029504(pSVar9,SStack_a0.bridgeObject,FUN_100266c40);
    FUN_100043f24(param_2);
    FUN_100029548(pSVar9,FUN_100266c40);
  }
  else {
    FUN_100043f24(param_2);
    FUN_10002a29c((long)&pSVar9->str + lVar8,&DAT_10054a9c8,&DAT_10041bbe0);
  }
  return;
}

