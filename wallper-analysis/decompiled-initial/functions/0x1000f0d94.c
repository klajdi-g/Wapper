// rea decompile_all
// name: FUN_1000f0d94
// address: 0x1000f0d94
// body: available
// range: 0x1000f0d94-0x1000f132b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000f0d94(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  ResizingMode RVar2;
  AsyncImagePhase AVar3;
  int iVar4;
  long lVar5;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined8 *puVar7;
  Image IVar8;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  EdgeInsets capInsets;
  long alStack_190 [3];
  ulong *local_178;
  ulong local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined7 uStack_147;
  undefined8 uStack_13f;
  ulong local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined7 uStack_107;
  undefined8 uStack_ff;
  ulong local_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong local_d0;
  undefined1 uStack_c8;
  undefined1 uStack_c7;
  undefined6 uStack_c6;
  undefined1 uStack_c0;
  undefined1 uStack_bf;
  undefined7 uStack_be;
  undefined1 local_b7;
  undefined *local_b0;
  ulong uStack_a8;
  ulong local_a0;
  code *local_98;
  undefined *local_90;
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined6 uStack_86;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  undefined6 uStack_7e;
  undefined1 local_78;
  undefined1 local_77;
  undefined *puVar6;
  
  lVar5 = 0;
  alStack_190[2] = param_3;
  local_178 = param_1;
  FUN_1000fa84c();
  alStack_190[1] = *(long *)(lVar5 + -8);
  lVar16 = *(long *)(alStack_190[1] + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar15 = (long)alStack_190 - (lVar16 + 0xfU & 0xfffffffffffffff0);
  RVar2 = SwiftUI::Image::ResizingMode::typeMetadataAccessor();
  puVar6 = (undefined *)CONCAT71(extraout_var,RVar2.value);
  lVar10 = *(long *)(puVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar10 + 0x40));
  capInsets.unknown = (undefined *)(lVar15 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  AVar3 = SwiftUI::AsyncImagePhase::typeMetadataAccessor();
  lVar5 = CONCAT71(extraout_var_00,AVar3.value);
  lVar14 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar14 + 0x40));
  puVar13 = (undefined8 *)(capInsets.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar14 + 0x10))(puVar13,param_2,lVar5);
  puVar7 = puVar13;
  (**(code **)(lVar14 + 0x58))(puVar13,lVar5);
  iVar4 = (int)puVar7;
  cVar1 = (char)&stack0xfffffffffffffff0;
  if (iVar4 == *(int *)
                PTR___enum_case_for_SwiftUI_AsyncImagePhase_success_SwiftUI_AsyncImagePhase_Type___>__SwiftUI_Image___>_SwiftUI_AsyncImagePhase_1005221f0
     ) {
    (**(code **)(lVar14 + 0x60))(puVar13,lVar5);
    uVar12 = *puVar13;
    IVar8.unknown = puVar6;
    (**(code **)(lVar10 + 0x68))
              (capInsets.unknown,
               *(undefined4 *)
                PTR___enum_case_for_SwiftUI_Image_ResizingMode_stretch_SwiftUI_Image_ResizingMode_Type___>_SwiftUI_Image_ResizingMode_1005232f0
              );
    IVar8 = SwiftUI::Image::resizable(capInsets,(ResizingMode)(__int8)uVar12,IVar8);
    (**(code **)(lVar10 + 8))(capInsets.unknown,puVar6);
    FUN_100029504(alStack_190[2],lVar15,FUN_1000fa84c);
    uVar9 = (ulong)*(byte *)(alStack_190[1] + 0x50);
    uVar11 = uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff);
    puVar6 = &DAT_10052b388;
    _swift_allocObject(&DAT_10052b388,uVar11 + lVar16,uVar9 | 7);
    FUN_100007e64(lVar15,puVar6 + uVar11,FUN_1000fa84c);
    uStack_a8 = 0;
    local_a0 = CONCAT62(local_a0._2_6_,0x101);
    local_98 = thunk_FUN_1000fc9c4;
    uStack_88 = 0;
    uStack_87 = 0;
    uStack_86 = 0;
    uStack_80 = 0;
    uStack_7f = 0;
    uStack_7e = 0;
    local_78 = 1;
    local_b0 = IVar8.unknown;
    local_90 = puVar6;
    _swift_retain_n(IVar8.unknown,2);
    _swift_retain_n(puVar6,2);
    FUN_100002f94(&DAT_1005525b0,&DAT_100424a30);
    FUN_1000fc7a4();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(cVar1 + 0x60));
    uStack_128 = uStack_168;
    local_130 = local_170;
    uStack_118 = uStack_158;
    uStack_120 = uStack_160;
    local_110 = local_150;
    uStack_ff = uStack_13f;
    uStack_a8 = uStack_168;
    local_b0 = (undefined *)local_170;
    local_98 = (code *)uStack_158;
    local_a0 = uStack_160;
    local_90 = (undefined *)local_150;
    uStack_7f = (undefined1)uStack_13f;
    uStack_7e = (undefined6)((ulong)uStack_13f >> 8);
    local_78 = (undefined1)((ulong)uStack_13f >> 0x38);
    uStack_87 = (undefined1)uStack_147;
    uStack_86 = (undefined6)((uint7)uStack_147 >> 8);
    local_77 = 0;
    FUN_1000087e4(&local_130,&local_f0,&DAT_1005525f0,&DAT_100424a58);
    FUN_100002f94(&DAT_1005525d8,&DAT_100424a48);
    FUN_100002f94(&DAT_1005525e8,&DAT_100424a50);
    FUN_1000fc8e0();
    FUN_1000fc958();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(cVar1 + 0x60));
    _swift_release_n(puVar6,2);
    _swift_release_n(IVar8.unknown,2);
    _swift_release(uVar12);
    FUN_10002a29c(&local_130,&DAT_1005525d8,&DAT_100424a48);
    uStack_a8 = uStack_e8;
    local_b0 = (undefined *)local_f0;
    local_98 = (code *)uStack_d8;
    local_a0 = uStack_e0;
    uStack_88 = uStack_c8;
    uStack_87 = uStack_c7;
    local_90 = (undefined *)local_d0;
    uStack_7e = (undefined6)uStack_be;
    local_78 = (undefined1)((uint7)uStack_be >> 0x30);
    local_77 = local_b7;
    uStack_86 = uStack_c6;
    uStack_80 = uStack_c0;
    uStack_7f = uStack_bf;
  }
  else if (iVar4 == *(int *)
                     PTR___enum_case_for_SwiftUI_AsyncImagePhase_failure_SwiftUI_AsyncImagePhase_Type___>__Swift_Error___>_SwiftUI_AsyncImagePhase_1005221e8
          ) {
    (**(code **)(lVar14 + 8))(puVar13,lVar5);
    local_b0 = (undefined *)((ulong)local_b0 & 0xffffffffffffff00);
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(cVar1 + 0x60));
    local_f0 = CONCAT71(local_f0._1_7_,(undefined1)local_130);
    local_b7 = 1;
    FUN_100002f94(&DAT_1005525d8,&DAT_100424a48);
    FUN_100002f94(&DAT_1005525e8,&DAT_100424a50);
    FUN_1000fc8e0();
    FUN_1000fc958();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)&local_f0);
  }
  else if (iVar4 == *(int *)
                     PTR___enum_case_for_SwiftUI_AsyncImagePhase_empty_SwiftUI_AsyncImagePhase_Type___>_SwiftUI_AsyncImagePhase_1005221e0
          ) {
    local_78 = 0;
    FUN_100002f94(&DAT_1005525b0,&DAT_100424a30);
    FUN_1000fc7a4();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(cVar1 + 0x60));
    uStack_e8 = uStack_128;
    local_f0 = local_130;
    uStack_d8 = uStack_118;
    uStack_e0 = uStack_120;
    local_d0 = local_110;
    uStack_bf = (undefined1)uStack_ff;
    uStack_be = (undefined7)((ulong)uStack_ff >> 8);
    uStack_c7 = (undefined1)uStack_107;
    uStack_c6 = (undefined6)((uint7)uStack_107 >> 8);
    local_b7 = 0;
    FUN_100002f94(&DAT_1005525d8,&DAT_100424a48);
    FUN_100002f94(&DAT_1005525e8,&DAT_100424a50);
    FUN_1000fc8e0();
    FUN_1000fc958();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)&local_f0);
  }
  else {
    local_b0 = (undefined *)CONCAT71(local_b0._1_7_,1);
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(cVar1 + 0x60));
    local_f0 = CONCAT71(local_f0._1_7_,(undefined1)local_130);
    local_b7 = 1;
    FUN_100002f94(&DAT_1005525d8,&DAT_100424a48);
    FUN_100002f94(&DAT_1005525e8,&DAT_100424a50);
    FUN_1000fc8e0();
    FUN_1000fc958();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)&local_f0);
    (**(code **)(lVar14 + 8))(puVar13,lVar5);
  }
  local_178[1] = uStack_a8;
  *local_178 = (ulong)local_b0;
  local_178[3] = (ulong)local_98;
  local_178[2] = local_a0;
  local_178[5] = CONCAT62(uStack_86,CONCAT11(uStack_87,uStack_88));
  local_178[4] = (ulong)local_90;
  *(ulong *)((long)local_178 + 0x32) = CONCAT17(local_77,CONCAT16(local_78,uStack_7e));
  *(ulong *)((long)local_178 + 0x2a) = CONCAT17(uStack_7f,CONCAT16(uStack_80,uStack_86));
  return;
}

