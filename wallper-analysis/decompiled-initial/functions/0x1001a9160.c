// rea decompile_all
// name: FUN_1001a9160
// address: 0x1001a9160
// body: available
// range: 0x1001a9160-0x1001a9357 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001a9160(long param_1,undefined8 param_2,long param_3,code *param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined *puVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 *puVar7;
  long extraout_x8;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x21;
  long lVar12;
  undefined1 auStack_d0 [8];
  undefined8 local_c8;
  long local_c0;
  long local_b8;
  ulong *local_b0;
  ulong local_a8;
  undefined1 *local_a0;
  long local_98;
  undefined *local_90;
  code *local_88;
  long local_80;
  ulong local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_c8 = param_2;
  local_c0 = param_1;
  local_88 = param_4;
  local_90 = (undefined *)Foundation::URL::typeMetadataAccessor();
  local_98 = *(long *)(local_90 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_98 + 0x40));
  local_a0 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_b0 = (ulong *)(param_3 + 0x40);
  local_b8 = 0;
  uVar10 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar11 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar11 = uVar11 & *local_b0;
  lVar9 = 0;
  local_80 = param_3;
  do {
    puVar4 = local_90;
    lVar3 = local_98;
    puVar2 = local_a0;
    if (uVar11 == 0) {
      do {
        lVar12 = lVar9 + 1;
        if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1001a9358);
          (*pcVar5)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar12) {
          FUN_1001a989c(local_c0,local_c8,local_b8,local_80);
          return;
        }
        uVar11 = local_b0[lVar12];
        lVar9 = lVar9 + 1;
      } while (uVar11 == 0);
      uVar8 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      local_78 = uVar11 - 1 & uVar11;
    }
    else {
      uVar8 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      local_78 = uVar11 - 1 & uVar11;
      lVar12 = lVar9;
    }
    local_a8 = LZCOUNT(uVar8) | lVar12 << 6;
    puVar7 = (undefined8 *)(*(long *)(local_80 + 0x30) + local_a8 * 0x10);
    local_70 = *puVar7;
    uVar1 = puVar7[1];
    uStack_68 = uVar1;
    (**(code **)(local_98 + 0x10))
              (local_a0,*(long *)(local_80 + 0x38) + *(long *)(local_98 + 0x48) * local_a8,local_90)
    ;
    _swift_bridgeObjectRetain(uVar1);
    puVar7 = &local_70;
    (*local_88)(puVar7,puVar2);
    (**(code **)(lVar3 + 8))(puVar2,puVar4);
    _swift_bridgeObjectRelease(uVar1);
    if (unaff_x21 != 0) {
      return;
    }
    uVar11 = local_78;
    lVar9 = lVar12;
    if (((ulong)puVar7 & 1) != 0) {
      uVar8 = local_a8 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(local_c0 + uVar8) = *(ulong *)(local_c0 + uVar8) | 1L << (local_a8 & 0x3f);
      bVar6 = SCARRY8(local_b8,1);
      local_b8 = local_b8 + 1;
      if (bVar6) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1001a9320);
        (*pcVar5)();
      }
    }
  } while( true );
}

