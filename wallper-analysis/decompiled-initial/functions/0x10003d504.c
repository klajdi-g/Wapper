// rea decompile_all
// name: FUN_10003d504
// address: 0x10003d504
// body: available
// range: 0x10003d504-0x10003d6b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10003d6b4 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10003d504(void)

{
  undefined8 uVar1;
  ImageRenderer *pIVar2;
  ImageRenderer *this;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x6b0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x5a0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x590);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x580);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x568);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x560);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x558);
  puVar5 = *(undefined8 **)(unaff_x22 + 0x520);
  dVar6 = (double)NEON_ucvtf(*(undefined8 *)(unaff_x22 + 0x588));
  dVar10 = (double)NEON_ucvtf(*(undefined8 *)(unaff_x22 + 0x690));
  dVar15 = 0.0;
  if (*(char *)(unaff_x22 + 0x765) == '\0') {
    dVar15 = (1.0 / dVar6) * dVar10;
  }
  uVar9 = *(undefined8 *)(unaff_x22 + 0x578);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x570);
  _swift_release(uVar1);
  __objc_autoreleasePoolPush();
  uVar8 = *puVar5;
  *(undefined8 *)(unaff_x22 + 0x460) = puVar5[1];
  *(undefined8 *)(unaff_x22 + 0x458) = uVar8;
  uVar8 = puVar5[2];
  *(undefined8 *)(unaff_x22 + 0x4b0) = puVar5[3];
  *(undefined8 *)(unaff_x22 + 0x4a8) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x4f0) = puVar5[4];
  *(undefined8 *)(unaff_x22 + 0x4e8) = puVar5[5];
  *(undefined8 *)(unaff_x22 + 0x1d8) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x1d0) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x1e0) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x1f0) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x1e8) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x1f8) = uVar3;
  *(double *)(unaff_x22 + 0x200) = dVar15;
  *(undefined8 *)(unaff_x22 + 0x208) = 0x408e000000000000;
  *(undefined8 *)(unaff_x22 + 0x210) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x218) = uVar14;
  pIVar2 = (ImageRenderer *)&DAT_10054c078;
  FUN_100002f94(&DAT_10054c078,&DAT_10041d810);
  _swift_allocObject();
  FUN_100043d74((undefined8 *)(unaff_x22 + 0x458),unaff_x22 + 0x488);
  FUN_100043d74((undefined8 *)(unaff_x22 + 0x4a8),unaff_x22 + 0x498);
  FUN_1000087e4(unaff_x22 + 0x4f0,unaff_x22 + 0x4f8,&DAT_10054c050,&DAT_10041dca0);
  FUN_1000087e4(unaff_x22 + 0x4e8,unaff_x22 + 0x500,&DAT_10054c058,&DAT_10041d7d0);
  this = (ImageRenderer *)(unaff_x22 + 0x1d0);
  SwiftUI::ImageRenderer::_init(pIVar2);
  pIVar2 = this;
  SwiftUI::ImageRenderer::set_scale(this,(CGFloat)this);
  SwiftUI::ImageRenderer::_get_cgImage(pIVar2,this);
  *(ImageRenderer **)(unaff_x22 + 0x6b8) = this;
  _swift_release(pIVar2);
  __objc_autoreleasePoolPop(uVar1);
  _swift_task_switch(FUN_10003d6b8,0,0);
  return;
}

