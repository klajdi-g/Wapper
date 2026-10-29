// rea decompile_all
// name: FUN_100222130
// address: 0x100222130
// body: available
// range: 0x100222130-0x100222617 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100222130(undefined8 param_1)

{
  ulong uVar1;
  byte bVar2;
  undefined1 *puVar3;
  char *pcVar4;
  bool bVar5;
  undefined *puVar6;
  CharacterSet CVar7;
  long lVar8;
  undefined *puVar9;
  URL UVar10;
  TaskPriority TVar11;
  MainActor *pMVar12;
  MainActor *this;
  MainActor *pMVar13;
  undefined8 *puVar14;
  CharacterSet CVar15;
  CharacterSet CVar16;
  void *pvVar17;
  long extraout_x8;
  long lVar18;
  long extraout_x8_00;
  long lVar19;
  ulong uVar20;
  long extraout_x12;
  long extraout_x13;
  undefined8 unaff_x20;
  ulong uVar21;
  _StringGuts _Var22;
  code *pcVar23;
  CharacterSet in;
  String SVar24;
  String SVar25;
  undefined1 auStack_f0 [8];
  long local_e8;
  long local_e0;
  undefined1 *local_d8;
  String local_70;
  
  puVar6 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_d8 = auStack_f0 + -extraout_x8;
  CVar7 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar18 = *(long *)(CVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar18 + 0x40));
  in.unknown = auStack_f0 + -extraout_x8 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0;
  FUN_10040211c();
  lVar8 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar19 = (long)in.unknown - (extraout_x13 + 0xfU & 0xfffffffffffffff0);
  local_e8 = extraout_x13;
  local_e0 = lVar19;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar19 = lVar19 - extraout_x12;
  puVar6 = &DAT_10042b5e8;
  _swift_getKeyPath(&DAT_10042b5e8);
  puVar9 = &DAT_10042b610;
  _swift_getKeyPath(&DAT_10042b610);
  Combine::Published::_get_subscript(&local_70);
  _swift_release(puVar6);
  _swift_release(puVar9);
  pcVar4 = local_70.str;
  uVar20 = *(ulong *)(local_70.str + 0x10);
  if (uVar20 != 0) {
    uVar21 = 0;
    bVar2 = *(byte *)(lVar8 + 0x50);
    do {
      if (*(ulong *)(pcVar4 + 0x10) <= uVar21) {
                    /* WARNING: Does not return */
        pcVar23 = (code *)SoftwareBreakpoint(1,0x100222618);
        (*pcVar23)();
      }
      UVar10.unknown =
           pcVar4 + *(long *)(lVar8 + 0x48) * uVar21 +
                    ((ulong)bVar2 + 0x20 & ((ulong)bVar2 ^ 0xffffffffffffffff));
      FUN_10002f154(UVar10.unknown,lVar19);
      local_70 = Foundation::URL::get_lastPathComponent(UVar10);
      CVar15.unknown = local_70.bridgeObject;
      Foundation::CharacterSet::get_whitespacesAndNewlines((CharacterSet)local_70.str);
      FUN_100026df4();
      SVar24 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
      CVar16.unknown = SVar24.bridgeObject;
      pcVar23 = *(code **)(lVar18 + 8);
      (*pcVar23)(in.unknown,CVar7.unknown);
      _swift_bridgeObjectRelease();
      uVar1 = (ulong)SVar24.str & 0xffffffffffff;
      if (((ulong)CVar16.unknown & 0x2000000000000000) != 0) {
        uVar1 = (ulong)CVar16.unknown >> 0x38 & 0xf;
      }
      if (uVar1 == 0) {
        _swift_bridgeObjectRelease();
        Foundation::CharacterSet::get_whitespacesAndNewlines(CVar16);
        SVar24 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
        CVar15.unknown = in.unknown;
        (*pcVar23)(in.unknown,CVar7.unknown);
      }
      _Var22.unknown = SVar24.bridgeObject;
      local_70 = Foundation::URL::get_lastPathComponent((URL)CVar15.unknown);
      pvVar17 = local_70.bridgeObject;
      Foundation::CharacterSet::get_whitespacesAndNewlines((CharacterSet)local_70.str);
      SVar25 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
      CVar15.unknown = SVar25.bridgeObject;
      (*pcVar23)(in.unknown,CVar7.unknown);
      _swift_bridgeObjectRelease(pvVar17);
      uVar1 = (ulong)SVar25.str & 0xffffffffffff;
      if (((ulong)CVar15.unknown & 0x2000000000000000) != 0) {
        uVar1 = (ulong)CVar15.unknown >> 0x38 & 0xf;
      }
      if (uVar1 == 0) {
        _swift_bridgeObjectRelease();
        Foundation::CharacterSet::get_whitespacesAndNewlines(CVar15);
        SVar25 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
        (*pcVar23)(in.unknown,CVar7.unknown);
      }
      if (SVar24 == SVar25) {
        _swift_bridgeObjectRelease(_Var22.unknown);
        _swift_bridgeObjectRelease(SVar25.bridgeObject);
        FUN_100029548(lVar19,FUN_10040211c);
LAB_1002225e0:
        _swift_bridgeObjectRelease(pcVar4);
        FUN_10021693c(uVar21);
        return;
      }
      bVar5 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)SVar24.str,_Var22,(_StringComparisonResult)(__int8)SVar25.str)
      ;
      _swift_bridgeObjectRelease(_Var22.unknown);
      _swift_bridgeObjectRelease(SVar25.bridgeObject);
      FUN_100029548(lVar19,FUN_10040211c);
      if (bVar5) goto LAB_1002225e0;
      uVar21 = uVar21 + 1;
    } while (uVar20 != uVar21);
  }
  _swift_bridgeObjectRelease(pcVar4);
  TVar11 = Swift::TaskPriority::typeMetadataAccessor();
  puVar3 = local_d8;
  (**(code **)(*(long *)(TVar11.unknown + -8) + 0x38))(local_d8,1,1,TVar11.unknown);
  pMVar12 = (MainActor *)&DAT_1005333a8;
  _swift_allocObject(&DAT_1005333a8,0x18,7);
  _swift_weakInit(pMVar12 + 0x10,unaff_x20);
  lVar18 = local_e0;
  FUN_10002f154(param_1,local_e0);
  this = Swift::MainActor::typeMetadataAccessor();
  puVar6 = PTR_typeMetadataAccessor_1005246d8;
  pMVar13 = pMVar12;
  _swift_retain();
  pMVar13 = Swift::MainActor::get_shared(this,pMVar13);
  puVar14 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar6,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  uVar20 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar21 = uVar20 + 0x28 & (uVar20 ^ 0xffffffffffffffff);
  puVar6 = &DAT_100533970;
  _swift_allocObject(&DAT_100533970,uVar21 + local_e8,uVar20 | 7);
  *(MainActor **)(puVar6 + 0x10) = pMVar13;
  *(undefined8 **)(puVar6 + 0x18) = puVar14;
  *(MainActor **)(puVar6 + 0x20) = pMVar12;
  FUN_100007e64(lVar18,puVar6 + uVar21,FUN_10040211c);
  _swift_release(pMVar12);
  FUN_1001b2110(0,0,puVar3,&DAT_10042b910,puVar6);
  _swift_release();
  return;
}

