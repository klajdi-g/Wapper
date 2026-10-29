// rea decompile_all
// name: FUN_1000a4a90
// address: 0x1000a4a90
// body: available
// range: 0x1000a4a90-0x1000a6d6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000e4ba8 */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1  [16]
FUN_1000a4a90(code ***param_1,CGFloat param_2,code ***param_3,code ***param_4,code ***param_5,
             code ***param_6,code ***param_7,code ***param_8,code ***param_9,
             DispatchWorkItemFlags param_10,undefined8 param_11,UnitPoint param_12,code ****param_13
             )

{
  double *pdVar1;
  ulong uVar2;
  undefined *puVar3;
  uint uVar4;
  code cVar5;
  code cVar6;
  int iVar7;
  code ****ppppcVar8;
  code ****ppppcVar9;
  code ****ppppcVar10;
  code ****ppppcVar11;
  code ****ppppcVar12;
  code ****ppppcVar13;
  code ****ppppcVar14;
  Storage storage;
  RoundedCornerStyle RVar15;
  Optional OVar16;
  bool bVar17;
  Design DVar18;
  code ****ppppcVar19;
  long lVar20;
  DispatchQoS qos;
  DispatchTime DVar21;
  undefined7 uVar59;
  code ****ppppcVar23;
  long lVar24;
  Date DVar25;
  Font FVar26;
  Text TVar27;
  _FlexFrameLayout _Var28;
  Calendar CVar30;
  Date DVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  Gradient gradient;
  _Inset _Var35;
  UnitPoint UVar36;
  ZStack<undefined> ZVar37;
  LocalizedStringKey LVar38;
  Image IVar39;
  ZStack ZVar40;
  ModifiedContent MVar41;
  ModifiedContent MVar42;
  Color CVar43;
  Color CVar44;
  code ****ppppcVar45;
  AppStorage AVar46;
  AnyShapeStyle AVar47;
  Text TVar48;
  Alignment AVar49;
  Animation AVar50;
  PointerStyle PVar51;
  undefined1 *puVar52;
  AnyView AVar53;
  Alignment AVar54;
  State SVar55;
  ObservedObject<undefined> OVar56;
  void *pvVar57;
  DispatchQoS DVar58;
  undefined1 uVar60;
  code *pcVar61;
  Locale table;
  undefined *puVar62;
  Text TVar63;
  undefined8 uVar64;
  code cVar65;
  long extraout_x8;
  long extraout_x8_00;
  code ****ppppcVar66;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  undefined *puVar67;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  code **ppcVar68;
  long extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  code ***pppcVar69;
  long extraout_x8_15;
  long extraout_x8_16;
  long extraout_x8_17;
  long extraout_x8_18;
  long extraout_x8_19;
  long extraout_x8_20;
  long extraout_x8_21;
  long extraout_x8_22;
  long extraout_x8_23;
  long extraout_x8_24;
  long extraout_x8_25;
  long extraout_x8_26;
  long extraout_x8_27;
  long extraout_x8_28;
  long extraout_x8_29;
  long extraout_x8_30;
  code ****ppppcVar70;
  char *pcVar71;
  long extraout_x8_31;
  long extraout_x8_32;
  long extraout_x8_33;
  long extraout_x8_34;
  long extraout_x8_35;
  long extraout_x8_36;
  long extraout_x8_37;
  long extraout_x8_38;
  long extraout_x8_39;
  long extraout_x8_40;
  long extraout_x8_41;
  long extraout_x8_42;
  long extraout_x8_43;
  long extraout_x8_44;
  long extraout_x8_45;
  code ****ppppcVar72;
  long extraout_x12;
  long extraout_x12_00;
  code ****ppppcVar73;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long extraout_x12_08;
  code *pcVar74;
  code ****ppppcVar75;
  ushort *size;
  code *pcVar76;
  code ***pppcVar77;
  undefined8 uVar78;
  LocalizationValue localized;
  long lVar79;
  code ****ppppcVar80;
  code ****ppppcVar81;
  code ***pppcVar82;
  code ***pppcVar83;
  long lVar84;
  code ****ppppcVar85;
  undefined8 *puVar86;
  code ***pppcVar87;
  ulong uVar88;
  code **ppcVar89;
  code ***pppcVar90;
  AppStorage AVar91;
  AppStorage AVar92;
  code ****ppppcVar93;
  code ***pppcVar94;
  ulong uVar95;
  code *pcVar96;
  DispatchTime deadline;
  undefined8 *puVar97;
  double dVar98;
  undefined8 uVar99;
  code ****in_register_00005008;
  double dVar100;
  double dVar101;
  code ***in_register_00005028;
  undefined8 uVar102;
  undefined8 uVar103;
  code ***in_register_00005048;
  undefined8 uVar104;
  undefined8 uVar105;
  code ***pppcVar106;
  code ***in_register_00005068;
  code ***pppcVar107;
  code ***pppcVar108;
  code ***in_register_00005088;
  code ***pppcVar109;
  code ***pppcVar110;
  code ***in_register_000050a8;
  code ***pppcVar111;
  code ***pppcVar112;
  code ***in_register_000050c8;
  code ***pppcVar113;
  code ***in_register_000050e8;
  code ***pppcVar114;
  code ***unaff_d8;
  code ***in_register_00005108;
  code ***unaff_d9;
  code ***in_register_00005128;
  code ***unaff_d10;
  code ***unaff_d11;
  code ***extraout_d16;
  code ***pppcVar115;
  code ***in_register_00005208;
  code ***pppcVar116;
  code ***extraout_d17;
  code ***pppcVar117;
  code ***in_register_00005228;
  code ***pppcVar118;
  code ***extraout_d18;
  code ***pppcVar119;
  code ***in_register_00005248;
  code ***pppcVar120;
  code ***extraout_d19;
  code ***pppcVar121;
  code ***in_register_00005268;
  code ***pppcVar122;
  code ***extraout_d20;
  code ***in_register_00005288;
  code ***extraout_d21;
  code ***pppcVar123;
  code ***in_register_000052a8;
  code ***pppcVar124;
  code ***extraout_d22;
  code ***in_register_000052c8;
  code ***extraout_d23;
  code ***in_register_000052e8;
  code ***extraout_d24;
  code ***in_register_00005308;
  code ***extraout_d25;
  code ***in_register_00005328;
  code ***extraout_d26;
  code ***in_register_00005348;
  code ***extraout_d27;
  code ***in_register_00005368;
  code ***extraout_d28;
  code ***in_register_00005388;
  code ***extraout_d29;
  code ***in_register_000053a8;
  code ***extraout_d30;
  code ***in_register_000053c8;
  code ***in_d31;
  code ***in_register_000053e8;
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  String stringLiteral;
  String stringLiteral_00;
  String SVar131;
  String stringLiteral_01;
  String SVar132;
  String stringLiteral_02;
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  String stringLiteral_03;
  undefined1 auVar141 [16];
  String systemName;
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auStack_4c0 [552];
  code ***pppcStack_298;
  code ***apppcStack_290 [6];
  code ***pppcStack_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  code ****local_228;
  undefined8 local_220;
  code ***local_218;
  code ****local_210;
  code ***local_208 [2];
  code ****local_1f8 [4];
  code ***local_1d8 [2];
  DispatchWorkItemFlags local_1c8;
  code ***local_1c0 [3];
  code ****local_1a8 [7];
  code ***local_170;
  code ****local_168 [2];
  code ***local_158;
  code ****local_150;
  code ***local_148;
  code ****local_140;
  code ***local_138;
  code ****local_130 [3];
  code ****local_118;
  code ****local_110;
  code ****local_108 [5];
  code ***local_e0 [2];
  undefined8 local_d0;
  code ***local_c8;
  code ****local_c0 [2];
  code ****local_b0;
  code *local_a0;
  code ****local_98;
  undefined8 local_90;
  code ****local_88;
  code ****local_80 [2];
  Storage storage_00;
  code ****ppppcVar22;
  LocalizationValue LVar29;
  
  ppppcVar19 = (code ****)0x0;
  local_88 = (code ****)param_1;
  FUN_1000b0fac();
  local_1f8[1] = ppppcVar19;
  (*(code *)PTR____chkstk_darwin_100521118)(ppppcVar19[-1][8]);
  ppppcVar66 = (code ****)((long)&pppcStack_260 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar67 = &DAT_10054fb58;
  local_250 = ppppcVar66;
  FUN_100002f94(&DAT_10054fb58,&DAT_100421478);
  local_208[0] = (code ***)puVar67;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar67 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  ppppcVar66 = (code ****)((long)ppppcVar66 - extraout_x8_00);
  pppcVar69 = (code ***)&DAT_10054fb60;
  local_1f8[0] = ppppcVar66;
  FUN_100002f94(&DAT_10054fb60,&DAT_100421480);
  local_110 = (code ****)pppcVar69;
  (*(code *)PTR____chkstk_darwin_100521118)((ulong)(pppcVar69[-1][8] + 0xf) & 0xfffffffffffffff0);
  ppppcVar66 = (code ****)((long)ppppcVar66 - extraout_x8_01);
  lVar20 = 0;
  local_1f8[2] = ppppcVar66;
  FUN_1000b0fc0();
  local_208[1] = (code ***)lVar20;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar20 + -8) + 0x40));
  ppppcVar66 = (code ****)((long)ppppcVar66 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  ppppcVar19 = (code ****)0x0;
  local_210 = ppppcVar66;
  FUN_1000b0fd4();
  local_1a8[0] = ppppcVar19;
  (*(code *)PTR____chkstk_darwin_100521118)(ppppcVar19[-1][8]);
  ppppcVar66 = (code ****)((long)ppppcVar66 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  ppppcVar19 = (code ****)&DAT_10054fb68;
  local_230 = (undefined *)ppppcVar66;
  FUN_100002f94(&DAT_10054fb68,&DAT_100421488);
  local_130[1] = ppppcVar19;
  (*(code *)PTR____chkstk_darwin_100521118)
            ((ulong)((long)ppppcVar19[-1][8] + 0xf) & 0xfffffffffffffff0);
  ppppcVar66 = (code ****)((long)ppppcVar66 - extraout_x8_04);
  puVar67 = &DAT_10054fb70;
  local_118 = ppppcVar66;
  FUN_100002f94(&DAT_10054fb70,&DAT_100421490);
  local_1c8.unknown = puVar67;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar67 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar67 = (undefined *)((long)ppppcVar66 - extraout_x8_05);
  ppppcVar19 = (code ****)&DAT_10054fb78;
  local_1c0[1] = (code ***)puVar67;
  FUN_100002f94(&DAT_10054fb78,&DAT_100421498);
  local_130[2] = ppppcVar19;
  (*(code *)PTR____chkstk_darwin_100521118)
            ((ulong)((long)ppppcVar19[-1][8] + 0xf) & 0xfffffffffffffff0);
  ppppcVar66 = (code ****)(puVar67 + -extraout_x8_06);
  pppcVar69 = (code ***)&DAT_10054fb80;
  local_1a8[2] = ppppcVar66;
  FUN_100002f94(&DAT_10054fb80,&DAT_1004214a0);
  local_90 = (code *)pppcVar69;
  (*(code *)PTR____chkstk_darwin_100521118)((ulong)(pppcVar69[-1][8] + 0xf) & 0xfffffffffffffff0);
  ppppcVar66 = (code ****)((long)ppppcVar66 - extraout_x8_07);
  lVar20 = 0;
  local_108[0] = ppppcVar66;
  FUN_1000b0fe8();
  local_1d8[1] = (code ***)lVar20;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar20 + -8) + 0x40));
  ppppcVar66 = (code ****)((long)ppppcVar66 - (extraout_x8_08 + 0xfU & 0xfffffffffffffff0));
  ppppcVar19 = (code ****)&DAT_10054fb88;
  local_238 = ppppcVar66;
  FUN_100002f94(&DAT_10054fb88,&DAT_1004214a8);
  local_1a8[5] = ppppcVar19;
  (*(code *)PTR____chkstk_darwin_100521118)
            ((ulong)((long)ppppcVar19[-1][8] + 0xf) & 0xfffffffffffffff0);
  ppppcVar66 = (code ****)((long)ppppcVar66 - extraout_x8_09);
  pppcVar69 = (code ***)&DAT_10054fb90;
  local_1a8[6] = ppppcVar66;
  FUN_100002f94(&DAT_10054fb90,&DAT_1004214b0);
  local_e0[0] = pppcVar69;
  (*(code *)PTR____chkstk_darwin_100521118)((ulong)(pppcVar69[-1][8] + 0xf) & 0xfffffffffffffff0);
  ppcVar68 = (code **)((long)ppppcVar66 - extraout_x8_10);
  ppppcVar19 = (code ****)0x0;
  local_170 = (code ***)ppcVar68;
  FUN_100095ec0();
  local_108[1] = ppppcVar19;
  (*(code *)PTR____chkstk_darwin_100521118)(ppppcVar19[-1][8]);
  ppppcVar66 = (code ****)((long)ppcVar68 - (extraout_x8_11 + 0xfU & 0xfffffffffffffff0));
  local_1a8[4] = ppppcVar66;
  (*(code *)PTR____chkstk_darwin_100521118)();
  ppppcVar66 = (code ****)((long)ppppcVar66 - extraout_x12);
  ppppcVar19 = (code ****)&DAT_10054c040;
  local_1a8[3] = ppppcVar66;
  FUN_100002f94(&DAT_10054c040,&DAT_100420500);
  local_150 = ppppcVar19;
  (*(code *)PTR____chkstk_darwin_100521118)(ppppcVar19[-1][8]);
  ppppcVar66 = (code ****)((long)ppppcVar66 - (extraout_x8_12 + 0xfU & 0xfffffffffffffff0));
  local_168[1] = ppppcVar66;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar20 = (long)ppppcVar66 - extraout_x12_00;
  ppppcVar19 = (code ****)0x0;
  local_158 = (code ***)lVar20;
  FUN_100097a30();
  local_168[0] = ppppcVar19;
  (*(code *)PTR____chkstk_darwin_100521118)(ppppcVar19[-1][8]);
  ppppcVar19 = (code ****)(lVar20 - (extraout_x8_13 + 0xfU & 0xfffffffffffffff0));
  pppcVar69 = (code ***)&DAT_10054fb98;
  local_1a8[1] = ppppcVar19;
  FUN_100002f94(&DAT_10054fb98,&DAT_1004214b8);
  local_108[2] = (code ****)pppcVar69;
  (*(code *)PTR____chkstk_darwin_100521118)((ulong)(pppcVar69[-1][8] + 0xf) & 0xfffffffffffffff0);
  pppcVar69 = (code ***)((long)ppppcVar19 - extraout_x8_14);
  puVar67 = &DAT_10054fba0;
  local_108[4] = (code ****)pppcVar69;
  FUN_100002f94(&DAT_10054fba0,&DAT_1004214c0);
  local_1d8[0] = (code ***)puVar67;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar67 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar67 = (undefined *)((long)pppcVar69 - extraout_x8_15);
  ppppcVar19 = (code ****)&DAT_10054fba8;
  local_1c0[0] = (code ***)puVar67;
  FUN_100002f94(&DAT_10054fba8,&DAT_1004214c8);
  local_108[3] = ppppcVar19;
  (*(code *)PTR____chkstk_darwin_100521118)
            ((ulong)((long)ppppcVar19[-1][8] + 0xfU) & 0xfffffffffffffff0);
  ppcVar68 = (code **)(puVar67 + -extraout_x8_16);
  ppppcVar19 = (code ****)&DAT_10054fbb0;
  local_1c0[2] = (code ***)ppcVar68;
  FUN_100002f94(&DAT_10054fbb0,&DAT_1004214d0);
  local_c0[1] = ppppcVar19;
  (*(code *)PTR____chkstk_darwin_100521118)((long)ppppcVar19[-1][8] + 0xfU & 0xfffffffffffffff0);
  pppcVar69 = (code ***)((long)ppcVar68 - extraout_x8_17);
  ppppcVar19 = (code ****)0x0;
  local_e0[1] = pppcVar69;
  FUN_100097b38();
  local_1f8[3] = ppppcVar19;
  (*(code *)PTR____chkstk_darwin_100521118)(ppppcVar19[-1][8]);
  ppppcVar19 = (code ****)((long)pppcVar69 - (extraout_x8_18 + 0xfU & 0xfffffffffffffff0));
  lVar20 = 0;
  local_240 = ppppcVar19;
  FUN_10009835c();
  local_220 = lVar20;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar20 + -8) + 0x40));
  ppppcVar19 = (code ****)((long)ppppcVar19 - (extraout_x8_19 + 0xfU & 0xfffffffffffffff0));
  deadline.unknown = &DAT_10054fbb8;
  local_248 = ppppcVar19;
  FUN_100002f94(&DAT_10054fbb8,&DAT_1004214d8);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(deadline.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  localized.unknown = (undefined *)((long)ppppcVar19 - extraout_x8_20);
  puVar67 = &DAT_10054fbc0;
  FUN_100002f94(&DAT_10054fbc0,&DAT_1004214e0);
  local_138 = (code ***)puVar67;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar67 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  ppppcVar19 = (code ****)0x0;
  local_218 = (code ***)((long)localized.unknown - extraout_x8_21);
  FUN_1000b0ffc();
  local_228 = ppppcVar19;
  (*(code *)PTR____chkstk_darwin_100521118)(ppppcVar19[-1][8]);
  ppppcVar66 = (code ****)
               (((long)localized.unknown - extraout_x8_21) -
               (extraout_x8_22 + 0xfU & 0xfffffffffffffff0));
  qos.unknown = (undefined *)0x0;
  local_258 = ppppcVar66;
  FUN_1000b1010();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(qos.unknown + -8) + 0x40));
  ppppcVar66 = (code ****)((long)ppppcVar66 - (extraout_x8_23 + 0xfU & 0xfffffffffffffff0));
  pppcVar69 = (code ***)&DAT_10054fbc8;
  FUN_100002f94(&DAT_10054fbc8,&DAT_1004214e8);
  (*(code *)PTR____chkstk_darwin_100521118)((ulong)(pppcVar69[-1][8] + 0xf) & 0xfffffffffffffff0);
  pppcVar77 = (code ***)&DAT_10054fbd0;
  local_98 = (code ****)((long)ppppcVar66 - extraout_x8_24);
  FUN_100002f94(&DAT_10054fbd0,&DAT_1004214f0);
  local_d0 = pppcVar77;
  (*(code *)PTR____chkstk_darwin_100521118)((ulong)(pppcVar77[-1][8] + 0xf) & 0xfffffffffffffff0);
  ppppcVar19 = (code ****)(((long)ppppcVar66 - extraout_x8_24) - extraout_x8_25);
  puVar67 = &DAT_10054fbd8;
  local_c0[0] = ppppcVar19;
  FUN_100002f94(&DAT_10054fbd8,&DAT_1004214f8);
  local_148 = (code ***)puVar67;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar67 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  AVar92.unknown = (undefined *)((long)ppppcVar19 - extraout_x8_26);
  size = (ushort *)&DAT_10054fbe0;
  FUN_100002f94(&DAT_10054fbe0,&DAT_100421500);
  (*(code *)PTR____chkstk_darwin_100521118)
            ((ulong)((long)(*(code ****)((long)size + -8))[8] + 0xf) & 0xfffffffffffffff0);
  pcVar74 = (code *)((long)AVar92.unknown - extraout_x8_27);
  pppcVar77 = (code ***)&DAT_10054fbe8;
  FUN_100002f94(&DAT_10054fbe8,&DAT_100421508);
  local_140 = (code ****)pppcVar77;
  (*(code *)PTR____chkstk_darwin_100521118)((ulong)(pppcVar77[-1][8] + 0xf) & 0xfffffffffffffff0);
  ppppcVar81 = (code ****)((long)pcVar74 - extraout_x8_28);
  SVar132.bridgeObject = ppppcVar81;
  SVar132.str = qos.unknown;
  pppcVar77 = (code ***)&DAT_10054fbf0;
  FUN_100002f94(&DAT_10054fbf0,&DAT_100421510);
  local_c8 = pppcVar77;
  (*(code *)PTR____chkstk_darwin_100521118)((ulong)(pppcVar77[-1][8] + 0xf) & 0xfffffffffffffff0);
  ppppcVar19 = (code ****)&DAT_10054fbf8;
  table.unknown = &DAT_100421518;
  local_130[0] = (code ****)((long)ppppcVar81 - extraout_x8_29);
  FUN_100002f94();
  local_a0 = (code *)ppppcVar19;
  (*(code *)PTR____chkstk_darwin_100521118)
            ((ulong)((long)ppppcVar19[-1][8] + 0xf) & 0xfffffffffffffff0);
  ppppcVar70 = (code ****)((long)((long)ppppcVar81 - extraout_x8_29) - extraout_x8_30);
  DVar21.unknown = (undefined *)0x0;
  local_b0 = ppppcVar70;
  FUN_1000aff7c();
  ppppcVar13 = (code ****)local_a0;
  ppppcVar12 = local_108[1];
  ppppcVar11 = local_1a8[4];
  ppppcVar10 = local_1a8[3];
  ppppcVar9 = local_210;
  ppppcVar23 = (code ****)local_230;
  ppppcVar93 = local_238;
  ppppcVar8 = local_240;
  ppppcVar85 = local_248;
  ppppcVar45 = local_250;
  ppppcVar80 = local_258;
  ppppcVar19 = (code ****)
               PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
  SVar131.bridgeObject = deadline.unknown;
  SVar131.str = DVar21.unknown;
  cVar65 = *(code *)((long)param_10.unknown + (long)*(int *)(DVar21.unknown + 0x14));
  pcVar71 = (char *)(ulong)(byte)cVar65;
  if ((*(code ****)((long)param_10.unknown + 0x30))[2] == (code **)0x0) {
    ppppcVar72 = (code ****)(ulong)(byte)*(code *)((long)param_10.unknown + 0x40);
  }
  else {
    ppppcVar72 = (code ****)0x1;
  }
  ppppcVar73 = (code ****)(ulong)(&switchD_1000a5400::switchdataD_100420f70)[(long)pcVar71];
  uVar59 = (undefined7)((ulong)DVar21.unknown >> 8);
  storage.value = (__int8)AVar92.unknown;
  storage_00.value = (__int8)pcVar74;
  ppppcVar22 = (code ****)CONCAT71(uVar59,storage_00.value);
  ppppcVar14 = ppppcVar70;
  AVar46.unknown = DVar21.unknown;
  ppppcVar75 = (code ****)pcVar74;
  DVar58.unknown = qos.unknown;
  AVar91.unknown = DVar21.unknown;
  pppcVar77 = extraout_d16;
  pppcVar94 = extraout_d17;
  pppcVar90 = extraout_d18;
  pppcVar83 = extraout_d19;
  pppcVar82 = extraout_d20;
  pppcVar87 = extraout_d21;
  pppcVar106 = extraout_d22;
  pppcVar107 = extraout_d23;
  pppcVar108 = extraout_d24;
  pppcVar109 = extraout_d25;
  pppcVar110 = extraout_d26;
  pppcVar111 = extraout_d27;
  pppcVar112 = extraout_d28;
  pppcVar113 = extraout_d29;
  pppcVar114 = extraout_d30;
  switch(cVar65) {
  default:
  case (code)0x30:
  case (code)0x34:
  case (code)0x54:
  case (code)0x58:
  case (code)0x63:
  case (code)0x83:
  case (code)0x8b:
  case (code)0xab:
    goto switchD_1000a5400_caseD_48;
  case (code)0x2:
    if (((ulong)ppppcVar72 & 1) != 0) {
      FUN_100029504(param_10.unknown,local_258,FUN_10009e280);
      pppcVar77 = *(code ****)((long)param_10.unknown + (long)*(int *)(DVar21.unknown + 0x18));
      param_2.unknown =
           *(undefined **)
            ((code *)((long)param_10.unknown + (long)*(int *)(DVar21.unknown + 0x18)) + 8);
      if ((double)pppcVar77 <= (double)param_2.unknown) {
        param_2.unknown = (undefined *)pppcVar77;
      }
      param_3 = (code ***)0x4059000000000000;
      ppppcVar75 = ppppcVar80;
      goto switchD_1000a5400_caseD_45;
    }
  case (code)0x1:
    FUN_100029504(param_10.unknown,ppppcVar66,FUN_10009e280);
    dVar98 = *(double *)((long)param_10.unknown + (long)*(int *)(DVar21.unknown + 0x18));
    dVar101 = ((double *)((long)param_10.unknown + (long)*(int *)(DVar21.unknown + 0x18)))[1];
    if (dVar98 <= dVar101) {
      dVar101 = dVar98;
    }
    *(double *)((long)ppppcVar66 + (long)*(int *)(qos.unknown + 0x14)) = dVar101 / 100.0;
    FUN_100029504(ppppcVar66,pcVar74,FUN_1000b1010);
    _swift_storeEnumTagMultiPayload(pcVar74,size,1);
    DVar21.unknown = (undefined *)0x10054f000;
    param_10.unknown = FUN_1000b1010;
    goto switchD_1000a5400_caseD_e5;
  case (code)0x3:
    FUN_100029504(param_10.unknown,local_248,FUN_10009e280);
    dVar98 = *(double *)((long)param_10.unknown + (long)*(int *)(DVar21.unknown + 0x18));
    dVar101 = ((double *)((long)param_10.unknown + (long)*(int *)(DVar21.unknown + 0x18)))[1];
    if (dVar98 <= dVar101) {
      dVar101 = dVar98;
    }
    cVar65 = *(code *)((long)param_10.unknown + (long)*(int *)(DVar21.unknown + 0x1c));
    cVar5 = ((code *)((long)param_10.unknown + (long)*(int *)(DVar21.unknown + 0x1c)))[1];
    cVar6 = *(code *)((long)param_10.unknown + (long)*(int *)(DVar21.unknown + 0x20));
    *(double *)((long)ppppcVar85 + (long)*(int *)(local_220 + 0x14)) = dVar101 / 100.0;
    pcVar74 = (code *)((long)ppppcVar85 + (long)*(int *)(local_220 + 0x18));
    *pcVar74 = cVar65;
    pcVar74[1] = cVar5;
    *(code *)((long)ppppcVar85 + (long)*(int *)(local_220 + 0x1c)) = cVar6;
    pcVar74 = FUN_10009835c;
    FUN_100029504(ppppcVar85,localized.unknown,FUN_10009835c);
    _swift_storeEnumTagMultiPayload(localized.unknown,deadline.unknown,1);
    FUN_1000036d0(&DAT_10054fc58,FUN_1000b0ffc,&TargetProtocolConformanceDescriptor_100421610);
    FUN_1000036d0(&DAT_10054fc60,FUN_10009835c,&TargetProtocolConformanceDescriptor_100420718);
    ppppcVar23 = ppppcVar85;
    break;
  case (code)0x4:
    FUN_100029504(param_10.unknown,local_240,FUN_10009e280);
    pcVar71 = (char *)(long)*(int *)(DVar21.unknown + 0x18);
    ppppcVar72 = (code ****)(long)*(int *)(DVar21.unknown + 0x1c);
    AVar92.unknown = (undefined *)ppppcVar8;
  case (code)0x3a:
    dVar98 = *(double *)((long)param_10.unknown + (long)pcVar71);
    dVar101 = ((double *)((long)param_10.unknown + (long)pcVar71))[1];
    if (dVar98 <= dVar101) {
      dVar101 = dVar98;
    }
    param_2.unknown = (undefined *)(dVar101 / 100.0);
    pcVar71 = (char *)((long)param_10.unknown + (long)ppppcVar72);
    ppppcVar72 = (code ****)(ulong)(byte)*pcVar71;
    goto switchD_1000a5400_caseD_5e;
  case (code)0x5:
    local_108[1] = (code ****)((long)local_1a8[1] + (long)*(int *)(local_168[0] + 7));
    pcVar74 = (code *)local_1a8[1];
    AVar92.unknown = (undefined *)local_168[0];
  case (code)0xf9:
    FUN_100029504(param_10.unknown);
    puVar67 = PTR___type_metadata_for_Swift_Bool_100523b70;
    dVar98 = *(double *)((long)param_10.unknown + (long)*(int *)(DVar21.unknown + 0x18));
    dVar101 = ((double *)((long)param_10.unknown + (long)*(int *)(DVar21.unknown + 0x18)))[1];
    if (dVar98 <= dVar101) {
      dVar101 = dVar98;
    }
    local_110 = (code ****)
                CONCAT44(local_110._4_4_,
                         (uint)(byte)*(code *)((long)param_10.unknown +
                                              (long)*(int *)(DVar21.unknown + 0x1c)));
    local_108[0] = (code ****)
                   CONCAT44(local_108[0]._4_4_,
                            (uint)(byte)((code *)((long)param_10.unknown +
                                                 (long)*(int *)(DVar21.unknown + 0x1c)))[1]);
    local_118 = (code ****)
                CONCAT44(local_118._4_4_,
                         (uint)(byte)*(code *)((long)param_10.unknown +
                                              (long)*(int *)(DVar21.unknown + 0x20)));
    local_130[2] = (code ****)(long)*(int *)((long)AVar92.unknown + 0x1c);
    local_80[0] = (code ****)((ulong)local_80[0] & 0xffffffffffffff00);
    SwiftUI::State::init
              ((code *)((long)pcVar74 + (long)*(int *)((long)AVar92.unknown + 0x24)),ppppcVar22,
               PTR___type_metadata_for_Swift_Bool_100523b70);
    puVar62 = PTR___type_metadata_for_Swift_Double_100523b90;
    local_80[0] = (code ****)0x0;
    SwiftUI::State::init
              ((code *)((long)pcVar74 + (long)*(int *)((long)AVar92.unknown + 0x28)),ppppcVar22,
               PTR___type_metadata_for_Swift_Double_100523b90);
    local_80[0] = (code ****)0xc056800000000000;
    SwiftUI::State::init
              ((code *)((long)pcVar74 + (long)*(int *)((long)AVar92.unknown + 0x2c)),ppppcVar22,
               puVar62);
    local_80[0] = (code ****)((ulong)local_80[0] & 0xffffffffffffff00);
    SwiftUI::State::init
              ((code *)((long)pcVar74 + (long)*(int *)((long)AVar92.unknown + 0x30)),ppppcVar22,
               puVar67);
    pcVar76 = (code *)((long)pcVar74 + (long)*(int *)((long)AVar92.unknown + 0x34));
    lVar20 = 0;
    FUN_10009e280();
    pppcVar77 = local_158;
    pcVar96 = *(code **)(*(long *)(lVar20 + -8) + 0x38);
    (*pcVar96)(local_158,1,1,lVar20);
    FUN_1000087e4(pppcVar77,local_168[1],&DAT_10054c040,&DAT_100420500);
    ppppcVar66 = local_108[1];
    SwiftUI::State::init(pcVar76,lVar20,local_150);
    FUN_10002a29c(pppcVar77,&DAT_10054c040,&DAT_100420500);
    FUN_100029504(ppppcVar66,pcVar74,FUN_10009e280);
    *(double *)((long)pcVar74 + (long)*(int *)((long)AVar92.unknown + 0x14)) = dVar101 / 100.0;
    ppppcVar19 = local_110;
    iVar7 = *(int *)((long)AVar92.unknown + 0x18);
    cVar65 = SUB81(local_110,0);
    *(code *)((long)pcVar74 + (long)iVar7) = cVar65;
    ((code *)((long)pcVar74 + (long)iVar7))[1] = SUB81(local_108[0],0);
    *(code *)((long)pcVar74 + (long)local_130[2]) = SUB81(local_118,0);
    iVar7 = *(int *)((long)AVar92.unknown + 0x20);
    *(code *)((long)pcVar74 + (long)iVar7) = (code)((byte)cVar65 ^ 1);
    *(undefined8 *)((code *)((long)pcVar74 + (long)iVar7) + 8) = 0;
    FUN_10002a29c(pcVar76,&DAT_10054efb0,&DAT_100421520);
    bVar17 = ((ulong)ppppcVar19 & 1) != 0;
    if (!bVar17) {
      FUN_100029504(ppppcVar66,pcVar76,FUN_10009e280);
    }
    (*pcVar96)(pcVar76,bVar17,1,lVar20);
    puVar67 = &DAT_10054efb0;
    FUN_100002f94(&DAT_10054efb0,&DAT_100421520);
    *(undefined8 *)(pcVar76 + *(int *)(puVar67 + 0x1c)) = 0;
    puVar67 = &DAT_10054efb8;
    FUN_100002f94(&DAT_10054efb8,&DAT_100420510);
    ppppcVar23 = local_1a8[1];
    pppcVar94 = local_1c0[0];
    *(undefined8 *)((long)ppppcVar66 + (long)*(int *)(puVar67 + 0x1c)) = 0;
    pcVar74 = FUN_100097a30;
    FUN_100029504(local_1a8[1],local_1c0[0],FUN_100097a30);
    _swift_storeEnumTagMultiPayload(pppcVar94,local_1d8[0],1);
    FUN_1000036d0(&DAT_10054fc78,FUN_100097b38,&TargetProtocolConformanceDescriptor_1004206c8);
    FUN_1000036d0(&DAT_10054fc80,FUN_100097a30,&TargetProtocolConformanceDescriptor_100420678);
    pppcVar77 = local_1c0[2];
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)pppcVar94);
    ppppcVar19 = local_108[4];
    puVar67 = &DAT_10054fba8;
    puVar62 = &DAT_1004214c8;
    FUN_1000087e4(pppcVar77,local_108[4],&DAT_10054fba8,&DAT_1004214c8);
    uVar64 = 0;
