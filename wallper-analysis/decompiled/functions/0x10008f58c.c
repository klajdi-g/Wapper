// rea decompile_all
// name: FUN_10008f58c
// address: 0x10008f58c
// body: available
// range: 0x10008f58c-0x10008f81f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010008f6f4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10008f58c(undefined8 *param_1,undefined8 *param_2,undefined1 param_3,char *param_4,
                  void *param_5)

{
  char *pcVar1;
  void *pvVar2;
  undefined *puVar3;
  undefined *puVar4;
  Alignment AVar5;
  long unaff_x20;
  undefined8 uVar6;
  double dVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  undefined1 auStack_190 [72];
  char *local_148;
  undefined8 uStack_140;
  undefined1 local_138;
  undefined7 uStack_137;
  code *pcStack_130;
  undefined *local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  code *pcStack_110;
  undefined *puStack_108;
  char *local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *local_c0;
  char *local_b0;
  void *pvStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *local_70;
  
  uVar6 = param_2[4];
  local_b0 = (char *)*param_2;
  pvStack_a8 = (void *)param_2[1];
  _swift_bridgeObjectRetain();
  SVar8.bridgeObject = (void *)0xe100000000000000;
  SVar8.str = (char *)0x7c;
  SVar11.bridgeObject = param_5;
  SVar11.str = param_4;
  Swift::String::append(SVar8,SVar11);
  pvVar2 = pvStack_a8;
  SVar10 = *(String *)(param_2 + 2);
  _swift_bridgeObjectRetain(pvStack_a8);
  SVar12.bridgeObject = param_5;
  SVar12.str = param_4;
  Swift::String::append(SVar10,SVar12);
  _swift_bridgeObjectRelease(pvVar2);
  pvVar2 = pvStack_a8;
  _swift_bridgeObjectRetain(pvStack_a8);
  SVar9.bridgeObject = (void *)0xe100000000000000;
  SVar9.str = (char *)0x23;
  SVar13.bridgeObject = param_5;
  SVar13.str = param_4;
  Swift::String::append(SVar9,SVar13);
  _swift_bridgeObjectRelease(pvVar2);
  pvVar2 = pvStack_a8;
  pcVar1 = local_b0;
  SVar10 = Swift::CustomStringConvertible::get_description();
  local_b0 = pcVar1;
  pvStack_a8 = pvVar2;
  _swift_bridgeObjectRetain(pvVar2);
  SVar14.bridgeObject = param_5;
  SVar14.str = param_4;
  Swift::String::append(SVar10,SVar14);
  _swift_bridgeObjectRelease(pvVar2);
  _swift_bridgeObjectRelease(SVar10.bridgeObject);
  pvVar2 = pvStack_a8;
  SVar10.bridgeObject = pvStack_a8;
  SVar10.str = local_b0;
  local_b0 = (char *)0x3a657665656c73;
  pvStack_a8 = (void *)0xe700000000000000;
  SVar15.bridgeObject = param_5;
  SVar15.str = param_4;
  Swift::String::append(SVar10,SVar15);
  _swift_bridgeObjectRelease(pvVar2);
  pvVar2 = pvStack_a8;
  pcVar1 = local_b0;
  puVar3 = &DAT_100528460;
  _swift_allocObject(&DAT_100528460,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar6;
  local_b0 = (char *)0x0;
  puVar4 = &DAT_10054bd30;
  FUN_100002f94(&DAT_10054bd30,&DAT_10041d460);
  SwiftUI::State::init(&uStack_120,puVar4,puVar4);
  local_148 = pcVar1;
  uStack_140 = pvVar2;
  puVar4 = &DAT_100528488;
  local_138 = param_3;
  _swift_allocObject(&DAT_100528488,0x20,7);
  *(char **)(puVar4 + 0x10) = pcVar1;
  *(void **)(puVar4 + 0x18) = pvVar2;
  pcStack_130 = thunk_FUN_1000939e0;
  local_128 = puVar4;
  _swift_bridgeObjectRetain(pvVar2);
  FUN_1000939f8(FUN_100098d14,puVar3);
  _swift_release(puVar3);
  pcStack_110 = FUN_100098d14;
  uStack_f0 = CONCAT71(uStack_137,local_138);
  uStack_f8 = uStack_140;
  local_100 = local_148;
  pcStack_e8 = pcStack_130;
  uStack_d8 = uStack_120;
  local_e0 = local_128;
  pcStack_c8 = FUN_100098d14;
  uStack_d0 = local_118;
  pvStack_a8 = (void *)uStack_140;
  local_b0 = local_148;
  pcStack_98 = pcStack_130;
  uStack_88 = uStack_120;
  local_90 = local_128;
  pcStack_78 = FUN_100098d14;
  uStack_80 = local_118;
  puStack_108 = puVar3;
  local_c0 = puVar3;
  uStack_a0 = uStack_f0;
  local_70 = puVar3;
  FUN_100093a08(&local_100,auStack_190);
  FUN_100093a3c(&local_b0);
  AVar5.unknown = (undefined *)0x0;
  FUN_100097a30();
  dVar7 = *(double *)(unaff_x20 + *(int *)(AVar5.unknown + 0x14));
  SwiftUI::Alignment::get_center(AVar5);
  SwiftUI::_FrameLayout::_init((undefined *)(dVar7 * 52.13333333333333));
  param_1[10] = uStack_140;
  param_1[9] = local_148;
  param_1[0xc] = pcStack_130;
  param_1[0xb] = CONCAT71(uStack_137,local_138);
  param_1[0xe] = uStack_120;
  param_1[0xd] = local_128;
  param_1[5] = uStack_d8;
  param_1[4] = local_e0;
  param_1[7] = pcStack_c8;
  param_1[6] = uStack_d0;
  param_1[8] = local_c0;
  param_1[1] = uStack_f8;
  *param_1 = local_100;
  param_1[3] = pcStack_e8;
  param_1[2] = uStack_f0;
  return;
}

