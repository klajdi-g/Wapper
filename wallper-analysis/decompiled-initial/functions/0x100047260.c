// rea decompile_all
// name: FUN_100047260
// address: 0x100047260
// body: available
// range: 0x100047260-0x1000476af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100047260(double param_1,double param_2,double param_3)

{
  undefined *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar6 = SUB84(param_2,0);
  fVar9 = (float)param_1;
  puVar1 = &DAT_10054be50;
  FUN_100002f94(&DAT_10054be50,&DAT_10041d910);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x18) = 0x20;
  *(undefined8 *)(puVar1 + 0x10) = 0x10;
  *(undefined8 *)(puVar1 + 0x20) = 0;
  fVar2 = fVar9 * 0.3;
  ___sincosf_stret();
  *(ulong *)(puVar1 + 0x28) = (ulong)(uint)(fVar2 * 0.03 + 0.33);
  fVar2 = fVar9 * 0.25;
  _cosf();
  *(ulong *)(puVar1 + 0x30) = (ulong)(uint)(fVar2 * 0.03 + 0.67);
  *(undefined8 *)(puVar1 + 0x38) = 0x3f800000;
  fVar2 = fVar9 * 0.35;
  _sinf();
  *(ulong *)(puVar1 + 0x40) = (ulong)(uint)(fVar2 * 0.03 + 0.33) << 0x20;
  fVar2 = fVar9 * 0.47;
  _sinf();
  fVar3 = fVar9 * 0.91;
  _cosf();
  fVar4 = fVar9 * 0.53;
  _cosf();
  fVar5 = fVar9 * 1.1;
  _sinf();
  fVar10 = ((float)param_2 + -0.5) * 0.08;
  fVar11 = ((float)param_3 + -0.5) * 0.06;
  *(ulong *)(puVar1 + 0x48) =
       CONCAT44(fVar11 + fVar5 * 0.03 + fVar4 * 0.08 + 0.33,
                fVar10 + fVar3 * 0.04 + fVar2 * 0.1 + 0.33);
  fVar2 = fVar9 * 0.41;
  _cosf();
  fVar3 = fVar9 * 0.87;
  _sinf();
  fVar4 = fVar9 * 0.59;
  _sinf();
  fVar5 = fVar9 * 1.05;
  _cosf();
  uVar8 = NEON_fmov(0x3f800000,4);
  *(ulong *)(puVar1 + 0x50) =
       CONCAT44(fVar11 + fVar5 * 0.03 + fVar4 * 0.1 + 0.33,
                fVar10 + fVar3 * 0.04 + fVar2 * 0.09 + 0.67);
  *(ulong *)(puVar1 + 0x58) = CONCAT44(fVar6 * 0.03 + 0.33,(int)uVar8);
  fVar2 = fVar9 * 0.28;
  _cosf();
  *(ulong *)(puVar1 + 0x60) = (ulong)(uint)(fVar2 * 0.03 + 0.67) << 0x20;
  fVar2 = fVar9 * 0.43;
  _cosf();
  fVar3 = fVar9 * 0.95;
  _sinf();
  fVar4 = fVar9 * 0.37;
  _sinf();
  fVar5 = fVar9 * 0.89;
  _cosf();
  *(ulong *)(puVar1 + 0x68) =
       CONCAT44(fVar11 + fVar5 * 0.03 + fVar4 * 0.1 + 0.67,
                fVar10 + fVar3 * 0.05 + fVar2 * 0.09 + 0.33);
  fVar2 = fVar9 * 0.31;
  _sinf();
  fVar3 = fVar9 * 0.83;
  _cosf();
  fVar4 = fVar9 * 0.49;
  _cosf();
  fVar5 = fVar9 * 0.97;
  _sinf();
  *(ulong *)(puVar1 + 0x70) =
       CONCAT44(fVar11 + fVar5 * 0.04 + fVar4 * 0.08 + 0.67,
                fVar10 + fVar3 * 0.04 + fVar2 * 0.11 + 0.67);
  fVar2 = fVar9 * 0.32;
  _sinf();
  *(ulong *)(puVar1 + 0x78) = CONCAT44(fVar2 * 0.03 + 0.67,(int)uVar8);
  *(undefined8 *)(puVar1 + 0x80) = 0x3f80000000000000;
  fVar2 = fVar9 * 0.27;
  _cosf();
  uVar7 = (undefined4)((ulong)uVar8 >> 0x20);
  *(ulong *)(puVar1 + 0x88) = CONCAT44(uVar7,fVar2 * 0.03 + 0.33);
  fVar9 = fVar9 * 0.33;
  _sinf();
  *(ulong *)(puVar1 + 0x90) = CONCAT44(uVar7,fVar9 * 0.03 + 0.67);
  *(undefined8 *)(puVar1 + 0x98) = uVar8;
  return puVar1;
}

