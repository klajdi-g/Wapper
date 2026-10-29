// rea decompile_all
// name: FUN_100260c08
// address: 0x100260c08
// body: available
// range: 0x100260c08-0x100260e47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100260c08(Hasher param_1)

{
  char *pcVar1;
  void *pvVar2;
  char cVar3;
  UUID UVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 *puVar7;
  Hasher HVar8;
  long extraout_x8;
  long extraout_x8_00;
  String *unaff_x20;
  undefined1 *puVar9;
  Hasher HVar10;
  long lVar11;
  String SVar12;
  String SVar13;
  
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  lVar11 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar11 + 0x40));
  puVar9 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  HVar10.unknown = puVar9 + -extraout_x8_00;
  HVar8.unknown = unaff_x20->str;
  Swift::String::hash(param_1,*unaff_x20);
  cVar3 = *(char *)&unaff_x20[1].str;
  if (cVar3 == '\x02') {
    Swift::Hasher::_combine(0,HVar8);
  }
  else {
    Swift::Hasher::_combine(1,HVar8);
    pcVar1 = (char *)0x746867696e;
    if (cVar3 != '\x01') {
      pcVar1 = (char *)0x796164;
    }
    pvVar2 = (void *)0xe500000000000000;
    if (cVar3 != '\x01') {
      pvVar2 = (void *)0xe300000000000000;
    }
    SVar12.bridgeObject = pvVar2;
    SVar12.str = pcVar1;
    Swift::String::hash(param_1,SVar12);
    _swift_bridgeObjectRelease(pvVar2);
  }
  lVar6 = 0;
  FUN_100266c40();
  FUN_1000087e4((long)&unaff_x20->str + (long)*(int *)(lVar6 + 0x18),HVar10.unknown,&DAT_10054a9c8,
                &DAT_10041bbe0);
  HVar8.unknown = (undefined *)0x1;
  puVar7 = HVar10.unknown;
  (**(code **)(lVar11 + 0x30))(HVar10.unknown,1,UVar4.unknown);
  if ((int)puVar7 == 1) {
    Swift::Hasher::_combine(0,HVar8);
    UVar4.unknown = HVar8.unknown;
  }
  else {
    (**(code **)(lVar11 + 0x20))(puVar9,HVar10.unknown,UVar4.unknown);
    Swift::Hasher::_combine(1,HVar10);
    FUN_1000036d0(&DAT_10054a128,PTR_typeMetadataAccessor_100520bd8,
                  PTR_Foundation__Foundation__UUID_>Swift__Hashable_100520bf0);
    Swift::Hashable::hash(param_1);
    (**(code **)(lVar11 + 8))(puVar9);
  }
  cVar3 = *(char *)((long)&unaff_x20->str + (long)*(int *)(lVar6 + 0x1c));
  if (cVar3 == '\x02') {
    Swift::Hasher::_combine(0,(Hasher)UVar4.unknown);
  }
  else {
    Swift::Hasher::_combine(1,(Hasher)UVar4.unknown);
    pcVar1 = (char *)0x6b726164;
    if (cVar3 != '\x01') {
      pcVar1 = (char *)0x746867696c;
    }
    pvVar2 = (void *)0xe400000000000000;
    if (cVar3 != '\x01') {
      pvVar2 = (void *)0xe500000000000000;
    }
    SVar13.bridgeObject = pvVar2;
    SVar13.str = pcVar1;
    Swift::String::hash(param_1,SVar13);
    _swift_bridgeObjectRelease(pvVar2);
  }
  return;
}

