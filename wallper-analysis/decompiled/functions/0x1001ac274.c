// rea decompile_all
// name: FUN_1001ac274
// address: 0x1001ac274
// body: available
// range: 0x1001ac274-0x1001ac4c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_1001ac274(char *param_1,void *param_2)

{
  bool bVar1;
  char *pcVar2;
  String SVar3;
  undefined8 local_60;
  undefined8 uStack_58;
  String local_50;
  
  if (param_2 == (void *)0x0) {
    bVar1 = false;
  }
  else {
    SVar3.bridgeObject = param_2;
    SVar3.str = param_1;
    SVar3 = Swift::String::lowercased(SVar3);
    pcVar2 = SVar3.str;
    local_60 = 0x656d6f726863;
    uStack_58 = 0xe600000000000000;
    local_50 = SVar3;
    FUN_100026df4();
    bVar1 = (extension_Foundation)::Swift::StringProtocol::_contains
                      (&local_60,PTR___type_metadata_for_Swift_String_100523a98,
                       PTR___type_metadata_for_Swift_String_100523a98,pcVar2,pcVar2);
    if (!bVar1) {
      local_60 = 0x786f6665726966;
      uStack_58 = 0xe700000000000000;
      local_50 = SVar3;
      bVar1 = (extension_Foundation)::Swift::StringProtocol::_contains
                        (&local_60,PTR___type_metadata_for_Swift_String_100523a98,
                         PTR___type_metadata_for_Swift_String_100523a98,pcVar2,pcVar2);
      if (!bVar1) {
        local_60 = 0x697261666173;
        uStack_58 = 0xe600000000000000;
        local_50 = SVar3;
        bVar1 = (extension_Foundation)::Swift::StringProtocol::_contains
                          (&local_60,PTR___type_metadata_for_Swift_String_100523a98,
                           PTR___type_metadata_for_Swift_String_100523a98,pcVar2,pcVar2);
        if (!bVar1) {
          local_60 = 0x63616d65676465;
          uStack_58 = 0xe700000000000000;
          local_50 = SVar3;
          bVar1 = (extension_Foundation)::Swift::StringProtocol::_contains
                            (&local_60,PTR___type_metadata_for_Swift_String_100523a98,
                             PTR___type_metadata_for_Swift_String_100523a98,pcVar2,pcVar2);
          if (!bVar1) {
            local_60 = 0x726573776f7262;
            uStack_58 = 0xe700000000000000;
            local_50 = SVar3;
            bVar1 = (extension_Foundation)::Swift::StringProtocol::_contains
                              (&local_60,PTR___type_metadata_for_Swift_String_100523a98,
                               PTR___type_metadata_for_Swift_String_100523a98,pcVar2,pcVar2);
            if (!bVar1) {
              local_60 = 0x69646c61766976;
              uStack_58 = 0xe700000000000000;
              local_50 = SVar3;
              bVar1 = (extension_Foundation)::Swift::StringProtocol::_contains
                                (&local_60,PTR___type_metadata_for_Swift_String_100523a98,
                                 PTR___type_metadata_for_Swift_String_100523a98,pcVar2,pcVar2);
              if (!bVar1) {
                local_60 = 0x617265706f;
                uStack_58 = 0xe500000000000000;
                local_50 = SVar3;
                bVar1 = (extension_Foundation)::Swift::StringProtocol::_contains
                                  (&local_60,PTR___type_metadata_for_Swift_String_100523a98,
                                   PTR___type_metadata_for_Swift_String_100523a98,pcVar2,pcVar2);
                if (!bVar1) {
                  local_60 = 0x637261;
                  uStack_58 = 0xe300000000000000;
                  local_50 = SVar3;
                  bVar1 = (extension_Foundation)::Swift::StringProtocol::_contains
                                    (&local_60,PTR___type_metadata_for_Swift_String_100523a98,
                                     PTR___type_metadata_for_Swift_String_100523a98,pcVar2,pcVar2);
                  _swift_bridgeObjectRelease(SVar3.bridgeObject);
                  return bVar1;
                }
              }
            }
          }
        }
      }
    }
    _swift_bridgeObjectRelease(SVar3.bridgeObject);
    bVar1 = true;
  }
  return bVar1;
}

