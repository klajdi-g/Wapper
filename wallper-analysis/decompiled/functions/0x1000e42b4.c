// rea decompile_all
// name: FUN_1000e42b4
// address: 0x1000e42b4
// body: available
// range: 0x1000e42b4-0x1000e4617 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1000e42b4(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  undefined *puVar6;
  long lVar7;
  char *pcVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar14;
  long lVar15;
  char *pcVar16;
  bool bVar17;
  long lVar18;
  undefined8 uVar19;
  String SVar20;
  String SVar21;
  ulong local_80;
  ulong uStack_78;
  
  puVar6 = &DAT_100551e50;
  puVar9 = &DAT_100429e60;
  FUN_100002f94();
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = (long)&local_80 - extraout_x8;
  lVar7 = 0;
  FUN_100126a5c();
  lVar18 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar18 + 0x40));
  lVar14 = lVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  pcVar16 = *(char **)(unaff_x20 + 0x10);
  if (pcVar16 == (char *)0x0) {
    FUN_100279594(0);
    FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
    SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1000e4618);
    (*pcVar5)();
  }
  pcVar8 = pcVar16;
  _swift_retain();
  FUN_1000e3868();
  puVar6 = puVar9;
  FUN_10027f304();
  _swift_release(pcVar16);
  _swift_bridgeObjectRelease(puVar9);
  if (DAT_1005539e8 != -1) {
    _swift_once(&DAT_1005539e8,FUN_1001237d4);
  }
  uVar19 = DAT_100577c28;
  local_80 = 0x64616f6c6e776f64;
  uStack_78 = 0xe90000000000003a;
  SVar20.bridgeObject = puVar6;
  SVar20.str = pcVar8;
  SVar21.bridgeObject = param_4;
  SVar21.str = param_3;
  Swift::String::append(SVar20,SVar21);
  _swift_bridgeObjectRelease(puVar6);
  uVar4 = uStack_78;
  uVar12 = local_80;
  puVar6 = &DAT_100423d80;
  _swift_getKeyPath(&DAT_100423d80);
  puVar9 = &DAT_100423da8;
  _swift_getKeyPath(&DAT_100423da8);
  Combine::Published::_get_subscript(&local_80,uVar19,puVar6,puVar9);
  _swift_release(puVar6);
  _swift_release(puVar9);
  uVar3 = local_80;
  if (*(long *)(local_80 + 0x10) == 0) {
    bVar17 = true;
  }
  else {
    _swift_bridgeObjectRetain(local_80);
    uVar10 = uVar12;
    uVar13 = uVar4;
    FUN_10000464c(uVar12);
    bVar17 = (uVar13 & 1) == 0;
    if (!bVar17) {
      FUN_100029504(*(long *)(uVar3 + 0x38) + *(long *)(lVar18 + 0x48) * uVar10,lVar15,FUN_100126a5c
                   );
    }
    _swift_bridgeObjectRelease(uVar3);
  }
  (**(code **)(lVar18 + 0x38))(lVar15,bVar17,1,lVar7);
  _swift_bridgeObjectRelease(uVar3);
  lVar11 = lVar15;
  (**(code **)(lVar18 + 0x30))(lVar15,1,lVar7);
  if ((int)lVar11 == 1) {
    _swift_bridgeObjectRelease(uVar4);
    FUN_10002a29c(lVar15,&DAT_100551e50,&DAT_100429e60);
  }
  else {
    FUN_100007e64(lVar15,lVar14,FUN_100126a5c);
    puVar6 = &DAT_100423dc8;
    _swift_getKeyPath(&DAT_100423dc8);
    puVar9 = &DAT_100423df0;
    _swift_getKeyPath(&DAT_100423df0);
    Combine::Published::_get_subscript(&local_80,uVar19,puVar6,puVar9);
    _swift_release(puVar6);
    _swift_release(puVar9);
    uVar3 = local_80;
    FUN_10026abd8(uVar12,uVar4,local_80);
    _swift_bridgeObjectRelease(uVar4);
    _swift_bridgeObjectRelease(uVar3);
    if ((uVar12 & 1) != 0) {
      puVar1 = (undefined8 *)(lVar14 + *(int *)(lVar7 + 0x24));
      uVar19 = *puVar1;
      cVar2 = *(char *)(puVar1 + 1);
      FUN_100029548(lVar14,FUN_100126a5c);
      if (cVar2 == '\x01') {
        return 0;
      }
      return uVar19;
    }
    FUN_100029548(lVar14,FUN_100126a5c);
  }
  return 0;
}

