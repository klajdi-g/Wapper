// rea decompile_all
// name: FUN_1003b470c
// address: 0x1003b470c
// body: available
// range: 0x1003b470c-0x1003b4b1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003b470c(undefined8 *param_1)

{
  DispatchWorkItemFlags flags;
  undefined *puVar1;
  DispatchTime DVar2;
  ID IVar3;
  State SVar4;
  NSString *pNVar5;
  Animation AVar6;
  OS_dispatch_queue *pOVar7;
  DispatchTime DVar8;
  undefined *puVar9;
  void *aBlock;
  DispatchQoS DVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  code *pcVar13;
  DispatchQoS qos;
  long lVar14;
  DispatchTime DVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined auStack_150 [8];
  DispatchWorkItemFlags local_148;
  undefined *local_140;
  long local_138;
  undefined *local_130;
  long local_128;
  undefined *local_120;
  undefined8 uStack_118;
  undefined8 *local_110;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  code *local_80;
  undefined *local_78;
  
  local_140 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_128 = *(long *)(local_140 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_128 + 0x40));
  local_148.unknown = auStack_150 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_130 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_138 = *(long *)(local_130 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_138 + 0x40));
  qos.unknown = auStack_150 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0) +
                -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar2 = Dispatch::DispatchTime::typeMetadataAccessor();
  lVar14 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar14 + 0x40));
  DVar15.unknown = qos.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  IVar3 = NSPasteboard::generalPasteboard((ID)&_OBJC_CLASS___NSPasteboard);
  NSPasteboard::clearContents(IVar3);
  IVar3 = NSPasteboard::generalPasteboard((ID)&_OBJC_CLASS___NSPasteboard);
  uStack_118 = param_1[7];
  local_120 = (undefined *)param_1[6];
  local_110 = (undefined8 *)param_1[8];
  SVar4.unknown = &DAT_10054dd08;
  FUN_100002f94(&DAT_10054dd08,&DAT_10041ea50);
  SwiftUI::State::get_wrappedValue(SVar4);
  pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(local_98);
  NSPasteboard::setString_forType_
            (IVar3,pNVar5,*(undefined8 *)PTR__NSPasteboardTypeString_100521310);
  AVar6 = SwiftUI::Animation::spring(0.25,0.8,0.0,(Animation)0x0);
  local_110 = param_1;
  SwiftUI::_withAnimation();
  _swift_release(AVar6.unknown);
  pOVar7 = (OS_dispatch_queue *)0x0;
  FUN_10006cc7c();
  DVar8.unknown = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar7);
  Dispatch::DispatchTime::now(DVar8);
  Dispatch::__infix(DVar15,1.2);
  pcVar13 = *(code **)(lVar14 + 8);
  (*pcVar13)(DVar15.unknown,DVar2.unknown);
  puVar9 = &DAT_10053d560;
  _swift_allocObject(&DAT_10053d560,0x88,7);
  uVar16 = param_1[8];
  uVar18 = param_1[0xb];
  uVar17 = param_1[10];
  *(undefined8 *)(puVar9 + 0x58) = param_1[9];
  *(undefined8 *)(puVar9 + 0x50) = uVar16;
  *(undefined8 *)(puVar9 + 0x68) = uVar18;
  *(undefined8 *)(puVar9 + 0x60) = uVar17;
  uVar16 = param_1[0xc];
  *(undefined8 *)(puVar9 + 0x78) = param_1[0xd];
  *(undefined8 *)(puVar9 + 0x70) = uVar16;
  *(undefined8 *)(puVar9 + 0x80) = param_1[0xe];
  uVar16 = *param_1;
  uVar18 = param_1[3];
  uVar17 = param_1[2];
  *(undefined8 *)(puVar9 + 0x18) = param_1[1];
  *(undefined8 *)(puVar9 + 0x10) = uVar16;
  *(undefined8 *)(puVar9 + 0x28) = uVar18;
  *(undefined8 *)(puVar9 + 0x20) = uVar17;
  uVar16 = param_1[4];
  uVar18 = param_1[7];
  uVar17 = param_1[6];
  *(undefined8 *)(puVar9 + 0x38) = param_1[5];
  *(undefined8 *)(puVar9 + 0x30) = uVar16;
  *(undefined8 *)(puVar9 + 0x48) = uVar18;
  *(undefined8 *)(puVar9 + 0x40) = uVar17;
  local_80 = FUN_1003b9e00;
  local_a0 = PTR___NSConcreteStackBlock_100521110;
  local_98 = 0x42000000;
  local_90 = FUN_1000c7e7c;
  puStack_88 = &DAT_10053d578;
  local_78 = puVar9;
  aBlock = __Block_copy(&local_a0);
  DVar10.unknown = local_78;
  FUN_10012ea94(param_1,&local_120);
  _swift_release();
  Dispatch::DispatchQoS::get_unspecified(DVar10);
  local_120 = PTR___swiftEmptyArrayStorage_100524190;
  puVar11 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar9 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar12 = &DAT_100553dc0;
  FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
  puVar1 = local_140;
  flags.unknown = local_148.unknown;
  Swift::SetAlgebra::_init(local_148.unknown,&local_120,puVar9,puVar12,local_140,puVar11);
  (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter
            ((DispatchTime)(DVar15.unknown + -extraout_x12),qos,flags);
  __Block_release(aBlock);
  (**(code **)(local_128 + 8))(flags.unknown,puVar1);
  (**(code **)(local_138 + 8))(qos.unknown,local_130);
  (*pcVar13)(DVar15.unknown + -extraout_x12,DVar2.unknown);
  return;
}

