// rea decompile_all
// name: FUN_10030fb44
// address: 0x10030fb44
// body: available
// range: 0x10030fb44-0x100310577 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_10030fb44(String *param_1,_StringGuts param_2,_StringGuts param_3,long *param_4)

{
  undefined *puVar1;
  char *pcVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  String *pSVar6;
  long lVar7;
  Substring SVar8;
  String *pSVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  Substring SVar13;
  uint uVar14;
  undefined *puVar15;
  code *pcVar16;
  String *pSVar17;
  char *pcVar18;
  void *pvVar19;
  void *pvVar20;
  void *pvVar21;
  undefined8 *puVar22;
  ulong uVar23;
  long lVar24;
  double dVar25;
  String SVar26;
  String SVar27;
  String SVar29;
  String SVar31;
  String SVar33;
  String SVar34;
  String SVar35;
  String local_120;
  undefined8 *local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_78;
  undefined8 uStack_70;
  String SVar28;
  String SVar30;
  String SVar32;
  
  local_120.bridgeObject = param_3.unknown;
  local_120.str = param_2.unknown;
  local_78 = 0x393a3233;
  uStack_70 = 0xe400000000000000;
  pSVar6 = param_1;
  FUN_100026df4();
  puVar1 = PTR___type_metadata_for_Swift_String_100523a98;
  bVar4 = (extension_Foundation)::Swift::StringProtocol::_contains
                    (&local_78,PTR___type_metadata_for_Swift_String_100523a98,
                     PTR___type_metadata_for_Swift_String_100523a98,pSVar6,pSVar6);
  if (bVar4) {
LAB_10030fbf8:
    lVar7 = 0;
    FUN_10040211c();
    puVar22 = (undefined8 *)((long)&param_1->str + (long)*(int *)(lVar7 + 0x34));
    SVar26.bridgeObject = (void *)puVar22[1];
    if (SVar26.bridgeObject != (void *)0x0) {
      SVar26.str = (char *)*puVar22;
      local_120 = Swift::String::lowercased(SVar26);
      pvVar19 = local_120.bridgeObject;
      local_78 = 0x20;
      uStack_70 = 0xe100000000000000;
      local_108 = 0;
      uStack_100 = 0xe000000000000000;
      SVar26 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                         (&local_78,&local_108,0,0,0,1,puVar1,puVar1,puVar1,pSVar6,pSVar6,pSVar6);
      _swift_bridgeObjectRelease(pvVar19);
      local_78 = 0x78;
      uStack_70 = 0xe100000000000000;
      lVar7 = 0x7fffffffffffffff;
      local_110 = &local_78;
      FUN_1001b49f4(0x7fffffffffffffff,1,FUN_100138d2c,&local_120,SVar26.str,SVar26.bridgeObject);
      if (*(long *)(lVar7 + 0x10) == 2) {
        SVar8.unknown = *(undefined **)(lVar7 + 0x20);
        uVar14 = (uint)*(undefined8 *)(lVar7 + 0x28);
        _swift_bridgeObjectRetain(*(undefined8 *)(lVar7 + 0x38));
        double::_init(SVar8);
        if ((uVar14 & 0xff) != 1) {
          if (*(ulong *)(lVar7 + 0x10) < 2) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)SoftwareBreakpoint(1,0x100310530);
            (*pcVar16)();
          }
          SVar13.unknown = *(undefined **)(lVar7 + 0x40);
          uVar14 = (uint)*(undefined8 *)(lVar7 + 0x48);
          _swift_bridgeObjectRetain(*(undefined8 *)(lVar7 + 0x58));
          _swift_bridgeObjectRelease(lVar7);
          double::_init(SVar13);
          if (((uVar14 & 0xff) != 1) && (0.0 < (double)SVar13.unknown)) {
            dVar25 = (double)SVar8.unknown / (double)SVar13.unknown;
            bVar4 = false;
            bVar5 = true;
            if (3.4 <= dVar25) {
              bVar4 = false;
              bVar5 = true;
              if (!NAN(dVar25)) {
                bVar4 = dVar25 == 3.7;
                bVar5 = 3.7 <= dVar25;
              }
            }
            if (!bVar5 || bVar4) {
              return true;
            }
          }
          goto LAB_10030fd00;
        }
      }
      _swift_bridgeObjectRelease();
    }
  }
  else {
    local_78 = 0x392f3233;
    uStack_70 = 0xe400000000000000;
    bVar4 = (extension_Foundation)::Swift::StringProtocol::_contains
                      (&local_78,PTR___type_metadata_for_Swift_String_100523a98,
                       PTR___type_metadata_for_Swift_String_100523a98,pSVar6,pSVar6);
    if (bVar4) goto LAB_10030fbf8;
  }