LAB_1000a6a48:
    _swift_storeEnumTagMultiPayload(ppppcVar19,local_108[2],uVar64);
    FUN_1000b1414();
    FUN_1000b14bc();
    pppcVar94 = local_e0[1];
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)ppppcVar19);
    FUN_10002a29c(pppcVar77,puVar67,puVar62);
    ppppcVar19 = local_c0[0];
    FUN_1000087e4(pppcVar94,local_c0[0],&DAT_10054fbb0,&DAT_1004214d0);
    _swift_storeEnumTagMultiPayload(ppppcVar19,local_d0,1);
    FUN_1000b11ec();
    FUN_1000b139c();
    ppppcVar66 = local_b0;
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)ppppcVar19);
    FUN_10002a29c(pppcVar94,&DAT_10054fbb0,&DAT_1004214d0);
    ppppcVar19 = local_98;
    FUN_1000087e4(ppppcVar66,local_98,&DAT_10054fbf8,&DAT_100421518);
    _swift_storeEnumTagMultiPayload(ppppcVar19,pppcVar69,0);
    FUN_1000b1174();
    FUN_1000b1544();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)ppppcVar19);
    FUN_10002a29c(ppppcVar66,&DAT_10054fbf8,&DAT_100421518);
    goto LAB_1000a6d44;
  case (code)0x6:
    local_108[0] = (code ****)((long)local_1a8[3] + (long)*(int *)((long)local_108[1] + 0x44));
    FUN_100029504(param_10.unknown,local_108[0],FUN_10009e280);
    puVar67 = PTR___type_metadata_for_Swift_Bool_100523b70;
    dVar98 = *(double *)((long)param_10.unknown + (long)*(int *)(DVar21.unknown + 0x18));
    dVar101 = ((double *)((long)param_10.unknown + (long)*(int *)(DVar21.unknown + 0x18)))[1];
    if (dVar98 <= dVar101) {
      dVar101 = dVar98;
    }
    cVar65 = *(code *)((long)param_10.unknown + (long)*(int *)(DVar21.unknown + 0x1c));
    local_110 = (code ****)
                CONCAT44(local_110._4_4_,
                         (uint)(byte)((code *)((long)param_10.unknown +
                                              (long)*(int *)(DVar21.unknown + 0x1c)))[1]);
    local_118 = (code ****)
                CONCAT44(local_118._4_4_,
                         (uint)(byte)*(code *)((long)param_10.unknown +
                                              (long)*(int *)(DVar21.unknown + 0x20)));
    local_130[2] = (code ****)(long)*(int *)((long)ppppcVar12 + 0x1c);
    local_130[1] = (code ****)(long)*(int *)(ppppcVar12 + 4);
    local_80[0] = (code ****)((ulong)local_80[0] & 0xffffffffffffff00);
    SwiftUI::State::init
              ((code *)((long)ppppcVar10 + (long)*(int *)(ppppcVar12 + 6)),ppppcVar22,
               PTR___type_metadata_for_Swift_Bool_100523b70);
    puVar62 = PTR___type_metadata_for_Swift_Double_100523b90;
    local_80[0] = (code ****)0x0;
    SwiftUI::State::init
              ((code *)((long)ppppcVar10 + (long)*(int *)((long)ppppcVar12 + 0x34)),ppppcVar22,
               PTR___type_metadata_for_Swift_Double_100523b90);
    local_80[0] = (code ****)0xc056800000000000;
    SwiftUI::State::init
              ((code *)((long)ppppcVar10 + (long)*(int *)(ppppcVar12 + 7)),ppppcVar22,puVar62);
    local_80[0] = (code ****)((ulong)local_80[0] & 0xffffffffffffff00);
    SwiftUI::State::init
              ((code *)((long)ppppcVar10 + (long)*(int *)((long)ppppcVar12 + 0x3c)),ppppcVar22,
               puVar67);
    pcVar74 = (code *)((long)ppppcVar10 + (long)*(int *)(ppppcVar12 + 8));
    lVar20 = 0;
    FUN_10009e280();
    pppcVar77 = local_158;
    pcVar96 = *(code **)(*(long *)(lVar20 + -8) + 0x38);
    (*pcVar96)(local_158,1,1,lVar20);
    FUN_1000087e4(pppcVar77,local_168[1],&DAT_10054c040,&DAT_100420500);
    ppppcVar19 = local_108[0];
    SwiftUI::State::init(pcVar74,lVar20,local_150);
    FUN_10002a29c(pppcVar77,&DAT_10054c040,&DAT_100420500);
    FUN_100029504(ppppcVar19,ppppcVar10,FUN_10009e280);
    *(double *)((long)ppppcVar10 + (long)*(int *)((long)ppppcVar12 + 0x14)) = dVar101 / 100.0;
    iVar7 = *(int *)(ppppcVar12 + 3);
    *(code *)((long)ppppcVar10 + (long)iVar7) = cVar65;
    ((code *)((long)ppppcVar10 + (long)iVar7))[1] = SUB81(local_110,0);
    *(code *)((long)ppppcVar10 + (long)local_130[2]) = (code)0x0;
    *(code *)((long)ppppcVar10 + (long)local_130[1]) = SUB81(local_118,0);
    pcVar76 = (code *)((long)ppppcVar10 + (long)*(int *)((long)ppppcVar12 + 0x24));
    *pcVar76 = (code)((byte)cVar65 ^ 1);
    *(undefined8 *)(pcVar76 + 8) = 0;
    iVar7 = *(int *)(ppppcVar12 + 5);
    *(code *)((long)ppppcVar10 + (long)iVar7) = cVar65;
    *(undefined8 *)((code *)((long)ppppcVar10 + (long)iVar7) + 8) = 0;
    pcVar76 = (code *)((long)ppppcVar10 + (long)*(int *)((long)ppppcVar12 + 0x2c));
    *pcVar76 = cVar65;
    *(undefined8 *)(pcVar76 + 8) = 0;
    FUN_10002a29c(pcVar74,&DAT_10054efb0,&DAT_100421520);
    bVar17 = ((byte)cVar65 & 1) != 0;
    if (!bVar17) {
      FUN_100029504(ppppcVar19,pcVar74,FUN_10009e280);
    }
    (*pcVar96)(pcVar74,bVar17,1,lVar20);
    puVar67 = &DAT_10054efb0;
    FUN_100002f94(&DAT_10054efb0,&DAT_100421520);
    *(undefined8 *)(pcVar74 + *(int *)(puVar67 + 0x1c)) = 0;
    puVar67 = &DAT_10054efb8;
    FUN_100002f94(&DAT_10054efb8,&DAT_100420510);
    ppppcVar66 = local_1a8[6];
    ppppcVar23 = local_1a8[3];
    *(undefined8 *)((long)ppppcVar19 + (long)*(int *)(puVar67 + 0x1c)) = 0;
    FUN_100029504(local_1a8[3],local_1a8[6],FUN_100095ec0);
    uVar64 = 0;
    goto LAB_1000a69d4;
  case (code)0x7:
    local_108[0] = (code ****)((long)local_1a8[4] + (long)*(int *)((long)local_108[1] + 0x44));
    FUN_100029504(param_10.unknown,local_108[0],FUN_10009e280);
    puVar67 = PTR___type_metadata_for_Swift_Bool_100523b70;
    dVar98 = *(double *)((long)param_10.unknown + (long)*(int *)(DVar21.unknown + 0x18));
    dVar101 = ((double *)((long)param_10.unknown + (long)*(int *)(DVar21.unknown + 0x18)))[1];
    if (dVar98 <= dVar101) {
      dVar101 = dVar98;
    }
    cVar65 = *(code *)((long)param_10.unknown + (long)*(int *)(DVar21.unknown + 0x1c));
    local_110 = (code ****)
                CONCAT44(local_110._4_4_,
                         (uint)(byte)((code *)((long)param_10.unknown +
                                              (long)*(int *)(DVar21.unknown + 0x1c)))[1]);
    local_118 = (code ****)
                CONCAT44(local_118._4_4_,
                         (uint)(byte)*(code *)((long)param_10.unknown +
                                              (long)*(int *)(DVar21.unknown + 0x20)));
    local_130[2] = (code ****)(long)*(int *)((long)ppppcVar12 + 0x1c);
    local_130[1] = (code ****)(long)*(int *)(ppppcVar12 + 4);
    local_80[0] = (code ****)((ulong)local_80[0] & 0xffffffffffffff00);
    SwiftUI::State::init
              ((code *)((long)ppppcVar11 + (long)*(int *)(ppppcVar12 + 6)),ppppcVar22,
               PTR___type_metadata_for_Swift_Bool_100523b70);
    puVar62 = PTR___type_metadata_for_Swift_Double_100523b90;
    local_80[0] = (code ****)0x0;
    SwiftUI::State::init
              ((code *)((long)ppppcVar11 + (long)*(int *)((long)ppppcVar12 + 0x34)),ppppcVar22,
               PTR___type_metadata_for_Swift_Double_100523b90);
    local_80[0] = (code ****)0xc056800000000000;
    SwiftUI::State::init
              ((code *)((long)ppppcVar11 + (long)*(int *)(ppppcVar12 + 7)),ppppcVar22,puVar62);
    local_80[0] = (code ****)((ulong)local_80[0] & 0xffffffffffffff00);
    SwiftUI::State::init
              ((code *)((long)ppppcVar11 + (long)*(int *)((long)ppppcVar12 + 0x3c)),ppppcVar22,
               puVar67);
    pcVar74 = (code *)((long)ppppcVar11 + (long)*(int *)(ppppcVar12 + 8));
    lVar20 = 0;
    FUN_10009e280();
    pppcVar77 = local_158;
    local_130[0] = *(code *****)(*(long *)(lVar20 + -8) + 0x38);
    (*(code *)local_130[0])(local_158,1,1,lVar20);
    FUN_1000087e4(pppcVar77,local_168[1],&DAT_10054c040,&DAT_100420500);
    SwiftUI::State::init(pcVar74,lVar20,local_150);
    ppppcVar19 = local_108[0];
    FUN_10002a29c(pppcVar77,&DAT_10054c040,&DAT_100420500);
    FUN_100029504(ppppcVar19,ppppcVar11,FUN_10009e280);
    *(double *)((long)ppppcVar11 + (long)*(int *)((long)ppppcVar12 + 0x14)) = dVar101 / 100.0;
    iVar7 = *(int *)(ppppcVar12 + 3);
    *(code *)((long)ppppcVar11 + (long)iVar7) = cVar65;
    ((code *)((long)ppppcVar11 + (long)iVar7))[1] = SUB81(local_110,0);
    *(code *)((long)ppppcVar11 + (long)local_130[2]) = (code)0x1;
    *(code *)((long)ppppcVar11 + (long)local_130[1]) = SUB81(local_118,0);
    pcVar76 = (code *)((long)ppppcVar11 + (long)*(int *)((long)ppppcVar12 + 0x24));
    *pcVar76 = (code)((byte)cVar65 ^ 1);
    *(undefined8 *)(pcVar76 + 8) = 0;
    iVar7 = *(int *)(ppppcVar12 + 5);
    *(code *)((long)ppppcVar11 + (long)iVar7) = cVar65;
    *(undefined8 *)((code *)((long)ppppcVar11 + (long)iVar7) + 8) = 0;
    pcVar76 = (code *)((long)ppppcVar11 + (long)*(int *)((long)ppppcVar12 + 0x2c));
    *pcVar76 = cVar65;
    *(undefined8 *)(pcVar76 + 8) = 0;
    FUN_10002a29c(pcVar74,&DAT_10054efb0,&DAT_100421520);
    bVar17 = ((byte)cVar65 & 1) != 0;
    if (!bVar17) {
      FUN_100029504(ppppcVar19,pcVar74,FUN_10009e280);
    }
    (*(code *)local_130[0])(pcVar74,bVar17,1,lVar20);
    puVar67 = &DAT_10054efb0;
    FUN_100002f94(&DAT_10054efb0,&DAT_100421520);
    *(undefined8 *)(pcVar74 + *(int *)(puVar67 + 0x1c)) = 0;
    puVar67 = &DAT_10054efb8;
    FUN_100002f94(&DAT_10054efb8,&DAT_100420510);
    ppppcVar66 = local_1a8[6];
    ppppcVar23 = local_1a8[4];
    *(undefined8 *)((long)ppppcVar19 + (long)*(int *)(puVar67 + 0x1c)) = 0;
    FUN_100029504(local_1a8[4],local_1a8[6],FUN_100095ec0);
    uVar64 = 1;
LAB_1000a69d4:
    pcVar74 = FUN_100095ec0;
    _swift_storeEnumTagMultiPayload(ppppcVar66,local_1a8[5],uVar64);
    FUN_1000036d0(&DAT_10054fc90,FUN_100095ec0,&TargetProtocolConformanceDescriptor_100420628);
    pppcVar77 = local_170;
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)ppppcVar66);
    ppppcVar19 = local_108[4];
    puVar67 = &DAT_10054fb90;
    puVar62 = &DAT_1004214b0;
    FUN_1000087e4(pppcVar77,local_108[4],&DAT_10054fb90,&DAT_1004214b0);
    uVar64 = 1;
    goto LAB_1000a6a48;
  case (code)0x8:
    FUN_100029504(param_10.unknown,local_238,FUN_10009e280);
    pppcVar77 = local_1c0[1];
    dVar98 = *(double *)((long)param_10.unknown + (long)*(int *)(DVar21.unknown + 0x18));
    dVar100 = ((double *)((long)param_10.unknown + (long)*(int *)(DVar21.unknown + 0x18)))[1];
    dVar101 = dVar100;
    if (dVar98 <= dVar100) {
      dVar101 = dVar98;
    }
    *(double *)((long)ppppcVar93 + (long)*(int *)((long)local_1d8[1] + 0x14)) = dVar101 / 100.0;
    pdVar1 = (double *)((long)ppppcVar93 + (long)*(int *)((long)local_1d8[1] + 0x18));
    *pdVar1 = dVar98;
    pdVar1[1] = dVar100;
    pcVar74 = FUN_1000b0fe8;
    FUN_100029504(ppppcVar93,local_1c0[1],FUN_1000b0fe8);
    _swift_storeEnumTagMultiPayload(pppcVar77,local_1c8.unknown,0);
    FUN_1000036d0(&DAT_10054fc18,FUN_1000b0fe8,&TargetProtocolConformanceDescriptor_100421700);
    FUN_1000036d0(&DAT_10054fc20,FUN_1000b0fd4,&TargetProtocolConformanceDescriptor_1004216b0);
    ppppcVar19 = local_1a8[2];
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)pppcVar77);
    ppppcVar66 = local_118;
    puVar67 = &DAT_10054fb78;
    puVar62 = &DAT_100421498;
    FUN_1000087e4(ppppcVar19,local_118,&DAT_10054fb78,&DAT_100421498);
    uVar64 = 0;
    goto LAB_1000a6c90;
  case (code)0x9:
    FUN_100029504(param_10.unknown,local_230,FUN_10009e280);
    pppcVar77 = local_1c0[1];
    dVar98 = *(double *)((long)param_10.unknown + (long)*(int *)(DVar21.unknown + 0x18));
    dVar100 = ((double *)((long)param_10.unknown + (long)*(int *)(DVar21.unknown + 0x18)))[1];
    dVar101 = dVar100;
    if (dVar98 <= dVar100) {
      dVar101 = dVar98;
    }
    cVar65 = *(code *)((long)param_10.unknown + (long)*(int *)(DVar21.unknown + 0x1c));
    *(double *)((long)ppppcVar23 + (long)*(int *)((long)local_1a8[0] + 0x14)) = dVar101 / 100.0;
    iVar7 = *(int *)(local_1a8[0] + 3);
    *(double *)((long)ppppcVar23 + (long)iVar7) = dVar98;
    ((double *)((long)ppppcVar23 + (long)iVar7))[1] = dVar100;
    *(byte *)((long)ppppcVar23 + (long)*(int *)((long)local_1a8[0] + 0x1c)) =
         ((byte)cVar65 ^ 0xff) & 1;
    pcVar74 = FUN_1000b0fd4;
    FUN_100029504(ppppcVar23,local_1c0[1],FUN_1000b0fd4);
    _swift_storeEnumTagMultiPayload(pppcVar77,local_1c8.unknown,1);
    FUN_1000036d0(&DAT_10054fc18,FUN_1000b0fe8,&TargetProtocolConformanceDescriptor_100421700);
    FUN_1000036d0(&DAT_10054fc20,FUN_1000b0fd4,&TargetProtocolConformanceDescriptor_1004216b0);
    ppppcVar19 = local_1a8[2];
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)pppcVar77);
    ppppcVar66 = local_118;
    FUN_1000087e4(ppppcVar19,local_118,&DAT_10054fb78,&DAT_100421498);
    _swift_storeEnumTagMultiPayload(ppppcVar66,local_130[1],0);
    FUN_1000b1024();
    FUN_1000b10cc();
    ppppcVar80 = local_108[0];
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)ppppcVar66);
    FUN_10002a29c(ppppcVar19,&DAT_10054fb78,&DAT_100421498);
    ppppcVar19 = local_98;
    FUN_1000087e4(ppppcVar80,local_98,&DAT_10054fb80,&DAT_1004214a0);
    _swift_storeEnumTagMultiPayload(ppppcVar19,pppcVar69,1);
    FUN_1000b1174();
    FUN_1000b1544();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)ppppcVar19);
    FUN_10002a29c(ppppcVar80,&DAT_10054fb80,&DAT_1004214a0);
    goto LAB_1000a6d44;
  case (code)0xa:
    goto switchD_1000a5400_caseD_a;
  case (code)0xb:
    if (((ulong)ppppcVar72 & 1) != 0) {
      FUN_100029504(param_10.unknown,local_250,FUN_10009e280);
      pppcVar77 = *(code ****)((long)param_10.unknown + (long)*(int *)(DVar21.unknown + 0x18));
      param_2.unknown =
           *(undefined **)
            ((code *)((long)param_10.unknown + (long)*(int *)(DVar21.unknown + 0x18)) + 8);
      AVar92.unknown = (undefined *)ppppcVar45;
      if ((double)pppcVar77 <= (double)param_2.unknown) {
        param_2.unknown = (undefined *)pppcVar77;
      }
      goto switchD_1000a5400_caseD_2f;
    }
    goto switchD_1000a5400_caseD_a;
  case (code)0xc:
    FUN_10006c2c8();
    FUN_1000036d0(&DAT_10054e568,FUN_100113f00,&TargetProtocolConformanceDescriptor_1004261d8);
    auVar152._0_8_ =
         (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)ppppcVar66);
    auVar152._8_8_ = pcVar74;
    return auVar152;
  case (code)0xd:
  case (code)0x11:
  case (code)0x81:
  case (code)0xa9:
  case (code)0xe9:
  case (code)0xeb:
    goto switchD_1000a5400_caseD_d;
  case (code)0xe:
    goto switchD_1000a5400_caseD_e;
  case (code)0x10:
    (*(code *)pcVar71)();
    *(undefined8 *)(deadline.unknown + *(int *)(DVar21.unknown + 0x18)) =
         *(undefined8 *)((long)param_10.unknown + (long)*(int *)(DVar21.unknown + 0x18));
    pcVar76 = (code *)((long)pcVar74 + (long)*(int *)(ppppcVar81 + 6));
    pcVar96 = (code *)((long)size + (long)*(int *)(ppppcVar81 + 6));
    pcVar76[8] = pcVar96[8];
    *(undefined8 *)pcVar76 = *(undefined8 *)pcVar96;
    lVar20 = (long)*(int *)((long)ppppcVar70[5] + 0x14);
    lVar24 = (long)*(int *)(ppppcVar70[5] + 3);
    *(undefined8 *)((long)pcVar74 + lVar20) = *(undefined8 *)((long)size + lVar20);
    pcVar76 = (code *)((long)size + lVar24);
    uVar64 = *(undefined8 *)pcVar76;
    pcVar96 = (code *)((long)pcVar74 + lVar24);
    *(undefined8 *)(pcVar96 + 8) = *(undefined8 *)(pcVar76 + 8);
    *(undefined8 *)pcVar96 = uVar64;
    auVar127._8_8_ = table.unknown;
    auVar127._0_8_ = pcVar74;
    return auVar127;
  case (code)0x12:
    goto switchD_1000a5400_caseD_12;
  case (code)0x14:
    goto switchD_1000a5400_caseD_14;
  case (code)0x15:
  case (code)0x19:
  case (code)0x6d:
  case (code)0x71:
  case (code)0x95:
  case (code)0x99:
  case (code)0xb1:
  case (code)0xb5:
  case (code)0xb9:
  case (code)0xc1:
  case (code)0xc5:
  case (code)0xc9:
  case (code)0xcd:
  case (code)0xd5:
    goto switchD_1000a5400_caseD_15;
  case (code)0x16:
  case (code)0xca:
    goto switchD_1000a5400_caseD_16;
  case (code)0x18:
    goto switchD_1000a5400_caseD_18;
  case (code)0x1a:
    goto switchD_1000a5400_caseD_1a;
  case (code)0x20:
    pppcVar69 = (code ***)
                PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288
    ;
    local_230 = localized.unknown;
    local_80[1] = (code ****)DVar21.unknown;
    _swift_getWitnessTable
              (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
               localized.unknown,local_80 + 1);
    local_80[0] = (code ****)
                  PTR___protocol_witness_table_for_SwiftUI__FixedSizeLayout___SwiftUI_ViewModifier_in_SwiftUI_100522400
    ;
    ppppcVar45 = ppppcVar19;
    apppcStack_290[1] = pppcVar69;
    local_248 = ppppcVar66;
    local_88 = (code ****)pppcVar69;
    _swift_getWitnessTable(ppppcVar19,ppppcVar66,&local_88);
    pppcVar69 = (code ***)&DAT_100549ca8;
    FUN_1000087a0(&DAT_100549ca8,&DAT_100549cb0,&DAT_100433ba0,
                  PTR_SwiftUI__SwiftUI___ContentShapeModifier<undefined>_>SwiftUI__ViewModifier_100522950
                 );
    local_98 = ppppcVar45;
    local_90 = (code *)pppcVar69;
    _swift_getWitnessTable(ppppcVar19,pcVar74,&stack0xffffffffffffff68);
    ppppcVar66 = (code ****)&DAT_10054a688;
    FUN_1000087a0(&DAT_10054a688,&DAT_10054a658,&DAT_10041b640,
                  PTR_SwiftUI__SwiftUI___BackgroundStyleModifier<undefined>_>SwiftUI__ViewModifier_100522ac8
                 );
    ppppcVar80 = ppppcVar19;
    local_a0 = (code *)ppppcVar66;
    _swift_getWitnessTable(ppppcVar19,deadline.unknown,&stack0xffffffffffffff58);
    ppppcVar66 = (code ****)&DAT_10054a7a0;
    FUN_1000087a0(&DAT_10054a7a0,&DAT_10054a780,&DAT_10041e510,
                  PTR_SwiftUI__SwiftUI___ClipEffect<undefined>_>SwiftUI__ViewModifier_100521d38);
    pppcVar69 = (code ***)ppppcVar19;
    local_c0[1] = ppppcVar80;
    local_b0 = ppppcVar66;
    _swift_getWitnessTable(ppppcVar19,local_150,local_c0 + 1);
    ppppcVar66 = (code ****)&DAT_10054a7b0;
    FUN_1000087a0(&DAT_10054a7b0,&DAT_10054a788,&DAT_100425370,
                  PTR_SwiftUI__SwiftUI___OverlayModifier<undefined>_>SwiftUI__ViewModifier_100522438
                 );
    pppcVar77 = (code ***)ppppcVar19;
    local_c8 = pppcVar69;
    local_c0[0] = ppppcVar66;
    _swift_getWitnessTable(ppppcVar19,local_148,&local_c8);
    local_e0[1] = (code ***)
                  PTR___protocol_witness_table_for_SwiftUI_AnyView___SwiftUI_View_in_SwiftUI_1005234e8
    ;
    pppcVar94 = (code ***)
                PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830
    ;
    local_150 = (code ****)size;
    local_d0 = pppcVar77;
    _swift_getWitnessTable
              (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830
               ,size,local_e0 + 1);
    pppcVar69 = (code ***)&DAT_10054ae10;
    FUN_1000087a0(&DAT_10054ae10,&DAT_10054ae18,&DAT_10041e5d0,
                  PTR_SwiftUI__SwiftUI___TraitWritingModifier<undefined>_>SwiftUI__ViewModifier_100522978
                 );
    pppcStack_298 = pppcVar94;
    local_108[4] = (code ****)pppcVar94;
    local_e0[0] = pppcVar69;
    _swift_getWitnessTable(ppppcVar19,qos.unknown,local_108 + 4);
    param_10.unknown = (undefined *)0x0;
    local_130[0] = (code ****)qos.unknown;
    local_130[1] = ppppcVar19;
    _swift_getOpaqueTypeMetadata2
              (0,local_130,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_help(SwiftUI_LocalizedStringKey)__>_some>>_100523040
               ,0);
    ppppcVar66 = *(code *****)((long)param_10.unknown + -8);
    (*(code *)PTR____chkstk_darwin_100521118)(ppppcVar66[8]);
    lVar20 = (long)ppppcVar70 - (extraout_x8_41 + 0xfU & 0xfffffffffffffff0);
    apppcStack_290[0] = (code ***)lVar20;
    (*(code *)PTR____chkstk_darwin_100521118)();
    ppppcVar85 = (code ****)(lVar20 - extraout_x12_06);
    OVar16 = Swift::Optional::typeMetadataAccessor();
    localized.unknown = (undefined *)CONCAT71((int7)((ulong)param_10.unknown >> 8),OVar16.value);
    uVar60 = 1;
    local_148 = *(code ****)(localized.unknown + -8);
    (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)((long)local_148 + 0x40));
    pcVar74 = (code *)((long)ppppcVar85 - (extraout_x8_42 + 0xfU & 0xfffffffffffffff0));
    (*(code *)PTR____chkstk_darwin_100521118)();
    pppcVar69 = local_1d8[0];
    ppppcVar80 = (code ****)((long)pcVar74 - extraout_x12_07);
    if (((ulong)local_140 & 1) == 0) goto LAB_1000c2fd4;
    local_130[2] = local_1a8[4];
    local_118 = local_1a8[1];
    local_110 = (code ****)CONCAT71(local_110._1_7_,uVar60);
    local_108[0] = local_1a8[2];
    local_108[1] = local_1a8[3];
    local_140 = ppppcVar66;
    SwiftUI::Menu::_init();
    pppcVar94 = local_1c0[0];
    local_1c8.unknown = DVar21.unknown;
    SwiftUI::ButtonMenuStyle::init();
    pppcVar90 = local_1c0[2];
    ppppcVar66 = local_1f8[1];
    pppcVar77 = local_218;
    local_1a8[1] = ppppcVar45;
    local_1a8[2] = ppppcVar85;
    local_1a8[3] = ppppcVar80;
    (extension_SwiftUI)::SwiftUI::View::_menuStyle
              (local_1f8[1],pppcVar94,local_1c0[2],local_218,local_1f8[0],local_208[1]);
    (*(code *)local_1a8[0][1])(pppcVar94,pppcVar77);
    (**(code **)((long)local_1c0[1] + 8))(pppcVar69,pppcVar90);
    AVar92.unknown = (undefined *)local_1a8[5];
    SwiftUI::PlainButtonStyle::init();
    pcVar71 = (char *)local_228;
    ppppcVar81 = local_1f8[3];
    DVar21.unknown = (undefined *)local_1a8[6];
    deadline.unknown = (undefined *)local_228;
    local_1a8[4] = ppppcVar19;
  case (code)0x2c:
    (extension_SwiftUI)::SwiftUI::View::_buttonStyle(pcVar71);
    (*(code *)local_170[1])(AVar92.unknown,DVar21.unknown);
    (*(code *)local_1f8[2][1])(ppppcVar66,ppppcVar81);
    pppcVar69 = local_208[0];
    ppppcVar19 = local_250;
    (extension_SwiftUI)::SwiftUI::View::_menuIndicator((Visibility)0x2);
    (**(code **)(local_220 + 8))(deadline.unknown,pppcVar69);
    ppppcVar66 = (code ****)local_230;
    (extension_SwiftUI)::SwiftUI::View::_fixedSize(true,true);
    (*(code *)local_240[1])(ppppcVar19,ppppcVar66);
    ppppcVar19 = local_248;
    FUN_100008b90(apppcStack_290[2],local_248,local_1a8[1]);
    (*(code *)local_258[1])(pppcStack_260,ppppcVar19);
    ppppcVar19 = local_168[0];
    SwiftUI::OpacityTransition::init();
    puVar67 = &DAT_10054ae80;
    FUN_1000036d0(&DAT_10054ae80,PTR_typeMetadataAccessor_1005225d8,
                  PTR_SwiftUI__SwiftUI__OpacityTransition_>SwiftUI__Transition_1005225c8);
    ppppcVar66 = local_150;
    pppcVar69 = local_158;
    pppcVar77 = pppcStack_298;
    FUN_1000bdabc(apppcStack_290[4],ppppcVar19,local_150,local_158,pppcStack_298,puVar67);
    (*(code *)local_168[1][1])(ppppcVar19,pppcVar69);
    ppppcVar19 = local_1a8[4];
    (**(code **)((long)apppcStack_290[3] + 8))(apppcStack_290[2],ppppcVar66);
    stringLiteral_03.bridgeObject = (void *)0xe400000000000000;
    stringLiteral_03.str = (char *)0x65726f4d;
    uVar64 = 0xe400000000000000;
    LVar38 = SwiftUI::LocalizedStringKey::init(stringLiteral_03);
    pppcVar69 = apppcStack_290[0];
    (extension_SwiftUI)::SwiftUI::View::_help(LVar38);
    _swift_bridgeObjectRelease(pppcVar77);
    _swift_bridgeObjectRelease(uVar64);
    ppppcVar80 = local_1a8[3];
    (**(code **)((long)apppcStack_290[5] + 8))(apppcStack_290[4],qos.unknown);
    ppppcVar45 = local_1a8[2];
    ppcVar68 = (code **)local_140[2];
    (*(code *)ppcVar68)(local_1a8[2],pppcVar69,param_10.unknown);
    ppcVar89 = (code **)local_140[1];
    (*(code *)ppcVar89)(pppcVar69,param_10.unknown);
    (*(code *)ppcVar68)(pppcVar69,ppppcVar45,param_10.unknown);
    ppppcVar66 = local_140;
    (*(code *)ppcVar89)(ppppcVar45,param_10.unknown);
    (*(code *)ppppcVar66[4])(pcVar74,pppcVar69,param_10.unknown);
