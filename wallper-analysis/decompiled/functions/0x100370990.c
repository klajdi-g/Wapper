// rea decompile_all
// name: FUN_100370990
// address: 0x100370990
// body: available
// range: 0x100370990-0x100370b9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100370990(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_80 [8];
  long local_78;
  long local_70;
  undefined *local_68;
  
  lVar3 = 0;
  FUN_1001d59ac();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar9 + 0x40));
  puVar7 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  FUN_1001d537c();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar10 + 0x40));
  lVar3 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar10 + 0x30))(param_2,1);
  puVar6 = (undefined *)0x0;
  if ((int)param_2 != 1) {
    lVar4 = 0;
    FUN_100387eec();
    lVar4 = *(long *)(param_3 + *(int *)(lVar4 + 0x14));
    lVar8 = *(long *)(lVar4 + 0x10);
    puVar6 = PTR___swiftEmptyArrayStorage_100524190;
    if (lVar8 != 0) {
      local_68 = PTR___swiftEmptyArrayStorage_100524190;
      local_78 = param_3;
      FUN_1001c6058(0,lVar8,0);
      lVar4 = lVar4 + ((ulong)*(byte *)(lVar9 + 0x50) + 0x20 &
                      ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff));
      local_70 = *(long *)(lVar9 + 0x48);
      puVar6 = local_68;
      do {
        FUN_100029504(lVar4,puVar7,FUN_1001d59ac);
        FUN_100029504(puVar7,lVar3,FUN_1001d537c);
        FUN_100029548(puVar7,FUN_1001d59ac);
        uVar1 = *(ulong *)(puVar6 + 0x10);
        local_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
          FUN_1001c6058(1 < *(ulong *)(puVar6 + 0x18),uVar1 + 1,1);
        }
        puVar6 = local_68;
        *(ulong *)(local_68 + 0x10) = uVar1 + 1;
        FUN_100007e64(lVar3,local_68 +
                            *(long *)(lVar10 + 0x48) * uVar1 +
                            ((ulong)*(byte *)(lVar10 + 0x50) + 0x20 &
                            ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff)),FUN_1001d537c);
        lVar4 = lVar4 + local_70;
        lVar8 = lVar8 + -1;
        param_3 = local_78;
      } while (lVar8 != 0);
    }
  }
  lVar3 = 0;
  FUN_100387eec();
  iVar2 = *(int *)(lVar3 + 0x30);
  puVar5 = &DAT_10055e748;
  local_68 = puVar6;
  FUN_100002f94(&DAT_10055e748,&DAT_100433f90);
  SwiftUI::State::set_wrappedValue((State *)(param_3 + iVar2),&local_68,puVar5);
  return;
}

