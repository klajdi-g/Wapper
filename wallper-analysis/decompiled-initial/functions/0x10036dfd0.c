// rea decompile_all
// name: FUN_10036dfd0
// address: 0x10036dfd0
// body: available
// range: 0x10036dfd0-0x10036e277 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10036dfd0(long param_1,long param_2,undefined8 param_3,byte param_4,undefined8 param_5)

{
  long lVar1;
  byte bVar2;
  undefined *puVar3;
  long lVar4;
  char *pcVar5;
  LocalizedStringKey LVar6;
  Text TVar7;
  undefined *puVar8;
  void *pvVar9;
  byte bVar11;
  undefined8 uVar12;
  long extraout_x8;
  code *pcVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long lVar18;
  String stringLiteral;
  String stringLiteral_00;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *local_70;
  long local_68;
  undefined8 uVar10;
  
  puVar3 = &DAT_10055d938;
  local_68 = param_1;
  FUN_100002f94(&DAT_10055d938,&DAT_100433060);
  lVar18 = *(long *)(puVar3 + -8);
  lVar15 = *(long *)(lVar18 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)(lVar15 + 0xfU & 0xfffffffffffffff0);
  lVar1 = -extraout_x8;
  puVar14 = (undefined8 *)((long)&local_70 + lVar1);
  lVar4 = 0;
  FUN_10034c884();
  if (*(char *)(param_2 + *(int *)(lVar4 + 0x14)) == '\0') {
    pcVar5 = (char *)0x69726e7553207441;
    pvVar9 = (void *)0xea00000000006573;
  }
  else {
    pcVar5 = (char *)0x65736e7553207441;
    pvVar9 = (void *)0xe900000000000074;
  }
  stringLiteral.bridgeObject = pvVar9;
  stringLiteral.str = pcVar5;
  LVar6 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  *(undefined2 *)((long)&uStack_78 + lVar1) = 0x100;
  *(undefined8 *)((long)&uStack_80 + lVar1) = 0;
  param_4 = param_4 & 1;
  TVar7 = SwiftUI::Text::_init(LVar6);
  bVar11 = 0;
  uVar12 = 0x1a;
  bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0x1a,0,0,0x1a,0,0);
  local_70 = puVar14;
  *puVar14 = TVar7.unknown;
  *(void **)((long)&local_68 + lVar1) = pvVar9;
  (&stack0xffffffffffffffa0)[lVar1] = param_4;
  *(undefined8 *)(&stack0xffffffffffffffa8 + lVar1) = param_5;
  (&stack0xffffffffffffffb0)[lVar1] = 0;
  (&stack0xffffffffffffffb1)[lVar1] = bVar2 & 1;
  (*(code *)PTR____chkstk_darwin_100521118)();
  uVar17 = lVar15 + 0xfU & 0xfffffffffffffff0;
  puVar16 = (undefined8 *)((long)puVar14 - uVar17);
  stringLiteral_00.bridgeObject = (void *)0xe600000000000000;
  stringLiteral_00.str = (char *)0x6d6f74737543;
  uVar10 = 0xe600000000000000;
  LVar6 = SwiftUI::LocalizedStringKey::init(stringLiteral_00);
  *(undefined2 *)(puVar16 + -1) = 0x100;
  puVar16[-2] = 0;
  bVar11 = bVar11 & 1;
  TVar7 = SwiftUI::Text::_init(LVar6);
  *puVar16 = TVar7.unknown;
  puVar16[1] = uVar10;
  *(byte *)(puVar16 + 2) = bVar11;
  puVar16[3] = uVar12;
  *(undefined2 *)(puVar16 + 4) = 0x101;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar15 = (long)puVar16 - uVar17;
  pcVar13 = *(code **)(lVar18 + 0x10);
  (*pcVar13)(lVar15,puVar14,puVar3);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar4 = lVar15 - uVar17;
  (*pcVar13)(lVar4,puVar16,puVar3);
  lVar1 = local_68;
  (*pcVar13)(local_68,lVar15,puVar3);
  puVar8 = &DAT_10055d940;
  FUN_100002f94(&DAT_10055d940,&DAT_100433068);
  (*pcVar13)(lVar1 + *(int *)(puVar8 + 0x30),lVar4,puVar3);
  pcVar13 = *(code **)(lVar18 + 8);
  (*pcVar13)(puVar16,puVar3);
  (*pcVar13)(puVar14,puVar3);
  (*pcVar13)(lVar4,puVar3);
  (*pcVar13)(lVar15,puVar3);
  return;
}

