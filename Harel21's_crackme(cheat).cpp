
// Main function (entry)

void entry(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000000;
  undefined auStack8 [8];
  
  __libc_start_main(FUN_0010127e,in_stack_00000000,&stack0x00000008,FUN_00101320,FUN_00101390, param_3,auStack8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

// Functions to note for this specific crack: FUN_0010127e

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
  FUN_0010124b(local_1c,local_20,local_20);           // Function of interest: FUN_0010124b
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}
