// rea decompile_all
// name: FUN_100410950
// address: 0x100410950
// body: available
// range: 0x100410950-0x100410c67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100410c64 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100410950(ulong param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  FILE *pFVar11;
  size_t sVar12;
  void *pvVar13;
  size_t sVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  char acStack_88 [32];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100521138;
  if (((param_1 & 1) != 0) || (DAT_100577a80 == (undefined *)0x0)) {
    if (PTR___availability_version_check_100521140 != (undefined *)0x0) {
      DAT_100577a80 = PTR___availability_version_check_100521140;
    }
    if (((param_1 & 1) != 0) || (DAT_100577a80 == (undefined *)0x0)) {
      puVar1 = (undefined8 *)0xfffffffffffffffe;
      _dlsym(0xfffffffffffffffe,"kCFAllocatorNull");
      if (puVar1 != (undefined8 *)0x0) {
        uVar20 = *puVar1;
        pcVar2 = (code *)0xfffffffffffffffe;
        _dlsym(0xfffffffffffffffe,"CFDataCreateWithBytesNoCopy");
        if (pcVar2 != (code *)0x0) {
          pcVar3 = (code *)0xfffffffffffffffe;
          _dlsym(0xfffffffffffffffe,"CFPropertyListCreateWithData");
          pcVar4 = (code *)0xfffffffffffffffe;
          _dlsym(0xfffffffffffffffe,"CFPropertyListCreateFromXMLData");
          if (pcVar3 != (code *)0x0 || pcVar4 != (code *)0x0) {
            pcVar5 = (code *)0xfffffffffffffffe;
            _dlsym(0xfffffffffffffffe,"CFStringCreateWithCStringNoCopy");
            if (pcVar5 != (code *)0x0) {
              pcVar6 = (code *)0xfffffffffffffffe;
              _dlsym(0xfffffffffffffffe,"CFDictionaryGetValue");
              if (pcVar6 != (code *)0x0) {
                pcVar7 = (code *)0xfffffffffffffffe;
                _dlsym(0xfffffffffffffffe,"CFGetTypeID");
                if (pcVar7 != (code *)0x0) {
                  pcVar8 = (code *)0xfffffffffffffffe;
                  _dlsym(0xfffffffffffffffe,"CFStringGetTypeID");
                  if (pcVar8 != (code *)0x0) {
                    pcVar9 = (code *)0xfffffffffffffffe;
                    _dlsym(0xfffffffffffffffe,"CFStringGetCString");
                    if (pcVar9 != (code *)0x0) {
                      pcVar10 = (code *)0xfffffffffffffffe;
                      _dlsym(0xfffffffffffffffe,"CFRelease");
                      if ((pcVar10 != (code *)0x0) &&
                         (pFVar11 = _fopen("/System/Library/CoreServices/SystemVersion.plist","r"),
                         pFVar11 != (FILE *)0x0)) {
                        _fseek(pFVar11,0,2);
                        sVar12 = _ftell(pFVar11);
                        if ((long)sVar12 < 0) {
                          pvVar13 = (void *)0x0;
                        }
                        else {
                          _rewind(pFVar11);
                          pvVar13 = _malloc(sVar12);
                          if ((pvVar13 != (void *)0x0) &&
                             (sVar14 = _fread(pvVar13,1,sVar12,pFVar11), sVar14 == sVar12)) {
                            lVar15 = 0;
                            (*pcVar2)(0,pvVar13,sVar12,uVar20);
                            if (lVar15 != 0) {
                              lVar16 = 0;
                              if (pcVar3 == (code *)0x0) {
                                (*pcVar4)(0,lVar15,0,0);
                              }
                              else {
                                (*pcVar3)();
                              }
                              if (lVar16 != 0) {
                                lVar17 = 0;
                                (*pcVar5)(0,"ProductVersion",0x600,uVar20);
                                if (lVar17 != 0) {
                                  lVar18 = lVar16;
                                  (*pcVar6)(lVar16,lVar17);
                                  (*pcVar10)(lVar17);
                                  if (lVar18 != 0) {
                                    lVar17 = lVar18;
                                    (*pcVar7)();
                                    lVar19 = lVar17;
                                    (*pcVar8)();
                                    if ((lVar17 == lVar19) &&
                                       ((*pcVar9)(lVar18,acStack_88,0x20,0x8000100),
                                       (int)lVar18 != 0)) {
                                      _sscanf(acStack_88,"%d.%d.%d");
                                    }
                                  }
                                }
                                (*pcVar10)(lVar16);
                              }
                              (*pcVar10)(lVar15);
                            }
                          }
                        }
                        _free(pvVar13);
                        _fclose(pFVar11);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_100521138 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

