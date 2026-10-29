// rea decompile_all
// name: FUN_1001abfcc
// address: 0x1001abfcc
// body: available
// range: 0x1001abfcc-0x1001ac20f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1001abfcc(char *param_1,void *param_2)

{
  ulong uVar1;
  bool bVar2;
  char *pcVar3;
  String SVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  String local_50;
  void *pvVar4;
  
  if (param_2 == (void *)0x0) {
    return 4;
  }
  SVar5.bridgeObject = param_2;
  SVar5.str = param_1;
  SVar5 = Swift::String::lowercased(SVar5);
  pvVar4 = SVar5.bridgeObject;
  pcVar3 = SVar5.str;
  uVar1 = (ulong)pcVar3 & 0xffffffffffff;
  if (((ulong)pvVar4 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)pvVar4 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    local_60 = 0x6c7070612e6d6f63;
    uStack_58 = 0xef636973756d2e65;
    local_50 = SVar5;
    FUN_100026df4();
    bVar2 = (extension_Foundation)::Swift::StringProtocol::_contains
                      (&local_60,PTR___type_metadata_for_Swift_String_100523a98,
                       PTR___type_metadata_for_Swift_String_100523a98,pcVar3,pcVar3);
    if (!bVar2) {
      local_60 = 0xd000000000000010;
      uStack_58 = 0x80000001004e0740;
      local_50 = SVar5;
      bVar2 = (extension_Foundation)::Swift::StringProtocol::_contains
                        (&local_60,PTR___type_metadata_for_Swift_String_100523a98,
                         PTR___type_metadata_for_Swift_String_100523a98,pcVar3,pcVar3);
      if (!bVar2) {
        local_60 = 0x796669746f7073;
        uStack_58 = 0xe700000000000000;
        local_50 = SVar5;
        bVar2 = (extension_Foundation)::Swift::StringProtocol::_contains
                          (&local_60,PTR___type_metadata_for_Swift_String_100523a98,
                           PTR___type_metadata_for_Swift_String_100523a98,pcVar3,pcVar3);
        if (bVar2) {
          _swift_bridgeObjectRelease(pvVar4);
          return 1;
        }
        local_60 = 0x65627574756f79;
        uStack_58 = 0xe700000000000000;
        local_50 = SVar5;
        bVar2 = (extension_Foundation)::Swift::StringProtocol::_contains
                          (&local_60,PTR___type_metadata_for_Swift_String_100523a98,
                           PTR___type_metadata_for_Swift_String_100523a98,pcVar3,pcVar3);
        if (!bVar2) {
          local_60 = 0x746b7365646d7479;
          uStack_58 = 0xea0000000000706f;
          local_50 = SVar5;
          bVar2 = (extension_Foundation)::Swift::StringProtocol::_contains
                            (&local_60,PTR___type_metadata_for_Swift_String_100523a98,
                             PTR___type_metadata_for_Swift_String_100523a98,pcVar3,pcVar3);
          if (!bVar2) {
            local_60 = 0x68632d6874;
            uStack_58 = 0xe500000000000000;
            local_50 = SVar5;
            bVar2 = (extension_Foundation)::Swift::StringProtocol::_contains
                              (&local_60,PTR___type_metadata_for_Swift_String_100523a98,
                               PTR___type_metadata_for_Swift_String_100523a98,pcVar3,pcVar3);
            _swift_bridgeObjectRelease(pvVar4);
            if (bVar2) {
              return 2;
            }
            return 3;
          }
        }
        _swift_bridgeObjectRelease(pvVar4);
        return 2;
      }
    }
    _swift_bridgeObjectRelease(pvVar4);
    return 0;
  }
  _swift_bridgeObjectRelease(pvVar4);
  return 4;
}

