// rea decompile_all
// name: FUN_100075d94
// address: 0x100075d94
// body: available
// range: 0x100075d94-0x100075f9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100075d94(ID *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  DispatchWorkItemFlags DVar1;
  DispatchQoS DVar2;
  ID IVar3;
  OS_dispatch_queue *pOVar4;
  undefined *puVar5;
  void *aBlock;
  DispatchQoS DVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_a0 [8];
  OS_dispatch_queue *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar11 = *(long *)(DVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar11 + 0x40));
  puVar9 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar2 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar10 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar10 + 0x40));
  IVar3 = objc_stub::isReadyForDisplay(*param_1);
  if ((int)IVar3 != 0) {
    pOVar4 = (OS_dispatch_queue *)0x0;
    FUN_10006cc7c();
    local_98 = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar4);
    puVar5 = &DAT_100527cb8;
    _swift_allocObject(&DAT_100527cb8,0x20,7);
    *(undefined8 *)(puVar5 + 0x10) = param_3;
    *(undefined8 *)(puVar5 + 0x18) = param_4;
    local_70 = FUN_100077b4c;
    local_90 = PTR___NSConcreteStackBlock_100521110;
    local_88 = 0x42000000;
    local_80 = FUN_1000c7e7c;
    puStack_78 = &DAT_100527cd0;
    local_68 = puVar5;
    aBlock = __Block_copy(&local_90);
    DVar6.unknown = local_68;
    _swift_retain(param_3);
    _swift_release();
    Dispatch::DispatchQoS::get_unspecified(DVar6);
    local_90 = PTR___swiftEmptyArrayStorage_100524190;
    puVar7 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar5 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar8 = puVar5;
    FUN_100077ac0();
    Swift::SetAlgebra::_init(puVar9,&local_90,puVar5,puVar8,DVar1.unknown,puVar7);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async
              ((DispatchQoS)0x0,
               (DispatchWorkItemFlags)(puVar9 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)));
    __Block_release(aBlock);
    (**(code **)(lVar11 + 8))(puVar9,DVar1.unknown);
    (**(code **)(lVar10 + 8))(puVar9 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0),DVar2.unknown);
  }
  return;
}

