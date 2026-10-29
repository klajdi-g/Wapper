// rea decompile_all
// name: FUN_100046bb8
// address: 0x100046bb8
// body: available
// range: 0x100046bb8-0x100046e1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100046c40 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100046bb8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

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
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
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
  puVar8 = puVar7;
  _swift_allocObject();
  *(undefined8 *)(puVar8 + 0x40) = 0;
  *(undefined8 *)(puVar8 + 0x48) = 0;
  uVar10 = param_2[4];
  uVar11 = *param_2;
  uVar13 = param_2[3];
  uVar12 = param_2[2];
  *(undefined8 *)(puVar8 + 0x18) = param_2[1];
  *(undefined8 *)(puVar8 + 0x10) = uVar11;
  *(undefined8 *)(puVar8 + 0x28) = uVar13;
  *(undefined8 *)(puVar8 + 0x20) = uVar12;
  uVar11 = param_2[4];
  *(undefined8 *)(puVar8 + 0x38) = param_2[5];
  *(undefined8 *)(puVar8 + 0x30) = uVar11;
  *(undefined8 *)(puVar8 + 0x50) = 0x3fe6666666666666;
  *(undefined8 *)(puVar8 + 0x58) = uVar10;
  puVar8 = &DAT_10054d408;
  FUN_100047f94(&DAT_10054d408);
  _swift_bridgeObjectRetain(uVar10);
  OVar9 = SwiftUI::ObservedObject::init(puVar8,puVar7,puVar8);
  lVar1 = DAT_100559bc8;
  uVar10 = param_4;
  _swift_bridgeObjectRetain(param_4);
  if (lVar1 != -1) {
    _swift_once(&DAT_100559bc8,FUN_100299578);
  }
  FUN_10029a878();
  FUN_100046754(param_3,param_4,1,(uint)uVar10 & 1);
  *param_1 = OVar9.unknown;
  param_1[1] = puVar7;
  param_1[2] = OVar4.unknown;
  param_1[3] = uVar2;
  param_1[4] = OVar6.unknown;
  param_1[5] = uVar5;
  param_1[6] = FUN_1000449b4;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = uVar11;
  param_1[10] = 0;
  param_1[0xb] = puVar3;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = param_3;
  param_1[0xe] = param_4;
  *(undefined1 *)(param_1 + 0xf) = 1;
  return;
}

