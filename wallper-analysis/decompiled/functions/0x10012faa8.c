// rea decompile_all
// name: FUN_10012faa8
// address: 0x10012faa8
// body: available
// range: 0x10012faa8-0x10012fcd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10012faa8(void)

{
  undefined8 *puVar1;
  AutoreleaseFrequency AVar2;
  undefined7 extraout_var;
  Attributes AVar3;
  DispatchQoS DVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  Date DVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar9;
  Attributes attributes;
  String label;
  OS_dispatch_queue *local_80;
  long local_78;
  long lStack_70;
  undefined *local_68;
  
  AVar2 = (extension_Dispatch)::__C::OS_dispatch_queue::AutoreleaseFrequency::typeMetadataAccessor()
  ;
  lStack_70 = CONCAT71(extraout_var,AVar2.value);
  local_78 = *(long *)(lStack_70 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_78 + 0x40));
  lVar9 = (long)&local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  AVar3 = Attributes::_typeMetadataAccessor();
  puVar6 = PTR__typeMetadataAccessor_100524560;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(AVar3.unknown + -8) + 0x40));
  attributes.unknown = (undefined *)(lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  DVar4 = Dispatch::DispatchQoS::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(DVar4.unknown + -8) + 0x40));
  DVar4.unknown = (undefined *)0x0;
  FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
  local_80 = (OS_dispatch_queue *)DVar4.unknown;
  Dispatch::DispatchQoS::get_unspecified(DVar4);
  local_68 = PTR___swiftEmptyArrayStorage_100524190;
  puVar5 = &DAT_10054d3e0;
  FUN_1000036d0(&DAT_10054d3e0,puVar6,PTR__Dispatch__Attributes_>Swift__SetAlgebra_100524570);
  puVar6 = &DAT_10054d3e8;
  FUN_100002f94(&DAT_10054d3e8,&DAT_10041dc80);
  puVar7 = &DAT_10054d3f0;
  FUN_100132684(&DAT_10054d3f0,&DAT_10054d3e8,&DAT_10041dc80);
  Swift::SetAlgebra::_init(attributes.unknown,&local_68,puVar6,puVar7,AVar3.unknown,puVar5);
  (**(code **)(local_78 + 0x68))
            (lVar9,*(undefined4 *)
                    PTR___enum_case_for__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_inherit__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_Type___>__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_1005245a8
             ,lStack_70);
  label.bridgeObject = (void *)0x80000001004de030;
  label.str = (char *)0xd00000000000001a;
  DVar8.unknown =
       (extension_Dispatch)::__C::OS_dispatch_queue::___allocating_init
                 (local_80,label,attributes.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0),
                  attributes,(AutoreleaseFrequency)(__int8)lVar9);
  *(undefined **)(unaff_x20 + 0x10) = DVar8.unknown;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined **)(unaff_x20 + 0x40) = PTR___swiftEmptyArrayStorage_100524190;
  Foundation::Date::get_distantPast(DVar8);
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7Wallper23LockScreenRepairMonitor::desiredKey);
  *puVar1 = 0xd000000000000012;
  puVar1[1] = 0x80000001004de050;
  return;
}

