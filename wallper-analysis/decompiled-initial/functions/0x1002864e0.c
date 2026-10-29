// rea decompile_all
// name: FUN_1002864e0
// address: 0x1002864e0
// body: available
// range: 0x1002864e0-0x1002866bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


String FUN_1002864e0(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *aBlock;
  undefined *puVar5;
  String SVar6;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  code *local_58;
  undefined *local_50;
  undefined *local_48;
  
  local_48 = PTR___swiftEmptyArrayStorage_100524190;
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  uVar1 = DAT_100559010;
  puVar3 = &DAT_100536bd8;
  _swift_allocObject(&DAT_100536bd8,0x18,7);
  *(undefined ***)(puVar3 + 0x10) = &local_48;
  puVar4 = &DAT_100536c00;
  _swift_allocObject(&DAT_100536c00,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_10028a00c;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  local_58 = FUN_10005b020;
  local_78 = PTR___NSConcreteStackBlock_100521110;
  local_70 = 0x42000000;
  local_68 = FUN_100286740;
  puStack_60 = &DAT_100536c18;
  local_50 = puVar4;
  aBlock = __Block_copy(&local_78);
  puVar5 = local_50;
  _swift_retain(puVar4);
  _swift_release(puVar5);
  _dispatch_sync(uVar1,aBlock);
  __Block_release(aBlock);
  puVar5 = puVar4;
  _swift_isEscapingClosureAtFileLocation(puVar4,"",0x51,0xe3,0x18,1);
  _swift_release(puVar4);
  puVar4 = local_48;
  if (((ulong)puVar5 & 1) == 0) {
    local_78 = local_48;
    _swift_bridgeObjectRetain(local_48);
    FUN_100002f94(&DAT_100553858,&DAT_100429e10);
    FUN_1000087a0(&DAT_1005546b8,&DAT_100553858,&DAT_100429e10,
                  PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100523b48);
    SVar6.bridgeObject = (void *)0xe100000000000000;
    SVar6.str = (char *)0xa;
    SVar6 = (extension_Swift)::Swift::BidirectionalCollection::_joined(SVar6);
    _swift_bridgeObjectRelease(puVar4);
    puVar4 = local_48;
    _swift_release(puVar3);
    _swift_bridgeObjectRelease(puVar4);
    return SVar6;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1002866c0);
  (*pcVar2)();
}

