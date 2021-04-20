
# Visit the [C++ code](Harel21_crackme(cheat).cpp) for cpp code and some in-depth explanation.  

# On checking C++ code using ghidra, The c++ code was analyzed.  
# The main function called **FUN_0010127e** and a few other functions.  

def FUN_0010127e():
    local_18 = input("name")  
    local_1c =  **FUN_00101169**(local_18)  
    local_20 = input("serial")  
    FUN_0010124b(local_1c,local_20,local_20)      # Why 3rd argument?  

def FUN_00101169(local_18): 
    iVar1 = int(len(local_18))                    # local_18 = input("name")  
    if ((iVar1 - 1U & 1) == 0):  
        something         // ?  
    else:  
        iVar1 = ((iVar1 - 1) * 645629)            # 0x9d9fd = 645629
        if (iVar1 < 0) :
            iVar1 = iVar1 + 3;
        iVar1 = ((iVar1 >> 2) * 0xd) / 7;
    return iVar1;

