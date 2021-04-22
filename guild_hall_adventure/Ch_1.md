In the code we can see:

<pre><code>MOV        key=>s_hello_00100a08,RCX       = "hello"  
MOV        num,RAX  
CALL&      strncmp                         int strncmp(char * __s1, char * __s2)   
TEST       EAX,EAX  
JNZ        LAB_00100922                    (If not equal jump to function which prints "no no no ! it's not a socially appropriate greeting !")
</code></pre>

Here the input is compared to the string "hello"  
So the answer to  
