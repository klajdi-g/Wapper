// rea decompile_all
// name: FUN_10017e6a4
// address: 0x10017e6a4
// body: available
// range: 0x10017e6a4-0x10017e837 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010017e7a4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined8 FUN_10017e6a4(undefined *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  NSComparisonResult NVar7;
  undefined8 uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined *local_70;
  undefined8 uStack_68;
  
  puVar5 = &DAT_10042a160;
  _swift_getKeyPath(&DAT_10042a160);
  puVar6 = &DAT_10042a188;
  _swift_getKeyPath(&DAT_10042a188);
  Combine::Published::_get_subscript(&local_70);
  _swift_release(puVar5);
  _swift_release(puVar6);
  puVar5 = local_70;
  puVar9 = (ulong *)(local_70 + 0x38);
  uVar11 = -1L << ((ulong)(byte)local_70[0x20] & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if (-uVar11 < 0x40) {
    uVar14 = ~(-1L << (-uVar11 & 0x3f));
  }
  uVar14 = uVar14 & *puVar9;
  NVar7.unknown = local_70;
  local_70 = param_1;
  uStack_68 = param_2;
  _swift_bridgeObjectRetain(puVar5);
  puVar6 = PTR___type_metadata_for_Swift_String_100523a98;
  lVar12 = 0;
  uVar1 = uVar14;
  lVar2 = lVar12;
  do {
    while (lVar13 = lVar2, uVar10 = uVar1, uVar14 != 0) {
      uVar14 = uVar14 - 1 & uVar14;
      FUN_100026df4();
      NVar7 = (extension_Foundation)::Swift::StringProtocol::_caseInsensitiveCompare
                        (NVar7.unknown,puVar6,puVar6,NVar7.unknown,NVar7.unknown);
      uVar1 = uVar14;
      lVar2 = lVar12;
      if (NVar7.unknown == (undefined *)0x0) {
        uVar8 = 1;
LAB_10017e7e8:
        FUN_10002f6ec(puVar5,puVar9,~uVar11,lVar13,uVar10);
        _swift_bridgeObjectRelease(puVar5);
        return uVar8;
      }
    }
    bVar4 = SCARRY8(lVar12,1);
    lVar12 = lVar12 + 1;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10017e838);
      (*pcVar3)();
    }
    if ((long)(0x3f - uVar11 >> 6) <= lVar12) {
      uVar10 = 0;
      uVar8 = 0;
      goto LAB_10017e7e8;
    }
    uVar14 = puVar9[lVar12];
    uVar1 = uVar10;
    lVar2 = lVar13;
  } while( true );
}

