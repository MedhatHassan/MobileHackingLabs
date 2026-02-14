#include "out.h"



void _FINI_1(void)

{
  __cxa_finalize(&PTR_LOOP_00102dd0);
  return;
}



void FUN_00100db4(void)

{
  return;
}



void _FINI_0(void)

{
  FUN_00100db4();
  return;
}



void FUN_00100dc4(code *UNRECOVERED_JUMPTABLE)

{
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    // WARNING: Could not recover jumptable at 0x00100dd0. Too many branches
                    // WARNING: Treating indirect jump as call
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



void FUN_00100dd8(undefined8 param_1)

{
  __cxa_atexit(FUN_00100dc4,param_1,&PTR_LOOP_00102dd0);
  return;
}



void FUN_00100df4(void)

{
  __register_atfork();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// zhs()

void zhs(void)

{
  long lVar1;
  int local_214;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined4 local_184;
  undefined4 uStack_180;
  undefined8 uStack_17c;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined4 local_134;
  undefined4 uStack_130;
  undefined8 uStack_12c;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined8 uStack_dc;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_78 = 0x4300000065;
  local_80 = 0x5200000046;
  uStack_3c = 0x177;
  uStack_40 = 0xa2;
  uStack_48 = 0x92;
  local_44 = 0xbe;
  uStack_50 = 0x83000000fa;
  uStack_58 = 0xfd000000fe;
  local_60 = 0xd7000000cb;
  uStack_68 = 0x200000003a;
  local_70 = 0x180000000e;
  uStack_c8 = 0x690000003c;
  local_d0 = 0xffffffafffffffa2;
  uStack_8c = 0x24;
  uStack_90 = 0x1a;
  uStack_98 = 0xffffffbe;
  local_94 = 0xffffffb8;
  uStack_a0 = 0xffffff8c0000003a;
  uStack_a8 = 0xffffff98fffffff1;
  local_b0 = 0xffffffcf0000001e;
  uStack_b8 = 0x33ffffff9d;
  local_c0 = 0xffffffc500000066;
  uStack_118 = 0xffffffb9ffffffc3;
  local_120 = 0xffffffb9ffffff92;
  uStack_dc = 0xffffff88;
  uStack_e0 = 0xd;
  uStack_e8 = 0x22;
  local_e4 = 0x37;
  uStack_f0 = 0xffffffa4fffffffb;
  uStack_f8 = 0x7300000002;
  local_100 = 0xffffffd600000078;
  uStack_108 = 0x370000003b;
  local_110 = 0x75ffffff8c;
  uStack_168 = 0x1affffffbc;
  local_170 = 0xffffffabfffffffc;
  uStack_12c = 0xffffff98;
  uStack_130 = 0xffffffb9;
  uStack_138 = 0xc;
  local_134 = 0x57;
  uStack_140 = 0xffffffffffffff94;
  uStack_148 = 0x530000006d;
  local_150 = 0x7000000039;
  uStack_158 = 0xffffffb5ffffffb2;
  local_160 = 0xffffffad0000007a;
  uStack_1b8 = 0x45ffffffd0;
  local_1c0 = 0xfffffff4ffffffcc;
  uStack_17c = 0xffffffa9;
  uStack_180 = 0x13;
  uStack_188 = 0x2f;
  local_184 = 0x1f;
  uStack_190 = 0xfffffff900000063;
  uStack_198 = 0xffffff84fffffffd;
  local_1a0 = 0xffffffdb00000076;
  uStack_1a8 = 0xffffffc6ffffffb8;
  local_1b0 = 0xffffffd2ffffffcb;
  for (local_214 = 0; local_214 < 0x12; local_214 = local_214 + 1) {
    (&DAT_00104010)[local_214] =
         (byte)*(undefined4 *)((long)&local_d0 + (long)local_214 * 4) ^
         (char)local_214 * '\x19' + 4U;
  }
  for (local_214 = 0; local_214 < 0x12; local_214 = local_214 + 1) {
    (&DAT_00104023)[local_214] =
         (byte)*(undefined4 *)((long)&local_120 + (long)local_214 * 4) ^
         (char)local_214 + (char)(local_214 << 2) + 0xcU;
  }
  for (local_214 = 0; local_214 < 0x12; local_214 = local_214 + 1) {
    (&DAT_00104036)[local_214] =
         (byte)*(undefined4 *)((long)&local_1c0 + (long)local_214 * 4) ^ (char)local_214 + 0xbU;
  }
  for (local_214 = 0; local_214 < 0x12; local_214 = local_214 + 1) {
    (&DAT_00104049)[local_214] =
         (byte)*(undefined4 *)((long)&local_80 + (long)local_214 * 4) ^
         (char)local_214 + (char)(local_214 << 2) + 1U;
  }
  for (local_214 = 0; local_214 < 0x12; local_214 = local_214 + 1) {
    (&DAT_00104023)[local_214] =
         (byte)*(undefined4 *)((long)&local_d0 + (long)local_214 * 4) ^
         (char)local_214 * (char)local_214 + 0xcU;
  }
  lVar1 = tpidr_el0;
  lVar1 = *(long *)(lVar1 + 0x28) - local_28;
  if (lVar1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(lVar1);
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// dddff()

void dddff(void)

{
  long lVar1;
  int local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined8 uStack_2c;
  long local_18;
  
  lVar1 = tpidr_el0;
  local_18 = *(long *)(lVar1 + 0x28);
  uStack_68 = 0x4300000065;
  local_70 = 0x5200000046;
  uStack_2c = 0x177;
  uStack_30 = 0xa2;
  uStack_38 = 0x92;
  local_34 = 0xbe;
  uStack_40 = 0x83000000fa;
  uStack_48 = 0xfd000000fe;
  local_50 = 0xd7000000cb;
  uStack_58 = 0x200000003a;
  local_60 = 0x180000000e;
  for (local_74 = 0; local_74 < 0x12; local_74 = local_74 + 1) {
    (&DAT_0010405c)[local_74] =
         (byte)*(undefined4 *)((long)&local_70 + (long)local_74 * 4) ^
         (char)local_74 * '\x0f' + 0xbU;
  }
  lVar1 = tpidr_el0;
  lVar1 = *(long *)(lVar1 + 0x28) - local_18;
  if (lVar1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(lVar1);
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// flag13()

void flag13(void)

{
  long lVar1;
  int local_214;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_78 = 0x4300000065;
  local_80 = 0x5200000046;
  uStack_3c = 0x177;
  uStack_40 = 0xa2;
  uStack_48 = 0x92;
  local_44 = 0xbe;
  uStack_50 = 0x83000000fa;
  uStack_58 = 0xfd000000fe;
  local_60 = 0xd7000000cb;
  uStack_68 = 0x200000003a;
  local_70 = 0x180000000e;
  uStack_c8 = 0x690000003c;
  local_d0 = 0xffffffafffffffa2;
  uStack_8c = 0x24;
  uStack_90 = 0x1a;
  uStack_98 = 0xffffffbe;
  local_94 = 0xffffffb8;
  uStack_a0 = 0xffffff8c0000003a;
  uStack_a8 = 0xffffff98fffffff1;
  local_b0 = 0xffffffcf0000001e;
  uStack_b8 = 0x33ffffff9d;
  local_c0 = 0xffffffc500000066;
  for (local_214 = 0; local_214 < 0x12; local_214 = local_214 + 1) {
    (&DAT_00104049)[local_214] =
         (byte)*(undefined4 *)((long)&local_80 + (long)local_214 * 4) ^
         (char)local_214 + (char)(local_214 << 2) + 1U;
  }
  for (local_214 = 0; local_214 < 0x12; local_214 = local_214 + 1) {
    (&DAT_00104023)[local_214] =
         (byte)*(undefined4 *)((long)&local_d0 + (long)local_214 * 4) ^
         (char)local_214 * (char)local_214 + 0xcU;
  }
  lVar1 = tpidr_el0;
  lVar1 = *(long *)(lVar1 + 0x28) - local_28;
  if (lVar1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(lVar1);
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// flag_fill()

void flag_fill(void)

{
  long lVar1;
  int local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined8 uStack_2c;
  long local_18;
  
  lVar1 = tpidr_el0;
  local_18 = *(long *)(lVar1 + 0x28);
  uStack_68 = 0x690000003c;
  local_70 = 0xffffffafffffffa2;
  uStack_2c = 0x24;
  uStack_30 = 0x1a;
  uStack_38 = 0xffffffbe;
  local_34 = 0xffffffb8;
  uStack_40 = 0xffffff8c0000003a;
  uStack_48 = 0xffffff98fffffff1;
  local_50 = 0xffffffcf0000001e;
  uStack_58 = 0x33ffffff9d;
  local_60 = 0xffffffc500000066;
  for (local_74 = 0; local_74 < 0x12; local_74 = local_74 + 1) {
    (&DAT_00104023)[local_74] =
         (byte)*(undefined4 *)((long)&local_70 + (long)local_74 * 4) ^
         (char)local_74 * (char)local_74 + 0xcU;
  }
  lVar1 = tpidr_el0;
  lVar1 = *(long *)(lVar1 + 0x28) - local_18;
  if (lVar1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(lVar1);
}



// ZGS(int)

void ZGS(int param_1)

{
  long lVar1;
  int local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined8 uStack_2c;
  long local_18;
  
  lVar1 = tpidr_el0;
  local_18 = *(long *)(lVar1 + 0x28);
  uStack_68 = 0x690000003c;
  local_70 = 0xffffffafffffffa2;
  uStack_2c = 0x24;
  uStack_30 = 0x1a;
  uStack_38 = 0xffffffbe;
  local_34 = 0xffffffb8;
  uStack_40 = 0xffffff8c0000003a;
  uStack_48 = 0xffffff98fffffff1;
  local_50 = 0xffffffcf0000001e;
  uStack_58 = 0x33ffffff9d;
  local_60 = 0xffffffc500000066;
  for (local_78 = 0; local_78 < 0x12; local_78 = local_78 + 1) {
    (&DAT_0010405c)[local_78] =
         (byte)*(undefined4 *)((long)&local_70 + (long)local_78 * 4) ^
         (char)local_78 * (char)local_78 + 0xbU;
  }
  lVar1 = tpidr_el0;
  lVar1 = *(long *)(lVar1 + 0x28) - local_18;
  if (lVar1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(lVar1);
}



// tyy(int, int)

void tyy(int param_1,int param_2)

{
  long lVar1;
  int local_7c;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined8 uStack_2c;
  long local_18;
  
  lVar1 = tpidr_el0;
  local_18 = *(long *)(lVar1 + 0x28);
  uStack_68 = 0x690000003c;
  local_70 = 0xffffffafffffffa2;
  uStack_2c = 0x24;
  uStack_30 = 0x1a;
  uStack_38 = 0xffffffbe;
  local_34 = 0xffffffb8;
  uStack_40 = 0xffffff8c0000003a;
  uStack_48 = 0xffffff98fffffff1;
  local_50 = 0xffffffcf0000001e;
  uStack_58 = 0x33ffffff9d;
  local_60 = 0xffffffc500000066;
  for (local_7c = 0; local_7c < 0x12; local_7c = local_7c + 1) {
    (&DAT_00104023)[local_7c] =
         (byte)*(undefined4 *)((long)&local_70 + (long)local_7c * 4) ^
         (char)local_7c * (char)local_7c + 0xdU;
  }
  lVar1 = tpidr_el0;
  lVar1 = *(long *)(lVar1 + 0x28) - local_18;
  if (lVar1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(lVar1);
}



// asds(int)

void asds(int param_1)

{
  long lVar1;
  int local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined8 uStack_2c;
  long local_18;
  
  lVar1 = tpidr_el0;
  local_18 = *(long *)(lVar1 + 0x28);
  uStack_68 = 0x690000003c;
  local_70 = 0xffffffafffffffa2;
  uStack_2c = 0x24;
  uStack_30 = 0x1a;
  uStack_38 = 0xffffffbe;
  local_34 = 0xffffffb8;
  uStack_40 = 0xffffff8c0000003a;
  uStack_48 = 0xffffff98fffffff1;
  local_50 = 0xffffffcf0000001e;
  uStack_58 = 0x33ffffff9d;
  local_60 = 0xffffffc500000066;
  for (local_78 = 0; local_78 < 0x12; local_78 = local_78 + 1) {
    (&DAT_00104023)[local_78] =
         (byte)*(undefined4 *)((long)&local_70 + (long)local_78 * 4) ^
         (char)local_78 * (char)local_78 + 0x2aU;
  }
  lVar1 = tpidr_el0;
  lVar1 = *(long *)(lVar1 + 0x28) - local_18;
  if (lVar1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(lVar1);
}



// flag_(int, int)

void flag_(int param_1,int param_2)

{
  long lVar1;
  long lVar2;
  int local_7c;
  
  lVar2 = tpidr_el0;
  lVar2 = *(long *)(lVar2 + 0x28);
  for (local_7c = 0; local_7c < 0x12; local_7c = local_7c + 1) {
    (&DAT_00104023)[local_7c] = (&DAT_0010405c)[local_7c] ^ ((byte)(local_7c << 1) | 1);
  }
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28) - lVar2;
  if (lVar2 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(lVar2);
}



// x1(int, int)

void x1(int param_1,int param_2)

{
  long lVar1;
  int local_7c;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined8 uStack_2c;
  long local_18;
  
  lVar1 = tpidr_el0;
  local_18 = *(long *)(lVar1 + 0x28);
  uStack_68 = 0x690000003c;
  local_70 = 0xffffffafffffffa2;
  uStack_2c = 0x24;
  uStack_30 = 0x1a;
  uStack_38 = 0xffffffbe;
  local_34 = 0xffffffb8;
  uStack_40 = 0xffffff8c0000003a;
  uStack_48 = 0xffffff98fffffff1;
  local_50 = 0xffffffcf0000001e;
  uStack_58 = 0x33ffffff9d;
  local_60 = 0xffffffc500000066;
  for (local_7c = 0; local_7c < 0x12; local_7c = local_7c + 1) {
    (&DAT_00104023)[local_7c] =
         (byte)*(undefined4 *)((long)&local_70 + (long)local_7c * 4) ^
         (char)local_7c * (char)local_7c + 0x2aU;
  }
  lVar1 = tpidr_el0;
  lVar1 = *(long *)(lVar1 + 0x28) - local_18;
  if (lVar1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(lVar1);
}



// ss(int)

void ss(int param_1)

{
  long lVar1;
  int local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined8 uStack_2c;
  long local_18;
  
  lVar1 = tpidr_el0;
  local_18 = *(long *)(lVar1 + 0x28);
  uStack_68 = 0x690000003c;
  local_70 = 0xffffffafffffffa2;
  uStack_2c = 0x24;
  uStack_30 = 0x1a;
  uStack_38 = 0xffffffbe;
  local_34 = 0xffffffb8;
  uStack_40 = 0xffffff8c0000003a;
  uStack_48 = 0xffffff98fffffff1;
  local_50 = 0xffffffcf0000001e;
  uStack_58 = 0x33ffffff9d;
  local_60 = 0xffffffc500000066;
  for (local_78 = 0; local_78 < 0x12; local_78 = local_78 + 1) {
    (&DAT_00104023)[local_78] =
         (byte)*(undefined4 *)((long)&local_70 + (long)local_78 * 4) ^
         (char)local_78 * (char)local_78 + 0x16U;
  }
  lVar1 = tpidr_el0;
  lVar1 = *(long *)(lVar1 + 0x28) - local_18;
  if (lVar1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(lVar1);
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// tt()

void tt(void)

{
  long lVar1;
  int local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined8 uStack_2c;
  long local_18;
  
  lVar1 = tpidr_el0;
  local_18 = *(long *)(lVar1 + 0x28);
  uStack_68 = 0x690000003c;
  local_70 = 0xffffffafffffffa2;
  uStack_2c = 0x24;
  uStack_30 = 0x1a;
  uStack_38 = 0xffffffbe;
  local_34 = 0xffffffb8;
  uStack_40 = 0xffffff8c0000003a;
  uStack_48 = 0xffffff98fffffff1;
  local_50 = 0xffffffcf0000001e;
  uStack_58 = 0x33ffffff9d;
  local_60 = 0xffffffc500000066;
  for (local_74 = 0; local_74 < 0x12; local_74 = local_74 + 1) {
    (&DAT_00104023)[local_74] =
         (byte)*(undefined4 *)((long)&local_70 + (long)local_74 * 4) ^
         (char)local_74 * (char)local_74 + 0xcU;
  }
  lVar1 = tpidr_el0;
  lVar1 = *(long *)(lVar1 + 0x28) - local_18;
  if (lVar1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(lVar1);
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// dd()

void dd(void)

{
  long lVar1;
  int local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined8 uStack_2c;
  long local_18;
  
  lVar1 = tpidr_el0;
  local_18 = *(long *)(lVar1 + 0x28);
  uStack_68 = 0x690000003c;
  local_70 = 0xffffffafffffffa2;
  uStack_2c = 0x24;
  uStack_30 = 0x1a;
  uStack_38 = 0xffffffbe;
  local_34 = 0xffffffb8;
  uStack_40 = 0xffffff8c0000003a;
  uStack_48 = 0xffffff98fffffff1;
  local_50 = 0xffffffcf0000001e;
  uStack_58 = 0x33ffffff9d;
  local_60 = 0xffffffc500000066;
  for (local_74 = 0; local_74 < 0x12; local_74 = local_74 + 1) {
    (&DAT_00104023)[local_74] =
         (byte)*(undefined4 *)((long)&local_70 + (long)local_74 * 4) ^
         (char)local_74 * (char)local_74 + 0xcU;
  }
  lVar1 = tpidr_el0;
  lVar1 = *(long *)(lVar1 + 0x28) - local_18;
  if (lVar1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail(lVar1);
}



void Java_com_mobilehackinglab_challenge_Activity2_getflag(_JNIEnv *param_1)

{
  flag_fill();
  flag13();
  ZGS(0x2a);
  tyy(10,0x14);
  asds(5);
  zhs();
  x1(0x1e,0xf);
  ss(8);
  flag_fill();
  flag13();
  flag13();
  flag13();
  ZGS(0x2a);
  tyy(10,0x14);
  asds(5);
  zhs();
  dddff();
  tt();
  dd();
  x1(0x1e,0xf);
  ss(8);
  x1(0x1e,0xf);
  ss(8);
  dddff();
  zhs();
  _JNIEnv::NewStringUTF(param_1,"Success");
  return;
}



// _JNIEnv::NewStringUTF(char const*)

void __thiscall _JNIEnv::NewStringUTF(_JNIEnv *this,char *param_1)

{
  (**(code **)(*(long *)this + 0x538))(this,param_1);
  return;
}



void FUN_00101cb0(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



void __cxa_finalize(void)

{
  __cxa_finalize();
  return;
}



void __cxa_atexit(void)

{
  __cxa_atexit();
  return;
}



void __register_atfork(void)

{
  __register_atfork();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void zhs(void)

{
  zhs();
  return;
}



void __stack_chk_fail(void)

{
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void dddff(void)

{
  dddff();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void flag13(void)

{
  flag13();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void flag_fill(void)

{
  flag_fill();
  return;
}



void ZGS(int param_1)

{
  ZGS(param_1);
  return;
}



void tyy(int param_1,int param_2)

{
  tyy(param_1,param_2);
  return;
}



void asds(int param_1)

{
  asds(param_1);
  return;
}



void x1(int param_1,int param_2)

{
  x1(param_1,param_2);
  return;
}



void ss(int param_1)

{
  ss(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void tt(void)

{
  tt();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void dd(void)

{
  dd();
  return;
}



void __thiscall _JNIEnv::NewStringUTF(_JNIEnv *this,char *param_1)

{
  NewStringUTF(this,param_1);
  return;
}



