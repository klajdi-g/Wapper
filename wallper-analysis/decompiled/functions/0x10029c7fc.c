// rea decompile_all
// name: FUN_10029c7fc
// address: 0x10029c7fc
// body: available
// range: 0x10029c7fc-0x10029ca0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10029c7fc(long param_1,Index param_2,Index param_3,UTF8View param_4,ulong param_5,
                  code *param_6)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  Index to;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 local_70 [16];
  
  uVar4 = (uint)((ulong)param_4.unknown >> 0x3b) & 1;
  if ((param_5 & 0x1000000000000000) == 0) {
    uVar4 = 1;
  }
  uVar6 = 4L << uVar4;
  to.unknown = param_2.unknown;
  if (((ulong)param_2.unknown & 0xc) == uVar6) {
    FUN_10028763c(param_2.unknown,param_4.unknown,param_5);
  }
  if ((param_5 >> 0x3c & 1) == 0) {
    uVar5 = (ulong)to.unknown >> 0x10;
  }
  else {
    uVar5 = (ulong)param_4.unknown & 0xffffffffffff;
    if ((param_5 & 0x2000000000000000) != 0) {
      uVar5 = param_5 >> 0x38 & 0xf;
    }
    if (uVar5 < (ulong)to.unknown >> 0x10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10029ca10);
      (*pcVar2)();
    }
    uVar5 = Swift::String::UTF8View::_foreignDistance((Index)0xf,to,param_4);
  }
  if (((ulong)param_2.unknown & 0xc) == uVar6) {
    FUN_10028763c(param_2.unknown,param_4.unknown,param_5);
  }
  if (((ulong)param_3.unknown & 0xc) == uVar6) {
    FUN_10028763c(param_3.unknown,param_4.unknown,param_5);
  }
  if ((param_5 >> 0x3c & 1) == 0) {
    lVar3 = ((ulong)param_3.unknown >> 0x10) - ((ulong)param_2.unknown >> 0x10);
  }
  else {
    uVar6 = (ulong)param_4.unknown & 0xffffffffffff;
    if ((param_5 & 0x2000000000000000) != 0) {
      uVar6 = param_5 >> 0x38 & 0xf;
    }
    if (uVar6 < (ulong)param_2.unknown >> 0x10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10029ca08);
      (*pcVar2)();
    }
    if (uVar6 < (ulong)param_3.unknown >> 0x10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10029ca0c);
      (*pcVar2)();
    }
    lVar3 = Swift::String::UTF8View::_foreignDistance(param_2,param_3,param_4);
  }
  if (SCARRY8(uVar5,lVar3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10029ca00);
    (*pcVar2)();
  }
  if ((long)uVar5 <= (long)(uVar5 + lVar3)) {
    lVar1 = 0;
    if (param_1 != 0) {
      lVar1 = uVar5 + param_1;
    }
    (*param_6)(local_70,lVar1,(uVar5 + lVar3) - uVar5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10029ca04);
  (*pcVar2)();
}

