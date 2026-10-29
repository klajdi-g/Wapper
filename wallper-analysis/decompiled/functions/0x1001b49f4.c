// rea decompile_all
// name: FUN_1001b49f4
// address: 0x1001b49f4
// body: available
// range: 0x1001b49f4-0x1001b4ddf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined *
FUN_1001b49f4(long param_1,ulong param_2,code *param_3,undefined8 param_4,char *param_5,
             void *param_6)

{
  long *plVar1;
  code *pcVar2;
  ulong uVar3;
  Index after;
  Substring SVar4;
  undefined *puVar5;
  undefined *puVar6;
  Index IVar7;
  void *pvVar9;
  uint uVar10;
  ulong uVar11;
  Index IVar12;
  long unaff_x21;
  ulong uVar13;
  Character CVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  undefined *local_80;
  char *pcVar8;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b4d78);
    (*pcVar2)();
  }
  uVar11 = (ulong)param_6 >> 0x38 & 0xf;
  uVar10 = (uint)((ulong)param_5 >> 0x20);
  if (param_1 != 0) {
    uVar13 = (ulong)param_5 & 0xffffffffffff;
    if (((ulong)param_6 & 0x2000000000000000) != 0) {
      uVar13 = uVar11;
    }
    if (uVar13 != 0) {
      uVar10 = uVar10 >> 0x1b & 1;
      if (((ulong)param_6 & 0x1000000000000000) == 0) {
        uVar10 = 1;
      }
      uVar11 = 7;
      if (uVar10 == 0) {
        uVar11 = 0xb;
      }
      SVar20.str = (char *)(uVar11 | uVar13 << 0x10);
      uVar13 = uVar13 * 4;
      IVar12.unknown = (undefined *)0xf;
      local_80 = PTR___swiftEmptyArrayStorage_100524190;
LAB_1001b4a7c:
      uVar11 = (ulong)IVar12.unknown >> 0xe;
      after.unknown = IVar12.unknown;
      if (uVar11 != uVar13) {
        do {
          SVar15.bridgeObject = param_6;
          SVar15.str = param_5;
          CVar14 = Swift::String::get_subscript(after,SVar15);
          uVar3 = 0;
          (*param_3)();
          if (unaff_x21 != 0) {
            _swift_bridgeObjectRelease(local_80);
            _swift_bridgeObjectRelease(param_6);
            _swift_bridgeObjectRelease(CVar14.bridgeObject);
            return after.unknown;
          }
          _swift_bridgeObjectRelease(CVar14.bridgeObject);
          if ((uVar3 & 1) == 0) {
            SVar16.bridgeObject = param_6;
            SVar16.str = param_5;
            after = Swift::String::index(after,SVar16);
          }
          else {
            if (((ulong)IVar12.unknown >> 0xe != uVar11) || ((param_2 & 1) == 0))
            goto LAB_1001b4b38;
            SVar17.bridgeObject = param_6;
            SVar17.str = param_5;
            after = Swift::String::index(after,SVar17);
            IVar12 = after;
          }
          uVar11 = (ulong)after.unknown >> 0xe;
          if (uVar11 == uVar13) break;
        } while( true );
      }
      goto LAB_1001b4cc4;
    }
  }
  uVar13 = (ulong)param_5 & 0xffffffffffff;
  if (((ulong)param_6 & 0x2000000000000000) != 0) {
    uVar13 = uVar11;
  }
  if ((uVar13 == 0) && ((param_2 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_6);
    return PTR___swiftEmptyArrayStorage_100524190;
  }
  uVar10 = uVar10 >> 0x1b & 1;
  if (((ulong)param_6 & 0x1000000000000000) == 0) {
    uVar10 = 1;
  }
  uVar11 = 7;
  if (uVar10 == 0) {
    uVar11 = 0xb;
  }
  SVar20.str = (char *)(uVar11 | uVar13 << 0x10);
  SVar20.bridgeObject = param_5;
  pvVar9 = param_6;
  SVar4 = Swift::String::get_subscript((Range<Index>)0xf,SVar20);
  puVar6 = (undefined *)0x0;
  FUN_1001c4368(0,1,1,PTR___swiftEmptyArrayStorage_100524190);
  uVar11 = *(ulong *)(puVar6 + 0x10);
  local_80 = puVar6;
  if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar11) {
    local_80 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
    FUN_1001c4368(local_80,uVar11 + 1,1,puVar6);
  }
  *(ulong *)(local_80 + 0x10) = uVar11 + 1;
  *(undefined **)(local_80 + uVar11 * 0x20 + 0x20) = SVar4.unknown;
  *(char **)(local_80 + uVar11 * 0x20 + 0x28) = SVar20.str;
  *(char **)(local_80 + uVar11 * 0x20 + 0x30) = param_5;
  *(void **)(local_80 + uVar11 * 0x20 + 0x38) = pvVar9;
