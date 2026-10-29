// rea decompile_all
// name: FUN_1003b01f0
// address: 0x1003b01f0
// body: available
// range: 0x1003b01f0-0x1003b03f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1003b01f0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  NavigationPath NVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar7 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar7);
  param_1[1] = param_2[1];
  uVar7 = param_1[2];
  param_1[2] = param_2[2];
  _swift_retain();
  _swift_release(uVar7);
  param_1[3] = param_2[3];
  uVar7 = param_1[4];
  param_1[4] = param_2[4];
  _swift_retain();
  _swift_release(uVar7);
  param_1[5] = param_2[5];
  uVar7 = param_1[6];
  param_1[6] = param_2[6];
  _swift_retain();
  _swift_release(uVar7);
  uVar7 = param_1[7];
  param_1[7] = param_2[7];
  _swift_retain();
  _swift_release(uVar7);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  uVar7 = param_1[9];
  param_1[9] = param_2[9];
  _swift_retain();
  _swift_release(uVar7);
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  uVar7 = param_1[0xc];
  param_1[0xc] = param_2[0xc];
  _swift_retain();
  _swift_release(uVar7);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  uVar7 = param_1[0xe];
  param_1[0xe] = param_2[0xe];
  _swift_retain();
  _swift_release(uVar7);
  param_1[0xf] = param_2[0xf];
  uVar7 = param_1[0x10];
  param_1[0x10] = param_2[0x10];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar7);
  uVar7 = param_1[0x11];
  param_1[0x11] = param_2[0x11];
  _swift_retain();
  _swift_release(uVar7);
  lVar1 = (long)param_1 + (long)*(int *)(param_3 + 0x34);
  lVar2 = (long)param_2 + (long)*(int *)(param_3 + 0x34);
  NVar4 = SwiftUI::NavigationPath::typeMetadataAccessor();
  (**(code **)(*(long *)(NVar4.unknown + -8) + 0x18))(lVar1,lVar2,NVar4.unknown);
  puVar5 = &DAT_10055f708;
  FUN_100002f94(&DAT_10055f708,&DAT_100434ee0);
  lVar6 = (long)*(int *)(puVar5 + 0x1c);
  uVar7 = *(undefined8 *)(lVar1 + lVar6);
  *(undefined8 *)(lVar1 + lVar6) = *(undefined8 *)(lVar2 + lVar6);
  _swift_retain();
  _swift_release(uVar7);
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  *puVar3 = *param_2;
  uVar7 = puVar3[1];
  puVar3[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar7);
  uVar7 = puVar3[2];
  puVar3[2] = param_2[2];
  _swift_retain();
  _swift_release(uVar7);
  return param_1;
}

