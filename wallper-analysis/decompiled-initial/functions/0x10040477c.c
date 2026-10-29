// rea decompile_all
// name: FUN_10040477c
// address: 0x10040477c
// body: available
// range: 0x10040477c-0x100404ca7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100404bd8) */
/* WARNING: Removing unreachable block (ram,0x00010040497c) */
/* WARNING: Removing unreachable block (ram,0x0001004049bc) */
/* WARNING: Removing unreachable block (ram,0x0001004049e8) */
/* WARNING: Removing unreachable block (ram,0x000100404c38) */
/* WARNING: Removing unreachable block (ram,0x000100404910) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001004049b4 */
/* WARNING: Removing unreachable block (ram,0x000100404b74) */
/* WARNING: Removing unreachable block (ram,0x000100404b24) */
/* WARNING: Removing unreachable block (ram,0x0001004049f8) */
/* WARNING: Removing unreachable block (ram,0x000100404a14) */
/* WARNING: Removing unreachable block (ram,0x000100404a0c) */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10040477c(undefined8 param_1,long param_2)

{
  char *pcVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  char *pcVar5;
  void *pvVar6;
  Date DVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long lVar8;
  long unaff_x21;
  long lVar9;
  long lVar10;
  String *pSVar11;
  String SVar12;
  String local_b0;
  String local_a0;
  char *local_90 [2];
  long local_80;
  undefined1 local_62;
  undefined1 local_61;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar3 = &DAT_10054b950;
  local_a0.bridgeObject = (void *)param_1;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  lVar9 = (long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_90[0] = (char *)lVar9;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar9 = lVar9 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar8 = lVar9 - extraout_x12_00;
  puVar3 = &DAT_1005613e0;
  FUN_100002f94(&DAT_1005613e0,&DAT_100437250);
  lVar10 = *(long *)(puVar3 + -8);
  local_90[1] = puVar3;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_1003fdce0();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  pSVar11 = (String *)((lVar8 - extraout_x8_00) - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  FUN_100007bd0(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_10040c680();
  local_80 = lVar8 - extraout_x8_00;
  Swift::Decoder::_container();
  pcVar1 = local_90[1];
  if (unaff_x21 == 0) {
    local_51 = 0;
    SVar12 = Swift::KeyedDecodingContainer::_decode(&local_51,local_90[1]);
    *pSVar11 = SVar12;
    local_52 = 1;
    SVar12 = Swift::KeyedDecodingContainer::_decode(&local_52,pcVar1);
    pSVar11[1] = SVar12;
    local_53 = 2;
    local_a0.str = SVar12.bridgeObject;
    pcVar5 = (char *)Swift::KeyedDecodingContainer::_decode(&local_52,pcVar1);
    pSVar11[2].str = pcVar5;
    local_54 = 3;
    pvVar6 = (void *)Swift::KeyedDecodingContainer::_decode(pcVar5,pcVar1);
    pSVar11[2].bridgeObject = pvVar6;
    DVar7 = Foundation::Date::typeMetadataAccessor();
    local_55 = 4;
    pcVar5 = &DAT_100558e30;
    FUN_1000036d0(&DAT_100558e30,PTR_typeMetadataAccessor_100520b80,
                  PTR_Foundation__Foundation__Date_>Swift__Decodable_100520bb0);
    local_b0.str = pcVar5;
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (lVar8,DVar7.unknown,&local_55,pcVar1,DVar7.unknown);
    FUN_100007e1c(lVar8,(long)&pSVar11->str + (long)*(int *)(lVar4 + 0x20),&DAT_10054b950,
                  &DAT_10041d870);
    local_57 = 5;
    FUN_10014f34c();
    Swift::KeyedDecodingContainer::_decode
              (&local_56,&DAT_10053f180,&local_57,pcVar1,&DAT_10053f180,lVar8);
    *(undefined1 *)((long)&pSVar11->str + (long)*(int *)(lVar4 + 0x24)) = local_56;
    local_58 = 6;
    bVar2 = Swift::KeyedDecodingContainer::_decode(&local_58,pcVar1);
    *(bool *)((long)&pSVar11->str + (long)*(int *)(lVar4 + 0x28)) = bVar2;
    pcVar5 = local_b0.str;
    local_61 = 7;
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (lVar9,DVar7.unknown,&local_61,pcVar1,DVar7.unknown,local_b0.str);
    FUN_100007e1c(lVar9,(long)&pSVar11->str + (long)*(int *)(lVar4 + 0x2c),&DAT_10054b950,
                  &DAT_10041d870);
    pcVar1 = local_90[0];
    local_62 = 8;
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (local_90[0],DVar7.unknown,&local_62,local_90[1],DVar7.unknown,pcVar5);
    (**(code **)(lVar10 + 8))(local_80,local_90[1]);
    FUN_100007e1c(pcVar1,(long)&pSVar11->str + (long)*(int *)(lVar4 + 0x30),&DAT_10054b950,
                  &DAT_10041d870);
    FUN_100029504(pSVar11,local_a0.bridgeObject,FUN_1003fdce0);
    FUN_100043f24(param_2);
    FUN_100029548(pSVar11,FUN_1003fdce0);
  }
  else {
    FUN_100043f24(param_2);
  }
  return;
}

