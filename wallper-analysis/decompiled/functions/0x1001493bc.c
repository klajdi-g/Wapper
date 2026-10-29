// rea decompile_all
// name: FUN_1001493bc
// address: 0x1001493bc
// body: available
// range: 0x1001493bc-0x1001496bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001001495b0) */
/* WARNING: Removing unreachable block (ram,0x00010014963c) */
/* WARNING: Removing unreachable block (ram,0x000100149650) */
/* WARNING: Removing unreachable block (ram,0x00010014950c) */

void FUN_1001493bc(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x21;
  String *pSVar7;
  long lVar8;
  long lVar9;
  String SVar10;
  String SStack_c0;
  String *local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  long local_98;
  undefined1 local_90;
  undefined7 uStack_8f;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined1 local_51;
  
  puVar2 = &DAT_100554cf8;
  local_a8 = param_1;
  FUN_100002f94(&DAT_100554cf8,&DAT_1004285a0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)&SStack_c0 - extraout_x8;
  puVar2 = &DAT_100554e48;
  FUN_100002f94(&DAT_100554e48,&DAT_100428718);
  lVar8 = *(long *)(puVar2 + -8);
  local_a0 = puVar2;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar6 - extraout_x8_00;
  lVar3 = 0;
  FUN_100150a0c();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  pSVar7 = (String *)(lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  local_98 = param_2;
  FUN_100007bd0(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_100152058();
  Swift::Decoder::_container();
  puVar2 = local_a0;
  if (unaff_x21 == 0) {
    local_90 = 0;
    SVar10 = Swift::KeyedDecodingContainer::_decode(&local_90,local_a0);
    *pSVar7 = SVar10;
    uVar4 = 0;
    SStack_c0.bridgeObject = SVar10.bridgeObject;
    local_b0 = pSVar7;
    FUN_100150d64(0);
    local_90 = 1;
    puVar5 = &DAT_100554e58;
    FUN_1000036d0(&DAT_100554e58,FUN_100150d64,&TargetProtocolConformanceDescriptor_100428648);
    Swift::KeyedDecodingContainer::_decodeIfPresent(lVar6,uVar4,&local_90,puVar2,uVar4,puVar5);
    pSVar7 = local_b0;
    FUN_100007e1c(lVar6,(long)&local_b0->str + (long)*(int *)(lVar3 + 0x14),&DAT_100554cf8,
                  &DAT_1004285a0);
    local_51 = 2;
    FUN_1001501dc();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_90,&DAT_10052e6e0,&local_51,puVar2,&DAT_10052e6e0,lVar6);
    (**(code **)(lVar8 + 8))(lVar9,puVar2);
    puVar1 = (undefined8 *)((long)&pSVar7->str + (long)*(int *)(lVar3 + 0x18));
    puVar1[1] = uStack_88;
    *puVar1 = CONCAT71(uStack_8f,local_90);
    puVar1[3] = uStack_78;
    puVar1[2] = uStack_80;
    puVar1[4] = local_70;
    *(undefined1 *)(puVar1 + 5) = local_68;
    FUN_100029504(pSVar7,local_a8,FUN_100150a0c);
    FUN_100043f24(local_98);
    FUN_100029548(pSVar7,FUN_100150a0c);
  }
  else {
    FUN_100043f24(local_98);
  }
  return;
}

