// rea decompile_all
// name: FUN_10017e27c
// address: 0x10017e27c
// body: available
// range: 0x10017e27c-0x10017e6a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10017e27c(void)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  _DictionaryStorage *this;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined *local_70;
  
  uVar12 = 0x6c61646974;
  local_f8 = 0x6c61646974;
  uStack_f0 = 0xe500000000000000;
  puVar4 = &DAT_100549eb0;
  FUN_100002f94(&DAT_100549eb0,&DAT_100426be0);
  puVar5 = puVar4;
  _swift_initStaticObject();
  uStack_e0 = 0x7265646963;
  local_d8 = 0xe500000000000000;
  puVar6 = puVar4;
  local_e8 = puVar5;
  _swift_initStaticObject(puVar4,&DAT_100556130);
  uStack_c8 = 0x72657a656564;
  local_c0 = 0xe600000000000000;
  puVar7 = puVar4;
  local_d0 = puVar6;
  _swift_initStaticObject(puVar4,&DAT_100556178);
  uStack_b0 = 0x636c76;
  local_a8 = 0xe300000000000000;
  puVar8 = puVar4;
  local_b8 = puVar7;
  _swift_initStaticObject(puVar4,&DAT_1005561b0);
  uStack_98 = 0x616e6969;
  local_90 = 0xe400000000000000;
  puVar9 = puVar4;
  local_a0 = puVar8;
  _swift_initStaticObject(puVar4,&DAT_1005561e8);
  uStack_80 = 0x6d69746b63697571;
  local_78 = 0xe900000000000065;
  local_88 = puVar9;
  _swift_initStaticObject(puVar4,&DAT_100556220);
  this = (_DictionaryStorage *)&DAT_100556250;
  local_70 = puVar4;
  FUN_100002f94(&DAT_100556250,&DAT_10042a030);
  lVar10 = 6;
  Swift::_DictionaryStorage::_allocate(this,6);
  _swift_retain();
  uVar11 = 0;
  FUN_10000464c();
  if ((uVar11 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10017e678);
    (*pcVar3)();
  }
  lVar1 = lVar10 + 0x40;
  uVar11 = uVar12 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar11) = *(ulong *)(lVar1 + uVar11) | 1L << (uVar12 & 0x3f);
  puVar2 = (undefined8 *)(*(long *)(lVar10 + 0x30) + uVar12 * 0x10);
  *puVar2 = 0x6c61646974;
  puVar2[1] = 0xe500000000000000;
  *(undefined **)(*(long *)(lVar10 + 0x38) + uVar12 * 8) = puVar5;
  if (SCARRY8(*(long *)(lVar10 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10017e67c);
    (*pcVar3)();
  }
  *(long *)(lVar10 + 0x10) = *(long *)(lVar10 + 0x10) + 1;
  uVar12 = 0x7265646963;
  uVar11 = 0;
  FUN_10000464c();
  if ((uVar11 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10017e680);
    (*pcVar3)();
  }
  uVar11 = uVar12 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar11) = *(ulong *)(lVar1 + uVar11) | 1L << (uVar12 & 0x3f);
  puVar2 = (undefined8 *)(*(long *)(lVar10 + 0x30) + uVar12 * 0x10);
  *puVar2 = 0x7265646963;
  puVar2[1] = 0xe500000000000000;
  *(undefined **)(*(long *)(lVar10 + 0x38) + uVar12 * 8) = puVar6;
  if (SCARRY8(*(long *)(lVar10 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10017e684);
    (*pcVar3)();
  }
  *(long *)(lVar10 + 0x10) = *(long *)(lVar10 + 0x10) + 1;
  uVar12 = 0x72657a656564;
  uVar11 = 0;
  FUN_10000464c();
  if ((uVar11 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10017e688);
    (*pcVar3)();
  }
  uVar11 = uVar12 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar11) = *(ulong *)(lVar1 + uVar11) | 1L << (uVar12 & 0x3f);
  puVar2 = (undefined8 *)(*(long *)(lVar10 + 0x30) + uVar12 * 0x10);
  *puVar2 = 0x72657a656564;
  puVar2[1] = 0xe600000000000000;
  *(undefined **)(*(long *)(lVar10 + 0x38) + uVar12 * 8) = puVar7;
  if (SCARRY8(*(long *)(lVar10 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10017e68c);
    (*pcVar3)();
  }
  *(long *)(lVar10 + 0x10) = *(long *)(lVar10 + 0x10) + 1;
  uVar12 = 0x636c76;
  uVar11 = 0;
  FUN_10000464c();
  if ((uVar11 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10017e690);
    (*pcVar3)();
  }
  uVar11 = uVar12 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar11) = *(ulong *)(lVar1 + uVar11) | 1L << (uVar12 & 0x3f);
  puVar2 = (undefined8 *)(*(long *)(lVar10 + 0x30) + uVar12 * 0x10);
  *puVar2 = 0x636c76;
  puVar2[1] = 0xe300000000000000;
  *(undefined **)(*(long *)(lVar10 + 0x38) + uVar12 * 8) = puVar8;
  if (!SCARRY8(*(long *)(lVar10 + 0x10),1)) {
    *(long *)(lVar10 + 0x10) = *(long *)(lVar10 + 0x10) + 1;
    uVar12 = 0x616e6969;
    uVar11 = 0;
    FUN_10000464c();
    if ((uVar11 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10017e698);
      (*pcVar3)();
    }
    uVar11 = uVar12 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = *(ulong *)(lVar1 + uVar11) | 1L << (uVar12 & 0x3f);
    puVar2 = (undefined8 *)(*(long *)(lVar10 + 0x30) + uVar12 * 0x10);
    *puVar2 = 0x616e6969;
    puVar2[1] = 0xe400000000000000;
    *(undefined **)(*(long *)(lVar10 + 0x38) + uVar12 * 8) = puVar9;
    if (SCARRY8(*(long *)(lVar10 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10017e69c);
      (*pcVar3)();
    }
    *(long *)(lVar10 + 0x10) = *(long *)(lVar10 + 0x10) + 1;
    uVar11 = 0x6d69746b63697571;
    uVar12 = 0xe900000000000065;
    FUN_10000464c();
    if ((uVar12 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10017e6a0);
      (*pcVar3)();
    }
    uVar12 = uVar11 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar12) = *(ulong *)(lVar1 + uVar12) | 1L << (uVar11 & 0x3f);
    puVar2 = (undefined8 *)(*(long *)(lVar10 + 0x30) + uVar11 * 0x10);
    *puVar2 = 0x6d69746b63697571;
    puVar2[1] = 0xe900000000000065;
    *(undefined **)(*(long *)(lVar10 + 0x38) + uVar11 * 8) = puVar4;
    if (!SCARRY8(*(long *)(lVar10 + 0x10),1)) {
      *(long *)(lVar10 + 0x10) = *(long *)(lVar10 + 0x10) + 1;
      _swift_release(lVar10);
      puVar4 = &DAT_100556258;
      FUN_100002f94(&DAT_100556258,&DAT_10042a038);
      _swift_arrayDestroy(&local_f8,6,puVar4);
      DAT_1005560e8 = lVar10;
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10017e6a4);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10017e694);
  (*pcVar3)();
}

