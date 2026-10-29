// rea decompile_all
// name: FUN_100280554
// address: 0x100280554
// body: available
// range: 0x100280554-0x100280dcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100280554(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined8 uVar1;
  DispatchWorkItemFlags flags;
  undefined *puVar2;
  AutoreleaseFrequency AVar3;
  undefined7 extraout_var;
  Attributes AVar4;
  dispatch_group_t group;
  Attributes AVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  void *pvVar9;
  ID IVar10;
  URLRequest self;
  NSURLRequest *pNVar11;
  DispatchQoS DVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long extraout_x8;
  URL url;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x12;
  long extraout_x12_00;
  URLRequest *pUVar15;
  code *pcVar16;
  long lVar17;
  ulong uVar18;
  URLRequest *this;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  DispatchQoS DVar22;
  long lVar23;
  String label;
  URLRequest UStack_180;
  NSURLRequest *local_178;
  undefined *local_170;
  ID local_168;
  code *local_160;
  undefined *local_158;
  code *local_150;
  ulong local_148;
  undefined *local_140;
  undefined8 local_138;
  URLRequest *local_130;
  DispatchQoS local_128;
  OS_dispatch_queue *local_120;
  undefined8 local_118;
  undefined *local_110;
  long local_108;
  undefined *puStack_100;
  DispatchWorkItemFlags local_f8;
  undefined *local_f0;
  long local_e8;
  undefined *puStack_e0;
  long local_d8;
  undefined *local_d0;
  undefined *local_c8;
  URLRequest *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *puStack_90;
  code *local_88;
  undefined *local_80;
  
  local_148 = param_1;
  local_138 = param_2;
  local_118 = param_3;
  local_110 = param_4;
  local_f0 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_d8 = *(long *)(local_f0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_d8 + 0x40));
  puVar8 = (undefined *)((long)&UStack_180 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_f8.unknown = puVar8;
  local_d0 = (undefined *)Foundation::URL::typeMetadataAccessor();
  lVar23 = *(long *)(local_d0 + -8);
  local_150 = *(code **)(lVar23 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  url.unknown = puVar8 + -(extraout_x12 + 0xfU & 0xfffffffffffffff0);
  puStack_e0 = (undefined *)Foundation::URLRequest::typeMetadataAccessor();
  local_e8 = *(long *)(puStack_e0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_e8 + 0x40));
  local_c0 = (URLRequest *)(url.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100521118)();
  this = (URLRequest *)
         ((long)(url.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)) - extraout_x12_00);
  AVar3 = (extension_Dispatch)::__C::OS_dispatch_queue::AutoreleaseFrequency::typeMetadataAccessor()
  ;
  lVar17 = *(long *)(CONCAT71(extraout_var,AVar3.value) + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar17 + 0x40));
  lVar20 = (long)this - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puStack_100 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_108 = *(long *)(puStack_100 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_108 + 0x40));
  DVar22.unknown = (undefined *)(lVar20 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  local_128.unknown = DVar22.unknown;
  AVar4 = Attributes::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(AVar4.unknown + -8) + 0x40));
  group = _dispatch_group_create();
  AVar4.unknown = (undefined *)0x0;
  FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
  AVar5 = Attributes::_get_concurrent(AVar4);
  Dispatch::DispatchQoS::get_unspecified((DispatchQoS)AVar5.unknown);
  (**(code **)(lVar17 + 0x68))
            (lVar20,*(undefined4 *)
                     PTR___enum_case_for__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_inherit__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_Type___>__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_1005245a8
             ,CONCAT71(extraout_var,AVar3.value));
  label.bridgeObject = (void *)0xed00006863746566;
  label.str = (char *)0x2e7265706c6c6177;
  local_120 = (extension_Dispatch)::__C::OS_dispatch_queue::___allocating_init
                        ((OS_dispatch_queue *)AVar4.unknown,label,DVar22,
                         (Attributes)
                         (DVar22.unknown + -(extraout_x8_03 + 0xfU & 0xfffffffffffffff0)),
                         (AutoreleaseFrequency)(__int8)lVar20);
  puVar8 = &DAT_100536250;
  puVar6 = puVar8;
  _swift_allocObject(&DAT_100536250,0x18,7);
  puVar7 = PTR___swiftEmptyArrayStorage_100524190;
  *(undefined **)(puVar6 + 0x10) = PTR___swiftEmptyArrayStorage_100524190;
  local_c8 = puVar6;
  _swift_allocObject(&DAT_100536250,0x18,7);
  *(undefined **)(puVar8 + 0x10) = puVar7;
  puVar7 = &DAT_100536278;
  local_140 = puVar8;
  _swift_allocObject(&DAT_100536278,0x18,7);
  *(undefined8 *)(puVar7 + 0x10) = 0;
  puVar8 = &_OBJC_CLASS___NSLock;
  local_b8 = puVar7;
  _objc_allocWithZone();
  local_168 = objc_stub::init((ID)puVar8);
  _dispatch_group_enter(group);
  puVar7 = local_d0;
  uVar18 = local_148;
  pcVar16 = *(code **)(lVar23 + 0x10);
  (*pcVar16)(url.unknown,local_148,local_d0);
  local_160 = pcVar16;
  Foundation::URLRequest::init(url,(NSURLRequestCachePolicy)0x0,60.0);
  pUVar15 = this;
  Foundation::URLRequest::_set_httpMethod(this);
  local_130 = this;
  Foundation::URLRequest::set_timeoutInterval(pUVar15,15.0);
  local_158 = &_OBJC_CLASS___NSURLSession;
  local_170 = (undefined *)NSURLSession::sharedSession((ID)&_OBJC_CLASS___NSURLSession);
  local_178 = Foundation::URLRequest::_bridgeToObjectiveC((URLRequest)local_170);
  (*pcVar16)(url.unknown,uVar18,puVar7);
  uVar18 = (ulong)*(byte *)(lVar23 + 0x50);
  uVar21 = uVar18 + 0x28 & (uVar18 ^ 0xffffffffffffffff);
  uVar19 = (long)local_150 + uVar21 + 7 & 0xfffffffffffffff8;
  puVar8 = &DAT_1005362a0;
  local_148 = uVar21;
  _swift_allocObject(&DAT_1005362a0,uVar19 + 8,uVar18 | 7);
  puVar6 = local_b8;
  IVar10 = local_168;
  *(dispatch_group_t *)(puVar8 + 0x10) = group;
  *(ID *)(puVar8 + 0x18) = local_168;
  *(undefined **)(puVar8 + 0x20) = local_b8;
  local_150 = *(code **)(lVar23 + 0x20);
  (*local_150)(puVar8 + uVar21,url.unknown,puVar7);
  puVar7 = local_c8;
  *(undefined **)(puVar8 + uVar19) = local_c8;
  local_88 = thunk_FUN_100280eac;
  local_a8 = PTR___NSConcreteStackBlock_100521110;
  local_a0 = 0x42000000;
  local_98 = FUN_10027377c;
  puStack_90 = &DAT_1005362b8;
  local_80 = puVar8;
  pvVar9 = __Block_copy(&local_a8);
  puVar8 = local_80;
  local_168 = IVar10;
  _swift_retain(puVar6);
  _swift_retain(puVar7);
  _swift_release(puVar8);
  IVar10 = objc_stub::dataTaskWithRequest_completionHandler_((ID)local_170,local_178,pvVar9);
  __Block_release(pvVar9);
  objc_stub::resume(IVar10);
  _dispatch_group_enter(group);
  puVar7 = local_d0;
  uVar1 = local_138;
  pcVar16 = local_160;
  (*local_160)(url.unknown,local_138,local_d0);
  pUVar15 = local_c0;
  Foundation::URLRequest::init(url,(NSURLRequestCachePolicy)0x0,60.0);
  Foundation::URLRequest::_set_httpMethod(pUVar15);
  Foundation::URLRequest::set_timeoutInterval(pUVar15,15.0);
  self.unknown = (undefined *)objc_stub::sharedSession(local_158);
  pNVar11 = Foundation::URLRequest::_bridgeToObjectiveC(self);
  (*pcVar16)(url.unknown,uVar1,puVar7);
  puVar8 = &DAT_1005362f0;
  _swift_allocObject(&DAT_1005362f0,uVar19 + 8,uVar18 | 7);
  puVar6 = local_b8;
  IVar10 = local_168;
  *(dispatch_group_t *)(puVar8 + 0x10) = group;
  *(ID *)(puVar8 + 0x18) = local_168;
  *(undefined **)(puVar8 + 0x20) = local_b8;
  (*local_150)(puVar8 + local_148,url.unknown,puVar7);
  puVar7 = local_140;
  *(undefined **)(puVar8 + uVar19) = local_140;
  local_88 = thunk_FUN_100280eac;
  local_a8 = PTR___NSConcreteStackBlock_100521110;
  local_a0 = 0x42000000;
  local_98 = FUN_10027377c;
  puStack_90 = &DAT_100536308;
  local_80 = puVar8;
  pvVar9 = __Block_copy(&local_a8);
  puVar8 = local_80;
  local_d0 = (undefined *)IVar10;
  _swift_retain(puVar6);
  _swift_retain(puVar7);
  _swift_release(puVar8);
  IVar10 = objc_stub::dataTaskWithRequest_completionHandler_((ID)self.unknown,pNVar11,pvVar9);
  __Block_release(pvVar9);
  objc_stub::resume(IVar10);
  puVar8 = &DAT_100536340;
  _swift_allocObject(&DAT_100536340,0x38,7);
  puVar2 = local_c8;
  DVar12.unknown = local_110;
  *(undefined **)(puVar8 + 0x10) = puVar6;
  *(undefined8 *)(puVar8 + 0x18) = local_118;
  *(undefined **)(puVar8 + 0x20) = local_110;
  *(undefined **)(puVar8 + 0x28) = local_c8;
  *(undefined **)(puVar8 + 0x30) = puVar7;
  local_88 = FUN_100280f78;
  local_a8 = PTR___NSConcreteStackBlock_100521110;
  local_a0 = 0x42000000;
  local_98 = FUN_1000c7e7c;
  puStack_90 = &DAT_100536358;
  local_80 = puVar8;
  pvVar9 = __Block_copy(&local_a8);
  _swift_retain(puVar6);
  _swift_retain(puVar2);
  _swift_retain(puVar7);
  _swift_retain();
  DVar22.unknown = local_128.unknown;
  Dispatch::DispatchQoS::get_unspecified(DVar12);
  local_b0 = PTR___swiftEmptyArrayStorage_100524190;
  puVar13 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar8 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar14 = &DAT_100553dc0;
  FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
  puVar6 = local_f0;
  flags.unknown = local_f8.unknown;
  Swift::SetAlgebra::_init(local_f8.unknown,&local_b0,puVar8,puVar14,local_f0,puVar13);
  (extension_Dispatch)::__C::OS_dispatch_group::_notify(DVar22,flags,local_120);
  __Block_release(pvVar9);
  (**(code **)(local_d8 + 8))(flags.unknown,puVar6);
  (**(code **)(local_108 + 8))(DVar22.unknown,puStack_100);
  puVar8 = puStack_e0;
  pcVar16 = *(code **)(local_e8 + 8);
  (*pcVar16)(local_c0,puStack_e0);
  (*pcVar16)(local_130,puVar8);
  puVar8 = local_80;
  _swift_release(puVar2);
  _swift_release(puVar7);
  _swift_release(local_b8);
  _swift_release(puVar8);
  return;
}

