// rea decompile_all
// name: FUN_100148be8
// address: 0x100148be8
// body: available
// range: 0x100148be8-0x100148dbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100148d44) */

void FUN_100148be8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar3;
  undefined1 auStack_90 [15];
  undefined1 local_81;
  ulong local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 local_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  puVar1 = &DAT_100554cb0;
  FUN_100002f94(&DAT_100554cb0,&DAT_100428358);
  lVar3 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100007bd0(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1001507a0();
  Swift::Encoder::_container();
  local_80 = local_80 & 0xffffffffffffff00;
  Swift::KeyedEncodingContainer::_encode(*unaff_x20,unaff_x20[1],&local_80,puVar1);
  if (unaff_x21 == 0) {
    local_80._0_1_ = 1;
    Swift::KeyedEncodingContainer::_encode(*(undefined1 *)(unaff_x20 + 2),&local_80,puVar1);
    local_80._0_1_ = 2;
    Swift::KeyedEncodingContainer::_encode(*(undefined1 *)((long)unaff_x20 + 0x11),&local_80,puVar1)
    ;
    uVar2 = unaff_x20[3];
    local_80 = CONCAT71(local_80._1_7_,3);
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (uVar2,*(undefined1 *)(unaff_x20 + 4),&local_80,puVar1);
    uStack_78 = unaff_x20[6];
    local_80 = unaff_x20[5];
    uStack_70 = unaff_x20[7];
    uStack_68 = (undefined1)unaff_x20[8];
    uStack_5f = *(undefined8 *)((long)unaff_x20 + 0x49);
    local_67 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x41);
    uStack_60 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x41) >> 0x38);
    local_81 = 4;
    FUN_10015015c();
    Swift::KeyedEncodingContainer::_encodeIfPresent(&local_80,&local_81,puVar1,&DAT_10052e6e0,uVar2)
    ;
    (**(code **)(lVar3 + 8))(auStack_90 + -extraout_x8,puVar1);
  }
  else {
    (**(code **)(lVar3 + 8))(auStack_90 + -extraout_x8,puVar1);
  }
  return;
}

