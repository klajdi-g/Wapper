// rea decompile_all
// name: FUN_10037b050
// address: 0x10037b050
// body: available
// range: 0x10037b050-0x10037b38f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010037b2b0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10037b050(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar9;
  long lVar10;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 *puVar16;
  undefined8 auStack_a0 [2];
  undefined1 auStack_90 [8];
  undefined *local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  
  lVar2 = 0;
  local_70 = param_1;
  FUN_100387a1c();
  lVar13 = *(long *)(lVar2 + -8);
  lVar2 = *(long *)(lVar13 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar16 = auStack_90 + -(lVar2 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_10055e860;
  FUN_100002f94(&DAT_10055e860,&DAT_100434070);
  local_78 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_78 + 0x40));
  lVar10 = (long)puVar16 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_80 = lVar10;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = lVar10 - extraout_x12;
  puVar4 = &DAT_10055e868;
  FUN_100002f94(&DAT_10055e868,&DAT_100434078);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar14 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar15 = lVar14 - extraout_x12_00;
  FUN_10037b390(lVar15);
  FUN_10037a598();
  puVar5 = puVar4;
  FUN_100265634();
  _swift_bridgeObjectRelease(puVar4);
  puVar4 = &DAT_100434080;
  local_68 = puVar5;
  _swift_getKeyPath();
  local_88 = puVar4;
  FUN_100029504(param_2,puVar16,FUN_100387a1c);
  uVar9 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar12 = uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff);
  puVar4 = &DAT_10053c398;
  _swift_allocObject(&DAT_10053c398,uVar12 + lVar2,uVar9 | 7);
  FUN_100007e64(puVar16,puVar4 + uVar12,FUN_100387a1c);
  puVar5 = &DAT_10053c3c0;
  _swift_allocObject(&DAT_10053c3c0,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_10038ff34;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar4 = &DAT_10054e050;
  FUN_100002f94(&DAT_10054e050,&DAT_1004229a0);
  uVar6 = 0;
  FUN_10038ffac(0);
  puVar7 = &DAT_10054e060;
  FUN_1000087a0(&DAT_10054e060,&DAT_10054e050,&DAT_1004229a0,
                PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100523b60);
  puVar8 = &DAT_10055e870;
  FUN_1000036d0(&DAT_10055e870,FUN_10038ffac,&TargetProtocolConformanceDescriptor_1004344a8);
  *(undefined **)(lVar15 + -0x10) = puVar8;
  (extension_SwiftUI)::SwiftUI::ForEach::_init
            (lVar10,puVar8,local_88,FUN_100069314,puVar5,puVar4,uVar6,puVar7,
             PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100523aa8);
  FUN_1000087e4(lVar15,lVar14,&DAT_10055e868,&DAT_100434078);
  lVar13 = local_78;
  lVar2 = local_80;
  pcVar11 = *(code **)(local_78 + 0x10);
  (*pcVar11)(local_80,lVar10,puVar3);
  lVar1 = local_70;
  FUN_1000087e4(lVar14,local_70,&DAT_10055e868,&DAT_100434078);
  puVar4 = &DAT_10055e878;
  FUN_100002f94(&DAT_10055e878,&DAT_1004340b8);
  (*pcVar11)(lVar1 + *(int *)(puVar4 + 0x30),lVar2,puVar3);
  pcVar11 = *(code **)(lVar13 + 8);
  (*pcVar11)(lVar10,puVar3);
  FUN_10002a29c(lVar15,&DAT_10055e868,&DAT_100434078);
  (*pcVar11)(lVar2,puVar3);
  FUN_10002a29c(lVar14,&DAT_10055e868,&DAT_100434078);
  return;
}

