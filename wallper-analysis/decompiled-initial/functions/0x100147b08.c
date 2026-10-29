// rea decompile_all
// name: FUN_100147b08
// address: 0x100147b08
// body: available
// range: 0x100147b08-0x100147c67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100147b08(undefined8 param_1,ID param_2,long param_3)

{
  Status SVar1;
  bool bVar2;
  undefined7 extraout_var;
  NWPath NVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar6;
  long lVar7;
  code *pcVar8;
  undefined1 auStack_90 [15];
  undefined1 local_81;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined *puVar3;
  
  SVar1 = Network::NWPath::Status::typeMetadataAccessor();
  puVar3 = (undefined *)CONCAT71(extraout_var,SVar1.value);
  lVar7 = *(long *)(puVar3 + -8);
  NVar4.unknown = puVar3;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar7 + 0x40));
  puVar6 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  Network::NWPath::get_status(NVar4);
  puVar5 = puVar3;
  (**(code **)(lVar7 + 0x68))
            (puVar6,*(undefined4 *)
                     PTR___enum_case_for_Network_NWPath_Status_satisfied_Network_NWPath_Status_Type___>_Network_NWPath_Status_100521a48
            );
  bVar2 = Network::NWPath::Status::___infix
                    ((Status)(__int8)((long)puVar6 - extraout_x12),(Status)(__int8)puVar6,
                     (Status)(__int8)puVar5);
  pcVar8 = *(code **)(lVar7 + 8);
  (*pcVar8)(puVar6,puVar3);
  (*pcVar8)((long)puVar6 - extraout_x12,puVar3);
  if (bVar2) {
    objc_stub::lock(param_2);
    _swift_beginAccess(param_3 + 0x10,auStack_68,0,0);
    if ((*(byte *)(param_3 + 0x10) & 1) == 0) {
      _swift_beginAccess(param_3 + 0x10,auStack_80,1,0);
      *(undefined1 *)(param_3 + 0x10) = 1;
      local_81 = 1;
      puVar5 = &DAT_100554ab0;
      FUN_100002f94(&DAT_100554ab0,&DAT_100427c60);
      Swift::CheckedContinuation::resume(&local_81,puVar5);
    }
    objc_stub::unlock(param_2);
  }
  return;
}

