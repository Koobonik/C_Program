#include <stdio.h>
#include <stdlib.h>
void main(int args, char **argv)
{
    printf("connet linux server\n");
    //int system(const char *string);
    int ret = system("sudo apt-get update");//입력하고 싶은 명령어 입력하면 됨
    // 이후 ssh 연결을 편리하게 하기위해 만들 것임
}
