// rea decompile_all
// name: FUN_1001c3418
// address: 0x1001c3418
// body: available
// range: 0x1001c3418-0x1001c35e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001c3418(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  bool bVar4;
  Date DVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x12;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  code *pcVar14;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  DVar5 = Foundation::Date::typeMetadataAccessor();
  lVar13 = *(long *)(DVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar13 + 0x40));
  puVar8 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar9 = (long)puVar8 - extraout_x12;
  lVar7 = *(long *)(param_2 + 0x10);
  if (lVar7 != 0) {
    uVar12 = (ulong)*(byte *)(lVar13 + 0x50) + 0x20 &
             ((ulong)*(byte *)(lVar13 + 0x50) ^ 0xffffffffffffffff);
    pcVar14 = *(code **)(lVar13 + 0x10);
    local_68 = param_1;
    (*pcVar14)(lVar9,param_2 + uVar12,DVar5.unknown);
    puVar2 = PTR_Foundation__Foundation__Date_>Swift__Comparable_100520ba0;
    puVar1 = PTR_typeMetadataAccessor_100520b80;
    lVar7 = lVar7 + -1;
    if (lVar7 != 0) {
      lVar11 = *(long *)(lVar13 + 0x48);
      lVar10 = param_2 + lVar11 + uVar12;
      do {
        (*pcVar14)(puVar8,lVar10,DVar5.unknown);
        puVar6 = &DAT_100554248;
        FUN_1000036d0(&DAT_100554248,puVar1,puVar2);
        bVar4 = Swift::Comparable::<_infix(puVar8,lVar9,DVar5.unknown,puVar6);
        if (bVar4) {
          (**(code **)(lVar13 + 8))(lVar9,DVar5.unknown);
          (**(code **)(lVar13 + 0x20))(lVar9,puVar8,DVar5.unknown);
        }
        else {
          (**(code **)(lVar13 + 8))(puVar8,DVar5.unknown);
        }
        lVar10 = lVar10 + lVar11;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    uVar3 = local_68;
    (**(code **)(lVar13 + 0x20))(local_68,lVar9,DVar5.unknown);
    (**(code **)(lVar13 + 0x38))(uVar3,0,1,DVar5.unknown);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001001c3548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar13 + 0x38))(param_1,1,1,DVar5.unknown);
  return;
}

