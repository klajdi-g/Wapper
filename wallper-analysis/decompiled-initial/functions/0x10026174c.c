// rea decompile_all
// name: FUN_10026174c
// address: 0x10026174c
// body: available
// range: 0x10026174c-0x100261a3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010026197c) */
/* WARNING: Removing unreachable block (ram,0x0001002619f8) */
/* WARNING: Removing unreachable block (ram,0x0001002618d0) */
/* WARNING: Removing unreachable block (ram,0x000100261908) */

void FUN_10026174c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  UUID UVar2;
  undefined *puVar3;
  long lVar4;
  char *pcVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x21;
  long lVar6;
  void *pvVar7;
  long lVar8;
  String SVar9;
  String SStack_a0;
  undefined8 local_90;
  long local_88;
  undefined *local_80;
  long local_78;
  long local_70;
  undefined8 local_68;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  local_90 = param_1;
  UVar2 = Foundation::UUID::typeMetadataAccessor();
  local_70 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_70 + 0x40));
  lVar8 = (long)&SStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100558508;
  local_88 = lVar8;
  FUN_100002f94(&DAT_100558508,&DAT_10042ce10);
  pvVar7 = *(void **)(puVar3 + -8);
  local_80 = puVar3;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)((long)pvVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = lVar8 - extraout_x8_00;
  lVar4 = 0;
  FUN_100266c2c();
  local_78 = lVar4;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar6 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  Foundation::UUID::init();
  FUN_100007bd0(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_100268768();
  Swift::Decoder::_container();
  lVar4 = local_70;
  if (unaff_x21 == 0) {
    local_51 = 0;
    puVar3 = &DAT_100558108;
    SStack_a0.bridgeObject = pvVar7;
    FUN_1000036d0(&DAT_100558108,PTR_typeMetadataAccessor_100520bd8,
                  PTR_Foundation__Foundation__UUID_>Swift__Decodable_100520c00);
    puVar1 = local_80;
    lVar4 = local_88;
    Swift::KeyedDecodingContainer::_decode
              (local_88,UVar2.unknown,&local_51,local_80,UVar2.unknown,puVar3);
    (**(code **)(local_70 + 0x28))(lVar6,lVar4,UVar2.unknown);
    local_52 = 1;
    SVar9 = Swift::KeyedDecodingContainer::_decode(&local_52,puVar1);
    lVar4 = local_78;
    pcVar5 = SVar9.str;
    *(String *)(lVar6 + *(int *)(local_78 + 0x14)) = SVar9;
    local_53 = 2;
    FUN_100266d14();
    puVar3 = local_80;
    Swift::KeyedDecodingContainer::_decode
              (&local_68,&DAT_100535f00,&local_53,local_80,&DAT_100535f00,pcVar5);
    (**(code **)((long)SStack_a0.bridgeObject + 8))(lVar8,puVar3);
    *(undefined8 *)(lVar6 + *(int *)(lVar4 + 0x18)) = local_68;
    FUN_100029504(lVar6,local_90,FUN_100266c2c);
    FUN_100043f24(param_2);
    FUN_100029548(lVar6,FUN_100266c2c);
  }
  else {
    FUN_100043f24(param_2);
    (**(code **)(lVar4 + 8))(lVar6,UVar2.unknown);
  }
  return;
}

