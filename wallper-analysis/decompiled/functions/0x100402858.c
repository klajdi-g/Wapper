// rea decompile_all
// name: FUN_100402858
// address: 0x100402858
// body: available
// range: 0x100402858-0x100402c0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100402858(undefined *param_1,undefined8 param_2)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  Date DVar5;
  Date DVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  code *pcVar18;
  undefined1 auStack_b0 [8];
  ulong local_a8;
  long local_a0;
  code *local_98;
  undefined1 *local_90;
  long local_88;
  code *local_80;
  undefined *local_78;
  long local_70;
  undefined *local_68;
  
  lVar3 = 0;
  FUN_10040211c();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar11 + 0x40));
  puVar4 = &DAT_10054b950;
  local_90 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  puVar13 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0) +
            -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar16 = (long)puVar13 - extraout_x12;
  DVar5 = Foundation::Date::typeMetadataAccessor();
  lVar17 = *(long *)(DVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar17 + 0x40));
  lVar15 = lVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  FUN_100406f18(lVar16,param_2);
  pcVar10 = *(code **)(lVar17 + 0x30);
  lVar14 = lVar16;
  (*pcVar10)(lVar16,1,DVar5.unknown);
  if ((int)lVar14 == 1) {
    FUN_10002a29c(lVar16,&DAT_10054b950,&DAT_10041d870);
    _swift_bridgeObjectRetain(param_1);
  }
  else {
    local_98 = *(code **)(lVar17 + 0x20);
    local_70 = lVar15 - extraout_x12_00;
    (*local_98)(lVar15 - extraout_x12_00,lVar16,DVar5.unknown);
    lVar14 = *(long *)(param_1 + 0x10);
    if (lVar14 == 0) {
      pcVar18 = *(code **)(lVar17 + 8);
      param_1 = PTR___swiftEmptyArrayStorage_100524190;
    }
    else {
      local_a8 = (ulong)*(byte *)(lVar11 + 0x50) + 0x20 &
                 ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff);
      lVar11 = *(long *)(lVar11 + 0x48);
      puVar4 = param_1 + local_a8;
      local_78 = PTR___swiftEmptyArrayStorage_100524190;
      puVar12 = local_90;
      local_a0 = lVar3;
      local_88 = lVar17;
      local_80 = pcVar10;
      do {
        FUN_100029504(puVar4,puVar12,FUN_10040211c);
        FUN_1000087e4(puVar12 + *(int *)(lVar3 + 0x2c),puVar13,&DAT_10054b950,&DAT_10041d870);
        DVar6.unknown = puVar13;
        (*pcVar10)(puVar13,1,DVar5.unknown);
        if ((int)DVar6.unknown == 1) {
          Foundation::Date::get_distantPast(DVar6);
          puVar7 = puVar13;
          (*pcVar10)(puVar13,1,DVar5.unknown);
          lVar16 = local_88;
          if ((int)puVar7 != 1) {
            FUN_10002a29c(puVar13,&DAT_10054b950,&DAT_10041d870);
          }
        }
        else {
          (*local_98)(lVar15,puVar13,DVar5.unknown);
          lVar16 = local_88;
        }
        puVar8 = &DAT_100554248;
        FUN_1000036d0(&DAT_100554248,PTR_typeMetadataAccessor_100520b80,
                      PTR_Foundation__Foundation__Date_>Swift__Comparable_100520ba0);
        bVar2 = Swift::Comparable::>__infix(lVar15,local_70,DVar5.unknown,puVar8);
        pcVar18 = *(code **)(lVar16 + 8);
        (*pcVar18)(lVar15,DVar5.unknown);
        puVar8 = local_78;
        if (bVar2) {
          puVar9 = local_78;
          _swift_isUniquelyReferenced_nonNull_native();
          local_68 = puVar8;
          if (((ulong)puVar9 & 1) == 0) {
            FUN_1001c5c4c(0,*(long *)(puVar8 + 0x10) + 1,1);
          }
          uVar1 = *(ulong *)(local_68 + 0x10);
          if (*(ulong *)(local_68 + 0x18) >> 1 <= uVar1) {
            FUN_1001c5c4c(1 < *(ulong *)(local_68 + 0x18),uVar1 + 1,1);
          }
          pcVar10 = local_80;
          puVar12 = local_90;
          *(ulong *)(local_68 + 0x10) = uVar1 + 1;
          local_78 = local_68;
          FUN_100007e64(local_90,local_68 + uVar1 * lVar11 + local_a8,FUN_10040211c);
          lVar3 = local_a0;
        }
        else {
          FUN_100029548(puVar12,FUN_10040211c);
          pcVar10 = local_80;
        }
        puVar4 = puVar4 + lVar11;
        lVar14 = lVar14 + -1;
        param_1 = local_78;
      } while (lVar14 != 0);
    }
    (*pcVar18)(local_70,DVar5.unknown);
  }
  return param_1;
}

