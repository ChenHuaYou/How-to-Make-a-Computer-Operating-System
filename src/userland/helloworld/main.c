#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <dirent.h>
#include <unistd.h>

int main(int argc,char **argv){
	printf("hello world ! \n");
    char buf[100];
    fgets(buf,50,stdin);
	printf(">>:: %s \n",buf);
	return 0;
}
