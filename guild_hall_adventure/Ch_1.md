When we run the program we can see:  
```
$ ./adventure  
Woaaa ! what about being polite ? huh ?
```
Lets try pasing an argument.
```
$./adventure a  
no no no ! it's not a socially appropriate greeting !
```
So there is something fishy in the argument. Lets check the assembly.  

In the code we can see:
<pre><code>MOV        key=>s_hello_00100a08,RCX       = "hello"  
MOV        num,RAX  
CALL&      strncmp                         int strncmp(char * __s1, char * __s2)   
TEST       EAX,EAX  
JNZ        LAB_00100922                    (If not equal jump to function which prints "no no no ! it's not a socially appropriate greeting !")
</code></pre>

Here the input is compared to the string "hello"  
So we can continue with:  
```
$ ./adventure hello 
Friendly greetings to you, hacker from another world !  
So, why are you here ? :   
```
Lets input something random...  
```
So, why are you here ? : x  
x ?  This is the guild hall, i can't let you in, sorry, i need to kill you now. Byyye~~~
Segmentation fault (core dumped)
```