LAB_1000c2fd4:
    (*(code *)ppppcVar66[7])(pcVar74);
    pppcVar69 = local_148;
    pcVar76 = *(code **)((long)local_148 + 0x10);
    (*pcVar76)(ppppcVar80,pcVar74,localized.unknown);
    pcVar96 = *(code **)((long)pppcVar69 + 8);
    (*pcVar96)(pcVar74,localized.unknown);
    ppppcVar66 = (code ****)local_130;
    local_130[0] = (code ****)qos.unknown;
    local_130[1] = ppppcVar19;
    _swift_getOpaqueTypeConformance2
              (ppppcVar66,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_help(SwiftUI_LocalizedStringKey)__>_some>>_100523040
               ,1);
    local_108[3] = ppppcVar66;
    _swift_getWitnessTable
              (PTR__SwiftUI__protocol_conformance_descriptor_for_<A_where_A:_SwiftUI_View>_A____SwiftUI_View_in_SwiftUI_>SwiftUI__View_100523818
               ,localized.unknown,local_108 + 3);
    (*pcVar76)(local_138,ppppcVar80,localized.unknown);
    (*pcVar96)(ppppcVar80,localized.unknown);
    auVar141._8_8_ = localized.unknown;
    auVar141._0_8_ = ppppcVar80;
    return auVar141;
  case (code)0x21:
    goto switchD_1000a5400_caseD_21;
  case (code)0x22:
    uVar64 = 0x4032000000000000;
    SwiftUI::EdgeInsets::init((CGFloat)DVar21.unknown);
    puVar67 = &DAT_100550a28;
    puVar62 = &DAT_100422518;
    FUN_100002f94(&DAT_100550a28,&DAT_100422518);
    pcVar74 = (code *)((long)pcVar74 + (long)*(int *)(puVar67 + 0x24));
    *pcVar74 = SUB81(DVar21.unknown,0);
    *(undefined8 *)(pcVar74 + 8) = uVar64;
    *(code ****)(pcVar74 + 0x10) = param_3;
    *(code ****)(pcVar74 + 0x18) = param_4;
    *(code ****)(pcVar74 + 0x20) = param_5;
    pcVar74[0x28] = (code)0x0;
    auVar130._8_8_ = puVar62;
    auVar130._0_8_ = puVar67;
    return auVar130;
  case (code)0x23:
    gradient = SwiftUI::Gradient::init();
    SwiftUI::LinearGradient::init(gradient,(UnitPoint)table.unknown,param_12);
    SwiftUI::StrokeStyle::init
              (&stack0xffffffffffffff58,0x3ff0000000000000,0x4024000000000000,0,gradient.unknown,0,
               PTR___swiftEmptyArrayStorage_100524190);
    puVar67 = &DAT_100550e60;
    FUN_100002f94(&DAT_100550e60,&DAT_100422a00);
    pcVar76 = (code *)((long)ppppcVar66 + (long)*(int *)(puVar67 + 0x44));
    puVar67 = &DAT_100550e68;
    FUN_100002f94(&DAT_100550e68,&DAT_100422a08);
    ppppcVar80 = local_c0[1];
    ppppcVar19 = local_c0[0];
    pppcVar77 = local_d0;
    pcVar96 = pcVar76 + *(int *)(puVar67 + 0x34);
    *(code ****)(pcVar96 + 8) = local_c8;
    *(code ****)pcVar96 = pppcVar77;
    *(code *****)(pcVar96 + 0x18) = ppppcVar80;
    *(code *****)(pcVar96 + 0x10) = ppppcVar19;
    *(code *****)(pcVar96 + 0x20) = local_b0;
    FUN_100029504(qos.unknown,ppppcVar66,param_10.unknown);
    FUN_100029504(qos.unknown,pcVar76,param_10.unknown);
    _Var35 = SwiftUI::RoundedRectangle::_Inset::typeMetadataAccessor();
    *(double *)(pcVar76 + *(int *)(_Var35.unknown + 0x14)) = (double)pppcVar69 * 0.5;
    AVar54.unknown = &DAT_100550e70;
    puVar62 = &DAT_100422a10;
    FUN_100002f94();
    pppcVar77 = (code ***)local_90;
    ppppcVar19 = local_98;
    pcVar96 = pcVar76 + *(int *)(AVar54.unknown + 0x24);
    *(code **)(pcVar96 + 8) = local_a0;
    *(code ****)pcVar96 = pppcVar69;
    *(code ****)(pcVar96 + 0x18) = pppcVar77;
    *(code *****)(pcVar96 + 0x10) = ppppcVar19;
    *(code *****)(pcVar96 + 0x20) = local_88;
    *(short *)(pcVar76 + *(int *)(puVar67 + 0x38)) = (short)AVar92.unknown;
    AVar49 = SwiftUI::Alignment::get_center(AVar54);
    AVar54.unknown = &DAT_100550e78;
    puVar67 = &DAT_100422a18;
    FUN_100002f94();
    iVar7 = *(int *)(AVar54.unknown + 0x24);
    *(undefined **)(pcVar76 + iVar7) = AVar49.unknown;
    *(undefined **)(pcVar76 + iVar7 + 8) = puVar62;
    AVar54 = SwiftUI::Alignment::get_center(AVar54);
    UVar36.unknown = &DAT_100550e40;
    FUN_100002f94(&DAT_100550e40,&DAT_1004229e0);
    iVar7 = *(int *)(UVar36.unknown + 0x24);
    *(undefined **)((long)ppppcVar66 + (long)iVar7) = AVar54.unknown;
    *(undefined **)((code *)((long)ppppcVar66 + (long)iVar7) + 8) = puVar67;
    SwiftUI::UnitPoint::get_center(UVar36);
    CVar43.unknown = &DAT_100550e00;
    FUN_100002f94(&DAT_100550e00,&DAT_1004229b8);
    bVar17 = ((ulong)DVar21.unknown & 1) == 0;
    uVar64 = 0x3ff051eb851eb852;
    if (bVar17) {
      uVar64 = 0x3ff0000000000000;
    }
    pcVar76 = (code *)((long)pcVar74 + (long)*(int *)(CVar43.unknown + 0x24));
    *(undefined8 *)pcVar76 = uVar64;
    *(undefined8 *)(pcVar76 + 8) = uVar64;
    *(code ****)(pcVar76 + 0x10) = pppcVar69;
    *(code *****)(pcVar76 + 0x18) = ppppcVar19;
    dVar101 = 0.45;
    if (bVar17) {
      dVar101 = 0.32;
    }
    uVar64 = 0x4028000000000000;
    if (bVar17) {
      uVar64 = 0x4018000000000000;
    }
    uVar78 = 0x4036000000000000;
    if (bVar17) {
      uVar78 = 0x4028000000000000;
    }
    CVar43 = SwiftUI::Color::get_black(CVar43);
    CVar44 = SwiftUI::Color::opacity(0.5,CVar43);
    _swift_release(CVar43.unknown);
    CVar43.unknown = &DAT_100550df0;
    FUN_100002f94(&DAT_100550df0,&DAT_1004229b0);
    pcVar76 = (code *)((long)pcVar74 + (long)*(int *)(CVar43.unknown + 0x24));
    *(undefined **)pcVar76 = CVar44.unknown;
    *(undefined8 *)(pcVar76 + 0x10) = 0;
    *(undefined8 *)(pcVar76 + 8) = 0x3ff8000000000000;
    *(undefined8 *)(pcVar76 + 0x18) = 0x3ff0000000000000;
    CVar43 = SwiftUI::Color::get_black(CVar43);
    CVar44 = SwiftUI::Color::opacity(dVar101,CVar43);
    _swift_release(CVar43.unknown);
    FUN_100029548(qos.unknown,param_10.unknown);
    puVar67 = &DAT_100550de0;
    puVar62 = &DAT_1004229a8;
    FUN_100002f94(&DAT_100550de0,&DAT_1004229a8);
    pcVar74 = (code *)((long)pcVar74 + (long)*(int *)(puVar67 + 0x24));
    *(undefined **)pcVar74 = CVar44.unknown;
    *(undefined8 *)(pcVar74 + 8) = uVar78;
    *(undefined8 *)(pcVar74 + 0x10) = 0;
    *(undefined8 *)(pcVar74 + 0x18) = uVar64;
    auVar138._8_8_ = puVar62;
    auVar138._0_8_ = puVar67;
    return auVar138;
  case (code)0x24:
    goto switchD_1000a5400_caseD_24;
  case (code)0x25:
    local_90._0_2_ = CONCAT11(0x70,SUB81(ppppcVar72,0));
    DVar58.unknown = &DAT_100550b78;
    local_c8 = (code ***)param_2.unknown;
    local_c0[0] = in_register_00005008;
    local_c0[1] = ppppcVar73;
    local_b0 = (code ****)((long)ppppcVar73 * 4 + 0x1000a5404);
    local_a0 = (code *)qos.unknown;
    local_98 = (code ****)pcVar71;
    local_88 = (code ****)param_2.unknown;
    local_80[1] = ppppcVar73;
    goto switchD_1000a5400_caseD_24;
  case (code)0x26:
  case (code)0x2d:
    FUN_100002fe4();
    MVar41 = SwiftUI::ModifiedContent::typeMetadataAccessor();
    ppppcVar19 = (code ****)local_130;
    local_130[0] = ppppcVar81;
    local_130[1] = (code ****)deadline.unknown;
    local_130[2] = (code ****)localized.unknown;
    local_118 = (code ****)pcVar74;
    _swift_getOpaqueTypeConformance2
              (ppppcVar19,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_PrimitiveButtonStyle>(A1)__>_some>>_100522e98
               ,1);
    FUN_1000087a0(&DAT_100550b48,&DAT_100550b40,&DAT_1004226e0,
                  PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100522bc8
                 );
    ppppcVar80 = (code ****)
                 PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288
    ;
    pppcVar69 = (code ***)
                PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288
    ;
    local_80[1] = ppppcVar19;
    _swift_getWitnessTable
              (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
               size,local_80 + 1);
    local_80[0] = (code ****)
                  PTR___protocol_witness_table_for_SwiftUI__FixedSizeLayout___SwiftUI_ViewModifier_in_SwiftUI_100522400
    ;
    ppppcVar19 = ppppcVar80;
    local_88 = (code ****)pppcVar69;
    _swift_getWitnessTable(ppppcVar80,qos.unknown,&local_88);
    pppcVar69 = (code ***)&DAT_100549ca8;
    FUN_1000087a0(&DAT_100549ca8,&DAT_100549cb0,&DAT_100433ba0,
                  PTR_SwiftUI__SwiftUI___ContentShapeModifier<undefined>_>SwiftUI__ViewModifier_100522950
                 );
    local_98 = ppppcVar19;
    local_90 = (code *)pppcVar69;
    _swift_getWitnessTable(ppppcVar80,AVar92.unknown,&stack0xffffffffffffff68);
    ppppcVar19 = (code ****)&DAT_10054a688;
    FUN_1000087a0(&DAT_10054a688,&DAT_10054a658,&DAT_10041b640,
                  PTR_SwiftUI__SwiftUI___BackgroundStyleModifier<undefined>_>SwiftUI__ViewModifier_100522ac8
                 );
    ppppcVar45 = ppppcVar80;
    local_a0 = (code *)ppppcVar19;
    _swift_getWitnessTable(ppppcVar80,param_10.unknown,&stack0xffffffffffffff58);
    ppppcVar19 = (code ****)&DAT_10054a7a0;
    FUN_1000087a0(&DAT_10054a7a0,&DAT_10054a780,&DAT_10041e510,
                  PTR_SwiftUI__SwiftUI___ClipEffect<undefined>_>SwiftUI__ViewModifier_100521d38);
    pppcVar69 = (code ***)ppppcVar80;
    local_c0[1] = ppppcVar45;
    local_b0 = ppppcVar19;
    _swift_getWitnessTable(ppppcVar80,ppppcVar66,local_c0 + 1);
    ppppcVar19 = (code ****)&DAT_10054a7b0;
    FUN_1000087a0(&DAT_10054a7b0,&DAT_10054a788,&DAT_100425370,
                  PTR_SwiftUI__SwiftUI___OverlayModifier<undefined>_>SwiftUI__ViewModifier_100522438
                 );
    pppcVar77 = (code ***)ppppcVar80;
    local_c8 = pppcVar69;
    local_c0[0] = ppppcVar19;
    _swift_getWitnessTable(ppppcVar80,local_1a8[3],&local_c8);
    local_e0[1] = (code ***)
                  PTR___protocol_witness_table_for_SwiftUI_AnyView___SwiftUI_View_in_SwiftUI_1005234e8
    ;
    pppcVar94 = (code ***)
                PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830
    ;
    local_d0 = pppcVar77;
    _swift_getWitnessTable
              (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830
               ,local_1a8[4],local_e0 + 1);
    pppcVar69 = (code ***)&DAT_10054ae10;
    FUN_1000087a0(&DAT_10054ae10,&DAT_10054ae18,&DAT_10041e5d0,
                  PTR_SwiftUI__SwiftUI___TraitWritingModifier<undefined>_>SwiftUI__ViewModifier_100522978
                 );
    local_108[4] = (code ****)pppcVar94;
    local_e0[0] = pppcVar69;
    _swift_getWitnessTable(ppppcVar80,MVar41.unknown,local_108 + 4);
    puVar67 = 
    PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_help(SwiftUI_LocalizedStringKey)__>_some>>_100523040
    ;
    local_130[0] = (code ****)MVar41;
    local_130[1] = ppppcVar80;
    _swift_getOpaqueTypeMetadata2
              (0xff,local_130,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_help(SwiftUI_LocalizedStringKey)__>_some>>_100523040
               ,0);
    OVar16 = Swift::Optional::typeMetadataAccessor();
    ppppcVar19 = (code ****)local_130;
    local_130[0] = (code ****)MVar41;
    local_130[1] = ppppcVar80;
    _swift_getOpaqueTypeConformance2(ppppcVar19,puVar67,1);
    local_108[3] = ppppcVar19;
    _swift_getWitnessTable
              (PTR__SwiftUI__protocol_conformance_descriptor_for_<A_where_A:_SwiftUI_View>_A____SwiftUI_View_in_SwiftUI_>SwiftUI__View_100523818
               ,OVar16.value,local_108 + 3);
    deadline.unknown = (undefined *)SwiftUI::ZStack::typeMetadataAccessor();
    local_1a8[1] = *(code *****)(deadline.unknown + -8);
    (*(code *)PTR____chkstk_darwin_100521118)
              ((ulong)((long)local_1a8[1][8] + 0xfU) & 0xfffffffffffffff0);
    size = (ushort *)((long)ppppcVar70 - extraout_x8_38);
    param_10.unknown = (undefined *)SwiftUI::ModifiedContent::typeMetadataAccessor();
    local_1a8[3] = *(code *****)(param_10.unknown + -8);
    (*(code *)PTR____chkstk_darwin_100521118)
              ((ulong)((long)local_1a8[3][8] + 0xfU) & 0xfffffffffffffff0);
    AVar92.unknown = (undefined *)((long)size - extraout_x8_39);
    FUN_100002fe4(&DAT_10054aa20,&DAT_10041bcb0);
    DVar21.unknown = (undefined *)SwiftUI::ModifiedContent::typeMetadataAccessor();
    local_1a8[4] = *(code *****)(DVar21.unknown + -8);
    MVar41 = (ModifiedContent)DVar21.unknown;
    (*(code *)PTR____chkstk_darwin_100521118)(local_1a8[4][8]);
    ppppcVar66 = (code ****)((long)AVar92.unknown - (extraout_x8_40 + 0xfU & 0xfffffffffffffff0));
    (*(code *)PTR____chkstk_darwin_100521118)();
    local_1a8[2] = (code ****)((long)ppppcVar66 - extraout_x12_05);
    local_130[2] = local_1a8[6];
    local_118 = local_1a8[5];
    pcVar74 = (code *)((ulong)local_170 >> 0x20);
    local_110 = (code ****)CONCAT71(local_110._1_7_,(char)((ulong)local_170 >> 0x20));
    local_108[0] = local_168[0];
    local_108[1] = local_168[1];
    AVar54 = SwiftUI::Alignment::get_center(MVar41.unknown);
    ZVar37 = SwiftUI::ZStack::_init(AVar54);
    SwiftUI::Alignment::get_center((Alignment)ZVar37.unknown);
    ppppcVar81 = (code ****)PTR_SwiftUI__SwiftUI__ZStack<undefined>_>SwiftUI__View_1005234e0;
    _swift_getWitnessTable
              (PTR_SwiftUI__SwiftUI__ZStack<undefined>_>SwiftUI__View_1005234e0,deadline.unknown);
    (extension_SwiftUI)::SwiftUI::View::_frame((Alignment)0x403a000000000000);
    pcVar71 = (char *)local_1a8[1];
  case (code)0x2a:
    (*(code *)*(code ****)((long)pcVar71 + 8))(size,deadline.unknown);
    AVar50 = SwiftUI::Animation::easeOut(0.12,(Animation)size);
    puVar62 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
    local_130[0] = (code ****)CONCAT71(local_130[0]._1_7_,(char)pcVar74);
    local_138 = (code ***)
                PTR___protocol_witness_table_for_SwiftUI__FrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100521e80
    ;
    pppcVar69 = (code ***)
                PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288
    ;
    local_140 = ppppcVar81;
    _swift_getWitnessTable
              (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
               param_10.unknown,&local_140);
    (extension_SwiftUI)::SwiftUI::View::_animation
              (ppppcVar66,AVar50.unknown,local_130,param_10.unknown,
               PTR___type_metadata_for_Swift_Bool_100523b70,pppcVar69,
               PTR___protocol_witness_table_for_Swift_Bool___Swift_Equatable_in_Swift_100523b78);
    _swift_release(AVar50.unknown);
    (*(code *)local_1a8[3][1])(AVar92.unknown,param_10.unknown);
    puVar67 = &DAT_10054aa18;
    FUN_1000087a0(&DAT_10054aa18,&DAT_10054aa20,&DAT_10041bcb0,
                  PTR_SwiftUI__SwiftUI___AnimationModifier<undefined>_>SwiftUI__ViewModifier_1005226a8
                 );
    local_150 = (code ****)pppcVar69;
    local_148 = (code ***)puVar67;
    _swift_getWitnessTable(puVar62,DVar21.unknown,&local_150);
    ppppcVar80 = local_1a8[4];
    ppppcVar19 = local_1a8[2];
    pppcVar69 = local_1a8[4][2];
    (*(code *)pppcVar69)(local_1a8[2],ppppcVar66,DVar21.unknown);
    pppcVar77 = ppppcVar80[1];
    (*(code *)pppcVar77)(ppppcVar66,DVar21.unknown);
    (*(code *)pppcVar69)(local_158,ppppcVar19,DVar21.unknown);
    (*(code *)pppcVar77)(ppppcVar19,DVar21.unknown);
    auVar140._8_8_ = DVar21.unknown;
    auVar140._0_8_ = ppppcVar19;
    return auVar140;
  case (code)0x27:
    pppcVar69 = (code ***)(DVar21.unknown + 0xeb8);
    FUN_100002f94(pppcVar69,&DAT_100422a48);
    local_e0[0] = pppcVar69;
    (*(code *)PTR____chkstk_darwin_100521118)((ulong)(pppcVar69[-1][8] + 0xf) & 0xfffffffffffffff0);
    ppppcVar72 = (code ****)((long)ppppcVar70 - extraout_x8_32);
    ppppcVar19 = (code ****)0x0;
    FUN_1001d59ac();
    local_c0[1] = (code ****)ppppcVar19[-1];
    local_130[2] = ppppcVar19;
    (*(code *)PTR____chkstk_darwin_100521118)(local_c0[1][8]);
    ppppcVar73 = (code ****)(extraout_x8_33 + 0xfU & 0xfffffffffffffff0);
    param_10.unknown = (undefined *)ppppcVar72;
    goto switchD_1000a5400_caseD_21;
  case (code)0x28:
    AVar92.unknown = DVar21.unknown;
    FUN_100002f94();
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(AVar92.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    systemName.bridgeObject = (void *)0xe800000000000000;
    systemName.str = (char *)0x73697370696c6c65;
    IVar39 = SwiftUI::Image::init(systemName);
    SwiftUI::Font::Weight::get_bold((Weight)IVar39.unknown);
    DVar18 = SwiftUI::Font::Design::typeMetadataAccessor();
    lVar20 = CONCAT71((int7)((ulong)IVar39.unknown >> 8),DVar18.value);
    (**(code **)(*(long *)(lVar20 + -8) + 0x38))((long)ppppcVar70 - extraout_x8_43,1,1,lVar20);
    FVar26 = SwiftUI::Font::_system(param_2,(Font)0x0);
    FUN_10002a29c((long)ppppcVar70 - extraout_x8_43,localized.unknown,qos.unknown);
    CVar43.unknown = &DAT_1004226e8;
    _swift_getKeyPath();
    CVar44 = SwiftUI::Color::get_white(CVar43);
    SwiftUI::Alignment::get_center((Alignment)CVar44.unknown);
    SwiftUI::_FrameLayout::_init((Alignment)0x403a000000000000);
    *(undefined **)((long)pcVar74 + 0xb0) = IVar39.unknown;
    *(undefined **)((long)pcVar74 + 0xb8) = CVar43.unknown;
    *(undefined **)((long)pcVar74 + 0xc0) = FVar26.unknown;
    *(undefined **)((long)pcVar74 + 200) = CVar44.unknown;
    pppcVar83 = *(code ****)(DVar21.unknown + 0xf8);
    pppcVar90 = *(code ****)(DVar21.unknown + 0xf0);
    uVar78 = *(undefined8 *)(DVar21.unknown + 0xf8);
    uVar64 = *(undefined8 *)(DVar21.unknown + 0xf0);
    uVar102 = *(undefined8 *)(DVar21.unknown + 0x108);
    uVar99 = *(undefined8 *)(DVar21.unknown + 0x100);
    *(code ****)(DVar21.unknown + 0x78) = pppcVar83;
    *(code ****)(DVar21.unknown + 0x70) = pppcVar90;
    *(undefined8 *)(DVar21.unknown + 0x88) = *(undefined8 *)(DVar21.unknown + 0x108);
    *(undefined8 *)(DVar21.unknown + 0x80) = *(undefined8 *)(DVar21.unknown + 0x100);
    *(undefined8 *)(DVar21.unknown + 0x98) = *(undefined8 *)(DVar21.unknown + 0x118);
    *(undefined8 *)(DVar21.unknown + 0x90) = *(undefined8 *)(DVar21.unknown + 0x110);
    *(undefined8 *)(DVar21.unknown + 0x38) = *(undefined8 *)(DVar21.unknown + 0x108);
    *(undefined8 *)(DVar21.unknown + 0x30) = *(undefined8 *)(DVar21.unknown + 0x100);
    *(undefined8 *)(DVar21.unknown + 0x48) = *(undefined8 *)(DVar21.unknown + 0x118);
    *(undefined8 *)(DVar21.unknown + 0x40) = *(undefined8 *)(DVar21.unknown + 0x110);
    pppcVar94 = *(code ****)(DVar21.unknown + 0x58);
    pppcVar77 = *(code ****)(DVar21.unknown + 0x50);
    pppcVar69 = *(code ****)(DVar21.unknown + 0x60);
    *(code ****)((long)pcVar74 + 0x78) = *(code ****)(DVar21.unknown + 0x68);
    *(code ****)((long)pcVar74 + 0x70) = pppcVar69;
    *(code ****)((long)pcVar74 + 0x88) = pppcVar83;
    *(code ****)((long)pcVar74 + 0x80) = pppcVar90;
    *(code ****)((long)pcVar74 + 0x68) = pppcVar94;
    *(code ****)((long)pcVar74 + 0x60) = pppcVar77;
    *(undefined **)((long)pcVar74 + 0x100) = IVar39.unknown;
    *(undefined **)((long)pcVar74 + 0x108) = CVar43.unknown;
    *(undefined **)((long)pcVar74 + 0x110) = FVar26.unknown;
    *(undefined **)((long)pcVar74 + 0x118) = CVar44.unknown;
    *(undefined8 *)(DVar21.unknown + 200) = uVar78;
    *(undefined8 *)(DVar21.unknown + 0xc0) = uVar64;
    *(undefined8 *)(DVar21.unknown + 0xd8) = uVar102;
    *(undefined8 *)(DVar21.unknown + 0xd0) = uVar99;
    *(undefined8 *)(DVar21.unknown + 0xe8) = *(undefined8 *)(DVar21.unknown + 0x118);
    *(undefined8 *)(DVar21.unknown + 0xe0) = *(undefined8 *)(DVar21.unknown + 0x110);
    FUN_1000087e4((code ****)((long)pcVar74 + 0xb0),local_c0,&DAT_10054b1f8,&DAT_1004226d0);
    FUN_10002a29c((code ****)((long)pcVar74 + 0x100),&DAT_10054b1f8,&DAT_1004226d0);
    pppcVar90 = *(code ****)((long)pcVar74 + 0x78);
    pppcVar94 = *(code ****)((long)pcVar74 + 0x70);
    pppcVar77 = *(code ****)((long)pcVar74 + 0x88);
    pppcVar69 = *(code ****)((long)pcVar74 + 0x80);
    uVar78 = *(undefined8 *)(DVar21.unknown + 0x38);
    uVar64 = *(undefined8 *)(DVar21.unknown + 0x30);
    uVar102 = *(undefined8 *)(DVar21.unknown + 0x48);
    uVar99 = *(undefined8 *)(DVar21.unknown + 0x40);
    *(code ****)(DVar21.unknown + 0x118) = pppcVar77;
    *(code ****)(DVar21.unknown + 0x110) = pppcVar69;
    *(undefined8 *)(DVar21.unknown + 0x128) = uVar78;
    *(undefined8 *)(DVar21.unknown + 0x120) = uVar64;
    *(undefined8 *)(DVar21.unknown + 0x138) = uVar102;
    *(undefined8 *)(DVar21.unknown + 0x130) = uVar99;
    pppcVar82 = *(code ****)((long)pcVar74 + 0x68);
    pppcVar83 = *(code ****)((long)pcVar74 + 0x60);
    *(code ****)(DVar21.unknown + 0xf8) = pppcVar82;
    *(code ****)(DVar21.unknown + 0xf0) = pppcVar83;
    *(code ****)(DVar21.unknown + 0x108) = pppcVar90;
    *(code ****)(DVar21.unknown + 0x100) = pppcVar94;
    *(code *)((long)pcVar74 + 0x1a0) = (code)0x0;
    *(code ****)(DVar21.unknown + 0x178) = pppcVar77;
    *(code ****)(DVar21.unknown + 0x170) = pppcVar69;
    *(undefined8 *)(DVar21.unknown + 0x188) = uVar78;
    *(undefined8 *)(DVar21.unknown + 0x180) = uVar64;
    *(undefined8 *)(DVar21.unknown + 0x198) = uVar102;
    *(undefined8 *)(DVar21.unknown + 400) = uVar99;
    *(code ****)(DVar21.unknown + 0x158) = pppcVar82;
    *(code ****)(DVar21.unknown + 0x150) = pppcVar83;
    *(code ****)(DVar21.unknown + 0x168) = pppcVar90;
    *(code ****)(DVar21.unknown + 0x160) = pppcVar94;
    puVar67 = &DAT_10054d8e0;
    FUN_1000087e4((code ****)((long)pcVar74 + 0x150),(code ****)((long)pcVar74 + 8),&DAT_10054d8e0,
                  &DAT_10041f1b0);
    ppppcVar19 = (code ****)local_c0;
    FUN_10002a29c(ppppcVar19,&DAT_10054d8e0,&DAT_10041f1b0);
    pppcVar69 = *(code ****)(DVar21.unknown + 0x110);
    pppcVar94 = *(code ****)(DVar21.unknown + 0x128);
    pppcVar77 = *(code ****)(DVar21.unknown + 0x120);
    *(code ****)((long)size + 0x28) = *(code ****)(DVar21.unknown + 0x118);
    *(code ****)((long)size + 0x20) = pppcVar69;
    *(code ****)((long)size + 0x38) = pppcVar94;
    *(code ****)((long)size + 0x30) = pppcVar77;
    pppcVar69 = *(code ****)(DVar21.unknown + 0x130);
    *(code ****)((long)size + 0x48) = *(code ****)(DVar21.unknown + 0x138);
    *(code ****)((long)size + 0x40) = pppcVar69;
    *(code *)((long)size + 0x50) = *(code *)((long)pcVar74 + 0x1a0);
    pppcVar69 = *(code ****)(DVar21.unknown + 0xf0);
    pppcVar94 = *(code ****)(DVar21.unknown + 0x108);
    pppcVar77 = *(code ****)(DVar21.unknown + 0x100);
    *(code ****)((long)size + 8) = *(code ****)(DVar21.unknown + 0xf8);
    *(code ****)size = pppcVar69;
    *(code ****)((long)size + 0x18) = pppcVar94;
    *(code ****)((long)size + 0x10) = pppcVar77;
    auVar142._8_8_ = puVar67;
    auVar142._0_8_ = ppppcVar19;
    return auVar142;
  case (code)0x29:
    SwiftUI::AppStorage::get_projectedValue((AppStorage)DVar21.unknown);
    local_110 = (code ****)0x7265776f70;
    local_108[0] = (code ****)0xe500000000000000;
    local_108[3] = local_c0[0];
    local_108[4] = local_c0[1];
    local_e0[0] = (code ***)CONCAT71(local_e0[0]._1_7_,local_b0._0_1_);
    local_e0[1] = (code ***)0x4045000000000000;
    local_d0._0_2_ = CONCAT11(1,(undefined1)local_d0);
    local_108[1] = (code ****)size;
    local_108[2] = (code ****)localized.unknown;
    FUN_100002f94(&DAT_1005509e0,&DAT_100422478);
    FUN_1000bce54();
    FUN_1000bcf3c();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init
              ((Storage)(__int8)&stack0xfffffffffffffff0);
    pppcVar77 = *(code ****)pcVar74;
    local_110 = local_c0[0];
    local_108[0] = local_c0[1];
    local_108[1] = local_b0;
    local_108[3] = (code ****)local_a0;
    local_108[4] = local_98;
    local_e0[0] = (code ***)local_90;
    local_e0[1] = (code ***)local_88;
    local_d0 = (code ***)CONCAT62(local_d0._2_6_,local_80[0]._0_2_);
    *(undefined2 *)(deadline.unknown + 0x97) = local_80[0]._0_2_;
    *(undefined8 *)(deadline.unknown + 0x6f) = *(undefined8 *)(deadline.unknown + 0xb8);
    *(undefined8 *)(deadline.unknown + 0x67) = *(undefined8 *)(deadline.unknown + 0xb0);
    *(undefined8 *)(deadline.unknown + 0x7f) = *(undefined8 *)(deadline.unknown + 200);
    *(undefined8 *)(deadline.unknown + 0x77) = *(undefined8 *)(deadline.unknown + 0xc0);
    *(undefined8 *)(deadline.unknown + 0x8f) = *(undefined8 *)(deadline.unknown + 0xd8);
    *(undefined8 *)(deadline.unknown + 0x87) = *(undefined8 *)(deadline.unknown + 0xd0);
    *(undefined8 *)(deadline.unknown + 0x5f) = *(undefined8 *)(deadline.unknown + 0xa8);
    *(undefined8 *)(deadline.unknown + 0x57) = *(undefined8 *)(deadline.unknown + 0xa0);
    *pppcVar77 = (code **)0x0;
    *(code *)(pppcVar77 + 1) = (code)0x1;
    uVar64 = *(undefined8 *)(deadline.unknown + 0x50);
    uVar102 = *(undefined8 *)(deadline.unknown + 0x68);
    uVar99 = *(undefined8 *)(deadline.unknown + 0x60);
    *(undefined8 *)((long)pppcVar77 + 0x11) = *(undefined8 *)(deadline.unknown + 0x58);
    *(undefined8 *)((long)pppcVar77 + 9) = uVar64;
    uVar78 = *(undefined8 *)(deadline.unknown + 0x78);
    uVar64 = *(undefined8 *)(deadline.unknown + 0x70);
    uVar104 = *(undefined8 *)(deadline.unknown + 0x88);
    uVar103 = *(undefined8 *)(deadline.unknown + 0x80);
    uVar105 = *(undefined8 *)(deadline.unknown + 0x89);
    *(undefined8 *)((long)pppcVar77 + 0x4a) = *(undefined8 *)(deadline.unknown + 0x91);
    *(undefined8 *)((long)pppcVar77 + 0x42) = uVar105;
    *(undefined8 *)((long)pppcVar77 + 0x41) = uVar104;
    *(undefined8 *)((long)pppcVar77 + 0x39) = uVar103;
    *(undefined8 *)((long)pppcVar77 + 0x31) = uVar78;
    *(undefined8 *)((long)pppcVar77 + 0x29) = uVar64;
    *(undefined8 *)((long)pppcVar77 + 0x21) = uVar102;
    *(undefined8 *)((long)pppcVar77 + 0x19) = uVar99;
    puVar67 = &DAT_1005509d8;
    local_108[2] = (code ****)pppcVar69;
    FUN_1000087e4(&local_110,(code ****)((long)pcVar74 + 0x90),&DAT_1005509d8,&DAT_100422470);
    ppppcVar19 = (code ****)local_c0;
    FUN_10002a29c(ppppcVar19,&DAT_1005509d8,&DAT_100422470);
    auVar128._8_8_ = puVar67;
    auVar128._0_8_ = ppppcVar19;
    return auVar128;
  case (code)0x2b:
    uVar95 = (ulong)*(uint *)
                     PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100522678
    ;
    RVar15 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
    lVar20 = CONCAT71(uVar59,RVar15.value);
    (**(code **)(*(long *)(lVar20 + -8) + 0x68))(DVar21.unknown,uVar95,lVar20);
    CVar43.unknown = *(undefined **)((long)pcVar74 + 0xf8);
    _swift_retain();
    CVar43 = SwiftUI::Color::opacity(0.96,CVar43);
    *(undefined **)(DVar21.unknown + *(int *)((long)size + 0x34)) = CVar43.unknown;
    *(undefined2 *)(DVar21.unknown + *(int *)((long)size + 0x38)) = 0x100;
    AVar54 = SwiftUI::Alignment::get_center(CVar43.unknown);
    puVar67 = &DAT_100550918;
    FUN_1000087a0(&DAT_100550918,localized.unknown,qos.unknown,
                  PTR_SwiftUI__SwiftUI___ShapeView<undefined,undefined>_>SwiftUI__View_100521c78);
    (extension_SwiftUI)::SwiftUI::View::_background
              (ppppcVar81,DVar21.unknown,AVar54.unknown,uVar95,*(code ****)((long)pcVar74 + 0xe8),
               size,deadline.unknown,puVar67);
    FUN_10002a29c(DVar21.unknown,localized.unknown,qos.unknown);
    pppcVar69 = (code ***)&DAT_10054e1a8;
    FUN_1000087a0(&DAT_10054e1a8,&DAT_10054e1b0,&DAT_10041f0a0,
                  PTR_SwiftUI__SwiftUI___BackgroundModifier<undefined>_>SwiftUI__ViewModifier_100522800
                 );
    *(undefined **)((long)pcVar74 + 0x208) = deadline.unknown;
    *(code ****)((long)pcVar74 + 0x210) = pppcVar69;
    *(undefined **)((long)pcVar74 + 0x80) = deadline.unknown;
    pppcVar69 = (code ***)
                PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288
    ;
    _swift_getWitnessTable
              (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
               *(code ****)((long)pcVar74 + 0x100),(code ****)((long)pcVar74 + 0x208));
    pppcVar77 = *(code ****)((long)pcVar74 + 0x68);
    ppcVar89 = pppcVar77[2];
    pppcVar94 = *(code ****)((long)pcVar74 + 0x90);
    (*(code *)ppcVar89)(pppcVar94,ppppcVar81,*(code ****)((long)pcVar74 + 0x100));
    ppcVar68 = pppcVar77[1];
    (*(code *)ppcVar68)(ppppcVar81,*(code ****)((long)pcVar74 + 0x100));
    pppcVar90 = *(code ****)((long)pcVar74 + 0x78);
    *(code ****)((long)pcVar74 + 0xe8) = pppcVar90;
    (*(code *)PTR____chkstk_darwin_100521118)();
    pppcVar90 = (code ***)((long)pppcVar90 - (long)*(code ****)((long)pcVar74 + 0x70));
    (*(code *)ppcVar89)(pppcVar90,pppcVar94,*(code ****)((long)pcVar74 + 0x100));
    *(code ****)((long)pcVar74 + 0x88) = pppcVar90;
    pppcVar82 = *(code ****)((long)pcVar74 + 0xa0);
    ppcVar89 = pppcVar82[-1];
    (*(code *)PTR____chkstk_darwin_100521118)(ppcVar89[8]);
    puVar32 = PTR___protocol_witness_table_for_SwiftUI_AnyView___SwiftUI_View_in_SwiftUI_1005234e8;
    lVar20 = (long)pppcVar90 - (extraout_x8_31 + 0xfU & 0xfffffffffffffff0);
    FUN_100008acc(lVar20,pppcVar90,PTR___type_metadata_for_SwiftUI_AnyView_1005234f8,
                  *(code ****)((long)pcVar74 + 0x100),
                  PTR___protocol_witness_table_for_SwiftUI_AnyView___SwiftUI_View_in_SwiftUI_1005234e8
                  ,pppcVar69);
    *(undefined **)((long)pcVar74 + 0x1f8) = puVar32;
    *(code ****)((long)pcVar74 + 0x200) = pppcVar69;
    puVar67 = 
    PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830;
    _swift_getWitnessTable
              (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830
               ,pppcVar82,(code ****)((long)pcVar74 + 0x1f8));
    pppcVar69 = (code ***)&DAT_10054a678;
    FUN_1000087a0(&DAT_10054a678,&DAT_10054a650,&DAT_10041d1e0,
                  PTR_SwiftUI__SwiftUI___ContentShapeModifier<undefined>_>SwiftUI__ViewModifier_100522950
                 );
    pppcVar77 = (code ***)
                PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288
    ;
    *(code ****)((long)pcVar74 + 0x1e8) = *(code ****)((long)pcVar74 + 0x80);
    *(code ****)((long)pcVar74 + 0x1f0) = pppcVar69;
    pppcVar94 = (code ***)
                PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288
    ;
    _swift_getWitnessTable
              (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
               *(code ****)((long)pcVar74 + 0xd0),(code ****)((long)pcVar74 + 0x1e8));
    pppcVar69 = (code ***)&DAT_10054a688;
    FUN_1000087a0(&DAT_10054a688,&DAT_10054a658,&DAT_10041b640,
                  PTR_SwiftUI__SwiftUI___BackgroundStyleModifier<undefined>_>SwiftUI__ViewModifier_100522ac8
                 );
    *(code ****)((long)pcVar74 + 0x1d8) = pppcVar94;
    *(code ****)((long)pcVar74 + 0x1e0) = pppcVar69;
    pppcVar94 = pppcVar77;
    _swift_getWitnessTable
              (pppcVar77,*(code ****)((long)pcVar74 + 0xd8),(code ****)((long)pcVar74 + 0x1d8));
    pppcVar69 = (code ***)&DAT_10054a6b0;
    FUN_1000087a0(&DAT_10054a6b0,&DAT_10054a660,&DAT_10041d1f0,
                  PTR_SwiftUI__SwiftUI___ClipEffect<undefined>_>SwiftUI__ViewModifier_100521d38);
    *(code ****)((long)pcVar74 + 0x1c8) = pppcVar94;
    *(code ****)((long)pcVar74 + 0x1d0) = pppcVar69;
    pppcVar94 = pppcVar77;
    _swift_getWitnessTable
              (pppcVar77,*(code ****)((long)pcVar74 + 0xf0),(code ****)((long)pcVar74 + 0x1c8));
    pppcVar69 = (code ***)&DAT_10054a6c0;
    FUN_1000087a0(&DAT_10054a6c0,&DAT_10054a668,&DAT_10041b650,
                  PTR_SwiftUI__SwiftUI___OverlayModifier<undefined>_>SwiftUI__ViewModifier_100522438
                 );
    *(code ****)((long)pcVar74 + 0x1b8) = pppcVar94;
    *(code ****)((long)pcVar74 + 0x1c0) = pppcVar69;
    ppppcVar19 = *(code *****)((long)pcVar74 + 0x80);
    _swift_getWitnessTable
              (pppcVar77,*(code ****)((long)pcVar74 + 0xe0),(code ****)((long)pcVar74 + 0x1b8));
    *(undefined **)((long)pcVar74 + 0x1a8) = puVar32;
    *(code ****)((long)pcVar74 + 0x1b0) = pppcVar77;
    puVar62 = 
    PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830;
    _swift_getWitnessTable
              (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830
               ,*(code ****)((long)pcVar74 + 200),(code ****)((long)pcVar74 + 0x1a8));
    pppcVar83 = *(code ****)((long)pcVar74 + 0xa8);
    FUN_100008a08(pppcVar83,lVar20,pppcVar82,*(code ****)((long)pcVar74 + 200),puVar67,puVar62);
    _swift_release(*(code ****)((long)pcVar74 + 0xf8));
    pppcVar94 = *(code ****)((long)pcVar74 + 0x100);
    (*ppcVar89[1])(lVar20,pppcVar82);
    (*(code *)ppcVar68)(pppcVar90,pppcVar94);
    (*(code *)ppcVar68)(*(code ****)((long)pcVar74 + 0x90),pppcVar94);
    pppcVar87 = *(code ****)((long)pcVar74 + 200);
    pppcVar69 = (code ***)&DAT_10054e1a8;
    FUN_1000087a0(&DAT_10054e1a8,&DAT_10054e1b0,&DAT_10041f0a0,
                  PTR_SwiftUI__SwiftUI___BackgroundModifier<undefined>_>SwiftUI__ViewModifier_100522800
                 );
    pppcVar77 = (code ***)
                PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288
    ;
    puVar67 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
    local_108[4] = ppppcVar19;
    local_e0[0] = pppcVar69;
    _swift_getWitnessTable
              (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
               pppcVar94,local_108 + 4);
    puVar62 = 
    PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830;
    local_108[2] = (code ****)puVar32;
    pppcVar94 = (code ***)
                PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830
    ;
    local_108[3] = (code ****)puVar67;
    _swift_getWitnessTable
              (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830
               ,pppcVar82,local_108 + 2);
    puVar67 = &DAT_10054a678;
    FUN_1000087a0(&DAT_10054a678,&DAT_10054a650,&DAT_10041d1e0,
                  PTR_SwiftUI__SwiftUI___ContentShapeModifier<undefined>_>SwiftUI__ViewModifier_100522950
                 );
    local_108[0] = ppppcVar19;
    local_108[1] = (code ****)puVar67;
    pppcVar90 = pppcVar77;
    _swift_getWitnessTable(pppcVar77,*(code ****)((long)pcVar74 + 0xd0),local_108);
    pppcVar69 = (code ***)&DAT_10054a688;
    FUN_1000087a0(&DAT_10054a688,&DAT_10054a658,&DAT_10041b640,
                  PTR_SwiftUI__SwiftUI___BackgroundStyleModifier<undefined>_>SwiftUI__ViewModifier_100522ac8
                 );
    *(code ****)((long)pcVar74 + 600) = pppcVar90;
    *(code ****)((long)pcVar74 + 0x260) = pppcVar69;
    pppcVar90 = pppcVar77;
    _swift_getWitnessTable
              (pppcVar77,*(code ****)((long)pcVar74 + 0xd8),(code ****)((long)pcVar74 + 600));
    pppcVar69 = (code ***)&DAT_10054a6b0;
    FUN_1000087a0(&DAT_10054a6b0,&DAT_10054a660,&DAT_10041d1f0,
                  PTR_SwiftUI__SwiftUI___ClipEffect<undefined>_>SwiftUI__ViewModifier_100521d38);
    *(code ****)((long)pcVar74 + 0x248) = pppcVar90;
    *(code ****)((long)pcVar74 + 0x250) = pppcVar69;
    pppcVar90 = pppcVar77;
    _swift_getWitnessTable
              (pppcVar77,*(code ****)((long)pcVar74 + 0xf0),(code ****)((long)pcVar74 + 0x248));
    pppcVar69 = (code ***)&DAT_10054a6c0;
    FUN_1000087a0(&DAT_10054a6c0,&DAT_10054a668,&DAT_10041b650,
                  PTR_SwiftUI__SwiftUI___OverlayModifier<undefined>_>SwiftUI__ViewModifier_100522438
                 );
    *(code ****)((long)pcVar74 + 0x238) = pppcVar90;
    *(code ****)((long)pcVar74 + 0x240) = pppcVar69;
    _swift_getWitnessTable
              (pppcVar77,*(code ****)((long)pcVar74 + 0xe0),(code ****)((long)pcVar74 + 0x238));
    *(undefined **)((long)pcVar74 + 0x228) = puVar32;
    *(code ****)((long)pcVar74 + 0x230) = pppcVar77;
    pppcVar69 = (code ***)puVar62;
    _swift_getWitnessTable(puVar62,pppcVar87,(code ****)((long)pcVar74 + 0x228));
    *(code ****)((long)pcVar74 + 0x218) = pppcVar94;
    *(code ****)((long)pcVar74 + 0x220) = pppcVar69;
    pppcVar69 = *(code ****)((long)pcVar74 + 0xb8);
    _swift_getWitnessTable(puVar62,pppcVar69,(code ****)((long)pcVar74 + 0x218));
    pppcVar77 = *(code ****)((long)pcVar74 + 0xb0);
    (*(code *)pppcVar77[2])(*(code ****)((long)pcVar74 + 0xc0),pppcVar83,pppcVar69);
    (*(code *)pppcVar77[1])(pppcVar83,pppcVar69);
    auVar136._8_8_ = pppcVar69;
    auVar136._0_8_ = pppcVar83;
    return auVar136;
  case (code)0x2e:
    *(char **)((long)size + 0x30) = pcVar71;
    auVar135._8_8_ = table.unknown;
    auVar135._0_8_ = size;
    return auVar135;
  case (code)0x2f:
switchD_1000a5400_caseD_2f:
    *(double *)((long)AVar92.unknown + (long)*(int *)((long)local_1f8[1] + 0x14)) =
         (double)param_2.unknown / 100.0;
    ppppcVar66 = local_1f8[0];
    pcVar74 = FUN_1000b0fac;
    FUN_100029504(AVar92.unknown,local_1f8[0],FUN_1000b0fac);
    _swift_storeEnumTagMultiPayload(ppppcVar66,local_208[0],1);
    goto switchD_1000a5400_caseD_12;
  case (code)0x39:
  case (code)0x5d:
    goto switchD_1000a5400_caseD_39;
  case (code)0x3c:
  case (code)0x40:
  case (code)0x61:
  case (code)0x6b:
  case (code)0x6f:
  case (code)0x73:
  case (code)0x77:
  case (code)0x7b:
  case (code)0x7f:
  case (code)0x89:
  case (code)0x93:
  case (code)0x97:
  case (code)0x9b:
  case (code)0x9f:
  case (code)0xa3:
  case (code)0xa7:
  case (code)0xe2:
  case (code)0xfb:
    goto switchD_1000a5400_caseD_3c;
  case (code)0x44:
    goto switchD_1000a5400_caseD_44;
  case (code)0x45:
switchD_1000a5400_caseD_45:
    *(double *)((long)ppppcVar75 + (long)*(int *)((long)local_228 + 0x14)) =
         (double)param_2.unknown / (double)param_3;
    pcVar74 = FUN_1000b0ffc;
    FUN_100029504(ppppcVar75,localized.unknown,FUN_1000b0ffc);
    _swift_storeEnumTagMultiPayload(localized.unknown,deadline.unknown,0);
    FUN_1000036d0(&DAT_10054fc58,FUN_1000b0ffc,&TargetProtocolConformanceDescriptor_100421610);
    FUN_1000036d0(&DAT_10054fc60,FUN_10009835c,&TargetProtocolConformanceDescriptor_100420718);
    ppppcVar23 = ppppcVar75;
    break;
  case (code)0x48:
  case (code)0x4c:
  case (code)0xdf:
  case (code)0xe4:
  case (code)0xf3:
    goto switchD_1000a5400_caseD_48;
  case (code)0x52:
    goto switchD_1000a5400_caseD_52;
  case (code)0x5e:
    goto switchD_1000a5400_caseD_5e;
  case (code)0x60:
    goto switchD_1000a5400_caseD_60;
  case (code)0x62:
    *(ulong *)((long)size + (long)*(int *)((long)param_10.unknown + 0x14)) =
         (ulong)((int)pcVar74 - 1);
    auVar148._8_8_ = table.unknown;
    auVar148._0_8_ = DVar21.unknown;
    return auVar148;
  case (code)0x67:
  case (code)0x8f:
  case (code)0xdd:
  case (code)0xf1:
    goto switchD_1000a5400_caseD_67;
  case (code)0x68:
  case (code)0x90:
    goto switchD_1000a5400_caseD_68;
  case (code)0x6a:
  case (code)0x6e:
  case (code)0x72:
  case (code)0x76:
  case (code)0x7a:
  case (code)0x7e:
    ppppcVar70[4] = (code ***)&stack0xfffffffffffffff0;
    ppppcVar70[5] = (code ***)0x1000a53c8;
    lVar20 = 0x13f;
    FUN_10040211c();
    if ((code ****)0x3f < table.unknown) {
      uVar64 = 0x3f;
      goto LAB_1000c5048;
    }
    ppppcVar70[1] = (code ***)(*(long *)(lVar20 + -8) + 0x40);
    pcVar74 = (code *)DVar21.unknown;
    goto switchD_1000a5400_caseD_60;
  case (code)0x6c:
  case (code)0x70:
    *(undefined **)((long)pcVar74 + 0xd98) = localized.unknown;
    *(char **)((long)pcVar74 + 0xda0) = pcVar71;
    *(code *)((long)pcVar74 + 0xda8) = (code)0x0;
    pppcVar69 = (code ***)&DAT_10054b220;
    FUN_1000087e4((code ****)((long)pcVar74 + 0xd20),(code ****)((long)pcVar74 + 0x7e0),
                  &DAT_10054b220,&DAT_100422400);
    AVar54.unknown = (undefined *)((long)pcVar74 + 0xd68);
    FUN_10002a29c(AVar54.unknown,&DAT_10054b220,&DAT_100422400);
    AVar54 = SwiftUI::Alignment::get_center(AVar54);
    pppcVar77 = *(code ****)((long)pcVar74 + 0xbd8);
    local_c0[1] = *(code *****)((long)pcVar74 + 0xbc8);
    local_c0[0] = *(code *****)((long)pcVar74 + 0xbc0);
    local_b0 = *(code *****)((long)pcVar74 + 0xbd0);
    local_a0 = *(code **)((long)pcVar74 + 0xbe0);
    local_c8 = *(code ****)((long)pcVar74 + 3000);
    local_d0 = *(code ****)((long)pcVar74 + 0xbb0);
    local_e0[1] = *(code ****)((long)pcVar74 + 0xba8);
    local_e0[0] = *(code ****)((long)pcVar74 + 0xba0);
    local_98 = (code ****)size;
    ppppcVar70[-2] = (code ***)AVar54.unknown;
    ppppcVar70[-1] = pppcVar69;
    *(code *)(ppppcVar70 + -3) = SUB81(ppppcVar81,0);
    ppppcVar70[-4] = (code ***)0x0;
    *(code *)(ppppcVar70 + -5) = SUB81(ppppcVar81,0);
    ppppcVar70[-6] = (code ***)0x0;
    SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
    *(code *****)((long)pcVar74 + 0xc18) = local_c0[1];
    *(code *****)((long)pcVar74 + 0xc10) = local_c0[0];
    *(code ****)((long)pcVar74 + 0xc28) = pppcVar77;
    *(code *****)((long)pcVar74 + 0xc20) = local_b0;
    *(code *****)((long)pcVar74 + 0xc38) = local_98;
    *(code **)((long)pcVar74 + 0xc30) = local_a0;
    *(code ****)((long)pcVar74 + 0xc08) = local_c8;
    *(code ****)((long)pcVar74 + 0xc00) = local_d0;
    *(code ****)((long)pcVar74 + 0xbf8) = local_e0[1];
    *(code ****)((long)pcVar74 + 0xbf0) = local_e0[0];
    *(code ****)((long)pcVar74 + 0x9f8) = *(code ****)((long)pcVar74 + 0xbc8);
    *(code ****)((long)pcVar74 + 0x9f0) = *(code ****)((long)pcVar74 + 0xbc0);
    *(code ****)((long)pcVar74 + 0xa08) = *(code ****)((long)pcVar74 + 0xbd8);
    *(code ****)((long)pcVar74 + 0xa00) = *(code ****)((long)pcVar74 + 0xbd0);
    *(code ****)((long)pcVar74 + 0x9e8) = *(code ****)((long)pcVar74 + 3000);
    *(code ****)((long)pcVar74 + 0x9e0) = *(code ****)((long)pcVar74 + 0xbb0);
    *(code ****)((long)pcVar74 + 0x9d8) = *(code ****)((long)pcVar74 + 0xba8);
    *(code ****)((long)pcVar74 + 0x9d0) = *(code ****)((long)pcVar74 + 0xba0);
    *(code ****)((long)pcVar74 + 0xa10) = *(code ****)((long)pcVar74 + 0xbe0);
    *(ushort **)((long)pcVar74 + 0xa18) = size;
    FUN_1000087e4(local_e0,(code ****)((long)pcVar74 + 0x7e0),&DAT_100550970,&DAT_100422408);
    FUN_10002a29c((code ****)((long)pcVar74 + 0x9d0),&DAT_100550970,&DAT_100422408);
    in_register_00005028 = *(code ****)((long)pcVar74 + 0xc78);
    param_3 = *(code ****)((long)pcVar74 + 0xc70);
    in_register_00005068 = *(code ****)((long)pcVar74 + 0xc88);
    param_5 = *(code ****)((long)pcVar74 + 0xc80);
    *(code ****)((long)pcVar74 + 0xaa8) = *(code ****)((long)pcVar74 + 0xc78);
    *(code ****)((long)pcVar74 + 0xaa0) = *(code ****)((long)pcVar74 + 0xc70);
    *(code ****)((long)pcVar74 + 0xab8) = *(code ****)((long)pcVar74 + 0xc88);
    *(code ****)((long)pcVar74 + 0xab0) = *(code ****)((long)pcVar74 + 0xc80);
    in_register_00005048 = *(code ****)((long)pcVar74 + 0xc98);
    param_4 = *(code ****)((long)pcVar74 + 0xc90);
    in_register_000050a8 = *(code ****)((long)pcVar74 + 0xca8);
    param_7 = *(code ****)((long)pcVar74 + 0xca0);
    *(code ****)((long)pcVar74 + 0xac8) = *(code ****)((long)pcVar74 + 0xc98);
    *(code ****)((long)pcVar74 + 0xac0) = *(code ****)((long)pcVar74 + 0xc90);
    *(code ****)((long)pcVar74 + 0xad8) = *(code ****)((long)pcVar74 + 0xca8);
    *(code ****)((long)pcVar74 + 0xad0) = *(code ****)((long)pcVar74 + 0xca0);
    in_register_00005088 = *(code ****)((long)pcVar74 + 0xc38);
    param_6 = *(code ****)((long)pcVar74 + 0xc30);
    in_register_000050e8 = *(code ****)((long)pcVar74 + 0xc48);
    param_9 = *(code ****)((long)pcVar74 + 0xc40);
    *(code ****)((long)pcVar74 + 0xa68) = *(code ****)((long)pcVar74 + 0xc38);
    *(code ****)((long)pcVar74 + 0xa60) = *(code ****)((long)pcVar74 + 0xc30);
    *(code ****)((long)pcVar74 + 0xa78) = *(code ****)((long)pcVar74 + 0xc48);
    *(code ****)((long)pcVar74 + 0xa70) = *(code ****)((long)pcVar74 + 0xc40);
    in_register_00005008 = *(code *****)((long)pcVar74 + 0xc58);
    param_2.unknown = *(undefined **)((long)pcVar74 + 0xc50);
    in_register_000050c8 = *(code ****)((long)pcVar74 + 0xc58);
    param_8 = *(code ****)((long)pcVar74 + 0xc50);
    in_register_00005208 = *(code ****)((long)pcVar74 + 0xc68);
    pppcVar77 = *(code ****)((long)pcVar74 + 0xc60);
    in_register_00005228 = *(code ****)((long)pcVar74 + 0xc68);
    pppcVar94 = *(code ****)((long)pcVar74 + 0xc60);
    goto switchD_1000a5400_caseD_14;
  case (code)0x74:
  case (code)0x7c:
    goto switchD_1000a5400_caseD_74;
  case (code)0x75:
  case (code)0x79:
  case (code)0x7d:
  case (code)0x9d:
  case (code)0xa1:
  case (code)0xa5:
    AVar46.unknown = (undefined *)&DAT_100553dc0;
    AVar91.unknown = AVar92.unknown;
    AVar92.unknown = DVar21.unknown;
    local_1c0[1] = (code ***)DVar21.unknown;
    goto switchD_1000a5400_caseD_d;
  case (code)0x78:
    goto switchD_1000a5400_caseD_78;
  case (code)0x80:
    _swift_release();
    _swift_release(*(code ****)((long)pcVar74 + 0x50));
    pppcVar69 = *(code ****)((long)pcVar74 + 0x58);
    _swift_bridgeObjectRelease(pppcVar69);
    auVar134._8_8_ = table.unknown;
    auVar134._0_8_ = pppcVar69;
    return auVar134;
  case (code)0x86:
    *(undefined **)pcVar71 = qos.unknown;
    *(code *****)((long)pcVar71 + 8) = ppppcVar81;
    iVar7 = *(int *)((long)AVar92.unknown + 0x18);
    *(undefined **)((long)param_10.unknown + (long)iVar7) = DVar21.unknown;
    *(undefined **)((code *)((long)param_10.unknown + (long)iVar7) + 8) = deadline.unknown;
    pcVar76 = (code *)((long)param_10.unknown + (long)*(int *)((long)AVar92.unknown + 0x1c));
    *(undefined8 *)pcVar76 = 0xd000000000000012;
    *(ushort **)(pcVar76 + 8) = size;
    param_10.unknown = (undefined *)((long)local_98 + (long)((long)pcVar74 + (long)local_a0));
    pcVar74 = (code *)0xd000000000000012;
    stringLiteral.bridgeObject = (void *)0x80000001004dd2a0;
    stringLiteral.str = (char *)0xd000000000000013;
    LVar29 = LocalizationValue::_init(stringLiteral);
    Foundation::Locale::get_current((Locale)LVar29.unknown);
    SVar132 = (extension_Foundation)::Swift::String::_init(localized,(Locale)0x0);
    pcVar71 = 
    "Get gentle reminders when wallpapers are paused or when Wallper switches to energy-saving mode."
    ;
    size = (ushort *)ppppcVar13;
  case (code)0xfc:
    stringLiteral_00.str = (char *)((ulong)pcVar74 | 0x4d);
    stringLiteral_00.bridgeObject = (void *)((ulong)((long)pcVar71 + -0x20) | 0x8000000000000000);
    LVar29 = LocalizationValue::_init(stringLiteral_00);
    Foundation::Locale::get_current((Locale)LVar29.unknown);
    table.unknown = (undefined *)0x0;
    DVar21.unknown = localized.unknown;
    goto switchD_1000a5400_caseD_ae;
  case (code)0x87:
  case (code)0xaf:
  case (code)0xd9:
  case (code)0xed:
  case (code)0xfd:
    goto switchD_1000a5400_caseD_87;
  case (code)0x88:
    goto switchD_1000a5400_caseD_88;
  case (code)0x8a:
    DVar25 = Foundation::Date::typeMetadataAccessor();
    pcVar76 = (code *)((long)size + (long)localized.unknown);
    (**(code **)(*(long *)(DVar25.unknown + -8) + 0x28))
              ((code *)((long)pcVar74 + (long)localized.unknown),pcVar76,DVar25.unknown);
    *(code *)((long)pcVar74 + (long)*(int *)((long)ppppcVar66 + 0x1c)) =
         *(code *)((long)size + (long)*(int *)((long)ppppcVar66 + 0x1c));
    lVar20 = (long)*(int *)(ppppcVar66 + 4);
    uVar64 = *(undefined8 *)((long)pcVar74 + lVar20);
    *(undefined8 *)((long)pcVar74 + lVar20) = *(undefined8 *)((long)size + lVar20);
    _swift_bridgeObjectRelease(uVar64);
    *(code *)((long)pcVar74 + (long)*(int *)((long)ppppcVar66 + 0x24)) =
         *(code *)((long)size + (long)*(int *)((long)ppppcVar66 + 0x24));
    *(code *)((long)pcVar74 + (long)*(int *)(ppppcVar66 + 5)) =
         *(code *)((long)size + (long)*(int *)(ppppcVar66 + 5));
    *(undefined8 *)((long)pcVar74 + (long)*(int *)((long)ppppcVar66 + 0x2c)) =
         *(undefined8 *)((long)size + (long)*(int *)((long)ppppcVar66 + 0x2c));
    *(undefined8 *)((long)pcVar74 + (long)*(int *)(ppppcVar66 + 6)) =
         *(undefined8 *)((long)size + (long)*(int *)(ppppcVar66 + 6));
    lVar20 = (long)*(int *)((long)ppppcVar66 + 0x34);
    uVar64 = *(undefined8 *)((long)pcVar74 + lVar20);
    *(undefined8 *)((long)pcVar74 + lVar20) = *(undefined8 *)((long)size + lVar20);
    _swift_bridgeObjectRelease(uVar64);
    lVar20 = (long)*(int *)((long)param_10.unknown + 0x14);
    uVar64 = *(undefined8 *)((long)pcVar74 + lVar20);
    *(undefined8 *)((long)pcVar74 + lVar20) = *(undefined8 *)((long)size + lVar20);
    _swift_bridgeObjectRelease(uVar64);
    iVar7 = *(int *)((long)param_10.unknown + 0x1c);
    *(undefined8 *)((long)pcVar74 + (long)*(int *)((long)param_10.unknown + 0x18)) =
         *(undefined8 *)((long)size + (long)*(int *)((long)param_10.unknown + 0x18));
    *(code *)((long)pcVar74 + (long)iVar7) = *(code *)((long)size + (long)iVar7);
    auVar147._8_8_ = pcVar76;
    auVar147._0_8_ = pcVar74;
    return auVar147;
  case (code)0x92:
  case (code)0x96:
  case (code)0x9a:
  case (code)0x9e:
  case (code)0xa2:
  case (code)0xa6:
    pcVar76 = (code *)((long)pcVar74 + (long)pcVar71);
    uVar64 = *(undefined8 *)((code *)((long)size + (long)pcVar71) + 8);
    uVar78 = *(undefined8 *)(pcVar76 + 8);
    *(undefined8 *)pcVar76 = *(undefined8 *)((long)size + (long)pcVar71);
    *(undefined8 *)(pcVar76 + 8) = uVar64;
    _swift_bridgeObjectRelease(uVar78);
    *(code *)((long)pcVar74 + (long)*(int *)((long)param_10.unknown + 0x40)) =
         *(code *)((long)size + (long)*(int *)((long)param_10.unknown + 0x40));
    pcVar71 = (char *)(long)*(int *)((long)param_10.unknown + 0x44);
    ppppcVar72 = *(code *****)((long)size + (long)pcVar71);
    goto switchD_1000a5400_caseD_88;
  case (code)0x94:
  case (code)0x98:
    goto switchD_1000a5400_caseD_94;
  case (code)0x9c:
  case (code)0xa4:
    goto switchD_1000a5400_caseD_9c;
  case (code)0xa0:
    AVar46.unknown = (undefined *)0x4067c00000000000;
    goto switchD_1000a5400_caseD_9c;
  case (code)0xa8:
    *(char **)((long)pcVar74 + 0x28) = pcVar71;
    pppcVar69 = *(code ****)((long)pcVar74 + 0x30);
    *(code ****)((long)pcVar74 + 0x30) = *(code ****)((long)size + 0x30);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(pppcVar69);
    *(code ****)((long)pcVar74 + 0x38) = *(code ****)((long)size + 0x38);
    *(code *)((long)pcVar74 + 0x40) = *(code *)((long)size + 0x40);
    lVar20 = 0;
    FUN_10009e280();
    pcVar76 = (code *)((long)pcVar74 + (long)*(int *)(lVar20 + 0x2c));
    pcVar96 = (code *)((long)size + (long)*(int *)(lVar20 + 0x2c));
    *(undefined8 *)pcVar76 = *(undefined8 *)pcVar96;
    lVar24 = 0;
    FUN_10015f8e8();
    iVar7 = *(int *)(lVar24 + 0x14);
    DVar25 = Foundation::Date::typeMetadataAccessor();
    pcVar61 = pcVar96 + iVar7;
    (**(code **)(*(long *)(DVar25.unknown + -8) + 0x18))(pcVar76 + iVar7,pcVar61,DVar25.unknown);
    *(undefined8 *)(pcVar76 + *(int *)(lVar24 + 0x18)) =
         *(undefined8 *)(pcVar96 + *(int *)(lVar24 + 0x18));
    pcVar76 = (code *)((long)pcVar74 + (long)*(int *)(lVar20 + 0x30));
    pcVar96 = (code *)((long)size + (long)*(int *)(lVar20 + 0x30));
    cVar65 = pcVar96[8];
    *(undefined8 *)pcVar76 = *(undefined8 *)pcVar96;
    pcVar76[8] = cVar65;
    *(undefined8 *)((long)pcVar74 + (long)*(int *)((long)param_10.unknown + 0x14)) =
         *(undefined8 *)((long)size + (long)*(int *)((long)param_10.unknown + 0x14));
    pcVar76 = (code *)((long)pcVar74 + (long)*(int *)((long)param_10.unknown + 0x18));
    pcVar96 = (code *)((long)size + (long)*(int *)((long)param_10.unknown + 0x18));
    *(undefined8 *)pcVar76 = *(undefined8 *)pcVar96;
    *(undefined8 *)(pcVar76 + 8) = *(undefined8 *)(pcVar96 + 8);
    *(code *)((long)pcVar74 + (long)*(int *)((long)param_10.unknown + 0x1c)) =
         *(code *)((long)size + (long)*(int *)((long)param_10.unknown + 0x1c));
    auVar126._8_8_ = pcVar61;
    auVar126._0_8_ = pcVar74;
    return auVar126;
  case (code)0xae:
    goto switchD_1000a5400_caseD_ae;
  case (code)0xb0:
    goto switchD_1000a5400_caseD_b0;
  case (code)0xb2:
    goto switchD_1000a5400_caseD_b2;
  case (code)0xb4:
    goto switchD_1000a5400_caseD_b4;
  case (code)0xb6:
    goto switchD_1000a5400_caseD_b6;
  case (code)0xb8:
    goto switchD_1000a5400_caseD_b8;
  case (code)0xba:
    goto switchD_1000a5400_caseD_ba;
  case (code)0xc0:
    goto switchD_1000a5400_caseD_c0;
  case (code)0xc2:
    goto switchD_1000a5400_caseD_c2;
  case (code)0xc4:
    goto switchD_1000a5400_caseD_c4;
  case (code)0xc6:
    goto switchD_1000a5400_caseD_c6;
  case (code)0xc8:
    goto switchD_1000a5400_caseD_c8;
  case (code)0xcc:
    goto switchD_1000a5400_caseD_cc;
  case (code)0xce:
    goto switchD_1000a5400_caseD_ce;
  case (code)0xd4:
    goto switchD_1000a5400_caseD_d4;
  case (code)0xd6:
    goto switchD_1000a5400_caseD_d6;
  case (code)0xd8:
    goto switchD_1000a5400_caseD_d8;
  case (code)0xdc:
    goto switchD_1000a5400_caseD_dc;
  case (code)0xde:
    goto switchD_1000a5400_caseD_de;
  case (code)0xe3:
  case (code)0xf7:
    FUN_1000087a0();
    ppppcVar70[0x11] = (code ***)param_10.unknown;
    ppppcVar70[0x12] = (code ***)DVar21.unknown;
    ppppcVar19 = (code ****)pcVar74;
    _swift_getWitnessTable(pcVar74,deadline.unknown,ppppcVar70 + 0x11);
    pppcVar69 = (code ***)&DAT_10054a688;
    FUN_1000087a0(&DAT_10054a688,&DAT_10054a658,&DAT_10041b640,
                  PTR_SwiftUI__SwiftUI___BackgroundStyleModifier<undefined>_>SwiftUI__ViewModifier_100522ac8
                 );
    ppppcVar70[0xf] = (code ***)ppppcVar19;
    ppppcVar70[0x10] = pppcVar69;
    ppppcVar19 = (code ****)pcVar74;
    _swift_getWitnessTable(pcVar74,ppppcVar81,ppppcVar70 + 0xf);
    pppcVar69 = (code ***)&DAT_10054a7a0;
    FUN_1000087a0(&DAT_10054a7a0,&DAT_10054a780,&DAT_10041e510,
                  PTR_SwiftUI__SwiftUI___ClipEffect<undefined>_>SwiftUI__ViewModifier_100521d38);
    ppppcVar70[0xd] = (code ***)ppppcVar19;
    ppppcVar70[0xe] = pppcVar69;
    ppppcVar19 = (code ****)pcVar74;
    _swift_getWitnessTable(pcVar74,AVar92.unknown,ppppcVar70 + 0xd);
    pppcVar69 = (code ***)&DAT_10054a7b0;
    FUN_1000087a0(&DAT_10054a7b0,&DAT_10054a788,&DAT_100425370,
                  PTR_SwiftUI__SwiftUI___OverlayModifier<undefined>_>SwiftUI__ViewModifier_100522438
                 );
    ppppcVar70[0xb] = (code ***)ppppcVar19;
    ppppcVar70[0xc] = pppcVar69;
    ppppcVar19 = (code ****)pcVar74;
    _swift_getWitnessTable(pcVar74,*ppppcVar70,ppppcVar70 + 0xb);
    ppppcVar70[9] =
         (code ***)
         PTR___protocol_witness_table_for_SwiftUI_AnyView___SwiftUI_View_in_SwiftUI_1005234e8;
    ppppcVar70[10] = (code ***)ppppcVar19;
    pppcVar77 = (code ***)
                PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830
    ;
    _swift_getWitnessTable
              (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830
               ,ppppcVar70[1],ppppcVar70 + 9);
    pppcVar69 = (code ***)&DAT_10054ae10;
    FUN_1000087a0(&DAT_10054ae10,&DAT_10054ae18,&DAT_10041e5d0,
                  PTR_SwiftUI__SwiftUI___TraitWritingModifier<undefined>_>SwiftUI__ViewModifier_100522978
                 );
    ppppcVar70[7] = pppcVar77;
    ppppcVar70[8] = pppcVar69;
    ppppcVar19 = (code ****)pcVar74;
    _swift_getWitnessTable(pcVar74,size,ppppcVar70 + 7);
    puVar67 = 
    PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_help(SwiftUI_LocalizedStringKey)__>_some>>_100523040
    ;
    local_88 = (code ****)size;
    local_80[0] = ppppcVar19;
    _swift_getOpaqueTypeMetadata2
              (0xff,&local_88,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_help(SwiftUI_LocalizedStringKey)__>_some>>_100523040
               ,0);
    OVar16 = Swift::Optional::typeMetadataAccessor();
    ppppcVar66 = (code ****)&local_88;
    local_88 = (code ****)size;
    local_80[0] = ppppcVar19;
    _swift_getOpaqueTypeConformance2(ppppcVar66,puVar67,1);
    ppppcVar70[6] = (code ***)ppppcVar66;
    _swift_getWitnessTable
              (PTR__SwiftUI__protocol_conformance_descriptor_for_<A_where_A:_SwiftUI_View>_A____SwiftUI_View_in_SwiftUI_>SwiftUI__View_100523818
               ,OVar16.value,ppppcVar70 + 6);
    ZVar40 = SwiftUI::ZStack::typeMetadataAccessor();
    MVar41 = SwiftUI::ModifiedContent::typeMetadataAccessor();
    FUN_100002fe4(&DAT_10054aa20,&DAT_10041bcb0);
    MVar42 = SwiftUI::ModifiedContent::typeMetadataAccessor();
    pppcVar69 = (code ***)PTR_SwiftUI__SwiftUI__ZStack<undefined>_>SwiftUI__View_1005234e0;
    _swift_getWitnessTable
              (PTR_SwiftUI__SwiftUI__ZStack<undefined>_>SwiftUI__View_1005234e0,ZVar40.unknown);
    ppppcVar70[4] = pppcVar69;
    ppppcVar70[5] =
         (code ***)
         PTR___protocol_witness_table_for_SwiftUI__FrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100521e80
    ;
    ppppcVar19 = (code ****)pcVar74;
    _swift_getWitnessTable(pcVar74,MVar41.unknown,ppppcVar70 + 4);
    pppcVar69 = (code ***)&DAT_10054aa18;
    FUN_1000087a0(&DAT_10054aa18,&DAT_10054aa20,&DAT_10041bcb0,
                  PTR_SwiftUI__SwiftUI___AnimationModifier<undefined>_>SwiftUI__ViewModifier_1005226a8
                 );
    ppppcVar70[2] = (code ***)ppppcVar19;
    ppppcVar70[3] = pppcVar69;
    _swift_getWitnessTable(pcVar74,MVar42.unknown,ppppcVar70 + 2);
    auVar146._8_8_ = MVar42.unknown;
    auVar146._0_8_ = pcVar74;
    return auVar146;
  case (code)0xe5:
    goto switchD_1000a5400_caseD_e5;
  case (code)0xe6:
    _swift_bridgeObjectRelease();
    *(code *)((long)pcVar74 + (long)*(int *)(ppppcVar66 + 8)) =
         *(code *)((long)size + (long)*(int *)(ppppcVar66 + 8));
    lVar20 = (long)*(int *)((long)ppppcVar66 + 0x44);
    uVar64 = *(undefined8 *)((long)pcVar74 + lVar20);
    *(undefined8 *)((long)pcVar74 + lVar20) = *(undefined8 *)((long)size + lVar20);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar64);
    *(code *)((long)pcVar74 + (long)*(int *)(ppppcVar66 + 9)) =
         *(code *)((long)size + (long)*(int *)(ppppcVar66 + 9));
    *(undefined8 *)((long)pcVar74 + (long)*(int *)((long)param_10.unknown + 0x14)) =
         *(undefined8 *)((long)size + (long)*(int *)((long)param_10.unknown + 0x14));
    pcVar76 = (code *)((long)pcVar74 + (long)*(int *)((long)param_10.unknown + 0x18));
    pcVar96 = (code *)((long)size + (long)*(int *)((long)param_10.unknown + 0x18));
    uVar78 = *(undefined8 *)(pcVar76 + 8);
    uVar64 = *(undefined8 *)(pcVar96 + 8);
    uVar99 = *(undefined8 *)pcVar96;
    *(undefined8 *)(pcVar76 + 8) = *(undefined8 *)(pcVar96 + 8);
    *(undefined8 *)pcVar76 = uVar99;
    _swift_retain(uVar64);
    _swift_release(uVar78);
    pcVar76 = (code *)((long)pcVar74 + (long)*(int *)((long)param_10.unknown + 0x1c));
    pcVar96 = (code *)((long)size + (long)*(int *)((long)param_10.unknown + 0x1c));
    uVar64 = *(undefined8 *)pcVar76;
    *(undefined8 *)pcVar76 = *(undefined8 *)pcVar96;
    _swift_retain();
    _swift_release(uVar64);
    *(undefined8 *)(pcVar76 + 8) = *(undefined8 *)(pcVar96 + 8);
    pcVar76 = (code *)((long)pcVar74 + (long)*(int *)((long)param_10.unknown + 0x20));
    pcVar96 = (code *)((long)size + (long)*(int *)((long)param_10.unknown + 0x20));
    *pcVar76 = *pcVar96;
    uVar64 = *(undefined8 *)(pcVar76 + 8);
    *(undefined8 *)(pcVar76 + 8) = *(undefined8 *)(pcVar96 + 8);
    _swift_retain();
    _swift_release(uVar64);
    auVar153._8_8_ = table.unknown;
    auVar153._0_8_ = pcVar74;
    return auVar153;
  case (code)0xe7:
    goto switchD_1000a5400_caseD_e7;
  case (code)0xe8:
  case (code)0xea:
    AVar46.unknown = DVar21.unknown;
    (*(code *)PTR____chkstk_darwin_100521118)();
    puVar97 = (undefined8 *)((long)ppppcVar70 - extraout_x12_08);
    AVar54 = SwiftUI::Alignment::get_center(AVar46.unknown);
    *puVar97 = AVar54.unknown;
    puVar97[1] = table.unknown;
    puVar67 = &DAT_100551cf0;
    FUN_100002f94(&DAT_100551cf0,&DAT_100423c00);
    FUN_1000e5c00((long)puVar97 + (long)*(int *)(puVar67 + 0x2c),pcVar74);
    local_88 = (code ****)*(code ****)((long)pcVar74 + 0x50);
    local_90 = (code *)*(code ****)((long)pcVar74 + 0x48);
    SVar55.unknown = &DAT_100551cf8;
    FUN_100002f94(&DAT_100551cf8,&DAT_100423c08);
    SwiftUI::State::get_wrappedValue(SVar55);
    pppcVar77 = (code ***)0x0;
    FUN_1000f69cc();
    puVar67 = &DAT_100551d00;
    FUN_1000036d0(&DAT_100551d00,FUN_1000f69cc,&TargetProtocolConformanceDescriptor_100423a78);
    pppcVar69 = pppcVar77;
    OVar56 = SwiftUI::ObservedObject::init(puVar67,pppcVar77,puVar67);
    puVar86 = (undefined8 *)((long)puVar97 + (long)*(int *)((long)param_10.unknown + 0x24));
    *puVar86 = OVar56.unknown;
    puVar86[1] = pppcVar69;
    SwiftUI::State::get_wrappedValue(SVar55);
    OVar56 = SwiftUI::ObservedObject::init(OVar56.unknown,pppcVar77,puVar67);
    pppcVar69 = pppcVar77;
    AVar54 = SwiftUI::Alignment::get_center(OVar56.unknown);
    *(undefined **)AVar92.unknown = AVar54.unknown;
    *(code ****)((long)AVar92.unknown + 8) = pppcVar69;
    puVar67 = &DAT_100551d08;
    FUN_100002f94(&DAT_100551d08,&DAT_100423c10);
    FUN_1000e6afc((code *)((long)AVar92.unknown + (long)*(int *)(puVar67 + 0x2c)),pcVar74);
    puVar67 = &DAT_100551ce8;
    FUN_1000087e4(puVar97,ppppcVar66,&DAT_100551ce8,&DAT_100423bf8);
    ppppcVar19 = (code ****)local_a0;
    FUN_1000087e4(AVar92.unknown,local_a0,DVar21.unknown,&DAT_100423bf0);
    ppppcVar80 = local_98;
    FUN_1000087e4(ppppcVar66,local_98,&DAT_100551ce8,&DAT_100423bf8);
    puVar62 = &DAT_100551d10;
    FUN_100002f94(&DAT_100551d10,&DAT_100423c18);
    pcVar74 = (code *)((long)ppppcVar80 + (long)*(int *)(puVar62 + 0x30));
    *(undefined **)pcVar74 = OVar56.unknown;
    *(code ****)(pcVar74 + 8) = pppcVar77;
    FUN_1000087e4(ppppcVar19,(code *)((long)ppppcVar80 + (long)*(int *)(puVar62 + 0x40)),
                  DVar21.unknown,&DAT_100423bf0);
    _swift_retain(pppcVar77);
    FUN_10002a29c(AVar92.unknown,DVar21.unknown,&DAT_100423bf0);
    FUN_10002a29c(puVar97,&DAT_100551ce8,&DAT_100423bf8);
    FUN_10002a29c(ppppcVar19,DVar21.unknown,&DAT_100423bf0);
    _swift_release(pppcVar77);
    FUN_10002a29c(ppppcVar66,&DAT_100551ce8,&DAT_100423bf8);
    auVar154._8_8_ = puVar67;
    auVar154._0_8_ = ppppcVar66;
    return auVar154;
  case (code)0xec:
    goto switchD_1000a5400_caseD_ec;
  case (code)0xf0:
    ppppcVar66 = (code ****)((long)pcVar71 - (long)DVar21.unknown);
    PVar51.unknown = &DAT_100551640;
    FUN_100002f94(&DAT_100551640,&DAT_1004232b8);
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(PVar51.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    deadline.unknown = (undefined *)((long)ppppcVar66 - extraout_x8_44);
    SwiftUI::PointerStyle::get_horizontalText(PVar51);
    PVar51 = SwiftUI::PointerStyle::typeMetadataAccessor();
    (**(code **)(*(long *)(PVar51.unknown + -8) + 0x38))(deadline.unknown,0,1,PVar51.unknown);
    FUN_100002f94(&DAT_100551580,&DAT_100423208);
    FUN_1000d7428();
    AVar92.unknown = (undefined *)ppppcVar66;
    goto switchD_1000a5400_caseD_dc;
  case (code)0xf2:
    FUN_100002f94();
    FUN_1000cefb4();
    qos.unknown = (undefined *)local_c0[0];
    SwiftUI::Button::_init();
    FUN_1000087a0(&DAT_100551330,&DAT_1005512c0,&DAT_100422f50,
                  PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
    FUN_100037164();
    pcVar71 = localized.unknown;
    DVar21.unknown = (undefined *)size;
switchD_1000a5400_caseD_de:
    ppppcVar19 = local_c0[1];
    (extension_SwiftUI)::SwiftUI::View::_buttonStyle(pcVar71);
    (*(code *)local_c8[1])(deadline.unknown,AVar92.unknown);
    ppppcVar80 = local_b0;
    FUN_10035127c(local_b0);
    (*(code *)local_e0[1][1])(localized.unknown,local_d0);
    CVar43 = SwiftUI::Color::get_black(localized.unknown);
    CVar44 = SwiftUI::Color::opacity(0.35,CVar43);
    _swift_release(CVar43.unknown);
    puVar67 = &DAT_100551338;
    FUN_100002f94(&DAT_100551338,&DAT_100422f90);
    pcVar74 = (code *)((long)ppppcVar80 + (long)*(int *)(puVar67 + 0x24));
    *(undefined **)pcVar74 = CVar44.unknown;
    *(undefined8 *)(pcVar74 + 0x10) = 0;
    *(undefined8 *)(pcVar74 + 8) = 0x4020000000000000;
    *(undefined8 *)(pcVar74 + 0x18) = 0x4010000000000000;
    lVar20 = 0;
    FUN_1000c8bec();
    iVar7 = *(int *)(lVar20 + 0x1c);
    (*(code *)ppppcVar19[7])(ppppcVar66,1,1,qos.unknown);
    lVar20 = (long)*(int *)(pppcVar69 + 6);
    FUN_1000087e4((code *)((long)DVar21.unknown + (long)iVar7),ppppcVar81,&DAT_10054a9c8,
                  &DAT_10041bbe0);
    FUN_1000087e4(ppppcVar66,(code *)((long)ppppcVar81 + lVar20),&DAT_10054a9c8,&DAT_10041bbe0);
    pppcVar77 = ppppcVar19[6];
    ppppcVar45 = ppppcVar81;
    (*(code *)pppcVar77)(ppppcVar81,1,qos.unknown);
    pppcVar69 = local_e0[0];
    if ((int)ppppcVar45 == 1) {
      FUN_10002a29c(ppppcVar66,&DAT_10054a9c8,&DAT_10041bbe0);
      pcVar74 = (code *)((long)ppppcVar81 + lVar20);
      (*(code *)pppcVar77)(pcVar74,1,qos.unknown);
      if ((int)pcVar74 == 1) {
        FUN_10002a29c(ppppcVar81,&DAT_10054a9c8,&DAT_10041bbe0);
        cVar65 = (code)0x0;
        goto LAB_1000c9248;
      }
    }
    else {
      FUN_1000087e4(ppppcVar81,local_e0[0],&DAT_10054a9c8,&DAT_10041bbe0);
      pcVar74 = (code *)((long)ppppcVar81 + lVar20);
      (*(code *)pppcVar77)(pcVar74,1,qos.unknown);
      ppppcVar45 = local_108[4];
      if ((int)pcVar74 != 1) {
        (*(code *)ppppcVar19[4])(local_108[4],(code *)((long)ppppcVar81 + lVar20),qos.unknown);
        puVar67 = &DAT_10054a130;
        FUN_1000036d0(&DAT_10054a130,PTR_typeMetadataAccessor_100520bd8,
                      PTR_Foundation__Foundation__UUID_>Swift__Equatable_100520bf8);
        bVar17 = Swift::Equatable::___infix(pppcVar69,ppppcVar45,qos.unknown,puVar67);
        pppcVar77 = ppppcVar19[1];
        (*(code *)pppcVar77)(ppppcVar45,qos.unknown);
        FUN_10002a29c(ppppcVar66,&DAT_10054a9c8,&DAT_10041bbe0);
        (*(code *)pppcVar77)(pppcVar69,qos.unknown);
        FUN_10002a29c(ppppcVar81,&DAT_10054a9c8,&DAT_10041bbe0);
        cVar65 = (code)!bVar17;
        goto LAB_1000c9248;
      }
      FUN_10002a29c(ppppcVar66,&DAT_10054a9c8,&DAT_10041bbe0);
      (*(code *)ppppcVar19[1])(pppcVar69,qos.unknown);
    }
    FUN_10002a29c(ppppcVar81,&DAT_10054a9c0,&DAT_100422d20);
    cVar65 = (code)0x1;
LAB_1000c9248:
    puVar67 = &DAT_100551340;
    FUN_100002f94(&DAT_100551340,&DAT_100422f98);
    ppppcVar66 = local_88;
    *(code *)((long)ppppcVar80 + (long)*(int *)(puVar67 + 0x24)) = cVar65;
    FUN_100029504(DVar21.unknown,local_88,FUN_1000ceee8);
    ppppcVar19 = local_98;
    puVar67 = &DAT_100529a08;
    _swift_allocObject(&DAT_100529a08,(code *)((long)local_98 + (long)local_90),(ulong)local_a0 | 7)
    ;
    FUN_100007e64(ppppcVar66,(code *)((long)ppppcVar19 + (long)puVar67),FUN_1000ceee8);
    puVar62 = &DAT_100551348;
    puVar32 = &DAT_100422fa0;
    FUN_100002f94(&DAT_100551348,&DAT_100422fa0);
    iVar7 = *(int *)(puVar62 + 0x24);
    *(code **)((long)ppppcVar80 + (long)iVar7) = FUN_1000cf2ac;
    *(undefined **)((code *)((long)ppppcVar80 + (long)iVar7) + 8) = puVar67;
    auVar149._8_8_ = puVar32;
    auVar149._0_8_ = puVar62;
    return auVar149;
  case (code)0xf6:
    goto switchD_1000a5400_caseD_f6;
  case (code)0xf8:
    goto switchD_1000a5400_caseD_f8;
  case (code)0xfa:
    *(code *)((long)pcVar74 + (long)pcVar71) = SUB81(ppppcVar72,0);
    auVar143._8_8_ = table.unknown;
    auVar143._0_8_ = pcVar74;
    return auVar143;
  }
  pppcVar77 = local_218;
  (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)localized.unknown);
  FUN_1000087e4(pppcVar77,AVar92.unknown,&DAT_10054fbc0,&DAT_1004214e0);
  _swift_storeEnumTagMultiPayload(AVar92.unknown,local_148,1);
  FUN_1000b1264();
  FUN_1000b12f4();
  ppppcVar19 = local_130[0];
  (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init(storage);
  FUN_10002a29c(pppcVar77,&DAT_10054fbc0,&DAT_1004214e0);
  ppppcVar66 = local_c0[0];
  FUN_1000087e4(ppppcVar19,local_c0[0],&DAT_10054fbf0,&DAT_100421510);
  _swift_storeEnumTagMultiPayload(ppppcVar66,local_d0,0);
  FUN_1000b11ec();
  FUN_1000b139c();
  ppppcVar80 = local_b0;
  (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)ppppcVar66);
  FUN_10002a29c(ppppcVar19,&DAT_10054fbf0,&DAT_100421510);
  ppppcVar19 = local_98;
  FUN_1000087e4(ppppcVar80,local_98,&DAT_10054fbf8,&DAT_100421518);
  _swift_storeEnumTagMultiPayload(ppppcVar19,pppcVar69,0);
  FUN_1000b1174();
  FUN_1000b1544();
  (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)ppppcVar19);
  FUN_10002a29c(ppppcVar80,&DAT_10054fbf8,&DAT_100421518);
  goto LAB_1000a6d44;
