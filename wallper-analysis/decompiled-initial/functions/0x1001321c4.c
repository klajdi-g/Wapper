// rea decompile_all
// name: thunk_FUN_1001321c8
// address: 0x1001321c4
// body: available
// range: 0x1001321c4-0x1001321c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_1001321c8(undefined8 param_1)

{
  DispatchWorkItemFlags DVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puStack_48;
  
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  puStack_48 = PTR___swiftEmptyArrayStorage_100524190;
  puVar2 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar3 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar4 = &DAT_100553dc0;
  FUN_100132684(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90);
  Swift::SetAlgebra::_init(param_1,&puStack_48,puVar3,puVar4,DVar1.unknown,puVar2);
  return;
}

