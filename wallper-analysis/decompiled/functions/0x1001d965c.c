// rea decompile_all
// name: FUN_1001d965c
// address: 0x1001d965c
// body: available
// range: 0x1001d965c-0x1001d9827 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001d965c(Hasher param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  UUID UVar4;
  Hasher HVar5;
  char *pcVar6;
  long extraout_x8;
  long extraout_x8_00;
  void *pvVar7;
  void *pvVar8;
  undefined1 *puVar9;
  Hasher HVar10;
  long lVar11;
  String SVar12;
  
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  lVar11 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar11 + 0x40));
  puVar9 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  HVar5.unknown = (undefined *)0x0;
  FUN_1001d537c();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(HVar5.unknown + -8) + 0x40));
  HVar10.unknown = puVar9 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_100029504();
  pcVar6 = HVar10.unknown;
  _swift_getEnumCaseMultiPayload();
  iVar3 = (int)pcVar6;
  if (iVar3 < 2) {
    if (iVar3 != 0) {
      (**(code **)(lVar11 + 0x20))(puVar9,HVar10.unknown,UVar4.unknown);
      Swift::Hasher::_combine(2,HVar10);
      FUN_1000036d0(&DAT_10054a128,PTR_typeMetadataAccessor_100520bd8,
                    PTR_Foundation__Foundation__UUID_>Swift__Hashable_100520bf0);
      Swift::Hashable::hash(param_1);
      (**(code **)(lVar11 + 8))(puVar9,UVar4.unknown);
      return;
    }
    cVar1 = *HVar10.unknown;
    Swift::Hasher::_combine(1,HVar5);
    bVar2 = cVar1 == '\x01';
    pcVar6 = (char *)0x746867696e;
    if (!bVar2) {
      pcVar6 = (char *)0x796164;
    }
    pvVar7 = (void *)0xe300000000000000;
    pvVar8 = (void *)0xe500000000000000;
  }
  else {
    if (iVar3 != 2) {
      Swift::Hasher::_combine(0,HVar5);
      return;
    }
    cVar1 = *HVar10.unknown;
    Swift::Hasher::_combine(3,HVar5);
    bVar2 = cVar1 == '\x01';
    pcVar6 = (char *)0x6b726164;
    if (!bVar2) {
      pcVar6 = (char *)0x746867696c;
    }
    pvVar7 = (void *)0xe500000000000000;
    pvVar8 = (void *)0xe400000000000000;
  }
  if (!bVar2) {
    pvVar8 = pvVar7;
  }
  SVar12.bridgeObject = pvVar8;
  SVar12.str = pcVar6;
  Swift::String::hash(param_1,SVar12);
  _swift_bridgeObjectRelease(pvVar8);
  return;
}

