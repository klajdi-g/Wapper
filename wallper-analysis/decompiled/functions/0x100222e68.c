// rea decompile_all
// name: FUN_100222e68
// address: 0x100222e68
// body: available
// range: 0x100222e68-0x10022347b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_100222e68(void)

{
  ulong uVar1;
  char *pcVar2;
  bool bVar3;
  CharacterSet CVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  char *pcVar8;
  URL UVar9;
  Hasher into;
  char *pcVar10;
  void *pvVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  ulong uVar12;
  CharacterSet in;
  long lVar13;
  ulong uVar14;
  String *pSVar15;
  code *pcVar16;
  ulong uVar17;
  String SVar18;
  String local_120;
  undefined *local_110;
  ulong local_108;
  undefined *local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  ulong local_d0;
  long local_c8;
  String local_c0 [4];
  char *local_78;
  void *local_70 [2];
  
  CVar4 = Foundation::CharacterSet::typeMetadataAccessor();
  local_f0 = *(long *)(CVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_f0 + 0x40));
  in.unknown = (undefined *)((long)&local_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar5 = 0;
  FUN_10040211c();
  local_c8 = *(long *)(lVar5 + -8);
  local_f8 = lVar5;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_c8 + 0x40));
  lVar13 = (long)in.unknown - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  pSVar15 = (String *)(lVar13 - extraout_x12);
  lVar5 = unaff_x20 + _TtC7Wallper19ShuffleQueueManager::videoLibrary;
  _swift_weakLoadStrong();
  local_120.str = PTR___swiftEmptyArrayStorage_100524190;
  if (lVar5 != 0) {
    puVar6 = &DAT_10042b768;
    local_100 = CVar4.unknown;
    local_e8 = lVar13;
    _swift_getKeyPath(&DAT_10042b768);
    puVar7 = &DAT_10042b790;
    _swift_getKeyPath(&DAT_10042b790);
    Combine::Published::_get_subscript(local_70,lVar5,puVar6,puVar7);
    _swift_release(puVar6);
    _swift_release(puVar7);
    puVar6 = &DAT_10042b700;
    _swift_getKeyPath(&DAT_10042b700);
    puVar7 = &DAT_10042b728;
    _swift_getKeyPath(&DAT_10042b728);
    local_e0 = lVar5;
    Combine::Published::_get_subscript(local_c0,lVar5,puVar6,puVar7);
    _swift_release(puVar6);
    _swift_release(puVar7);
    pcVar2 = local_c0[0].str;
    uVar12 = *(ulong *)(local_c0[0].str + 0x10);
    pcVar10 = PTR___swiftEmptyArrayStorage_100524190;
    if (uVar12 != 0) {
      uVar14 = 0;
      local_d0 = uVar12;
      do {
        if (*(ulong *)(pcVar2 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar16 = (code *)SoftwareBreakpoint(1,0x100223478);
          (*pcVar16)();
        }
        uVar17 = (ulong)*(byte *)(local_c8 + 0x50) + 0x20 &
                 ((ulong)*(byte *)(local_c8 + 0x50) ^ 0xffffffffffffffff);
        lVar5 = *(long *)(local_c8 + 0x48);
        FUN_10002f154(pcVar2 + lVar5 * uVar14 + uVar17,pSVar15);
        SVar18.bridgeObject = (void *)0xec0000002d657669;
        SVar18.str = (char *)0x7463617265746e69;
        bVar3 = Swift::String::hasPrefix(SVar18,*pSVar15);
        if (bVar3) {
          pcVar8 = pcVar10;
          _swift_isUniquelyReferenced_nonNull_native();
          local_c0[0].str = pcVar10;
          if (((ulong)pcVar8 & 1) == 0) {
            FUN_1001c5c4c(0,*(long *)(pcVar10 + 0x10) + 1,1);
            uVar12 = local_d0;
            pcVar10 = local_c0[0].str;
          }
          uVar1 = *(ulong *)(pcVar10 + 0x10);
          if (*(ulong *)(pcVar10 + 0x18) >> 1 <= uVar1) {
            FUN_1001c5c4c(1 < *(ulong *)(pcVar10 + 0x18),uVar1 + 1,1);
            uVar12 = local_d0;
            pcVar10 = local_c0[0].str;
          }
          *(ulong *)(pcVar10 + 0x10) = uVar1 + 1;
          FUN_100007e64(pSVar15,pcVar10 + uVar1 * lVar5 + uVar17,FUN_10040211c);
        }
        else {
          FUN_100029548(pSVar15,FUN_10040211c);
        }
        uVar14 = uVar14 + 1;
      } while (uVar12 != uVar14);
    }
    _swift_bridgeObjectRelease(pcVar2);
    FUN_10012f3c8(pcVar10);
    local_108 = *(ulong *)((long)local_70[0] + 0x10);
    if (local_108 == 0) {
      local_120.str = PTR___swiftEmptyArrayStorage_100524190;
    }
    else {
      uVar12 = 0;
      local_120.str = PTR___swiftEmptyArrayStorage_100524190;
      local_120.bridgeObject = local_70[0];
      lVar5 = local_e8;
      local_110 = in.unknown;
      do {
        if (*(ulong *)((long)local_120.bridgeObject + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar16 = (code *)SoftwareBreakpoint(1,0x10022347c);
          (*pcVar16)();
        }
        local_d0 = (ulong)*(byte *)(local_c8 + 0x50) + 0x20 &
                   ((ulong)*(byte *)(local_c8 + 0x50) ^ 0xffffffffffffffff);
        local_d8 = *(long *)(local_c8 + 0x48);
        UVar9.unknown = (undefined *)((long)local_120.bridgeObject + local_d8 * uVar12 + local_d0);
        FUN_10002f154(UVar9.unknown,lVar5);
        local_c0[0] = Foundation::URL::get_lastPathComponent(UVar9);
        pvVar11 = local_c0[0].bridgeObject;
        Foundation::CharacterSet::get_whitespacesAndNewlines((CharacterSet)local_c0[0].str);
        FUN_100026df4();
        SVar18 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
        puVar6 = local_100;
        CVar4.unknown = SVar18.bridgeObject;
        pcVar16 = *(code **)(local_f0 + 8);
        (*pcVar16)(in.unknown,local_100);
        _swift_bridgeObjectRelease(pvVar11);
        uVar14 = (ulong)SVar18.str & 0xffffffffffff;
        if (((ulong)CVar4.unknown & 0x2000000000000000) != 0) {
          uVar14 = (ulong)CVar4.unknown >> 0x38 & 0xf;
        }
        if (uVar14 == 0) {
          _swift_bridgeObjectRelease();
          Foundation::CharacterSet::get_whitespacesAndNewlines(CVar4);
          SVar18 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
          (*pcVar16)(in.unknown,puVar6);
        }
        puVar6 = &DAT_10042b7b0;
        _swift_getKeyPath(&DAT_10042b7b0);
        puVar7 = &DAT_10042b7d8;
        _swift_getKeyPath(&DAT_10042b7d8);
        Combine::Published::_get_subscript(local_c0,local_e0,puVar6,puVar7);
        _swift_release(puVar6);
        _swift_release(puVar7);
        in.unknown = local_110;
        pcVar2 = local_c0[0].str;
        if (*(long *)(local_c0[0].str + 0x10) != 0) {
          Swift::Hasher::init(*(__int64 *)(local_c0[0].str + 0x28));
          into.unknown = (undefined *)local_c0;
          Swift::String::hash(into,SVar18);
          uVar14 = Swift::Hasher::_finalize(into);
          uVar17 = -1L << ((ulong)(byte)pcVar2[0x20] & 0x3f);
          uVar14 = uVar14 & (uVar17 ^ 0xffffffffffffffff);
          if ((*(ulong *)(pcVar2 + (uVar14 >> 6) * 8 + 0x38) >> (uVar14 & 0x3f) & 1) != 0) {
            do {
              pSVar15 = (String *)(*(long *)(pcVar2 + 0x30) + uVar14 * 0x10);
              if ((SVar18 == *pSVar15) ||
                 (bVar3 = Swift::_stringCompareWithSmolCheck
                                    ((_StringGuts)pSVar15->str,(_StringGuts)pSVar15->bridgeObject,
                                     (_StringComparisonResult)(__int8)SVar18.str), bVar3)) {
                _swift_bridgeObjectRelease(SVar18.bridgeObject);
                _swift_bridgeObjectRelease(pcVar2);
                pcVar2 = local_120.str;
                pcVar10 = local_120.str;
                _swift_isUniquelyReferenced_nonNull_native();
                local_78 = pcVar2;
                if (((ulong)pcVar10 & 1) == 0) {
                  FUN_1001c5c4c(0,*(long *)(pcVar2 + 0x10) + 1,1);
                }
                uVar14 = *(ulong *)(local_78 + 0x10);
                if (*(ulong *)(local_78 + 0x18) >> 1 <= uVar14) {
                  FUN_1001c5c4c(1 < *(ulong *)(local_78 + 0x18),uVar14 + 1,1);
                }
                lVar5 = local_e8;
                *(ulong *)(local_78 + 0x10) = uVar14 + 1;
                local_120.str = local_78;
                FUN_100007e64(local_e8,local_78 + uVar14 * local_d8 + local_d0,FUN_10040211c);
                goto LAB_100223190;
              }
              uVar14 = uVar14 + 1 & ~uVar17;
            } while ((*(ulong *)(pcVar2 + (uVar14 >> 6) * 8 + 0x38) >> (uVar14 & 0x3f) & 1) != 0);
          }
        }
        _swift_bridgeObjectRelease(SVar18.bridgeObject);
        _swift_bridgeObjectRelease(pcVar2);
        lVar5 = local_e8;
        FUN_100029548(local_e8,FUN_10040211c);
LAB_100223190:
        uVar12 = uVar12 + 1;
      } while (uVar12 != local_108);
    }
    _swift_bridgeObjectRelease();
    _swift_release(local_e0);
  }
  return local_120.str;
}

