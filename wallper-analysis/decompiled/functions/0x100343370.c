// rea decompile_all
// name: FUN_100343370
// address: 0x100343370
// body: available
// range: 0x100343370-0x1003438d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003434cc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100343370(undefined8 *param_1)

{
  Size SVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ID IVar5;
  SchedulerOptions SVar6;
  TimerPublisher *pTVar7;
  TimerPublisher *pTVar8;
  GridItem GVar9;
  char *pcVar10;
  void *pvVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 uVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  long local_220 [2];
  String aSStack_210 [6];
  TimerPublisher *local_1b0;
  undefined8 uStack_1a8;
  undefined *local_1a0;
  code *pcStack_198;
  undefined *local_190;
  undefined8 uStack_188;
  TimerPublisher *local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  TimerPublisher *pTStack_168;
  undefined *local_160;
  TimerPublisher *local_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  code *pcStack_138;
  undefined *local_130;
  undefined8 uStack_128;
  TimerPublisher *local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  TimerPublisher *pTStack_108;
  undefined *local_100;
  TimerPublisher *local_f8;
  undefined8 uStack_f0;
  undefined *local_e8;
  code *pcStack_e0;
  undefined *local_d8;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  TimerPublisher *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  TimerPublisher *pTStack_b0;
  undefined *local_a8;
  undefined8 local_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  aSStack_210[0].str = (char *)Foundation::Date::typeMetadataAccessor();
  local_220[1] = *(long *)(aSStack_210[0].str + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_220[1] + 0x40));
  lVar14 = (long)local_220 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  FUN_10009e280();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar13 = (undefined8 *)(lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  SVar1 = SwiftUI::GridItem::Size::typeMetadataAccessor();
  local_220[0] = CONCAT71((int7)((ulong)lVar2 >> 8),SVar1.value);
  lVar2 = *(long *)(local_220[0] + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar2 + 0x40));
  puVar15 = (undefined8 *)((long)puVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  puVar3 = &DAT_1005610e0;
  FUN_100002f94(&DAT_1005610e0,&DAT_10042b5d0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = (long)puVar15 - extraout_x8_02;
  if (DAT_1005564c0 != -1) {
    _swift_once(&DAT_1005564c0,FUN_10017806c);
  }
  uVar17 = DAT_100577cc0;
  uVar4 = 0;
  FUN_1001a81c0();
  puVar3 = &DAT_10054aa50;
  FUN_1000036d0(&DAT_10054aa50,FUN_1001a81c0,&TargetProtocolConformanceDescriptor_100429ab0);
  _swift_retain(uVar17);
  local_f8 = (TimerPublisher *)SwiftUI::ObservedObject::init(puVar3,uVar4,puVar3);
  SVar20.bridgeObject = (void *)0xe800000000000000;
  SVar20.str = (char *)0x746e656964617267;
  SVar21.bridgeObject = (void *)0xeb0000000074756f;
  SVar21.str = (char *)0x79614c636973756d;
  uStack_f0 = uVar4;
  local_e8 = (undefined *)SwiftUI::AppStorage::_init(SVar20,SVar21);
  local_150 = (TimerPublisher *)0x0;
  uStack_148 = 0;
  puVar3 = &DAT_100549db0;
  FUN_100002f94(&DAT_100549db0,&DAT_100419ed0);
  SwiftUI::State::init(&local_c8,puVar3,puVar3);
  FUN_1003438d8(0);
  IVar5 = NSRunLoop::mainRunLoop((ID)&_OBJC_CLASS___NSRunLoop);
  uVar17 = *(undefined8 *)PTR__NSRunLoopCommonModes_100521578;
  SVar6 = SchedulerOptions::_typeMetadataAccessor();
  (**(code **)(*(long *)(SVar6.unknown + -8) + 0x38))(lVar16,1,1,SVar6.unknown);
  pTVar7 = (extension_Foundation)::__C::NSTimer::_publish
                     (0x4003333333333333,SVar6.unknown,1,IVar5,uVar17,lVar16);
  FUN_10002a29c(lVar16,&DAT_1005610e0,&DAT_10042b5d0);
  local_150 = pTVar7;
  pTVar8 = TimerPublisher::_typeMetadataAccessor();
  FUN_1000036d0(&DAT_100557550,PTR__typeMetadataAccessor_100520f10,
                PTR__Foundation__TimerPublisher_>Combine__ConnectablePublisher_100520f08);
  (extension_Combine)::Combine::ConnectablePublisher::_autoconnect();
  _swift_release(pTVar7);
  puVar3 = &DAT_10055beb0;
  pTStack_b0 = pTVar8;
  FUN_100002f94(&DAT_10055beb0,&DAT_100430c60);
  GVar9 = SwiftUI::GridItem::typeMetadataAccessor();
  uVar12 = (ulong)*(byte *)(*(long *)(GVar9.unknown + -8) + 0x50);
  _swift_allocObject(puVar3,(uVar12 + 0x20 & (uVar12 ^ 0xffffffffffffffff)) +
                            *(long *)(*(long *)(GVar9.unknown + -8) + 0x48),uVar12 | 7);
  *(undefined8 *)(puVar3 + 0x18) = 2;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  puVar15[1] = 0x407b800000000000;
  *puVar15 = 0x4072c00000000000;
  (**(code **)(lVar2 + 0x68))
            (puVar15,*(undefined4 *)
                      PTR___enum_case_for_SwiftUI_GridItem_Size_adaptive_SwiftUI_GridItem_Size_Type___>__CoreGraphics_CGFloat_CoreGraphics_CGFloat___>_SwiftUI_GridItem_Size_100523648
             ,local_220[0]);
  pvVar11 = (void *)0x0;
  SwiftUI::GridItem::_init((Size)(__int8)puVar15);
  local_a8 = puVar3;
  Foundation::Date::init();
  FUN_10009f5dc(puVar13,lVar14);
  (**(code **)(local_220[1] + 8))(lVar14,aSStack_210[0].str);
  FUN_100341718(&local_a0,puVar13);
  puVar3 = &DAT_10053b510;
  pcVar10 = (char *)0x7;
  _swift_allocObject(&DAT_10053b510,0x40);
  *(long *)(puVar3 + 0x18) = lStack_98;
  *(undefined8 *)(puVar3 + 0x10) = local_a0;
  *(undefined8 *)(puVar3 + 0x28) = uStack_88;
  *(undefined8 *)(puVar3 + 0x20) = uStack_90;
  *(undefined8 *)(puVar3 + 0x38) = uStack_78;
  *(undefined8 *)(puVar3 + 0x30) = local_80;
  pcStack_e0 = FUN_10034395c;
  local_d8 = puVar3;
  uStack_d0 = 0;
  if (lStack_98 == 0) {
    local_180 = (TimerPublisher *)0x0;
    uStack_178 = 0;
  }
  else {
    local_150 = (TimerPublisher *)*puVar13;
    uStack_148 = puVar13[1];
    _swift_bridgeObjectRetain();
    SVar18.bridgeObject = (void *)0xe100000000000000;
    SVar18.str = (char *)0x7c;
    SVar22.bridgeObject = pvVar11;
    SVar22.str = pcVar10;
    Swift::String::append(SVar18,SVar22);
    uVar17 = uStack_148;
    SVar20 = *(String *)(puVar13 + 2);
    _swift_bridgeObjectRetain(uStack_148);
    SVar23.bridgeObject = pvVar11;
    SVar23.str = pcVar10;
    Swift::String::append(SVar20,SVar23);
    _swift_bridgeObjectRelease(uVar17);
    uVar17 = uStack_148;
    _swift_bridgeObjectRetain(uStack_148);
    SVar19.bridgeObject = (void *)0xe100000000000000;
    SVar19.str = (char *)0x23;
    SVar24.bridgeObject = pvVar11;
    SVar24.str = pcVar10;
    Swift::String::append(SVar19,SVar24);
    _swift_bridgeObjectRelease(uVar17);
    uVar17 = uStack_148;
    pTVar7 = local_150;
    SVar20 = Swift::CustomStringConvertible::get_description();
    local_150 = pTVar7;
    uStack_148 = uVar17;
    _swift_bridgeObjectRetain(uVar17);
    SVar25.bridgeObject = pvVar11;
    SVar25.str = pcVar10;
    Swift::String::append(SVar20,SVar25);
    _swift_bridgeObjectRelease(uVar17);
    _swift_bridgeObjectRelease(SVar20.bridgeObject);
    local_180 = local_150;
    uStack_178 = uStack_148;
  }
  FUN_100029548(puVar13,FUN_10009e280);
  _swift_bridgeObjectRelease(uStack_c0);
  _swift_release(local_b8);
  local_b8 = 0;
  uStack_188 = CONCAT71(uStack_cf,uStack_d0);
  local_160 = local_a8;
  uStack_1a8 = uStack_f0;
  local_1b0 = local_f8;
  pcStack_198 = pcStack_e0;
  local_1a0 = local_e8;
  local_190 = local_d8;
  pTStack_168 = pTStack_b0;
  uStack_170 = 0;
  uStack_148 = uStack_f0;
  local_150 = local_f8;
  pcStack_138 = pcStack_e0;
  puStack_140 = local_e8;
  local_100 = local_a8;
  pTStack_108 = pTStack_b0;
  uStack_110 = 0;
  local_130 = local_d8;
  uStack_128 = uStack_188;
  local_120 = local_180;
  uStack_118 = uStack_178;
  local_c8 = local_180;
  uStack_c0 = uStack_178;
  FUN_10033f170(&local_1b0,&aSStack_210[0].bridgeObject);
  FUN_100343964(&local_150);
  param_1[5] = uStack_188;
  param_1[4] = local_190;
  param_1[7] = uStack_178;
  param_1[6] = local_180;
  param_1[9] = pTStack_168;
  param_1[8] = uStack_170;
  param_1[10] = local_160;
  param_1[1] = uStack_1a8;
  *param_1 = local_1b0;
  param_1[3] = pcStack_198;
  param_1[2] = local_1a0;
  return;
}

