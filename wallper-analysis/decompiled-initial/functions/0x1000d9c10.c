// rea decompile_all
// name: FUN_1000d9c10
// address: 0x1000d9c10
// body: available
// range: 0x1000d9c10-0x1000d9f97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_1000d9c10(char *param_1,long *param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  char *pcVar4;
  undefined *puVar5;
  char *pcVar6;
  void *pvVar8;
  void *pvVar9;
  long lVar10;
  long lVar11;
  void *pvVar12;
  ulong uVar13;
  undefined8 *puVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  undefined *local_e8;
  undefined8 uStack_e0;
  undefined *puVar7;
  
  lVar11 = *param_2;
  if (lVar11 == 0) {
    FUN_100279594(0);
    FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
    SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1000d9f98);
    (*pcVar2)();
  }
  _swift_retain(lVar11);
  pcVar4 = param_1;
  FUN_10026a7c8();
  _swift_release(lVar11);
  SVar15.bridgeObject = param_2;
  SVar15.str = pcVar4;
  SVar15 = Swift::String::lowercased(SVar15);
  _swift_bridgeObjectRelease(param_2);
  lVar11 = 0;
  FUN_10040211c();
  pvVar8 = *(void **)(param_1 + *(int *)(lVar11 + 0x1c) + 8);
  if (pvVar8 == (void *)0x0) {
    pcVar4 = (char *)0x0;
    pvVar12 = (void *)0xe000000000000000;
  }
  else {
    pcVar4 = *(char **)(param_1 + *(int *)(lVar11 + 0x1c));
    pvVar12 = pvVar8;
  }
  SVar16.bridgeObject = pvVar12;
  SVar16.str = pcVar4;
  SVar16 = Swift::String::lowercased(SVar16);
  pvVar9 = SVar16.bridgeObject;
  _swift_bridgeObjectRetain(pvVar8);
  _swift_bridgeObjectRelease(pvVar12);
  pcVar4 = (char *)(ulong)(byte)param_1[*(int *)(lVar11 + 0x24)];
  if (param_1[*(int *)(lVar11 + 0x24)] == 0xe) {
    pcVar4 = (char *)0x0;
    pvVar9 = (void *)0xe000000000000000;
  }
  else {
    FUN_100402278();
  }
  SVar17.bridgeObject = pvVar9;
  SVar17.str = pcVar4;
  SVar17 = Swift::String::lowercased(SVar17);
  _swift_bridgeObjectRelease(pvVar9);
  puVar5 = PTR___swiftEmptyArrayStorage_100524190;
  if (*(undefined **)(param_1 + *(int *)(lVar11 + 0x44)) != (undefined *)0x0) {
    puVar5 = *(undefined **)(param_1 + *(int *)(lVar11 + 0x44));
  }
  lVar10 = *(long *)(puVar5 + 0x10);
  if (lVar10 == 0) {
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(puVar5);
    puVar7 = PTR___swiftEmptyArrayStorage_100524190;
  }
  else {
    local_e8 = PTR___swiftEmptyArrayStorage_100524190;
    _swift_bridgeObjectRetain();
    FUN_1001c5bc4(0,lVar10,0);
    puVar14 = (undefined8 *)(puVar5 + 0x28);
    do {
      puVar7 = local_e8;
      SVar18.bridgeObject = (void *)*puVar14;
      SVar18.str = (char *)puVar14[-1];
      SVar18 = Swift::String::lowercased(SVar18);
      uVar13 = *(ulong *)(puVar7 + 0x10);
      local_e8 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar13) {
        FUN_1001c5bc4(1 < *(ulong *)(puVar7 + 0x18),uVar13 + 1,1);
      }
      puVar7 = local_e8;
      puVar14 = puVar14 + 2;
      *(ulong *)(local_e8 + 0x10) = uVar13 + 1;
      *(String *)(local_e8 + uVar13 * 0x10 + 0x20) = SVar18;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    _swift_bridgeObjectRelease(puVar5);
  }
  puVar5 = &DAT_100549eb0;
  FUN_100002f94(&DAT_100549eb0,&DAT_100426be0);
  _swift_initStackObject();
  *(undefined8 *)(puVar5 + 0x18) = 10;
  *(undefined8 *)(puVar5 + 0x10) = 5;
  *(String *)(puVar5 + 0x20) = SVar15;
  *(String *)(puVar5 + 0x30) = SVar16;
  *(String *)(puVar5 + 0x40) = SVar17;
  pcVar6 = *(char **)(param_1 + *(int *)(lVar11 + 0x34));
  pvVar8 = *(void **)(param_1 + *(int *)(lVar11 + 0x34) + 8);
  pcVar4 = (char *)0x0;
  if (pvVar8 != (void *)0x0) {
    pcVar4 = pcVar6;
  }
  pvVar12 = (void *)0xe000000000000000;
  if (pvVar8 != (void *)0x0) {
    pvVar12 = pvVar8;
  }
  SVar19.bridgeObject = pvVar12;
  SVar19.str = pcVar4;
  SVar15 = Swift::String::lowercased(SVar19);
  _swift_bridgeObjectRetain(pvVar8);
  _swift_bridgeObjectRelease(pvVar12);
  *(String *)(puVar5 + 0x50) = SVar15;
  FUN_10029c44c();
  pcVar4 = (char *)0x0;
  if (pvVar8 != (void *)0x0) {
    pcVar4 = pcVar6;
  }
  pvVar12 = (void *)0xe000000000000000;
  if (pvVar8 != (void *)0x0) {
    pvVar12 = pvVar8;
  }
  *(char **)(puVar5 + 0x60) = pcVar4;
  *(void **)(puVar5 + 0x68) = pvVar12;
  local_e8 = puVar5;
  FUN_10012f2d0(puVar7);
  puVar1 = local_e8;
  puVar5 = PTR___type_metadata_for_Swift_String_100523a98;
  lVar11 = *(long *)(local_e8 + 0x10);
  uVar13 = 0xffffffffffffffff;
  local_e8 = param_3;
  uStack_e0 = param_4;
  do {
    lVar10 = uVar13 - lVar11;
    if (lVar10 == -1) break;
    uVar13 = uVar13 + 1;
    if (*(ulong *)(puVar1 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1000d9f54);
      (*pcVar2)();
    }
    FUN_100026df4();
    bVar3 = (extension_Foundation)::Swift::StringProtocol::_contains
                      (&local_e8,puVar5,puVar5,puVar7,puVar7);
    puVar7 = (undefined *)(ulong)bVar3;
  } while (!bVar3);
  _swift_bridgeObjectRelease(puVar1);
  return lVar10 != -1;
}

