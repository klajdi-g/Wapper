// rea decompile_all
// name: FUN_10036ccf8
// address: 0x10036ccf8
// body: available
// range: 0x10036ccf8-0x10036cebb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10036ccf8(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  int iVar3;
  code *pcVar4;
  long lVar5;
  UUID UVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  EnvironmentObject<undefined> EVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  
  lVar5 = 0;
  FUN_100398bd0();
  lVar13 = *(long *)(lVar5 + -8);
  lVar12 = *(long *)(lVar13 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  UVar6 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar6.unknown + -8) + 0x10))(param_1,param_2,UVar6.unknown);
  uVar2 = *(undefined1 *)(param_2 + *(int *)(lVar5 + 0x14));
  FUN_100029504(param_2,&stack0xffffffffffffffa0 + -(lVar12 + 0xfU & 0xfffffffffffffff0),
                FUN_100398bd0);
  uVar11 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar14 = uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff);
  puVar7 = &DAT_10053c9c0;
  _swift_allocObject(&DAT_10053c9c0,uVar14 + lVar12,uVar11 | 7);
  FUN_100007e64(&stack0xffffffffffffffa0 + -(lVar12 + 0xfU & 0xfffffffffffffff0),puVar7 + uVar14,
                FUN_100398bd0);
  uVar8 = 0;
  FUN_1001b7378();
  puVar9 = &DAT_100553df0;
  FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
  EVar10 = SwiftUI::EnvironmentObject::init();
  lVar12 = 0;
  FUN_10034c884();
  *(undefined1 *)(param_1 + *(int *)(lVar12 + 0x14)) = uVar2;
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar12 + 0x18));
  *puVar1 = FUN_10039b1d4;
  puVar1[1] = puVar7;
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar12 + 0x1c));
  *puVar1 = EVar10.unknown;
  puVar1[1] = puVar9;
  lVar5 = *(long *)(param_2 + *(int *)(lVar5 + 0x1c));
  if (lVar5 != 0) {
    _swift_retain(lVar5);
    (extension_SwiftUI)::Combine::ObservableObject::_get_environmentStore();
    puVar7 = &DAT_100549ce8;
    FUN_100002f94(&DAT_100549ce8,&DAT_100419e30);
    iVar3 = *(int *)(puVar7 + 0x24);
    *(undefined8 *)(param_1 + iVar3) = uVar8;
    ((undefined8 *)(param_1 + iVar3))[1] = lVar5;
    return;
  }
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10036cebc);
  (*pcVar4)();
}

