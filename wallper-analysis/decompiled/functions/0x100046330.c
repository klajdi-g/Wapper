// rea decompile_all
// name: FUN_100046330
// address: 0x100046330
// body: available
// range: 0x100046330-0x100046583 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100046330(void)

{
  AutoreleaseFrequency AVar1;
  undefined7 extraout_var;
  Attributes AVar2;
  DispatchQoS DVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  OS_dispatch_queue *pOVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar10;
  Attributes attributes;
  String label;
  OS_dispatch_queue *local_80;
  long local_78;
  long lStack_70;
  undefined *local_68;
  
  AVar1 = (extension_Dispatch)::__C::OS_dispatch_queue::AutoreleaseFrequency::typeMetadataAccessor()
  ;
  lStack_70 = CONCAT71(extraout_var,AVar1.value);
  local_78 = *(long *)(lStack_70 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_78 + 0x40));
  lVar10 = (long)&local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  AVar2 = Attributes::_typeMetadataAccessor();
  puVar7 = PTR__typeMetadataAccessor_100524560;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(AVar2.unknown + -8) + 0x40));
  attributes.unknown = (undefined *)(lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  DVar3 = Dispatch::DispatchQoS::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(DVar3.unknown + -8) + 0x40));
  _swift_unknownObjectWeakInit(unaff_x20 + 0x10,0);
  *(undefined8 *)(unaff_x20 + 0x39) = 0;
  *(undefined8 *)(unaff_x20 + 0x31) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0x3fa1111111111111;
  *(undefined1 *)(unaff_x20 + 0x58) = 0;
  lVar4 = 0;
  FUN_100049054();
  _swift_allocObject();
  puVar6 = PTR___swiftEmptyArrayStorage_100524190;
  *(undefined **)(lVar4 + 0x10) = PTR___swiftEmptyArrayStorage_100524190;
  *(undefined8 *)(lVar4 + 0x18) = 0;
  *(undefined8 *)(lVar4 + 0x20) = 0;
  *(undefined8 *)(lVar4 + 0x28) = 0;
  uVar5 = *(undefined8 *)PTR__kCGColorSpaceSRGB_1005217a8;
  _CGColorSpaceCreateWithName();
  *(undefined8 *)(lVar4 + 0x30) = uVar5;
  *(long *)(unaff_x20 + 0x60) = lVar4;
  DVar3.unknown = (undefined *)0x0;
  FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
  local_80 = (OS_dispatch_queue *)DVar3.unknown;
  Dispatch::DispatchQoS::get_userInteractive(DVar3);
  local_68 = puVar6;
  puVar6 = &DAT_10054d3e0;
  FUN_100047f94(&DAT_10054d3e0,0xff,puVar7,PTR__Dispatch__Attributes_>Swift__SetAlgebra_100524570);
  puVar7 = &DAT_10054d3e8;
  FUN_100002f94(&DAT_10054d3e8,&DAT_10041dc80);
  puVar8 = &DAT_10054d3f0;
  FUN_1000087a0(&DAT_10054d3f0,&DAT_10054d3e8,&DAT_10041dc80,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
  Swift::SetAlgebra::_init(attributes.unknown,&local_68,puVar7,puVar8,AVar2.unknown,puVar6);
  (**(code **)(local_78 + 0x68))
            (lVar10,*(undefined4 *)
                     PTR___enum_case_for__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_inherit__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_Type___>__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_1005245a8
             ,lStack_70);
  label.bridgeObject = (void *)0x80000001004dc2c0;
  label.str = (char *)0xd000000000000015;
  pOVar9 = (extension_Dispatch)::__C::OS_dispatch_queue::___allocating_init
                     (local_80,label,
                      (DispatchQoS)
                      (attributes.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0)),
                      attributes,(AutoreleaseFrequency)(__int8)lVar10);
  *(OS_dispatch_queue **)(unaff_x20 + 0x68) = pOVar9;
  *(undefined1 *)(unaff_x20 + 0x70) = 0;
  return;
}

