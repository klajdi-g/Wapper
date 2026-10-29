// rea decompile_all
// name: FUN_100149868
// address: 0x100149868
// body: available
// range: 0x100149868-0x100149b17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100149a28) */
/* WARNING: Removing unreachable block (ram,0x000100149ab0) */
/* WARNING: Removing unreachable block (ram,0x0001001499bc) */

void FUN_100149868(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  Date DVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x21;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long local_80 [2];
  undefined *local_70;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar1 = &DAT_10054b950;
  local_80[1] = param_1;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)local_80 - extraout_x8;
  puVar1 = &DAT_100554e78;
  FUN_100002f94(&DAT_100554e78,&DAT_100428730);
  lVar6 = *(long *)(puVar1 + -8);
  local_70 = puVar1;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  FUN_100150d64();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar8 = (undefined8 *)((lVar7 - extraout_x8_00) - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  FUN_100007bd0(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_100152098();
  Swift::Decoder::_container();
  puVar1 = local_70;
  if (unaff_x21 == 0) {
    local_51 = 0;
    puVar3 = &local_51;
    puVar5 = local_70;
    local_80[0] = lVar2;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    *puVar8 = puVar3;
    puVar8[1] = puVar5;
    local_52 = 1;
    puVar3 = &local_52;
    Swift::KeyedDecodingContainer::_decodeIfPresent(puVar3,puVar1);
    *(char *)(puVar8 + 2) = (char)puVar3;
    DVar4 = Foundation::Date::typeMetadataAccessor();
    local_53 = 2;
    puVar5 = &DAT_100558e30;
    FUN_1000036d0(&DAT_100558e30,PTR_typeMetadataAccessor_100520b80,
                  PTR_Foundation__Foundation__Date_>Swift__Decodable_100520bb0);
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (lVar7,DVar4.unknown,&local_53,puVar1,DVar4.unknown,puVar5);
    (**(code **)(lVar6 + 8))(lVar7 - extraout_x8_00,puVar1);
    FUN_100007e1c(lVar7,(long)puVar8 + (long)*(int *)(local_80[0] + 0x18),&DAT_10054b950,
                  &DAT_10041d870);
    FUN_100029504(puVar8,local_80[1],FUN_100150d64);
    FUN_100043f24(param_2);
    FUN_100029548(puVar8,FUN_100150d64);
  }
  else {
    FUN_100043f24(param_2);
  }
  return;
}

