// rea decompile_all
// name: FUN_100375200
// address: 0x100375200
// body: available
// range: 0x100375200-0x10037540b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100375368 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100375200(long param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  UUID UVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  EnvironmentObject<undefined> EVar9;
  ulong uVar10;
  code *pcVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong local_70 [2];
  
  lVar3 = 0;
  FUN_10038f3a0();
  lVar15 = *(long *)(lVar3 + -8);
  lVar13 = *(long *)(lVar15 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = (long)local_70 - (lVar13 + 0xfU & 0xfffffffffffffff0);
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  pcVar11 = *(code **)(*(long *)(UVar4.unknown + -8) + 0x10);
  (*pcVar11)(param_1,param_2,UVar4.unknown);
  lVar5 = 0;
  FUN_10034c390();
  (*pcVar11)(param_1 + *(int *)(lVar5 + 0x14),param_3,UVar4.unknown);
  FUN_100029504(param_2,lVar14,FUN_10038f3a0);
  uVar10 = (ulong)*(byte *)(lVar15 + 0x50);
  uVar12 = uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff);
  puVar6 = &DAT_10053c740;
  _swift_allocObject(&DAT_10053c740,uVar12 + lVar13,uVar10 | 7);
  FUN_100007e64(lVar14,puVar6 + uVar12,FUN_10038f3a0);
  uVar7 = 0;
  FUN_1001b7378();
  puVar8 = &DAT_100553df0;
  FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
  EVar9 = SwiftUI::EnvironmentObject::init();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar5 + 0x18));
  *puVar1 = FUN_100399698;
  puVar1[1] = puVar6;
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar5 + 0x1c));
  *puVar1 = EVar9.unknown;
  puVar1[1] = puVar8;
  local_70[0] = 0;
  local_70[1] = 0xe000000000000000;
  SwiftUI::State::init
            (param_1 + *(int *)(lVar5 + 0x20),EVar9.unknown,
             PTR___type_metadata_for_Swift_String_100523a98);
  local_70[0] = local_70[0] & 0xffffffffffffff00;
  SwiftUI::State::init
            (param_1 + *(int *)(lVar5 + 0x24),EVar9.unknown,
             PTR___type_metadata_for_Swift_Bool_100523b70);
  lVar3 = *(long *)(param_2 + *(int *)(lVar3 + 0x2c));
  if (lVar3 != 0) {
    _swift_retain(lVar3);
    (extension_SwiftUI)::Combine::ObservableObject::_get_environmentStore();
    puVar6 = &DAT_100549d08;
    FUN_100002f94(&DAT_100549d08,&DAT_100434780);
    iVar2 = *(int *)(puVar6 + 0x24);
    *(undefined8 *)(param_1 + iVar2) = uVar7;
    ((undefined8 *)(param_1 + iVar2))[1] = lVar3;
    return;
  }
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x10037540c);
  (*pcVar11)();
}

