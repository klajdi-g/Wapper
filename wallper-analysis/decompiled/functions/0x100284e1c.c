// rea decompile_all
// name: FUN_100284e1c
// address: 0x100284e1c
// body: available
// range: 0x100284e1c-0x100284f93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined1  [16]
FUN_100284e1c(ulong param_1,undefined8 param_2,URL param_3,URL param_4,undefined8 param_5,
             long param_6)

{
  long lVar1;
  code *pcVar2;
  URL self;
  ID IVar3;
  NSURL *op;
  NSURL *extraout_x1;
  SEL op_00;
  undefined8 *puVar4;
  undefined8 *extraout_x8;
  byte *pbVar5;
  long extraout_x12;
  SEL unaff_x19;
  NSURL *unaff_x20;
  undefined8 uVar6;
  NSString *unaff_x21;
  long unaff_x23;
  NSString *unaff_x24;
  code *unaff_x25;
  long unaff_x26;
  long unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  String SVar23;
  String SVar24;
  undefined1 auVar25 [16];
  
  lVar1 = lRam0000000000707059;
  op = (NSURL *)0xe300000000000000;
  self.unknown = (NSString *)0x707061;
  puVar4 = (undefined8 *)(param_1 & 0xff);
  pbVar5 = &switchD_100284e44::switchdataD_10042d7d8;
  switch(puVar4) {
  default:
    self.unknown = (NSString *)0x696c;
  case (undefined8 *)0x68:
  case (undefined8 *)0x76:
  case (undefined8 *)0xb6:
    self.unknown = (undefined *)((ulong)self.unknown & 0xffffffff0000ffff | 0x796365660000);
  case (undefined8 *)0x66:
  case (undefined8 *)0x8e:
    self.unknown = self.unknown | 0x6c63000000000000;
  case (undefined8 *)0x90:
    op = (NSURL *)0xe900000000000065;
  case (undefined8 *)0x12:
  case (undefined8 *)0x1a:
  case (undefined8 *)0x22:
  case (undefined8 *)0x2a:
  case (undefined8 *)0x32:
    auVar7._8_8_ = op;
    auVar7._0_8_ = self.unknown;
    return auVar7;
  case (undefined8 *)0x2:
  case (undefined8 *)0xfa:
    op = (NSURL *)0xe900000000000070;
    self.unknown = (NSString *)0x6f62;
  case (undefined8 *)0x94:
  case (undefined8 *)0x9c:
  case (undefined8 *)0xa4:
  case (undefined8 *)0xac:
    self.unknown = (undefined *)((ulong)self.unknown & 0xffffffff0000ffff | 0x61727473746f0000);
  case (undefined8 *)0x5c:
    auVar13._8_8_ = op;
    auVar13._0_8_ = self.unknown;
    return auVar13;
  case (undefined8 *)0x3:
    auVar14._8_8_ = 0xe900000000000072;
    auVar14._0_8_ = 0x657061706c6c6177;
    return auVar14;
  case (undefined8 *)0x4:
  case (undefined8 *)0x5a:
  case (undefined8 *)0x6e:
  case (undefined8 *)0x82:
  case (undefined8 *)0x96:
  case (undefined8 *)0x9e:
  case (undefined8 *)0xa6:
  case (undefined8 *)0xa8:
  case (undefined8 *)0xae:
    op = (NSURL *)0xe800000000000000;
    self.unknown = (NSString *)0x616279616c70;
  case (undefined8 *)0x7e:
  case (undefined8 *)0xa0:
  case (undefined8 *)0xbe:
    auVar10._0_8_ = (ulong)self.unknown | 0x6b63000000000000;
    auVar10._8_8_ = op;
    return auVar10;
  case (undefined8 *)0x5:
    op = (NSURL *)0xe700000000000000;
    self.unknown = (NSString *)0x70736964;
  case (undefined8 *)0x99:
  case (undefined8 *)0xa1:
  case (undefined8 *)0xa9:
  case (undefined8 *)0xb1:
    auVar16._0_8_ = (ulong)self.unknown | 0x79616c00000000;
    auVar16._8_8_ = op;
    return auVar16;
  case (undefined8 *)0x6:
  case (undefined8 *)0x38:
  case (undefined8 *)0x4b:
  case (undefined8 *)0xc8:
    op = (NSURL *)0xe500000000000000;
    self.unknown = (NSString *)0x65776f70;
  case (undefined8 *)0x7d:
  case (undefined8 *)0xbd:
    self.unknown = self.unknown | 0x7200000000;
  case (undefined8 *)0x42:
    auVar18._8_8_ = op;
    auVar18._0_8_ = self.unknown;
    return auVar18;
  case (undefined8 *)0x7:
  case (undefined8 *)0x80:
    auVar15._8_8_ = 0xe500000000000000;
    auVar15._0_8_ = 0x616964656d;
    return auVar15;
  case (undefined8 *)0x8:
  case (undefined8 *)0x3e:
    op = (NSURL *)0xea00000000006e65;
    self.unknown = (NSString *)0x6f6c;
  case (undefined8 *)0xd9:
    self.unknown = (undefined *)((ulong)self.unknown & 0xffffffff0000ffff | 0x63736b630000);
  case (undefined8 *)0xd3:
    auVar20._0_8_ = (ulong)self.unknown | 0x6572000000000000;
    auVar20._8_8_ = op;
    return auVar20;
  case (undefined8 *)0x9:
    auVar12._8_8_ = 0xe700000000000000;
    auVar12._0_8_ = 0x7972617262696c;
    return auVar12;
  case (undefined8 *)0xa:
    op = (NSURL *)0xe700000000000000;
    self.unknown = (NSString *)0x7774656e;
  case (undefined8 *)0x58:
    auVar19._0_8_ = (ulong)self.unknown | 0x6b726f00000000;
    auVar19._8_8_ = op;
    return auVar19;
  case (undefined8 *)0xb:
    op = (NSURL *)0xe700000000000000;
    self.unknown = (NSString *)0x696c;
  case (undefined8 *)0xb0:
    auVar9._0_8_ = (ulong)self.unknown & 0xffffffff0000ffff | 0x65736e65630000;
    auVar9._8_8_ = op;
    return auVar9;
  case (undefined8 *)0xc:
    op = (NSURL *)0xe600000000000000;
    self.unknown = (NSString *)0x6564;
  case (undefined8 *)0x98:
    auVar11._0_8_ = (ulong)self.unknown & 0xffffffff0000ffff | 0x656369760000;
    auVar11._8_8_ = op;
    return auVar11;
  case (undefined8 *)0xd:
    op = (NSURL *)0xe600000000000000;
  case (undefined8 *)0x6c:
    auVar17._8_8_ = op;
    auVar17._0_8_ = 0x657461647075;
    return auVar17;
  case (undefined8 *)0xe:
  case (undefined8 *)0x14:
  case (undefined8 *)0x2c:
  case (undefined8 *)0xf8:
    op = (NSURL *)0xe200000000000000;
  case (undefined8 *)0xe8:
  case (undefined8 *)0xf0:
    self.unknown = (NSString *)0x6975;
  case (undefined8 *)0x0:
  case (undefined8 *)0x1c:
  case (undefined8 *)0x24:
  case (undefined8 *)0x34:
    auVar8._8_8_ = op;
    auVar8._0_8_ = self.unknown;
    return auVar8;
  case (undefined8 *)0x44:
  case (undefined8 *)0x4c:
  case (undefined8 *)0xd2:
  case (undefined8 *)0xdb:
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
  case (undefined8 *)0xd4:
  case (undefined8 *)0xd6:
  case (undefined8 *)0xda:
    *(long *)((long)register0x00000008 + 0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + 0x18) = unaff_x30;
  case (undefined8 *)0x43:
    self = Foundation::URL::typeMetadataAccessor();
    FUN_1000a1ff8(self.unknown,&DAT_100558fd0);
    unaff_x20 = (NSURL *)&DAT_100558fd0;
  case (undefined8 *)0xff:
    op = unaff_x20;
    FUN_100099338(self.unknown,op);
    FUN_100285060(self.unknown);
  case (undefined8 *)0x11:
  case (undefined8 *)0x19:
  case (undefined8 *)0x21:
  case (undefined8 *)0x29:
  case (undefined8 *)0x31:
    auVar22._8_8_ = op;
    auVar22._0_8_ = self.unknown;
    return auVar22;
  case (undefined8 *)0x50:
  case (undefined8 *)0xcd:
    unaff_x19 = (SEL)NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  case (undefined8 *)0x3c:
  case (undefined8 *)0xce:
  case (undefined8 *)0xdc:
  case (undefined8 *)0x47:
    self.unknown = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  case (undefined8 *)0x39:
  case (undefined8 *)0x45:
  case (undefined8 *)0x48:
  case (undefined8 *)0xcc:
  case (undefined8 *)0xd5:
  case (undefined8 *)0xd7:
  case (undefined8 *)0xdf:
    self.unknown = (undefined *)NSUserDefaults::boolForKey_((ID)unaff_x19,self.unknown);
    op = extraout_x1;
  case (undefined8 *)0x3b:
  case (undefined8 *)0x52:
  case (undefined8 *)0xd0:
    unaff_x21 = (NSString *)self.unknown;
  case (undefined8 *)0x51:
  case (undefined8 *)0x3d:
  case (undefined8 *)0xcb:
  case (undefined8 *)0x4e:
  case (undefined8 *)0xde:
    self.unknown = (NSString *)0x0;
  case (undefined8 *)0x46:
    puVar4 = &DAT_100559000;
  case (undefined8 *)0x3f:
  case (undefined8 *)0x40:
  case (undefined8 *)0x4d:
  case (undefined8 *)0xdd:
    *(char *)(puVar4 + 1) = (char)unaff_x21;
  case (undefined8 *)0x41:
  case (undefined8 *)0x53:
  case (undefined8 *)0xc9:
  case (undefined8 *)0xca:
  case (undefined8 *)0xd1:
  case (undefined8 *)0x3a:
  case (undefined8 *)0x49:
  case (undefined8 *)0xcf:
    auVar21._8_8_ = op;
    auVar21._0_8_ = self.unknown;
    return auVar21;
  case (undefined8 *)0x59:
  case (undefined8 *)0x6d:
  case (undefined8 *)0x81:
  case (undefined8 *)0x95:
  case (undefined8 *)0x9d:
  case (undefined8 *)0xa5:
  case (undefined8 *)0xad:
    (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lRam0000000000707059 + 0x40));
    puVar4 = extraout_x8;
    pbVar5 = (byte *)register0x00000008;
    unaff_x26 = lVar1;
  case (undefined8 *)0x7c:
    unaff_x20 = (NSURL *)(pbVar5 + -((long)puVar4 + 0xfU & 0xfffffffffffffff0));
    (*(code *)PTR____chkstk_darwin_100521118)();
    unaff_x23 = (long)unaff_x20 - extraout_x12;
    unaff_x21 = (NSString *)&_OBJC_CLASS___NSFileManager;
    IVar3 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,(SEL)op);
    param_4.unknown = (undefined *)0x1;
    self.unknown = (undefined *)NSFileManager::URLsForDirectory_inDomains_(IVar3,(SEL)op,5);
  case (undefined8 *)0x70:
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  case (undefined8 *)0x10:
  case (undefined8 *)0x18:
    unaff_x24 = (NSString *)self.unknown;
  case (undefined8 *)0x20:
    if (*(long *)(unaff_x24 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1002852a4);
      (*pcVar2)();
    }
    puVar4 = (undefined8 *)
             ((ulong)*(byte *)(unaff_x26 + 0x50) + 0x20 &
             ((ulong)*(byte *)(unaff_x26 + 0x50) ^ 0xffffffffffffffff));
  case (undefined8 *)0x28:
  case (undefined8 *)0x30:
    (**(code **)(unaff_x26 + 0x10))(unaff_x20,unaff_x24 + (long)puVar4);
    _swift_bridgeObjectRelease(unaff_x24);
    self.unknown = (NSString *)0x6f4c;
  case (undefined8 *)0x71:
    SVar23.str = (char *)((ulong)self.unknown & 0xffffffff0000ffff | 0x6c61572f73670000);
    SVar23.bridgeObject = (void *)0xec0000007265706c;
    Foundation::URL::appendingPathComponent(SVar23,true,param_4);
    unaff_x25 = *(code **)(unaff_x26 + 8);
    op_00 = unaff_x19;
    (*unaff_x25)(unaff_x20);
    self.unknown = (undefined *)NSFileManager::defaultManager((ID)unaff_x21,op_00);
    unaff_x21 = (NSString *)self.unknown;
  case (undefined8 *)0xbc:
    unaff_x20 = Foundation::URL::_bridgeToObjectiveC(self);
    *(undefined8 *)(unaff_x29 + -0x50) = 0;
  case (undefined8 *)0x9a:
  case (undefined8 *)0xa2:
  case (undefined8 *)0xaa:
  case (undefined8 *)0xb2:
    self.unknown = unaff_x21;
    param_3.unknown = unaff_x20;
    param_6 = unaff_x29 + -0x50;
    param_4.unknown = (undefined *)0x1;
    param_5 = 0;
