// rea decompile_all
// name: FUN_10029c44c
// address: 0x10029c44c
// body: available
// range: 0x10029c44c-0x10029c7bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10029c44c(char *param_1,void *param_2)

{
  _StringObject _Var1;
  ulong uVar2;
  code *pcVar3;
  char *pcVar4;
  long lVar5;
  String *pSVar6;
  String *pSVar7;
  UnsafeBufferPointer<__int8> UVar8;
  uint uVar9;
  void *pvVar10;
  undefined8 uVar11;
  ulong uVar12;
  String SVar13;
  undefined1 auVar14 [16];
  String local_90;
  undefined8 *local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar11 = 0;
  if (param_2 == (void *)0x0) goto LAB_10029c574;
  SVar13.bridgeObject = param_2;
  SVar13.str = param_1;
  local_90 = Swift::String::lowercased(SVar13);
  pvVar10 = local_90.bridgeObject;
  pcVar4 = local_90.str;
  local_60 = 0x20;
  uStack_58 = 0xe100000000000000;
  local_70 = 0;
  uStack_68 = 0xe000000000000000;
  FUN_100026df4();
  SVar13 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                     (&local_60,&local_70,0,0,0,1,PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,pcVar4,pcVar4,pcVar4);
  _swift_bridgeObjectRelease(pvVar10);
  local_60 = 0x78;
  uStack_58 = 0xe100000000000000;
  lVar5 = 0x7fffffffffffffff;
  local_80 = &local_60;
  FUN_1001b49f4(0x7fffffffffffffff,1,FUN_100138104,&local_90,SVar13.str,SVar13.bridgeObject);
  if (*(long *)(lVar5 + 0x10) == 2) {
    pSVar6 = *(String **)(lVar5 + 0x20);
    uVar12 = *(ulong *)(lVar5 + 0x28);
    if ((uVar12 ^ (ulong)pSVar6) >> 0xe == 0) goto LAB_10029c568;
    _Var1.unknown = *(undefined **)(lVar5 + 0x30);
    uVar2 = *(ulong *)(lVar5 + 0x38);
    if ((uVar2 >> 0x3c & 1) == 0) {
      if ((uVar2 >> 0x3d & 1) == 0) {
        if (((ulong)_Var1.unknown >> 0x3c & 1) == 0) {
          UVar8 = Swift::_StringObject::get_sharedUTF8(_Var1);
        }
        else {
          UVar8.unknown = (undefined *)((uVar2 & 0xfffffffffffffff) + 0x20);
        }
      }
      else {
        local_90.bridgeObject = (void *)(uVar2 & 0xffffffffffffff);
        local_90.str = _Var1.unknown;
        UVar8.unknown = (undefined *)&local_90;
      }
      FUN_10029c130(UVar8.unknown,pSVar6,uVar12,_Var1.unknown,uVar2);
      uVar9 = (uint)pSVar6;
      pSVar6 = (String *)UVar8.unknown;
    }
    else {
      _swift_bridgeObjectRetain(uVar2);
      FUN_10029b6a4(pSVar6,uVar12,_Var1.unknown,uVar2,10);
      _swift_bridgeObjectRelease(uVar2);
      uVar9 = (uint)uVar12;
    }
    if ((uVar9 & 0xff) == 1) goto LAB_10029c568;
    if (*(ulong *)(lVar5 + 0x10) < 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10029c754);
      (*pcVar3)();
    }
    pSVar7 = *(String **)(lVar5 + 0x40);
    uVar12 = *(ulong *)(lVar5 + 0x48);
    _Var1.unknown = *(undefined **)(lVar5 + 0x50);
    uVar2 = *(ulong *)(lVar5 + 0x58);
    _swift_bridgeObjectRetain(uVar2);
    _swift_bridgeObjectRelease(lVar5);
    if ((uVar12 ^ (ulong)pSVar7) >> 0xe == 0) goto LAB_10029c568;
    if ((uVar2 >> 0x3c & 1) == 0) {
      if ((uVar2 >> 0x3d & 1) == 0) {
        if (((ulong)_Var1.unknown >> 0x3c & 1) == 0) {
          UVar8 = Swift::_StringObject::get_sharedUTF8(_Var1);
        }
        else {
          UVar8.unknown = (undefined *)((uVar2 & 0xfffffffffffffff) + 0x20);
        }
      }
      else {
        local_90.bridgeObject = (void *)(uVar2 & 0xffffffffffffff);
        local_90.str = _Var1.unknown;
        UVar8.unknown = (undefined *)&local_90;
      }
      FUN_10029c130(UVar8.unknown,pSVar7,uVar12,_Var1.unknown,uVar2);
      uVar9 = (uint)pSVar7;
      pSVar7 = (String *)UVar8.unknown;
    }
    else {
      FUN_10029b6a4(pSVar7,uVar12,_Var1.unknown,uVar2,10);
      uVar9 = (uint)uVar12;
    }
    _swift_bridgeObjectRelease(uVar2);
    if ((uVar9 & 0xff) != 1) {
      if ((ulong)(pSVar7 + -0x80000000000000) >> 0x3c < 0xf) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10029c7ac);
        (*pcVar3)();
      }
      lVar5 = SUB168(SEXT816((long)pSVar7 << 4) * SEXT816(0x1c71c71c71c71c72),8);
      pSVar7 = (String *)(lVar5 - (lVar5 >> 0x3f));
      if ((long)pSVar7 <= (long)pSVar6) {
        pSVar7 = pSVar6;
      }
      if ((long)pSVar7 < 0x1e00) {
        if ((long)pSVar7 < 0x1680) {
          if ((long)pSVar7 < 0x1400) {
            if ((long)pSVar7 < 0xf00) {
              if ((long)pSVar7 < 0xa00) {
                param_1 = (char *)0x7566207030383031;
                if ((long)pSVar7 < 0x780) {
                  param_1 = (char *)0x70303237;
                }
                uVar11 = 0xec00000064686c6c;
                if ((long)pSVar7 < 0x780) {
                  uVar11 = 0xe400000000000000;
                }
              }
              else {
                uVar11 = 0xe800000000000000;
                param_1 = (char *)0x7030343431206b32;
              }
            }
            else {
              uVar11 = 0xe200000000000000;
              param_1 = (char *)0x6b34;
            }
          }
          else {
            uVar11 = 0xe200000000000000;
            param_1 = (char *)0x6b35;
          }
        }
        else {
          uVar11 = 0xe200000000000000;
          param_1 = (char *)0x6b36;
        }
      }
      else {
        uVar11 = 0xe200000000000000;
        param_1 = (char *)0x6b38;
      }
      goto LAB_10029c574;
    }
  }
  else {
LAB_10029c568:
    _swift_bridgeObjectRelease();
  }
  param_1 = (char *)0x0;
  uVar11 = 0;
LAB_10029c574:
  auVar14._8_8_ = uVar11;
  auVar14._0_8_ = param_1;
  return auVar14;
}

