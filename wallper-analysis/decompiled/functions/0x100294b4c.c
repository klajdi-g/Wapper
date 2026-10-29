// rea decompile_all
// name: FUN_100294b4c
// address: 0x100294b4c
// body: available
// range: 0x100294b4c-0x100294ee7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100294b4c(ulong *param_1,long *param_2,uint param_3)

{
  long lVar1;
  undefined *puVar2;
  uint *puVar3;
  undefined *puVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  String SVar13;
  uint local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long local_58;
  
  pvVar7 = (void *)*param_2;
  SVar13 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pvVar6 = SVar13.bridgeObject;
  if (*(long *)((long)pvVar7 + 0x10) == 0) {
LAB_100294c68:
    uStack_68 = 0;
    local_70 = 0;
    local_58 = 0;
    uStack_60 = 0;
    _swift_bridgeObjectRelease(pvVar6);
  }
  else {
    _swift_bridgeObjectRetain(pvVar7);
    FUN_10000464c(SVar13.str);
    if (((ulong)SVar13.bridgeObject & 1) == 0) {
      _swift_bridgeObjectRelease(pvVar7);
      goto LAB_100294c68;
    }
    FUN_1000280d4(*(long *)((long)pvVar7 + 0x38) + (long)SVar13.str * 0x20,&local_70);
    _swift_bridgeObjectRelease(pvVar6);
    _swift_bridgeObjectRelease(pvVar7);
    puVar2 = PTR___type_metadata_for_Any_100524178;
    if (local_58 != 0) {
      puVar3 = &local_78;
      _swift_dynamicCast(puVar3,&local_70,PTR___type_metadata_for_Any_100524178 + 8,
                         PTR___type_metadata_for_Swift_Int_100523bd8,6);
      if ((((ulong)puVar3 & 1) == 0) || (CONCAT44(uStack_74,local_78) != 0)) goto LAB_100294c80;
      SVar13 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      pvVar6 = SVar13.bridgeObject;
      if (*(long *)((long)pvVar7 + 0x10) == 0) {
LAB_100294cbc:
        uStack_68 = 0;
        local_70 = 0;
        local_58 = 0;
        uStack_60 = 0;
      }
      else {
        _swift_bridgeObjectRetain(pvVar7);
        FUN_10000464c(SVar13.str);
        if (((ulong)SVar13.bridgeObject & 1) == 0) {
          _swift_bridgeObjectRelease(pvVar7);
          goto LAB_100294cbc;
        }
        FUN_1000280d4(*(long *)((long)pvVar7 + 0x38) + (long)SVar13.str * 0x20,&local_70);
        _swift_bridgeObjectRelease(pvVar6);
        pvVar6 = pvVar7;
      }
      _swift_bridgeObjectRelease(pvVar6);
      if (local_58 != 0) {
        puVar3 = &local_78;
        _swift_dynamicCast(puVar3,&local_70,puVar2 + 8,PTR___type_metadata_for_Swift_Int32_100524020
                           ,6);
        if ((((ulong)puVar3 & 1) == 0) || (uVar9 = (ulong)local_78, local_78 == param_3))
        goto LAB_100294c80;
        SVar13 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        pvVar6 = SVar13.bridgeObject;
        if (*(long *)((long)pvVar7 + 0x10) == 0) {
LAB_100294d60:
          uStack_68 = 0;
          local_70 = 0;
          local_58 = 0;
          uStack_60 = 0;
        }
        else {
          _swift_bridgeObjectRetain(pvVar7);
          FUN_10000464c(SVar13.str);
          if (((ulong)SVar13.bridgeObject & 1) == 0) {
            _swift_bridgeObjectRelease(pvVar7);
            goto LAB_100294d60;
          }
          FUN_1000280d4(*(long *)((long)pvVar7 + 0x38) + (long)SVar13.str * 0x20,&local_70);
          _swift_bridgeObjectRelease(pvVar6);
          pvVar6 = pvVar7;
        }
        _swift_bridgeObjectRelease(pvVar6);
        if (local_58 != 0) {
          puVar4 = &DAT_100559860;
          FUN_100002f94(&DAT_100559860,&DAT_10042da80);
          puVar3 = &local_78;
          _swift_dynamicCast(puVar3,&local_70,puVar2 + 8,puVar4,6);
          if (((ulong)puVar3 & 1) != 0) {
            lVar1 = CONCAT44(uStack_74,local_78);
            if (*(long *)(lVar1 + 0x10) == 0) {
              uVar8 = 0;
            }
            else {
              _swift_bridgeObjectRetain(lVar1);
              lVar5 = 0x58;
              uVar8 = 0;
              FUN_10000464c();
              if ((uVar8 & 1) == 0) {
                uVar8 = 0;
              }
              else {
                uVar8 = *(ulong *)(*(long *)(lVar1 + 0x38) + lVar5 * 8);
              }
              _swift_bridgeObjectRelease(lVar1);
              if (*(long *)(lVar1 + 0x10) != 0) {
                _swift_bridgeObjectRetain(lVar1);
                lVar5 = 0x59;
                uVar10 = 0;
                FUN_10000464c();
                if ((uVar10 & 1) == 0) {
                  uVar10 = 0;
                }
                else {
                  uVar10 = *(ulong *)(*(long *)(lVar1 + 0x38) + lVar5 * 8);
                }
                _swift_bridgeObjectRelease(lVar1);
                if (*(long *)(lVar1 + 0x10) == 0) {
                  uVar11 = 0;
                  uVar12 = 0;
                }
                else {
                  _swift_bridgeObjectRetain(lVar1);
                  lVar5 = 0x6874646957;
                  uVar11 = 0;
                  FUN_10000464c();
                  if ((uVar11 & 1) == 0) {
                    uVar11 = 0;
                  }
                  else {
                    uVar11 = *(ulong *)(*(long *)(lVar1 + 0x38) + lVar5 * 8);
                  }
                  _swift_bridgeObjectRelease(lVar1);
                  if (*(long *)(lVar1 + 0x10) == 0) {
                    uVar12 = 0;
                  }
                  else {
                    _swift_bridgeObjectRetain(lVar1);
                    lVar5 = 0x746867696548;
                    uVar12 = 0;
                    FUN_10000464c();
                    if ((uVar12 & 1) == 0) {
                      uVar12 = 0;
                    }
                    else {
                      uVar12 = *(ulong *)(*(long *)(lVar1 + 0x38) + lVar5 * 8);
                    }
                    _swift_bridgeObjectRelease(lVar1);
                  }
                }
                goto LAB_100294ecc;
              }
            }
            uVar11 = 0;
            uVar10 = 0;
            uVar12 = 0;
LAB_100294ecc:
            _swift_bridgeObjectRelease(lVar1);
            *param_1 = uVar9;
            param_1[1] = uVar8;
            param_1[2] = uVar10;
            param_1[3] = uVar11;
            param_1[4] = uVar12;
            *(undefined1 *)(param_1 + 5) = 0;
            return;
          }
          goto LAB_100294c80;
        }
      }
    }
  }
  FUN_10028f264(&local_70);
LAB_100294c80:
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}

