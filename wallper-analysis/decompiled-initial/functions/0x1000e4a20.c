// rea decompile_all
// name: FUN_1000e4a20
// address: 0x1000e4a20
// body: available
// range: 0x1000e4a20-0x1000e4d1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000e4ba8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000e4a20(long param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  Alignment AVar5;
  undefined *puVar6;
  State SVar7;
  undefined8 uVar8;
  ObservedObject<undefined> OVar9;
  undefined8 uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long lVar11;
  long extraout_x12;
  long extraout_x12_00;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined *apuStack_b0 [2];
  long local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar4 = &DAT_100551ce0;
  local_98 = param_1;
  FUN_100002f94(&DAT_100551ce0,&DAT_100423bf0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar11 = (long)apuStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_a0 = lVar11;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar13 = (undefined8 *)(lVar11 - extraout_x12);
  puVar4 = &DAT_100551ce8;
  puVar6 = &DAT_100423bf8;
  FUN_100002f94();
  AVar5.unknown = puVar4;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar12 = (long)puVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar14 = (undefined8 *)(lVar12 - extraout_x12_00);
  AVar5 = SwiftUI::Alignment::get_center(AVar5);
  *puVar14 = AVar5.unknown;
  puVar14[1] = puVar6;
  puVar6 = &DAT_100551cf0;
  FUN_100002f94(&DAT_100551cf0,&DAT_100423c00);
  FUN_1000e5c00((long)puVar14 + (long)*(int *)(puVar6 + 0x2c),param_2);
  uStack_88 = *(undefined8 *)(param_2 + 0x50);
  local_90 = *(undefined8 *)(param_2 + 0x48);
  uStack_68 = *(undefined8 *)(param_2 + 0x50);
  local_70 = *(undefined8 *)(param_2 + 0x48);
  SVar7.unknown = &DAT_100551cf8;
  FUN_100002f94(&DAT_100551cf8,&DAT_100423c08);
  SwiftUI::State::get_wrappedValue(SVar7);
  uVar8 = 0;
  FUN_1000f69cc();
  puVar6 = &DAT_100551d00;
  FUN_1000036d0(&DAT_100551d00,FUN_1000f69cc,&TargetProtocolConformanceDescriptor_100423a78);
  uVar10 = uVar8;
  OVar9 = SwiftUI::ObservedObject::init(puVar6,uVar8,puVar6);
  iVar2 = *(int *)(puVar4 + 0x24);
  *(undefined8 *)((long)puVar14 + (long)iVar2) = OVar9.unknown;
  ((undefined8 *)((long)puVar14 + (long)iVar2))[1] = uVar10;
  SwiftUI::State::get_wrappedValue(SVar7);
  apuStack_b0[1] = (undefined *)SwiftUI::ObservedObject::init(OVar9.unknown,uVar8,puVar6);
  uVar10 = uVar8;
  AVar5 = SwiftUI::Alignment::get_center((Alignment)apuStack_b0[1]);
  *puVar13 = AVar5.unknown;
  puVar13[1] = uVar10;
  puVar4 = &DAT_100551d08;
  FUN_100002f94(&DAT_100551d08,&DAT_100423c10);
  FUN_1000e6afc((long)puVar13 + (long)*(int *)(puVar4 + 0x2c),param_2);
  FUN_1000087e4(puVar14,lVar12,&DAT_100551ce8,&DAT_100423bf8);
  lVar11 = local_a0;
  FUN_1000087e4(puVar13,local_a0,&DAT_100551ce0,&DAT_100423bf0);
  lVar3 = local_98;
  FUN_1000087e4(lVar12,local_98,&DAT_100551ce8,&DAT_100423bf8);
  puVar4 = &DAT_100551d10;
  FUN_100002f94(&DAT_100551d10,&DAT_100423c18);
  puVar1 = (undefined8 *)(lVar3 + *(int *)(puVar4 + 0x30));
  *puVar1 = apuStack_b0[1];
  puVar1[1] = uVar8;
  FUN_1000087e4(lVar11,lVar3 + *(int *)(puVar4 + 0x40),&DAT_100551ce0,&DAT_100423bf0);
  _swift_retain(uVar8);
  FUN_10002a29c(puVar13,&DAT_100551ce0,&DAT_100423bf0);
  FUN_10002a29c(puVar14,&DAT_100551ce8,&DAT_100423bf8);
  FUN_10002a29c(lVar11,&DAT_100551ce0,&DAT_100423bf0);
  _swift_release(uVar8);
  FUN_10002a29c(lVar12,&DAT_100551ce8,&DAT_100423bf8);
  return;
}