switchD_100284e44_caseD_72:
    IVar3 = objc_stub::createDirectoryAtURL_withIntermediateDirectories_attributes_error_
                      ((ID)self.unknown,param_3.unknown,param_4.unknown,param_5,param_6);
    uVar6 = *(undefined8 *)(unaff_x29 + -0x50);
    if ((int)IVar3 == 0) {
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
      _swift_errorRelease(uVar6);
    }
    else {
switchD_100284e44_caseD_5d:
    }
    self.unknown = (NSString *)0x6c6c6157;
switchD_100284e44_caseD_fc:
    self.unknown = self.unknown | 0x657000000000;
    goto switchD_100284e44_caseD_73;
  case (undefined8 *)0x5d:
  case (undefined8 *)0x85:
    goto switchD_100284e44_caseD_5d;
  case (undefined8 *)0x72:
    goto switchD_100284e44_caseD_72;
  case (undefined8 *)0x73:
  case (undefined8 *)0x9b:
  case (undefined8 *)0xa3:
  case (undefined8 *)0xab:
  case (undefined8 *)0xb3:
  case (undefined8 *)0xfd:
  case (undefined8 *)0xfe:
switchD_100284e44_caseD_73:
    SVar24.str = (char *)((ulong)self.unknown | 0x2e72000000000000);
    SVar24.bridgeObject = (void *)0xeb00000000676f6c;
    Foundation::URL::appendingPathComponent(SVar24,param_3);
    (*unaff_x25)(unaff_x23);
    if (*(long *)PTR____stack_chk_guard_100521138 == *(long *)(unaff_x29 + -0x48)) {
      auVar25._8_8_ = unaff_x19;
      auVar25._0_8_ = unaff_x23;
      return auVar25;
    }
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  case (undefined8 *)0xfc:
    goto switchD_100284e44_caseD_fc;
  }
}

