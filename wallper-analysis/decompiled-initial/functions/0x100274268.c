// rea decompile_all
// name: FUN_100274268
// address: 0x100274268
// body: available
// range: 0x100274268-0x100274583 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100274514) */
/* WARNING: Removing unreachable block (ram,0x000100274490) */
/* WARNING: Removing unreachable block (ram,0x000100274518) */
/* WARNING: Removing unreachable block (ram,0x00010027452c) */
/* WARNING: Removing unreachable block (ram,0x000100274410) */

void FUN_100274268(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x21;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long local_c0 [4];
  undefined8 *local_a0;
  undefined8 local_98;
  undefined *local_90;
  long local_88;
  undefined *local_80;
  undefined1 local_61;
  undefined1 local_58;
  undefined7 uStack_57;
  
  local_98 = param_1;
  local_90 = (undefined *)Foundation::Date::typeMetadataAccessor();
  lVar8 = *(long *)(local_90 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100558e28;
  FUN_100002f94(&DAT_100558e28,&DAT_10042d638);
  lVar9 = *(long *)(puVar3 + -8);
  local_80 = puVar3;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar7 - extraout_x8_00;
  lVar4 = 0;
  FUN_100282f08();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  FUN_100007bd0(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_1002844e4();
  local_88 = lVar10;
  Swift::Decoder::_container();
  puVar3 = local_90;
  if (unaff_x21 == 0) {
    puVar5 = &DAT_100558c48;
    local_c0[1] = lVar4;
    local_c0[2] = lVar8;
    local_c0[3] = lVar7;
    local_a0 = (undefined8 *)(lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
    FUN_100002f94(&DAT_100558c48,&DAT_10042d448);
    local_61 = 0;
    puVar6 = &DAT_100558c50;
    FUN_100284524(&DAT_100558c50,&DAT_100558c58,&TargetProtocolConformanceDescriptor_1004379d0,
                  PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100523b58);
    puVar2 = local_80;
    lVar7 = local_88;
    Swift::KeyedDecodingContainer::_decode(&local_58,puVar5,&local_61,local_80,puVar5,puVar6);
    puVar1 = local_a0;
    *local_a0 = CONCAT71(uStack_57,local_58);
    local_61 = 1;
    Swift::KeyedDecodingContainer::_decode(&local_58,puVar5,&local_61,puVar2,puVar5,puVar6);
    puVar1[1] = CONCAT71(uStack_57,local_58);
    local_58 = 2;
    puVar5 = &DAT_100558e30;
    FUN_1000036d0(&DAT_100558e30,PTR_typeMetadataAccessor_100520b80,
                  PTR_Foundation__Foundation__Date_>Swift__Decodable_100520bb0);
    lVar4 = local_c0[3];
    Swift::KeyedDecodingContainer::_decode(local_c0[3],puVar3,&local_58,puVar2,puVar3,puVar5);
    (**(code **)(lVar9 + 8))(lVar7,puVar2);
    (**(code **)(local_c0[2] + 0x20))
              ((long)puVar1 + (long)*(int *)(local_c0[1] + 0x18),lVar4,puVar3);
    FUN_100029504(puVar1,local_98,FUN_100282f08);
    FUN_100043f24(param_2);
    FUN_100029548(puVar1,FUN_100282f08);
  }
  else {
    FUN_100043f24(param_2);
  }
  return;
}