LAB_10030fd00:
  puVar1 = PTR___type_metadata_for_Swift_String_100523a98;
  local_78 = 0x393a3132;
  uStack_70 = 0xe400000000000000;
  bVar4 = (extension_Foundation)::Swift::StringProtocol::_contains
                    (&local_78,PTR___type_metadata_for_Swift_String_100523a98,
                     PTR___type_metadata_for_Swift_String_100523a98,pSVar6,pSVar6);
  if (bVar4) {
LAB_10030fda8:
    lVar7 = 0;
    FUN_10040211c();
    puVar22 = (undefined8 *)((long)&param_1->str + (long)*(int *)(lVar7 + 0x34));
    SVar27.bridgeObject = (void *)puVar22[1];
    if (SVar27.bridgeObject != (void *)0x0) {
      SVar27.str = (char *)*puVar22;
      local_120 = Swift::String::lowercased(SVar27);
      pvVar19 = local_120.bridgeObject;
      local_78 = 0x20;
      uStack_70 = 0xe100000000000000;
      local_108 = 0;
      uStack_100 = 0xe000000000000000;
      SVar26 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                         (&local_78,&local_108,0,0,0,1,puVar1,puVar1,puVar1,pSVar6,pSVar6,pSVar6);
      _swift_bridgeObjectRelease(pvVar19);
      local_78 = 0x78;
      uStack_70 = 0xe100000000000000;
      lVar7 = 0x7fffffffffffffff;
      local_110 = &local_78;
      FUN_1001b49f4(0x7fffffffffffffff,1,FUN_100138d2c,&local_120,SVar26.str,SVar26.bridgeObject);
      if (*(long *)(lVar7 + 0x10) == 2) {
        SVar8.unknown = *(undefined **)(lVar7 + 0x20);
        uVar14 = (uint)*(undefined8 *)(lVar7 + 0x28);
        _swift_bridgeObjectRetain(*(undefined8 *)(lVar7 + 0x38));
        double::_init(SVar8);
        if ((uVar14 & 0xff) != 1) {
          if (*(ulong *)(lVar7 + 0x10) < 2) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)SoftwareBreakpoint(1,0x10031052c);
            (*pcVar16)();
          }
          SVar13.unknown = *(undefined **)(lVar7 + 0x40);
          uVar14 = (uint)*(undefined8 *)(lVar7 + 0x48);
          _swift_bridgeObjectRetain(*(undefined8 *)(lVar7 + 0x58));
          _swift_bridgeObjectRelease(lVar7);
          double::_init(SVar13);
          if (((uVar14 & 0xff) != 1) && (0.0 < (double)SVar13.unknown)) {
            dVar25 = (double)SVar8.unknown / (double)SVar13.unknown;
            bVar4 = false;
            bVar5 = true;
            if (2.2 <= dVar25) {
              bVar4 = false;
              bVar5 = true;
              if (!NAN(dVar25)) {
                bVar4 = dVar25 == 2.5;
                bVar5 = 2.5 <= dVar25;
              }
            }
            if (!bVar5 || bVar4) {
              return true;
            }
          }
          goto LAB_10030feb0;
        }
      }
      _swift_bridgeObjectRelease();
    }
  }
  else {
    local_78 = 0x392f3132;
    uStack_70 = 0xe400000000000000;
    bVar4 = (extension_Foundation)::Swift::StringProtocol::_contains
                      (&local_78,PTR___type_metadata_for_Swift_String_100523a98,
                       PTR___type_metadata_for_Swift_String_100523a98,pSVar6,pSVar6);
    if ((bVar4) ||
       (((param_2.unknown == (undefined *)0x6469776172746c75 &&
         (param_3.unknown == (undefined *)0xe900000000000065)) ||
        (bVar4 = Swift::_stringCompareWithSmolCheck(param_2,param_3,(_StringComparisonResult)0x75),
        bVar4)))) goto LAB_10030fda8;
  }
