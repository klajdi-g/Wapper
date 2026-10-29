// rea decompile_all
// name: FUN_1002f3950
// address: 0x1002f3950
// body: available
// range: 0x1002f3950-0x1002f3d83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002f3b8c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1002f3950(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  URL UVar3;
  undefined8 *puVar4;
  EnvironmentObject<undefined> EVar5;
  URL UVar6;
  URL UVar7;
  long lVar8;
  undefined *puVar9;
  URL in_x3;
  long extraout_x8;
  long lVar10;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar11;
  code *pcVar12;
  code *pcVar13;
  undefined *puVar14;
  String SVar15;
  String SVar16;
  undefined1 auStack_90 [8];
  long local_88;
  undefined1 *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined8 uStack_68;
  
  puVar14 = &DAT_10055b030;
  FUN_100002f94(&DAT_10055b030,&DAT_10042f8c0);
  local_78 = puVar14;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar14 + -8) + 0x40));
  local_80 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = (long)(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  local_88 = lVar10;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar11 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar11 + 0x40));
  puVar14 = (undefined *)(lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100521118)();
  FUN_100279594(0);
  puVar4 = &DAT_100553dd0;
  FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
  EVar5 = SwiftUI::EnvironmentObject::init();
  *param_1 = EVar5.unknown;
  param_1[1] = puVar4;
  lVar10 = 0;
  FUN_1002f58d4();
  if (DAT_100558870 != -1) {
    _swift_once(&DAT_100558870,FUN_100268dac);
  }
  UVar6 = UVar3;
  FUN_100099338(UVar3.unknown,&DAT_100577d80);
  pcVar13 = *(code **)(lVar11 + 0x10);
  UVar7.unknown = puVar14;
  (*pcVar13)(puVar14,UVar6.unknown,UVar3.unknown);
  Foundation::URL::deletingLastPathComponent(UVar7);
  pcVar12 = *(code **)(lVar11 + 8);
  (*pcVar12)(puVar14,UVar3.unknown);
  SVar15.bridgeObject = (void *)0xe800000000000000;
  SVar15.str = (char *)0x7377656976657250;
  Foundation::URL::appendingPathComponent(SVar15,true,in_x3);
  (*pcVar12)((long)puVar14 - extraout_x12_00,UVar3.unknown);
  UVar7.unknown = puVar14;
  (*pcVar13)(puVar14,UVar6.unknown,UVar3.unknown);
  Foundation::URL::deletingLastPathComponent(UVar7);
  (*pcVar12)(puVar14,UVar3.unknown);
  SVar16.bridgeObject = (void *)0xef65686361436e65;
  SVar16.str = (char *)0x657263536b636f4c;
  Foundation::URL::appendingPathComponent(SVar16,true,in_x3);
  (*pcVar12)((long)puVar14 - extraout_x12_00,UVar3.unknown);
  puVar14 = PTR___type_metadata_for_Swift_String_100523a98;
  local_70 = (undefined *)0xa680e2;
  uStack_68 = 0xa300000000000000;
  SwiftUI::State::init
            ((long)param_1 + (long)*(int *)(lVar10 + 0x1c),UVar7.unknown,
             PTR___type_metadata_for_Swift_String_100523a98);
  local_70 = (undefined *)0xa680e2;
  uStack_68 = 0xa300000000000000;
  SwiftUI::State::init((long)param_1 + (long)*(int *)(lVar10 + 0x20),UVar7.unknown,puVar14);
  local_70 = (undefined *)0xa680e2;
  uStack_68 = 0xa300000000000000;
  SwiftUI::State::init((long)param_1 + (long)*(int *)(lVar10 + 0x24),UVar7.unknown,puVar14);
  local_70 = (undefined *)0xa680e2;
  uStack_68 = 0xa300000000000000;
  SwiftUI::State::init((long)param_1 + (long)*(int *)(lVar10 + 0x28),UVar7.unknown,puVar14);
  local_70 = (undefined *)0xa680e2;
  uStack_68 = 0xa300000000000000;
  SwiftUI::State::init((long)param_1 + (long)*(int *)(lVar10 + 0x2c),UVar7.unknown,puVar14);
  local_70 = (undefined *)0x0;
  SwiftUI::State::init
            ((long)param_1 + (long)*(int *)(lVar10 + 0x30),UVar7.unknown,
             PTR___type_metadata_for_Swift_Int_100523bd8);
  puVar9 = PTR___swiftEmptyArrayStorage_100524190;
  iVar1 = *(int *)(lVar10 + 0x34);
  local_70 = PTR___swiftEmptyArrayStorage_100524190;
  puVar14 = &DAT_10055b038;
  FUN_100002f94(&DAT_10055b038,&DAT_10042f8c8);
  SwiftUI::State::init((long)param_1 + (long)iVar1,puVar14,puVar14);
  puVar2 = PTR___type_metadata_for_Swift_Bool_100523b70;
  local_70 = (undefined *)((ulong)local_70 & 0xffffffffffffff00);
  SwiftUI::State::init
            ((long)param_1 + (long)*(int *)(lVar10 + 0x38),puVar14,
             PTR___type_metadata_for_Swift_Bool_100523b70);
  local_70 = (undefined *)((ulong)local_70 & 0xffffffffffffff00);
  SwiftUI::State::init((long)param_1 + (long)*(int *)(lVar10 + 0x3c),puVar14,puVar2);
  iVar1 = *(int *)(lVar10 + 0x40);
  lVar8 = 0;
  FUN_1002f58e8();
  lVar11 = local_88;
  (**(code **)(*(long *)(lVar8 + -8) + 0x38))(local_88,1,1,lVar8);
  FUN_1000087e4(lVar11,local_80,&DAT_10055b030,&DAT_10042f8c0);
  SwiftUI::State::init((long)param_1 + (long)iVar1,lVar8,local_78);
  FUN_10002a29c(lVar11,&DAT_10055b030,&DAT_10042f8c0);
  iVar1 = *(int *)(lVar10 + 0x44);
  FUN_1000076ec();
  puVar14 = &DAT_10055b040;
  local_70 = puVar9;
  FUN_100002f94(&DAT_10055b040,&DAT_10042f8d0);
  SwiftUI::State::init((long)param_1 + (long)iVar1,puVar14,puVar14);
  iVar1 = *(int *)(lVar10 + 0x48);
  local_70 = (undefined *)0x0;
  puVar14 = &DAT_100552970;
  FUN_100002f94(&DAT_100552970,&DAT_10042f240);
  SwiftUI::State::init((long)param_1 + (long)iVar1,puVar14,puVar14);
  return;
}

