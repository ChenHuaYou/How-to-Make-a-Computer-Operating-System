#include<cstdio>
class Bash{
    public:
        char * readStdin();
        int execute(char * s);
    private:
        char buffer[100];
};


char * Bash::readStdin(){
    char ch;
    int i=0;
    while((ch=getchar())!='\n' && ch != EOF){
        putchar(ch);
        buffer[i]=ch;
        i++;
    }
    return buffer;
}

int Bash::execute(char *s){
   execute(s);
}
