// rea decompile_all
// name: FUN_10029bd0c
// address: 0x10029bd0c
// body: available
// range: 0x10029bd0c-0x10029bf03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10029bd0c(undefined8 *param_1,__uint8 *param_2,long param_3,undefined *param_4,
                  ulong param_5,UTF8View param_6,ulong param_7)

{
  ulong uVar1;
  code *pcVar2;
  __uint8 _Var3;
  Index IVar4;
  Index position;
  UnsafeBufferPointer<__int8> UVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined *local_70;
  ulong uStack_68;
  
  IVar4.unknown = param_4;
  if (param_2 != (__uint8 *)0x0) {
    lVar7 = param_3;
    if (param_3 == 0) goto LAB_10029bd60;
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10029bf04);
      (*pcVar2)();
    }
    uVar11 = param_5 >> 0xe;
    if ((ulong)param_4 >> 0xe != uVar11) {
      uVar6 = (uint)((ulong)param_6.unknown >> 0x3b) & 1;
      if ((param_7 & 0x1000000000000000) == 0) {
        uVar6 = 1;
      }
      uVar9 = 4L << uVar6;
      uVar1 = (ulong)param_6.unknown & 0xffffffffffff;
      if ((param_7 & 0x2000000000000000) != 0) {
        uVar1 = param_7 >> 0x38 & 0xf;
      }
      lVar10 = 1;
      do {
        uVar8 = (ulong)IVar4.unknown & 0xc;
        position.unknown = IVar4.unknown;
        if (uVar8 == uVar9) {
          FUN_10028763c(IVar4.unknown,param_6.unknown,param_7);
        }
        if (((ulong)position.unknown >> 0xe < (ulong)param_4 >> 0xe) ||
           (uVar11 <= (ulong)position.unknown >> 0xe)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10029befc);
          (*pcVar2)();
        }
        if ((param_7 >> 0x3c & 1) == 0) {
          if ((param_7 >> 0x3d & 1) != 0) {
            local_70 = param_6.unknown;
            uStack_68 = param_7 & 0xffffffffffffff;
            _Var3 = *(__uint8 *)((long)&local_70 + ((ulong)position.unknown >> 0x10));
            goto joined_r0x00010029be3c;
          }
          UVar5.unknown = (undefined *)((param_7 & 0xfffffffffffffff) + 0x20);
          if (((ulong)param_6.unknown >> 0x3c & 1) == 0) {
            UVar5 = Swift::_StringObject::get_sharedUTF8(param_6.unknown);
          }
          _Var3 = UVar5.unknown[(ulong)position.unknown >> 0x10];
          if (uVar8 == uVar9) goto LAB_10029be70;
LAB_10029be40:
          if ((param_7 >> 0x3c & 1) == 0) goto LAB_10029be44;
LAB_10029be88:
          if (uVar1 <= (ulong)IVar4.unknown >> 0x10) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10029bf00);
            (*pcVar2)();
          }
          IVar4 = Swift::String::UTF8View::_foreignIndex(IVar4,param_6);
        }
        else {
          _Var3 = Swift::String::UTF8View::_foreignSubscript(position,param_6);
joined_r0x00010029be3c:
          if (uVar8 != uVar9) goto LAB_10029be40;
LAB_10029be70:
          FUN_10028763c(IVar4.unknown,param_6.unknown,param_7);
          if ((param_7 >> 0x3c & 1) != 0) goto LAB_10029be88;
LAB_10029be44:
          IVar4.unknown = (undefined *)(((ulong)IVar4.unknown & 0xffffffffffff0000) + 0x10004);
        }
        *param_2 = _Var3;
        lVar7 = param_3;
        if ((param_3 == lVar10) || (lVar7 = lVar10, uVar11 == (ulong)IVar4.unknown >> 0xe))
        goto LAB_10029bd60;
        lVar10 = lVar10 + 1;
        param_2 = param_2 + 1;
      } while( true );
    }
  }
  lVar7 = 0;
LAB_10029bd60:
  *param_1 = param_4;
  param_1[1] = param_5;
  param_1[2] = param_6.unknown;
  param_1[3] = param_7;
  param_1[4] = IVar4.unknown;
  return lVar7;
}

