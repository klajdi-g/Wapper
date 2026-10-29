// rea decompile_all
// name: FUN_1001c90b8
// address: 0x1001c90b8
// body: available
// range: 0x1001c90b8-0x1001c9207 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1001c90b8(void)

{
  __RawSetStorage *p_Var1;
  code *pcVar2;
  _SetStorage *this;
  __RawSetStorage *p_Var3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *unaff_x20;
  __RawSetStorage *original;
  long lVar8;
  
  this = (_SetStorage *)&DAT_1005569d0;
  FUN_100002f94(&DAT_1005569d0,&DAT_10042aad0);
  original = (__RawSetStorage *)*unaff_x20;
  p_Var3 = original;
  Swift::_SetStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x38;
    uVar4 = (1L << ((ulong)(byte)p_Var3[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var3 != original || p_Var1 + uVar4 * 8 <= p_Var3 + 0x38) {
      _memmove(p_Var3 + 0x38,p_Var1,uVar4 << 3);
    }
    *(undefined8 *)(p_Var3 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar5 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar4 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar4 = ~(-1L << (uVar5 & 0x3f));
    }
    uVar4 = uVar4 & *(ulong *)(original + 0x38);
    lVar7 = 0;
    do {
      if (uVar4 == 0) {
        do {
          lVar8 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1001c9208);
            (*pcVar2)();
          }
          if ((long)(uVar5 + 0x3f >> 6) <= lVar8) goto LAB_1001c91e0;
          uVar4 = *(ulong *)(p_Var1 + lVar8 * 8);
          lVar7 = lVar7 + 1;
        } while (uVar4 == 0);
        uVar6 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
        uVar4 = uVar4 - 1 & uVar4;
      }
      else {
        uVar6 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
        uVar4 = uVar4 - 1 & uVar4;
        lVar8 = lVar7;
      }
      uVar6 = LZCOUNT(uVar6) | lVar8 << 6;
      *(undefined8 *)(*(long *)(p_Var3 + 0x30) + uVar6 * 8) =
           *(undefined8 *)(*(long *)(original + 0x30) + uVar6 * 8);
      lVar7 = lVar8;
    } while( true );
  }
LAB_1001c91e0:
  _swift_release(original);
  *unaff_x20 = (long)p_Var3;
  return;
}

