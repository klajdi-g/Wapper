// rea decompile_all
// name: FUN_100317f44
// address: 0x100317f44
// body: available
// range: 0x100317f44-0x10031814b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100318054 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100317f44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  void *param_5)

{
  undefined8 *puVar1;
  void *pvVar2;
  long lVar3;
  undefined8 *puVar4;
  EnvironmentObject<undefined> EVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 local_1a0;
  void *pvStack_198;
  undefined1 local_190 [304];
  
  lVar3 = 0;
  local_1a0 = param_3;
  pvStack_198 = param_5;
  FUN_10040211c();
  lVar9 = *(long *)(lVar3 + -8);
  lVar13 = *(long *)(lVar9 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = (long)&local_1a0 - (lVar13 + 0xfU & 0xfffffffffffffff0);
  FUN_100029504(param_2,param_1);
  FUN_100279594(0);
  puVar4 = &DAT_100553dd0;
  FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
  EVar5 = SwiftUI::EnvironmentObject::init();
  lVar3 = 0;
  FUN_10011c000();
  *(undefined8 *)(param_1 + *(int *)(lVar3 + 0x14)) = 0x3ffc71c71c71c71c;
  *(undefined1 *)(param_1 + *(int *)(lVar3 + 0x18)) = 1;
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar3 + 0x1c));
  *puVar1 = EVar5.unknown;
  puVar1[1] = puVar4;
  puVar6 = PTR___type_metadata_for_Swift_Bool_100523b70;
  local_190[0] = 0;
  SwiftUI::State::init
            (param_1 + *(int *)(lVar3 + 0x20),lVar3,PTR___type_metadata_for_Swift_Bool_100523b70);
  local_190[0] = 0;
  SwiftUI::State::init(param_1 + *(int *)(lVar3 + 0x24),lVar3,puVar6);
  FUN_100029504(param_2,lVar12,FUN_10040211c);
  uVar8 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar10 = uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff);
  uVar11 = lVar13 + uVar10 + 7 & 0xfffffffffffffff8;
  puVar6 = &DAT_10053a5a8;
  _swift_allocObject(&DAT_10053a5a8,uVar11 + 0x131,uVar8 | 7);
  FUN_100007e64(lVar12,puVar6 + uVar10,FUN_10040211c);
  pvVar2 = pvStack_198;
  *(undefined8 *)(puVar6 + uVar11) = local_1a0;
  *(undefined8 *)((long)(puVar6 + uVar11) + 8) = param_4;
  _memcpy(puVar6 + uVar11 + 0x10,pvStack_198,0x121);
  puVar7 = &DAT_10055bed0;
  FUN_100002f94(&DAT_10055bed0,&DAT_100430c70);
  puVar4 = (undefined8 *)(param_1 + *(int *)(puVar7 + 0x24));
  *puVar4 = FUN_10031c188;
  puVar4[1] = puVar6;
  puVar4[2] = 0;
  puVar4[3] = 0;
  _swift_bridgeObjectRetain(param_4);
  FUN_1003181f4(pvVar2,local_190);
  return;
}