switchD_1000a5400_caseD_9c:
  param_13 = (code ****)0x0;
  SwiftUI::_FrameLayout::_init((Alignment)AVar46.unknown);
  puVar67 = &DAT_100551490;
  FUN_100002f94(&DAT_100551490,&DAT_100423150);
  ppppcVar45 = local_108[2];
  ppppcVar80 = local_108[1];
  ppppcVar19 = local_110;
  pcVar76 = (code *)((long)ppppcVar66 + (long)*(int *)(puVar67 + 0x24));
  *(code *****)(pcVar76 + 8) = local_108[0];
  *(code *****)pcVar76 = ppppcVar19;
  *(code *****)(pcVar76 + 0x18) = ppppcVar45;
  *(code *****)(pcVar76 + 0x10) = ppppcVar80;
  ppppcVar19 = local_108[3];
  *(code *****)(pcVar76 + 0x28) = local_108[4];
  *(code *****)(pcVar76 + 0x20) = ppppcVar19;
  pppcVar77 = *(code ****)(localized.unknown + 200);
  *(code ****)((long)pcVar74 + 0x498) = *(code ****)(localized.unknown + 0xd0);
  *(code ****)((long)pcVar74 + 0x490) = pppcVar77;
  SVar55.unknown = &DAT_100550940;
  FUN_100002f94(&DAT_100550940,&DAT_100422368);
  SwiftUI::State::get_wrappedValue(SVar55);
  iVar7 = *(int *)((long)param_10.unknown + 0x24);
  *(code *****)((long)pcVar74 + 0x20) = ppppcVar66;
  *(code ****)((long)ppppcVar66 + (long)iVar7) = *(code ****)((long)pcVar74 + 0x3d0);
  pppcVar77 = *(code ****)(localized.unknown + 0x90);
  *(code ****)((long)pcVar74 + 0x498) = *(code ****)(localized.unknown + 0x98);
  *(code ****)((long)pcVar74 + 0x490) = pppcVar77;
  *(code ****)((long)pcVar74 + 0x4a0) = *(code ****)(localized.unknown + 0xa0);
  SVar55.unknown = &DAT_10054ab90;
  FUN_100002f94(&DAT_10054ab90,&DAT_10041bdb0);
  *(undefined **)((long)pcVar74 + 0x38) = SVar55.unknown;
  SwiftUI::State::get_wrappedValue(SVar55);
  pppcVar77 = *(code ****)((long)pcVar74 + 0x3d8);
  if (pppcVar77 == (code ***)0x0) {
    pppcVar77 = *(code ****)(localized.unknown + 0x50);
    *(code ****)((long)pcVar74 + 0x498) = *(code ****)(localized.unknown + 0x58);
    *(code ****)((long)pcVar74 + 0x490) = pppcVar77;
    *(code ****)((long)pcVar74 + 0x4a0) = *(code ****)(localized.unknown + 0x60);
    SVar55.unknown = &DAT_100551460;
    pppcVar77 = (code ***)&DAT_100423128;
    FUN_100002f94();
    SwiftUI::State::get_wrappedValue(SVar55);
    if (*(code *)((long)pcVar74 + 0x3d8) == (code)0x1) {
      param_12.unknown = *(undefined **)localized.unknown;
    }
    else {
      param_12.unknown = *(undefined **)((long)pcVar74 + 0x3d0);
    }
    (**(code **)(localized.unknown + 0x10))();
  }
  else {
    param_12.unknown = *(undefined **)((long)pcVar74 + 0x3d0);
  }
  qos.unknown = (undefined *)((long)pcVar74 + 0x558);
  *(undefined **)((long)pcVar74 + 0x490) = param_12.unknown;
  *(code ****)((long)pcVar74 + 0x498) = pppcVar77;
  FUN_100026df4();
  table.unknown = PTR___type_metadata_for_Swift_String_100523a98;
  AVar46.unknown = (undefined *)SwiftUI::Text::_init();
  param_10.unknown = localized.unknown;
  goto switchD_1000a5400_caseD_78;
