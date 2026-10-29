// rea decompile_all
// name: FUN_100287780
// address: 0x100287780
// body: available
// range: 0x100287780-0x100287b17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100287b14 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100287780(code *param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  code *pcVar4;
  LargeSlice LVar5;
  __int64 _Var6;
  __DataStorage *p_Var7;
  uint uVar8;
  ulong uVar9;
  long *unaff_x20;
  __DataStorage *p_Var10;
  long unaff_x21;
  __DataStorage *this;
  long lVar11;
  long lVar12;
  long local_98;
  ulong uStack_90;
  char local_78 [16];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100521138;
  lVar1 = *unaff_x20;
  uVar9 = unaff_x20[1];
  uVar3 = (uint)(uVar9 >> 0x20);
  uVar8 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    cVar2 = (char)((ulong)lVar1 >> 0x20);
    if (uVar8 == 0) {
      FUN_100093624(lVar1,uVar9);
      local_78[1] = (char)((ulong)lVar1 >> 8);
      local_78[2] = (char)((ulong)lVar1 >> 0x10);
      local_78[3] = (char)((ulong)lVar1 >> 0x18);
      local_78[5] = (char)((ulong)lVar1 >> 0x28);
      local_78[6] = (char)((ulong)lVar1 >> 0x30);
      local_78[7] = (char)((ulong)lVar1 >> 0x38);
      local_78[8] = (char)uVar9;
      local_78[9] = (char)(uVar9 >> 8);
      local_78[10] = (char)(uVar9 >> 0x10);
      local_78[0xb] = (char)(uVar9 >> 0x18);
      local_78[0xc] = (char)(uVar9 >> 0x20);
      local_78[0xd] = (char)(uVar9 >> 0x28);
      local_78[0xe] = (char)(uVar9 >> 0x30);
      local_78[0] = (char)lVar1;
      local_78[4] = cVar2;
      (*param_1)(&local_98,local_78,local_78 + (byte)local_78[0xe]);
      if (unaff_x21 == 0) {
        *unaff_x20 = CONCAT17(local_78[7],
                              CONCAT16(local_78[6],
                                       CONCAT15(local_78[5],
                                                CONCAT14(local_78[4],
                                                         CONCAT13(local_78[3],
                                                                  CONCAT12(local_78[2],
                                                                           CONCAT11(local_78[1],
                                                                                    local_78[0])))))
                                      ));
        unaff_x20[1] = (ulong)CONCAT16(local_78[0xe],
                                       CONCAT15(local_78[0xd],
                                                CONCAT14(local_78[0xc],
                                                         CONCAT13(local_78[0xb],
                                                                  CONCAT12(local_78[10],
                                                                           CONCAT11(local_78[9],
                                                                                    local_78[8])))))
                                      );
      }
      else {
        *unaff_x20 = CONCAT17(local_78[7],
                              CONCAT16(local_78[6],
                                       CONCAT15(local_78[5],
                                                CONCAT14(local_78[4],
                                                         CONCAT13(local_78[3],
                                                                  CONCAT12(local_78[2],
                                                                           CONCAT11(local_78[1],
                                                                                    local_78[0])))))
                                      ));
        unaff_x20[1] = (ulong)CONCAT16(local_78[0xe],
                                       CONCAT15(local_78[0xd],
                                                CONCAT14(local_78[0xc],
                                                         CONCAT13(local_78[0xb],
                                                                  CONCAT12(local_78[10],
                                                                           CONCAT11(local_78[9],
                                                                                    local_78[8])))))
                                      );
      }
      goto LAB_100287ab8;
    }
    this = (__DataStorage *)(uVar9 & 0x3fffffffffffffff);
    _swift_retain(this);
    FUN_100093624(lVar1,uVar9);
    unaff_x20[1] = -0x4000000000000000;
    *unaff_x20 = 0;
    FUN_100093624(0,0xc000000000000000);
    p_Var10 = this;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar11 = (long)(int)lVar1;
    lVar12 = lVar1 >> 0x20;
    p_Var7 = this;
    if (((ulong)p_Var10 & 1) == 0) {
      if (lVar12 < lVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100287b10);
        (*pcVar4)();
      }
      p_Var10 = this;
      _swift_retain();
      Foundation::__DataStorage::_get__bytes(this,p_Var10);
      if (p_Var10 == (__DataStorage *)0x0) {
        p_Var10 = (__DataStorage *)0x0;
      }
      else {
        _Var6 = Foundation::__DataStorage::get__offset(this,p_Var10);
        if (SBORROW8(lVar11,_Var6)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100287b14);
          (*pcVar4)();
        }
        p_Var10 = p_Var10 + (lVar11 - _Var6);
      }
      p_Var7 = Foundation::__DataStorage::typeMetadataAccessor();
      _swift_allocObject(p_Var7,*(undefined4 *)(p_Var7 + 0x30),*(undefined2 *)(p_Var7 + 0x34));
      p_Var7 = Foundation::__DataStorage::_init
                         (p_Var7,(__int64)p_Var10,(bool)(cVar2 - (char)lVar1),1);
      _swift_release_n(this,2);
    }
    if (lVar12 < lVar11) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100287b0c);
      (*pcVar4)();
    }
    _swift_retain(p_Var7);
    FUN_100287ba4(lVar11,lVar12,param_1,param_2);
    _swift_release(p_Var7);
    uVar9 = (ulong)p_Var7 | 0x4000000000000000;
    if (unaff_x21 == 0) {
      *unaff_x20 = lVar1;
      unaff_x20[1] = uVar9;
      goto LAB_100287ab8;
    }
    *unaff_x20 = lVar1;
  }
  else {
    if (uVar8 != 2) {
      local_78[8] = 0;
      local_78[9] = 0;
      local_78[10] = 0;
      local_78[0xb] = 0;
      local_78[0xc] = 0;
      local_78[0xd] = 0;
      local_78[0] = '\0';
      local_78[1] = 0;
      local_78[2] = 0;
      local_78[3] = 0;
      local_78[4] = '\0';
      local_78[5] = 0;
      local_78[6] = 0;
      local_78[7] = 0;
      (*param_1)(&local_98,local_78,local_78);
      goto LAB_100287ab8;
    }
    _swift_retain(lVar1);
    _swift_retain(uVar9 & 0x3fffffffffffffff);
    FUN_100093624(lVar1,uVar9);
    unaff_x20[1] = -0x4000000000000000;
    *unaff_x20 = 0;
    LVar5.unknown = (undefined *)0x0;
    local_98 = lVar1;
    uStack_90 = uVar9 & 0x3fffffffffffffff;
    FUN_100093624(0,0xc000000000000000);
    Foundation::Data::LargeSlice::ensureUniqueReference(LVar5);
    uVar9 = uStack_90;
    lVar1 = local_98;
    FUN_100287ba4(*(undefined8 *)(local_98 + 0x10),*(undefined8 *)(local_98 + 0x18),param_1,param_2)
    ;
    uVar9 = uVar9 | 0x8000000000000000;
    if (unaff_x21 == 0) {
      *unaff_x20 = lVar1;
      unaff_x20[1] = uVar9;
      goto LAB_100287ab8;
    }
    *unaff_x20 = lVar1;
  }
  unaff_x20[1] = uVar9;
LAB_100287ab8:
  if (*(long *)PTR____stack_chk_guard_100521138 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

