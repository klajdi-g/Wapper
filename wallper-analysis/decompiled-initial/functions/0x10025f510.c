// rea decompile_all
// name: FUN_10025f510
// address: 0x10025f510
// body: available
// range: 0x10025f510-0x10025f7cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010025f7c0) */

undefined * FUN_10025f510(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x8;
  long lVar6;
  long extraout_x8_00;
  undefined8 *puVar7;
  long extraout_x12;
  long extraout_x12_00;
  long lVar8;
  long unaff_x20;
  undefined *puVar9;
  undefined *local_b0;
  long local_a8;
  undefined8 *local_a0;
  long local_98;
  undefined8 *local_90;
  long local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_68;
  
  puVar5 = &DAT_100556878;
  FUN_100002f94(&DAT_100556878,&DAT_10042a730);
  lVar8 = *(long *)(puVar5 + -8);
  local_80 = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar8 + 0x40));
  puVar7 = (undefined8 *)((long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_a0 = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar7 = (undefined8 *)((long)puVar7 - extraout_x12);
  local_90 = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar6 = (long)puVar7 - extraout_x12_00;
  lVar4 = 0;
  local_98 = lVar6;
  FUN_100266c2c();
  local_88 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_88 + 0x40));
  lVar6 = lVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_10025ee04();
  puVar5 = *(undefined **)(unaff_x20 + *(int *)(lVar4 + 0x34));
  FUN_100265358();
  local_68 = puVar5;
  FUN_10025f348(&local_68);
  puVar5 = local_68;
  lVar4 = *(long *)(local_68 + 0x10);
  if (lVar4 == 0) {
    _swift_release(local_68);
    puVar5 = PTR___swiftEmptyArrayStorage_100524190;
  }
  else {
    local_68 = PTR___swiftEmptyArrayStorage_100524190;
    FUN_1001c5cbc(0,lVar4,0);
    lVar2 = local_98;
    puVar9 = puVar5 + ((ulong)*(byte *)(lVar8 + 0x50) + 0x20 &
                      ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff));
    local_a8 = *(long *)(lVar8 + 0x48);
    local_b0 = puVar5;
    puVar5 = local_68;
    do {
      local_78 = puVar5;
      FUN_1000087e4(puVar9,lVar2,&DAT_100556878,&DAT_10042a730);
      puVar3 = local_90;
      FUN_1000087e4(lVar2,local_90,&DAT_100556878,&DAT_10042a730);
      puVar7 = local_a0;
      lVar8 = (long)*(int *)(local_80 + 0x30);
      *local_a0 = *puVar3;
      FUN_100007e64((long)puVar3 + lVar8,(long)puVar7 + lVar8,FUN_100266c2c);
      FUN_100029504((long)puVar7 + lVar8,lVar6,FUN_100266c2c);
      FUN_10002a29c(puVar7,&DAT_100556878,&DAT_10042a730);
      puVar5 = local_78;
      FUN_10002a29c(lVar2,&DAT_100556878,&DAT_10042a730);
      local_68 = puVar5;
      uVar1 = *(ulong *)(puVar5 + 0x10);
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
        FUN_1001c5cbc(1 < *(ulong *)(puVar5 + 0x18),uVar1 + 1,1);
      }
      puVar5 = local_68;
      *(ulong *)(local_68 + 0x10) = uVar1 + 1;
      FUN_100007e64(lVar6,local_68 +
                          *(long *)(local_88 + 0x48) * uVar1 +
                          ((ulong)*(byte *)(local_88 + 0x50) + 0x20 &
                          ((ulong)*(byte *)(local_88 + 0x50) ^ 0xffffffffffffffff)),FUN_100266c2c);
      puVar9 = puVar9 + local_a8;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    _swift_release(local_b0);
  }
  return puVar5;
}