LAB_10030feb0:
  puVar1 = PTR___type_metadata_for_Swift_String_100523a98;
  local_78 = 0x393a3631;
  uStack_70 = 0xe400000000000000;
  pcVar16 = (code *)PTR___type_metadata_for_Swift_String_100523a98;
  pSVar17 = pSVar6;
  bVar4 = (extension_Foundation)::Swift::StringProtocol::_contains
                    (&local_78,PTR___type_metadata_for_Swift_String_100523a98,
                     PTR___type_metadata_for_Swift_String_100523a98,pSVar6,pSVar6);
  if (!bVar4) {
    local_78 = 0x392f3631;
    uStack_70 = 0xe400000000000000;
    puVar15 = PTR___type_metadata_for_Swift_String_100523a98;
    pcVar16 = (code *)PTR___type_metadata_for_Swift_String_100523a98;
    pSVar17 = pSVar6;
    bVar4 = (extension_Foundation)::Swift::StringProtocol::_contains(&local_78);
    if (!bVar4) goto LAB_10031001c;
  }
  lVar7 = 0;
  FUN_10040211c();
  puVar22 = (undefined8 *)((long)&param_1->str + (long)*(int *)(lVar7 + 0x34));
  SVar29.bridgeObject = (void *)puVar22[1];
  puVar15 = (undefined *)0x0;
  if (SVar29.bridgeObject != (void *)0x0) {
    SVar29.str = (char *)*puVar22;
    local_120 = Swift::String::lowercased(SVar29);
    pvVar19 = local_120.bridgeObject;
    local_78 = 0x20;
    uStack_70 = 0xe100000000000000;
    local_108 = 0;
    uStack_100 = 0xe000000000000000;
    (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
              (&local_78,&local_108,0,0,0,1,puVar1,puVar1,puVar1,pSVar6,pSVar6,pSVar6);
    _swift_bridgeObjectRelease(pvVar19);
    local_78 = 0x78;
    uStack_70 = 0xe100000000000000;
    pcVar16 = FUN_100138104;
    pSVar17 = &local_120;
    lVar7 = 0x7fffffffffffffff;
    puVar15 = (undefined *)0x1;
    local_110 = &local_78;
    FUN_1001b49f4();
    if (*(long *)(lVar7 + 0x10) == 2) {
      SVar8.unknown = *(undefined **)(lVar7 + 0x20);
      puVar15 = *(undefined **)(lVar7 + 0x28);
      pSVar17 = *(String **)(lVar7 + 0x38);
      _swift_bridgeObjectRetain(pSVar17);
      double::_init(SVar8);
      pcVar16 = (code *)SVar8.unknown;
      if (((uint)puVar15 & 0xff) != 1) {
        if (*(ulong *)(lVar7 + 0x10) < 2) {
                    /* WARNING: Does not return */
          pcVar16 = (code *)SoftwareBreakpoint(1,0x100310534);
          (*pcVar16)();
        }
        SVar13.unknown = *(undefined **)(lVar7 + 0x40);
        puVar15 = *(undefined **)(lVar7 + 0x48);
        pcVar16 = *(code **)(lVar7 + 0x50);
        pSVar17 = *(String **)(lVar7 + 0x58);
        _swift_bridgeObjectRetain(pSVar17);
        _swift_bridgeObjectRelease(lVar7);
        double::_init(SVar13);
        if ((((uint)puVar15 & 0xff) != 1) && (0.0 < (double)SVar13.unknown)) {
          dVar25 = (double)SVar8.unknown / (double)SVar13.unknown;
          bVar4 = false;
          bVar5 = true;
          if (1.7 <= dVar25) {
            bVar4 = false;
            bVar5 = true;
            if (!NAN(dVar25)) {
              bVar4 = dVar25 == 1.85;
              bVar5 = 1.85 <= dVar25;
            }
          }
          if (!bVar5 || bVar4) {
            return true;
          }
        }
        goto LAB_10031001c;
      }
    }
    _swift_bridgeObjectRelease();
  }
LAB_10031001c:
  lVar7 = *param_4;
  if (lVar7 == 0) {
    FUN_100279594(0);
    FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
    SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x100310578);
    (*pcVar16)();
  }
  _swift_retain(lVar7);
  pSVar9 = param_1;
  FUN_10026a7c8();
  _swift_release(lVar7);
  SVar31.bridgeObject = puVar15;
  SVar31.str = (char *)pSVar9;
  SVar26 = Swift::String::lowercased(SVar31);
  _swift_bridgeObjectRelease(puVar15);
  lVar7 = 0;
  FUN_10040211c();
  puVar22 = (undefined8 *)((long)&param_1->str + (long)*(int *)(lVar7 + 0x1c));
  pvVar19 = (void *)puVar22[1];
  if (pvVar19 == (void *)0x0) {
    pcVar10 = (char *)0x0;
    pvVar21 = (void *)0xe000000000000000;
  }
  else {
    pcVar10 = (char *)*puVar22;
    pvVar21 = pvVar19;
  }
  SVar28.bridgeObject = pvVar21;
  SVar28.str = pcVar10;
  SVar27 = Swift::String::lowercased(SVar28);
  pvVar20 = SVar27.bridgeObject;
  _swift_bridgeObjectRetain(pvVar19);
  _swift_bridgeObjectRelease(pvVar21);
  bVar3 = *(byte *)((long)&param_1->str + (long)*(int *)(lVar7 + 0x24));
  pcVar10 = (char *)(ulong)bVar3;
  if (bVar3 == 0xe) {
    pcVar10 = (char *)0x0;
    pvVar20 = (void *)0xe000000000000000;
  }
  else {
    FUN_100402278();
  }
  SVar30.bridgeObject = pvVar20;
  SVar30.str = pcVar10;
  SVar29 = Swift::String::lowercased(SVar30);
  _swift_bridgeObjectRelease(pvVar20);
  puVar15 = *(undefined **)((long)&param_1->str + (long)*(int *)(lVar7 + 0x44));
  puVar1 = PTR___swiftEmptyArrayStorage_100524190;
  if (puVar15 != (undefined *)0x0) {
    puVar1 = puVar15;
  }
  lVar24 = *(long *)(puVar1 + 0x10);
  if (lVar24 == 0) {
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(puVar1);
    pcVar10 = PTR___swiftEmptyArrayStorage_100524190;
  }
  else {
    local_120.str = PTR___swiftEmptyArrayStorage_100524190;
    _swift_bridgeObjectRetain();
    pcVar16 = (code *)0x0;
    FUN_1001c5bc4(0,lVar24);
    puVar22 = (undefined8 *)(puVar1 + 0x28);
    pcVar10 = local_120.str;
    do {
      SVar32.bridgeObject = (void *)*puVar22;
      SVar32.str = (char *)puVar22[-1];
      SVar31 = Swift::String::lowercased(SVar32);
      local_120.str = pcVar10;
      uVar23 = *(ulong *)(pcVar10 + 0x10);
      if (*(ulong *)(pcVar10 + 0x18) >> 1 <= uVar23) {
        pcVar16 = (code *)0x1;
        FUN_1001c5bc4(1 < *(ulong *)(pcVar10 + 0x18),uVar23 + 1);
        pcVar10 = local_120.str;
      }
      puVar22 = puVar22 + 2;
      *(ulong *)(pcVar10 + 0x10) = uVar23 + 1;
      *(String *)(pcVar10 + uVar23 * 0x10 + 0x20) = SVar31;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    _swift_bridgeObjectRelease(puVar1);
  }
  puVar22 = (undefined8 *)((long)&param_1->str + (long)*(int *)(lVar7 + 0x34));
  pcVar12 = (char *)*puVar22;
  pvVar19 = (void *)puVar22[1];
  pcVar18 = (char *)0x0;
  if (pvVar19 != (void *)0x0) {
    pcVar18 = pcVar12;
  }
  pvVar21 = (void *)0xe000000000000000;
  if (pvVar19 != (void *)0x0) {
    pvVar21 = pvVar19;
  }
  SVar33.bridgeObject = pvVar21;
  SVar33.str = pcVar18;
  SVar31 = Swift::String::lowercased(SVar33);
  _swift_bridgeObjectRetain(pvVar19);
  _swift_bridgeObjectRelease(pvVar21);
  puVar22 = (undefined8 *)((long)&param_1->str + (long)*(int *)(lVar7 + 0x30));
  if (*(char *)(puVar22 + 1) == '\x01') {
    pvVar21 = (void *)0xe000000000000000;
    pcVar18 = (char *)0x0;
  }
  else {
    local_78 = *puVar22;
    local_120 = Swift::CustomStringConvertible::get_description();
    SVar34.bridgeObject = (void *)0xe100000000000000;
    SVar34.str = (char *)0x73;
    SVar35.bridgeObject = pSVar17;
    SVar35.str = (char *)pcVar16;
    Swift::String::append(SVar34,SVar35);
    pvVar21 = local_120.bridgeObject;
    pcVar18 = local_120.str;
  }
  pcVar11 = &DAT_100549eb0;
  FUN_100002f94(&DAT_100549eb0,&DAT_100426be0);
  _swift_initStackObject();
  pcVar11[0x18] = '\f';
  pcVar11[0x19] = '\0';
  pcVar11[0x1a] = '\0';
  pcVar11[0x1b] = '\0';
  pcVar11[0x1c] = '\0';
  pcVar11[0x1d] = '\0';
  pcVar11[0x1e] = '\0';
  pcVar11[0x1f] = '\0';
  pcVar11[0x10] = '\x06';
  pcVar11[0x11] = '\0';
  pcVar11[0x12] = '\0';
  pcVar11[0x13] = '\0';
  pcVar11[0x14] = '\0';
  pcVar11[0x15] = '\0';
  pcVar11[0x16] = '\0';
  pcVar11[0x17] = '\0';
  *(String *)(pcVar11 + 0x20) = SVar26;
  *(String *)(pcVar11 + 0x30) = SVar27;
  *(String *)(pcVar11 + 0x40) = SVar29;
  *(String *)(pcVar11 + 0x50) = SVar31;
  FUN_10029c44c();
  pcVar2 = (char *)0x0;
  if (pvVar19 != (void *)0x0) {
    pcVar2 = pcVar12;
  }
  pvVar20 = (void *)0xe000000000000000;
  if (pvVar19 != (void *)0x0) {
    pvVar20 = pvVar19;
  }
  *(char **)(pcVar11 + 0x60) = pcVar2;
  *(void **)(pcVar11 + 0x68) = pvVar20;
  *(char **)(pcVar11 + 0x70) = pcVar18;
  *(void **)(pcVar11 + 0x78) = pvVar21;
  local_120.str = pcVar11;
  FUN_10012f2d0(pcVar10);
  pcVar10 = local_120.str;
  puVar1 = PTR___type_metadata_for_Swift_String_100523a98;
  lVar7 = *(long *)(local_120.str + 0x10);
  local_120.bridgeObject = param_3.unknown;
  local_120.str = param_2.unknown;
  uVar23 = 0xffffffffffffffff;
  pcVar18 = pcVar10 + 0x28;
  do {
    bVar4 = uVar23 - lVar7 == -1;
    if (bVar4) break;
    uVar23 = uVar23 + 1;
    if (*(ulong *)(pcVar10 + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x100310528);
      (*pcVar16)();
    }
    local_78 = *(undefined8 *)(pcVar18 + -8);
    uStack_70 = *(undefined8 *)pcVar18;
    bVar5 = (extension_Foundation)::Swift::StringProtocol::_contains
                      (&local_120,puVar1,puVar1,pSVar6,pSVar6);
    pcVar18 = pcVar18 + 0x10;
  } while (!bVar5);
  _swift_bridgeObjectRelease(pcVar10);
  return !bVar4;
}

