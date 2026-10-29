// rea decompile_all
// name: FUN_100112464
// address: 0x100112464
// body: available
// range: 0x100112464-0x1001126b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100112670) */
/* WARNING: Removing unreachable block (ram,0x0001001125e8) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100112650 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100112464(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  __int64 _Var6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x21;
  long lVar7;
  long lVar8;
  long lVar9;
  long local_90 [3];
  undefined *local_78;
  undefined *local_70;
  long local_68;
  undefined1 local_51;
  
  local_90[1] = param_1;
  local_70 = (undefined *)Foundation::URL::typeMetadataAccessor();
  local_90[2] = *(long *)(local_70 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_90[2] + 0x40));
  lVar9 = (long)local_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100553218;
  local_68 = lVar9;
  FUN_100002f94(&DAT_100553218,&DAT_100426038);
  lVar8 = *(long *)(puVar4 + -8);
  local_78 = puVar4;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar9 - extraout_x8_00;
  lVar5 = 0;
  FUN_100112cd8();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar7 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  FUN_100007bd0(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_10011333c();
  Swift::Decoder::_container();
  lVar1 = local_90[2];
  if (unaff_x21 == 0) {
    local_51 = 0;
    puVar4 = &DAT_100553228;
    local_90[0] = lVar5;
    FUN_1000036d0(&DAT_100553228,PTR_typeMetadataAccessor_100520a18,
                  PTR_Foundation__Foundation__URL_>Swift__Decodable_100520a40);
    puVar3 = local_70;
    puVar2 = local_78;
    Swift::KeyedDecodingContainer::_decode(local_68,local_70,&local_51,local_78,local_70,puVar4);
    (**(code **)(lVar1 + 0x20))(lVar7,local_68,puVar3);
    _Var6 = Swift::KeyedDecodingContainer::_decode(puVar4,puVar2);
    (**(code **)(lVar8 + 8))(lVar9,puVar2);
    lVar1 = local_90[1];
    *(__int64 *)(lVar7 + *(int *)(local_90[0] + 0x14)) = _Var6;
    FUN_10011337c(lVar7,lVar1);
    FUN_100043f24(param_2);
    FUN_100112e04(lVar7);
  }
  else {
    FUN_100043f24(param_2);
  }
  return;
}

