// rea decompile_all
// name: FUN_1000911d0
// address: 0x1000911d0
// body: available
// range: 0x1000911d0-0x1000913ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000911d0(undefined *param_1,undefined *param_2)

{
  ulong uVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined *local_58;
  undefined *puStack_50;
  
  puVar6 = &local_70;
  local_70 = 0x3a;
  uStack_68 = 0xe100000000000000;
  puVar3 = param_1;
  local_58 = param_1;
  puStack_50 = param_2;
  FUN_100026df4();
  bVar2 = (extension_Foundation)::Swift::StringProtocol::_contains
                    (&local_70,PTR___type_metadata_for_Swift_String_100523a98,
                     PTR___type_metadata_for_Swift_String_100523a98,puVar3,puVar3);
  if (bVar2) {
    if (DAT_10054ed40 != -1) {
      _swift_once(&DAT_10054ed40,FUN_1000787d0);
    }
    _swift_beginAccess(&DAT_10054ed48,&local_58,0,0);
    lVar8 = *(long *)(DAT_10054ed48 + 0x10);
    if (lVar8 != 0) {
      lVar7 = 0;
      puVar9 = (undefined8 *)(DAT_10054ed48 + 0x28);
      do {
        if (((undefined *)puVar9[-1] == param_1 && (undefined *)*puVar9 == param_2) ||
           (bVar2 = Swift::_stringCompareWithSmolCheck
                              ((undefined *)puVar9[-1],(undefined *)*puVar9,
                               (_StringComparisonResult)(__int8)param_1), bVar2)) {
          _swift_beginAccess(&DAT_10054ed48,&local_70,0x21,0);
          FUN_1001b5610(lVar7);
          _swift_endAccess(&local_70);
          _swift_bridgeObjectRelease(puVar6);
          break;
        }
        puVar9 = puVar9 + 2;
        lVar7 = lVar7 + 1;
      } while (lVar8 != lVar7);
    }
    _swift_beginAccess(&DAT_10054ed48,&local_70,0x21,0);
    uVar1 = DAT_10054ed48;
    _swift_bridgeObjectRetain(param_2);
    uVar5 = uVar1;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar4 = uVar1;
    if ((uVar5 & 1) == 0) {
      uVar4 = 0;
      DAT_10054ed48 = uVar1;
      FUN_1001c432c(0,*(long *)(uVar1 + 0x10) + 1,1,uVar1);
    }
    uVar1 = *(ulong *)(uVar4 + 0x10);
    uVar5 = uVar4;
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar1) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      DAT_10054ed48 = uVar4;
      FUN_1001c432c(uVar5,uVar1 + 1,1,uVar4);
    }
    *(ulong *)(uVar5 + 0x10) = uVar1 + 1;
    lVar8 = uVar5 + uVar1 * 0x10;
    *(undefined **)(lVar8 + 0x20) = param_1;
    *(undefined **)(lVar8 + 0x28) = param_2;
    DAT_10054ed48 = uVar5;
    _swift_endAccess(&local_70);
  }
  return;
}

