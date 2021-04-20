
// Main function (entry)

void entry(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000000;
  undefined auStack8 [8];
  
  __libc_start_main(FUN_0010127e,in_stack_00000000,&stack0x00000008,FUN_00101320,FUN_00101390, param_3,auStack8);
                                                      // Function of intrest for this specific crack: FUN_0010127e

  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


  // FUN_0010127e
undefined8 FUN_0010127e(void)

{
  long in_FS_OFFSET;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puts("Enter your name");
  __isoc99_scanf(&DAT_00102060,local_18);             // Name stored in variable local_18
  local_1c = FUN_00101169(local_18);                  // Function of interest: FUN_00101169
  puts("Enter the serial");
  __isoc99_scanf(&DAT_00102074,&local_20);            // Serial number stored in local_20
  FUN_0010124b(local_1c,local_20,local_20);           // Function of interest: FUN_0010124b....(Why the third argument?)
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}



int FUN_00101169(char *param_1)                       // Accepts parameter local_18 (Name)

{
  int iVar1;
  size_t sVar2;
  
  sVar2 = strlen(param_1);                            // String length
  iVar1 = (int)sVar2;                                 // iVar1 = int(len(local_18))
  if ((iVar1 - 1U & 1) == 0) {          // ??
    iVar1 = iVar1 + -1;
    if (2 < iVar1) {
      iVar1 = (param_1[2] * 0x240e) / 2 + 1;
    }
  }
  else {                                              // Lets suppose an input will pass throigh here.
    iVar1 = (iVar1 + -1) * 0x9d9fd;                   // (iVar1 + -1)*(big number): Let's try a single character input, hence iVar1 == 0 now.
    if (iVar1 < 0) {                                  
      iVar1 = iVar1 + 3;                              // iVar1 == 0, even now, since iVar not less than 0
    }
    iVar1 = ((iVar1 >> 2) * 0xd) / 7;                 // ((iVar >> 2) * 14) / 7 = ((0>>2)*14)/7 = 0
  }
  return iVar1;                                       // Returned 0
}



void FUN_0010124b(int param_1,int param_2)            // Compares two (int) values. If equal then Yay!
                                                      // Accepts two integers at end: 0, serial number.
{
  if (param_1 == param_2) {
    puts("yay you have the correct creds :)");
  }
  else {
    puts("sorry, better luck next time :(");
  }
  return;
}


