// rea decompile_all
// name: FUN_100106e9c
// address: 0x100106e9c
// body: available
// range: 0x100106e9c-0x1001070db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100106f78 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100106e9c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x12;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  code *pcVar13;
  undefined8 auStack_90 [2];
  undefined1 auStack_80 [8];
  undefined *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  
  puVar3 = &DAT_100552df0;
  local_70 = param_1;
  FUN_100002f94(&DAT_100552df0,&DAT_100425928);
  lVar10 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar10 + 0x40));
  puVar11 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = (long)puVar11 - extraout_x12;
  if (DAT_100559a28 != -1) {
    _swift_once(&DAT_100559a28,FUN_100295b28);
  }
  uVar1 = DAT_100577de8;
  uVar4 = 0;
  FUN_10029711c();
  puVar5 = &DAT_100552df8;
  FUN_1000036d0(&DAT_100552df8,FUN_10029711c,&TargetProtocolConformanceDescriptor_10042dae8);
  _swift_retain(uVar1);
  local_78 = (undefined *)SwiftUI::ObservedObject::init(puVar5,uVar4,puVar5);
  FUN_10010b364();
  puVar5 = &DAT_100425930;
  local_68 = param_3;
  _swift_getKeyPath(&DAT_100425930);
  puVar6 = &DAT_100552e00;
  FUN_100002f94(&DAT_100552e00,&DAT_100425958);
  puVar7 = &DAT_100552e08;
  FUN_100002f94(&DAT_100552e08,&DAT_100425960);
  puVar8 = &DAT_100552e10;
  FUN_1000087a0(&DAT_100552e10,&DAT_100552e00,&DAT_100425958,
                PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100523b60);
  puVar9 = puVar8;
  FUN_10010b8b0();
  *(undefined **)(lVar12 + -0x10) = puVar9;
  (extension_SwiftUI)::SwiftUI::ForEach::_init
            (lVar12,puVar9,puVar5,FUN_100107188,0,puVar6,puVar7,puVar8,
             PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100523aa8);
  pcVar13 = *(code **)(lVar10 + 0x10);
  (*pcVar13)(puVar11,lVar12,puVar3);
  puVar2 = local_70;
  *local_70 = local_78;
  local_70[1] = uVar4;
  puVar5 = &DAT_100552e28;
  FUN_100002f94(&DAT_100552e28,&DAT_100425968);
  (*pcVar13)((long)puVar2 + (long)*(int *)(puVar5 + 0x30),puVar11,puVar3);
  pcVar13 = *(code **)(lVar10 + 8);
  _swift_retain(uVar4);
  (*pcVar13)(lVar12,puVar3);
  (*pcVar13)(puVar11,puVar3);
  _swift_release(uVar4);
  return;
}

