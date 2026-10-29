// rea decompile_all
// name: FUN_1003c89dc
// address: 0x1003c89dc
// body: available
// range: 0x1003c89dc-0x1003c8caf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003c89dc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  Design DVar2;
  undefined *puVar3;
  Text TVar4;
  Binding BVar5;
  Image IVar6;
  undefined7 extraout_var;
  Font FVar7;
  UnitPoint UVar8;
  undefined *puVar9;
  long extraout_x8;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  CGFloat size;
  String systemName;
  undefined1 auStack_a0 [8];
  undefined8 *local_98;
  undefined8 local_90;
  char local_81;
  undefined *local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  puVar3 = &DAT_10054a828;
  local_98 = param_1;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_80 = (undefined *)*param_4;
  uVar11 = param_4[1];
  uStack_78 = uVar11;
  FUN_100026df4();
  _swift_bridgeObjectRetain(uVar11);
  puVar9 = PTR___type_metadata_for_Swift_String_100523a98;
  TVar4 = SwiftUI::Text::_init();
  uStack_78 = param_4[4];
  size.unknown = (undefined *)param_4[3];
  local_70 = *(undefined1 *)(param_4 + 5);
  BVar5.unknown = &DAT_100560cb0;
  local_90 = param_7;
  local_80 = size.unknown;
  FUN_100002f94(&DAT_100560cb0,&DAT_100436920);
  SwiftUI::Binding::get_wrappedValue(BVar5);
  if (local_81 == *(char *)(param_4 + 2)) {
    systemName.bridgeObject = (void *)0xea00000000007075;
    systemName.str = (char *)0x2e6e6f7276656863;
    IVar6 = SwiftUI::Image::init(systemName);
    SwiftUI::Font::Weight::get_bold((Weight)IVar6.unknown);
    DVar2 = SwiftUI::Font::Design::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var,DVar2.value) + -8) + 0x38))
              (auStack_a0 + -extraout_x8,1,1,CONCAT71(extraout_var,DVar2.value));
    FVar7 = SwiftUI::Font::_system(size,(Font)0x0);
    FUN_10002a29c(auStack_a0 + -extraout_x8,&DAT_10054a828,&DAT_10041e3c0);
    puVar10 = &DAT_100435fb0;
    _swift_getKeyPath();
    uStack_78 = param_4[7];
    puVar12 = (undefined *)param_4[6];
    local_70 = *(undefined1 *)(param_4 + 8);
    UVar8.unknown = &DAT_10054e328;
    local_80 = puVar12;
    FUN_100002f94(&DAT_10054e328,&DAT_10041fa50);
    SwiftUI::Binding::get_wrappedValue((Binding)UVar8.unknown);
    SwiftUI::UnitPoint::get_center(UVar8);
    uVar11 = 0;
    if (local_81 == '\0') {
      uVar11 = 0x400921fb54442d18;
    }
    _swift_retain(IVar6.unknown);
    _swift_retain(puVar10);
    _swift_retain(FVar7.unknown);
  }
  else {
    IVar6.unknown = (undefined *)0x0;
    puVar10 = (undefined *)0x0;
    FVar7.unknown = (undefined *)0x0;
    uVar11 = 0;
    puVar12 = (undefined *)0x0;
    param_3 = 0;
  }
  FUN_100007b14(TVar4.unknown,puVar9,puVar3);
  uVar1 = local_90;
  _swift_bridgeObjectRetain(local_90);
  FUN_100026d80(IVar6.unknown,puVar10,FVar7.unknown,uVar11,puVar12,param_3);
  FUN_100026dbc(IVar6.unknown,puVar10,FVar7.unknown,uVar11,puVar12,param_3);
  *local_98 = TVar4.unknown;
  local_98[1] = puVar9;
  *(char *)(local_98 + 2) = (char)puVar3;
  local_98[3] = uVar1;
  local_98[4] = IVar6.unknown;
  local_98[5] = puVar10;
  local_98[6] = FVar7.unknown;
  local_98[7] = uVar11;
  local_98[8] = puVar12;
  local_98[9] = param_3;
  FUN_100026dbc(IVar6.unknown,puVar10,FVar7.unknown,uVar11,puVar12,param_3);
  FUN_100025b34(TVar4.unknown,puVar9,puVar3);
  _swift_bridgeObjectRelease(uVar1);
  return;
}