switchD_1000a5400_caseD_ae:
  SVar131 = (extension_Foundation)::Swift::String::_init((LocalizationValue)DVar21.unknown,table);
  pcVar74 = (code *)0x80000001004dd320;
  goto switchD_1000a5400_caseD_ec;
switchD_1000a5400_caseD_14:
  *(code *****)((long)pcVar74 + 0xa88) = in_register_00005008;
  *(undefined **)((long)pcVar74 + 0xa80) = param_2.unknown;
  *(code ****)((long)pcVar74 + 0xa98) = in_register_00005208;
  *(code ****)((long)pcVar74 + 0xa90) = pppcVar77;
  in_register_00005208 = *(code ****)((long)pcVar74 + 0xbf8);
  pppcVar77 = *(code ****)((long)pcVar74 + 0xbf0);
  in_register_00005268 = *(code ****)((long)pcVar74 + 0xc08);
  pppcVar83 = *(code ****)((long)pcVar74 + 0xc00);
  *(code ****)((long)pcVar74 + 0xa28) = *(code ****)((long)pcVar74 + 0xbf8);
  *(code ****)((long)pcVar74 + 0xa20) = *(code ****)((long)pcVar74 + 0xbf0);
  *(code ****)((long)pcVar74 + 0xa38) = *(code ****)((long)pcVar74 + 0xc08);
  *(code ****)((long)pcVar74 + 0xa30) = *(code ****)((long)pcVar74 + 0xc00);
  in_register_00005008 = *(code *****)((long)pcVar74 + 0xc18);
  param_2.unknown = *(undefined **)((long)pcVar74 + 0xc10);
  in_register_00005248 = *(code ****)((long)pcVar74 + 0xc18);
  pppcVar90 = *(code ****)((long)pcVar74 + 0xc10);
switchD_1000a5400_caseD_18:
  in_register_000052a8 = *(code ****)((long)pcVar74 + 0xc28);
  pppcVar87 = *(code ****)((long)pcVar74 + 0xc20);
  *(code *****)((long)pcVar74 + 0xa48) = in_register_00005008;
  *(undefined **)((long)pcVar74 + 0xa40) = param_2.unknown;
  *(code ****)((long)pcVar74 + 0xa58) = *(code ****)((long)pcVar74 + 0xc28);
  *(code ****)((long)pcVar74 + 0xa50) = *(code ****)((long)pcVar74 + 0xc20);
  *(code ****)((long)pcVar74 + 0xb68) = in_register_00005028;
  *(code ****)((long)pcVar74 + 0xb60) = param_3;
  *(code ****)((long)pcVar74 + 0xb78) = in_register_00005068;
  *(code ****)((long)pcVar74 + 0xb70) = param_5;
  *(code ****)((long)pcVar74 + 0xb88) = in_register_00005048;
  *(code ****)((long)pcVar74 + 0xb80) = param_4;
  *(code ****)((long)pcVar74 + 0xb98) = in_register_000050a8;
  *(code ****)((long)pcVar74 + 0xb90) = param_7;
  *(code ****)((long)pcVar74 + 0xb28) = in_register_00005088;
  *(code ****)((long)pcVar74 + 0xb20) = param_6;
  *(code ****)((long)pcVar74 + 0xb38) = in_register_000050e8;
  *(code ****)((long)pcVar74 + 0xb30) = param_9;
  *(code ****)((long)pcVar74 + 0xb48) = in_register_000050c8;
  *(code ****)((long)pcVar74 + 0xb40) = param_8;
  *(code ****)((long)pcVar74 + 0xb58) = in_register_00005228;
  *(code ****)((long)pcVar74 + 0xb50) = pppcVar94;
  *(code ****)((long)pcVar74 + 0xae8) = in_register_00005208;
  *(code ****)((long)pcVar74 + 0xae0) = pppcVar77;
switchD_1000a5400_caseD_94:
  *(code ****)((long)pcVar74 + 0xaf8) = in_register_00005268;
  *(code ****)((long)pcVar74 + 0xaf0) = pppcVar83;
  *(code ****)((long)pcVar74 + 0xb08) = in_register_00005248;
  *(code ****)((long)pcVar74 + 0xb00) = pppcVar90;
  *(code ****)((long)pcVar74 + 0xb18) = in_register_000052a8;
  *(code ****)((long)pcVar74 + 0xb10) = pppcVar87;
  AVar92.unknown = &DAT_100422410;
  FUN_1000087e4((code ****)((long)pcVar74 + 0xa20),(code ****)((long)pcVar74 + 0x7e0),&DAT_100550978
               );
  FUN_10002a29c((code ****)((long)pcVar74 + 0xae0),&DAT_100550978,&DAT_100422410);
  size = (ushort *)(*(code ****)((long)pcVar74 + 0x38))[2];
  *(code ***)((long)pcVar74 + 0x7e8) = (*(code ****)((long)pcVar74 + 0x38))[3];
  *(ushort **)((long)pcVar74 + 0x7e0) = size;
  SwiftUI::State::get_wrappedValue((State)*(undefined **)((long)pcVar74 + 0x40));
  if (*(code ****)((long)pcVar74 + 0x48) <= *(code ****)((long)pcVar74 + 0x710)) {
                    /* WARNING: Does not return */
    pcVar74 = (code *)SoftwareBreakpoint(1,0x1000b9fa0);
    (*pcVar74)();
  }
  localized.unknown = (undefined *)((long)pcVar74 + 0x8b8);
  pcVar76 = (code *)((long)*(code ****)((long)pcVar74 + 0x10) +
                    (long)*(int *)(*(code ****)((long)pcVar74 + 0x20) + 3) +
                    (long)*(code ****)((long)pcVar74 + 0x710) *
                    (long)*(code ****)((long)pcVar74 + 8));
  pppcVar69 = *(code ****)(pcVar76 + 8);
  *(code ****)((long)pcVar74 + 0x7e0) = *(code ****)pcVar76;
  *(code ****)((long)pcVar74 + 0x7e8) = pppcVar69;
  _swift_bridgeObjectRetain();
  ppppcVar81 = *(code *****)((long)pcVar74 + 0x18);
  qos.unknown = PTR___type_metadata_for_Swift_String_100523a98;
  param_10.unknown = (undefined *)SwiftUI::Text::_init();
  SwiftUI::Font::Weight::get_medium((Weight)param_10.unknown);
  DVar18 = SwiftUI::Font::Design::typeMetadataAccessor();
  pcVar71 = *(char **)(*(long *)(CONCAT71((int7)((ulong)param_10.unknown >> 8),DVar18.value) + -8) +
                      0x38);
  DVar21.unknown = *(undefined **)((long)pcVar74 + 0x28);
switchD_1000a5400_caseD_b0:
  (*(code *)pcVar71)(DVar21.unknown,1,1);
  FVar26 = SwiftUI::Font::_system((CGFloat)size,(Font)0x0);
  FUN_10002a29c(DVar21.unknown,&DAT_10054a828,&DAT_10041e3c0);
  ppppcVar19 = (code ****)param_10.unknown;
  pppcVar69 = (code ***)qos.unknown;
  ppppcVar66 = ppppcVar81;
  TVar27 = SwiftUI::Text::_font(FVar26.unknown);
  *(code *****)((long)pcVar74 + 0x40) = ppppcVar66;
  _swift_release(FVar26.unknown);
  FUN_100025b34(param_10.unknown,qos.unknown,ppppcVar81);
  _swift_bridgeObjectRelease();
  CVar43 = SwiftUI::Color::get_white(AVar92.unknown);
  CVar44 = SwiftUI::Color::opacity(0.6,CVar43);
  _swift_release(CVar43.unknown);
  *(undefined **)((long)pcVar74 + 0x7e0) = CVar44.unknown;
  FUN_100028d58();
  pppcVar94 = *(code ****)((long)pcVar74 + 0x40);
  param_10.unknown = TVar27.unknown;
  ppppcVar81 = ppppcVar19;
  pppcVar77 = pppcVar69;
  qos.unknown = (undefined *)SwiftUI::Text::_foregroundStyle();
  *(code ****)((long)pcVar74 + 0x48) = pppcVar77;
  FUN_100025b34(TVar27.unknown,ppppcVar19,pppcVar69);
  _swift_release(CVar44.unknown);
  _swift_bridgeObjectRelease(pppcVar94);
  DVar21.unknown = &DAT_1004223a0;
  _swift_getKeyPath();
  AVar54 = SwiftUI::Alignment::get_center(DVar21.unknown);
  ppppcVar14 = ppppcVar70 + -6;
  ppppcVar70[-2] = (code ***)AVar54.unknown;
  ppppcVar70[-1] = (code ***)ppppcVar19;
  ppppcVar72 = (code ****)0x1;
  *(code *)(ppppcVar70 + -3) = (code)0x1;
switchD_1000a5400_caseD_b4:
  ppppcVar14[2] = (code ***)0x0;
  *(code *)(ppppcVar14 + 1) = SUB81(ppppcVar72,0);
  ppppcVar66 = (code ****)0x1;
  *ppppcVar14 = (code ***)0x0;
  _Var28 = SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  pppcVar69 = *(code ****)((long)pcVar74 + 0xce0);
  pppcVar94 = *(code ****)((long)pcVar74 + 0xcd8);
  pppcVar77 = *(code ****)((long)pcVar74 + 0xcd0);
  *(code ****)((long)localized.unknown + 0x3f) = *(code ****)((long)pcVar74 + 0xce8);
  *(code ****)((long)localized.unknown + 0x37) = pppcVar69;
  pppcVar69 = *(code ****)((long)pcVar74 + 0xcf0);
  pppcVar83 = *(code ****)((long)pcVar74 + 0xd08);
  pppcVar90 = *(code ****)((long)pcVar74 + 0xd00);
  *(code ****)((long)localized.unknown + 0x4f) = *(code ****)((long)pcVar74 + 0xcf8);
  *(code ****)((long)localized.unknown + 0x47) = pppcVar69;
  *(code ****)((long)localized.unknown + 0x5f) = pppcVar83;
  *(code ****)((long)localized.unknown + 0x57) = pppcVar90;
  pppcVar69 = *(code ****)((long)pcVar74 + 0xd10);
  *(code ****)((long)localized.unknown + 0x6f) = *(code ****)((long)pcVar74 + 0xd18);
  *(code ****)((long)localized.unknown + 0x67) = pppcVar69;
  pppcVar69 = *(code ****)((long)pcVar74 + 0xcb0);
  pppcVar90 = *(code ****)((long)pcVar74 + 0xcc8);
  unaff_d10 = *(code ****)((long)pcVar74 + 0xcc0);
  *(code ****)((long)localized.unknown + 0xf) = *(code ****)((long)pcVar74 + 0xcb8);
  *(code ****)((long)localized.unknown + 7) = pppcVar69;
  *(code ****)((long)localized.unknown + 0x1f) = pppcVar90;
  *(code ****)((long)localized.unknown + 0x17) = unaff_d10;
  *(code ****)((long)localized.unknown + 0x2f) = pppcVar94;
  *(code ****)((long)localized.unknown + 0x27) = pppcVar77;
  size = (ushort *)SwiftUI::Edge::Set::get_top((Set)_Var28.unknown);
  pppcVar69 = *(code ****)((long)localized.unknown + 0x40);
  pppcVar94 = *(code ****)((long)localized.unknown + 0x58);
  pppcVar77 = *(code ****)((long)localized.unknown + 0x50);
  *(code ****)((long)pcVar74 + 0x3e1) = *(code ****)((long)localized.unknown + 0x48);
  *(code ****)((long)pcVar74 + 0x3d9) = pppcVar69;
  *(code ****)((long)pcVar74 + 0x3f1) = pppcVar94;
  *(code ****)((long)pcVar74 + 0x3e9) = pppcVar77;
  pppcVar69 = *(code ****)((long)localized.unknown + 0x60);
  *(code ****)((long)pcVar74 + 0x401) = *(code ****)((long)localized.unknown + 0x68);
  *(code ****)((long)pcVar74 + 0x3f9) = pppcVar69;
  pppcVar69 = *(code ****)localized.unknown;
  pppcVar94 = *(code ****)((long)localized.unknown + 0x18);
  pppcVar77 = *(code ****)((long)localized.unknown + 0x10);
  *(code ****)((long)pcVar74 + 0x3a1) = *(code ****)((long)localized.unknown + 8);
  *(code ****)((long)pcVar74 + 0x399) = pppcVar69;
  *(code ****)((long)pcVar74 + 0x3b1) = pppcVar94;
  *(code ****)((long)pcVar74 + 0x3a9) = pppcVar77;
  pppcVar69 = *(code ****)((long)localized.unknown + 0x20);
  pppcVar77 = *(code ****)((long)localized.unknown + 0x38);
  unaff_d9 = *(code ****)((long)localized.unknown + 0x30);
  *(code ****)((long)pcVar74 + 0x3c1) = *(code ****)((long)localized.unknown + 0x28);
  *(code ****)((long)pcVar74 + 0x3b9) = pppcVar69;
  *(undefined **)((long)pcVar74 + 0x370) = qos.unknown;
  *(undefined **)((long)pcVar74 + 0x378) = param_10.unknown;
  *(code *)((long)pcVar74 + 0x380) = SUB81(ppppcVar81,0);
  AVar92.unknown = *(undefined **)((long)pcVar74 + 0x48);
  *(undefined **)((long)pcVar74 + 0x388) = AVar92.unknown;
  *(undefined **)((long)pcVar74 + 0x390) = DVar21.unknown;
  *(code *)((long)pcVar74 + 0x398) = (code)0x1;
  *(code ****)((long)pcVar74 + 0x408) = *(code ****)((long)localized.unknown + 0x6f);
  *(code ****)((long)pcVar74 + 0x3d1) = pppcVar77;
  *(code ****)((long)pcVar74 + 0x3c9) = unaff_d9;
  unaff_d8 = (code ***)0x4000000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)size);
  *(code ****)((long)pcVar74 + 0x998) = *(code ****)((long)pcVar74 + 0x3d8);
  *(code ****)((long)pcVar74 + 0x990) = *(code ****)((long)pcVar74 + 0x3d0);
  *(code ****)((long)pcVar74 + 0x9a8) = *(code ****)((long)pcVar74 + 1000);
  *(code ****)((long)pcVar74 + 0x9a0) = *(code ****)((long)pcVar74 + 0x3e0);
  *(code ****)((long)pcVar74 + 0x9b8) = *(code ****)((long)pcVar74 + 0x3f8);
  *(code ****)((long)pcVar74 + 0x9b0) = *(code ****)((long)pcVar74 + 0x3f0);
  *(code ****)((long)pcVar74 + 0x9c8) = *(code ****)((long)pcVar74 + 0x408);
  *(code ****)((long)pcVar74 + 0x9c0) = *(code ****)((long)pcVar74 + 0x400);
  *(code ****)((long)pcVar74 + 0x958) = *(code ****)((long)pcVar74 + 0x398);
  *(code ****)((long)pcVar74 + 0x950) = *(code ****)((long)pcVar74 + 0x390);
  *(code ****)((long)pcVar74 + 0x968) = *(code ****)((long)pcVar74 + 0x3a8);
  *(code ****)((long)pcVar74 + 0x960) = *(code ****)((long)pcVar74 + 0x3a0);
  *(code ****)((long)pcVar74 + 0x978) = *(code ****)((long)pcVar74 + 0x3b8);
  *(code ****)((long)pcVar74 + 0x970) = *(code ****)((long)pcVar74 + 0x3b0);
  *(code ****)((long)pcVar74 + 0x988) = *(code ****)((long)pcVar74 + 0x3c8);
  *(code ****)((long)pcVar74 + 0x980) = *(code ****)((long)pcVar74 + 0x3c0);
  *(code ****)((long)pcVar74 + 0x938) = *(code ****)((long)pcVar74 + 0x378);
  *(code ****)((long)pcVar74 + 0x930) = *(code ****)((long)pcVar74 + 0x370);
  *(code ****)((long)pcVar74 + 0x948) = *(code ****)((long)pcVar74 + 0x388);
  *(code ****)((long)pcVar74 + 0x940) = *(code ****)((long)pcVar74 + 0x380);
  pppcVar69 = *(code ****)((long)localized.unknown + 0x40);
  pppcVar94 = *(code ****)((long)localized.unknown + 0x58);
  pppcVar77 = *(code ****)((long)localized.unknown + 0x50);
  *(code ****)((long)pcVar74 + 0x481) = *(code ****)((long)localized.unknown + 0x48);
  *(code ****)((long)pcVar74 + 0x479) = pppcVar69;
  *(code ****)((long)pcVar74 + 0x491) = pppcVar94;
  *(code ****)((long)pcVar74 + 0x489) = pppcVar77;
  pppcVar69 = *(code ****)((long)localized.unknown + 0x60);
  *(code ****)((long)pcVar74 + 0x4a1) = *(code ****)((long)localized.unknown + 0x68);
  *(code ****)((long)pcVar74 + 0x499) = pppcVar69;
  pppcVar69 = *(code ****)localized.unknown;
  pppcVar94 = *(code ****)((long)localized.unknown + 0x18);
  pppcVar77 = *(code ****)((long)localized.unknown + 0x10);
  *(code ****)((long)pcVar74 + 0x441) = *(code ****)((long)localized.unknown + 8);
  *(code ****)((long)pcVar74 + 0x439) = pppcVar69;
  *(code ****)((long)pcVar74 + 0x451) = pppcVar94;
  *(code ****)((long)pcVar74 + 0x449) = pppcVar77;
  pppcVar69 = *(code ****)((long)localized.unknown + 0x20);
  in_register_00005028 = *(code ****)((long)localized.unknown + 0x38);
  param_3 = *(code ****)((long)localized.unknown + 0x30);
  *(code ****)((long)pcVar74 + 0x461) = *(code ****)((long)localized.unknown + 0x28);
  *(code ****)((long)pcVar74 + 0x459) = pppcVar69;
  unaff_d11 = param_5;
switchD_1000a5400_caseD_b8:
  *(undefined **)((long)pcVar74 + 0x410) = qos.unknown;
  *(undefined **)((long)pcVar74 + 0x418) = param_10.unknown;
  *(code *)((long)pcVar74 + 0x420) = SUB81(ppppcVar81,0);
  *(undefined **)((long)pcVar74 + 0x428) = AVar92.unknown;
  *(undefined **)((long)pcVar74 + 0x430) = DVar21.unknown;
  *(code *)((long)pcVar74 + 0x438) = SUB81(ppppcVar66,0);
  *(code ****)((long)pcVar74 + 0x4a8) = *(code ****)((long)localized.unknown + 0x6f);
  *(code ****)((long)pcVar74 + 0x471) = in_register_00005028;
  *(code ****)((long)pcVar74 + 0x469) = param_3;
  FUN_1000087e4((code ****)((long)pcVar74 + 0x370),(code ****)((long)pcVar74 + 0x7e0),&DAT_100550980
                ,&DAT_100431dd0);
  FUN_10002a29c((code ****)((long)pcVar74 + 0x410),&DAT_100550980,&DAT_100431dd0);
  in_register_00005028 = *(code ****)((long)pcVar74 + 0x998);
  param_3 = *(code ****)((long)pcVar74 + 0x990);
  in_register_00005068 = *(code ****)((long)pcVar74 + 0x9a8);
  param_5 = *(code ****)((long)pcVar74 + 0x9a0);
  *(code ****)((long)pcVar74 + 0x518) = *(code ****)((long)pcVar74 + 0x998);
  *(code ****)((long)pcVar74 + 0x510) = *(code ****)((long)pcVar74 + 0x990);
  *(code ****)((long)pcVar74 + 0x528) = *(code ****)((long)pcVar74 + 0x9a8);
  *(code ****)((long)pcVar74 + 0x520) = *(code ****)((long)pcVar74 + 0x9a0);
  in_register_00005048 = *(code ****)((long)pcVar74 + 0x9b8);
  param_4 = *(code ****)((long)pcVar74 + 0x9b0);
  in_register_000050a8 = *(code ****)((long)pcVar74 + 0x9c8);
  param_7 = *(code ****)((long)pcVar74 + 0x9c0);
  *(code ****)((long)pcVar74 + 0x538) = *(code ****)((long)pcVar74 + 0x9b8);
  *(code ****)((long)pcVar74 + 0x530) = *(code ****)((long)pcVar74 + 0x9b0);
  *(code ****)((long)pcVar74 + 0x548) = *(code ****)((long)pcVar74 + 0x9c8);
  *(code ****)((long)pcVar74 + 0x540) = *(code ****)((long)pcVar74 + 0x9c0);
  in_register_00005088 = *(code ****)((long)pcVar74 + 0x958);
  param_6 = *(code ****)((long)pcVar74 + 0x950);
  in_register_000050e8 = *(code ****)((long)pcVar74 + 0x968);
  param_9 = *(code ****)((long)pcVar74 + 0x960);
  *(code ****)((long)pcVar74 + 0x4d8) = *(code ****)((long)pcVar74 + 0x958);
  *(code ****)((long)pcVar74 + 0x4d0) = *(code ****)((long)pcVar74 + 0x950);
  *(code ****)((long)pcVar74 + 0x4e8) = *(code ****)((long)pcVar74 + 0x968);
  *(code ****)((long)pcVar74 + 0x4e0) = *(code ****)((long)pcVar74 + 0x960);
  in_register_00005008 = *(code *****)((long)pcVar74 + 0x978);
  param_2.unknown = *(undefined **)((long)pcVar74 + 0x970);
