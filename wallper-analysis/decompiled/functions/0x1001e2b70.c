// rea decompile_all
// name: FUN_1001e2b70
// address: 0x1001e2b70
// body: available
// range: 0x1001e2b70-0x1001e38db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001e38a0 to 0x100413634 /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::__C::NSURLSession::$data (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

tuple2_conflict1 FUN_1001e2b70(void)

{
  String SVar1;
  bool bVar2;
  uint uVar3;
  DispatchQoS DVar4;
  Logger LVar5;
  OS_os_log *pOVar6;
  undefined *puVar7;
  undefined *puVar8;
  void *pvVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  OS_os_log *pOVar12;
  undefined4 *puVar13;
  char *pcVar14;
  ID IVar15;
  long *plVar16;
  _StringGuts _Var17;
  NSURLResponse *UNRECOVERED_JUMPTABLE;
  char *pcVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  code *pcVar24;
  code *pcVar25;
  ulong uVar26;
  long lVar27;
  undefined *puVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  URL url;
  undefined8 uVar31;
  undefined8 uVar32;
  long unaff_x22;
  undefined8 uVar33;
  URLRequest *this;
  code *pcVar34;
  long lVar35;
  DispatchWorkItemFlags DVar36;
  long lVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  String SVar40;
  String SVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  String SVar45;
  String SVar46;
  String SVar47;
  String SVar48;
  tuple2_conflict1 tVar49;
  String SVar50;
  String SVar51;
  String SVar52;
  String SVar53;
  String SVar54;
  String SVar55;
  String SVar56;
  String SVar57;
  String SVar58;
  String SVar59;
  String SVar60;
  String SVar61;
  String SVar62;
  String SVar63;
  String SVar64;
  String SVar65;
  undefined *local_88;
  char *local_68;
  undefined *local_60;
  
  pcVar34 = *(code **)(unaff_x22 + 0x298);
  puVar28 = *(undefined **)(unaff_x22 + 0x210);
  uVar29 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar31 = *(undefined8 *)(unaff_x22 + 0x200);
  lVar27 = *(long *)(unaff_x22 + 0x170);
  lVar35 = *(long *)(unaff_x22 + 0x178);
  puVar7 = puVar28;
  (**(code **)(*(long *)(unaff_x22 + 0x218) + 0x38))(uVar29,1,1);
  lVar37 = (long)*(int *)(lVar27 + 0x30);
  FUN_100077938(uVar31,lVar35);
  FUN_100077938(uVar29,lVar35 + lVar37);
  lVar27 = lVar35;
  (*pcVar34)(lVar35,1,puVar28);
  pcVar34 = *(code **)(unaff_x22 + 0x298);
  uVar29 = *(undefined8 *)(unaff_x22 + 0x210);
  if ((int)lVar27 == 1) {
    uVar31 = *(undefined8 *)(unaff_x22 + 0x200);
    FUN_10002a29c(*(undefined8 *)(unaff_x22 + 0x1f8),&DAT_100553d90,&DAT_10041bf10);
    FUN_10002a29c(uVar31,&DAT_100553d90,&DAT_10041bf10);
    lVar35 = lVar35 + lVar37;
    (*pcVar34)(lVar35,1,uVar29);
    if ((int)lVar35 == 1) {
      pcVar18 = &DAT_10041bf10;
      FUN_10002a29c(*(undefined8 *)(unaff_x22 + 0x178),&DAT_100553d90);
LAB_1001e3190:
      uVar31 = *(undefined8 *)(unaff_x22 + 0x228);
      lVar35 = *(long *)(unaff_x22 + 0x218);
      uVar29 = *(undefined8 *)(unaff_x22 + 0x210);
      (**(code **)(*(long *)(unaff_x22 + 0x1e0) + 8))
                (*(undefined8 *)(unaff_x22 + 0x1e8),*(undefined8 *)(unaff_x22 + 0x1d8));
      (**(code **)(lVar35 + 8))(uVar31,uVar29);
      do {
        uVar26 = *(long *)(unaff_x22 + 0x280) + 1;
        lVar35 = *(long *)(unaff_x22 + 0x270);
        if (uVar26 == *(ulong *)(unaff_x22 + 0x278)) {
          uVar29 = *(undefined8 *)(unaff_x22 + 0x268);
          _Var17.unknown = (undefined *)0x2;
          _swift_bridgeObjectRelease_n(lVar35);
          _swift_bridgeObjectRelease(uVar29);
          uVar26 = *(ulong *)(unaff_x22 + 600);
          lVar27 = uVar26 * 0x18;
          do {
            uVar26 = uVar26 + 1;
            if (*(ulong *)(unaff_x22 + 0x250) == uVar26) {
              _swift_release(*(undefined8 *)(unaff_x22 + 0x230));
              pcVar14 = ((String *)(unaff_x22 + 0x158))->str;
              SVar45 = *(String *)(unaff_x22 + 0x158);
              local_68 = (char *)0x0;
              local_60 = (undefined *)0xe000000000000000;
              Swift::_StringGuts::grow(0x2c,_Var17);
              _swift_bridgeObjectRelease(local_60);
              local_68 = (char *)0xd00000000000002a;
              local_60 = (void *)0x80000001004e0f90;
              SVar60.bridgeObject = puVar7;
              SVar60.str = pcVar18;
              Swift::String::append(SVar45,SVar60);
              puVar7 = local_60;
              SVar1.bridgeObject = local_60;
              SVar1.str = local_68;
              local_68 = (char *)0x5b;
              local_60 = (undefined *)0xe100000000000000;
              *(undefined8 *)(unaff_x22 + 0xb0) = 0x4f464e49;
              *(undefined8 *)(unaff_x22 + 0xb8) = 0xe400000000000000;
              *(undefined8 *)(unaff_x22 + 0xc0) = 0x20;
              *(undefined8 *)(unaff_x22 + 200) = 0xe100000000000000;
              FUN_100026df4();
              pcVar18 = (char *)0x0;
              puVar28 = PTR___type_metadata_for_Swift_String_100523a98;
              SVar45 = (extension_Foundation)::Swift::StringProtocol::_padding
                                 (6,unaff_x22 + 0xc0,0,
                                  PTR___type_metadata_for_Swift_String_100523a98,
                                  PTR___type_metadata_for_Swift_String_100523a98,pcVar14,pcVar14);
              SVar61.bridgeObject = puVar28;
              SVar61.str = pcVar18;
              Swift::String::append(SVar45,SVar61);
              _swift_bridgeObjectRelease(SVar45.bridgeObject);
              SVar46.bridgeObject = (void *)0xe300000000000000;
              SVar46.str = (char *)0x5b205d;
              SVar62.bridgeObject = puVar28;
              SVar62.str = pcVar18;
              Swift::String::append(SVar46,SVar62);
              SVar47.bridgeObject = (void *)0xe300000000000000;
              SVar47.str = (char *)0x707061;
              SVar63.bridgeObject = puVar28;
              SVar63.str = pcVar18;
              Swift::String::append(SVar47,SVar63);
              SVar48.bridgeObject = (void *)0xe200000000000000;
              SVar48.str = (char *)0x205d;
              SVar64.bridgeObject = puVar28;
              SVar64.str = pcVar18;
              Swift::String::append(SVar48,SVar64);
              SVar65.bridgeObject = puVar28;
              SVar65.str = pcVar18;
              Swift::String::append(SVar1,SVar65);
              puVar28 = local_60;
              pcVar18 = local_68;
              if (DAT_100559018 != -1) {
                _swift_once(&DAT_100559018,FUN_1002854a0);
              }
              lVar35 = *(long *)(unaff_x22 + 0x1c8);
              DVar36.unknown = *(undefined **)(unaff_x22 + 0x1d0);
              uVar29 = *(undefined8 *)(unaff_x22 + 0x1b8);
              uVar33 = *(undefined8 *)(unaff_x22 + 0x1c0);
              uVar31 = *(undefined8 *)(unaff_x22 + 0x1a8);
              lVar27 = *(long *)(unaff_x22 + 0x1b0);
              puVar8 = &DAT_100532018;
              _swift_allocObject(&DAT_100532018,0x30,7);
              *(char **)(puVar8 + 0x10) = pcVar18;
              *(undefined **)(puVar8 + 0x18) = puVar28;
              *(undefined8 *)(puVar8 + 0x20) = 0;
              *(undefined8 *)(puVar8 + 0x28) = 0xe000000000000000;
              *(code **)(unaff_x22 + 0x30) = thunk_FUN_100099310;
              *(undefined **)(unaff_x22 + 0x38) = puVar8;
              *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_100521110;
              *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
              *(code **)(unaff_x22 + 0x20) = FUN_1000c7e7c;
              *(undefined **)(unaff_x22 + 0x28) = &DAT_100532030;
              pvVar9 = __Block_copy((void *)(unaff_x22 + 0x10));
              DVar4.unknown = puVar28;
              _swift_bridgeObjectRetain();
              Dispatch::DispatchQoS::get_unspecified(DVar4);
              *(undefined **)(unaff_x22 + 0x140) = PTR___swiftEmptyArrayStorage_100524190;
              puVar10 = &DAT_100553db0;
              FUN_100047f94(&DAT_100553db0,0xff,PTR_typeMetadataAccessor_1005244a8,
                            PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8
                           );
              puVar8 = &DAT_100561080;
              FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
              puVar11 = &DAT_100553dc0;
              FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                            PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
              Swift::SetAlgebra::_init(uVar29,unaff_x22 + 0x140,puVar8,puVar11,uVar31,puVar10);
              (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar36);
              __Block_release(pvVar9);
              (**(code **)(lVar27 + 8))(uVar29,uVar31);
              (**(code **)(lVar35 + 8))(DVar36.unknown,uVar33);
              _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
              if (DAT_100559020 != -1) {
                _swift_once(&DAT_100559020,FUN_100285420);
              }
              lVar35 = *(long *)(unaff_x22 + 0x188);
              uVar29 = *(undefined8 *)(unaff_x22 + 400);
              uVar33 = *(undefined8 *)(unaff_x22 + 0x180);
              uVar31 = uVar33;
              FUN_100099338(uVar33,&DAT_100558f50);
              (**(code **)(lVar35 + 0x10))(uVar29,uVar31,uVar33);
              uVar3 = (uint)uVar29;
              static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info
                        ();
              LVar5.unknown = puVar28;
              _swift_bridgeObjectRetain();
              pOVar12 = os::Logger::get_logObject(LVar5);
              pOVar6 = pOVar12;
              _os_log_type_enabled(pOVar12,uVar3 & 0xff);
              lVar35 = *(long *)(unaff_x22 + 0x188);
              uVar29 = *(undefined8 *)(unaff_x22 + 400);
              uVar31 = *(undefined8 *)(unaff_x22 + 0x180);
              if ((int)pOVar6 == 0) {
                _swift_bridgeObjectRelease_n(puVar28,2);
              }
              else {
                puVar13 = (undefined4 *)0xc;
                _swift_slowAlloc(0xc,0xffffffffffffffff);
                pcVar14 = (char *)0x20;
                _swift_slowAlloc(0x20,0xffffffffffffffff);
                *puVar13 = 0x8220102;
                local_68 = pcVar14;
                FUN_10012dbb0(pcVar18,puVar28,&local_68);
                *(char **)(puVar13 + 1) = pcVar18;
                _swift_bridgeObjectRelease_n(puVar28,2);
                __os_log_impl(0x100000000,pOVar12,uVar3 & 0xff,"%{public}s",puVar13,0xc);
                FUN_100043f24(pcVar14);
                _swift_slowDealloc(pcVar14,0xffffffffffffffff,0xffffffffffffffff);
                _swift_slowDealloc(puVar13,0xffffffffffffffff,0xffffffffffffffff);
              }
              (**(code **)(lVar35 + 8))(uVar29,uVar31);
              _swift_bridgeObjectRelease(puVar7);
              local_88 = (undefined *)0x0;
              goto LAB_1001e370c;
            }
            *(ulong *)(unaff_x22 + 600) = uVar26;
            if (*(ulong *)(*(long *)(unaff_x22 + 0x248) + 0x10) <= uVar26) {
                    /* WARNING: Does not return */
              pcVar34 = (code *)SoftwareBreakpoint(1,0x1001e38a8);
              (*pcVar34)();
            }
            lVar35 = *(long *)(unaff_x22 + 0x248) + lVar27;
            *(undefined8 *)(unaff_x22 + 0x260) = *(undefined8 *)(lVar35 + 0x38);
            uVar29 = *(undefined8 *)(lVar35 + 0x40);
            *(undefined8 *)(unaff_x22 + 0x268) = uVar29;
            lVar35 = *(long *)(lVar35 + 0x48);
            *(long *)(unaff_x22 + 0x270) = lVar35;
            lVar37 = *(long *)(lVar35 + 0x10);
            *(long *)(unaff_x22 + 0x278) = lVar37;
            lVar27 = lVar27 + 0x18;
          } while (lVar37 == 0);
          _swift_bridgeObjectRetain_n(lVar35,2);
          _swift_bridgeObjectRetain(uVar29);
          uVar26 = 0;
        }
        *(ulong *)(unaff_x22 + 0x280) = uVar26;
        if (*(ulong *)(lVar35 + 0x10) <= uVar26) {
                    /* WARNING: Does not return */
          pcVar34 = (code *)SoftwareBreakpoint(1,0x1001e38ac);
          (*pcVar34)();
        }
        lVar27 = *(long *)(unaff_x22 + 0x218);
        uVar33 = *(undefined8 *)(unaff_x22 + 0x210);
        uVar31 = *(undefined8 *)(unaff_x22 + 0x208);
        SVar45 = *(String *)(unaff_x22 + 0x158);
        lVar35 = lVar35 + uVar26 * 0x10;
        uVar29 = *(undefined8 *)(lVar35 + 0x28);
        SVar40 = *(String *)(lVar35 + 0x20);
        *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x260);
        *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0x268);
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar29);
        SVar57.bridgeObject = puVar7;
        SVar57.str = pcVar18;
        Swift::String::append(SVar45,SVar57);
        SVar44.bridgeObject = (void *)0xe100000000000000;
        SVar44.str = (char *)0x2e;
        SVar58.bridgeObject = puVar7;
        SVar58.str = pcVar18;
        Swift::String::append(SVar44,SVar58);
        SVar59.bridgeObject = puVar7;
        SVar59.str = pcVar18;
        Swift::String::append(SVar40,SVar59);
        _swift_bridgeObjectRelease(uVar29);
        uVar29 = *(undefined8 *)(unaff_x22 + 0xa8);
        *(undefined8 *)(unaff_x22 + 0x288) = *(undefined8 *)(unaff_x22 + 0xa0);
        *(undefined8 *)(unaff_x22 + 0x290) = uVar29;
        Foundation::URL::_init();
        pcVar34 = *(code **)(lVar27 + 0x30);
        *(code **)(unaff_x22 + 0x298) = pcVar34;
        (*pcVar34)(uVar31,1,uVar33);
        if ((int)uVar31 != 1) {
          uVar29 = *(undefined8 *)(unaff_x22 + 0x228);
          url.unknown = *(undefined **)(unaff_x22 + 0x220);
          lVar35 = *(long *)(unaff_x22 + 0x218);
          uVar31 = *(undefined8 *)(unaff_x22 + 0x210);
          this = *(URLRequest **)(unaff_x22 + 0x1e8);
          pcVar34 = *(code **)(lVar35 + 0x20);
          *(code **)(unaff_x22 + 0x2a0) = pcVar34;
          (*pcVar34)(uVar29,*(undefined8 *)(unaff_x22 + 0x208),uVar31);
          (**(code **)(lVar35 + 0x10))(url.unknown,uVar29,uVar31);
          Foundation::URLRequest::init(url,(NSURLRequestCachePolicy)0x0,60.0);
          Foundation::URLRequest::_set_httpMethod(this);
          IVar15 = NSURLSession::sharedSession((ID)&_OBJC_CLASS___NSURLSession);
          *(ID *)(unaff_x22 + 0x2a8) = IVar15;
          plVar16 = (long *)(ulong)*(uint *)(PTR__data_100520e90 + 4);
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0x2b0) = plVar16;
          *plVar16 = unaff_x22;
          plVar16[1] = (long)FUN_1001e1e38;
          tVar49 = (extension_Foundation)::__C::NSURLSession::_data
                             ((URLRequest)*(undefined **)(unaff_x22 + 0x1e8));
          return tVar49;
        }
        uVar31 = *(undefined8 *)(unaff_x22 + 0x208);
        _swift_bridgeObjectRelease(uVar29);
        pcVar18 = &DAT_10041bf10;
        FUN_10002a29c(uVar31,&DAT_100553d90);
      } while( true );
    }
  }
  else {
    FUN_100077938(*(undefined8 *)(unaff_x22 + 0x178),*(undefined8 *)(unaff_x22 + 0x1f0));
    lVar27 = lVar35 + lVar37;
    (*pcVar34)(lVar27,1,uVar29);
    if ((int)lVar27 != 1) {
      uVar33 = *(undefined8 *)(unaff_x22 + 0x220);
      lVar27 = *(long *)(unaff_x22 + 0x218);
      uVar19 = *(undefined8 *)(unaff_x22 + 0x210);
      uVar29 = *(undefined8 *)(unaff_x22 + 0x1f8);
      uVar31 = *(undefined8 *)(unaff_x22 + 0x200);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x1f0);
      uVar21 = *(undefined8 *)(unaff_x22 + 0x178);
      (**(code **)(unaff_x22 + 0x2a0))(uVar33,lVar35 + lVar37,uVar19);
      puVar7 = &DAT_100553da0;
      FUN_100047f94(&DAT_100553da0,0xff,PTR_typeMetadataAccessor_100520a18,
                    PTR_Foundation__Foundation__URL_>Swift__Equatable_100520a38);
      bVar2 = Swift::Equatable::___infix(uVar20,uVar33,uVar19);
      pcVar34 = *(code **)(lVar27 + 8);
      (*pcVar34)(uVar33,uVar19);
      _Var17.unknown = &DAT_100553d90;
      pcVar18 = &DAT_10041bf10;
      FUN_10002a29c(uVar29,&DAT_100553d90,&DAT_10041bf10);
      FUN_10002a29c(uVar31,&DAT_100553d90,&DAT_10041bf10);
      (*pcVar34)(uVar20,uVar19);
      FUN_10002a29c(uVar21);
      if (bVar2) goto LAB_1001e3190;
      goto LAB_1001e2ce8;
    }
    lVar35 = *(long *)(unaff_x22 + 0x218);
    uVar31 = *(undefined8 *)(unaff_x22 + 0x210);
    uVar29 = *(undefined8 *)(unaff_x22 + 0x200);
    uVar33 = *(undefined8 *)(unaff_x22 + 0x1f0);
    FUN_10002a29c(*(undefined8 *)(unaff_x22 + 0x1f8),&DAT_100553d90,&DAT_10041bf10);
    FUN_10002a29c(uVar29,&DAT_100553d90,&DAT_10041bf10);
    (**(code **)(lVar35 + 8))(uVar33,uVar31);
  }
  _Var17.unknown = &DAT_10054ea38;
  pcVar18 = &DAT_100426270;
  FUN_10002a29c(*(undefined8 *)(unaff_x22 + 0x178));
