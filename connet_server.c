#include <stdio.h>
#include <stdlib.h>
void main(int args, char **argv)
{
    printf("connet linux server\n");
    //int system(const char *string);
    int ret = system("ls -a");
}
