#include <stdio.h>
#include <stdlib.h>
void main(int args, char **argv)
{
    printf("connet linux server\n");
    int ret = system("sudo apt-get update");//입력하고 싶은 명령어 입력하면 됨
}
