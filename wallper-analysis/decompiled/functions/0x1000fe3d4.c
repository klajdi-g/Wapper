// rea decompile_all
// name: FUN_1000fe3d4
// address: 0x1000fe3d4
// body: available
// range: 0x1000fe3d4-0x1000fe4c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1000fe3d4(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 local_80;
  undefined1 auStack_78 [32];
  undefined *local_58;
  
  lVar4 = *(long *)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyArrayStorage_100524190;
  if (lVar4 != 0) {
    local_58 = PTR___swiftEmptyArrayStorage_100524190;
    FUN_1001c5e0c(0,lVar4,0);
    puVar3 = PTR___type_metadata_for_CoreGraphics_CGFloat_100524430;
    puVar2 = PTR___type_metadata_for_Any_100524178;
    puVar5 = local_58;
    puVar6 = (undefined8 *)(param_1 + 0x20);
    do {
      local_80 = *puVar6;
      _swift_dynamicCast(auStack_78,&local_80,puVar3,puVar2 + 8,7);
      uVar1 = *(ulong *)(puVar5 + 0x10);
      local_58 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
        FUN_1001c5e0c(1 < *(ulong *)(puVar5 + 0x18),uVar1 + 1,1);
      }
      puVar5 = local_58;
      *(ulong *)(local_58 + 0x10) = uVar1 + 1;
      FUN_100007d88(auStack_78,local_58 + uVar1 * 0x20 + 0x20);
      lVar4 = lVar4 + -1;
      puVar6 = puVar6 + 1;
    } while (lVar4 != 0);
  }
  return puVar5;
}

