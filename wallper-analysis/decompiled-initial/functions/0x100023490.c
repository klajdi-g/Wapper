// rea decompile_all
// name: FUN_100023490
// address: 0x100023490
// body: available
// range: 0x100023490-0x1000236ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100023648 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100023490(undefined8 *param_1,HorizontalAlignment param_2)

{
  undefined8 uVar1;
  int iVar2;
  code *pcVar3;
  HorizontalAlignment HVar4;
  undefined *puVar5;
  undefined *puVar6;
  UUID UVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  
  HVar4 = SwiftUI::HorizontalAlignment::get_leading(param_2);
  *param_1 = HVar4.unknown;
  param_1[1] = 0x4000000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  lVar11 = *(long *)param_2.unknown;
  if (lVar11 != 0) {
    puVar5 = &DAT_10054a960;
    FUN_100002f94(&DAT_10054a960,&DAT_10041bbb0);
    iVar2 = *(int *)(puVar5 + 0x2c);
    puVar5 = &DAT_10041baa8;
    _swift_getKeyPath(&DAT_10041baa8);
    puVar6 = &DAT_10041bad0;
    _swift_getKeyPath(&DAT_10041bad0);
    _swift_retain(lVar11);
    Combine::Published::_get_subscript(&local_58);
    _swift_release(puVar5);
    _swift_release(puVar6);
    _swift_release(lVar11);
    uVar1 = *(undefined8 *)(param_2.unknown + 0x18);
    local_60 = local_58;
    puVar5 = &DAT_100525440;
    local_58 = *(undefined8 *)(param_2.unknown + 0x20);
    _swift_allocObject(&DAT_100525440,0x38,7);
    uVar12 = *(undefined8 *)param_2.unknown;
    uVar14 = *(undefined8 *)(param_2.unknown + 0x18);
    uVar13 = *(undefined8 *)(param_2.unknown + 0x10);
    *(undefined8 *)(puVar5 + 0x18) = *(undefined8 *)(param_2.unknown + 8);
    *(undefined8 *)(puVar5 + 0x10) = uVar12;
    *(undefined8 *)(puVar5 + 0x28) = uVar14;
    *(undefined8 *)(puVar5 + 0x20) = uVar13;
    *(undefined8 *)(puVar5 + 0x30) = *(undefined8 *)(param_2.unknown + 0x20);
    _swift_retain(lVar11);
    _swift_retain(uVar1);
    FUN_1000087e4(&local_58,auStack_68,&DAT_10054a850,&DAT_10041ba68);
    puVar6 = &DAT_10054a968;
    FUN_100002f94(&DAT_10054a968,&DAT_10041f070);
    UVar7 = Foundation::UUID::typeMetadataAccessor();
    puVar8 = &DAT_10054a970;
    FUN_100002f94(&DAT_10054a970,&DAT_10041bbc0);
    puVar9 = &DAT_10054a978;
    FUN_1000087a0(&DAT_10054a978,&DAT_10054a968,&DAT_10041f070,
                  PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100523b60);
    puVar10 = puVar9;
    FUN_100026240();
    FUN_1000036d0(&DAT_10054a9b8,FUN_10025ee04,&DAT_10042c428);
    (extension_SwiftUI)::SwiftUI::ForEach::_init
              ((long)param_1 + (long)iVar2,puVar10,FUN_100026238,puVar5,puVar6,UVar7.unknown,puVar8,
               puVar9,puVar10);
    return;
  }
  FUN_1001b7378(0);
  FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1000236ac);
  (*pcVar3)();
}

