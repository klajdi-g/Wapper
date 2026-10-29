// rea decompile_all
// name: FUN_100315a3c
// address: 0x100315a3c
// body: available
// range: 0x100315a3c-0x100315ceb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100315cb8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100315a3c(undefined8 *param_1,long param_2,void *param_3,long param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  State SVar3;
  long lVar4;
  undefined8 *puVar5;
  EnvironmentObject<undefined> EVar6;
  ulong uVar7;
  long extraout_x12;
  long extraout_x12_00;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined1 auStack_1d0 [8];
  undefined *local_1c8;
  uint local_1bc;
  long local_1b8 [4];
  undefined8 local_198;
  ulong local_190;
  undefined8 uStack_188;
  char local_69;
  
  puVar2 = &DAT_100554260;
  local_1b8[1] = param_4;
  local_198 = param_5;
  FUN_100002f94(&DAT_100554260,&DAT_100426eb0);
  local_1b8[0] = *(long *)(puVar2 + -8);
  lVar12 = *(long *)(local_1b8[0] + 0x40);
  local_1c8 = puVar2;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar8 = auStack_1d0 + -(lVar12 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = (long)puVar8 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar9 = lVar10 - extraout_x12_00;
  FUN_1000087e4(param_2,lVar9,&DAT_100554260,&DAT_100426eb0);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar9 + 8));
  local_1b8[3] = *(undefined8 *)(lVar9 + 0x10);
  local_1b8[2] = *(undefined8 *)(lVar9 + 0x18);
  FUN_1000087e4(param_2,lVar10,&DAT_100554260,&DAT_100426eb0);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar10 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar10 + 0x18));
  uStack_188 = *(undefined8 *)((long)param_3 + 0x30);
  local_190 = *(ulong *)((long)param_3 + 0x28);
  SVar3.unknown = &DAT_10055bd08;
  FUN_100002f94(&DAT_10055bd08,&DAT_100435de0);
  SwiftUI::State::get_wrappedValue(SVar3);
  local_1bc = (uint)(*(char *)(param_2 + 0x20) == local_69);
  local_1c8 = (undefined *)(long)*(int *)(local_1c8 + 0x50);
  FUN_1000087e4(param_2,puVar8,&DAT_100554260,&DAT_100426eb0);
  uVar7 = (ulong)*(byte *)(local_1b8[0] + 0x50);
  uVar11 = uVar7 + 0x131 & (uVar7 ^ 0xffffffffffffffff);
  lVar4 = local_1b8[1];
  _swift_allocObject(local_1b8[1],uVar11 + lVar12,uVar7 | 7);
  _memcpy((void *)(lVar4 + 0x10),param_3,0x121);
  FUN_100007e1c(puVar8,lVar4 + uVar11,&DAT_100554260,&DAT_100426eb0);
  FUN_1003181f4(param_3,&local_190);
  FUN_100279594(0);
  puVar5 = &DAT_100553dd0;
  FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
  EVar6 = SwiftUI::EnvironmentObject::init();
  *param_1 = local_1b8[3];
  param_1[1] = local_1b8[2];
  lVar12 = 0;
  FUN_10031cb80();
  puVar2 = local_1c8;
  FUN_100007e1c(lVar10 + (long)local_1c8,(long)param_1 + (long)*(int *)(lVar12 + 0x14),
                &DAT_10054ac40,&DAT_10041ce70);
  *(char *)((long)param_1 + (long)*(int *)(lVar12 + 0x18)) = (char)local_1bc;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar12 + 0x1c));
  *puVar1 = local_198;
  puVar1[1] = lVar4;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar12 + 0x20));
  *puVar1 = EVar6.unknown;
  puVar1[1] = puVar5;
  local_190 = local_190 & 0xffffffffffffff00;
  SwiftUI::State::init
            ((long)param_1 + (long)*(int *)(lVar12 + 0x24),lVar12,
             PTR___type_metadata_for_Swift_Bool_100523b70);
  FUN_10002a29c(lVar9 + (long)puVar2,&DAT_10054ac40,&DAT_10041ce70);
  return;
}

