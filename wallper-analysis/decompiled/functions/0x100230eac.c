// rea decompile_all
// name: FUN_100230eac
// address: 0x100230eac
// body: available
// range: 0x100230eac-0x100231167 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100230eac(char *param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  uint uVar1;
  char *pcVar2;
  void *pvVar3;
  int iVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  undefined1 auVar9 [16];
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  char *local_40;
  undefined *local_38;
  
  uVar1 = (uint)((ulong)param_3 >> 0x20) & 0xff;
  iVar4 = (int)param_3;
  local_40 = param_1;
  local_38 = param_2.unknown;
  if (uVar1 < 3) {
    if (((ulong)param_3 & 0xff00000000) != 0) {
      if (uVar1 == 1) {
        Swift::_StringGuts::grow(0x17,param_2);
        _swift_bridgeObjectRelease(0xe000000000000000);
        local_40 = (char *)0xd000000000000015;
        local_38 = (undefined *)0x80000001004e23b0;
      }
      else {
        Swift::_StringGuts::grow(0x11,param_2);
        _swift_bridgeObjectRetain(param_2.unknown);
        _swift_bridgeObjectRelease(0xe000000000000000);
        SVar7.bridgeObject = (void *)0xed00002068746977;
        SVar7.str = (char *)0x2064657469786520;
        SVar12.bridgeObject = param_4;
        SVar12.str = param_3;
        Swift::String::append(SVar7,SVar12);
      }
      SVar8 = Swift::CustomStringConvertible::get_description();
LAB_1002310ac:
      SVar13.bridgeObject = param_4;
      SVar13.str = param_3;
      Swift::String::append(SVar8,SVar13);
      _swift_bridgeObjectRelease(SVar8.bridgeObject);
      goto LAB_1002310c4;
    }
    Swift::_StringGuts::grow(0x12,param_2);
    _swift_bridgeObjectRetain(param_2.unknown);
    _swift_bridgeObjectRelease(0xe000000000000000);
    param_1 = (char *)0xd000000000000010;
    param_2.unknown = (undefined *)0x80000001004e23d0;
  }
  else {
    if (uVar1 != 3) {
      if (uVar1 != 4) {
        local_40 = (char *)0xd000000000000015;
        if ((param_2.unknown == (undefined *)0x0 && param_1 == (char *)0x0) && (iVar4 == 0)) {
          local_38 = (undefined *)0x80000001004e23f0;
        }
        else if ((param_1 == (char *)0x1) && ((param_2.unknown == (undefined *)0x0 && (iVar4 == 0)))
                ) {
          local_38 = (undefined *)0x80000001004e2390;
          local_40 = (char *)0xd00000000000001e;
        }
        else if ((param_1 == (char *)0x2) && ((param_2.unknown == (undefined *)0x0 && (iVar4 == 0)))
                ) {
          local_38 = (undefined *)0x80000001004e2360;
          local_40 = (char *)0xd000000000000027;
        }
        else {
          local_38 = (undefined *)0x80000001004e2340;
          local_40 = (char *)0xd00000000000001f;
        }
        goto LAB_1002310c4;
      }
      Swift::_StringGuts::grow(0x17,param_2);
      _swift_bridgeObjectRetain(param_2.unknown);
      _swift_bridgeObjectRelease(0xe000000000000000);
      pcVar2 = (char *)0xd000000000000013;
      pvVar3 = (void *)0x80000001004e2300;
      SVar5.bridgeObject = (void *)0x80000001004e2300;
      SVar5.str = (char *)0xd000000000000013;
      SVar10.bridgeObject = param_4;
      SVar10.str = param_3;
      Swift::String::append(SVar5,SVar10);
      FUN_10028f000();
      SVar8.bridgeObject = pvVar3;
      SVar8.str = pcVar2;
      goto LAB_1002310ac;
    }
    Swift::_StringGuts::grow(0x1a,param_2);
    _swift_bridgeObjectRelease(0xe000000000000000);
    local_40 = (char *)0xd000000000000018;
    local_38 = (undefined *)0x80000001004e2320;
  }
  SVar6.bridgeObject = param_2.unknown;
  SVar6.str = param_1;
  SVar11.bridgeObject = param_4;
  SVar11.str = param_3;
  Swift::String::append(SVar6,SVar11);
LAB_1002310c4:
  auVar9._8_8_ = local_38;
  auVar9._0_8_ = local_40;
  return auVar9;
}