switchD_1000a5400_caseD_c0:
  *(code *****)((long)pcVar74 + 0x4f8) = in_register_00005008;
  *(undefined **)((long)pcVar74 + 0x4f0) = param_2.unknown;
  *(code ****)((long)pcVar74 + 0x508) = *(code ****)((long)pcVar74 + 0x988);
  *(code ****)((long)pcVar74 + 0x500) = *(code ****)((long)pcVar74 + 0x980);
  *(code ****)((long)pcVar74 + 0x4b8) = *(code ****)((long)pcVar74 + 0x938);
  *(code ****)((long)pcVar74 + 0x4b0) = *(code ****)((long)pcVar74 + 0x930);
  *(code ****)((long)pcVar74 + 0x4c8) = *(code ****)((long)pcVar74 + 0x948);
  *(code ****)((long)pcVar74 + 0x4c0) = *(code ****)((long)pcVar74 + 0x940);
  *(code ****)((long)pcVar74 + 0x5e8) = in_register_00005028;
  *(code ****)((long)pcVar74 + 0x5e0) = param_3;
  *(code ****)((long)pcVar74 + 0x5f8) = in_register_00005068;
  *(code ****)((long)pcVar74 + 0x5f0) = param_5;
  *(code ****)((long)pcVar74 + 0x608) = in_register_00005048;
  *(code ****)((long)pcVar74 + 0x600) = param_4;
  *(code ****)((long)pcVar74 + 0x618) = in_register_000050a8;
  *(code ****)((long)pcVar74 + 0x610) = param_7;
  *(code ****)((long)pcVar74 + 0x5a8) = in_register_00005088;
  *(code ****)((long)pcVar74 + 0x5a0) = param_6;
  *(code ****)((long)pcVar74 + 0x5b8) = in_register_000050e8;
  *(code ****)((long)pcVar74 + 0x5b0) = param_9;
  *(code ****)((long)pcVar74 + 0x5c8) = *(code ****)((long)pcVar74 + 0x978);
  *(code ****)((long)pcVar74 + 0x5c0) = *(code ****)((long)pcVar74 + 0x970);
  *(code ****)((long)pcVar74 + 0x5d8) = *(code ****)((long)pcVar74 + 0x988);
  *(code ****)((long)pcVar74 + 0x5d0) = *(code ****)((long)pcVar74 + 0x980);
  *(code *)((long)pcVar74 + 0x550) = SUB81(size,0);
  *(code ****)((long)pcVar74 + 0x558) = unaff_d8;
  *(code ****)((long)pcVar74 + 0x560) = unaff_d9;
  *(code ****)((long)pcVar74 + 0x568) = unaff_d10;
  *(code ****)((long)pcVar74 + 0x570) = unaff_d11;
  *(code *)((long)pcVar74 + 0x578) = (code)0x0;
  *(code ****)((long)pcVar74 + 0x588) = *(code ****)((long)pcVar74 + 0x938);
  *(code ****)((long)pcVar74 + 0x580) = *(code ****)((long)pcVar74 + 0x930);
  *(code ****)((long)pcVar74 + 0x598) = *(code ****)((long)pcVar74 + 0x948);
  *(code ****)((long)pcVar74 + 0x590) = *(code ****)((long)pcVar74 + 0x940);
  *(code *)((long)pcVar74 + 0x620) = SUB81(size,0);
  *(code ****)((long)pcVar74 + 0x628) = unaff_d8;
  *(code ****)((long)pcVar74 + 0x630) = unaff_d9;
  *(code ****)((long)pcVar74 + 0x638) = unaff_d10;
  *(code ****)((long)pcVar74 + 0x640) = unaff_d11;
  *(code *)((long)pcVar74 + 0x648) = (code)0x0;
  size = (ushort *)&DAT_100550988;
  ppppcVar66 = (code ****)&DAT_100422420;
  FUN_1000087e4((code ****)((long)pcVar74 + 0x4b0),(code ****)((long)pcVar74 + 0x7e0),&DAT_100550988
                ,&DAT_100422420);
  FUN_10002a29c((code ****)((long)pcVar74 + 0x580),&DAT_100550988,&DAT_100422420);
  in_register_00005048 = *(code ****)((long)pcVar74 + 0xaa8);
  param_4 = *(code ****)((long)pcVar74 + 0xaa0);
  in_register_00005008 = *(code *****)((long)pcVar74 + 0xaa8);
  param_2.unknown = *(undefined **)((long)pcVar74 + 0xaa0);
switchD_1000a5400_caseD_c4:
  in_register_00005028 = *(code ****)((long)pcVar74 + 0xaa8);
  param_3 = *(code ****)((long)pcVar74 + 0xaa0);
  *(code ****)((long)pcVar74 + 0x338) = in_register_00005048;
  *(code ****)((long)pcVar74 + 0x330) = param_4;
  *(code ****)((long)pcVar74 + 0x348) = *(code ****)((long)pcVar74 + 0xab8);
  *(code ****)((long)pcVar74 + 0x340) = *(code ****)((long)pcVar74 + 0xab0);
  in_register_000050a8 = *(code ****)((long)pcVar74 + 0xac8);
  param_7 = *(code ****)((long)pcVar74 + 0xac0);
  in_register_00005048 = *(code ****)((long)pcVar74 + 0xac8);
  param_4 = *(code ****)((long)pcVar74 + 0xac0);
  *(code ****)((long)pcVar74 + 0x358) = *(code ****)((long)pcVar74 + 0xac8);
  *(code ****)((long)pcVar74 + 0x350) = *(code ****)((long)pcVar74 + 0xac0);
  *(code ****)((long)pcVar74 + 0x368) = *(code ****)((long)pcVar74 + 0xad8);
  *(code ****)((long)pcVar74 + 0x360) = *(code ****)((long)pcVar74 + 0xad0);
  in_register_000050c8 = *(code ****)((long)pcVar74 + 0xa68);
  param_8 = *(code ****)((long)pcVar74 + 0xa60);
  in_register_00005068 = *(code ****)((long)pcVar74 + 0xa68);
  param_5 = *(code ****)((long)pcVar74 + 0xa60);
  *(code ****)((long)pcVar74 + 0x2f8) = *(code ****)((long)pcVar74 + 0xa68);
  *(code ****)((long)pcVar74 + 0x2f0) = *(code ****)((long)pcVar74 + 0xa60);
  *(code ****)((long)pcVar74 + 0x308) = *(code ****)((long)pcVar74 + 0xa78);
  *(code ****)((long)pcVar74 + 0x300) = *(code ****)((long)pcVar74 + 0xa70);
  in_register_00005208 = *(code ****)((long)pcVar74 + 0xa88);
  pppcVar77 = *(code ****)((long)pcVar74 + 0xa80);
  in_register_00005088 = *(code ****)((long)pcVar74 + 0xa88);
  param_6 = *(code ****)((long)pcVar74 + 0xa80);
  *(code ****)((long)pcVar74 + 0x318) = *(code ****)((long)pcVar74 + 0xa88);
  *(code ****)((long)pcVar74 + 0x310) = *(code ****)((long)pcVar74 + 0xa80);
  *(code ****)((long)pcVar74 + 0x328) = *(code ****)((long)pcVar74 + 0xa98);
  *(code ****)((long)pcVar74 + 800) = *(code ****)((long)pcVar74 + 0xa90);
  in_register_00005248 = *(code ****)((long)pcVar74 + 0xa28);
  pppcVar90 = *(code ****)((long)pcVar74 + 0xa20);
  in_register_000050e8 = *(code ****)((long)pcVar74 + 0xa28);
  param_9 = *(code ****)((long)pcVar74 + 0xa20);
  *(code ****)((long)pcVar74 + 0x2b8) = *(code ****)((long)pcVar74 + 0xa28);
  *(code ****)((long)pcVar74 + 0x2b0) = *(code ****)((long)pcVar74 + 0xa20);
  *(code ****)((long)pcVar74 + 0x2c8) = *(code ****)((long)pcVar74 + 0xa38);
  *(code ****)((long)pcVar74 + 0x2c0) = *(code ****)((long)pcVar74 + 0xa30);
  in_register_00005288 = *(code ****)((long)pcVar74 + 0xa48);
  pppcVar82 = *(code ****)((long)pcVar74 + 0xa40);
  in_register_00005228 = *(code ****)((long)pcVar74 + 0xa48);
  pppcVar94 = *(code ****)((long)pcVar74 + 0xa40);
  *(code ****)((long)pcVar74 + 0x2d8) = *(code ****)((long)pcVar74 + 0xa48);
  *(code ****)((long)pcVar74 + 0x2d0) = *(code ****)((long)pcVar74 + 0xa40);
  *(code ****)((long)pcVar74 + 0x2e8) = *(code ****)((long)pcVar74 + 0xa58);
  *(code ****)((long)pcVar74 + 0x2e0) = *(code ****)((long)pcVar74 + 0xa50);
  in_register_00005268 = *(code ****)((long)pcVar74 + 0x558);
  pppcVar83 = *(code ****)((long)pcVar74 + 0x550);
  in_register_000052a8 = *(code ****)((long)pcVar74 + 0x558);
  pppcVar87 = *(code ****)((long)pcVar74 + 0x550);
  *(code ****)((long)pcVar74 + 0x888) = *(code ****)((long)pcVar74 + 0x558);
  *(code ****)((long)pcVar74 + 0x880) = *(code ****)((long)pcVar74 + 0x550);
  *(code ****)((long)pcVar74 + 0x898) = *(code ****)((long)pcVar74 + 0x568);
  *(code ****)((long)pcVar74 + 0x890) = *(code ****)((long)pcVar74 + 0x560);
  ppppcVar72 = (code ****)((long)pcVar74 + 0x4b0);
  *(undefined8 *)((long)pcVar74 + 0x8a1) = *(undefined8 *)((long)pcVar74 + 0x571);
  *(undefined8 *)((long)pcVar74 + 0x899) = *(undefined8 *)((long)pcVar74 + 0x569);
  in_register_00005328 = *(code ****)((long)pcVar74 + 0x518);
  pppcVar109 = *(code ****)((long)pcVar74 + 0x510);
  in_register_000052c8 = *(code ****)((long)pcVar74 + 0x518);
  pppcVar106 = *(code ****)((long)pcVar74 + 0x510);
  *(code ****)((long)pcVar74 + 0x848) = *(code ****)((long)pcVar74 + 0x518);
  *(code ****)((long)pcVar74 + 0x840) = *(code ****)((long)pcVar74 + 0x510);
  *(code ****)((long)pcVar74 + 0x858) = *(code ****)((long)pcVar74 + 0x528);
  *(code ****)((long)pcVar74 + 0x850) = *(code ****)((long)pcVar74 + 0x520);
  in_register_00005368 = *(code ****)((long)pcVar74 + 0x538);
  pppcVar111 = *(code ****)((long)pcVar74 + 0x530);
  in_register_000052e8 = *(code ****)((long)pcVar74 + 0x538);
  pppcVar107 = *(code ****)((long)pcVar74 + 0x530);
  *(code ****)((long)pcVar74 + 0x878) = *(code ****)((long)pcVar74 + 0x548);
  *(code ****)((long)pcVar74 + 0x870) = *(code ****)((long)pcVar74 + 0x540);
  *(code ****)((long)pcVar74 + 0x868) = *(code ****)((long)pcVar74 + 0x538);
  *(code ****)((long)pcVar74 + 0x860) = *(code ****)((long)pcVar74 + 0x530);
  in_register_000053a8 = *(code ****)((long)pcVar74 + 0x4d8);
  pppcVar113 = *(code ****)((long)pcVar74 + 0x4d0);
  in_register_00005308 = *(code ****)((long)pcVar74 + 0x4d8);
  pppcVar108 = *(code ****)((long)pcVar74 + 0x4d0);
  *(code ****)((long)pcVar74 + 0x808) = *(code ****)((long)pcVar74 + 0x4d8);
  *(code ****)((long)pcVar74 + 0x800) = *(code ****)((long)pcVar74 + 0x4d0);
  *(code ****)((long)pcVar74 + 0x818) = *(code ****)((long)pcVar74 + 0x4e8);
  *(code ****)((long)pcVar74 + 0x810) = *(code ****)((long)pcVar74 + 0x4e0);
switchD_1000a5400_caseD_c8:
  in_register_000053c8 = *(code ****)((long)pcVar74 + 0x4f8);
  pppcVar114 = *(code ****)((long)pcVar74 + 0x4f0);
  in_register_00005348 = *(code ****)((long)pcVar74 + 0x4f8);
  pppcVar110 = *(code ****)((long)pcVar74 + 0x4f0);
  *(code ****)((long)pcVar74 + 0x830) = *(code ****)((long)pcVar74 + 0x500);
  *(code ****)((long)pcVar74 + 0x838) = *(code ****)((long)pcVar74 + 0x508);
  *(code ****)((long)pcVar74 + 0x828) = *(code ****)((long)pcVar74 + 0x4f8);
  *(code ****)((long)pcVar74 + 0x820) = *(code ****)((long)pcVar74 + 0x4f0);
  in_register_00005108 = *(code ****)((long)pcVar74 + 0x4b8);
  unaff_d8 = *(code ****)((long)pcVar74 + 0x4b0);
  in_d31 = *(code ****)((long)pcVar74 + 0x4b0);
  in_register_000053e8 = *(code ****)((long)pcVar74 + 0x4b8);
  in_register_00005128 = *(code ****)((long)pcVar74 + 0x4c8);
  unaff_d9 = *(code ****)((long)pcVar74 + 0x4c0);
  in_register_00005388 = *(code ****)((long)pcVar74 + 0x4b8);
  pppcVar112 = *(code ****)((long)pcVar74 + 0x4b0);
  goto switchD_1000a5400_caseD_cc;
switchD_1000a5400_caseD_12:
  FUN_1000036d0();
  FUN_1000036d0(&DAT_10054fc08,pcVar74,&TargetProtocolConformanceDescriptor_100421750);
  goto LAB_1000a576c;
switchD_1000a5400_caseD_a:
  FUN_100029504(param_10.unknown,local_210,FUN_10009e280);
  pppcVar77 = *(code ****)((long)param_10.unknown + (long)*(int *)(DVar21.unknown + 0x18));
  param_2.unknown =
       *(undefined **)((code *)((long)param_10.unknown + (long)*(int *)(DVar21.unknown + 0x18)) + 8)
  ;
  AVar92.unknown = (undefined *)ppppcVar9;
  if ((double)pppcVar77 <= (double)param_2.unknown) {
    param_2.unknown = (undefined *)pppcVar77;
  }
switchD_1000a5400_caseD_e:
  *(double *)((long)AVar92.unknown + (long)*(int *)((long)local_208[1] + 0x14)) =
       (double)param_2.unknown / 100.0;
  ppppcVar66 = local_1f8[0];
  pcVar74 = FUN_1000b0fc0;
  FUN_100029504(AVar92.unknown,local_1f8[0],FUN_1000b0fc0);
  _swift_storeEnumTagMultiPayload(ppppcVar66,local_208[0],0);
  FUN_1000036d0(&DAT_10054fc00,FUN_1000b0fc0,&TargetProtocolConformanceDescriptor_1004217a0);
  FUN_1000036d0(&DAT_10054fc08,FUN_1000b0fac,&TargetProtocolConformanceDescriptor_100421750);
LAB_1000a576c:
  ppppcVar19 = local_1f8[2];
  (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)ppppcVar66);
  ppppcVar66 = local_118;
  puVar67 = &DAT_10054fb60;
  puVar62 = &DAT_100421480;
  FUN_1000087e4(ppppcVar19,local_118,&DAT_10054fb60,&DAT_100421480);
  uVar64 = 1;
  ppppcVar93 = (code ****)AVar92.unknown;
LAB_1000a6c90:
  _swift_storeEnumTagMultiPayload(ppppcVar66,local_130[1],uVar64);
  FUN_1000b1024();
  FUN_1000b10cc();
  ppppcVar80 = local_108[0];
  (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)ppppcVar66);
  FUN_10002a29c(ppppcVar19,puVar67,puVar62);
  ppppcVar19 = local_98;
  puVar67 = &DAT_10054fb80;
  puVar62 = &DAT_1004214a0;
  FUN_1000087e4(ppppcVar80,local_98,&DAT_10054fb80,&DAT_1004214a0);
  uVar64 = 1;
  ppppcVar23 = ppppcVar93;
  goto LAB_1000a6d04;
switchD_1000a5400_caseD_5e:
  cVar65 = *(code *)((long)pcVar71 + 1);
switchD_1000a5400_caseD_52:
  ppppcVar19 = local_1f8[3];
  cVar5 = *(code *)((long)param_10.unknown + (long)*(int *)(DVar21.unknown + 0x20));
  *(undefined **)((long)AVar92.unknown + (long)*(int *)((long)local_1f8[3] + 0x14)) =
       param_2.unknown;
  pcVar74 = (code *)((long)AVar92.unknown + (long)*(int *)(ppppcVar19 + 3));
  *pcVar74 = SUB81(ppppcVar72,0);
  pcVar74[1] = cVar65;
  *(code *)((long)AVar92.unknown + (long)*(int *)((long)ppppcVar19 + 0x1c)) = cVar5;
  pppcVar77 = local_1c0[0];
  pcVar74 = FUN_100097b38;
  FUN_100029504(AVar92.unknown,local_1c0[0],FUN_100097b38);
  _swift_storeEnumTagMultiPayload(pppcVar77,local_1d8[0],0);
  FUN_1000036d0(&DAT_10054fc78,FUN_100097b38,&TargetProtocolConformanceDescriptor_1004206c8);
  FUN_1000036d0(&DAT_10054fc80,FUN_100097a30,&TargetProtocolConformanceDescriptor_100420678);
  pppcVar94 = local_1c0[2];
  (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)pppcVar77);
  ppppcVar19 = local_108[4];
  FUN_1000087e4(pppcVar94,local_108[4],&DAT_10054fba8,&DAT_1004214c8);
  _swift_storeEnumTagMultiPayload(ppppcVar19,local_108[2],0);
  FUN_1000b1414();
  FUN_1000b14bc();
  pppcVar77 = local_e0[1];
  (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)ppppcVar19);
  FUN_10002a29c(pppcVar94,&DAT_10054fba8,&DAT_1004214c8);
  ppppcVar19 = local_c0[0];
  FUN_1000087e4(pppcVar77,local_c0[0],&DAT_10054fbb0,&DAT_1004214d0);
  _swift_storeEnumTagMultiPayload(ppppcVar19,local_d0,1);
  FUN_1000b11ec();
  FUN_1000b139c();
  ppppcVar80 = local_b0;
  (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)ppppcVar19);
  FUN_10002a29c(pppcVar77,&DAT_10054fbb0,&DAT_1004214d0);
  ppppcVar19 = local_98;
  puVar67 = &DAT_10054fbf8;
  puVar62 = &DAT_100421518;
  FUN_1000087e4(ppppcVar80,local_98,&DAT_10054fbf8,&DAT_100421518);
  uVar64 = 0;
  ppppcVar23 = (code ****)AVar92.unknown;
LAB_1000a6d04:
  _swift_storeEnumTagMultiPayload(ppppcVar19,pppcVar69,uVar64);
  FUN_1000b1174();
  FUN_1000b1544();
  (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)ppppcVar19);
  FUN_10002a29c(ppppcVar80,puVar67,puVar62);
  goto LAB_1000a6d44;
switchD_1000a5400_caseD_e5:
  pcVar74 = (code *)param_10.unknown;
  FUN_1000036d0(DVar21.unknown + 0xc48,pcVar74,&TargetProtocolConformanceDescriptor_100421660);
  (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init(storage_00);
  FUN_1000087e4(ppppcVar81,AVar92.unknown,&DAT_10054fbe8,&DAT_100421508);
  _swift_storeEnumTagMultiPayload(AVar92.unknown,local_148,0);
  FUN_1000b1264();
  FUN_1000b12f4();
  ppppcVar19 = local_130[0];
  (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init(storage);
  FUN_10002a29c(ppppcVar81,&DAT_10054fbe8,&DAT_100421508);
  ppppcVar80 = local_c0[0];
  FUN_1000087e4(ppppcVar19,local_c0[0],&DAT_10054fbf0,&DAT_100421510);
  _swift_storeEnumTagMultiPayload(ppppcVar80,local_d0,0);
  FUN_1000b11ec();
  FUN_1000b139c();
  ppppcVar45 = local_b0;
  (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)ppppcVar80);
  FUN_10002a29c(ppppcVar19,&DAT_10054fbf0,&DAT_100421510);
  ppppcVar19 = local_98;
  FUN_1000087e4(ppppcVar45,local_98,&DAT_10054fbf8,&DAT_100421518);
  _swift_storeEnumTagMultiPayload(ppppcVar19,pppcVar69,0);
  FUN_1000b1174();
  FUN_1000b1544();
  (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)ppppcVar19);
  FUN_10002a29c(ppppcVar45,&DAT_10054fbf8,&DAT_100421518);
  ppppcVar23 = ppppcVar66;
LAB_1000a6d44:
  FUN_100029548(ppppcVar23,pcVar74);
  goto LAB_1000a6d48;
switchD_1000a5400_caseD_48:
switchD_1000a5400_caseD_67:
  _swift_storeEnumTagMultiPayload();
switchD_1000a5400_caseD_15:
switchD_1000a5400_caseD_68:
switchD_1000a5400_caseD_44:
switchD_1000a5400_caseD_f6:
  FUN_1000036d0();
