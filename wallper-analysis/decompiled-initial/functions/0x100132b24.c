// rea decompile_all
// name: FUN_100132b24
// address: 0x100132b24
// body: available
// range: 0x100132b24-0x100132dd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100132d04) */
/* WARNING: Removing unreachable block (ram,0x000100132d80) */
/* WARNING: Removing unreachable block (ram,0x000100132d94) */
/* WARNING: Removing unreachable block (ram,0x000100132c70) */

void FUN_100132b24(undefined8 param_1,long param_2)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x21;
  long lVar5;
  void *pvVar6;
  String *pSVar7;
  long lVar8;
  String SVar9;
  String SStack_a0;
  undefined8 local_90;
  undefined *local_88;
  long local_80;
  undefined *local_78;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  local_90 = param_1;
  local_88 = (undefined *)Foundation::URL::typeMetadataAccessor();
  pvVar6 = *(void **)(local_88 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)((long)pvVar6 + 0x40));
  lVar8 = (long)&SStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100554478;
  FUN_100002f94(&DAT_100554478,&DAT_100427230);
  lVar5 = *(long *)(puVar2 + -8);
  local_78 = puVar2;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  FUN_100137890();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  pSVar7 = (String *)((lVar8 - extraout_x8_00) - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  FUN_100007bd0(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_1001387a4();
  local_80 = lVar8 - extraout_x8_00;
  Swift::Decoder::_container();
  puVar2 = local_88;
  if (unaff_x21 == 0) {
    local_51 = 0;
    SVar9 = Swift::KeyedDecodingContainer::_decode(&local_51,local_78);
    *pSVar7 = SVar9;
    local_52 = 1;
    puVar4 = &DAT_100553228;
    FUN_1000036d0(&DAT_100553228,PTR_typeMetadataAccessor_100520a18,
                  PTR_Foundation__Foundation__URL_>Swift__Decodable_100520a40);
    Swift::KeyedDecodingContainer::_decode(lVar8,puVar2,&local_52,local_78,puVar2,puVar4);
    SStack_a0.bridgeObject = pvVar6;
    (**(code **)((long)pvVar6 + 0x20))
              ((long)&pSVar7->str + (long)*(int *)(lVar3 + 0x14),lVar8,puVar2);
    puVar2 = local_78;
    lVar8 = local_80;
    local_53 = 2;
    bVar1 = Swift::KeyedDecodingContainer::_decode(&local_53,local_78);
    (**(code **)(lVar5 + 8))(lVar8,puVar2);
    *(bool *)((long)&pSVar7->str + (long)*(int *)(lVar3 + 0x18)) = bVar1;
    FUN_1001387e4(pSVar7,local_90);
    FUN_100043f24(param_2);
    FUN_100074250(pSVar7);
  }
  else {
    FUN_100043f24(param_2);
  }
  return;
}

