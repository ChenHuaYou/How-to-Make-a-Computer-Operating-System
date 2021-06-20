#include "bash.h"
extern "C"{
#include <stdio.h>
#include <string.h>
#include <unistd.h>
}

void Bash::readStdin(){
    char ch;
    int i=0;
    while((ch=getc(stdin))!='\n' && ch != EOF){
        buffer[i]=ch;
        i++;
    }
}

int Bash::execute(){
    int n = 0;
    char *result = NULL;
    char *dst[10];
    result = strtok(buffer, " ");
    while( result != NULL )
    {
        strcpy(dst[n++], result);
        result = strtok(NULL, " ");
        n++;
    }

    dst[0] = strcat("/bin/", dst[0]);

    execv(dst[0], &dst[1]);
}

