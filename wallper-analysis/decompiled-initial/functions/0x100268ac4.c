// rea decompile_all
// name: FUN_100268ac4
// address: 0x100268ac4
// body: available
// range: 0x100268ac4-0x100268dab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100268ac4(undefined8 param_1,char *param_2,void *param_3)

{
  ulong uVar1;
  char *pcVar2;
  long lVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined1 *puVar6;
  long lVar7;
  URL UVar8;
  URL UVar9;
  NSString *pNVar10;
  ID IVar11;
  void *pvVar12;
  URL UVar13;
  long extraout_x8;
  long lVar14;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined8 *puVar15;
  code *pcVar16;
  long lVar17;
  code *pcVar18;
  String SVar19;
  String SVar20;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  void *local_90;
  undefined1 *local_88;
  long local_80;
  long local_78;
  long local_70;
  char *local_68;
  
  UVar8 = Foundation::URL::typeMetadataAccessor();
  lVar17 = *(long *)(UVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar17 + 0x40));
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = (long)(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  local_70 = lVar14;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = lVar14 - extraout_x12_00;
  local_78 = lVar14;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_80 = lVar14 - extraout_x12_01;
  uVar1 = (ulong)param_2 & 0xffffffffffff;
  if (((ulong)param_3 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)param_3 >> 0x38 & 0xf;
  }
  local_68 = param_2;
  if (uVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100268d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar17 + 0x38))(param_1,1,1,UVar8.unknown);
    return;
  }
  local_98 = param_1;
  _swift_bridgeObjectRetain(param_3);
  puVar15 = &DAT_100558bb8;
  lVar14 = 3;
  local_90 = param_3;
  local_88 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  while( true ) {
    pvVar5 = local_90;
    lVar3 = DAT_100558870;
    pcVar2 = (char *)puVar15[-1];
    pvVar12 = (void *)*puVar15;
    _swift_bridgeObjectRetain(pvVar12);
    if (lVar3 != -1) {
      _swift_once(&DAT_100558870,FUN_100268dac);
    }
    UVar9 = UVar8;
    FUN_100099338(UVar8.unknown,&DAT_100577d80);
    lVar3 = local_70;
    UVar13 = UVar8;
    (**(code **)(lVar17 + 0x10))(local_70,UVar9.unknown);
    lVar7 = local_78;
    SVar20.bridgeObject = pvVar5;
    SVar20.str = local_68;
    Foundation::URL::appendingPathComponent(SVar20,UVar13);
    pcVar16 = *(code **)(lVar17 + 8);
    (*pcVar16)(lVar3,UVar8.unknown);
    lVar3 = local_80;
    SVar19.bridgeObject = pvVar12;
    SVar19.str = pcVar2;
    Foundation::URL::appendingPathExtension(SVar19,UVar13);
    (*pcVar16)(lVar7,UVar8.unknown);
    _swift_bridgeObjectRelease(pvVar12);
    puVar6 = local_88;
    pcVar18 = *(code **)(lVar17 + 0x20);
    (*pcVar18)(local_88,lVar3,UVar8.unknown);
    UVar9.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
    SVar20 = Foundation::URL::get_path(UVar9);
    pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar20.bridgeObject);
    IVar11 = NSFileManager::fileExistsAtPath_((ID)UVar9.unknown,pNVar10);
    uVar4 = local_98;
    if ((IVar11 & 1) != 0) break;
    puVar15 = puVar15 + 2;
    (*pcVar16)(puVar6,UVar8.unknown);
    pvVar12 = local_90;
    lVar14 = lVar14 + -1;
    if (lVar14 == 0) {
      (**(code **)(lVar17 + 0x38))(local_98,1,1,UVar8.unknown);
LAB_100268d88:
      _swift_bridgeObjectRelease(pvVar12);
      return;
    }
  }
  (*pcVar18)(local_98,puVar6,UVar8.unknown);
  (**(code **)(lVar17 + 0x38))(uVar4,0,1,UVar8.unknown);
  pvVar12 = local_90;
  goto LAB_100268d88;
}

