// rea decompile_all
// name: FUN_10032d5f8
// address: 0x10032d5f8
// body: available
// range: 0x10032d5f8-0x10032da83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10032d5f8(void)

{
  ulong uVar1;
  code *pcVar2;
  DispatchWorkItemFlags DVar3;
  undefined *puVar4;
  undefined *puVar5;
  ID self;
  NSString *pNVar6;
  OS_dispatch_queue *pOVar7;
  void *aBlock;
  DispatchQoS DVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  undefined8 *unaff_x20;
  DispatchWorkItemFlags flags;
  long lVar11;
  DispatchQoS qos;
  long lVar12;
  DispatchTime DVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auStack_1a0 [8];
  undefined *local_198;
  code *local_190;
  ID local_188;
  undefined *local_180;
  long local_178;
  undefined *local_170;
  long local_168;
  State local_160;
  ulong uStack_158;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  code *local_78;
  undefined *local_70;
  
  DVar3 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_168 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_168 + 0x40));
  flags.unknown = auStack_1a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_170 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_178 = *(long *)(local_170 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_178 + 0x40));
  qos.unknown = flags.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_180 = (undefined *)Dispatch::DispatchTime::typeMetadataAccessor();
  lVar12 = *(long *)(local_180 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar12 + 0x40));
  DVar13.unknown = qos.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar11 = unaff_x20[4];
  if (lVar11 != 0) {
    puVar4 = &DAT_100431e68;
    _swift_getKeyPath(&DAT_100431e68);
    puVar5 = &DAT_100431e90;
    _swift_getKeyPath(&DAT_100431e90);
    _swift_retain(lVar11);
    Combine::Published::_get_subscript(&local_160);
    _swift_release(lVar11);
    _swift_release(puVar4);
    _swift_release(puVar5);
    if (uStack_158 != 0) {
      uVar1 = (ulong)local_160.unknown & 0xffffffffffff;
      if ((uStack_158 & 0x2000000000000000) != 0) {
        uVar1 = uStack_158 >> 0x38 & 0xf;
      }
      if (uVar1 == 0) {
        _swift_bridgeObjectRelease(uStack_158);
      }
      else {
        self = NSPasteboard::generalPasteboard((ID)&_OBJC_CLASS___NSPasteboard);
        local_188 = self;
        NSPasteboard::clearContents(self);
        pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        _swift_bridgeObjectRelease(uStack_158);
        NSPasteboard::setString_forType_
                  (self,pNVar6,*(undefined8 *)PTR__NSPasteboardTypeString_100521310);
        uStack_158 = unaff_x20[0x13];
        local_160.unknown = (undefined *)unaff_x20[0x12];
        local_98 = (undefined *)CONCAT71(local_98._1_7_,1);
        puVar4 = &DAT_10054ab50;
        FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
        SwiftUI::State::set_wrappedValue(&local_160,&local_98,puVar4);
        pOVar7 = (OS_dispatch_queue *)0x0;
        FUN_10006cc7c();
        local_198 = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar7);
        Dispatch::DispatchTime::now((DispatchTime)local_198);
        Dispatch::__infix(DVar13,1.0);
        puVar5 = local_180;
        local_190 = *(code **)(lVar12 + 8);
        (*local_190)(DVar13.unknown,local_180);
        puVar4 = &DAT_10053b0a8;
        _swift_allocObject(&DAT_10053b0a8,0xd0,7);
        uVar14 = unaff_x20[0x10];
        uVar16 = unaff_x20[0x13];
        uVar15 = unaff_x20[0x12];
        *(undefined8 *)(puVar4 + 0x98) = unaff_x20[0x11];
        *(undefined8 *)(puVar4 + 0x90) = uVar14;
        *(undefined8 *)(puVar4 + 0xa8) = uVar16;
        *(undefined8 *)(puVar4 + 0xa0) = uVar15;
        uVar14 = unaff_x20[0x14];
        uVar16 = unaff_x20[0x17];
        uVar15 = unaff_x20[0x16];
        *(undefined8 *)(puVar4 + 0xb8) = unaff_x20[0x15];
        *(undefined8 *)(puVar4 + 0xb0) = uVar14;
        *(undefined8 *)(puVar4 + 200) = uVar16;
        *(undefined8 *)(puVar4 + 0xc0) = uVar15;
        uVar14 = unaff_x20[8];
        uVar16 = unaff_x20[0xb];
        uVar15 = unaff_x20[10];
        *(undefined8 *)(puVar4 + 0x58) = unaff_x20[9];
        *(undefined8 *)(puVar4 + 0x50) = uVar14;
        *(undefined8 *)(puVar4 + 0x68) = uVar16;
        *(undefined8 *)(puVar4 + 0x60) = uVar15;
        uVar14 = unaff_x20[0xc];
        uVar16 = unaff_x20[0xf];
        uVar15 = unaff_x20[0xe];
        *(undefined8 *)(puVar4 + 0x78) = unaff_x20[0xd];
        *(undefined8 *)(puVar4 + 0x70) = uVar14;
        *(undefined8 *)(puVar4 + 0x88) = uVar16;
        *(undefined8 *)(puVar4 + 0x80) = uVar15;
        uVar14 = *unaff_x20;
        uVar16 = unaff_x20[3];
        uVar15 = unaff_x20[2];
        *(undefined8 *)(puVar4 + 0x18) = unaff_x20[1];
        *(undefined8 *)(puVar4 + 0x10) = uVar14;
        *(undefined8 *)(puVar4 + 0x28) = uVar16;
        *(undefined8 *)(puVar4 + 0x20) = uVar15;
        uVar14 = unaff_x20[4];
        uVar16 = unaff_x20[7];
        uVar15 = unaff_x20[6];
        *(undefined8 *)(puVar4 + 0x38) = unaff_x20[5];
        *(undefined8 *)(puVar4 + 0x30) = uVar14;
        *(undefined8 *)(puVar4 + 0x48) = uVar16;
        *(undefined8 *)(puVar4 + 0x40) = uVar15;
        local_78 = FUN_10033682c;
        local_98 = PTR___NSConcreteStackBlock_100521110;
        local_90 = 0x42000000;
        local_88 = FUN_1000c7e7c;
        puStack_80 = &DAT_10053b0c0;
        local_70 = puVar4;
        aBlock = __Block_copy(&local_98);
        DVar8.unknown = local_70;
        FUN_100336150();
        _swift_release();
        Dispatch::DispatchQoS::get_unspecified(DVar8);
        local_160.unknown = PTR___swiftEmptyArrayStorage_100524190;
        puVar9 = &DAT_100553db0;
        FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                      PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
        puVar4 = &DAT_100561080;
        FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
        puVar10 = &DAT_100553dc0;
        FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                      PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
        Swift::SetAlgebra::_init(flags.unknown,&local_160,puVar4,puVar10,DVar3.unknown,puVar9);
        (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter
                  ((DispatchTime)(DVar13.unknown + -extraout_x12),qos,flags);
        __Block_release(aBlock);
        (**(code **)(local_168 + 8))(flags.unknown,DVar3.unknown);
        (**(code **)(local_178 + 8))(qos.unknown,local_170);
        (*local_190)(DVar13.unknown + -extraout_x12,puVar5);
      }
    }
    return;
  }
  FUN_10014e37c(0);
  FUN_1000036d0(&DAT_100553148,FUN_10014e37c,&TargetProtocolConformanceDescriptor_100427f04);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10032da84);
  (*pcVar2)();
}

