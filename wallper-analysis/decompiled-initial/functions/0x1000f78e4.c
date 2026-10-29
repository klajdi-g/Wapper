// rea decompile_all
// name: FUN_1000f78e4
// address: 0x1000f78e4
// body: available
// range: 0x1000f78e4-0x1000f7b17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000f7964 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000f78e4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  ObservedObject<undefined> OVar15;
  long lVar16;
  long lVar17;
  undefined8 local_70;
  undefined8 local_68;
  
  if (DAT_1005539e8 != -1) {
    _swift_once(&DAT_1005539e8,FUN_1001237d4);
  }
  uVar1 = DAT_100577c28;
  uVar13 = 0;
  FUN_100125cc0();
  puVar14 = &DAT_100551cb0;
  FUN_1000036d0(&DAT_100551cb0,FUN_100125cc0,&TargetProtocolConformanceDescriptor_1004268e8);
  _swift_retain(uVar1);
  OVar15 = SwiftUI::ObservedObject::init(puVar14,uVar13,puVar14);
  lVar16 = 0;
  FUN_1000f69cc();
  lVar17 = lVar16;
  _swift_allocObject();
  local_70 = 0;
  Combine::Published::init
            (lVar17 + _TtC7WallperP33_1330B9F6895D4718FB619AD4724A955917DetailScrollState::_y,lVar17
             ,PTR___type_metadata_for_CoreGraphics_CGFloat_100524430);
  SwiftUI::State::init(&local_70,lVar17,lVar16);
  uVar7 = local_68;
  uVar1 = local_70;
  puVar14 = PTR___type_metadata_for_Swift_Bool_100523b70;
  SwiftUI::State::init(&local_70,lVar17,PTR___type_metadata_for_Swift_Bool_100523b70);
  uVar8 = local_68;
  uVar2 = (undefined1)local_70;
  SwiftUI::State::init(&local_70,lVar17,puVar14);
  uVar9 = local_68;
  uVar3 = (undefined1)local_70;
  SwiftUI::State::init(&local_70,lVar17,PTR___type_metadata_for_Swift_Int_100523bd8);
  uVar10 = local_68;
  uVar6 = local_70;
  SwiftUI::State::init(&local_70,lVar17,puVar14);
  uVar11 = local_68;
  uVar4 = (undefined1)local_70;
  SwiftUI::State::init(&local_70,lVar17,puVar14);
  uVar12 = local_68;
  uVar5 = (undefined1)local_70;
  SwiftUI::State::init(&local_70,lVar17,puVar14);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = FUN_100009bdc;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = OVar15.unknown;
  param_1[8] = uVar13;
  param_1[9] = uVar1;
  param_1[10] = uVar7;
  *(undefined1 *)(param_1 + 0xb) = uVar2;
  param_1[0xc] = uVar8;
  *(undefined1 *)(param_1 + 0xd) = uVar3;
  param_1[0xe] = uVar9;
  param_1[0xf] = uVar6;
  param_1[0x10] = uVar10;
  *(undefined1 *)(param_1 + 0x11) = uVar4;
  param_1[0x12] = uVar11;
  *(undefined1 *)(param_1 + 0x13) = uVar5;
  param_1[0x14] = uVar12;
  *(undefined1 *)(param_1 + 0x15) = (undefined1)local_70;
  param_1[0x16] = local_68;
  return;
}

