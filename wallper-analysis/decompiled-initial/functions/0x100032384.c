// rea decompile_all
// name: FUN_100032384
// address: 0x100032384
// body: available
// range: 0x100032384-0x100032717 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100032508) */
/* WARNING: Removing unreachable block (ram,0x000100032700) */

undefined1  [16] FUN_100032384(char *param_1,void *param_2)

{
  _StringObject _Var1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 uVar7;
  long lVar8;
  String *pSVar9;
  String *pSVar10;
  UnsafeBufferPointer<__int8> UVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  ulong *puVar19;
  ulong uVar20;
  ulong uVar21;
  String SVar22;
  undefined1 auVar23 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  String local_70;
  
  if (param_2 == (void *)0x0) {
    uVar7 = 0;
    uVar17 = 0;
    goto LAB_100032668;
  }
  SVar22.bridgeObject = param_2;
  SVar22.str = param_1;
  SVar22 = Swift::String::lowercased(SVar22);
  puVar14 = SVar22.bridgeObject;
  pcVar5 = SVar22.str;
  uVar21 = (ulong)pcVar5 & 0xffffffffffff;
  if (((ulong)puVar14 & 0x2000000000000000) != 0) {
    uVar21 = (ulong)puVar14 >> 0x38 & 0xf;
  }
  if (uVar21 != 0) {
    local_80 = 0x6b38;
    uStack_78 = 0xe200000000000000;
    pcVar6 = pcVar5;
    local_70 = SVar22;
    FUN_100026df4();
    bVar4 = (extension_Foundation)::Swift::StringProtocol::_contains
                      (&local_80,PTR___type_metadata_for_Swift_String_100523a98,
                       PTR___type_metadata_for_Swift_String_100523a98,pcVar6,pcVar6);
    if (bVar4) {
      _swift_bridgeObjectRelease(puVar14);
      uVar7 = 0xd000000000000032;
      uVar17 = 0x80000001004dbf10;
      goto LAB_100032668;
    }
    local_80 = 0x6b34;
    uStack_78 = 0xe200000000000000;
    local_70 = SVar22;
    bVar4 = (extension_Foundation)::Swift::StringProtocol::_contains
                      (&local_80,PTR___type_metadata_for_Swift_String_100523a98,
                       PTR___type_metadata_for_Swift_String_100523a98,pcVar6,pcVar6);
    if (bVar4) {
      uVar7 = 0x69662e76742e6b34;
      _swift_bridgeObjectRelease(puVar14);
      uVar17 = 0xea00000000006c6c;
      goto LAB_100032668;
    }
    lVar8 = 0x7fffffffffffffff;
    FUN_100032718(0x7fffffffffffffff,1,pcVar5,puVar14);
    uVar21 = *(ulong *)(lVar8 + 0x10);
    puVar14 = PTR___swiftEmptyArrayStorage_100524190;
    if (uVar21 != 0) {
      uVar16 = 0;
LAB_1000324c0:
      puVar19 = (ulong *)(lVar8 + 0x38 + uVar16 * 0x20);
      uVar20 = uVar16;
      do {
        if (*(ulong *)(lVar8 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1000326f0);
          (*pcVar3)();
        }
        pSVar10 = (String *)puVar19[-3];
        uVar16 = puVar19[-2];
        if ((uVar16 ^ (ulong)pSVar10) >> 0xe != 0) {
          _Var1.unknown = (undefined *)puVar19[-1];
          uVar2 = *puVar19;
          if ((uVar2 >> 0x3c & 1) == 0) {
            if ((uVar2 >> 0x3d & 1) == 0) {
              if (((ulong)_Var1.unknown >> 0x3c & 1) == 0) {
                UVar11 = Swift::_StringObject::get_sharedUTF8(_Var1);
              }
              else {
                UVar11.unknown = (undefined *)((uVar2 & 0xfffffffffffffff) + 0x20);
              }
              FUN_10029c130(UVar11.unknown,pSVar10,uVar16,_Var1.unknown,uVar2);
              uVar15 = (uint)pSVar10;
              pSVar10 = (String *)UVar11.unknown;
            }
            else {
              local_70.bridgeObject = (void *)(uVar2 & 0xffffffffffffff);
              local_70.str = _Var1.unknown;
              pSVar9 = &local_70;
              FUN_10029c130();
              uVar15 = (uint)pSVar10;
              pSVar10 = pSVar9;
            }
          }
          else {
            _swift_bridgeObjectRetain(uVar2);
            FUN_10029b6a4(pSVar10,uVar16,_Var1.unknown,uVar2,10);
            _swift_bridgeObjectRelease(uVar2);
            uVar15 = (uint)uVar16;
          }
          if ((uVar15 & 0xff) != 1) goto LAB_1000325a4;
        }
        uVar20 = uVar20 + 1;
        puVar19 = puVar19 + 4;
        if (uVar21 == uVar20) break;
      } while( true );
    }
LAB_100032630:
    _swift_bridgeObjectRelease(lVar8);
    if (*(long *)(puVar14 + 0x10) != 0) {
      if (*(long *)(puVar14 + 0x10) == 1) {
        lVar18 = *(long *)(puVar14 + 0x20);
        _swift_bridgeObjectRelease(puVar14);
      }
      else {
        lVar8 = *(long *)(puVar14 + 0x20);
        lVar18 = *(long *)(puVar14 + 0x28);
        _swift_bridgeObjectRelease(puVar14);
        if (lVar18 <= lVar8) {
          lVar18 = lVar8;
        }
      }
      uVar7 = 0x69662e76742e6b34;
      if (lVar18 < 3000) {
        uVar7 = 0;
      }
      uVar17 = 0xea00000000006c6c;
      if (lVar18 < 3000) {
        uVar17 = 0;
      }
      if (4999 < lVar18) {
        uVar7 = 0xd000000000000032;
        uVar17 = 0x80000001004dbf10;
      }
      goto LAB_100032668;
    }
  }
  _swift_bridgeObjectRelease(puVar14);
  uVar7 = 0;
  uVar17 = 0;
LAB_100032668:
  auVar23._8_8_ = uVar17;
  auVar23._0_8_ = uVar7;
  return auVar23;
LAB_1000325a4:
  puVar12 = puVar14;
  _swift_isUniquelyReferenced_nonNull_native();
  puVar13 = puVar14;
  if (((ulong)puVar12 & 1) == 0) {
    puVar13 = (undefined *)0x0;
    FUN_1001c44a0(0,*(long *)(puVar14 + 0x10) + 1,1,puVar14);
  }
  uVar2 = *(ulong *)(puVar13 + 0x10);
  puVar14 = puVar13;
  if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar2) {
    puVar14 = (undefined *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
    FUN_1001c44a0(puVar14,uVar2 + 1,1,puVar13);
  }
  uVar16 = uVar20 + 1;
  *(ulong *)(puVar14 + 0x10) = uVar2 + 1;
  *(String **)(puVar14 + uVar2 * 8 + 0x20) = pSVar10;
  if (uVar21 - 1 == uVar20) goto LAB_100032630;
  goto LAB_1000324c0;
}