LAB_1001b4cd8:
  _swift_bridgeObjectRelease(param_6);
  return local_80;
LAB_1001b4b38:
  if (uVar11 < (ulong)IVar12.unknown >> 0xe) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b4de0);
    (*pcVar2)();
  }
  SVar18.bridgeObject = param_5;
  SVar18.str = after.unknown;
  IVar7.unknown = after.unknown;
  pcVar8 = param_5;
  pvVar9 = param_6;
  SVar4 = Swift::String::get_subscript(IVar12.unknown,SVar18);
  puVar6 = local_80;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar6 & 1) == 0) {
    plVar1 = (long *)(local_80 + 0x10);
    local_80 = (undefined *)0x0;
    FUN_1001c4368(0,*plVar1 + 1,1);
  }
  uVar11 = *(ulong *)(local_80 + 0x10);
  if (*(ulong *)(local_80 + 0x18) >> 1 <= uVar11) {
    puVar6 = (undefined *)(ulong)(1 < *(ulong *)(local_80 + 0x18));
    FUN_1001c4368(puVar6,uVar11 + 1,1,local_80);
    local_80 = puVar6;
  }
  *(ulong *)(local_80 + 0x10) = uVar11 + 1;
  *(undefined **)(local_80 + uVar11 * 0x20 + 0x20) = SVar4.unknown;
  *(undefined **)(local_80 + uVar11 * 0x20 + 0x28) = IVar7.unknown;
  *(char **)(local_80 + uVar11 * 0x20 + 0x30) = pcVar8;
  *(void **)(local_80 + uVar11 * 0x20 + 0x38) = pvVar9;
  SVar19.bridgeObject = param_6;
  SVar19.str = param_5;
  IVar12 = Swift::String::index(after,SVar19);
  if (*(long *)(local_80 + 0x10) == param_1) goto LAB_1001b4cc4;
  goto LAB_1001b4a7c;
LAB_1001b4cc4:
  if (((ulong)IVar12.unknown >> 0xe != uVar13) || ((param_2 & 1) == 0)) {
    if ((ulong)IVar12.unknown >> 0xe <= uVar13) {
      SVar21.bridgeObject = param_5;
      SVar21.str = SVar20.str;
      pvVar9 = param_6;
      SVar4 = Swift::String::get_subscript(IVar12.unknown,SVar21);
      _swift_bridgeObjectRelease(param_6);
      puVar6 = local_80;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar5 = local_80;
      if (((ulong)puVar6 & 1) == 0) {
        puVar5 = (undefined *)0x0;
        FUN_1001c4368(0,*(long *)(local_80 + 0x10) + 1,1,local_80);
      }
      uVar11 = *(ulong *)(puVar5 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar11) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        FUN_1001c4368(puVar6,uVar11 + 1,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar11 + 1;
      *(undefined **)(puVar6 + uVar11 * 0x20 + 0x20) = SVar4.unknown;
      *(char **)(puVar6 + uVar11 * 0x20 + 0x28) = SVar20.str;
      *(char **)(puVar6 + uVar11 * 0x20 + 0x30) = param_5;
      *(void **)(puVar6 + uVar11 * 0x20 + 0x38) = pvVar9;
      return puVar6;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b4d9c);
    (*pcVar2)();
  }
  goto LAB_1001b4cd8;
}

