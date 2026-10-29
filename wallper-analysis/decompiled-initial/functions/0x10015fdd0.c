// rea decompile_all
// name: FUN_10015fdd0
// address: 0x10015fdd0
// body: available
// range: 0x10015fdd0-0x1001600df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10015fdd0(void)

{
  ID IVar1;
  ID IVar2;
  Dictionary<undefined,undefined> DVar3;
  long lVar4;
  char **ppcVar5;
  undefined *puVar6;
  undefined *puVar7;
  NSDictionary *pNVar8;
  ulong uVar9;
  _StringGuts _Var10;
  char *pcVar11;
  undefined *in_x3;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  char *local_e8;
  void *pvStack_e0;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long lStack_58;
  
  IVar1 = NSURLSessionConfiguration::ephemeralSessionConfiguration
                    ((ID)&_OBJC_CLASS___NSURLSessionConfiguration);
  NSURLSessionConfiguration::setTimeoutIntervalForRequest_(IVar1,0x402e000000000000);
  IVar2 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  IVar2 = NSBundle::infoDictionary(IVar2);
  puVar6 = PTR___type_metadata_for_Any_100524178;
  puVar7 = PTR___type_metadata_for_Swift_String_100523a98;
  if (IVar2 == 0) {
    lStack_58 = 0;
    local_60 = 0;
    uStack_68 = 0;
    local_70 = 0;
LAB_10015ff30:
    FUN_10002a29c(&local_70,&DAT_10054d428,&DAT_100420300);
  }
  else {
    in_x3 = PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100523aa8;
    DVar3 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
    if (*(long *)(DVar3.unknown + 0x10) == 0) {
LAB_10015ff1c:
      lStack_58 = 0;
      local_60 = 0;
      uStack_68 = 0;
      local_70 = 0;
      _swift_bridgeObjectRelease(DVar3.unknown);
      goto LAB_10015ff30;
    }
    _swift_bridgeObjectRetain(DVar3.unknown);
    lVar4 = -0x2fffffffffffffe6;
    uVar9 = 0;
    FUN_10000464c(0xd00000000000001a);
    if ((uVar9 & 1) == 0) {
      _swift_bridgeObjectRelease(DVar3.unknown);
      goto LAB_10015ff1c;
    }
    FUN_1000280d4(*(long *)(DVar3.unknown + 0x38) + lVar4 * 0x20,&local_70);
    _swift_bridgeObjectRelease_n(DVar3.unknown,2);
    if (lStack_58 == 0) goto LAB_10015ff30;
    ppcVar5 = &local_e8;
    in_x3 = PTR___type_metadata_for_Swift_String_100523a98;
    _swift_dynamicCast(ppcVar5,&local_70,puVar6 + 8,PTR___type_metadata_for_Swift_String_100523a98,6
                      );
    if (((ulong)ppcVar5 & 1) != 0) goto LAB_10015ff54;
  }
  local_e8 = (char *)0x302e31;
  pvStack_e0 = (void *)0xe300000000000000;
LAB_10015ff54:
  puVar6 = &DAT_100561110;
  FUN_100002f94(&DAT_100561110,&DAT_100422d10);
  _swift_initStackObject();
  *(undefined8 *)(puVar6 + 0x18) = 2;
  *(undefined8 *)(puVar6 + 0x10) = 1;
  local_70 = 0x6567412d72657355;
  uStack_68 = 0xea0000000000746e;
  _Var10.unknown = puVar7;
  pcVar11 = PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100523aa8;
  Swift::AnyHashable::_init(puVar6 + 0x20);
  local_70 = 0;
  uStack_68 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x20,_Var10);
  _swift_bridgeObjectRelease(uStack_68);
  local_70 = 0x2f7265706c6c6157;
  uStack_68 = 0xe800000000000000;
  SVar12.bridgeObject = pvStack_e0;
  SVar12.str = local_e8;
  SVar14.bridgeObject = in_x3;
  SVar14.str = pcVar11;
  Swift::String::append(SVar12,SVar14);
  _swift_bridgeObjectRelease(pvStack_e0);
  SVar13.bridgeObject = (void *)0x80000001004ded90;
  SVar13.str = (char *)0xd000000000000016;
  SVar15.bridgeObject = in_x3;
  SVar15.str = pcVar11;
  Swift::String::append(SVar13,SVar15);
  *(undefined **)(puVar6 + 0x60) = puVar7;
  *(undefined8 *)(puVar6 + 0x48) = local_70;
  *(undefined8 *)(puVar6 + 0x50) = uStack_68;
  puVar7 = puVar6;
  FUN_100006798(puVar6);
  _swift_setDeallocating(puVar6);
  FUN_10002a29c(puVar6 + 0x20,&DAT_10054a120,&DAT_10041a1c8);
  pNVar8 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(puVar7);
  NSURLSessionConfiguration::setHTTPAdditionalHeaders_(IVar1,pNVar8);
  IVar1 = NSURLSession::sessionWithConfiguration_((ID)&_OBJC_CLASS___NSURLSession,IVar1);
  return IVar1;
}

