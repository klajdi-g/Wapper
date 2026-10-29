// rea decompile_all
// name: FUN_100407554
// address: 0x100407554
// body: available
// range: 0x100407554-0x100407a93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100407554(Hasher param_1)

{
  __uint64 *p_Var1;
  ulong *puVar2;
  byte bVar3;
  undefined *puVar4;
  URL UVar5;
  long lVar6;
  Hasher HVar7;
  Hasher HVar8;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar9;
  long extraout_x8_01;
  long extraout_x8_02;
  String *unaff_x20;
  long lVar10;
  char *pcVar11;
  __uint64 _Var12;
  ulong uVar13;
  void *pvVar14;
  undefined8 *puVar15;
  long lVar16;
  Hasher HVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  long local_80;
  undefined *local_78;
  long local_70;
  undefined *local_68;
  
  local_68 = (undefined *)Foundation::Date::typeMetadataAccessor();
  local_70 = *(long *)(local_68 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_70 + 0x40));
  lVar6 = (long)&local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar9 = &DAT_10054b950;
  local_80 = lVar6;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = (undefined *)(lVar6 - extraout_x8_00);
  local_78 = puVar9;
  UVar5 = Foundation::URL::typeMetadataAccessor();
  puVar4 = PTR_typeMetadataAccessor_100520a18;
  lVar10 = *(long *)(UVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar10 + 0x40));
  lVar16 = (long)puVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar9 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  HVar17.unknown = (undefined *)(lVar16 - extraout_x8_02);
  Swift::String::hash(param_1,*unaff_x20);
  lVar6 = 0;
  FUN_10040211c();
  FUN_1000036d0(&DAT_10054a588,puVar4,PTR_Foundation__Foundation__URL_>Swift__Hashable_100520a30);
  Swift::Hashable::hash(param_1);
  FUN_1000087e4((long)&unaff_x20->str + (long)*(int *)(lVar6 + 0x18),HVar17.unknown,&DAT_100553d90,
                &DAT_10041bf10);
  HVar7.unknown = (undefined *)0x1;
  puVar9 = HVar17.unknown;
  (**(code **)(lVar10 + 0x30))(HVar17.unknown,1,UVar5.unknown);
  if ((int)puVar9 == 1) {
    Swift::Hasher::_combine(0,HVar7);
    UVar5.unknown = HVar7.unknown;
  }
  else {
    (**(code **)(lVar10 + 0x20))(lVar16,HVar17.unknown,UVar5.unknown);
    Swift::Hasher::_combine(1,HVar17);
    Swift::Hashable::hash(param_1);
    (**(code **)(lVar10 + 8))(lVar16);
  }
  puVar15 = (undefined8 *)((long)&unaff_x20->str + (long)*(int *)(lVar6 + 0x1c));
  pvVar14 = (void *)puVar15[1];
  if (pvVar14 == (void *)0x0) {
    Swift::Hasher::_combine(0,(Hasher)UVar5.unknown);
  }
  else {
    pcVar11 = (char *)*puVar15;
    Swift::Hasher::_combine(1,(Hasher)UVar5.unknown);
    SVar18.bridgeObject = pvVar14;
    SVar18.str = pcVar11;
    Swift::String::hash(param_1,SVar18);
    UVar5.unknown = pcVar11;
  }
  Swift::Hasher::_combine
            (*(__uint64 *)((long)&unaff_x20->str + (long)*(int *)(lVar6 + 0x20)),
             (Hasher)UVar5.unknown);
  bVar3 = *(byte *)((long)&unaff_x20->str + (long)*(int *)(lVar6 + 0x24));
  HVar7.unknown = (undefined *)(ulong)bVar3;
  if (bVar3 == 0xe) {
    Swift::Hasher::_combine(0,(Hasher)UVar5.unknown);
    HVar7.unknown = UVar5.unknown;
  }
  else {
    Swift::Hasher::_combine(1,(Hasher)UVar5.unknown);
    FUN_100402278();
    SVar19.bridgeObject = UVar5.unknown;
    SVar19.str = HVar7.unknown;
    Swift::String::hash(param_1,SVar19);
    _swift_bridgeObjectRelease(UVar5.unknown);
  }
  lVar10 = local_70;
  p_Var1 = (__uint64 *)((long)&unaff_x20->str + (long)*(int *)(lVar6 + 0x28));
  if ((char)p_Var1[1] == '\x01') {
    Swift::Hasher::_combine(0,HVar7);
  }
  else {
    _Var12 = *p_Var1;
    Swift::Hasher::_combine(1,HVar7);
    Swift::Hasher::_combine(_Var12,HVar7);
  }
  HVar7.unknown = local_68;
  HVar17.unknown = local_78;
  FUN_1000087e4((long)&unaff_x20->str + (long)*(int *)(lVar6 + 0x2c),local_78,&DAT_10054b950,
                &DAT_10041d870);
  HVar8.unknown = (undefined *)0x1;
  puVar9 = HVar17.unknown;
  (**(code **)(lVar10 + 0x30))(HVar17.unknown,1,HVar7.unknown);
  lVar16 = local_80;
  if ((int)puVar9 == 1) {
    Swift::Hasher::_combine(0,HVar8);
    HVar7.unknown = HVar8.unknown;
  }
  else {
    (**(code **)(lVar10 + 0x20))(local_80,HVar17.unknown,HVar7.unknown);
    Swift::Hasher::_combine(1,HVar17);
    FUN_1000036d0(&DAT_1005613f8,PTR_typeMetadataAccessor_100520b80,
                  PTR_Foundation__Foundation__Date_>Swift__Hashable_100520b98);
    Swift::Hashable::hash(param_1);
    (**(code **)(lVar10 + 8))(lVar16);
  }
  p_Var1 = (__uint64 *)((long)&unaff_x20->str + (long)*(int *)(lVar6 + 0x30));
  if ((char)p_Var1[1] == '\x01') {
    Swift::Hasher::_combine(0,HVar7);
  }
  else {
    _Var12 = *p_Var1;
    Swift::Hasher::_combine(1,HVar7);
    Swift::Hasher::_combine(_Var12,HVar7);
  }
  puVar15 = (undefined8 *)((long)&unaff_x20->str + (long)*(int *)(lVar6 + 0x34));
  pvVar14 = (void *)puVar15[1];
  if (pvVar14 == (void *)0x0) {
    Swift::Hasher::_combine(0,HVar7);
  }
  else {
    pcVar11 = (char *)*puVar15;
    Swift::Hasher::_combine(1,HVar7);
    SVar20.bridgeObject = pvVar14;
    SVar20.str = pcVar11;
    Swift::String::hash(param_1,SVar20);
    HVar7.unknown = pcVar11;
  }
  puVar2 = (ulong *)((long)&unaff_x20->str + (long)*(int *)(lVar6 + 0x38));
  if ((char)puVar2[1] == '\x01') {
    Swift::Hasher::_combine(0,HVar7);
  }
  else {
    uVar13 = *puVar2;
    Swift::Hasher::_combine(1,HVar7);
    _Var12 = 0;
    if ((uVar13 & 0x7fffffffffffffff) != 0) {
      _Var12 = uVar13;
    }
    Swift::Hasher::_combine(_Var12,HVar7);
  }
  puVar15 = (undefined8 *)((long)&unaff_x20->str + (long)*(int *)(lVar6 + 0x3c));
  pvVar14 = (void *)puVar15[1];
  if (pvVar14 == (void *)0x0) {
    Swift::Hasher::_combine(0,HVar7);
  }
  else {
    pcVar11 = (char *)*puVar15;
    Swift::Hasher::_combine(1,HVar7);
    SVar21.bridgeObject = pvVar14;
    SVar21.str = pcVar11;
    Swift::String::hash(param_1,SVar21);
    HVar7.unknown = pcVar11;
  }
  Swift::Hasher::_combine(*(__uint8 *)((long)&unaff_x20->str + (long)*(int *)(lVar6 + 0x40)),HVar7);
  lVar10 = *(long *)((long)&unaff_x20->str + (long)*(int *)(lVar6 + 0x44));
  if (lVar10 == 0) {
    Swift::Hasher::_combine(0,HVar7);
  }
  else {
    Swift::Hasher::_combine(1,HVar7);
    Swift::Hasher::_combine(*(__uint64 *)(lVar10 + 0x10),HVar7);
    lVar16 = *(long *)(lVar10 + 0x10);
    if (lVar16 != 0) {
      puVar15 = (undefined8 *)(lVar10 + 0x28);
      do {
        HVar7.unknown = (undefined *)puVar15[-1];
        pvVar14 = (void *)*puVar15;
        _swift_bridgeObjectRetain(pvVar14);
        SVar22.bridgeObject = pvVar14;
        SVar22.str = HVar7.unknown;
        Swift::String::hash(param_1,SVar22);
        _swift_bridgeObjectRelease(pvVar14);
        puVar15 = puVar15 + 2;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
    }
  }
  Swift::Hasher::_combine(*(__uint8 *)((long)&unaff_x20->str + (long)*(int *)(lVar6 + 0x48)),HVar7);
  return;
}

