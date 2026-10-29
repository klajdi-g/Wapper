// rea decompile_all
// name: FUN_1001c3c20
// address: 0x1001c3c20
// body: available
// range: 0x1001c3c20-0x1001c4063 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1001c3c20(long param_1,long param_2)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  long extraout_x8_01;
  ulong uVar9;
  ulong uVar10;
  long extraout_x12;
  long extraout_x12_00;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong local_c0;
  ulong *local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  ulong local_98;
  ulong local_90;
  long local_88;
  long local_80;
  ulong local_78;
  long local_70;
  undefined *puStack_68;
  
  lVar3 = 0;
  FUN_1001d537c();
  lVar3 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar3 + 0x40));
  uVar14 = (long)&local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_90 = uVar14;
  (*(code *)PTR____chkstk_darwin_100521118)();
  uVar14 = uVar14 - extraout_x12;
  puStack_68 = (undefined *)Foundation::UUID::typeMetadataAccessor();
  local_70 = *(long *)(puStack_68 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_70 + 0x40));
  lVar8 = uVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100556890;
  local_88 = lVar8;
  FUN_100002f94(&DAT_100556890,&DAT_10042a7c0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar8 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_80 = lVar8 - extraout_x12_00;
  if (param_1 == param_2) {
    uVar7 = 1;
  }
  else {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) {
      local_b8 = (ulong *)(param_1 + 0x40);
      uVar9 = *local_b8;
      uVar10 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      uVar16 = 0xffffffffffffffff;
      if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
        uVar16 = ~(-1L << (uVar10 & 0x3f));
      }
      local_c0 = uVar10 + 0x3f >> 6;
      local_a8 = param_1;
      _swift_bridgeObjectRetain(param_1);
      _swift_bridgeObjectRetain(param_2);
      lVar13 = 0;
      uVar16 = uVar16 & uVar9;
      local_b0 = lVar3;
      local_a0 = lVar8;
      local_98 = uVar14;
      do {
        lVar15 = local_80;
        lVar5 = local_a0;
        lVar8 = local_a8;
        puVar4 = &DAT_100556898;
        if (uVar16 == 0) {
          uVar14 = local_c0;
          if ((long)local_c0 <= lVar13 + 1) {
            uVar14 = lVar13 + 1;
          }
          lVar11 = uVar14 - 1;
          lVar12 = lVar13;
          do {
            lVar13 = lVar12 + 1;
            if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1001c4064);
              (*pcVar2)();
            }
            if ((long)local_c0 <= lVar13) {
              puVar6 = puVar4;
              FUN_100002f94(&DAT_100556898,&DAT_10042a7c8);
              (**(code **)(*(long *)(puVar6 + -8) + 0x38))(lVar5,1,1,puVar6);
              local_78 = 0;
              goto LAB_1001c3ea4;
            }
            uVar14 = local_b8[lVar13];
            lVar12 = lVar12 + 1;
          } while (uVar14 == 0);
          uVar16 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
          uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
          uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
          uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
          local_78 = uVar14 - 1 & uVar14;
          uVar14 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) | lVar13 * 0x40;
        }
        else {
          uVar14 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
          uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
          uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
          uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
          local_78 = uVar16 - 1 & uVar16;
          uVar14 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) | lVar13 << 6;
        }
        (**(code **)(local_70 + 0x10))
                  (local_a0,*(long *)(local_a8 + 0x30) + *(long *)(local_70 + 0x48) * uVar14,
                   puStack_68);
        puVar6 = puVar4;
        FUN_100002f94(&DAT_100556898,&DAT_10042a7c8);
        lVar3 = local_b0;
        FUN_100029504(*(long *)(lVar8 + 0x38) + *(long *)(local_b0 + 0x48) * uVar14,
                      lVar5 + *(int *)(puVar6 + 0x30),FUN_1001d537c);
        (**(code **)(*(long *)(puVar6 + -8) + 0x38))(lVar5,0,1,puVar6);
        lVar11 = lVar13;
        lVar15 = local_80;
LAB_1001c3ea4:
        FUN_100007e1c(lVar5,lVar15,&DAT_100556890,&DAT_10042a7c0);
        FUN_100002f94(&DAT_100556898,&DAT_10042a7c8);
        lVar5 = lVar15;
        (**(code **)(*(long *)(puVar4 + -8) + 0x30))(lVar15,1,puVar4);
        puVar6 = puStack_68;
        lVar13 = local_70;
        lVar8 = local_88;
        if ((int)lVar5 == 1) {
          _swift_bridgeObjectRelease(param_2);
          _swift_bridgeObjectRelease(local_a8);
          return 1;
        }
        iVar1 = *(int *)(puVar4 + 0x30);
        (**(code **)(local_70 + 0x20))(local_88,lVar15,puStack_68);
        uVar14 = local_98;
        uVar9 = local_98;
        FUN_100007e64(lVar15 + iVar1,local_98,FUN_1001d537c);
        lVar5 = lVar8;
        FUN_10000476c(lVar8);
        (**(code **)(lVar13 + 8))(lVar8,puVar6);
        uVar16 = local_90;
        if ((uVar9 & 1) == 0) {
          _swift_bridgeObjectRelease(param_2);
          _swift_bridgeObjectRelease(local_a8);
          FUN_100029548(uVar14,FUN_1001d537c);
          goto LAB_1001c403c;
        }
        FUN_100029504(*(long *)(param_2 + 0x38) + *(long *)(lVar3 + 0x48) * lVar5,local_90,
                      FUN_1001d537c);
        uVar9 = uVar16;
        FUN_1001da410(uVar16,uVar14);
        FUN_100029548(uVar16,FUN_1001d537c);
        FUN_100029548(uVar14,FUN_1001d537c);
        lVar13 = lVar11;
        uVar16 = local_78;
      } while ((uVar9 & 1) != 0);
      _swift_bridgeObjectRelease(param_2);
      _swift_bridgeObjectRelease(local_a8);
    }
LAB_1001c403c:
    uVar7 = 0;
  }
  return uVar7;
}

