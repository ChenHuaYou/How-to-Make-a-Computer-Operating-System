#include "bash.h"
#include "stdio.h"

char * Bash::readStdin(){
    char ch;
    int i=0;
    while((ch=getc(stdin))!='\n'){
        putchar(ch);
        buffer[i]=ch;
        i++;
    }
}
