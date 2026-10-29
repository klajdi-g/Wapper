// rea decompile_all
// name: FUN_100341718
// address: 0x100341718
// body: available
// range: 0x100341718-0x100341b5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100341718(long *param_1,long *param_2,undefined8 param_3,char *param_4,void *param_5)

{
  String *pSVar1;
  long lVar2;
  ID IVar3;
  ID IVar4;
  char *pcVar5;
  void *pvVar6;
  long *plVar7;
  long lVar8;
  ID IVar9;
  char *pcVar10;
  long lVar11;
  ID IVar12;
  undefined *puVar13;
  ID IVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  long local_a8;
  ID IStack_a0;
  long local_90;
  ID IStack_88;
  char *local_80;
  long lStack_78;
  ID local_70;
  undefined *puStack_68;
  
  if (DAT_10055cd60 != -1) {
    _swift_once(&DAT_10055cd60,FUN_10033d494);
  }
  lVar8 = *param_2;
  IVar9 = param_2[1];
  local_90 = lVar8;
  IStack_88 = IVar9;
  _swift_bridgeObjectRetain(IVar9);
  SVar16.bridgeObject = (void *)0xe100000000000000;
  SVar16.str = (char *)0x7c;
  SVar19.bridgeObject = param_5;
  SVar19.str = param_4;
  Swift::String::append(SVar16,SVar19);
  IVar12 = IStack_88;
  pSVar1 = (String *)(param_2 + 2);
  pcVar10 = pSVar1->str;
  lVar11 = param_2[3];
  SVar19 = *pSVar1;
  SVar16 = *pSVar1;
  _swift_bridgeObjectRetain(IStack_88);
  SVar20.bridgeObject = param_5;
  SVar20.str = param_4;
  Swift::String::append(SVar16,SVar20);
  _swift_bridgeObjectRelease(IVar12);
  IVar12 = IStack_88;
  _swift_bridgeObjectRetain(IStack_88);
  SVar15.bridgeObject = (void *)0xe100000000000000;
  SVar15.str = (char *)0x23;
  SVar21.bridgeObject = param_5;
  SVar21.str = param_4;
  Swift::String::append(SVar15,SVar21);
  _swift_bridgeObjectRelease(IVar12);
  IVar12 = IStack_88;
  lVar2 = local_90;
  SVar16 = Swift::CustomStringConvertible::get_description();
  local_90 = lVar2;
  IStack_88 = IVar12;
  _swift_bridgeObjectRetain(IVar12);
  SVar22.bridgeObject = param_5;
  SVar22.str = param_4;
  Swift::String::append(SVar16,SVar22);
  _swift_bridgeObjectRelease(IVar12);
  _swift_bridgeObjectRelease(SVar16.bridgeObject);
  IVar3 = IStack_88;
  lVar2 = local_90;
  _swift_beginAccess(&DAT_10055cd68,&local_90,0x20,0);
  IVar12 = DAT_10055cd68;
  if (*(long *)(DAT_10055cd68 + 0x10) == 0) {
    _swift_endAccess(&local_90);
LAB_1003418d0:
    _swift_bridgeObjectRelease(IVar3);
    if (param_2[4] != 0) {
      pcVar5 = (char *)0x0;
      pvVar6 = (void *)0x0;
      IVar3 = objc_stub::CGImageForProposedRect_context_hints_(param_2[4],0,0,0);
      if (IVar3 != 0) {
        FUN_1001aeef8();
        if (*(long *)(IVar3 + 0x10) == 0x10) {
          puVar13 = &DAT_10054c318;
          FUN_100002f94(&DAT_10054c318,&DAT_10041d860);
          _swift_initStaticObject();
          local_a8 = lVar8;
          IStack_a0 = IVar9;
          local_90 = lVar8;
          IStack_88 = IVar9;
          local_80 = pcVar10;
          lStack_78 = lVar11;
          local_70 = IVar3;
          puStack_68 = puVar13;
          _swift_bridgeObjectRetain_n(IVar9,3);
          _swift_bridgeObjectRetain_n(lVar11,2);
          _swift_bridgeObjectRetain(IVar3);
          SVar17.bridgeObject = (void *)0xe100000000000000;
          SVar17.str = (char *)0x7c;
          SVar23.bridgeObject = pvVar6;
          SVar23.str = pcVar5;
          Swift::String::append(SVar17,SVar23);
          IVar12 = IStack_a0;
          _swift_bridgeObjectRetain(IStack_a0);
          SVar24.bridgeObject = pvVar6;
          SVar24.str = pcVar5;
          Swift::String::append(SVar19,SVar24);
          _swift_bridgeObjectRelease(IVar12);
          IVar12 = IStack_a0;
          _swift_bridgeObjectRetain(IStack_a0);
          SVar18.bridgeObject = (void *)0xe100000000000000;
          SVar18.str = (char *)0x23;
          SVar25.bridgeObject = pvVar6;
          SVar25.str = pcVar5;
          Swift::String::append(SVar18,SVar25);
          _swift_bridgeObjectRelease(IVar12);
          IVar12 = IStack_a0;
          lVar2 = local_a8;
          SVar16 = Swift::CustomStringConvertible::get_description();
          local_a8 = lVar2;
          IStack_a0 = IVar12;
          _swift_bridgeObjectRetain(IVar12);
          SVar26.bridgeObject = pvVar6;
          SVar26.str = pcVar5;
          Swift::String::append(SVar16,SVar26);
          _swift_bridgeObjectRelease(IVar12);
          _swift_bridgeObjectRelease(SVar16.bridgeObject);
          IVar14 = IStack_a0;
          lVar2 = local_a8;
          _swift_beginAccess(&DAT_10055cd68,&local_a8,0x21,0);
          _swift_bridgeObjectRetain(IVar9);
          _swift_bridgeObjectRetain(lVar11);
          _swift_bridgeObjectRetain(IVar3);
          IVar4 = DAT_10055cd68;
          _swift_isUniquelyReferenced_nonNull_native(DAT_10055cd68);
          IVar12 = DAT_10055cd68;
          DAT_10055cd68 = 0x8000000000000000;
          FUN_100341530(&local_90,lVar2,IVar14,IVar4);
          _swift_bridgeObjectRelease(IVar14);
          DAT_10055cd68 = IVar12;
          _swift_endAccess(&local_a8);
          _swift_bridgeObjectRelease(IVar3);
          _swift_bridgeObjectRelease(lVar11);
          IVar12 = IVar9;
          IVar14 = IVar3;
        }
        else {
          lVar8 = 0;
          IVar9 = 0;
          pcVar10 = (char *)0x0;
          lVar11 = 0;
          IVar14 = 0;
          puVar13 = (undefined *)0x0;
          IVar12 = IVar3;
        }
        goto LAB_100341b14;
      }
    }
    lVar8 = 0;
    IVar9 = 0;
    pcVar10 = (char *)0x0;
    lVar11 = 0;
    IVar14 = 0;
    puVar13 = (undefined *)0x0;
  }
  else {
    _swift_bridgeObjectRetain(DAT_10055cd68);
    IVar14 = IVar3;
    FUN_10000464c();
    if ((IVar14 & 1) == 0) {
      _swift_endAccess(&local_90);
      _swift_bridgeObjectRelease(IVar3);
      IVar3 = IVar12;
      goto LAB_1003418d0;
    }
    plVar7 = (long *)(*(long *)(IVar12 + 0x38) + lVar2 * 0x30);
    lVar8 = *plVar7;
    IVar9 = plVar7[1];
    pcVar10 = (char *)plVar7[2];
    lVar11 = plVar7[3];
    IVar14 = plVar7[4];
    puVar13 = (undefined *)plVar7[5];
    _swift_bridgeObjectRetain(IVar9);
    _swift_bridgeObjectRetain(lVar11);
    _swift_bridgeObjectRetain(IVar14);
    _swift_bridgeObjectRetain(puVar13);
    _swift_endAccess(&local_90);
    _swift_bridgeObjectRelease(IVar3);
LAB_100341b14:
    _swift_bridgeObjectRelease(IVar12);
  }
  *param_1 = lVar8;
  param_1[1] = IVar9;
  param_1[2] = (long)pcVar10;
  param_1[3] = lVar11;
  param_1[4] = IVar14;
  param_1[5] = (long)puVar13;
  return;
}

