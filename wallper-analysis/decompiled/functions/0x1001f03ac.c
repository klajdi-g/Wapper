// rea decompile_all
// name: FUN_1001f03ac
// address: 0x1001f03ac
// body: available
// range: 0x1001f03ac-0x1001f04c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1001f03ac(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 local_b8 [2];
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [32];
  undefined *local_68;
  
  lVar7 = *(long *)(param_1 + 0x10);
  local_68 = PTR___swiftEmptyArrayStorage_100524190;
  FUN_1001c5e98(0,lVar7,0);
  puVar4 = PTR___type_metadata_for_Any_100524178;
  puVar3 = PTR___type_metadata_for_Swift_Double_100523b90;
  puVar2 = local_68;
  while( true ) {
    if (lVar7 == 0) {
      return puVar2;
    }
    param_1 = param_1 + 0x20;
    local_68 = puVar2;
    FUN_1000280d4(param_1,auStack_88);
    FUN_100007d88(auStack_88,auStack_a8);
    puVar6 = local_b8;
    _swift_dynamicCast(puVar6,auStack_a8,puVar4 + 8,puVar3,6);
    uVar5 = local_b8[0];
    if (((ulong)puVar6 & 1) == 0) break;
    uVar1 = *(ulong *)(puVar2 + 0x10);
    local_68 = puVar2;
    if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
      FUN_1001c5e98(1 < *(ulong *)(puVar2 + 0x18),uVar1 + 1,1);
    }
    *(ulong *)(local_68 + 0x10) = uVar1 + 1;
    *(undefined8 *)(local_68 + uVar1 * 8 + 0x20) = uVar5;
    lVar7 = lVar7 + -1;
    puVar2 = local_68;
  }
  _swift_release(puVar2);
  return (undefined *)0x0;
}

