// rea decompile_all
// name: FUN_1002e0ca4
// address: 0x1002e0ca4
// body: available
// range: 0x1002e0ca4-0x1002e0e07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002e0d10 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1002e0ca4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ObservedObject<undefined> OVar5;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *local_80;
  
  if (DAT_1005564c0 != -1) {
    _swift_once(&DAT_1005564c0,FUN_10017806c);
  }
  uVar2 = DAT_100577cc0;
  uVar3 = 0;
  FUN_1001a81c0();
  puVar4 = &DAT_10054aa50;
  FUN_1000036d0(&DAT_10054aa50,FUN_1001a81c0,&TargetProtocolConformanceDescriptor_100429ab0);
  _swift_retain(uVar2);
  OVar5 = SwiftUI::ObservedObject::init(puVar4,uVar3,puVar4);
  local_80 = (undefined *)CONCAT71(local_80._1_7_,2);
  SwiftUI::State::init(&local_c0,OVar5.unknown,&DAT_100531398);
  puVar1 = PTR___swiftEmptyArrayStorage_100524190;
  local_80 = PTR___swiftEmptyArrayStorage_100524190;
  puVar4 = &DAT_10055aad0;
  FUN_100002f94(&DAT_10055aad0,&DAT_10042f070);
  SwiftUI::State::init(&uStack_b0,puVar4,puVar4);
  local_80 = puVar1;
  puVar4 = &DAT_10055aad8;
  FUN_100002f94(&DAT_10055aad8,&DAT_10042f078);
  SwiftUI::State::init(&local_a0,puVar4,puVar4);
  local_80 = (undefined *)0x0;
  puVar4 = &DAT_10054bd30;
  FUN_100002f94(&DAT_10054bd30,&DAT_10041d460);
  SwiftUI::State::init(&uStack_90,puVar4,puVar4);
  param_1[5] = uStack_a8;
  param_1[4] = uStack_b0;
  param_1[7] = uStack_98;
  param_1[6] = local_a0;
  param_1[9] = uStack_88;
  param_1[8] = uStack_90;
  param_1[1] = uVar3;
  *param_1 = OVar5.unknown;
  param_1[3] = uStack_b8;
  param_1[2] = local_c0;
  return;
}

