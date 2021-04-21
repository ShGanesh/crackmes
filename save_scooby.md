
The C code was analyzed.  
From there we can understand that:  
- It accesses current working directory (cwd)  
- Calculates: local_18 = int(strlen(cwd))
- Manipulates cwd using an algorithm. Hence, Calcualated key: local_1028
- Now, it takes key input into local_1128
- Compares local_1028 and local_1128 character-by-character.
- If local_1028 == local_1128: Success. else: Fail.

keygen at [save_scooby_keygen.c](save_scooby_keygen.c)

Also, for some reason key: 
> $   

also works
