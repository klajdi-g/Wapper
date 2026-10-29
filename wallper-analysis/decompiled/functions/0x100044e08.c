// rea decompile_all
// name: FUN_100044e08
// address: 0x100044e08
// body: available
// range: 0x100044e08-0x100044f93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100044e5c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100044e08(undefined8 param_1,Notification param_2,long param_3)

{
  uint uVar1;
  State *pSVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  State local_70;
  undefined8 uStack_68;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long local_28;
  
  Foundation::Notification::_get_userInfo(param_2);
  if (param_2.unknown == (undefined *)0x0) {
    param_1 = 0;
    uStack_38 = 0;
    local_40 = 0;
    local_28 = 0;
    uStack_30 = 0;
LAB_100044efc:
    puVar3 = &local_40;
    FUN_10002a29c(puVar3,&DAT_10054d428,&DAT_100420300);
    uVar1 = (uint)puVar3;
  }
  else {
    puVar4 = PTR___type_metadata_for_Swift_String_100523a98;
    Swift::AnyHashable::_init
              (&local_70,param_2.unknown,PTR___type_metadata_for_Swift_String_100523a98,
               PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100523aa8);
    if (*(long *)(param_2.unknown + 0x10) == 0) {
LAB_100044eac:
      param_1 = 0;
      uStack_38 = 0;
      local_40 = 0;
      local_28 = 0;
      uStack_30 = 0;
    }
    else {
      _swift_bridgeObjectRetain(param_2.unknown);
      pSVar2 = &local_70;
      FUN_10000488c(pSVar2);
      if (((ulong)puVar4 & 1) == 0) {
        _swift_bridgeObjectRelease(param_2.unknown);
        goto LAB_100044eac;
      }
      FUN_1000280d4(*(long *)(param_2.unknown + 0x38) + (long)pSVar2 * 0x20,&local_40);
      _swift_bridgeObjectRelease(param_2.unknown);
    }
    _swift_bridgeObjectRelease(param_2.unknown);
    FUN_100007dd4(&local_70);
    if (local_28 == 0) goto LAB_100044efc;
    pSVar2 = &local_70;
    _swift_dynamicCast(pSVar2,&local_40,PTR___type_metadata_for_Any_100524178 + 8,
                       PTR___type_metadata_for_Swift_Bool_100523b70,6);
    uVar1 = 0;
    if ((int)pSVar2 != 0) {
      uVar1 = (uint)local_70.unknown & 0xff;
      goto LAB_100044f28;
    }
  }
  if (DAT_100559bc8 != -1) {
    _swift_once(&DAT_100559bc8,FUN_100299578);
  }
  FUN_10029a878();
LAB_100044f28:
  FUN_100046754(*(undefined8 *)(param_3 + 0x68),*(undefined8 *)(param_3 + 0x70),
                *(undefined1 *)(param_3 + 0x78),uVar1 & 1);
  uStack_68 = *(undefined8 *)(param_3 + 0x50);
  local_70.unknown = *(undefined **)(param_3 + 0x48);
  puVar4 = &DAT_10054ac50;
  local_40 = param_1;
  FUN_100002f94(&DAT_10054ac50,&DAT_10041dd60);
  SwiftUI::State::set_wrappedValue(&local_70,&local_40,puVar4);
  return;
}

