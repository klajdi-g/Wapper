// rea decompile_all
// name: FUN_10009e814
// address: 0x10009e814
// body: available
// range: 0x10009e814-0x10009ec0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10009ec0c to 0x10041469c _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_10009e814(void)

{
  DispatchWorkItemFlags qos;
  undefined *puVar1;
  QoSClass QVar2;
  undefined7 extraout_var;
  ID self;
  NSString *pNVar4;
  NSString *pNVar5;
  DispatchQoS DVar6;
  undefined *puVar7;
  void *aBlock;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined8 in_x4;
  undefined8 in_x5;
  ID in_x6;
  long extraout_x8;
  undefined1 *puVar10;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar11;
  long lVar12;
  undefined1 auStack_e0 [8];
  DispatchWorkItemFlags local_d8;
  long local_d0;
  undefined *puStack_c8;
  undefined1 *local_c0;
  long local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  long lVar3;
  
  local_a8 = in_x4;
  uStack_a0 = in_x5;
  local_b0 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_b8 = *(long *)(local_b0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_b8 + 0x40));
  puVar10 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_c0 = puVar10;
  puStack_c8 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_d0 = *(long *)(puStack_c8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_d0 + 0x40));
  local_d8.unknown = puVar10 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  QVar2 = Dispatch::DispatchQoS::QoSClass::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,QVar2.value);
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar12 + 0x40));
  lVar11 = (long)(puVar10 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  self = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  NSUserDefaults::setObject_forKey_(self,pNVar4,pNVar5);
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  NSUserDefaults::setObject_forKey_(self,pNVar4,pNVar5);
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  NSUserDefaults::setObject_forKey_(self,pNVar4,pNVar5);
  if ((in_x6 != 0) &&
     (DVar6.unknown = (undefined *)objc_stub::CGImageForProposedRect_context_hints_(in_x6,0,0,0),
     DVar6.unknown != (undefined *)0x0)) {
    FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
    (**(code **)(lVar12 + 0x68))
              (lVar11,*(undefined4 *)
                       PTR___enum_case_for_Dispatch_DispatchQoS_QoSClass_utility_Dispatch_DispatchQoS_QoSClass_Type___>_Dispatch_DispatchQoS_QoSClass_1005244c8
               ,lVar3);
    (extension_Dispatch)::__C::OS_dispatch_queue::global((QoSClass)(__int8)lVar11);
    (**(code **)(lVar12 + 8))(lVar11,lVar3);
    puVar7 = &DAT_100528940;
    _swift_allocObject(&DAT_100528940,0x18,7);
    *(undefined **)(puVar7 + 0x10) = DVar6.unknown;
    local_70 = FUN_1000a30dc;
    local_90 = PTR___NSConcreteStackBlock_100521110;
    local_88 = 0x42000000;
    local_80 = FUN_1000c7e7c;
    puStack_78 = &DAT_100528958;
    local_68 = puVar7;
    aBlock = __Block_copy(&local_90);
    qos.unknown = local_d8.unknown;
    Dispatch::DispatchQoS::get_unspecified(DVar6);
    local_98 = PTR___swiftEmptyArrayStorage_100524190;
    puVar8 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar7 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar9 = puVar7;
    FUN_100077ac0();
    puVar1 = local_b0;
    puVar10 = local_c0;
    Swift::SetAlgebra::_init(local_c0,&local_98,puVar7,puVar9,local_b0,puVar8);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(aBlock);
    (**(code **)(local_b8 + 8))(puVar10,puVar1);
    (**(code **)(local_d0 + 8))(qos.unknown,puStack_c8);
    _swift_release(local_68);
    return local_68;
  }
  return (undefined *)0x0;
}

