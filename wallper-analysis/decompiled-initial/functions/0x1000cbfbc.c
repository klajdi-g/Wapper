// rea decompile_all
// name: FUN_1000cbfbc
// address: 0x1000cbfbc
// body: available
// range: 0x1000cbfbc-0x1000cc10b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000cc0f0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000cbfbc(undefined8 param_1,undefined8 param_2,void *param_3,char *param_4,void *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  String SVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  void *pvVar9;
  char *pcVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  void *pvVar10;
  
  lVar6 = 0;
  pvVar9 = param_3;
  FUN_1001d59ac();
  puVar1 = (undefined8 *)((long)param_3 + (long)*(int *)(lVar6 + 0x1c));
  if (*(char *)(puVar1 + 1) != '\x01') {
    puVar2 = (undefined8 *)((long)param_3 + (long)*(int *)(lVar6 + 0x20));
    if (*(char *)(puVar2 + 1) != '\x01') {
      pcVar8 = (char *)*puVar1;
      pcVar11 = (char *)*puVar2;
      FUN_10025f020();
      SVar12.bridgeObject = (void *)0xa500000000000000;
      SVar12.str = (char *)0x209380e220;
      pvVar10 = (void *)0xa500000000000000;
      SVar15.bridgeObject = param_5;
      SVar15.str = param_4;
      Swift::String::append(SVar12,SVar15);
      FUN_10025f020();
      SVar13.bridgeObject = pvVar10;
      SVar13.str = pcVar11;
      SVar16.bridgeObject = param_5;
      SVar16.str = param_4;
      Swift::String::append(SVar13,SVar16);
      _swift_bridgeObjectRelease(pvVar10);
      SVar5.bridgeObject = pvVar9;
      SVar5.str = pcVar8;
      uVar7 = *(undefined8 *)((long)param_3 + (long)*(int *)(lVar6 + 0x14) + 8);
      _swift_bridgeObjectRetain();
      SVar14.bridgeObject = (void *)0xa600000000000000;
      SVar14.str = (char *)0x2020b7c22020;
      SVar17.bridgeObject = param_5;
      SVar17.str = param_4;
      Swift::String::append(SVar14,SVar17);
      SVar18.bridgeObject = param_5;
      SVar18.str = param_4;
      Swift::String::append(SVar5,SVar18);
      _swift_bridgeObjectRelease(pvVar9);
      goto LAB_1000cc0b4;
    }
  }
  uVar7 = *(undefined8 *)((long)param_3 + (long)*(int *)(lVar6 + 0x14) + 8);
  _swift_bridgeObjectRetain();
LAB_1000cc0b4:
  puVar1 = (undefined8 *)((long)param_3 + (long)*(int *)(lVar6 + 0x18));
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  FUN_100026df4();
  _swift_bridgeObjectRetain(uVar4);
  (extension_SwiftUI)::SwiftUI::Label::_init
            (param_1,uVar7,uVar3,uVar4,PTR___type_metadata_for_Swift_String_100523a98,uVar7);
  return;
}

