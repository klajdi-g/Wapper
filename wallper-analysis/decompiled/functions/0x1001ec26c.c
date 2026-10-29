// rea decompile_all
// name: FUN_1001ec26c
// address: 0x1001ec26c
// body: available
// range: 0x1001ec26c-0x1001ec607 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001ec604 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001001ec2b8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

String FUN_1001ec26c(long param_1,ulong param_2)

{
  __DataStorage *p_Var1;
  ulong uVar2;
  undefined1 uVar3;
  long lVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  code *pcVar9;
  _ArrayBuffer<undefined> _Var10;
  __DataStorage *p_Var11;
  __DataStorage *p_Var12;
  undefined *puVar13;
  uint uVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  undefined1 *puVar18;
  String SVar19;
  __DataStorage local_88 [24];
  undefined *local_70;
  long local_68;
  
  puVar6 = PTR___type_metadata_for_Swift_UInt8_100524090;
  local_68 = *(long *)PTR____stack_chk_guard_100521138;
  _Var10 = Swift::Array<undefined>::_allocateBufferUninitialized
                     (param_1,PTR___type_metadata_for_Swift_UInt8_100524090);
  *(undefined8 *)(_Var10.unknown + 0x10) = 0x10;
  *(undefined8 *)(_Var10.unknown + 0x20) = 0;
  *(undefined8 *)(_Var10.unknown + 0x28) = 0;
  uVar5 = (uint)(param_2 >> 0x20);
  uVar14 = uVar5 >> 0x1e;
  local_70 = _Var10.unknown;
  if (uVar14 < 2) {
    if (uVar5 >> 0x1e == 0) {
      local_88[0] = SUB81(param_1,0);
      local_88[1] = SUB81((ulong)param_1 >> 8,0);
      local_88[2] = SUB81((ulong)param_1 >> 0x10,0);
      local_88[3] = SUB81((ulong)param_1 >> 0x18,0);
      local_88[4] = SUB81((ulong)param_1 >> 0x20,0);
      local_88[5] = SUB81((ulong)param_1 >> 0x28,0);
      local_88[6] = SUB81((ulong)param_1 >> 0x30,0);
      local_88[7] = SUB81((ulong)param_1 >> 0x38,0);
      local_88[8] = SUB81(param_2,0);
      local_88[9] = SUB81(param_2 >> 8,0);
      local_88[10] = SUB81(param_2 >> 0x10,0);
      local_88[0xb] = SUB81(param_2 >> 0x18,0);
      local_88[0xc] = SUB81(param_2 >> 0x20,0);
      local_88[0xd] = SUB81(param_2 >> 0x28,0);
      p_Var12 = local_88;
      p_Var11 = local_88 + (param_2 >> 0x30 & 0xff);
    }
    else {
      lVar17 = (long)(int)param_1;
      lVar16 = (param_1 >> 0x20) - lVar17;
      if (param_1 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1001ec5f8);
        (*pcVar9)();
      }
      Foundation::__DataStorage::_get__bytes
                ((__DataStorage *)(param_2 & 0x3fffffffffffffff),(__DataStorage *)_Var10.unknown);
      if ((__DataStorage *)_Var10.unknown == (__DataStorage *)0x0) {
        Foundation::__DataStorage::get__length
                  ((__DataStorage *)(param_2 & 0x3fffffffffffffff),(__DataStorage *)0x0);
        p_Var12 = (__DataStorage *)0x0;
        p_Var11 = (__DataStorage *)0x0;
      }
      else {
        p_Var12 = (__DataStorage *)
                  Foundation::__DataStorage::get__offset
                            ((__DataStorage *)(param_2 & 0x3fffffffffffffff),
                             (__DataStorage *)_Var10.unknown);
        if (SBORROW8(lVar17,(long)p_Var12)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1001ec604);
          (*pcVar9)();
        }
        p_Var1 = (__DataStorage *)(_Var10.unknown + (lVar17 - (long)p_Var12));
        lVar17 = Foundation::__DataStorage::get__length
                           ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var12);
        if (lVar16 <= lVar17) {
          lVar17 = lVar16;
        }
        p_Var12 = (__DataStorage *)0x0;
        if (p_Var1 != (__DataStorage *)0x0) {
          p_Var12 = p_Var1;
        }
        p_Var11 = (__DataStorage *)0x0;
        if (p_Var1 != (__DataStorage *)0x0) {
          p_Var11 = p_Var1 + lVar17;
        }
      }
    }
  }
  else if (uVar14 == 2) {
    lVar16 = *(long *)(param_1 + 0x10);
    lVar17 = *(long *)(param_1 + 0x18);
    Foundation::__DataStorage::_get__bytes
              ((__DataStorage *)(param_2 & 0x3fffffffffffffff),(__DataStorage *)_Var10.unknown);
    p_Var11 = (__DataStorage *)0x0;
    p_Var12 = (__DataStorage *)_Var10.unknown;
    if ((__DataStorage *)_Var10.unknown != (__DataStorage *)0x0) {
      p_Var11 = (__DataStorage *)
                Foundation::__DataStorage::get__offset
                          ((__DataStorage *)(param_2 & 0x3fffffffffffffff),
                           (__DataStorage *)_Var10.unknown);
      if (SBORROW8(lVar16,(long)p_Var11)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1001ec600);
        (*pcVar9)();
      }
      p_Var12 = (__DataStorage *)(_Var10.unknown + (lVar16 - (long)p_Var11));
    }
    lVar4 = lVar17 - lVar16;
    if (SBORROW8(lVar17,lVar16)) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1001ec5fc);
      (*pcVar9)();
    }
    lVar16 = Foundation::__DataStorage::get__length
                       ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var11);
    if (lVar4 <= lVar16) {
      lVar16 = lVar4;
    }
    p_Var11 = (__DataStorage *)0x0;
    if (p_Var12 != (__DataStorage *)0x0) {
      p_Var11 = p_Var12 + lVar16;
    }
  }
  else {
    local_88[8] = (__DataStorage)0x0;
    local_88[9] = (__DataStorage)0x0;
    local_88[10] = (__DataStorage)0x0;
    local_88[0xb] = (__DataStorage)0x0;
    local_88[0xc] = (__DataStorage)0x0;
    local_88[0xd] = (__DataStorage)0x0;
    local_88[0] = (__DataStorage)0x0;
    local_88[1] = (__DataStorage)0x0;
    local_88[2] = (__DataStorage)0x0;
    local_88[3] = (__DataStorage)0x0;
    local_88[4] = (__DataStorage)0x0;
    local_88[5] = (__DataStorage)0x0;
    local_88[6] = (__DataStorage)0x0;
    local_88[7] = (__DataStorage)0x0;
    p_Var12 = local_88;
    p_Var11 = local_88;
  }
  FUN_1001eb29c(p_Var12,p_Var11,param_1,param_2,&local_70);
  puVar8 = local_70;
  lVar16 = *(long *)(local_70 + 0x10);
  puVar15 = PTR___swiftEmptyArrayStorage_100524190;
  if (lVar16 != 0) {
    local_88[0] = SUB81(PTR___swiftEmptyArrayStorage_100524190,0);
    local_88[1] = SUB81((ulong)PTR___swiftEmptyArrayStorage_100524190 >> 8,0);
    local_88[2] = SUB81((ulong)PTR___swiftEmptyArrayStorage_100524190 >> 0x10,0);
    local_88[3] = SUB81((ulong)PTR___swiftEmptyArrayStorage_100524190 >> 0x18,0);
    local_88[4] = SUB81((ulong)PTR___swiftEmptyArrayStorage_100524190 >> 0x20,0);
    local_88[5] = SUB81((ulong)PTR___swiftEmptyArrayStorage_100524190 >> 0x28,0);
    local_88[6] = SUB81((ulong)PTR___swiftEmptyArrayStorage_100524190 >> 0x30,0);
    local_88[7] = SUB81((ulong)PTR___swiftEmptyArrayStorage_100524190 >> 0x38,0);
    FUN_1001c5bc4(0,lVar16,0);
    puVar7 = PTR___protocol_witness_table_for_Swift_UInt8___Swift_CVarArg_in_Swift_100524098;
    puVar15 = (undefined *)
              CONCAT17(local_88[7],
                       CONCAT16(local_88[6],
                                CONCAT15(local_88[5],
                                         CONCAT14(local_88[4],
                                                  CONCAT13(local_88[3],
                                                           CONCAT12(local_88[2],
                                                                    CONCAT11(local_88[1],local_88[0]
                                                                            )))))));
    puVar18 = puVar8 + 0x20;
    do {
      uVar3 = *puVar18;
      puVar13 = &DAT_10054b500;
      FUN_100002f94(&DAT_10054b500,&DAT_100434890);
      _swift_allocObject();
      *(undefined8 *)(puVar13 + 0x18) = 2;
      *(undefined8 *)(puVar13 + 0x10) = 1;
      *(undefined **)(puVar13 + 0x38) = puVar6;
      *(undefined **)(puVar13 + 0x40) = puVar7;
      puVar13[0x20] = uVar3;
      SVar19 = (extension_Foundation)::Swift::String::_init();
      local_88[0] = SUB81(puVar15,0);
      local_88[1] = SUB81((ulong)puVar15 >> 8,0);
      local_88[2] = SUB81((ulong)puVar15 >> 0x10,0);
      local_88[3] = SUB81((ulong)puVar15 >> 0x18,0);
      local_88[4] = SUB81((ulong)puVar15 >> 0x20,0);
      local_88[5] = SUB81((ulong)puVar15 >> 0x28,0);
      local_88[6] = SUB81((ulong)puVar15 >> 0x30,0);
      local_88[7] = SUB81((ulong)puVar15 >> 0x38,0);
      uVar2 = *(ulong *)(puVar15 + 0x10);
      if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar2) {
        FUN_1001c5bc4(1 < *(ulong *)(puVar15 + 0x18),uVar2 + 1,1);
        puVar15 = (undefined *)
                  CONCAT17(local_88[7],
                           CONCAT16(local_88[6],
                                    CONCAT15(local_88[5],
                                             CONCAT14(local_88[4],
                                                      CONCAT13(local_88[3],
                                                               CONCAT12(local_88[2],
                                                                        CONCAT11(local_88[1],
                                                                                 local_88[0])))))));
      }
      *(ulong *)(puVar15 + 0x10) = uVar2 + 1;
      *(String *)(puVar15 + uVar2 * 0x10 + 0x20) = SVar19;
      lVar16 = lVar16 + -1;
      puVar18 = puVar18 + 1;
    } while (lVar16 != 0);
  }
  local_88[0] = SUB81(puVar15,0);
  local_88[1] = SUB81((ulong)puVar15 >> 8,0);
  local_88[2] = SUB81((ulong)puVar15 >> 0x10,0);
  local_88[3] = SUB81((ulong)puVar15 >> 0x18,0);
  local_88[4] = SUB81((ulong)puVar15 >> 0x20,0);
  local_88[5] = SUB81((ulong)puVar15 >> 0x28,0);
  local_88[6] = SUB81((ulong)puVar15 >> 0x30,0);
  local_88[7] = SUB81((ulong)puVar15 >> 0x38,0);
  FUN_100002f94(&DAT_100553858,&DAT_100429e10);
  FUN_1000087a0(&DAT_1005546b8,&DAT_100553858,&DAT_100429e10,
                PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100523b48);
  SVar19 = (extension_Swift)::Swift::BidirectionalCollection::_joined
                     ((String)(ZEXT816(0xe000000000000000) << 0x40));
  _swift_bridgeObjectRelease(puVar8);
  _swift_bridgeObjectRelease(puVar15);
  if (*(long *)PTR____stack_chk_guard_100521138 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return SVar19;
}

