// rea decompile_all
// name: FUN_10004702c
// address: 0x10004702c
// body: available
// range: 0x10004702c-0x10004725f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000470b8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10004702c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,byte param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ObservedObject<undefined> OVar4;
  undefined8 uVar5;
  ObservedObject<undefined> OVar6;
  undefined *puVar7;
  undefined *puVar8;
  ObservedObject<undefined> OVar9;
  undefined8 uVar10;
  
  if (DAT_1005564c0 != -1) {
    _swift_once(&DAT_1005564c0,FUN_10017806c);
  }
  uVar10 = DAT_100577cc0;
  uVar2 = 0;
  FUN_1001a81c0();
  puVar3 = &DAT_10054aa50;
  FUN_100047f94(&DAT_10054aa50,0xff,FUN_1001a81c0,&TargetProtocolConformanceDescriptor_100429ab0);
  _swift_retain(uVar10);
  OVar4 = SwiftUI::ObservedObject::init(puVar3,uVar2,puVar3);
  if (DAT_100557bb0 != -1) {
    _swift_once(&DAT_100557bb0,FUN_100233158);
  }
  uVar10 = *(undefined8 *)(DAT_100577d38 + _TtC7Wallper21VideoWallpaperManager::playback);
  uVar5 = 0;
  FUN_100233054();
  puVar3 = &DAT_10054d410;
  FUN_100047f94(&DAT_10054d410,0xff,FUN_100233054,&TargetProtocolConformanceDescriptor_10042bea4);
  _swift_retain(uVar10);
  OVar6 = SwiftUI::ObservedObject::init(puVar3,uVar5,puVar3);
  puVar3 = &DAT_10041dcb0;
  _swift_getKeyPath();
  puVar7 = puVar3;
  FUN_1000447d4();
  puVar8 = &DAT_10054d408;
  FUN_100047f94(&DAT_10054d408);
  _swift_retain(param_3);
  OVar9 = SwiftUI::ObservedObject::init(puVar8,puVar7,puVar8);
  lVar1 = DAT_100559bc8;
  uVar10 = param_5;
  _swift_bridgeObjectRetain(param_5);
  if (lVar1 != -1) {
    _swift_once(&DAT_100559bc8,FUN_100299578);
  }
  FUN_10029a878();
  FUN_100046754(param_4,param_5,param_6 & 1,(uint)uVar10 & 1);
  *param_1 = OVar9.unknown;
  param_1[1] = puVar7;
  param_1[2] = OVar4.unknown;
  param_1[3] = uVar2;
  param_1[4] = OVar6.unknown;
  param_1[5] = uVar5;
  param_1[6] = FUN_1000449b4;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = param_2;
  param_1[10] = 0;
  param_1[0xb] = puVar3;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = param_4;
  param_1[0xe] = param_5;
  *(byte *)(param_1 + 0xf) = param_6 & 1;
  return;
}

