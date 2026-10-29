// rea decompile_all
// name: thunk_FUN_100409e20
// address: 0x100404e78
// body: available
// range: 0x100404e78-0x100404e7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 thunk_FUN_100409e20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  bool bVar6;
  Date DVar7;
  undefined *puVar8;
  long lVar9;
  undefined7 extraout_var;
  _StringGuts _Var10;
  ulong uVar11;
  undefined7 extraout_var_00;
  _StringGuts _Var12;
  undefined *puVar13;
  undefined *puVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar15;
  long lVar16;
  long lVar17;
  code *pcVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined1 auStack_90 [4];
  uint uStack_8c;
  long lStack_88;
  code *pcStack_80;
  code *pcStack_78;
  undefined1 *puStack_70;
  long lStack_68;
  
  DVar7 = Foundation::Date::typeMetadataAccessor();
  lStack_68 = *(long *)(DVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lStack_68 + 0x40));
  puVar8 = &DAT_10054b950;
  puStack_70 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar8 + -8) + 0x40));
  lVar16 = (long)(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar19 = lVar16 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar21 = lVar19 - extraout_x12_00;
  puVar8 = &DAT_100552ef0;
  FUN_100002f94(&DAT_100552ef0,&DAT_100426920);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar8 + -8) + 0x40));
  lVar17 = lVar21 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar20 = lVar17 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar15 = lVar20 - extraout_x12_02;
  if ((((undefined *)*param_1 != (undefined *)*param_2) ||
      ((undefined *)param_1[1] != (undefined *)param_2[1])) &&
     (bVar6 = Swift::_stringCompareWithSmolCheck
                        ((undefined *)*param_1,(undefined *)param_1[1],
                         (_StringComparisonResult)(__int8)(undefined *)*param_2), !bVar6)) {
    return 0;
  }
  if (*(char *)(param_1 + 3) == '\x01') {
    if (*(char *)(param_2 + 3) != '\x01') {
      return 0;
    }
  }
  else {
    if (*(char *)(param_2 + 3) == '\x01') {
      return 0;
    }
    if (param_1[2] != param_2[2]) {
      return 0;
    }
  }
  _Var12.unknown = (undefined *)param_1[5];
  puVar14 = (undefined *)param_2[5];
  if (_Var12.unknown == (undefined *)0x0) {
    if (puVar14 != (undefined *)0x0) {
      return 0;
    }
  }
  else {
    if (puVar14 == (undefined *)0x0) {
      return 0;
    }
    if ((((undefined *)param_1[4] != (undefined *)param_2[4]) || (_Var12.unknown != puVar14)) &&
       (bVar6 = Swift::_stringCompareWithSmolCheck
                          ((undefined *)param_1[4],_Var12,
                           (_StringComparisonResult)(__int8)(undefined *)param_2[4]), !bVar6)) {
      return 0;
    }
  }
  _Var12.unknown = (undefined *)param_1[7];
  puVar14 = (undefined *)param_2[7];
  if (_Var12.unknown == (undefined *)0x0) {
    if (puVar14 != (undefined *)0x0) {
      return 0;
    }
  }
  else {
    if (puVar14 == (undefined *)0x0) {
      return 0;
    }
    if ((((undefined *)param_1[6] != (undefined *)param_2[6]) || (_Var12.unknown != puVar14)) &&
       (bVar6 = Swift::_stringCompareWithSmolCheck
                          ((undefined *)param_1[6],_Var12,
                           (_StringComparisonResult)(__int8)(undefined *)param_2[6]), !bVar6)) {
      return 0;
    }
  }
  if (*(char *)(param_1 + 8) == '\x0e') {
    if (*(char *)(param_2 + 8) != '\x0e') {
      return 0;
    }
  }
  else if (*(char *)(param_1 + 8) != *(char *)(param_2 + 8)) {
    return 0;
  }
  if (*(char *)(param_1 + 10) == '\x01') {
    if (*(char *)(param_2 + 10) != '\x01') {
      return 0;
    }
  }
  else {
    if (*(char *)(param_2 + 10) == '\x01') {
      return 0;
    }
    if (param_1[9] != param_2[9]) {
      return 0;
    }
  }
  if (*(char *)(param_1 + 0xc) == '\x01') {
    if (*(char *)(param_2 + 0xc) != '\x01') {
      return 0;
    }
  }
  else {
    if (*(char *)(param_2 + 0xc) == '\x01') {
      return 0;
    }
    if (param_1[0xb] != param_2[0xb]) {
      return 0;
    }
  }
  if (*(char *)(param_1 + 0xe) == '\x01') {
    if (*(char *)(param_2 + 0xe) != '\x01') {
      return 0;
    }
  }
  else {
    if (*(char *)(param_2 + 0xe) == '\x01') {
      return 0;
    }
    if (param_1[0xd] != param_2[0xd]) {
      return 0;
    }
  }
  _Var12.unknown = (undefined *)param_1[0x10];
  puVar14 = (undefined *)param_2[0x10];
  if (_Var12.unknown == (undefined *)0x0) {
    if (puVar14 != (undefined *)0x0) {
      return 0;
    }
  }
  else {
    if (puVar14 == (undefined *)0x0) {
      return 0;
    }
    if ((((undefined *)param_1[0xf] != (undefined *)param_2[0xf]) || (_Var12.unknown != puVar14)) &&
       (bVar6 = Swift::_stringCompareWithSmolCheck
                          ((undefined *)param_1[0xf],_Var12,
                           (_StringComparisonResult)(__int8)(undefined *)param_2[0xf]), !bVar6)) {
      return 0;
    }
  }
  _Var12.unknown = (undefined *)param_1[0x12];
  puVar14 = (undefined *)param_2[0x12];
  if (_Var12.unknown == (undefined *)0x0) {
    if (puVar14 != (undefined *)0x0) {
      return 0;
    }
  }
  else {
    if (puVar14 == (undefined *)0x0) {
      return 0;
    }
    if ((((undefined *)param_1[0x11] != (undefined *)param_2[0x11]) || (_Var12.unknown != puVar14))
       && (bVar6 = Swift::_stringCompareWithSmolCheck
                             ((undefined *)param_1[0x11],_Var12,
                              (_StringComparisonResult)(__int8)(undefined *)param_2[0x11]), !bVar6))
    {
      return 0;
    }
  }
  if (*(char *)(param_1 + 0x14) == '\x01') {
    if (*(char *)(param_2 + 0x14) != '\x01') {
      return 0;
    }
  }
  else {
    if (*(char *)(param_2 + 0x14) == '\x01') {
      return 0;
    }
    if ((double)param_1[0x13] != (double)param_2[0x13]) {
      return 0;
    }
  }
  if ((((undefined *)param_1[0x15] != (undefined *)param_2[0x15]) ||
      ((undefined *)param_1[0x16] != (undefined *)param_2[0x16])) &&
     (bVar6 = Swift::_stringCompareWithSmolCheck
                        ((undefined *)param_1[0x15],(undefined *)param_1[0x16],
                         (_StringComparisonResult)(__int8)(undefined *)param_2[0x15]), !bVar6)) {
    return 0;
  }
  _Var12.unknown = (undefined *)param_1[0x18];
  puVar14 = (undefined *)param_2[0x18];
  if (_Var12.unknown == (undefined *)0x0) {
    if (puVar14 != (undefined *)0x0) {
      return 0;
    }
  }
  else {
    if (puVar14 == (undefined *)0x0) {
      return 0;
    }
    if ((((undefined *)param_1[0x17] != (undefined *)param_2[0x17]) || (_Var12.unknown != puVar14))
       && (bVar6 = Swift::_stringCompareWithSmolCheck
                             ((undefined *)param_1[0x17],_Var12,
                              (_StringComparisonResult)(__int8)(undefined *)param_2[0x17]), !bVar6))
    {
      return 0;
    }
  }
  if (*(char *)(param_1 + 0x19) == '\x03') {
    if (*(char *)(param_2 + 0x19) != '\x03') {
      return 0;
    }
  }
  else if (*(char *)(param_1 + 0x19) != *(char *)(param_2 + 0x19)) {
    return 0;
  }
  lVar9 = 0;
  FUN_100407bd0();
  pcStack_80 = (code *)(long)*(int *)(lVar9 + 0x48);
  pcStack_78 = (code *)(long)*(int *)(puVar8 + 0x30);
  lStack_88 = lVar9;
  FUN_1000087e4((long)param_1 + (long)pcStack_80,lVar15,&DAT_10054b950,&DAT_10041d870);
  FUN_1000087e4((long)param_2 + (long)pcStack_80,pcStack_78 + lVar15,&DAT_10054b950,&DAT_10041d870);
  pcStack_80 = *(code **)(lStack_68 + 0x30);
  lVar9 = lVar15;
  (*pcStack_80)(lVar15,1,DVar7.unknown);
  if ((int)lVar9 == 1) {
    pcVar18 = pcStack_78 + lVar15;
    (*pcStack_80)(pcVar18,1,DVar7.unknown);
    if ((int)pcVar18 != 1) goto LAB_10040a360;
    FUN_10002a29c(lVar15,&DAT_10054b950,&DAT_10041d870);
  }
  else {
    FUN_1000087e4(lVar15,lVar21,&DAT_10054b950,&DAT_10041d870);
    pcVar18 = pcStack_78 + lVar15;
    (*pcStack_80)(pcVar18,1,DVar7.unknown);
    if ((int)pcVar18 == 1) {
      (**(code **)(lStack_68 + 8))(lVar21,DVar7.unknown);
      goto LAB_10040a360;
    }
    (**(code **)(lStack_68 + 0x20))(puStack_70,pcStack_78 + lVar15,DVar7.unknown);
    puVar14 = &DAT_100552ef8;
    FUN_1000036d0(&DAT_100552ef8,PTR_typeMetadataAccessor_100520b80,
                  PTR_Foundation__Foundation__Date_>Swift__Equatable_100520ba8);
    bVar6 = Swift::Equatable::___infix(lVar21,puStack_70,DVar7.unknown,puVar14);
    uStack_8c = (uint)CONCAT71(extraout_var,bVar6);
    pcStack_78 = *(code **)(lStack_68 + 8);
    (*pcStack_78)(puStack_70,DVar7.unknown);
    (*pcStack_78)(lVar21,DVar7.unknown);
    FUN_10002a29c(lVar15,&DAT_10054b950,&DAT_10041d870);
    if ((uStack_8c & 1) == 0) {
      return 0;
    }
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lStack_88 + 0x4c));
  _Var12.unknown = (undefined *)puVar1[1];
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lStack_88 + 0x4c));
  puVar14 = (undefined *)puVar2[1];
  if (_Var12.unknown == (undefined *)0x0) {
    if (puVar14 != (undefined *)0x0) {
      return 0;
    }
  }
  else {
    if (puVar14 == (undefined *)0x0) {
      return 0;
    }
    _Var10.unknown = (undefined *)*puVar1;
    puVar13 = (undefined *)*puVar2;
    if (((_Var10.unknown != puVar13) || (_Var12.unknown != puVar14)) &&
       (bVar6 = Swift::_stringCompareWithSmolCheck
                          (_Var10,_Var12,(_StringComparisonResult)(__int8)puVar13), !bVar6)) {
      return 0;
    }
  }
  uVar11 = *(ulong *)((long)param_1 + (long)*(int *)(lStack_88 + 0x50));
  lVar15 = *(long *)((long)param_2 + (long)*(int *)(lStack_88 + 0x50));
  if (uVar11 == 0) {
    if (lVar15 != 0) {
      return 0;
    }
  }
  else {
    if (lVar15 == 0) {
      return 0;
    }
    FUN_1001d998c();
    if ((uVar11 & 1) == 0) {
      return 0;
    }
  }
  iVar3 = *(int *)(lStack_88 + 0x54);
  iVar4 = *(int *)(puVar8 + 0x30);
  FUN_1000087e4((long)param_1 + (long)iVar3,lVar20,&DAT_10054b950,&DAT_10041d870);
  pcStack_78 = (code *)(long)iVar4;
  FUN_1000087e4((long)param_2 + (long)iVar3,(code *)(long)iVar4 + lVar20,&DAT_10054b950,
                &DAT_10041d870);
  lVar21 = lVar20;
  (*pcStack_80)(lVar20,1,DVar7.unknown);
  lVar15 = lVar20;
  if ((int)lVar21 == 1) {
    pcVar18 = pcStack_78 + lVar20;
    (*pcStack_80)(pcVar18,1,DVar7.unknown);
    if ((int)pcVar18 != 1) goto LAB_10040a360;
    FUN_10002a29c(lVar20,&DAT_10054b950,&DAT_10041d870);
  }
  else {
    FUN_1000087e4(lVar20,lVar19,&DAT_10054b950,&DAT_10041d870);
    pcVar18 = pcStack_78 + lVar20;
    (*pcStack_80)(pcVar18,1,DVar7.unknown);
    lVar21 = lStack_68;
    puVar5 = puStack_70;
    if ((int)pcVar18 == 1) {
      (**(code **)(lStack_68 + 8))(lVar19,DVar7.unknown);
      goto LAB_10040a360;
    }
    (**(code **)(lStack_68 + 0x20))(puStack_70,pcStack_78 + lVar20,DVar7.unknown);
    puVar14 = &DAT_100552ef8;
    FUN_1000036d0(&DAT_100552ef8,PTR_typeMetadataAccessor_100520b80,
                  PTR_Foundation__Foundation__Date_>Swift__Equatable_100520ba8);
    bVar6 = Swift::Equatable::___infix(lVar19,puVar5,DVar7.unknown,puVar14);
    pcStack_78 = (code *)CONCAT44(pcStack_78._4_4_,(int)CONCAT71(extraout_var_00,bVar6));
    pcVar18 = *(code **)(lVar21 + 8);
    (*pcVar18)(puVar5,DVar7.unknown);
    (*pcVar18)(lVar19,DVar7.unknown);
    FUN_10002a29c(lVar20,&DAT_10054b950,&DAT_10041d870);
    if (((ulong)pcStack_78 & 1) == 0) {
      return 0;
    }
  }
  iVar3 = *(int *)(lStack_88 + 0x58);
  lVar19 = (long)*(int *)(puVar8 + 0x30);
  FUN_1000087e4((long)param_1 + (long)iVar3,lVar17,&DAT_10054b950,&DAT_10041d870);
  FUN_1000087e4((long)param_2 + (long)iVar3,lVar17 + lVar19,&DAT_10054b950,&DAT_10041d870);
  lVar20 = lVar17;
  (*pcStack_80)(lVar17,1,DVar7.unknown);
  lVar15 = lVar17;
  if ((int)lVar20 == 1) {
    lVar19 = lVar17 + lVar19;
    (*pcStack_80)(lVar19,1,DVar7.unknown);
    if ((int)lVar19 == 1) {
      FUN_10002a29c(lVar17,&DAT_10054b950,&DAT_10041d870);
      return 1;
    }
  }
  else {
    FUN_1000087e4(lVar17,lVar16,&DAT_10054b950,&DAT_10041d870);
    lVar20 = lVar17 + lVar19;
    (*pcStack_80)(lVar20,1,DVar7.unknown);
    lVar21 = lStack_68;
    puVar5 = puStack_70;
    if ((int)lVar20 != 1) {
      (**(code **)(lStack_68 + 0x20))(puStack_70,lVar17 + lVar19,DVar7.unknown);
      puVar8 = &DAT_100552ef8;
      FUN_1000036d0(&DAT_100552ef8,PTR_typeMetadataAccessor_100520b80,
                    PTR_Foundation__Foundation__Date_>Swift__Equatable_100520ba8);
      bVar6 = Swift::Equatable::___infix(lVar16,puVar5,DVar7.unknown,puVar8);
      pcVar18 = *(code **)(lVar21 + 8);
      (*pcVar18)(puVar5,DVar7.unknown);
      (*pcVar18)(lVar16,DVar7.unknown);
      FUN_10002a29c(lVar17,&DAT_10054b950,&DAT_10041d870);
      if (!bVar6) {
        return 0;
      }
      return 1;
    }
    (**(code **)(lStack_68 + 8))(lVar16,DVar7.unknown);
  }
LAB_10040a360:
  FUN_10002a29c(lVar15,&DAT_100552ef0,&DAT_100426920);
  return 0;
}