switchD_1000a5400_caseD_e7:
switchD_1000a5400_caseD_3c:
switchD_1000a5400_caseD_16:
  (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init(storage_00);
switchD_1000a5400_caseD_87:
  pcVar74 = (code *)&DAT_10054fbe8;
  size = (ushort *)&DAT_100421508;
switchD_1000a5400_caseD_1a:
switchD_1000a5400_caseD_d6:
switchD_1000a5400_caseD_ce:
  FUN_1000087e4();
switchD_1000a5400_caseD_39:
  _swift_storeEnumTagMultiPayload();
  FUN_1000b1264();
  FUN_1000b12f4();
  qos.unknown = (undefined *)local_130[0];
  (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init(storage);
  FUN_10002a29c(ppppcVar81,pcVar74,size);
  pcVar74 = (code *)&DAT_10054fbf0;
switchD_1000a5400_caseD_c2:
  size = (ushort *)&DAT_100421510;
switchD_1000a5400_caseD_ba:
  ppppcVar66 = local_c0[0];
  FUN_1000087e4(qos.unknown,local_c0[0],pcVar74,size);
switchD_1000a5400_caseD_c6:
  _swift_storeEnumTagMultiPayload();
  FUN_1000b11ec();
  FUN_1000b139c();
  localized.unknown = (undefined *)local_b0;
  (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)ppppcVar66);
  FUN_10002a29c(qos.unknown,pcVar74,size);
  pcVar74 = (code *)&DAT_10054fbf8;
  size = &USHORT_100421000;
switchD_1000a5400_caseD_b2:
  ppppcVar66 = local_98;
  size = (ushort *)((long)size + 0x518);
  FUN_1000087e4(localized.unknown,local_98,pcVar74,size);
  goto switchD_1000a5400_caseD_b6;
switchD_1000a5400_caseD_dc:
  (extension_SwiftUI)::SwiftUI::View::_pointerStyle();
  FUN_10002a29c(deadline.unknown,&DAT_100551640,&DAT_1004232b8);
  (*(code *)PTR____chkstk_darwin_100521118)();
  (*(code *)*(code ****)((long)pcVar74 + 0x10))
            ((long)AVar92.unknown - (long)DVar21.unknown,ppppcVar66,param_10.unknown);
  puVar52 = &stack0xffffffffffffff90;
  _swift_getOpaqueTypeConformance2
            (puVar52,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_pointerStyle(SwiftUI_PointerStyle_)__>_some>>_100522f40
             ,1);
  AVar53 = SwiftUI::AnyView::_init(puVar52,param_10.unknown,puVar52);
  puVar67 = &DAT_100551630;
  FUN_100002f94(&DAT_100551630,&DAT_1004232a8);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar67 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar86 = (undefined8 *)((long)AVar92.unknown - extraout_x8_45);
  *puVar86 = AVar53.unknown;
  _swift_storeEnumTagMultiPayload(puVar86);
  (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar86);
  (*(code *)*(code ****)((long)pcVar74 + 8))(ppppcVar66,param_10.unknown);
  auVar151._8_8_ = param_10.unknown;
  auVar151._0_8_ = ppppcVar66;
  return auVar151;
switchD_1000a5400_caseD_d:
  FUN_1000087a0();
  localized.unknown = (undefined *)local_1c0[0];
  param_10.unknown = local_1c8.unknown;
  local_1a8[2] = (code ****)AVar46.unknown;
  Swift::SetAlgebra::_init
            (local_1c8.unknown,&local_170,AVar92.unknown,AVar46.unknown,local_1c0[0],ppppcVar81);
  (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter(deadline,qos,param_10);
  __Block_release(ppppcVar66);
  local_1a8[4] = (code ****)local_1a8[4][1];
  (*(code *)local_1a8[4])(param_10.unknown,localized.unknown);
  local_1a8[3] = (code ****)local_1a8[3][1];
  (*(code *)local_1a8[3])(qos.unknown,local_1a8[6]);
  ppppcVar66 = local_1a8[5];
  AVar92.unknown = (undefined *)local_1a8[0];
  DVar21.unknown = deadline.unknown;
  (*(code *)local_1a8[0])(deadline.unknown,local_1a8[5]);
switchD_1000a5400_caseD_f8:
  DVar21.unknown = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(DVar21.unknown);
  Dispatch::DispatchTime::now(DVar21);
  Dispatch::__infix((DispatchTime)AVar91.unknown,0.1);
  (*(code *)AVar92.unknown)(AVar91.unknown,ppppcVar66);
  pppcVar69 = (code ***)&DAT_10052a7a8;
  _swift_allocObject(&DAT_10052a7a8,200,7);
  pppcVar77 = *(code ****)((long)pcVar74 + 0x80);
  pppcVar90 = *(code ****)((long)pcVar74 + 0x98);
  pppcVar94 = *(code ****)((long)pcVar74 + 0x90);
  pppcVar69[0x13] = (code **)*(code ****)((long)pcVar74 + 0x88);
  pppcVar69[0x12] = (code **)pppcVar77;
  pppcVar69[0x15] = (code **)pppcVar90;
  pppcVar69[0x14] = (code **)pppcVar94;
  pppcVar77 = *(code ****)((long)pcVar74 + 0xa0);
  pppcVar69[0x17] = (code **)*(code ****)((long)pcVar74 + 0xa8);
  pppcVar69[0x16] = (code **)pppcVar77;
  pppcVar69[0x18] = (code **)*(code ****)((long)pcVar74 + 0xb0);
  pppcVar77 = *(code ****)((long)pcVar74 + 0x40);
  pppcVar90 = *(code ****)((long)pcVar74 + 0x58);
  pppcVar94 = *(code ****)((long)pcVar74 + 0x50);
  pppcVar69[0xb] = (code **)*(code ****)((long)pcVar74 + 0x48);
  pppcVar69[10] = (code **)pppcVar77;
  pppcVar69[0xd] = (code **)pppcVar90;
  pppcVar69[0xc] = (code **)pppcVar94;
  pppcVar77 = *(code ****)((long)pcVar74 + 0x60);
  pppcVar90 = *(code ****)((long)pcVar74 + 0x78);
  pppcVar94 = *(code ****)((long)pcVar74 + 0x70);
  pppcVar69[0xf] = (code **)*(code ****)((long)pcVar74 + 0x68);
  pppcVar69[0xe] = (code **)pppcVar77;
  pppcVar69[0x11] = (code **)pppcVar90;
  pppcVar69[0x10] = (code **)pppcVar94;
  pppcVar77 = *(code ****)pcVar74;
  pppcVar90 = *(code ****)((long)pcVar74 + 0x18);
  pppcVar94 = *(code ****)((long)pcVar74 + 0x10);
  pppcVar69[3] = (code **)*(code ****)((long)pcVar74 + 8);
  pppcVar69[2] = (code **)pppcVar77;
  pppcVar69[5] = (code **)pppcVar90;
  pppcVar69[4] = (code **)pppcVar94;
  pppcVar77 = *(code ****)((long)pcVar74 + 0x20);
  pppcVar90 = *(code ****)((long)pcVar74 + 0x38);
  pppcVar94 = *(code ****)((long)pcVar74 + 0x30);
  pppcVar69[7] = (code **)*(code ****)((long)pcVar74 + 0x28);
  pppcVar69[6] = (code **)pppcVar77;
  pppcVar69[9] = (code **)pppcVar90;
  pppcVar69[8] = (code **)pppcVar94;
  local_90 = FUN_1000f81ac;
  local_b0 = (code ****)PTR___NSConcreteStackBlock_100521110;
  local_a0 = FUN_1000c7e7c;
  local_98 = (code ****)&DAT_10052a7c0;
  local_88 = (code ****)pppcVar69;
  pvVar57 = __Block_copy(&local_b0);
  DVar58.unknown = (undefined *)local_88;
  FUN_1000f80c4(pcVar74,&local_170);
  _swift_release();
  Dispatch::DispatchQoS::get_unspecified(DVar58);
  pppcVar77 = local_1c0[1];
  local_170 = (code ***)PTR___swiftEmptyArrayStorage_100524190;
  Swift::SetAlgebra::_init
            (param_10.unknown,&local_170,local_1c0[1],local_1a8[2],localized.unknown,local_1c0[2]);
  (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter(deadline,qos,param_10);
  __Block_release(pvVar57);
  (*(code *)local_1a8[4])(param_10.unknown,localized.unknown);
  (*(code *)local_1a8[3])(qos.unknown,local_1a8[6]);
  ppppcVar66 = local_1a8[5];
  ppppcVar19 = local_1a8[0];
  DVar21.unknown = deadline.unknown;
  (*(code *)local_1a8[0])(deadline.unknown,local_1a8[5]);
  local_1d8[0] = (code ***)
                 (extension_Dispatch)::__C::OS_dispatch_queue::get_main
                           ((OS_dispatch_queue *)DVar21.unknown);
  Dispatch::DispatchTime::now((DispatchTime)local_1d8[0]);
  Dispatch::__infix((DispatchTime)AVar91.unknown,0.18);
  (*(code *)ppppcVar19)(AVar91.unknown,ppppcVar66);
  pppcVar69 = (code ***)&DAT_10052a7f8;
  _swift_allocObject(&DAT_10052a7f8,200,7);
  pppcVar94 = *(code ****)((long)pcVar74 + 0x80);
  pppcVar83 = *(code ****)((long)pcVar74 + 0x98);
  pppcVar90 = *(code ****)((long)pcVar74 + 0x90);
  pppcVar69[0x13] = (code **)*(code ****)((long)pcVar74 + 0x88);
  pppcVar69[0x12] = (code **)pppcVar94;
  pppcVar69[0x15] = (code **)pppcVar83;
  pppcVar69[0x14] = (code **)pppcVar90;
  pppcVar94 = *(code ****)((long)pcVar74 + 0xa0);
  pppcVar69[0x17] = (code **)*(code ****)((long)pcVar74 + 0xa8);
  pppcVar69[0x16] = (code **)pppcVar94;
  pppcVar69[0x18] = (code **)*(code ****)((long)pcVar74 + 0xb0);
  pppcVar94 = *(code ****)((long)pcVar74 + 0x40);
  pppcVar83 = *(code ****)((long)pcVar74 + 0x58);
  pppcVar90 = *(code ****)((long)pcVar74 + 0x50);
  pppcVar69[0xb] = (code **)*(code ****)((long)pcVar74 + 0x48);
  pppcVar69[10] = (code **)pppcVar94;
  pppcVar69[0xd] = (code **)pppcVar83;
  pppcVar69[0xc] = (code **)pppcVar90;
  pppcVar94 = *(code ****)((long)pcVar74 + 0x60);
  pppcVar83 = *(code ****)((long)pcVar74 + 0x78);
  pppcVar90 = *(code ****)((long)pcVar74 + 0x70);
  pppcVar69[0xf] = (code **)*(code ****)((long)pcVar74 + 0x68);
  pppcVar69[0xe] = (code **)pppcVar94;
  pppcVar69[0x11] = (code **)pppcVar83;
  pppcVar69[0x10] = (code **)pppcVar90;
  pppcVar94 = *(code ****)pcVar74;
  pppcVar83 = *(code ****)((long)pcVar74 + 0x18);
  pppcVar90 = *(code ****)((long)pcVar74 + 0x10);
  pppcVar69[3] = (code **)*(code ****)((long)pcVar74 + 8);
  pppcVar69[2] = (code **)pppcVar94;
  pppcVar69[5] = (code **)pppcVar83;
  pppcVar69[4] = (code **)pppcVar90;
  pppcVar94 = *(code ****)((long)pcVar74 + 0x20);
  pppcVar83 = *(code ****)((long)pcVar74 + 0x38);
  pppcVar90 = *(code ****)((long)pcVar74 + 0x30);
  pppcVar69[7] = (code **)*(code ****)((long)pcVar74 + 0x28);
  pppcVar69[6] = (code **)pppcVar94;
  pppcVar69[9] = (code **)pppcVar83;
  pppcVar69[8] = (code **)pppcVar90;
  local_90 = FUN_1000f81b4;
  local_b0 = (code ****)PTR___NSConcreteStackBlock_100521110;
  local_a0 = FUN_1000c7e7c;
  local_98 = (code ****)&DAT_10052a810;
  local_88 = (code ****)pppcVar69;
  pvVar57 = __Block_copy(&local_b0);
  DVar58.unknown = (undefined *)local_88;
  FUN_1000f80c4(pcVar74,&local_170);
  _swift_release();
  Dispatch::DispatchQoS::get_unspecified(DVar58);
  pppcVar94 = local_1c0[2];
  local_170 = (code ***)PTR___swiftEmptyArrayStorage_100524190;
  Swift::SetAlgebra::_init
            (param_10.unknown,&local_170,pppcVar77,local_1a8[2],localized.unknown,local_1c0[2]);
  (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter(deadline,qos,param_10);
  __Block_release(pvVar57);
  (*(code *)local_1a8[4])(param_10.unknown,localized.unknown);
  (*(code *)local_1a8[3])(qos.unknown,local_1a8[6]);
  ppppcVar66 = local_1a8[5];
  ppppcVar19 = local_1a8[0];
  DVar21.unknown = deadline.unknown;
  (*(code *)local_1a8[0])(deadline.unknown,local_1a8[5]);
  local_1d8[0] = (code ***)
                 (extension_Dispatch)::__C::OS_dispatch_queue::get_main
                           ((OS_dispatch_queue *)DVar21.unknown);
  Dispatch::DispatchTime::now((DispatchTime)local_1d8[0]);
  Dispatch::__infix((DispatchTime)AVar91.unknown,0.26);
  (*(code *)ppppcVar19)(AVar91.unknown,ppppcVar66);
  pppcVar69 = (code ***)&DAT_10052a848;
  _swift_allocObject(&DAT_10052a848,200,7);
  pppcVar77 = *(code ****)((long)pcVar74 + 0x80);
  pppcVar83 = *(code ****)((long)pcVar74 + 0x98);
  pppcVar90 = *(code ****)((long)pcVar74 + 0x90);
  pppcVar69[0x13] = (code **)*(code ****)((long)pcVar74 + 0x88);
  pppcVar69[0x12] = (code **)pppcVar77;
  pppcVar69[0x15] = (code **)pppcVar83;
  pppcVar69[0x14] = (code **)pppcVar90;
  pppcVar77 = *(code ****)((long)pcVar74 + 0xa0);
  pppcVar69[0x17] = (code **)*(code ****)((long)pcVar74 + 0xa8);
  pppcVar69[0x16] = (code **)pppcVar77;
  pppcVar69[0x18] = (code **)*(code ****)((long)pcVar74 + 0xb0);
  pppcVar77 = *(code ****)((long)pcVar74 + 0x40);
  pppcVar83 = *(code ****)((long)pcVar74 + 0x58);
  pppcVar90 = *(code ****)((long)pcVar74 + 0x50);
  pppcVar69[0xb] = (code **)*(code ****)((long)pcVar74 + 0x48);
  pppcVar69[10] = (code **)pppcVar77;
  pppcVar69[0xd] = (code **)pppcVar83;
  pppcVar69[0xc] = (code **)pppcVar90;
  pppcVar77 = *(code ****)((long)pcVar74 + 0x60);
  pppcVar83 = *(code ****)((long)pcVar74 + 0x78);
  pppcVar90 = *(code ****)((long)pcVar74 + 0x70);
  pppcVar69[0xf] = (code **)*(code ****)((long)pcVar74 + 0x68);
  pppcVar69[0xe] = (code **)pppcVar77;
  pppcVar69[0x11] = (code **)pppcVar83;
  pppcVar69[0x10] = (code **)pppcVar90;
  pppcVar77 = *(code ****)pcVar74;
  pppcVar83 = *(code ****)((long)pcVar74 + 0x18);
  pppcVar90 = *(code ****)((long)pcVar74 + 0x10);
  pppcVar69[3] = (code **)*(code ****)((long)pcVar74 + 8);
  pppcVar69[2] = (code **)pppcVar77;
  pppcVar69[5] = (code **)pppcVar83;
  pppcVar69[4] = (code **)pppcVar90;
  pppcVar77 = *(code ****)((long)pcVar74 + 0x20);
  pppcVar83 = *(code ****)((long)pcVar74 + 0x38);
  pppcVar90 = *(code ****)((long)pcVar74 + 0x30);
  pppcVar69[7] = (code **)*(code ****)((long)pcVar74 + 0x28);
  pppcVar69[6] = (code **)pppcVar77;
  pppcVar69[9] = (code **)pppcVar83;
  pppcVar69[8] = (code **)pppcVar90;
  local_90 = FUN_1000f81bc;
  local_b0 = (code ****)PTR___NSConcreteStackBlock_100521110;
  local_a0 = FUN_1000c7e7c;
  local_98 = (code ****)&DAT_10052a860;
  local_88 = (code ****)pppcVar69;
  pvVar57 = __Block_copy(&local_b0);
  DVar58.unknown = (undefined *)local_88;
  FUN_1000f80c4(pcVar74,&local_170);
  _swift_release();
  Dispatch::DispatchQoS::get_unspecified(DVar58);
  local_170 = (code ***)PTR___swiftEmptyArrayStorage_100524190;
  Swift::SetAlgebra::_init
            (param_10.unknown,&local_170,local_1c0[1],local_1a8[2],localized.unknown,pppcVar94);
  (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter(deadline,qos,param_10);
  __Block_release(pvVar57);
  (*(code *)local_1a8[4])(param_10.unknown,localized.unknown);
  (*(code *)local_1a8[3])(qos.unknown,local_1a8[6]);
  ppppcVar19 = local_1a8[0];
  DVar21.unknown = deadline.unknown;
  (*(code *)local_1a8[0])(deadline.unknown,ppppcVar66);
  DVar21.unknown = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(DVar21.unknown);
  Dispatch::DispatchTime::now(DVar21);
  Dispatch::__infix((DispatchTime)AVar91.unknown,0.34);
  (*(code *)ppppcVar19)(AVar91.unknown,ppppcVar66);
  pppcVar69 = (code ***)&DAT_10052a898;
  _swift_allocObject(&DAT_10052a898,200,7);
  pppcVar77 = *(code ****)((long)pcVar74 + 0x80);
  pppcVar90 = *(code ****)((long)pcVar74 + 0x98);
  pppcVar94 = *(code ****)((long)pcVar74 + 0x90);
  pppcVar69[0x13] = (code **)*(code ****)((long)pcVar74 + 0x88);
  pppcVar69[0x12] = (code **)pppcVar77;
  pppcVar69[0x15] = (code **)pppcVar90;
  pppcVar69[0x14] = (code **)pppcVar94;
  pppcVar77 = *(code ****)((long)pcVar74 + 0xa0);
  pppcVar69[0x17] = (code **)*(code ****)((long)pcVar74 + 0xa8);
  pppcVar69[0x16] = (code **)pppcVar77;
  pppcVar69[0x18] = (code **)*(code ****)((long)pcVar74 + 0xb0);
  pppcVar77 = *(code ****)((long)pcVar74 + 0x40);
  pppcVar90 = *(code ****)((long)pcVar74 + 0x58);
  pppcVar94 = *(code ****)((long)pcVar74 + 0x50);
  pppcVar69[0xb] = (code **)*(code ****)((long)pcVar74 + 0x48);
  pppcVar69[10] = (code **)pppcVar77;
  pppcVar69[0xd] = (code **)pppcVar90;
  pppcVar69[0xc] = (code **)pppcVar94;
  pppcVar77 = *(code ****)((long)pcVar74 + 0x60);
  pppcVar90 = *(code ****)((long)pcVar74 + 0x78);
  pppcVar94 = *(code ****)((long)pcVar74 + 0x70);
  pppcVar69[0xf] = (code **)*(code ****)((long)pcVar74 + 0x68);
  pppcVar69[0xe] = (code **)pppcVar77;
  pppcVar69[0x11] = (code **)pppcVar90;
  pppcVar69[0x10] = (code **)pppcVar94;
  pppcVar77 = *(code ****)pcVar74;
  pppcVar90 = *(code ****)((long)pcVar74 + 0x18);
  pppcVar94 = *(code ****)((long)pcVar74 + 0x10);
  pppcVar69[3] = (code **)*(code ****)((long)pcVar74 + 8);
  pppcVar69[2] = (code **)pppcVar77;
  pppcVar69[5] = (code **)pppcVar90;
  pppcVar69[4] = (code **)pppcVar94;
  pppcVar77 = *(code ****)((long)pcVar74 + 0x20);
  pppcVar90 = *(code ****)((long)pcVar74 + 0x38);
  pppcVar94 = *(code ****)((long)pcVar74 + 0x30);
  pppcVar69[7] = (code **)*(code ****)((long)pcVar74 + 0x28);
  pppcVar69[6] = (code **)pppcVar77;
  pppcVar69[9] = (code **)pppcVar90;
  pppcVar69[8] = (code **)pppcVar94;
  local_90 = FUN_1000f81c4;
  local_b0 = (code ****)PTR___NSConcreteStackBlock_100521110;
  local_a0 = FUN_1000c7e7c;
  local_98 = (code ****)&DAT_10052a8b0;
  local_88 = (code ****)pppcVar69;
  pvVar57 = __Block_copy(&local_b0);
  DVar58.unknown = (undefined *)local_88;
  FUN_1000f80c4(pcVar74,&local_170);
  _swift_release();
  Dispatch::DispatchQoS::get_unspecified(DVar58);
  local_170 = (code ***)PTR___swiftEmptyArrayStorage_100524190;
  Swift::SetAlgebra::_init
            (param_10.unknown,&local_170,local_1c0[1],local_1a8[2],localized.unknown,local_1c0[2]);
  (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter(deadline,qos,param_10);
  __Block_release(pvVar57);
  (*(code *)local_1a8[4])(param_10.unknown,localized.unknown);
  (*(code *)local_1a8[3])(qos.unknown,local_1a8[6]);
  (*(code *)ppppcVar19)(deadline.unknown,ppppcVar66);
  FUN_1000e4124();
  auVar155._8_8_ = ppppcVar66;
  auVar155._0_8_ = deadline.unknown;
  return auVar155;
switchD_1000a5400_caseD_cc:
  *(code ****)((long)pcVar74 + 0x7f8) = in_register_00005128;
  *(code ****)((long)pcVar74 + 0x7f0) = unaff_d9;
  *(code ****)((long)pcVar74 + 0x7e8) = in_register_00005108;
  *(code ****)((long)pcVar74 + 0x7e0) = unaff_d8;
  in_register_00005128 = *(code ****)((long)pcVar74 + 0xab8);
  unaff_d9 = *(code ****)((long)pcVar74 + 0xab0);
  *(code *****)((long)pcVar74 + 0x6d8) = in_register_00005008;
  *(undefined **)((long)pcVar74 + 0x6d0) = param_2.unknown;
  *(code ****)((long)pcVar74 + 0x6e8) = *(code ****)((long)pcVar74 + 0xab8);
  *(code ****)((long)pcVar74 + 0x6e0) = *(code ****)((long)pcVar74 + 0xab0);
  in_register_00005108 = *(code ****)((long)pcVar74 + 0xad8);
  unaff_d8 = *(code ****)((long)pcVar74 + 0xad0);
  *(code ****)((long)pcVar74 + 0x6f8) = in_register_000050a8;
  *(code ****)((long)pcVar74 + 0x6f0) = param_7;
  *(code ****)((long)pcVar74 + 0x708) = *(code ****)((long)pcVar74 + 0xad8);
  *(code ****)((long)pcVar74 + 0x700) = *(code ****)((long)pcVar74 + 0xad0);
  in_register_00005008 = *(code *****)((long)pcVar74 + 0xa78);
  param_2.unknown = *(undefined **)((long)pcVar74 + 0xa70);
  in_register_000050a8 = *(code ****)((long)pcVar74 + 0xa78);
  param_7 = *(code ****)((long)pcVar74 + 0xa70);
switchD_1000a5400_caseD_d4:
  *(code ****)((long)pcVar74 + 0x698) = in_register_000050c8;
  *(code ****)((long)pcVar74 + 0x690) = param_8;
  *(code *****)((long)pcVar74 + 0x6a8) = in_register_00005008;
  *(undefined **)((long)pcVar74 + 0x6a0) = param_2.unknown;
  *(code ****)((long)pcVar74 + 0x6b8) = in_register_00005208;
  *(code ****)((long)pcVar74 + 0x6b0) = pppcVar77;
  *(code ****)((long)pcVar74 + 0x6c8) = *(code ****)((long)pcVar74 + 0xa98);
  *(code ****)((long)pcVar74 + 0x6c0) = *(code ****)((long)pcVar74 + 0xa90);
  *(code ****)((long)pcVar74 + 0x658) = in_register_00005248;
  *(code ****)((long)pcVar74 + 0x650) = pppcVar90;
  *(code ****)((long)pcVar74 + 0x668) = *(code ****)((long)pcVar74 + 0xa38);
  *(code ****)((long)pcVar74 + 0x660) = *(code ****)((long)pcVar74 + 0xa30);
  *(code ****)((long)pcVar74 + 0x678) = in_register_00005288;
  *(code ****)((long)pcVar74 + 0x670) = pppcVar82;
  *(code ****)((long)pcVar74 + 0x688) = *(code ****)((long)pcVar74 + 0xa58);
  *(code ****)((long)pcVar74 + 0x680) = *(code ****)((long)pcVar74 + 0xa50);
  *(code ****)((long)pcVar74 + 0x1a8) = in_register_00005028;
  *(code ****)((long)pcVar74 + 0x1a0) = param_3;
  *(code ****)((long)pcVar74 + 0x1b8) = in_register_00005128;
  *(code ****)((long)pcVar74 + 0x1b0) = unaff_d9;
  *(code ****)((long)pcVar74 + 0x1c8) = in_register_00005048;
  *(code ****)((long)pcVar74 + 0x1c0) = param_4;
  *(code ****)((long)pcVar74 + 0x1d8) = in_register_00005108;
  *(code ****)((long)pcVar74 + 0x1d0) = unaff_d8;
  *(code ****)((long)pcVar74 + 0x168) = in_register_00005068;
  *(code ****)((long)pcVar74 + 0x160) = param_5;
  *(code ****)((long)pcVar74 + 0x178) = in_register_000050a8;
  *(code ****)((long)pcVar74 + 0x170) = param_7;
  *(code ****)((long)pcVar74 + 0x188) = in_register_00005088;
  *(code ****)((long)pcVar74 + 0x180) = param_6;
  *(code ****)((long)pcVar74 + 0x198) = *(code ****)((long)pcVar74 + 0xa98);
  *(code ****)((long)pcVar74 + 400) = *(code ****)((long)pcVar74 + 0xa90);
  *(code ****)((long)pcVar74 + 0x128) = in_register_000050e8;
  *(code ****)((long)pcVar74 + 0x120) = param_9;
  *(code ****)((long)pcVar74 + 0x138) = *(code ****)((long)pcVar74 + 0xa38);
  *(code ****)((long)pcVar74 + 0x130) = *(code ****)((long)pcVar74 + 0xa30);
  *(code ****)((long)pcVar74 + 0x148) = in_register_00005228;
  *(code ****)((long)pcVar74 + 0x140) = pppcVar94;
  *(code ****)((long)pcVar74 + 0x158) = *(code ****)((long)pcVar74 + 0xa58);
  *(code ****)((long)pcVar74 + 0x150) = *(code ****)((long)pcVar74 + 0xa50);
  *(code ****)((long)pcVar74 + 0x7b8) = in_register_00005268;
  *(code ****)((long)pcVar74 + 0x7b0) = pppcVar83;
  *(code ****)((long)pcVar74 + 0x7c8) = *(code ****)((long)pcVar74 + 0x568);
  *(code ****)((long)pcVar74 + 0x7c0) = *(code ****)((long)pcVar74 + 0x560);
  uVar64 = *(undefined8 *)((long)ppppcVar72 + 0xb9);
  *(undefined8 *)((long)pcVar74 + 0x7d1) = *(undefined8 *)((long)ppppcVar72 + 0xc1);
  *(undefined8 *)((long)pcVar74 + 0x7c9) = uVar64;
  *(code ****)((long)pcVar74 + 0x778) = in_register_00005328;
  *(code ****)((long)pcVar74 + 0x770) = pppcVar109;
  *(code ****)((long)pcVar74 + 0x788) = *(code ****)((long)pcVar74 + 0x528);
  *(code ****)((long)pcVar74 + 0x780) = *(code ****)((long)pcVar74 + 0x520);
  *(code ****)((long)pcVar74 + 0x7a8) = *(code ****)((long)pcVar74 + 0x548);
  *(code ****)((long)pcVar74 + 0x7a0) = *(code ****)((long)pcVar74 + 0x540);
  *(code ****)((long)pcVar74 + 0x798) = in_register_00005368;
  *(code ****)((long)pcVar74 + 0x790) = pppcVar111;
  *(code ****)((long)pcVar74 + 0x738) = in_register_000053a8;
  *(code ****)((long)pcVar74 + 0x730) = pppcVar113;
  *(code ****)((long)pcVar74 + 0x748) = *(code ****)((long)pcVar74 + 0x4e8);
  *(code ****)((long)pcVar74 + 0x740) = *(code ****)((long)pcVar74 + 0x4e0);
  *(code ****)((long)pcVar74 + 0x768) = *(code ****)((long)pcVar74 + 0x508);
  *(code ****)((long)pcVar74 + 0x760) = *(code ****)((long)pcVar74 + 0x500);
  *(code ****)((long)pcVar74 + 0x758) = in_register_000053c8;
  *(code ****)((long)pcVar74 + 0x750) = pppcVar114;
  *(code ****)((long)pcVar74 + 0x728) = *(code ****)((long)pcVar74 + 0x4c8);
  *(code ****)((long)pcVar74 + 0x720) = *(code ****)((long)pcVar74 + 0x4c0);
  *(code ****)((long)pcVar74 + 0x710) = in_d31;
  *(code ****)((long)pcVar74 + 0x718) = in_register_000053e8;
  *(undefined8 *)((long)pcVar74 + 0x2a1) = *(undefined8 *)((long)pcVar74 + 0x571);
  *(undefined8 *)((long)pcVar74 + 0x299) = *(undefined8 *)((long)pcVar74 + 0x569);
  *(code ****)((long)pcVar74 + 0x288) = in_register_000052a8;
  *(code ****)((long)pcVar74 + 0x280) = pppcVar87;
  *(code ****)((long)pcVar74 + 0x298) = *(code ****)((long)pcVar74 + 0x568);
  *(code ****)((long)pcVar74 + 0x290) = *(code ****)((long)pcVar74 + 0x560);
  *(code ****)((long)pcVar74 + 0x248) = in_register_000052c8;
  *(code ****)((long)pcVar74 + 0x240) = pppcVar106;
  *(code ****)((long)pcVar74 + 600) = *(code ****)((long)pcVar74 + 0x528);
  *(code ****)((long)pcVar74 + 0x250) = *(code ****)((long)pcVar74 + 0x520);
  *(code ****)((long)pcVar74 + 0x268) = in_register_000052e8;
  *(code ****)((long)pcVar74 + 0x260) = pppcVar107;
  *(code ****)((long)pcVar74 + 0x278) = *(code ****)((long)pcVar74 + 0x548);
  *(code ****)((long)pcVar74 + 0x270) = *(code ****)((long)pcVar74 + 0x540);
  *(code ****)((long)pcVar74 + 0x208) = in_register_00005308;
  *(code ****)((long)pcVar74 + 0x200) = pppcVar108;
  *(code ****)((long)pcVar74 + 0x218) = *(code ****)((long)pcVar74 + 0x4e8);
  *(code ****)((long)pcVar74 + 0x210) = *(code ****)((long)pcVar74 + 0x4e0);
  *(code ****)((long)pcVar74 + 0x228) = in_register_00005348;
  *(code ****)((long)pcVar74 + 0x220) = pppcVar110;
  *(code ****)((long)pcVar74 + 0x238) = *(code ****)((long)pcVar74 + 0x508);
  *(code ****)((long)pcVar74 + 0x230) = *(code ****)((long)pcVar74 + 0x500);
  *(code ****)((long)pcVar74 + 0x1e8) = in_register_00005388;
  *(code ****)((long)pcVar74 + 0x1e0) = pppcVar112;
  *(code ****)((long)pcVar74 + 0x1f8) = *(code ****)((long)pcVar74 + 0x4c8);
  *(code ****)((long)pcVar74 + 0x1f0) = *(code ****)((long)pcVar74 + 0x4c0);
  _memcpy(*(code ****)((long)pcVar74 + 0x30),(code ****)((long)pcVar74 + 0x120),0x189);
  puVar67 = &DAT_100550978;
  FUN_1000087e4((code ****)((long)pcVar74 + 0x650),(code ****)((long)pcVar74 + 0x50),&DAT_100550978,
                &DAT_100422410);
  FUN_1000087e4((code ****)((long)pcVar74 + 0x710),(code ****)((long)pcVar74 + 0x50),size,ppppcVar66
               );
  FUN_10002a29c((code ****)((long)pcVar74 + 0x7e0),size,ppppcVar66);
  ppppcVar19 = (code ****)((long)pcVar74 + 0x2b0);
  FUN_10002a29c(ppppcVar19,&DAT_100550978,&DAT_100422410);
  auVar129._8_8_ = puVar67;
  auVar129._0_8_ = ppppcVar19;
  return auVar129;
switchD_1000a5400_caseD_78:
  size = (ushort *)param_13;
  ppppcVar66 = (code ****)AVar46.unknown;
  AVar92.unknown = table.unknown;
  deadline.unknown = param_12.unknown;
  ppppcVar22 = (code ****)AVar46.unknown;
switchD_1000a5400_caseD_74:
  DVar18 = SwiftUI::Font::Design::typeMetadataAccessor();
  lVar20 = CONCAT71((int7)((ulong)ppppcVar22 >> 8),DVar18.value);
  (**(code **)(*(long *)(lVar20 + -8) + 0x38))(DVar21.unknown,1,1,lVar20);
  FVar26 = SwiftUI::Font::_system((CGFloat)0x0,(Font)0x1);
  FUN_10002a29c(DVar21.unknown,&DAT_10054a828,&DAT_10041e3c0);
  ppppcVar19 = ppppcVar66;
  ppppcVar80 = (code ****)AVar92.unknown;
  pppcVar77 = (code ***)deadline.unknown;
  TVar27 = SwiftUI::Text::_font(FVar26.unknown);
  *(int *)((long)pcVar74 + 0xc) = (int)ppppcVar80;
  *(code ****)((long)pcVar74 + 0x10) = pppcVar77;
  _swift_release(FVar26.unknown);
  FUN_100025b34(ppppcVar66,AVar92.unknown,deadline.unknown);
  _swift_bridgeObjectRelease(size);
  pppcVar77 = *(code ****)((long)param_10.unknown + 0x90);
  *(code ****)((long)pcVar74 + 0x498) = *(code ****)((long)param_10.unknown + 0x98);
  *(code ****)((long)pcVar74 + 0x490) = pppcVar77;
  *(code ****)((long)pcVar74 + 0x4a0) = *(code ****)((long)param_10.unknown + 0xa0);
  SwiftUI::State::get_wrappedValue((State)*(undefined **)((long)pcVar74 + 0x38));
  CVar43.unknown = *(undefined **)((long)pcVar74 + 0x3d8);
  *(undefined **)((long)pcVar74 + 0x18) = param_10.unknown;
  if ((code ***)CVar43.unknown == (code ***)0x0) {
    CVar43.unknown =
         (undefined *)SwiftUI::HierarchicalShapeStyle::get_secondary((HierarchicalShapeStyle)0x0);
    *(int *)((long)pcVar74 + 0x490) = (int)CVar43.unknown;
    FUN_100025b4c();
    puVar67 = PTR___type_metadata_for_SwiftUI_HierarchicalShapeStyle_1005229b8;
  }
  else {
    _swift_bridgeObjectRelease();
    CVar43 = SwiftUI::Color::get_orange(CVar43);
    *(undefined **)((long)pcVar74 + 0x490) = CVar43.unknown;
    FUN_100028d58();
    puVar67 = PTR___type_metadata_for_SwiftUI_Color_100523288;
  }
  AVar47 = SwiftUI::AnyShapeStyle::_init(CVar43.unknown,puVar67,CVar43.unknown);
  *(undefined **)((long)pcVar74 + 0x490) = AVar47.unknown;
  FUN_1000d6dac();
  uVar4 = *(uint *)((long)pcVar74 + 0xc);
  pppcVar94 = *(code ****)((long)pcVar74 + 0x10);
  TVar63 = TVar27;
  ppppcVar66 = ppppcVar19;
  pppcVar77 = (code ***)(ulong)uVar4;
  TVar48 = SwiftUI::Text::_foregroundStyle();
  *(undefined **)pcVar74 = TVar63.unknown;
  FUN_100025b34(TVar27.unknown,ppppcVar19,(code ***)(ulong)uVar4);
  _swift_release(AVar47.unknown);
  _swift_bridgeObjectRelease(pppcVar94);
  AVar54.unknown = &DAT_100423158;
  _swift_getKeyPath();
  AVar49 = SwiftUI::Alignment::get_center(AVar54);
  ppppcVar70[-2] = (code ***)AVar49.unknown;
  ppppcVar70[-1] = (code ***)ppppcVar19;
  *(code *)(ppppcVar70 + -3) = (code)0x1;
  ppppcVar70[-4] = (code ***)0x0;
  *(code *)(ppppcVar70 + -5) = (code)0x1;
  ppppcVar70[-6] = (code ***)0x0;
  _Var28 = SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  *(code ****)((long)qos.unknown + 0x3f) = pppcVar69;
  *(code *****)((long)qos.unknown + 0x37) = local_b0;
  *(code *****)((long)qos.unknown + 0x4f) = local_98;
  *(code **)((long)qos.unknown + 0x47) = local_a0;
  *(code *****)((long)qos.unknown + 0x5f) = local_88;
  *(code **)((long)qos.unknown + 0x57) = local_90;
  *(code *****)((long)qos.unknown + 0x6f) = local_80[1];
  *(code *****)((long)qos.unknown + 0x67) = local_80[0];
  *(code ****)((long)qos.unknown + 0xf) = local_e0[1];
  *(code ****)((long)qos.unknown + 7) = local_e0[0];
  *(code ****)((long)qos.unknown + 0x1f) = local_c8;
  *(code ****)((long)qos.unknown + 0x17) = local_d0;
  *(code *****)((long)qos.unknown + 0x2f) = local_c0[1];
  *(code *****)((long)qos.unknown + 0x27) = local_c0[0];
  AVar50 = SwiftUI::Animation::spring(0.2,1.0,0.0,_Var28.unknown);
  *(undefined **)((long)pcVar74 + 0x10) = AVar50.unknown;
  pppcVar69 = *(code ****)((long)pcVar74 + 0x18);
  pppcVar94 = (code ***)pppcVar69[0x12];
  *(code ***)((long)pcVar74 + 0x498) = pppcVar69[0x13];
  *(code ****)((long)pcVar74 + 0x490) = pppcVar94;
  *(code ***)((long)pcVar74 + 0x4a0) = pppcVar69[0x14];
  SwiftUI::State::get_wrappedValue((State)*(undefined **)((long)pcVar74 + 0x38));
  *(undefined **)((long)pcVar74 + 0x1c0) = TVar48.unknown;
  *(code ****)((long)pcVar74 + 0x1c8) = *(code ****)pcVar74;
  *(code *)((long)pcVar74 + 0x1d0) = SUB81(ppppcVar66,0);
  *(code ****)((long)pcVar74 + 0x1d8) = pppcVar77;
  *(undefined **)((long)pcVar74 + 0x1e0) = AVar54.unknown;
  *(code ****)((long)pcVar74 + 0x1e8) = (code ***)0x1;
  *(code *)((long)pcVar74 + 0x1f0) = (code)0x0;
  pppcVar69 = *(code ****)qos.unknown;
  pppcVar111 = *(code ****)((long)qos.unknown + 0x18);
  pppcVar110 = *(code ****)((long)qos.unknown + 0x10);
  *(code ****)((long)pcVar74 + 0x1f9) = *(code ****)((long)qos.unknown + 8);
  *(code ****)((long)pcVar74 + 0x1f1) = pppcVar69;
  pppcVar82 = *(code ****)((long)qos.unknown + 0x38);
  pppcVar83 = *(code ****)((long)qos.unknown + 0x30);
  pppcVar69 = *(code ****)((long)qos.unknown + 0x40);
  *(code ****)((long)pcVar74 + 0x239) = *(code ****)((long)qos.unknown + 0x48);
  *(code ****)((long)pcVar74 + 0x231) = pppcVar69;
  pppcVar87 = *(code ****)((long)qos.unknown + 0x48);
  pppcVar90 = *(code ****)((long)qos.unknown + 0x40);
  pppcVar69 = *(code ****)((long)qos.unknown + 0x50);
  *(code ****)((long)pcVar74 + 0x249) = *(code ****)((long)qos.unknown + 0x58);
  *(code ****)((long)pcVar74 + 0x241) = pppcVar69;
  pppcVar107 = *(code ****)((long)qos.unknown + 0x58);
  pppcVar106 = *(code ****)((long)qos.unknown + 0x50);
  pppcVar69 = *(code ****)((long)qos.unknown + 0x60);
  *(code ****)((long)pcVar74 + 0x259) = *(code ****)((long)qos.unknown + 0x68);
  *(code ****)((long)pcVar74 + 0x251) = pppcVar69;
  pppcVar109 = *(code ****)((long)qos.unknown + 8);
  pppcVar108 = *(code ****)qos.unknown;
  pppcVar69 = *(code ****)((long)qos.unknown + 0x10);
  *(code ****)((long)pcVar74 + 0x209) = *(code ****)((long)qos.unknown + 0x18);
  *(code ****)((long)pcVar74 + 0x201) = pppcVar69;
  pppcVar112 = *(code ****)((long)qos.unknown + 0x20);
  pppcVar94 = *(code ****)((long)qos.unknown + 0x38);
  pppcVar69 = *(code ****)((long)qos.unknown + 0x30);
  *(code ****)((long)pcVar74 + 0x219) = *(code ****)((long)qos.unknown + 0x28);
  *(code ****)((long)pcVar74 + 0x211) = pppcVar112;
  pppcVar113 = *(code ****)((long)qos.unknown + 0x28);
  pppcVar112 = *(code ****)((long)qos.unknown + 0x20);
  *(code ****)((long)pcVar74 + 0x229) = pppcVar94;
  *(code ****)((long)pcVar74 + 0x221) = pppcVar69;
  *(code ****)((long)pcVar74 + 0x608) = *(code ****)((long)pcVar74 + 0x1f8);
  *(code ****)((long)pcVar74 + 0x600) = *(code ****)((long)pcVar74 + 0x1f0);
  *(code ****)((long)pcVar74 + 0x5f8) = *(code ****)((long)pcVar74 + 0x1e8);
  *(code ****)((long)pcVar74 + 0x5f0) = *(code ****)((long)pcVar74 + 0x1e0);
  *(code ****)((long)pcVar74 + 0x658) = *(code ****)((long)pcVar74 + 0x248);
  *(code ****)((long)pcVar74 + 0x650) = *(code ****)((long)pcVar74 + 0x240);
  *(code ****)((long)pcVar74 + 0x668) = *(code ****)((long)pcVar74 + 600);
  *(code ****)((long)pcVar74 + 0x660) = *(code ****)((long)pcVar74 + 0x250);
  *(code ****)((long)pcVar74 + 0x618) = *(code ****)((long)pcVar74 + 0x208);
  *(code ****)((long)pcVar74 + 0x610) = *(code ****)((long)pcVar74 + 0x200);
  *(code ****)((long)pcVar74 + 0x628) = *(code ****)((long)pcVar74 + 0x218);
  *(code ****)((long)pcVar74 + 0x620) = *(code ****)((long)pcVar74 + 0x210);
  *(code ****)((long)pcVar74 + 0x648) = *(code ****)((long)pcVar74 + 0x238);
  *(code ****)((long)pcVar74 + 0x640) = *(code ****)((long)pcVar74 + 0x230);
  *(code ****)((long)pcVar74 + 0x638) = *(code ****)((long)pcVar74 + 0x228);
  *(code ****)((long)pcVar74 + 0x630) = *(code ****)((long)pcVar74 + 0x220);
  *(code ****)((long)pcVar74 + 0x5d8) = *(code ****)((long)pcVar74 + 0x1c8);
  *(code ****)((long)pcVar74 + 0x5d0) = *(code ****)((long)pcVar74 + 0x1c0);
  *(code ****)((long)pcVar74 + 0x5e8) = *(code ****)((long)pcVar74 + 0x1d8);
  *(code ****)((long)pcVar74 + 0x5e0) = *(code ****)((long)pcVar74 + 0x1d0);
  *(code ****)((long)pcVar74 + 0x2e1) = pppcVar87;
  *(code ****)((long)pcVar74 + 0x2d9) = pppcVar90;
  *(code ****)((long)pcVar74 + 0x2f1) = pppcVar107;
  *(code ****)((long)pcVar74 + 0x2e9) = pppcVar106;
  pppcVar69 = *(code ****)((long)qos.unknown + 0x60);
  *(code ****)((long)pcVar74 + 0x301) = *(code ****)((long)qos.unknown + 0x68);
  *(code ****)((long)pcVar74 + 0x2f9) = pppcVar69;
  *(code ****)((long)pcVar74 + 0x2a1) = pppcVar109;
  *(code ****)((long)pcVar74 + 0x299) = pppcVar108;
  *(code ****)((long)pcVar74 + 0x2b1) = pppcVar111;
  *(code ****)((long)pcVar74 + 0x2a9) = pppcVar110;
  *(code ****)((long)pcVar74 + 0x2c1) = pppcVar113;
  *(code ****)((long)pcVar74 + 0x2b9) = pppcVar112;
  pppcVar94 = *(code ****)((long)pcVar74 + 0x3d0);
  pppcVar90 = *(code ****)((long)pcVar74 + 0x3d8);
  pppcVar69 = *(code ****)((long)qos.unknown + 0x6f);
  *(code ****)((long)pcVar74 + 0x260) = pppcVar69;
  *(code ****)((long)pcVar74 + 0x670) = pppcVar69;
  *(undefined **)((long)pcVar74 + 0x268) = TVar48.unknown;
  *(code ****)((long)pcVar74 + 0x270) = *(code ****)pcVar74;
  *(code *)((long)pcVar74 + 0x278) = SUB81(ppppcVar66,0);
  *(code ****)((long)pcVar74 + 0x280) = pppcVar77;
  *(undefined **)((long)pcVar74 + 0x288) = AVar54.unknown;
  *(code ****)((long)pcVar74 + 0x290) = (code ***)0x1;
  *(code *)((long)pcVar74 + 0x298) = (code)0x0;
  *(code ****)((long)pcVar74 + 0x308) = *(code ****)((long)qos.unknown + 0x6f);
  *(code ****)((long)pcVar74 + 0x2d1) = pppcVar82;
  *(code ****)((long)pcVar74 + 0x2c9) = pppcVar83;
  FUN_1000087e4((code ****)((long)pcVar74 + 0x1c0),(code ****)((long)pcVar74 + 0x490),&DAT_1005514a0
                ,&DAT_100423188);
  FUN_10002a29c((code ****)((long)pcVar74 + 0x268),&DAT_1005514a0,&DAT_100423188);
  *(code ****)((long)pcVar74 + 0x398) = *(code ****)((long)pcVar74 + 0x658);
  *(code ****)((long)pcVar74 + 0x390) = *(code ****)((long)pcVar74 + 0x650);
  *(code ****)((long)pcVar74 + 0x3a8) = *(code ****)((long)pcVar74 + 0x668);
  *(code ****)((long)pcVar74 + 0x3a0) = *(code ****)((long)pcVar74 + 0x660);
  *(code ****)((long)pcVar74 + 0x358) = *(code ****)((long)pcVar74 + 0x618);
  *(code ****)((long)pcVar74 + 0x350) = *(code ****)((long)pcVar74 + 0x610);
  *(code ****)((long)pcVar74 + 0x368) = *(code ****)((long)pcVar74 + 0x628);
  *(code ****)((long)pcVar74 + 0x360) = *(code ****)((long)pcVar74 + 0x620);
  *(code ****)((long)pcVar74 + 0x378) = *(code ****)((long)pcVar74 + 0x638);
  *(code ****)((long)pcVar74 + 0x370) = *(code ****)((long)pcVar74 + 0x630);
  *(code ****)((long)pcVar74 + 0x388) = *(code ****)((long)pcVar74 + 0x648);
  *(code ****)((long)pcVar74 + 0x380) = *(code ****)((long)pcVar74 + 0x640);
  *(code ****)((long)pcVar74 + 0x318) = *(code ****)((long)pcVar74 + 0x5d8);
  *(code ****)((long)pcVar74 + 0x310) = *(code ****)((long)pcVar74 + 0x5d0);
  *(code ****)((long)pcVar74 + 0x328) = *(code ****)((long)pcVar74 + 0x5e8);
  *(code ****)((long)pcVar74 + 800) = *(code ****)((long)pcVar74 + 0x5e0);
  *(code ****)((long)pcVar74 + 0x338) = *(code ****)((long)pcVar74 + 0x5f8);
  *(code ****)((long)pcVar74 + 0x330) = *(code ****)((long)pcVar74 + 0x5f0);
  *(code ****)((long)pcVar74 + 0x348) = *(code ****)((long)pcVar74 + 0x608);
  *(code ****)((long)pcVar74 + 0x340) = *(code ****)((long)pcVar74 + 0x600);
  *(code ****)((long)pcVar74 + 0x458) = *(code ****)((long)pcVar74 + 0x658);
  *(code ****)((long)pcVar74 + 0x450) = *(code ****)((long)pcVar74 + 0x650);
  *(code ****)((long)pcVar74 + 0x468) = *(code ****)((long)pcVar74 + 0x668);
  *(code ****)((long)pcVar74 + 0x460) = *(code ****)((long)pcVar74 + 0x660);
  *(code ****)((long)pcVar74 + 0x418) = *(code ****)((long)pcVar74 + 0x618);
  *(code ****)((long)pcVar74 + 0x410) = *(code ****)((long)pcVar74 + 0x610);
  *(code ****)((long)pcVar74 + 0x428) = *(code ****)((long)pcVar74 + 0x628);
  *(code ****)((long)pcVar74 + 0x420) = *(code ****)((long)pcVar74 + 0x620);
  *(code ****)((long)pcVar74 + 0x448) = *(code ****)((long)pcVar74 + 0x648);
  *(code ****)((long)pcVar74 + 0x440) = *(code ****)((long)pcVar74 + 0x640);
  *(code ****)((long)pcVar74 + 0x438) = *(code ****)((long)pcVar74 + 0x638);
  *(code ****)((long)pcVar74 + 0x430) = *(code ****)((long)pcVar74 + 0x630);
  *(code ****)((long)pcVar74 + 0x3d8) = *(code ****)((long)pcVar74 + 0x5d8);
  *(code ****)((long)pcVar74 + 0x3d0) = *(code ****)((long)pcVar74 + 0x5d0);
  *(code ****)((long)pcVar74 + 1000) = *(code ****)((long)pcVar74 + 0x5e8);
  *(code ****)((long)pcVar74 + 0x3e0) = *(code ****)((long)pcVar74 + 0x5e0);
  *(code ****)((long)pcVar74 + 0x3b0) = *(code ****)((long)pcVar74 + 0x670);
  *(code ****)((long)pcVar74 + 0x3b8) = *(code ****)((long)pcVar74 + 0x10);
  *(code ****)((long)pcVar74 + 0x3c0) = pppcVar94;
  *(code ****)((long)pcVar74 + 0x3c8) = pppcVar90;
  *(code ****)((long)pcVar74 + 0x3f8) = *(code ****)((long)pcVar74 + 0x5f8);
  *(code ****)((long)pcVar74 + 0x3f0) = *(code ****)((long)pcVar74 + 0x5f0);
  *(code ****)((long)pcVar74 + 0x408) = *(code ****)((long)pcVar74 + 0x608);
  *(code ****)((long)pcVar74 + 0x400) = *(code ****)((long)pcVar74 + 0x600);
  *(code ****)((long)pcVar74 + 0x470) = *(code ****)((long)pcVar74 + 0x670);
  *(code ****)((long)pcVar74 + 0x478) = *(code ****)((long)pcVar74 + 0x10);
  *(code ****)((long)pcVar74 + 0x480) = pppcVar94;
  *(code ****)((long)pcVar74 + 0x488) = pppcVar90;
  FUN_1000087e4((code ****)((long)pcVar74 + 0x310),(code ****)((long)pcVar74 + 0x490),&DAT_1005514a8
                ,&DAT_100423190);
  FUN_10002a29c((code ****)((long)pcVar74 + 0x3d0),&DAT_1005514a8,&DAT_100423190);
  pppcVar94 = *(code ****)((long)pcVar74 + 0x20);
  pppcVar69 = *(code ****)((long)pcVar74 + 0x30);
  FUN_1000d6df4(pppcVar94,pppcVar69);
  *(code ****)((long)pcVar74 + 0x188) = *(code ****)((long)pcVar74 + 0x398);
  *(code ****)((long)pcVar74 + 0x180) = *(code ****)((long)pcVar74 + 0x390);
  *(code ****)((long)pcVar74 + 0x198) = *(code ****)((long)pcVar74 + 0x3a8);
  *(code ****)((long)pcVar74 + 400) = *(code ****)((long)pcVar74 + 0x3a0);
  *(code ****)((long)pcVar74 + 0x1a8) = *(code ****)((long)pcVar74 + 0x3b8);
  *(code ****)((long)pcVar74 + 0x1a0) = *(code ****)((long)pcVar74 + 0x3b0);
  *(code ****)((long)pcVar74 + 0x1b8) = *(code ****)((long)pcVar74 + 0x3c8);
  *(code ****)((long)pcVar74 + 0x1b0) = *(code ****)((long)pcVar74 + 0x3c0);
  *(code ****)((long)pcVar74 + 0x148) = *(code ****)((long)pcVar74 + 0x358);
  *(code ****)((long)pcVar74 + 0x140) = *(code ****)((long)pcVar74 + 0x350);
  *(code ****)((long)pcVar74 + 0x158) = *(code ****)((long)pcVar74 + 0x368);
  *(code ****)((long)pcVar74 + 0x150) = *(code ****)((long)pcVar74 + 0x360);
  *(code ****)((long)pcVar74 + 0x168) = *(code ****)((long)pcVar74 + 0x378);
  *(code ****)((long)pcVar74 + 0x160) = *(code ****)((long)pcVar74 + 0x370);
  *(code ****)((long)pcVar74 + 0x178) = *(code ****)((long)pcVar74 + 0x388);
  *(code ****)((long)pcVar74 + 0x170) = *(code ****)((long)pcVar74 + 0x380);
  *(code ****)((long)pcVar74 + 0x108) = *(code ****)((long)pcVar74 + 0x318);
  *(code ****)((long)pcVar74 + 0x100) = *(code ****)((long)pcVar74 + 0x310);
  *(code ****)((long)pcVar74 + 0x118) = *(code ****)((long)pcVar74 + 0x328);
  *(code ****)((long)pcVar74 + 0x110) = *(code ****)((long)pcVar74 + 800);
  *(code ****)((long)pcVar74 + 0x128) = *(code ****)((long)pcVar74 + 0x338);
  *(code ****)((long)pcVar74 + 0x120) = *(code ****)((long)pcVar74 + 0x330);
  *(code ****)((long)pcVar74 + 0x138) = *(code ****)((long)pcVar74 + 0x348);
  *(code ****)((long)pcVar74 + 0x130) = *(code ****)((long)pcVar74 + 0x340);
  pppcVar77 = *(code ****)((long)pcVar74 + 0x28);
  FUN_1000d6df4(pppcVar69,pppcVar77);
  puVar67 = &DAT_1005514b0;
  FUN_100002f94(&DAT_1005514b0,&DAT_100423198);
  iVar7 = *(int *)(puVar67 + 0x30);
  pppcVar90 = *(code ****)((long)pcVar74 + 0x180);
  pppcVar106 = *(code ****)((long)pcVar74 + 0x198);
  pppcVar87 = *(code ****)((long)pcVar74 + 400);
  *(code ****)((long)pcVar74 + 0x518) = *(code ****)((long)pcVar74 + 0x188);
  *(code ****)((long)pcVar74 + 0x510) = *(code ****)((long)pcVar74 + 0x180);
  *(code ****)((long)pcVar74 + 0x528) = *(code ****)((long)pcVar74 + 0x198);
  *(code ****)((long)pcVar74 + 0x520) = *(code ****)((long)pcVar74 + 400);
  pppcVar82 = *(code ****)((long)pcVar74 + 0x1a8);
  pppcVar83 = *(code ****)((long)pcVar74 + 0x1a0);
  pppcVar110 = *(code ****)((long)pcVar74 + 0x1b8);
  pppcVar109 = *(code ****)((long)pcVar74 + 0x1b0);
  *(code ****)((long)pcVar74 + 0x538) = *(code ****)((long)pcVar74 + 0x1a8);
  *(code ****)((long)pcVar74 + 0x530) = *(code ****)((long)pcVar74 + 0x1a0);
  *(code ****)((long)pcVar74 + 0x548) = *(code ****)((long)pcVar74 + 0x1b8);
  *(code ****)((long)pcVar74 + 0x540) = *(code ****)((long)pcVar74 + 0x1b0);
  pppcVar108 = *(code ****)((long)pcVar74 + 0x148);
  pppcVar107 = *(code ****)((long)pcVar74 + 0x140);
  pppcVar114 = *(code ****)((long)pcVar74 + 0x158);
  pppcVar113 = *(code ****)((long)pcVar74 + 0x150);
  *(code ****)((long)pcVar74 + 0x4d8) = *(code ****)((long)pcVar74 + 0x148);
  *(code ****)((long)pcVar74 + 0x4d0) = *(code ****)((long)pcVar74 + 0x140);
  *(code ****)((long)pcVar74 + 0x4e8) = *(code ****)((long)pcVar74 + 0x158);
  *(code ****)((long)pcVar74 + 0x4e0) = *(code ****)((long)pcVar74 + 0x150);
  pppcVar112 = *(code ****)((long)pcVar74 + 0x168);
  pppcVar111 = *(code ****)((long)pcVar74 + 0x160);
  pppcVar118 = *(code ****)((long)pcVar74 + 0x178);
  pppcVar117 = *(code ****)((long)pcVar74 + 0x170);
  *(code ****)((long)pcVar74 + 0x4f8) = *(code ****)((long)pcVar74 + 0x168);
  *(code ****)((long)pcVar74 + 0x4f0) = *(code ****)((long)pcVar74 + 0x160);
  *(code ****)((long)pcVar74 + 0x508) = *(code ****)((long)pcVar74 + 0x178);
  *(code ****)((long)pcVar74 + 0x500) = *(code ****)((long)pcVar74 + 0x170);
  pppcVar116 = *(code ****)((long)pcVar74 + 0x108);
  pppcVar115 = *(code ****)((long)pcVar74 + 0x100);
  pppcVar122 = *(code ****)((long)pcVar74 + 0x118);
  pppcVar121 = *(code ****)((long)pcVar74 + 0x110);
  *(code ****)((long)pcVar74 + 0x498) = *(code ****)((long)pcVar74 + 0x108);
  *(code ****)((long)pcVar74 + 0x490) = *(code ****)((long)pcVar74 + 0x100);
  *(code ****)((long)pcVar74 + 0x4a8) = *(code ****)((long)pcVar74 + 0x118);
  *(code ****)((long)pcVar74 + 0x4a0) = *(code ****)((long)pcVar74 + 0x110);
  pppcVar120 = *(code ****)((long)pcVar74 + 0x128);
  pppcVar119 = *(code ****)((long)pcVar74 + 0x120);
  pppcVar124 = *(code ****)((long)pcVar74 + 0x138);
  pppcVar123 = *(code ****)((long)pcVar74 + 0x130);
  *(code ****)((long)pcVar74 + 0x4c8) = *(code ****)((long)pcVar74 + 0x138);
  *(code ****)((long)pcVar74 + 0x4c0) = *(code ****)((long)pcVar74 + 0x130);
  *(code ****)((long)pcVar74 + 0x4b8) = *(code ****)((long)pcVar74 + 0x128);
  *(code ****)((long)pcVar74 + 0x4b0) = *(code ****)((long)pcVar74 + 0x120);
  pcVar76 = (code *)((long)pppcVar77 + (long)iVar7);
  *(code ****)(pcVar76 + 0x88) = *(code ****)((long)pcVar74 + 0x188);
  *(code ****)(pcVar76 + 0x80) = pppcVar90;
  *(code ****)(pcVar76 + 0x98) = pppcVar106;
  *(code ****)(pcVar76 + 0x90) = pppcVar87;
  *(code ****)(pcVar76 + 0xa8) = pppcVar82;
  *(code ****)(pcVar76 + 0xa0) = pppcVar83;
  *(code ****)(pcVar76 + 0xb8) = pppcVar110;
  *(code ****)(pcVar76 + 0xb0) = pppcVar109;
  *(code ****)(pcVar76 + 0x48) = pppcVar108;
  *(code ****)(pcVar76 + 0x40) = pppcVar107;
  *(code ****)(pcVar76 + 0x58) = pppcVar114;
  *(code ****)(pcVar76 + 0x50) = pppcVar113;
  *(code ****)(pcVar76 + 0x68) = pppcVar112;
  *(code ****)(pcVar76 + 0x60) = pppcVar111;
  *(code ****)(pcVar76 + 0x78) = pppcVar118;
  *(code ****)(pcVar76 + 0x70) = pppcVar117;
  *(code ****)(pcVar76 + 8) = pppcVar116;
  *(code ****)pcVar76 = pppcVar115;
  *(code ****)(pcVar76 + 0x18) = pppcVar122;
  *(code ****)(pcVar76 + 0x10) = pppcVar121;
  *(code ****)(pcVar76 + 0x28) = pppcVar120;
  *(code ****)(pcVar76 + 0x20) = pppcVar119;
  *(code ****)(pcVar76 + 0x38) = pppcVar124;
  *(code ****)(pcVar76 + 0x30) = pppcVar123;
  FUN_1000087e4((code ****)((long)pcVar74 + 0x490),(code ****)((long)pcVar74 + 0x40),&DAT_1005514a8,
                &DAT_100423190);
  puVar67 = &DAT_100551480;
  FUN_10002a29c(pppcVar94,&DAT_100551480,&DAT_100423140);
  FUN_10002a29c((code ****)((long)pcVar74 + 0x100),&DAT_1005514a8,&DAT_100423190);
  FUN_10002a29c(pppcVar69,&DAT_100551480,&DAT_100423140);
  auVar150._8_8_ = puVar67;
  auVar150._0_8_ = pppcVar69;
  return auVar150;
switchD_1000a5400_caseD_ec:
  Foundation::UUID::init();
  *(String *)((long)param_10.unknown + (long)*(int *)((long)AVar92.unknown + 0x14)) = SVar132;
  *(String *)((long)param_10.unknown + (long)*(int *)((long)AVar92.unknown + 0x18)) = SVar131;
  pcVar76 = (code *)((long)param_10.unknown + (long)*(int *)((long)AVar92.unknown + 0x1c));
  ppppcVar81 = (code ****)0xd000000000000012;
  *(undefined8 *)pcVar76 = 0xd000000000000012;
  *(code **)(pcVar76 + 8) = pcVar74;
  size = (ushort *)((long)local_98 + (long)size * 6);
  stringLiteral_01.bridgeObject = (void *)0x80000001004dd340;
  stringLiteral_01.str = (char *)0xd000000000000012;
  LVar29 = LocalizationValue::_init(stringLiteral_01);
  Foundation::Locale::get_current((Locale)LVar29.unknown);
  table.unknown = (undefined *)0x0;
  DVar21.unknown = localized.unknown;
switchD_1000a5400_caseD_d8:
  SVar132 = (extension_Foundation)::Swift::String::_init((LocalizationValue)DVar21.unknown,table);
  stringLiteral_02.bridgeObject = (void *)0x80000001004dd360;
  stringLiteral_02.str = (char *)((long)ppppcVar81 + 0x4b);
  LVar29 = LocalizationValue::_init(stringLiteral_02);
  Foundation::Locale::get_current((Locale)LVar29.unknown);
  SVar131 = (extension_Foundation)::Swift::String::_init(localized,(Locale)0x0);
  pvVar57 = SVar131.bridgeObject;
  auVar133._0_8_ = Foundation::UUID::init();
  *(String *)((long)size + (long)*(int *)((long)AVar92.unknown + 0x14)) = SVar132;
  *(String *)((long)size + (long)*(int *)((long)AVar92.unknown + 0x18)) = SVar131;
  pcVar74 = (code *)((long)size + (long)*(int *)((long)AVar92.unknown + 0x1c));
  *(code *****)pcVar74 = ppppcVar81;
  *(undefined8 *)(pcVar74 + 8) = 0x80000001004dd3c0;
  *local_c0[1] = (code ***)local_b0;
  local_c0[1][1] = pppcVar69;
  local_c0[1][2] = (code ***)local_c0[0];
  local_c0[1][3] = local_c8;
  local_c0[1][4] = unaff_d8;
  local_c0[1][5] = local_d0;
  *(char *)(local_c0[1] + 6) = (char)((ulong)local_e0[1] >> 0x20);
  local_c0[1][7] = local_e0[0];
  local_c0[1][8] = (code ***)local_108[4];
  local_c0[1][9] = (code ***)local_108[3];
  local_c0[1][10] = (code ***)local_108[2];
  local_c0[1][0xb] = (code ***)local_108[1];
  auVar133._8_8_ = pvVar57;
  return auVar133;
switchD_1000a5400_caseD_60:
  _swift_initStructMetadata(pcVar74,0x100,1);
  lVar20 = 0;
  uVar64 = 0;
LAB_1000c5048:
  auVar145._8_8_ = uVar64;
  auVar145._0_8_ = lVar20;
  return auVar145;
switchD_1000a5400_caseD_21:
  local_130[1] = (code ****)((long)ppppcVar72 - (long)ppppcVar73);
  (*(code *)PTR____chkstk_darwin_100521118)();
  pppcVar69 = (code ***)(((long)ppppcVar72 - (long)ppppcVar73) - extraout_x12_01);
  local_c8 = pppcVar69;
  (*(code *)PTR____chkstk_darwin_100521118)();
  ppppcVar66 = (code ****)((long)pppcVar69 - extraout_x12_02);
  puVar67 = &DAT_10054a9d0;
  FUN_100002f94(&DAT_10054a9d0,&DAT_10041bc60);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar67 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar74 = (code *)((long)ppppcVar66 - extraout_x8_34);
  puVar67 = &DAT_100550ec0;
  puVar62 = &DAT_100422eb0;
  local_90 = pcVar74;
  FUN_100002f94(&DAT_100550ec0,&DAT_100422eb0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar67 + -8) + 0x40));
  ppppcVar19 = (code ****)(pcVar74 + -(extraout_x8_35 + 0xfU & 0xfffffffffffffff0));
  local_108[0] = ppppcVar19;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar79 = (long)ppppcVar19 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_c0[0] = (code ****)(lVar79 - extraout_x12_04);
  CVar30 = Foundation::Calendar::typeMetadataAccessor();
  lVar20 = *(long *)(CVar30.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar20 + 0x40));
  lVar84 = (lVar79 - extraout_x12_04) - (extraout_x8_36 + 0xfU & 0xfffffffffffffff0);
  DVar25 = Foundation::Date::typeMetadataAccessor();
  lVar24 = *(long *)(DVar25.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar24 + 0x40));
  pppcVar69 = (code ***)(lVar84 - (extraout_x8_37 + 0xfU & 0xfffffffffffffff0));
  puVar67 = (undefined *)0x0;
  FUN_10025ee04();
  local_b0 = (code ****)size;
  if (*(code *)((long)size + (long)*(int *)(puVar67 + 0x1c)) == (code)0x0) {
    FUN_10025f200();
  }
  else {
    local_108[1] = ppppcVar66;
    DVar31 = Foundation::Date::init();
    Foundation::Calendar::get_current((Calendar)DVar31.unknown);
    pppcVar77 = pppcVar69;
    FUN_1001d6f78(pppcVar69,lVar84);
    pcVar76 = *(code **)(lVar20 + 8);
    local_e0[1] = pppcVar77;
    (*pcVar76)(lVar84,CVar30.unknown);
    pcVar96 = *(code **)(lVar24 + 8);
    (*pcVar96)(pppcVar69,DVar25.unknown);
    DVar31 = Foundation::Date::init();
    Foundation::Calendar::get_current((Calendar)DVar31.unknown);
    pcVar74 = local_90;
    FUN_1001d62f0(local_90,pppcVar69,lVar84);
    (*pcVar76)(lVar84,CVar30.unknown);
    (*pcVar96)(pppcVar69,DVar25.unknown);
    ppppcVar19 = local_130[2];
    pcVar76 = pcVar74;
    (*(code *)local_c0[1][6])(pcVar74,1,local_130[2]);
    ppppcVar66 = local_c0[0];
    bVar17 = (int)pcVar76 != 1;
    if (bVar17) {
      FUN_100029504(pcVar74,local_c0[0],FUN_1001d537c);
      FUN_100029548(pcVar74,FUN_1001d59ac);
    }
    else {
      FUN_10002a29c(pcVar74,&DAT_10054a9d0,&DAT_10041bc60);
      ppppcVar66 = local_c0[0];
    }
    ppppcVar80 = local_88;
    local_108[4] = (code ****)local_d0[7];
    (*(code *)local_108[4])(ppppcVar66,!bVar17,1,local_88);
    local_88 = (code ****)local_e0[1][2];
    if (local_88 == (code ****)0x0) {
      _swift_bridgeObjectRelease(local_e0[1]);
      ppppcVar66 = (code ****)PTR___swiftEmptyArrayStorage_100524190;
    }
    else {
      pppcVar69 = (code ***)0x0;
      local_a0 = (code *)((ulong)*(byte *)(local_c0[1] + 10) + 0x20 &
                         ((ulong)*(byte *)(local_c0[1] + 10) ^ 0xffffffffffffffff));
      local_90 = (code *)((long)local_e0[1] + (long)local_a0);
      ppppcVar19 = local_108[1];
      pppcVar77 = local_e0[1];
      do {
        if (pppcVar77[2] <= pppcVar69) {
                    /* WARNING: Does not return */
          pcVar74 = (code *)SoftwareBreakpoint(1,0x1000c035c);
          (*pcVar74)();
        }
        local_98 = (code ****)local_c0[1][9];
        FUN_100029504(local_90 + (long)local_98 * (long)pppcVar69,ppppcVar19,FUN_1001d59ac);
        FUN_100029504(ppppcVar19,lVar79,FUN_1001d537c);
        (*(code *)local_108[4])(lVar79,0,1,ppppcVar80);
        lVar20 = (long)*(int *)(local_e0[0] + 6);
        FUN_1000087e4(lVar79,param_10.unknown,&DAT_100550ec0,&DAT_100422eb0);
        FUN_1000087e4(local_c0[0],(code *)((long)param_10.unknown + lVar20),&DAT_100550ec0,
                      &DAT_100422eb0);
        ppcVar68 = local_d0[6];
        ppppcVar45 = (code ****)param_10.unknown;
        (*(code *)ppcVar68)(param_10.unknown,1,ppppcVar80);
        ppppcVar66 = local_108[0];
        if ((int)ppppcVar45 == 1) {
          FUN_10002a29c(lVar79,&DAT_100550ec0,&DAT_100422eb0);
          FUN_100029548(ppppcVar19,FUN_1001d59ac);
          pcVar74 = (code *)((long)param_10.unknown + lVar20);
          (*(code *)ppcVar68)(pcVar74,1,ppppcVar80);
          ppppcVar45 = local_98;
          pppcVar77 = local_e0[1];
          if ((int)pcVar74 == 1) {
            FUN_10002a29c(param_10.unknown,&DAT_100550ec0,&DAT_100422eb0);
            goto LAB_1000bff34;
          }
LAB_1000bfd18:
          ppppcVar45 = local_98;
          pppcVar77 = local_e0[1];
          FUN_10002a29c(param_10.unknown,&DAT_100550eb8,&DAT_100422a48);
        }
        else {
          FUN_1000087e4(param_10.unknown,local_108[0],&DAT_100550ec0,&DAT_100422eb0);
          pcVar74 = (code *)((long)param_10.unknown + lVar20);
          (*(code *)ppcVar68)(pcVar74,1,ppppcVar80);
          ppppcVar19 = local_118;
          if ((int)pcVar74 == 1) {
            FUN_10002a29c(lVar79,&DAT_100550ec0,&DAT_100422eb0);
            ppppcVar19 = local_108[1];
            FUN_100029548(local_108[1],FUN_1001d59ac);
            FUN_100029548(ppppcVar66,FUN_1001d537c);
            goto LAB_1000bfd18;
          }
          FUN_100007e64((code *)((long)param_10.unknown + lVar20),local_118,FUN_1001d537c);
          ppppcVar85 = ppppcVar66;
          FUN_1001da410(ppppcVar66,ppppcVar19);
          FUN_100029548(ppppcVar19,FUN_1001d537c);
          FUN_10002a29c(lVar79,&DAT_100550ec0,&DAT_100422eb0);
          ppppcVar19 = local_108[1];
          FUN_100029548(local_108[1],FUN_1001d59ac);
          FUN_100029548(ppppcVar66,FUN_1001d537c);
          FUN_10002a29c(param_10.unknown,&DAT_100550ec0,&DAT_100422eb0);
          ppppcVar45 = local_98;
          pppcVar77 = local_e0[1];
          if (((ulong)ppppcVar85 & 1) != 0) goto LAB_1000bff34;
        }
        pppcVar69 = (code ***)((long)pppcVar69 + 1);
      } while (local_88 != (code ****)pppcVar69);
      pppcVar69 = (code ***)0x0;
LAB_1000bff34:
      local_80[0] = (code ****)PTR___swiftEmptyArrayStorage_100524190;
      FUN_1001c5cf8(0,local_88,0);
      ppppcVar19 = local_130[1];
      ppcVar68 = pppcVar77[2];
      if (ppcVar68 == (code **)0x0) {
                    /* WARNING: Does not return */
        pcVar74 = (code *)SoftwareBreakpoint(1,0x1000c0360);
        (*pcVar74)();
      }
      pppcVar94 = (code ***)0x0;
      ppppcVar66 = local_80[0];
      do {
        if (SCARRY8((long)pppcVar69,(long)pppcVar94)) {
                    /* WARNING: Does not return */
          pcVar74 = (code *)SoftwareBreakpoint(1,0x1000c0350);
          (*pcVar74)();
        }
        lVar20 = 0;
        if (ppcVar68 != (code **)0x0) {
          lVar20 = ((long)pppcVar69 + (long)pppcVar94) / (long)ppcVar68;
        }
        ppcVar89 = (code **)((code *)((long)pppcVar69 + (long)pppcVar94) +
                            -(lVar20 * (long)ppcVar68));
        if ((long)ppcVar89 < 0) {
                    /* WARNING: Does not return */
          pcVar74 = (code *)SoftwareBreakpoint(1,0x1000c0354);
          (*pcVar74)();
        }
        if (pppcVar77[2] <= ppcVar89) {
                    /* WARNING: Does not return */
          pcVar74 = (code *)SoftwareBreakpoint(1,0x1000c0358);
          (*pcVar74)();
        }
        FUN_100029504(local_90 + (long)ppcVar89 * (long)ppppcVar45,ppppcVar19,FUN_1001d59ac);
        ppcVar89 = (code **)ppppcVar66[2];
        local_80[0] = ppppcVar66;
        if ((code **)((ulong)ppppcVar66[3] >> 1) <= ppcVar89) {
          FUN_1001c5cf8((code **)0x1 < ppppcVar66[3],(code **)((long)ppcVar89 + 1U),1);
        }
        ppppcVar66 = local_80[0];
        pppcVar94 = (code ***)((long)pppcVar94 + 1);
        local_80[0][2] = (code ***)((long)ppcVar89 + 1U);
        FUN_100007e64(ppppcVar19,
                      (code *)((long)local_80[0] + (long)local_a0) +
                      (long)ppcVar89 * (long)ppppcVar45,FUN_1001d59ac);
      } while (local_88 != (code ****)pppcVar94);
      _swift_bridgeObjectRelease(pppcVar77);
      ppppcVar19 = local_130[2];
    }
    ppcVar68 = (code **)ppppcVar66[2];
    puVar67 = PTR___swiftEmptyArrayStorage_100524190;
    if (ppcVar68 != (code **)0x0) {
      local_88 = (code ****)(long)*(int *)((long)ppppcVar19 + 0x24);
      puVar62 = (undefined *)
                ((long)ppppcVar66 +
                ((ulong)*(byte *)(local_c0[1] + 10) + 0x20 &
                ((ulong)*(byte *)(local_c0[1] + 10) ^ 0xffffffffffffffff)));
      pppcVar77 = local_c0[1][9];
      pppcVar69 = local_c8;
      do {
        FUN_100029504(puVar62,pppcVar69,FUN_1001d59ac);
        lVar20 = *(long *)((long)local_88 + (long)pppcVar69);
        if (*(long *)(lVar20 + 0x10) == 0) {
          FUN_100029548(pppcVar69,FUN_1001d59ac);
        }
        else {
          uVar64 = *(undefined8 *)(lVar20 + 0x20);
          uVar78 = *(undefined8 *)(lVar20 + 0x28);
          _swift_bridgeObjectRetain(uVar78);
          FUN_100029548(pppcVar69,FUN_1001d59ac);
          puVar32 = puVar67;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar34 = puVar67;
          if (((ulong)puVar32 & 1) == 0) {
            puVar34 = (undefined *)0x0;
            FUN_1001c432c(0,*(long *)(puVar67 + 0x10) + 1,1,puVar67);
          }
          uVar95 = *(ulong *)(puVar34 + 0x10);
          puVar67 = puVar34;
          if (*(ulong *)(puVar34 + 0x18) >> 1 <= uVar95) {
            puVar67 = (undefined *)(ulong)(1 < *(ulong *)(puVar34 + 0x18));
            FUN_1001c432c(puVar67,uVar95 + 1,1,puVar34);
          }
          *(ulong *)(puVar67 + 0x10) = uVar95 + 1;
          *(undefined8 *)(puVar67 + uVar95 * 0x10 + 0x20) = uVar64;
          *(undefined8 *)(puVar67 + uVar95 * 0x10 + 0x28) = uVar78;
          pppcVar69 = local_c8;
        }
        puVar62 = puVar62 + (long)pppcVar77;
        ppcVar68 = (code **)((long)ppcVar68 + -1);
      } while (ppcVar68 != (code **)0x0);
    }
    _swift_bridgeObjectRelease(ppppcVar66);
    puVar62 = &DAT_100550ec0;
    FUN_10002a29c(local_c0[0],&DAT_100550ec0,&DAT_100422eb0);
  }
  ppppcVar19 = local_110;
  puVar32 = PTR___swiftEmptySetSingleton_1005241a0;
  uVar95 = *(ulong *)(puVar67 + 0x10);
  puVar34 = PTR___swiftEmptyArrayStorage_100524190;
  if (uVar95 != 0) {
    uVar88 = 0;
    puVar86 = (undefined8 *)(puVar67 + 0x28);
    do {
      if (*(ulong *)(puVar67 + 0x10) <= uVar88) {
                    /* WARNING: Does not return */
        pcVar74 = (code *)SoftwareBreakpoint(1,0x1000c034c);
        (*pcVar74)();
      }
      puVar33 = (undefined *)puVar86[-1];
      puVar3 = (undefined *)*puVar86;
      _swift_bridgeObjectRetain_n(puVar3,2);
      ppppcVar66 = (code ****)local_80;
      puVar62 = puVar33;
      FUN_1001ca054(ppppcVar66,puVar33,puVar3);
      _swift_bridgeObjectRelease(local_80[1]);
      if (((ulong)ppppcVar66 & 1) == 0) {
LAB_1000c0180:
        _swift_bridgeObjectRelease(puVar3);
      }
      else {
        lVar20 = 0;
        FUN_1000c61a0();
        lVar20 = *(long *)((long)local_b0 + (long)*(int *)(lVar20 + 0x14));
        if (*(long *)(lVar20 + 0x10) == 0) goto LAB_1000c0180;
        _swift_bridgeObjectRetain(lVar20);
        puVar62 = puVar3;
        FUN_10000464c(puVar33);
        if (((ulong)puVar62 & 1) == 0) {
          _swift_bridgeObjectRelease(lVar20);
          goto LAB_1000c0180;
        }
        pppcVar69 = local_108[3][9];
        FUN_100029504(*(long *)(lVar20 + 0x38) + (long)pppcVar69 * (long)puVar33,ppppcVar19,
                      FUN_10040211c);
        _swift_bridgeObjectRelease(lVar20);
        _swift_bridgeObjectRelease(puVar3);
        FUN_100007e64(ppppcVar19,local_108[2],FUN_10040211c);
        puVar62 = puVar34;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar33 = puVar34;
        if (((ulong)puVar62 & 1) == 0) {
          puVar33 = (undefined *)0x0;
          FUN_1001c4344(0,*(long *)(puVar34 + 0x10) + 1,1,puVar34);
        }
        uVar2 = *(ulong *)(puVar33 + 0x10);
        puVar34 = puVar33;
        if (*(ulong *)(puVar33 + 0x18) >> 1 <= uVar2) {
          puVar34 = (undefined *)(ulong)(1 < *(ulong *)(puVar33 + 0x18));
          FUN_1001c4344(puVar34,uVar2 + 1,1,puVar33);
        }
        *(ulong *)(puVar34 + 0x10) = uVar2 + 1;
        puVar62 = puVar34 + uVar2 * (long)pppcVar69 +
                            ((ulong)*(byte *)(local_108[3] + 10) + 0x20 &
                            ((ulong)*(byte *)(local_108[3] + 10) ^ 0xffffffffffffffff));
        FUN_100007e64(local_108[2],puVar62,FUN_10040211c);
      }
      uVar88 = uVar88 + 1;
      puVar86 = puVar86 + 2;
    } while (uVar95 != uVar88);
  }
  _swift_bridgeObjectRelease(puVar67);
  puVar67 = puVar34;
  if (3 < *(ulong *)(puVar34 + 0x10)) {
    puVar62 = puVar34 + ((ulong)*(byte *)(local_108[3] + 10) + 0x20 &
                        ((ulong)*(byte *)(local_108[3] + 10) ^ 0xffffffffffffffff));
    FUN_10031b430(puVar34,puVar62,0,7);
    _swift_bridgeObjectRelease(puVar34);
  }
  _swift_bridgeObjectRelease(puVar32);
  auVar137._8_8_ = puVar62;
  auVar137._0_8_ = puVar67;
  return auVar137;
switchD_1000a5400_caseD_24:
  FUN_1000087e4(local_108 + 4,local_130,DVar58.unknown,&DAT_100422758);
  FUN_10002a29c(&stack0xffffffffffffff58,DVar58.unknown,&DAT_100422758);
  local_130[1] = (code ****)local_e0[0];
  local_130[0] = local_108[4];
  local_118 = (code ****)local_d0;
  local_130[2] = (code ****)local_e0[1];
  local_108[0] = local_c0[0];
  local_110 = (code ****)local_c8;
  local_108[2] = local_b0;
  local_108[1] = local_c0[1];
  puVar62 = DVar58.unknown;
  FUN_100002f94(DVar58.unknown,&DAT_100422758);
  puVar67 = &DAT_100550b88;
  FUN_1000087a0(&DAT_100550b88,DVar58.unknown,&DAT_100422758,
                PTR_SwiftUI__SwiftUI__ZStack<undefined>_>SwiftUI__View_1005234e0);
  AVar53 = SwiftUI::AnyView::_init(puVar67,puVar62,puVar67);
  FUN_10002a29c(AVar92.unknown,size,param_10.unknown);
  *(undefined **)((long)ppppcVar81 + (long)*(int *)((long)pcVar74 + 0x20)) = AVar53.unknown;
  AVar54.unknown = (undefined *)*ppppcVar66;
  SwiftUI::Alignment::get_center((Alignment)AVar92.unknown);
  SwiftUI::_FrameLayout::_init(AVar54);
  ppppcVar80 = local_118;
  ppppcVar66 = local_130[2];
  ppppcVar19 = local_130[0];
  pcVar74 = (code *)((long)ppppcVar81 + (long)*(int *)((long)local_140 + 0x24));
  *(code *****)(pcVar74 + 8) = local_130[1];
  *(code *****)pcVar74 = ppppcVar19;
  *(code *****)(pcVar74 + 0x18) = ppppcVar80;
  *(code *****)(pcVar74 + 0x10) = ppppcVar66;
  ppppcVar19 = local_110;
  *(code *****)(pcVar74 + 0x28) = local_108[0];
  *(code *****)(pcVar74 + 0x20) = ppppcVar19;
  pppcVar69 = local_148;
  FUN_1000087e4(ppppcVar81,local_148,&DAT_10054bd38,&DAT_100422740);
  _swift_storeEnumTagMultiPayload(pppcVar69,local_150,0);
  FUN_1000c418c();
  (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)pppcVar69);
  FUN_10002a29c(ppppcVar81,&DAT_10054bd38,&DAT_100422740);
  pcVar74 = FUN_10040211c;
  FUN_100029548(local_1a8[6],FUN_10040211c);
  auVar139._8_8_ = pcVar74;
  auVar139._0_8_ = local_1a8[6];
  return auVar139;
switchD_1000a5400_caseD_88:
  *(code *****)((long)pcVar74 + (long)pcVar71) = ppppcVar72;
  _swift_bridgeObjectRelease();
  *(code *)((long)pcVar74 + (long)*(int *)((long)param_10.unknown + 0x48)) =
       *(code *)((long)size + (long)*(int *)((long)param_10.unknown + 0x48));
  auVar144._8_8_ = table.unknown;
  auVar144._0_8_ = pcVar74;
  return auVar144;
switchD_1000a5400_caseD_b6:
  ppppcVar23 = (code ****)localized.unknown;
  _swift_storeEnumTagMultiPayload();
  FUN_1000b1174();
  FUN_1000b1544();
  (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)ppppcVar66);
  FUN_10002a29c(ppppcVar23,pcVar74,size);
LAB_1000a6d48:
  auVar125._8_8_ = pcVar74;
  auVar125._0_8_ = ppppcVar23;
  return auVar125;
}

