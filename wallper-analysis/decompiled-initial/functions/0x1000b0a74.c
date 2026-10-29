// rea decompile_all
// name: FUN_1000b0a74
// address: 0x1000b0a74
// body: available
// range: 0x1000b0a74-0x1000b0cdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000b0af4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000b0a74(undefined8 *param_1,undefined1 param_2,undefined8 param_3,byte param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  ObservedObject<undefined> OVar3;
  undefined8 uVar4;
  ObservedObject<undefined> OVar5;
  undefined8 uVar6;
  ObservedObject<undefined> OVar7;
  AppStorage<String> AVar8;
  ObservedObject<undefined> OVar9;
  undefined8 uVar10;
  String wrappedValue;
  String SVar11;
  
  if (DAT_1005564c0 != -1) {
    _swift_once(&DAT_1005564c0,FUN_10017806c);
  }
  uVar6 = DAT_100577cc0;
  uVar1 = 0;
  FUN_1001a81c0();
  puVar2 = &DAT_10054aa50;
  FUN_1000036d0(&DAT_10054aa50,FUN_1001a81c0,&TargetProtocolConformanceDescriptor_100429ab0);
  _swift_retain(uVar6);
  OVar3 = SwiftUI::ObservedObject::init(puVar2,uVar1,puVar2);
  if (DAT_100555430 != -1) {
    _swift_once(&DAT_100555430,FUN_100159ed4);
  }
  uVar6 = DAT_100577c98;
  uVar4 = 0;
  FUN_10015f754();
  puVar2 = &DAT_10054fa30;
  FUN_1000036d0(&DAT_10054fa30,FUN_10015f754,&TargetProtocolConformanceDescriptor_100428d48);
  _swift_retain(uVar6);
  OVar5 = SwiftUI::ObservedObject::init(puVar2,uVar4,puVar2);
  if (DAT_100557bb0 != -1) {
    _swift_once(&DAT_100557bb0,FUN_100233158);
  }
  uVar10 = *(undefined8 *)(DAT_100577d38 + _TtC7Wallper21VideoWallpaperManager::playback);
  uVar6 = 0;
  FUN_100233054();
  puVar2 = &DAT_10054d410;
  FUN_1000036d0(&DAT_10054d410,FUN_100233054,&TargetProtocolConformanceDescriptor_10042bea4);
  _swift_retain(uVar10);
  OVar7 = SwiftUI::ObservedObject::init(puVar2,uVar6,puVar2);
  wrappedValue.bridgeObject = (void *)0xe800000000000000;
  wrappedValue.str = (char *)0x746e656964617267;
  SVar11.bridgeObject = (void *)0xeb0000000074756f;
  SVar11.str = (char *)0x79614c636973756d;
  AVar8 = SwiftUI::AppStorage::_init(wrappedValue,SVar11);
  uVar10 = 0;
  FUN_1000447d4();
  puVar2 = &DAT_10054d408;
  FUN_1000036d0(&DAT_10054d408,FUN_1000447d4,&TargetProtocolConformanceDescriptor_10041dc44);
  OVar9 = SwiftUI::ObservedObject::init(puVar2,uVar10,puVar2);
  *param_1 = OVar9.unknown;
  param_1[1] = uVar10;
  param_1[2] = OVar3.unknown;
  param_1[3] = uVar1;
  param_1[4] = OVar5.unknown;
  param_1[5] = uVar4;
  param_1[6] = OVar7.unknown;
  param_1[7] = uVar6;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[8] = AVar8.unknown;
  *(undefined1 *)(param_1 + 0xb) = param_2;
  *(undefined1 *)((long)param_1 + 0x59) = 1;
  *(byte *)((long)param_1 + 0x5a) = param_4 & 1;
  return;
}

