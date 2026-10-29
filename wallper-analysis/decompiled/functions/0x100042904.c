// rea decompile_all
// name: FUN_100042904
// address: 0x100042904
// body: available
// range: 0x100042904-0x100042b4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100042904(float param_1)

{
  undefined *puVar1;
  long unaff_x20;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  float fVar10;
  
  fVar4 = 3.3702806e+12;
  fVar10 = (float)(6.283185307179586 / *(double *)(unaff_x20 + 0x48));
  puVar1 = &DAT_10054be50;
  FUN_100002f94(&DAT_10054be50,&DAT_10041d910);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x18) = 0x20;
  *(undefined8 *)(puVar1 + 0x10) = 0x10;
  *(undefined8 *)(puVar1 + 0x20) = 0;
  fVar2 = param_1 * fVar10;
  ___sincosf_stret();
  fVar7 = fVar2 * 0.03 + 0.33;
  fVar6 = fVar4 * 0.03 + 0.67;
  *(ulong *)(puVar1 + 0x28) = (ulong)(uint)fVar7;
  *(ulong *)(puVar1 + 0x30) = (ulong)(uint)fVar6;
  fVar5 = 1.0;
  *(undefined8 *)(puVar1 + 0x38) = 0x3f800000;
  *(ulong *)(puVar1 + 0x40) = (ulong)(uint)fVar7 << 0x20;
  fVar3 = param_1 * 3.0 * fVar10;
  ___sincosf_stret();
  fVar10 = (param_1 + param_1) * fVar10;
  fVar7 = fVar5;
  ___sincosf_stret();
  *(ulong *)(puVar1 + 0x48) =
       CONCAT44(fVar3 * 0.03 + fVar7 * 0.08 + 0.33,fVar5 * 0.04 + fVar2 * 0.1 + 0.33);
  *(ulong *)(puVar1 + 0x50) =
       CONCAT44(fVar5 * 0.03 + fVar10 * 0.1 + 0.33,fVar3 * 0.04 + fVar4 * 0.09 + 0.67);
  fVar4 = fVar4 * 0.03 + 0.33;
  uVar8 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(puVar1 + 0x98) = uVar8;
  *(ulong *)(puVar1 + 0x58) = CONCAT44(fVar4,(int)uVar8);
  *(ulong *)(puVar1 + 0x60) = (ulong)(uint)fVar6 << 0x20;
  fVar10 = fVar2 * 0.03 + 0.67;
  *(ulong *)(puVar1 + 0x68) =
       CONCAT44(fVar7 * 0.03 + fVar2 * 0.1 + 0.67,fVar3 * 0.05 + fVar7 * 0.09 + 0.33);
  *(ulong *)(puVar1 + 0x70) =
       CONCAT44(fVar3 * 0.04 + fVar7 * 0.08 + 0.67,fVar5 * 0.04 + fVar2 * 0.11 + 0.67);
  uVar9 = (undefined4)((ulong)uVar8 >> 0x20);
  *(ulong *)(puVar1 + 0x78) = CONCAT44(fVar10,(int)uVar8);
  *(undefined8 *)(puVar1 + 0x80) = 0x3f80000000000000;
  *(ulong *)(puVar1 + 0x88) = CONCAT44(uVar9,fVar4);
  *(ulong *)(puVar1 + 0x90) = CONCAT44(uVar9,fVar10);
  return puVar1;
}

