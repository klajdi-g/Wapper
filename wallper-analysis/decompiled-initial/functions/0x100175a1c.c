// rea decompile_all
// name: FUN_100175a1c
// address: 0x100175a1c
// body: available
// range: 0x100175a1c-0x100175bd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100175b04) */

undefined8 FUN_100175a1c(long param_1)

{
  undefined *puVar1;
  KeyedDecodingContainer<undefined> KVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  undefined8 unaff_d8;
  undefined8 local_80 [2];
  undefined1 local_61;
  
  puVar1 = &DAT_1005558e8;
  FUN_100002f94(&DAT_1005558e8,&DAT_100429620);
  lVar5 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100007bd0(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100175bd4();
  KVar2 = Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_61 = 0;
    FUN_100175c14();
    Swift::KeyedDecodingContainer::_decode
              (local_80,PTR___type_metadata_for_CoreGraphics_CGFloat_100524430,&local_61,puVar1,
               PTR___type_metadata_for_CoreGraphics_CGFloat_100524430,KVar2.unknown);
    uVar3 = 0;
    FUN_100007ce0(0);
    local_61 = 1;
    puVar4 = &DAT_100555900;
    FUN_1000036d0(&DAT_100555900,FUN_100007ce0,
                  PTR_CoreGraphics____C__CGSize_>Swift__Decodable_1005248b0);
    Swift::KeyedDecodingContainer::_decode(local_80,uVar3,&local_61,puVar1,uVar3,puVar4);
    (**(code **)(lVar5 + 8))((long)local_80 - extraout_x8,puVar1);
    FUN_100043f24(param_1);
    unaff_d8 = local_80[0];
  }
  else {
    FUN_100043f24(param_1);
  }
  return unaff_d8;
}

