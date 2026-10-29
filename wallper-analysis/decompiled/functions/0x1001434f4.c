// rea decompile_all
// name: FUN_1001434f4
// address: 0x1001434f4
// body: available
// range: 0x1001434f4-0x100143743 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100143740 to 0x1004147c8 _swift_continuation_await (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001434f4(void)

{
  QoSClass QVar1;
  UnsafeContinuation<undefined,undefined> continuation;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ID IVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined7 extraout_var;
  OS_dispatch_queue *queue;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long unaff_x22;
  NWPathMonitor *this;
  ulong uVar12;
  String function;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x340);
  this = *(NWPathMonitor **)(unaff_x22 + 0x338);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x3a4;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_100143744;
  continuation.unknown = (undefined *)(unaff_x22 + 0x10);
  _swift_continuation_init(continuation.unknown,0);
  puVar2 = &DAT_100554ab0;
  FUN_100002f94(&DAT_100554ab0,&DAT_100427c60);
  lVar11 = *(long *)(puVar2 + -8);
  lVar10 = *(long *)(lVar11 + 0x40);
  uVar6 = lVar10 + 0xf;
  uVar3 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar3);
  function.bridgeObject = (void *)0x80000001004de770;
  function.str = (char *)0xd000000000000018;
  Swift::CheckedContinuation::init(continuation,function);
  puVar4 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar5 = objc_stub::init((ID)puVar4);
  puVar4 = &DAT_10052e430;
  _swift_allocObject(&DAT_10052e430,0x11,7);
  puVar4[0x10] = 0;
  uVar6 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar6);
  (**(code **)(lVar11 + 0x10))();
  uVar8 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar12 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
  puVar7 = &DAT_10052e458;
  _swift_allocObject(&DAT_10052e458,uVar12 + lVar10,uVar8 | 7);
  *(ID *)(puVar7 + 0x10) = IVar5;
  *(undefined **)(puVar7 + 0x18) = puVar4;
  (**(code **)(lVar11 + 0x20))(puVar7 + uVar12,uVar6,puVar2);
  _swift_retain(puVar4);
  Network::NWPathMonitor::_set_pathUpdateHandler(this);
  _swift_task_dealloc(uVar6);
  FUN_10006cc7c(0);
  QVar1 = Dispatch::DispatchQoS::QoSClass::typeMetadataAccessor();
  lVar10 = *(long *)(CONCAT71(extraout_var,QVar1.value) + -8);
  uVar6 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  (**(code **)(lVar10 + 0x68))();
  queue = (extension_Dispatch)::__C::OS_dispatch_queue::global((QoSClass)(__int8)uVar6);
  (**(code **)(lVar10 + 8))(uVar6,CONCAT71(extraout_var,QVar1.value));
  _swift_task_dealloc(uVar6);
  Network::NWPathMonitor::start(this,queue);
  _swift_release(uVar9);
  (**(code **)(lVar11 + 8))(uVar3,puVar2);
  _swift_release(puVar4);
  _swift_task_dealloc(uVar3);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}

