// rea decompile_all
// name: FUN_100163a04
// address: 0x100163a04
// body: available
// range: 0x100163a04-0x100163ba3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


String FUN_100163a04(undefined8 param_1,CharacterSet param_2)

{
  long lVar1;
  undefined *puVar2;
  CharacterSet CVar3;
  CharacterSet CVar4;
  undefined8 *puVar5;
  long extraout_x8;
  long lVar6;
  String SVar7;
  String SVar8;
  undefined8 auStack_a0 [4];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  String local_60;
  
  CVar3 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar6 = *(long *)(CVar3.unknown + -8);
  CVar4 = CVar3;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar6 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_60.bridgeObject = param_2.unknown;
  local_60.str = (char *)param_1;
  local_70 = 0x202d20;
  uStack_68 = 0xe300000000000000;
  FUN_100026df4();
  puVar2 = PTR___type_metadata_for_Swift_String_100523a98;
  puVar5 = &local_70;
  (extension_Foundation)::Swift::StringProtocol::_components
            (puVar5,PTR___type_metadata_for_Swift_String_100523a98,
             PTR___type_metadata_for_Swift_String_100523a98,CVar4.unknown,CVar4.unknown);
  if (puVar5[2] == 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRetain(param_2.unknown);
  }
  else {
    param_1 = puVar5[4];
    param_2.unknown = (undefined *)puVar5[5];
    _swift_bridgeObjectRetain(param_2.unknown);
    _swift_bridgeObjectRelease(puVar5);
  }
  local_60.bridgeObject = param_2.unknown;
  local_60.str = (char *)param_1;
  local_70 = 0xd000000000000017;
  uStack_68 = 0x80000001004ded10;
  local_80 = 0;
  uStack_78 = 0xe000000000000000;
  *(undefined **)((long)auStack_a0 + lVar1 + 0x10) = CVar4.unknown;
  *(undefined **)((long)auStack_a0 + lVar1 + 0x18) = CVar4.unknown;
  *(undefined **)((long)auStack_a0 + lVar1) = puVar2;
  *(undefined **)((long)auStack_a0 + lVar1 + 8) = CVar4.unknown;
  SVar7 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                    (&local_70,&local_80,0x400,0,0,1,puVar2,puVar2);
  _swift_bridgeObjectRelease();
  local_60 = SVar7;
  Foundation::CharacterSet::get_whitespaces(param_2);
  SVar8 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters
                    ((undefined *)((long)&local_80 + lVar1));
  (**(code **)(lVar6 + 8))((undefined *)((long)&local_80 + lVar1),CVar3.unknown);
  _swift_bridgeObjectRelease(SVar7.bridgeObject);
  return SVar8;
}

