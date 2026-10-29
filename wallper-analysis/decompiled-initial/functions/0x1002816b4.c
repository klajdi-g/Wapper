// rea decompile_all
// name: FUN_1002816b4
// address: 0x1002816b4
// body: available
// range: 0x1002816b4-0x100281897 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1002816b4(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  URL UVar5;
  void *pvVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x13;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  String SVar10;
  long local_90 [2];
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined *local_70;
  undefined *local_68;
  
  puStack_80 = (undefined *)Foundation::URL::typeMetadataAccessor();
  local_90[1] = *(long *)(puStack_80 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_90[1] + 0x40));
  lVar7 = (long)local_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_10040211c();
  local_90[0] = lVar4;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar9 = (undefined8 *)(lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_68 = PTR___swiftEmptySetSingleton_1005241a0;
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != 0) {
    param_1 = param_1 + ((ulong)*(byte *)(extraout_x12 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(extraout_x12 + 0x50) ^ 0xffffffffffffffff));
    lVar8 = *(long *)(extraout_x12 + 0x48);
    do {
      FUN_100029504(param_1,(long)puVar9 - extraout_x13,FUN_10040211c);
      FUN_100007e64((long)puVar9 - extraout_x13,puVar9,FUN_10040211c);
      uVar2 = *puVar9;
      uVar3 = puVar9[1];
      _swift_bridgeObjectRetain(uVar3);
      FUN_1001ca054(auStack_78,uVar2,uVar3);
      UVar5.unknown = local_70;
      _swift_bridgeObjectRelease();
      UVar5 = Foundation::URL::deletingPathExtension(UVar5);
      SVar10 = Foundation::URL::get_lastPathComponent(UVar5);
      pvVar6 = SVar10.bridgeObject;
      (**(code **)(local_90[1] + 8))(lVar7,puStack_80);
      uVar1 = (ulong)SVar10.str & 0xffffffffffff;
      if (((ulong)pvVar6 & 0x2000000000000000) != 0) {
        uVar1 = (ulong)pvVar6 >> 0x38 & 0xf;
      }
      if (uVar1 == 0) {
        FUN_100029548(puVar9,FUN_10040211c);
        _swift_bridgeObjectRelease(pvVar6);
      }
      else {
        FUN_1001ca054(auStack_78,SVar10.str,pvVar6);
        _swift_bridgeObjectRelease(local_70);
        FUN_100029548(puVar9,FUN_10040211c);
      }
      param_1 = param_1 + lVar8;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return local_68;
}

