

class Bash{
    public:
        char * readStdin();
        int execute(char * s);
    private:
        char buffer[100];
};
