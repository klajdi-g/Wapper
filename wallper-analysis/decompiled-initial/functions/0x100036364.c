// rea decompile_all
// name: FUN_100036364
// address: 0x100036364
// body: available
// range: 0x100036364-0x1000366a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100036364(void)

{
  ulong uVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  URL UVar6;
  undefined *puVar7;
  undefined *puVar8;
  char *pcVar9;
  long lVar10;
  undefined8 uVar12;
  long extraout_x8;
  String *unaff_x20;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  String SVar16;
  String SVar17;
  ulong uStack_70;
  ulong local_68;
  undefined7 uStack_67;
  void *pvVar11;
  
  puVar14 = &DAT_10054ac40;
  FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)&uStack_70 - extraout_x8;
  lVar4 = 0;
  FUN_100030a44();
  puVar14 = *(undefined **)((long)&unaff_x20->str + (long)*(int *)(lVar4 + 0x14));
  if (puVar14 == (undefined *)0x0) {
    FUN_100279594(0);
    FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
    SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1000366a4);
    (*pcVar3)();
  }
  lVar5 = 0;
  FUN_10040211c();
  UVar6.unknown = puVar14;
  _swift_retain();
  SVar16 = Foundation::URL::get_lastPathComponent(UVar6);
  pvVar11 = SVar16.bridgeObject;
  uVar1 = (ulong)SVar16.str & 0xffffffffffff;
  if (((ulong)pvVar11 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)pvVar11 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    _swift_bridgeObjectRelease(pvVar11);
    SVar16 = *unaff_x20;
    _swift_bridgeObjectRetain(unaff_x20->bridgeObject);
  }
  pcVar9 = SVar16.str;
  puVar7 = &DAT_10041d0a8;
  _swift_getKeyPath(&DAT_10041d0a8);
  puVar8 = &DAT_10041d0d0;
  _swift_getKeyPath(&DAT_10041d0d0);
  Combine::Published::_get_subscript(&stack0xffffffffffffff98,puVar14,puVar7,puVar8);
  _swift_release(puVar7);
  _swift_release(puVar8);
  uVar12 = local_68;
  FUN_1002165a4(pcVar9,SVar16.bridgeObject,local_68);
  _swift_release(puVar14);
  _swift_bridgeObjectRelease(SVar16.bridgeObject);
  _swift_bridgeObjectRelease(uVar12);
  iVar2 = *(int *)(lVar4 + 0x18);
  local_68 = CONCAT71(uStack_67,(char)pcVar9) & 0xffffffffffffff01;
  puVar7 = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::set_wrappedValue
            ((State *)((long)&unaff_x20->str + (long)iVar2),&stack0xffffffffffffff98,puVar7);
  UVar6.unknown = puVar14;
  _swift_retain();
  SVar16 = Foundation::URL::get_lastPathComponent(UVar6);
  pvVar11 = SVar16.bridgeObject;
  uVar1 = (ulong)SVar16.str & 0xffffffffffff;
  if (((ulong)pvVar11 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)pvVar11 >> 0x38 & 0xf;
  }
  SVar17 = SVar16;
  if (uVar1 == 0) {
    _swift_bridgeObjectRelease(pvVar11);
    pcVar9 = unaff_x20->bridgeObject;
    SVar17 = *unaff_x20;
    _swift_bridgeObjectRetain();
    SVar16.bridgeObject = pvVar11;
    SVar16.str = pcVar9;
  }
  pvVar11 = SVar17.bridgeObject;
  FUN_1002748c4();
  pcVar9 = SVar16.str;
  _swift_bridgeObjectRelease(SVar16.bridgeObject);
  if (*(long *)(pcVar9 + 0x10) == 0) {
LAB_100036588:
    lVar15 = *(long *)(lVar5 + -8);
    uVar12 = 1;
  }
  else {
    _swift_bridgeObjectRetain(pcVar9);
    FUN_10000464c(SVar17.str);
    if (((ulong)SVar17.bridgeObject & 1) == 0) {
      _swift_bridgeObjectRelease(pcVar9);
      goto LAB_100036588;
    }
    lVar15 = *(long *)(lVar5 + -8);
    FUN_100029504(*(long *)(pcVar9 + 0x38) + *(long *)(lVar15 + 0x48) * (long)SVar17.str,lVar13,
                  FUN_10040211c);
    _swift_bridgeObjectRelease(pcVar9);
    uVar12 = 0;
  }
  (**(code **)(lVar15 + 0x38))(lVar13,uVar12,1,lVar5);
  _swift_release(puVar14);
  _swift_bridgeObjectRelease(pvVar11);
  _swift_bridgeObjectRelease(pcVar9);
  lVar10 = lVar13;
  (**(code **)(lVar15 + 0x30))(lVar13,1,lVar5);
  if ((int)lVar10 == 1) {
    FUN_10002a29c(lVar13,&DAT_10054ac40,&DAT_10041ce70);
  }
  else {
    lVar15 = *(long *)(lVar13 + *(int *)(lVar5 + 0x20));
    FUN_10002f1dc(lVar13);
    if (0 < lVar15) goto LAB_100036614;
  }
  lVar15 = *(long *)((long)&unaff_x20->str + (long)*(int *)(lVar5 + 0x20));
LAB_100036614:
  iVar2 = *(int *)(lVar4 + 0x1c);
  puVar14 = &DAT_10054ba40;
  local_68 = lVar15;
  FUN_100002f94(&DAT_10054ba40,&DAT_100423be0);
  SwiftUI::State::set_wrappedValue
            ((State *)((long)&unaff_x20->str + (long)iVar2),&stack0xffffffffffffff98,puVar14);
  return;
}

