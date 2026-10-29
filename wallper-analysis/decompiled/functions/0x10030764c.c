// rea decompile_all
// name: FUN_10030764c
// address: 0x10030764c
// body: available
// range: 0x10030764c-0x1003077a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010030775c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10030764c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  byte bVar3;
  code *pcVar4;
  Binding BVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_58;
  undefined7 uStack_57;
  
  uVar7 = *param_2;
  uVar11 = param_2[2];
  uVar9 = param_2[1];
  uVar1 = param_2[2];
  lVar2 = param_2[3];
  local_88 = param_3[3];
  local_90 = param_3[2];
  local_80 = param_3[4];
  _swift_bridgeObjectRetain(uVar9);
  BVar5.unknown = &DAT_10055b918;
  FUN_100002f94(&DAT_10055b918,&DAT_100430470);
  SwiftUI::Binding::get_wrappedValue(BVar5);
  uVar8 = uVar7;
  FUN_1002165a4(uVar7,uVar9,CONCAT71(uStack_57,local_58));
  _swift_bridgeObjectRelease(CONCAT71(uStack_57,local_58));
  if (!SCARRY8(lVar2,1)) {
    puVar6 = &DAT_100539f08;
    _swift_allocObject(&DAT_100539f08,0x68,7);
    bVar3 = (byte)uVar8 & 1;
    puVar6[0x10] = bVar3;
    uVar8 = *param_3;
    uVar12 = param_3[3];
    uVar10 = param_3[2];
    *(undefined8 *)(puVar6 + 0x20) = param_3[1];
    *(undefined8 *)(puVar6 + 0x18) = uVar8;
    *(undefined8 *)(puVar6 + 0x30) = uVar12;
    *(undefined8 *)(puVar6 + 0x28) = uVar10;
    uVar8 = param_3[4];
    *(undefined8 *)(puVar6 + 0x40) = param_3[5];
    *(undefined8 *)(puVar6 + 0x38) = uVar8;
    *(undefined8 *)(puVar6 + 0x48) = param_3[6];
    *(undefined8 *)(puVar6 + 0x50) = uVar7;
    *(undefined8 *)(puVar6 + 0x60) = uVar11;
    *(undefined8 *)(puVar6 + 0x58) = uVar9;
    local_58 = 0;
    FUN_10030b478(param_3,&local_90);
    SwiftUI::State::init(&local_90,puVar6,PTR___type_metadata_for_Swift_Bool_100523b70);
    *param_1 = uVar1;
    param_1[1] = lVar2 + 1;
    *(byte *)(param_1 + 2) = bVar3;
    param_1[3] = FUN_10030b5cc;
    param_1[4] = puVar6;
    *(undefined1 *)(param_1 + 5) = (undefined1)local_90;
    param_1[6] = local_88;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1003077a4);
  (*pcVar4)();
}

