// rea decompile_all
// name: FUN_100266028
// address: 0x100266028
// body: available
// range: 0x100266028-0x10026628f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100266028(_ArrayBuffer param_1)

{
  _CocoaArrayWrapper _Var1;
  undefined *puVar2;
  code *pcVar3;
  bool bVar4;
  _SetStorage *this;
  ulong uVar5;
  AnyCancellable *pAVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  ulong uVar15;
  __int64 seed;
  undefined8 local_70;
  ulong local_68;
  
  if ((ulong)param_1.unknown >> 0x3e == 0) {
    puVar14 = *(undefined **)((param_1.unknown & 0xffffffffffffff8U) + 0x10);
  }
  else {
    _Var1.unknown = param_1.unknown & 0xffffffffffffff8U;
    if (((ulong)param_1.unknown & 0x8000000000000000) != 0) {
      _Var1.unknown = param_1.unknown;
    }
    puVar14 = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  puVar2 = PTR___swiftEmptySetSingleton_1005241a0;
  if (puVar14 != (undefined *)0x0) {
    this = (_SetStorage *)&DAT_1005581b0;
    FUN_100002f94(&DAT_1005581b0,&DAT_10042c4e8);
    Swift::_SetStorage::_allocate(this,(__int64)puVar14);
    puVar2 = puVar14;
  }
  if ((ulong)param_1.unknown >> 0x3e == 0) {
    uVar13 = *(ulong *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = param_1.unknown & 0xffffffffffffff8;
    if (((ulong)param_1.unknown & 0x8000000000000000) != 0) {
      _Var1.unknown = param_1.unknown;
    }
    uVar13 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (uVar13 != 0) {
    uVar15 = 0;
    do {
      puVar14 = PTR_typeMetadataAccessor_100521420;
      if (((ulong)param_1.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100266290);
          (*pcVar3)();
        }
        uVar5 = *(ulong *)(param_1.unknown + uVar15 * 8 + 0x20);
        _swift_retain();
      }
      else {
        uVar5 = uVar15;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar15,param_1);
      }
      if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100266288);
        (*pcVar3)();
      }
      uVar15 = uVar15 + 1;
      seed = *(__int64 *)(puVar2 + 0x28);
      local_68 = uVar5;
      pAVar6 = Combine::AnyCancellable::typeMetadataAccessor();
      FUN_1000036d0(&DAT_1005581b8,puVar14,
                    PTR_Combine__Combine__AnyCancellable_>Swift__Hashable_100521430);
      uVar7 = Swift::Hashable::_rawHashValue(seed);
      uVar12 = -1L << ((ulong)(byte)puVar2[0x20] & 0x3f);
      uVar7 = uVar7 & (uVar12 ^ 0xffffffffffffffff);
      uVar9 = uVar7 >> 6;
      uVar10 = *(ulong *)(puVar2 + uVar9 * 8 + 0x38);
      uVar11 = 1L << (uVar7 & 0x3f);
      if ((uVar11 & uVar10) != 0) {
        puVar8 = &DAT_1005581c0;
        FUN_1000036d0(&DAT_1005581c0,puVar14,
                      PTR_Combine__Combine__AnyCancellable_>Swift__Equatable_100521438);
        do {
          local_70 = *(undefined8 *)(*(long *)(puVar2 + 0x30) + uVar7 * 8);
          bVar4 = Swift::Equatable::___infix(&local_70,&local_68,pAVar6,puVar8);
          if (bVar4) {
            _swift_release(uVar5);
            goto LAB_100266110;
          }
          uVar7 = uVar7 + 1 & ~uVar12;
          uVar9 = uVar7 >> 6;
          uVar10 = *(ulong *)(puVar2 + uVar9 * 8 + 0x38);
          uVar11 = 1L << (uVar7 & 0x3f);
        } while ((uVar11 & uVar10) != 0);
      }
      *(ulong *)(puVar2 + uVar9 * 8 + 0x38) = uVar11 | uVar10;
      *(ulong *)(*(long *)(puVar2 + 0x30) + uVar7 * 8) = uVar5;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10026628c);
        (*pcVar3)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
LAB_100266110:
    } while (uVar15 != uVar13);
  }
  return puVar2;
}

