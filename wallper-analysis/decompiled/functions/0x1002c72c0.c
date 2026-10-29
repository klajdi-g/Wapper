// rea decompile_all
// name: FUN_1002c72c0
// address: 0x1002c72c0
// body: available
// range: 0x1002c72c0-0x1002c764f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002c75f0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1002c72c0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  UUID UVar1;
  undefined *puVar2;
  ID IVar3;
  ID self;
  UUID UVar4;
  undefined *puVar5;
  char *pcVar6;
  undefined *puVar7;
  void *pvVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar10;
  bool bVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  String SVar15;
  String SVar16;
  undefined1 auStack_e0 [8];
  undefined8 local_d8;
  undefined8 local_d0;
  long local_c8 [5];
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  void *pvVar8;
  
  local_d0 = param_3;
  local_c8[0] = param_5;
  local_c8[1] = param_6;
  local_c8[2] = param_1;
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  lVar13 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar13 + 0x40));
  puVar2 = &DAT_10054b0b0;
  FUN_100002f94(&DAT_10054b0b0,&DAT_10041c2b0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = (long)(auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  IVar3 = 0;
  FUN_100170d98();
  lVar10 = *(long *)(IVar3 - 8);
  self = IVar3;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar10 + 0x40));
  lVar12 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_d8 = *param_2;
  FUN_100174ed8();
  if (self == 0) {
    UVar4 = Foundation::UUID::init();
    SVar16 = Foundation::UUID::get_uuidString(UVar4);
    pvVar8 = SVar16.bridgeObject;
    (**(code **)(lVar13 + 8))(auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar1.unknown)
    ;
    SVar15.bridgeObject = UVar1.unknown;
    SVar15.str = SVar16.str;
  }
  else {
    objc_stub::stringValue(self);
    SVar15 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pvVar8 = SVar15.bridgeObject;
  }
  pcVar6 = SVar15.str;
  puVar2 = &DAT_10042e578;
  _swift_getKeyPath(&DAT_10042e578);
  puVar5 = &DAT_10042e5a0;
  _swift_getKeyPath(&DAT_10042e5a0);
  Combine::Published::_get_subscript(local_c8 + 3,param_4,puVar2,puVar5);
  _swift_release(puVar2);
  _swift_release(puVar5);
  if (*(long *)(local_c8[3] + 0x10) == 0) {
    bVar11 = true;
  }
  else {
    _swift_bridgeObjectRetain(local_c8[3]);
    pvVar9 = pvVar8;
    FUN_10000464c(pcVar6);
    bVar11 = ((ulong)pvVar9 & 1) == 0;
    if (!bVar11) {
      FUN_100029504(*(long *)(local_c8[3] + 0x38) + *(long *)(lVar10 + 0x48) * (long)pcVar6,lVar14,
                    FUN_100170d98);
    }
    _swift_bridgeObjectRelease(local_c8[3]);
  }
  (**(code **)(lVar10 + 0x38))(lVar14,bVar11,1,IVar3);
  _swift_bridgeObjectRelease(pvVar8);
  _swift_bridgeObjectRelease(local_c8[3]);
  lVar13 = lVar14;
  (**(code **)(lVar10 + 0x30))(lVar14,1,IVar3);
  if ((int)lVar13 == 1) {
    FUN_10002a29c(lVar14,&DAT_10054b0b0,&DAT_10041c2b0);
    puVar2 = &DAT_10055a558;
    FUN_100002f94(&DAT_10055a558,&DAT_10042e558);
    (**(code **)(*(long *)(puVar2 + -8) + 0x38))(local_c8[2],1,1,puVar2);
  }
  else {
    FUN_100007e64(lVar14,lVar12,FUN_100170d98);
    local_70 = *(undefined8 *)(lVar12 + 0x18);
    uStack_68 = *(undefined8 *)(lVar12 + 0x20);
    local_a0 = local_d0;
    local_90 = local_c8[0];
    uStack_88 = local_c8[1];
    uStack_78 = local_d8;
    uStack_98 = param_4;
    local_80 = lVar12;
    _swift_bridgeObjectRetain();
    puVar2 = &DAT_10055a568;
    FUN_100002f94(&DAT_10055a568,&DAT_10042e560);
    puVar5 = &DAT_10055a560;
    FUN_1000087a0(&DAT_10055a560,&DAT_10055a568,&DAT_10042e560,
                  PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0);
    puVar7 = puVar5;
    FUN_100026df4();
    lVar10 = local_c8[2];
    (extension_SwiftUI)::SwiftUI::Section::_init
              (local_c8[2],puVar7,FUN_1002ca84c,local_c8 + 3,puVar2,
               PTR___type_metadata_for_Swift_String_100523a98,puVar5,puVar7);
    puVar2 = &DAT_10055a558;
    FUN_100002f94(&DAT_10055a558,&DAT_10042e558);
    (**(code **)(*(long *)(puVar2 + -8) + 0x38))(lVar10,0,1,puVar2);
    FUN_100029548(lVar12,FUN_100170d98);
  }
  return;
}

