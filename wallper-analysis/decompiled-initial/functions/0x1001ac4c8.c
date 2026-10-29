// rea decompile_all
// name: FUN_1001ac4c8
// address: 0x1001ac4c8
// body: available
// range: 0x1001ac4c8-0x1001ac633 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001001ac5b8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1001ac4c8(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  NSComparisonResult NVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long local_88;
  
  puVar1 = PTR___type_metadata_for_Swift_String_100523a98;
  local_88 = 0;
  lVar8 = 0;
  uVar7 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar9 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar9 = ~(-1L << (uVar7 & 0x3f));
  }
  uVar9 = uVar9 & *(ulong *)(param_3 + 0x38);
  NVar4.unknown = param_1;
  do {
    if (uVar9 == 0) {
      do {
        bVar3 = SCARRY8(lVar8,1);
        lVar8 = lVar8 + 1;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1001ac634);
          (*pcVar2)();
        }
        if ((long)(uVar7 + 0x3f >> 6) <= lVar8) {
          _swift_retain(param_3);
          FUN_1001a8dcc(param_1,param_2,local_88,param_3);
          return;
        }
        uVar9 = ((ulong *)(param_3 + 0x38))[lVar8];
      } while (uVar9 == 0);
      uVar5 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar9 = uVar9 - 1 & uVar9;
    }
    else {
      uVar5 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar9 = uVar9 - 1 & uVar9;
    }
    FUN_100026df4();
    NVar4 = (extension_Foundation)::Swift::StringProtocol::_caseInsensitiveCompare
                      (NVar4.unknown,puVar1,puVar1,NVar4.unknown,NVar4.unknown);
    if (NVar4.unknown != (undefined *)0x0) {
      uVar6 = (LZCOUNT(uVar5) & 0xffffffffffffffc0U | lVar8 << 6) >> 3;
      *(ulong *)(param_1 + uVar6) = *(ulong *)(param_1 + uVar6) | 1L << (LZCOUNT(uVar5) & 0x3fU);
      bVar3 = SCARRY8(local_88,1);
      local_88 = local_88 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1001ac5f4);
        (*pcVar2)();
      }
    }
  } while( true );
}

