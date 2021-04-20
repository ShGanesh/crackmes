
Visit the [C++ code](Harel21_crackme(cheat).cpp) for cpp code and some in-depth explanation.  

On checking C++ code using ghidra, The c++ code was analyzed.  
The main function called **FUN_0010127e** and a few other functions.  

```
def FUN_0010127e():
    local_18 = input("name")  
    local_1c = FUN_00101169(local_18)  
    local_20 = input("serial")  
    FUN_0010124b(local_1c,local_20,local_20)      # Why 3rd argument?  


def FUN_00101169(local_18): 
    iVar1 = int(len(local_18))                    # local_18 = int(len("name")) 
    if ((iVar1 - 1U & 1) == 0):  
        something?  
    else:  
        iVar1 = ((iVar1 - 1) * 645629)            # 0x9d9fd = 645629
        if (iVar1 < 0) :
            iVar1 = iVar1 + 3;
        iVar1 = ((iVar1 >> 2) * 0xd) / 7;         # (0>>2)*14/7 = 0
    return iVar1;                                 # returned 00


def FUN_0010124b(int param_1,int param_2):        # Compares two (int) values. If equal then Yay!
                                                  # Accepts two integers at end: 0, serial number.
    if (param_1 == param_2):
        puts("yay you have the correct creds :)")
    else:
        puts("sorry, better luck next time :(")
    return;
```

Hence to solve this, iVar1 (name) should be equal to serial number.  
The correct method seems to be creating a keygen which will create a key based on your name.  

But, we already know that the resultant iVar1 of a single digited 'name' will be int(00)  
So we can just use a single character 'name' and then use 0 as serial.  
Yay!
