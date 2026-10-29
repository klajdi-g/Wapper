// rea decompile_all
// name: FUN_100040240
// address: 0x100040240
// body: available
// range: 0x100040240-0x10004057f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10004057c to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100040240(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  void *aBlock;
  undefined *puVar3;
  undefined *puVar4;
  NSString *pNVar5;
  NSDictionary *pNVar6;
  long lVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long unaff_x20;
  undefined8 uVar14;
  long lVar15;
  String SVar16;
  String SVar17;
  long local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined *local_f8;
  long local_f0;
  code *local_e8;
  undefined *puStack_e0;
  code *local_d8;
  undefined8 local_d0;
  undefined4 local_c4 [21];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100521138;
  lVar15 = (long)*(int *)(unaff_x20 + 0x28);
  lVar11 = param_2 * lVar15;
  if (SUB168(SEXT816(param_2) * SEXT816(lVar15),8) != lVar11 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100040570);
    (*pcVar2)();
  }
  lVar13 = *(long *)(unaff_x20 + 0x20);
  if (lVar13 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100040574);
    (*pcVar2)();
  }
  if (lVar11 == -0x8000000000000000 && lVar13 == -1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10004057c);
    (*pcVar2)();
  }
  puVar4 = (undefined *)0x0;
  if (lVar13 != 0) {
    puVar4 = (undefined *)(lVar11 / lVar13);
  }
  lVar7 = lVar15;
  ___extension_in_CoreMedia____C_CMTime_init_value__Swift_Int64_timescale__Swift_Int32___>___C_CMTime
            ();
  lVar11 = 0;
  if (lVar13 != 0) {
    lVar11 = lVar15 / lVar13;
  }
  uVar8 = param_3;
  ___extension_in_CoreMedia____C_CMTime_init_value__Swift_Int64_timescale__Swift_Int32___>___C_CMTime
            ();
  local_c4[0] = 0;
  if (!SCARRY8(*(long *)(unaff_x20 +
                        _TtC7WallperP33_54D9350386DEC93E9C9165595326A3B612FrameEncoder::submitted),1
              )) {
    *(long *)(unaff_x20 + _TtC7WallperP33_54D9350386DEC93E9C9165595326A3B612FrameEncoder::submitted)
         = *(long *)(unaff_x20 +
                    _TtC7WallperP33_54D9350386DEC93E9C9165595326A3B612FrameEncoder::submitted) + 1;
    uVar12 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar14 = *(undefined8 *)
              (unaff_x20 + _TtC7WallperP33_54D9350386DEC93E9C9165595326A3B612FrameEncoder::sink);
    local_d8 = FUN_10004420c;
    local_f8 = PTR___NSConcreteStackBlock_100521110;
    local_f0 = 0x42000000;
    local_e8 = FUN_100042668;
    puStack_e0 = &DAT_100526580;
    local_d0 = uVar14;
    aBlock = __Block_copy(&local_f8);
    uVar1 = local_d0;
    _swift_retain(uVar14);
    _swift_release(uVar1);
    local_108 = (undefined4)lVar15;
    uStack_104 = (undefined4)((ulong)lVar15 >> 0x20);
    ppuVar9 = &local_f8;
    plVar10 = &local_110;
    local_110 = lVar11;
    local_100 = uVar8;
    local_f8 = puVar4;
    local_f0 = lVar7;
    local_e8 = (code *)param_3;
    _VTCompressionSessionEncodeFrameWithOutputHandler
              (uVar12,param_1,ppuVar9,plVar10,0,local_c4,aBlock);
    __Block_release(aBlock);
    if ((int)uVar12 != 0) {
      puVar4 = &DAT_10054c048;
      FUN_100002f94("InteractiveVideoRenderer",&DAT_10054c048,&DAT_10041d7b0);
      _swift_initStackObject();
      *(undefined8 *)(puVar4 + 0x18) = 2;
      *(undefined8 *)(puVar4 + 0x10) = 1;
      SVar16 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      *(String *)(puVar4 + 0x20) = SVar16;
      local_f8 = (undefined *)0x0;
      local_f0 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x17,(_StringGuts)SVar16.bridgeObject);
      _swift_bridgeObjectRelease(local_f0);
      local_f8 = (undefined *)0xd000000000000015;
      local_f0 = -0x7ffffffeffb23fd0;
      local_110 = CONCAT44(local_110._4_4_,(int)uVar12);
      SVar16 = Swift::CustomStringConvertible::get_description();
      SVar17.bridgeObject = plVar10;
      SVar17.str = (char *)ppuVar9;
      Swift::String::append(SVar16,SVar17);
      _swift_bridgeObjectRelease(SVar16.bridgeObject);
      *(undefined **)(puVar4 + 0x48) = PTR___type_metadata_for_Swift_String_100523a98;
      *(undefined **)(puVar4 + 0x30) = local_f8;
      *(long *)(puVar4 + 0x38) = local_f0;
      puVar3 = puVar4;
      FUN_100005b10(puVar4);
      _swift_setDeallocating(puVar4);
      FUN_10002a29c((String *)(puVar4 + 0x20),&DAT_10054a1c0,&DAT_10041a250);
      puVar4 = &_OBJC_CLASS___NSError;
      _objc_allocWithZone();
      pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      pNVar6 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(puVar3);
      objc_stub::initWithDomain_code_userInfo_((ID)puVar4,pNVar5,5,pNVar6);
      _swift_willThrow(0);
    }
    if (*(long *)PTR____stack_chk_guard_100521138 == local_70) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100040578);
  (*pcVar2)();
}

