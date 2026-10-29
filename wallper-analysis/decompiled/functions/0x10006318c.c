// rea decompile_all
// name: FUN_10006318c
// address: 0x10006318c
// body: available
// range: 0x10006318c-0x10006343f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000633d8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10006318c(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  undefined8 auStack_90 [2];
  undefined1 auStack_80 [8];
  undefined *local_78;
  undefined *puStack_70;
  undefined **local_68;
  undefined **ppuStack_60;
  
  lVar2 = 0;
  FUN_10006866c();
  lVar18 = *(long *)(lVar2 + -8);
  lVar16 = *(long *)(lVar18 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar2 = -(lVar16 + 0xfU & 0xfffffffffffffff0);
  lVar15 = *(long *)(param_2 + 0x20);
  if (lVar15 != 0) {
    puVar3 = &DAT_10041ede8;
    _swift_getKeyPath(&DAT_10041ede8);
    puVar4 = &DAT_10041ee10;
    _swift_getKeyPath(&DAT_10041ee10);
    _swift_retain(lVar15);
    Combine::Published::_get_subscript(&local_78);
    _swift_release(puVar3);
    _swift_release(puVar4);
    _swift_release(lVar15);
    FUN_100265634();
    _swift_bridgeObjectRelease(local_78);
    puVar3 = &DAT_10041ef80;
    _swift_getKeyPath(&DAT_10041ef80);
    FUN_100029504(param_2,auStack_80 + lVar2,FUN_10006866c);
    uVar14 = (ulong)*(byte *)(lVar18 + 0x50);
    uVar17 = uVar14 + 0x10 & (uVar14 ^ 0xffffffffffffffff);
    puVar4 = &DAT_100527270;
    _swift_allocObject(&DAT_100527270,uVar17 + lVar16,uVar14 | 7);
    FUN_100007e64(auStack_80 + lVar2,puVar4 + uVar17,FUN_10006866c);
    puVar5 = &DAT_100527298;
    _swift_allocObject(&DAT_100527298,0x20,7);
    *(code **)(puVar5 + 0x10) = FUN_100069298;
    *(undefined **)(puVar5 + 0x18) = puVar4;
    puVar4 = &DAT_10054e050;
    FUN_100002f94(&DAT_10054e050,&DAT_1004229a0);
    puVar6 = &DAT_10054e058;
    FUN_100002f94(&DAT_10054e058,&DAT_10041efb0);
    puVar7 = &DAT_10054e060;
    FUN_1000087a0(&DAT_10054e060,&DAT_10054e050,&DAT_1004229a0,
                  PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100523b60);
    puVar8 = &DAT_10054e020;
    FUN_100002fe4(&DAT_10054e020,&DAT_10041ef60);
    puVar9 = &DAT_10054e028;
    FUN_100002fe4(&DAT_10054e028,&DAT_10041ef68);
    puVar10 = puVar9;
    FUN_1000691a0();
    ppuVar11 = &local_78;
    local_78 = puVar9;
    puStack_70 = puVar10;
    _swift_getOpaqueTypeConformance2
              (ppuVar11,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_onTapGesture(count:_Swift_Int,perform:_()__>_())__>_some>>_100522f30
               ,1);
    ppuVar12 = ppuVar11;
    FUN_100069258();
    puStack_70 = &DAT_100529898;
    ppuVar13 = &local_78;
    local_78 = puVar8;
    local_68 = ppuVar11;
    ppuStack_60 = ppuVar12;
    _swift_getOpaqueTypeConformance2
              (ppuVar13,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_contextMenu<A_where_A1:_SwiftUI_View>(menuItems:_()__>_A1)__>_some>>_100522eb8
               ,1);
    *(undefined ***)((long)auStack_90 + lVar2) = ppuVar13;
    (extension_SwiftUI)::SwiftUI::ForEach::_init
              (param_1,ppuVar13,puVar3,FUN_100069314,puVar5,puVar4,puVar6,puVar7,
               PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100523aa8);
    return;
  }
  FUN_100226ac0(0);
  FUN_1000036d0(&DAT_10054aa48,FUN_100226ac0,&TargetProtocolConformanceDescriptor_10042b420);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100063440);
  (*pcVar1)();
}

