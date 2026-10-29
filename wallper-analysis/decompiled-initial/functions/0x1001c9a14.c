// rea decompile_all
// name: FUN_1001c9a14
// address: 0x1001c9a14
// body: available
// range: 0x1001c9a14-0x1001c9c93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001c9a14(long param_1)

{
  bool bVar1;
  code *pcVar2;
  _SetStorage *this;
  __RawSetStorage *p_Var3;
  Hasher into;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *unaff_x20;
  __int64 _Var10;
  ulong uVar11;
  __RawSetStorage *p_Var12;
  __RawSetStorage *original;
  undefined8 uVar13;
  long lVar14;
  String SVar15;
  undefined1 auStack_a8 [72];
  
  original = (__RawSetStorage *)*unaff_x20;
  _Var10 = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    _Var10 = param_1;
  }
  this = (_SetStorage *)&DAT_1005569d0;
  FUN_100002f94(&DAT_1005569d0,&DAT_10042aad0);
  p_Var3 = original;
  Swift::_SetStorage::_resize(this,original,_Var10,true);
  if (*(long *)(original + 0x10) == 0) {
LAB_1001c9c60:
    _swift_release(original);
    *unaff_x20 = (long)p_Var3;
    return;
  }
  p_Var12 = original + 0x38;
  uVar8 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar11 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar11 = uVar11 & *(ulong *)p_Var12;
  lVar6 = 0;
  do {
    if (uVar11 == 0) {
      do {
        lVar14 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1001c9c90);
          (*pcVar2)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar14) {
          uVar11 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var12 = -1L << (uVar11 & 0x3f);
          }
          else {
            _bzero(p_Var12,uVar11 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_1001c9c60;
        }
        uVar11 = *(ulong *)(p_Var12 + lVar14 * 8);
        lVar6 = lVar6 + 1;
      } while (uVar11 == 0);
      uVar5 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
    }
    else {
      uVar5 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
      lVar14 = lVar6;
    }
    uVar13 = *(undefined8 *)(*(long *)(original + 0x30) + (LZCOUNT(uVar5) | lVar14 << 6) * 8);
    _Var10 = *(__int64 *)(p_Var3 + 0x28);
    SVar15 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    Swift::Hasher::init(_Var10);
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar15);
    uVar4 = Swift::Hasher::_finalize(into);
    _swift_bridgeObjectRelease(SVar15.bridgeObject);
    uVar9 = -1L << ((ulong)(byte)p_Var3[0x20] & 0x3f);
    uVar4 = uVar4 & (uVar9 ^ 0xffffffffffffffff);
    uVar7 = uVar4 >> 6;
    uVar5 = -1L << (uVar4 & 0x3f) & (*(ulong *)(p_Var3 + uVar7 * 8 + 0x38) ^ 0xffffffffffffffff);
    if (uVar5 == 0) {
      bVar1 = false;
      uVar5 = 0x3f - uVar9 >> 6;
      do {
        uVar4 = uVar7 + 1;
        if ((uVar4 == uVar5) && (bVar1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1001c9c94);
          (*pcVar2)();
        }
        uVar7 = 0;
        if (uVar4 != uVar5) {
          uVar7 = uVar4;
        }
        bVar1 = (bool)(uVar4 == uVar5 | bVar1);
      } while (*(ulong *)(p_Var3 + uVar7 * 8 + 0x38) == 0xffffffffffffffff);
      uVar5 = ~*(ulong *)(p_Var3 + uVar7 * 8 + 0x38);
      uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar7 << 6;
    }
    else {
      uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar4 & 0x7fffffffffffffc0;
    }
    uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var3 + uVar7 + 0x38) = 1L << (uVar5 & 0x3f) | *(ulong *)(p_Var3 + uVar7 + 0x38);
    *(undefined8 *)(*(long *)(p_Var3 + 0x30) + uVar5 * 8) = uVar13;
    *(long *)(p_Var3 + 0x10) = *(long *)(p_Var3 + 0x10) + 1;
    lVar6 = lVar14;
  } while( true );
}

