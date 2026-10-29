// rea decompile_all
// name: FUN_1003c3434
// address: 0x1003c3434
// body: available
// range: 0x1003c3434-0x1003c35f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003c35cc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003c3434(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long extraout_x8;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 auStack_80 [2];
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar1 = 0;
  FUN_1003cff30();
  lVar13 = *(long *)(lVar1 + -8);
  lVar11 = *(long *)(lVar13 + 0x40);
  lVar2 = lVar1;
  (*(code *)PTR____chkstk_darwin_100521118)(lVar11 + 0xfU & 0xfffffffffffffff0);
  FUN_1003bce9c();
  lVar3 = lVar2;
  FUN_100265634();
  _swift_bridgeObjectRelease(lVar2);
  puVar4 = &DAT_100435f48;
  local_68 = lVar3;
  _swift_getKeyPath(&DAT_100435f48);
  (**(code **)(lVar13 + 0x10))(auStack_70 + -extraout_x8,param_2,lVar1);
  uVar10 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar12 = uVar10 + 0x20 & (uVar10 ^ 0xffffffffffffffff);
  puVar5 = &DAT_10053dbd0;
  _swift_allocObject(&DAT_10053dbd0,uVar12 + lVar11,uVar10 | 7);
  *(undefined8 *)(puVar5 + 0x10) = param_3;
  *(undefined8 *)(puVar5 + 0x18) = param_4;
  (**(code **)(lVar13 + 0x20))(puVar5 + uVar12,auStack_70 + -extraout_x8,lVar1);
  puVar6 = &DAT_10053dbf8;
  _swift_allocObject(&DAT_10053dbf8,0x20,7);
  *(code **)(puVar6 + 0x10) = FUN_1003e64b4;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  puVar5 = &DAT_10054e050;
  FUN_100002f94(&DAT_10054e050,&DAT_1004229a0);
  puVar7 = &DAT_100560390;
  FUN_100002f94(&DAT_100560390,&DAT_100435e50);
  puVar8 = &DAT_10054e060;
  FUN_1000087a0(&DAT_10054e060,&DAT_10054e050,&DAT_1004229a0,
                PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100523b60);
  puVar9 = puVar8;
  FUN_1003e4990();
  *(undefined **)((long)auStack_80 + -extraout_x8) = puVar9;
  (extension_SwiftUI)::SwiftUI::ForEach::_init
            (param_1,puVar9,puVar4,FUN_100069314,puVar6,puVar5,puVar7,puVar8,
             PTR___protocol_witness_table_for_Swift_Int___Swift_Hashable_in_Swift_100523be0);
  return;
}

