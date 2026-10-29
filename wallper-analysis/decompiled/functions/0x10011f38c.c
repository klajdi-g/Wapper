// rea decompile_all
// name: FUN_10011f38c
// address: 0x10011f38c
// body: available
// range: 0x10011f38c-0x10011f6bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10011f38c(void)

{
  code *pcVar1;
  long lVar2;
  URL UVar3;
  undefined *puVar4;
  undefined *puVar5;
  char *pcVar6;
  TaskPriority TVar7;
  MainActor *pMVar8;
  undefined8 *puVar9;
  ID self;
  void *pvVar10;
  long extraout_x8;
  ulong uVar11;
  String *unaff_x20;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  ulong uVar15;
  long lVar16;
  String SVar17;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  lVar2 = 0;
  FUN_10011c000();
  lVar16 = *(long *)(lVar2 + -8);
  lVar12 = *(long *)(lVar16 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar14 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)(auStack_70 + -(lVar12 + 0xfU & 0xfffffffffffffff0)) - extraout_x8;
  puVar14 = *(undefined **)((long)&unaff_x20->str + (long)*(int *)(lVar2 + 0x1c));
  if (puVar14 == (undefined *)0x0) {
    FUN_100279594(0);
    FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
    SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10011f6c0);
    (*pcVar1)();
  }
  FUN_10040211c();
  UVar3.unknown = puVar14;
  _swift_retain();
  SVar17 = Foundation::URL::get_lastPathComponent(UVar3);
  pvVar10 = SVar17.bridgeObject;
  uVar11 = (ulong)SVar17.str & 0xffffffffffff;
  if (((ulong)pvVar10 & 0x2000000000000000) != 0) {
    uVar11 = (ulong)pvVar10 >> 0x38 & 0xf;
  }
  if (uVar11 == 0) {
    _swift_bridgeObjectRelease(pvVar10);
    SVar17 = *unaff_x20;
    _swift_bridgeObjectRetain(unaff_x20->bridgeObject);
  }
  pcVar6 = SVar17.str;
  puVar4 = &DAT_1004265f8;
  _swift_getKeyPath(&DAT_1004265f8);
  puVar5 = &DAT_100426620;
  _swift_getKeyPath(&DAT_100426620);
  Combine::Published::_get_subscript(&local_68,puVar14,puVar4,puVar5);
  _swift_release(puVar4);
  _swift_release(puVar5);
  FUN_1002165a4(pcVar6,SVar17.bridgeObject,local_68);
  _swift_release(puVar14);
  _swift_bridgeObjectRelease(SVar17.bridgeObject);
  _swift_bridgeObjectRelease(local_68);
  _swift_retain(puVar14);
  if (((ulong)pcVar6 & 1) == 0) {
    FUN_100269f50();
    puVar4 = &UNK_1004266d8;
    puVar5 = &UNK_10052d028;
  }
  else {
    FUN_100269618();
    puVar4 = &DAT_1004266e8;
    puVar5 = &DAT_10052d050;
  }
  _swift_release(puVar14);
  TVar7 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar7.unknown + -8) + 0x38))(lVar13,1,1,TVar7.unknown);
  FUN_100029504();
  pMVar8 = Swift::MainActor::typeMetadataAccessor();
  puVar14 = PTR_typeMetadataAccessor_1005246d8;
  pMVar8 = Swift::MainActor::get_shared(pMVar8,pMVar8);
  puVar9 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar14,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  uVar11 = (ulong)*(byte *)(lVar16 + 0x50);
  uVar15 = uVar11 + 0x20 & (uVar11 ^ 0xffffffffffffffff);
  _swift_allocObject(puVar5,uVar15 + lVar12,uVar11 | 7);
  *(MainActor **)(puVar5 + 0x10) = pMVar8;
  *(undefined8 **)(puVar5 + 0x18) = puVar9;
  FUN_100121718(auStack_70 + -(lVar12 + 0xfU & 0xfffffffffffffff0),puVar5 + uVar15);
  FUN_1001b1e74(0,0,lVar13,puVar4,puVar5);
  _swift_release();
  self = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  if (DAT_100557bb8 != -1) {
    _swift_once(&DAT_100557bb8,FUN_100256014);
  }
  NSNotificationCenter::postNotificationName_object_(self,DAT_100577d58,0);
  return 0;
}