LAB_1001e2ce8:
  pcVar24 = *(code **)(unaff_x22 + 0x308);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x300);
  pcVar34 = *(code **)(unaff_x22 + 0x2f8);
  pcVar25 = *(code **)(unaff_x22 + 0x2f0);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x2e8);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x2e0);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x2d8);
  uVar30 = *(undefined8 *)(unaff_x22 + 0x2c8);
  uVar32 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar38 = *(undefined8 *)(unaff_x22 + 0x230);
  DVar36.unknown = *(undefined **)(unaff_x22 + 0x1d0);
  uVar29 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar31 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar39 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar33 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x180);
  SVar45 = *(String *)(unaff_x22 + 0x158);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x268));
  _swift_bridgeObjectRelease(uVar32);
  _swift_release(uVar38);
  local_68 = (char *)0x0;
  local_60 = (void *)0xe000000000000000;
  Swift::_StringGuts::grow(0x47,_Var17);
  SVar40.bridgeObject = (void *)0x80000001004e1010;
  SVar40.str = (char *)0xd000000000000045;
  SVar50.bridgeObject = puVar7;
  SVar50.str = pcVar18;
  Swift::String::append(SVar40,SVar50);
  SVar51.bridgeObject = puVar7;
  SVar51.str = pcVar18;
  Swift::String::append(SVar45,SVar51);
  puVar28 = local_60;
  SVar45.bridgeObject = local_60;
  SVar45.str = local_68;
  local_68 = (char *)0x5b;
  local_60 = (undefined *)0xe100000000000000;
  *(undefined8 *)(unaff_x22 + 0x120) = 0x4f464e49;
  *(undefined8 *)(unaff_x22 + 0x128) = 0xe400000000000000;
  *(undefined8 *)(unaff_x22 + 0x130) = 0x20;
  *(undefined8 *)(unaff_x22 + 0x138) = 0xe100000000000000;
  pcVar18 = (char *)0x0;
  puVar7 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar40 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,unaff_x22 + 0x130,0,PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,uVar30,uVar30);
  SVar52.bridgeObject = puVar7;
  SVar52.str = pcVar18;
  Swift::String::append(SVar40,SVar52);
  _swift_bridgeObjectRelease(SVar40.bridgeObject);
  SVar41.bridgeObject = (void *)0xe300000000000000;
  SVar41.str = (char *)0x5b205d;
  SVar53.bridgeObject = puVar7;
  SVar53.str = pcVar18;
  Swift::String::append(SVar41,SVar53);
  SVar42.bridgeObject = (void *)0xe300000000000000;
  SVar42.str = (char *)0x707061;
  SVar54.bridgeObject = puVar7;
  SVar54.str = pcVar18;
  Swift::String::append(SVar42,SVar54);
  SVar43.bridgeObject = (void *)0xe200000000000000;
  SVar43.str = (char *)0x205d;
  SVar55.bridgeObject = puVar7;
  SVar55.str = pcVar18;
  Swift::String::append(SVar43,SVar55);
  SVar56.bridgeObject = puVar7;
  SVar56.str = pcVar18;
  Swift::String::append(SVar45,SVar56);
  puVar8 = local_60;
  pcVar18 = local_68;
  puVar7 = &DAT_1005320b8;
  _swift_allocObject(&DAT_1005320b8,0x30,7);
  *(char **)(puVar7 + 0x10) = pcVar18;
  *(undefined **)(puVar7 + 0x18) = puVar8;
  *(undefined8 *)(puVar7 + 0x20) = 0;
  *(undefined8 *)(puVar7 + 0x28) = 0xe000000000000000;
  *(code **)(unaff_x22 + 0x90) = thunk_FUN_100099310;
  *(undefined **)(unaff_x22 + 0x98) = puVar7;
  *(undefined **)(unaff_x22 + 0x70) = PTR___NSConcreteStackBlock_100521110;
  *(undefined8 *)(unaff_x22 + 0x78) = 0x42000000;
  *(code **)(unaff_x22 + 0x80) = FUN_1000c7e7c;
  *(undefined **)(unaff_x22 + 0x88) = &DAT_1005320d0;
  pvVar9 = __Block_copy((void *)(unaff_x22 + 0x70));
  DVar4.unknown = puVar8;
  _swift_bridgeObjectRetain();
  Dispatch::DispatchQoS::get_unspecified(DVar4);
  *(undefined **)(unaff_x22 + 0x150) = PTR___swiftEmptyArrayStorage_100524190;
  Swift::SetAlgebra::_init(uVar29,unaff_x22 + 0x150,uVar20,uVar22,uVar39,uVar23);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar36);
  __Block_release(pvVar9);
  (*pcVar25)(uVar29,uVar39);
  (*pcVar34)(DVar36.unknown,uVar31);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x98));
  (*pcVar24)(uVar33,uVar19,uVar21);
  uVar3 = (uint)uVar33;
  static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
  LVar5.unknown = puVar8;
  _swift_bridgeObjectRetain();
  pOVar12 = os::Logger::get_logObject(LVar5);
  pOVar6 = pOVar12;
  _os_log_type_enabled(pOVar12,uVar3 & 0xff);
  pcVar34 = *(code **)(unaff_x22 + 0x310);
  uVar29 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar31 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar33 = *(undefined8 *)(unaff_x22 + 0x180);
  if ((int)pOVar6 == 0) {
    _swift_bridgeObjectRelease_n(puVar8,2);
    (*pcVar34)(uVar31,uVar33);
    _swift_bridgeObjectRelease(uVar29);
  }
  else {
    puVar13 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    pcVar14 = (char *)0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar13 = 0x8220102;
    local_68 = pcVar14;
    FUN_10012dbb0(pcVar18,puVar8,&local_68);
    *(char **)(puVar13 + 1) = pcVar18;
    _swift_bridgeObjectRelease_n(puVar8,2);
    __os_log_impl(0x100000000,pOVar12,uVar3 & 0xff,"%{public}s",puVar13,0xc);
    FUN_100043f24(pcVar14);
    _swift_slowDealloc(pcVar14,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar13,0xffffffffffffffff,0xffffffffffffffff);
    (*pcVar34)(uVar31,uVar33);
    _swift_bridgeObjectRelease(uVar29);
  }
  _swift_bridgeObjectRelease(puVar28);
  uVar31 = *(undefined8 *)(unaff_x22 + 0x228);
  lVar35 = *(long *)(unaff_x22 + 0x218);
  uVar29 = *(undefined8 *)(unaff_x22 + 0x210);
  (**(code **)(*(long *)(unaff_x22 + 0x1e0) + 8))
            (*(undefined8 *)(unaff_x22 + 0x1e8),*(undefined8 *)(unaff_x22 + 0x1d8));
  (**(code **)(lVar35 + 8))(uVar31,uVar29);
  local_88 = (undefined *)0x1;
LAB_1001e370c:
  uVar30 = *(undefined8 *)(unaff_x22 + 0x220);
  uVar32 = *(undefined8 *)(unaff_x22 + 0x208);
  uVar29 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar31 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar38 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar39 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar33 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar22 = *(undefined8 *)(unaff_x22 + 400);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x178);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x228));
  _swift_task_dealloc(uVar30);
  _swift_task_dealloc(uVar32);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar29);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar31);
  _swift_task_dealloc(uVar38);
  _swift_task_dealloc(uVar39);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar33);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar23);
  UNRECOVERED_JUMPTABLE = *(NSURLResponse **)(unaff_x22 + 8);
                    /* WARNING: Could not recover jumptable at 0x0001001e37c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(local_88);
  tVar49._ = UNRECOVERED_JUMPTABLE;
  tVar49._.unknown = local_88;
  return tVar49;
}

