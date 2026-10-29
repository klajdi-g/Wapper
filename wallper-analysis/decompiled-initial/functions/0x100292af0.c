// rea decompile_all
// name: FUN_100292af0
// address: 0x100292af0
// body: available
// range: 0x100292af0-0x100292fc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_100292af0(char *param_1,void *param_2)

{
  bool bVar1;
  char *pcVar2;
  undefined *puVar4;
  char cVar6;
  String SVar7;
  String SVar8;
  undefined8 local_80;
  undefined8 uStack_78;
  String local_70;
  undefined7 extraout_var;
  void *pvVar3;
  void *pvVar5;
  
  FUN_100292810();
  SVar7.bridgeObject = param_2;
  SVar7.str = param_1;
  SVar7 = Swift::String::lowercased(SVar7);
  pvVar3 = SVar7.bridgeObject;
  _swift_bridgeObjectRelease(param_2);
  local_80 = 0x6e6b6f6f6263616d;
  uStack_78 = 0xea00000000006f65;
  local_70 = SVar7;
  FUN_100026df4();
  bVar1 = (extension_Foundation)::Swift::StringProtocol::_contains
                    (&local_80,PTR___type_metadata_for_Swift_String_100523a98,
                     PTR___type_metadata_for_Swift_String_100523a98,param_2,param_2);
  if (bVar1) {
    cVar6 = '\x06';
    goto LAB_100292edc;
  }
  local_80 = 0x616b6f6f6263616d;
  uStack_78 = 0xea00000000007269;
  local_70 = SVar7;
  bVar1 = (extension_Foundation)::Swift::StringProtocol::_contains
                    (&local_80,PTR___type_metadata_for_Swift_String_100523a98,
                     PTR___type_metadata_for_Swift_String_100523a98,param_2,param_2);
  if (bVar1) {
    cVar6 = '\0';
    goto LAB_100292edc;
  }
  local_80 = 0x706b6f6f6263616d;
  uStack_78 = 0xea00000000006f72;
  local_70 = SVar7;
  bVar1 = (extension_Foundation)::Swift::StringProtocol::_contains
                    (&local_80,PTR___type_metadata_for_Swift_String_100523a98,
                     PTR___type_metadata_for_Swift_String_100523a98,param_2,param_2);
  if (bVar1) {
    cVar6 = '\x01';
    goto LAB_100292edc;
  }
  local_80 = 0x63616d69;
  uStack_78 = 0xe400000000000000;
  local_70 = SVar7;
  bVar1 = (extension_Foundation)::Swift::StringProtocol::_contains
                    (&local_80,PTR___type_metadata_for_Swift_String_100523a98,
                     PTR___type_metadata_for_Swift_String_100523a98,param_2,param_2);
  if (bVar1) {
    cVar6 = '\x02';
    goto LAB_100292edc;
  }
  local_80 = 0x696e696d63616d;
  uStack_78 = 0xe700000000000000;
  local_70 = SVar7;
  bVar1 = (extension_Foundation)::Swift::StringProtocol::_contains
                    (&local_80,PTR___type_metadata_for_Swift_String_100523a98,
                     PTR___type_metadata_for_Swift_String_100523a98,param_2,param_2);
  if (bVar1) {
    cVar6 = '\x03';
    goto LAB_100292edc;
  }
  local_80 = 0x6f727063616d;
  uStack_78 = 0xe600000000000000;
  local_70 = SVar7;
  bVar1 = (extension_Foundation)::Swift::StringProtocol::_contains
                    (&local_80,PTR___type_metadata_for_Swift_String_100523a98,
                     PTR___type_metadata_for_Swift_String_100523a98,param_2,param_2);
  if (bVar1) {
    cVar6 = '\x05';
    goto LAB_100292edc;
  }
  local_80 = 0x696475747363616d;
  uStack_78 = 0xe90000000000006f;
  puVar4 = PTR___type_metadata_for_Swift_String_100523a98;
  local_70 = SVar7;
  bVar1 = (extension_Foundation)::Swift::StringProtocol::_contains
                    (&local_80,PTR___type_metadata_for_Swift_String_100523a98,
                     PTR___type_metadata_for_Swift_String_100523a98,param_2,param_2);
  pcVar2 = (char *)CONCAT71(extraout_var,bVar1);
  if (bVar1) {
LAB_100292d20:
    cVar6 = '\x04';
  }
  else {
    FUN_100292900();
    SVar8.bridgeObject = puVar4;
    SVar8.str = pcVar2;
    SVar8 = Swift::String::lowercased(SVar8);
    pvVar5 = SVar8.bridgeObject;
    _swift_bridgeObjectRelease(puVar4);
    local_80 = 0x206b6f6f6263616d;
    uStack_78 = 0xeb000000006f656e;
    local_70 = SVar8;
    bVar1 = (extension_Foundation)::Swift::StringProtocol::_contains
                      (&local_80,PTR___type_metadata_for_Swift_String_100523a98,
                       PTR___type_metadata_for_Swift_String_100523a98,param_2,param_2);
    if (bVar1) {
      cVar6 = '\x06';
    }
    else {
      local_80 = 0x206b6f6f6263616d;
      uStack_78 = 0xeb00000000726961;
      local_70 = SVar8;
      bVar1 = (extension_Foundation)::Swift::StringProtocol::_contains
                        (&local_80,PTR___type_metadata_for_Swift_String_100523a98,
                         PTR___type_metadata_for_Swift_String_100523a98,param_2,param_2);
      if (bVar1) {
        cVar6 = '\0';
      }
      else {
        local_80 = 0x206b6f6f6263616d;
        uStack_78 = 0xeb000000006f7270;
        local_70 = SVar8;
        bVar1 = (extension_Foundation)::Swift::StringProtocol::_contains
                          (&local_80,PTR___type_metadata_for_Swift_String_100523a98,
                           PTR___type_metadata_for_Swift_String_100523a98,param_2,param_2);
        if (bVar1) {
          cVar6 = '\x01';
        }
        else {
          local_80 = 0x63616d69;
          uStack_78 = 0xe400000000000000;
          local_70 = SVar8;
          bVar1 = (extension_Foundation)::Swift::StringProtocol::_contains
                            (&local_80,PTR___type_metadata_for_Swift_String_100523a98,
                             PTR___type_metadata_for_Swift_String_100523a98,param_2,param_2);
          if (bVar1) {
            cVar6 = '\x02';
          }
          else {
            local_80 = 0x696e696d2063616d;
            uStack_78 = 0xe800000000000000;
            local_70 = SVar8;
            bVar1 = (extension_Foundation)::Swift::StringProtocol::_contains
                              (&local_80,PTR___type_metadata_for_Swift_String_100523a98,
                               PTR___type_metadata_for_Swift_String_100523a98,param_2,param_2);
            if (bVar1) {
              cVar6 = '\x03';
            }
            else {
              local_80 = 0x6f72702063616d;
              uStack_78 = 0xe700000000000000;
              local_70 = SVar8;
              bVar1 = (extension_Foundation)::Swift::StringProtocol::_contains
                                (&local_80,PTR___type_metadata_for_Swift_String_100523a98,
                                 PTR___type_metadata_for_Swift_String_100523a98,param_2,param_2);
              if (bVar1) {
                cVar6 = '\x05';
              }
              else {
                local_80 = 0x647574732063616d;
                uStack_78 = 0xea00000000006f69;
                local_70 = SVar8;
                bVar1 = (extension_Foundation)::Swift::StringProtocol::_contains
                                  (&local_80,PTR___type_metadata_for_Swift_String_100523a98,
                                   PTR___type_metadata_for_Swift_String_100523a98,param_2,param_2);
                _swift_bridgeObjectRelease(pvVar5);
                if (bVar1) goto LAB_100292d20;
                if (DAT_100559308 != -1) {
                  _swift_once(&DAT_100559308,FUN_100292010);
                }
                pvVar5 = DAT_100559310;
                if (*(long *)((long)DAT_100559310 + 0x10) == 0) {
                  cVar6 = '\a';
                  goto LAB_100292edc;
                }
                _swift_bridgeObjectRetain(DAT_100559310);
                FUN_10000464c();
                if (((ulong)SVar7.bridgeObject & 1) == 0) {
                  cVar6 = '\a';
                }
                else {
                  cVar6 = SVar7.str[*(long *)((long)pvVar5 + 0x38)];
                }
              }
            }
          }
        }
      }
    }
    _swift_bridgeObjectRelease(pvVar3);
    pvVar3 = pvVar5;
  }
LAB_100292edc:
  _swift_bridgeObjectRelease(pvVar3);
  return cVar6;
}

