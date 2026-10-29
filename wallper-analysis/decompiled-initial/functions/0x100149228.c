// rea decompile_all
// name: FUN_100149228
// address: 0x100149228
// body: available
// range: 0x100149228-0x1001493bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100149228(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar7;
  undefined1 auStack_60 [13];
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar2 = &DAT_100554e68;
  FUN_100002f94(&DAT_100554e68,&DAT_100428728);
  lVar7 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100007bd0(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100152058();
  Swift::Encoder::_container();
  local_51 = 0;
  Swift::KeyedEncodingContainer::_encode(*unaff_x20,unaff_x20[1],&local_51,puVar2);
  if (unaff_x21 == 0) {
    lVar3 = 0;
    FUN_100150a0c();
    iVar1 = *(int *)(lVar3 + 0x14);
    local_52 = 1;
    uVar4 = 0;
    FUN_100150d64(0);
    puVar5 = &DAT_100554e70;
    FUN_1000036d0(&DAT_100554e70,FUN_100150d64,&TargetProtocolConformanceDescriptor_100428620);
    lVar6 = (long)unaff_x20 + (long)iVar1;
    Swift::KeyedEncodingContainer::_encodeIfPresent(lVar6,&local_52,puVar2,uVar4,puVar5);
    iVar1 = *(int *)(lVar3 + 0x18);
    local_53 = 2;
    FUN_10015015c();
    Swift::KeyedEncodingContainer::_encodeIfPresent
              ((long)unaff_x20 + (long)iVar1,&local_53,puVar2,&DAT_10052e6e0,lVar6);
  }
  (**(code **)(lVar7 + 8))(auStack_60 + -extraout_x8,puVar2);
  return;
}

