// rea decompile_all
// name: FUN_100063440
// address: 0x100063440
// body: available
// range: 0x100063440-0x10006377f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100063440(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  TargetProtocolConformanceDescriptor *pTVar9;
  long extraout_x8;
  long lVar10;
  long extraout_x8_00;
  ulong uVar11;
  long lVar12;
  long unaff_x20;
  long lVar13;
  VerticalAlignment VVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long alStack_d0 [2];
  undefined *local_90;
  long lStack_88;
  undefined8 local_70;
  
  lVar2 = 0;
  FUN_10006866c();
  alStack_d0[1] = *(long *)(lVar2 + -8);
  lVar12 = *(long *)(alStack_d0[1] + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar2 = (long)alStack_d0 - (lVar12 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_10054e028;
  FUN_100002f94(&DAT_10054e028,&DAT_10041ef68);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar17 = (undefined8 *)(lVar2 - extraout_x8);
  puVar4 = &DAT_10054e020;
  puVar8 = &DAT_10041ef60;
  FUN_100002f94(&DAT_10054e020,&DAT_10041ef60);
  lVar10 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = *(long *)(unaff_x20 + 0x30);
  if (lVar13 == 0) {
    FUN_100279594(0);
    pcVar1 = FUN_100279594;
    puVar17 = &DAT_100553dd0;
    pTVar9 = &TargetProtocolConformanceDescriptor_10042d178;
  }
  else {
    _swift_retain(lVar13);
    uVar5 = param_1;
    FUN_10026a7c8(param_1);
    _swift_release(lVar13);
    VVar14.unknown = *(undefined **)(unaff_x20 + 0x20);
    if (VVar14.unknown != (undefined *)0x0) {
      _swift_retain(VVar14.unknown);
      uVar6 = param_1;
      FUN_100216850(param_1);
      _swift_release();
      VVar14 = SwiftUI::VerticalAlignment::get_center(VVar14);
      *puVar17 = VVar14.unknown;
      puVar17[1] = 0x402c000000000000;
      *(undefined1 *)(puVar17 + 2) = 0;
      puVar7 = &DAT_10054e070;
      FUN_100002f94(&DAT_10054e070,&DAT_10041efc0);
      FUN_1000643c8((long)puVar17 + (long)*(int *)(puVar7 + 0x2c),param_2,(uint)uVar6 & 1,param_1,
                    uVar5,puVar8);
      _swift_bridgeObjectRelease(puVar8);
      *(undefined1 *)((long)puVar17 + (long)*(int *)(puVar3 + 0x24)) = 0;
      FUN_100029504(unaff_x20,lVar2,FUN_10006866c);
      uVar11 = (ulong)*(byte *)(alStack_d0[1] + 0x50);
      uVar15 = uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff);
      uVar16 = lVar12 + uVar15 + 7 & 0xfffffffffffffff8;
      puVar8 = &DAT_1005272c0;
      _swift_allocObject(&DAT_1005272c0,uVar16 + 8,uVar11 | 7);
      FUN_100007e64(lVar2,puVar8 + uVar15,FUN_10006866c);
      *(undefined8 *)(puVar8 + uVar16) = param_2;
      FUN_1000691a0();
      (extension_SwiftUI)::SwiftUI::View::_onTapGesture(1);
      _swift_release(puVar8);
      FUN_10002a29c(puVar17,&DAT_10054e028,&DAT_10041ef68);
      local_90 = puVar3;
      lStack_88 = lVar2;
      local_70 = param_1;
      _swift_getOpaqueTypeConformance2
                (&local_90,
                 PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_onTapGesture(count:_Swift_Int,perform:_()__>_())__>_some>>_100522f30
                 ,1);
      FUN_100069258();
      (extension_SwiftUI)::SwiftUI::View::_contextMenu();
      (**(code **)(lVar10 + 8))((long)puVar17 - extraout_x8_00,puVar4);
      return;
    }
    FUN_100226ac0(0);
    pcVar1 = FUN_100226ac0;
    puVar17 = (undefined8 *)&DAT_10054aa48;
    pTVar9 = &TargetProtocolConformanceDescriptor_10042b420;
  }
  FUN_1000036d0(puVar17,pcVar1,pTVar9);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100063780);
  (*pcVar1)();
}

