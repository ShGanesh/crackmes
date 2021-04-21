> ./keyg3nme    

Enter key:  

C code (from ghidra):  
```
bool validate_key(int param_1) {
  return param_1 % 0x4c7 == 0;
}

undefined8 main(void) {
  int iVar1;
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  printf("Enter your key:  ");
  __isoc99_scanf(&DAT_0010201a,&local_14);
  iVar1 = validate_key(local_14);
  if (iVar1 == 1) {
    puts("Good job mate, now go keygen me.");
  }
  else {
    puts("nope.");
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
```

In the main function:   
If varlidate_key == True: Success.    

In validate_key:   
It returns a bool (1 or 0)... True if (param_1 % 1223) == 0   
Hence, the key is any multiple of 1223.  
