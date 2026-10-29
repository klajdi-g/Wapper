// rea decompile_all
// name: FUN_1002854a0
// address: 0x1002854a0
// body: available
// range: 0x1002854a0-0x100285683 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002854a0(void)

{
  AutoreleaseFrequency AVar1;
  undefined7 extraout_var;
  Attributes AVar2;
  DispatchQoS DVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar7;
  undefined1 *puVar8;
  Attributes attributes;
  String label;
  undefined1 auStack_80 [8];
  OS_dispatch_queue *local_78;
  long local_70;
  undefined *local_68;
  
  AVar1 = (extension_Dispatch)::__C::OS_dispatch_queue::AutoreleaseFrequency::typeMetadataAccessor()
  ;
  local_70 = CONCAT71(extraout_var,AVar1.value);
  lVar7 = *(long *)(local_70 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar7 + 0x40));
  puVar8 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  AVar2 = Attributes::_typeMetadataAccessor();
  puVar5 = PTR__typeMetadataAccessor_100524560;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(AVar2.unknown + -8) + 0x40));
  attributes.unknown = puVar8 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar3 = Dispatch::DispatchQoS::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(DVar3.unknown + -8) + 0x40));
  DVar3.unknown = (undefined *)0x0;
  FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
  local_78 = (OS_dispatch_queue *)DVar3.unknown;
  Dispatch::DispatchQoS::get_unspecified(DVar3);
  local_68 = PTR___swiftEmptyArrayStorage_100524190;
  puVar4 = &DAT_10054d3e0;
  FUN_1000036d0(&DAT_10054d3e0,puVar5,PTR__Dispatch__Attributes_>Swift__SetAlgebra_100524570);
  puVar5 = &DAT_10054d3e8;
  FUN_100002f94(&DAT_10054d3e8,&DAT_10041dc80);
  puVar6 = &DAT_10054d3f0;
  FUN_1000087a0(&DAT_10054d3f0,&DAT_10054d3e8,&DAT_10041dc80,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
  Swift::SetAlgebra::_init(attributes.unknown,&local_68,puVar5,puVar6,AVar2.unknown,puVar4);
  (**(code **)(lVar7 + 0x68))
            (puVar8,*(undefined4 *)
                     PTR___enum_case_for__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_inherit__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_Type___>__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_1005245a8
             ,local_70);
  label.bridgeObject = (void *)0x80000001004e3470;
  label.str = (char *)0xd000000000000017;
  DAT_100559010 =
       (extension_Dispatch)::__C::OS_dispatch_queue::___allocating_init
                 (local_78,label,
                  (DispatchQoS)(attributes.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0)),
                  attributes,(AutoreleaseFrequency)(__int8)puVar8);
  return;
}

