#include <stdio.h>

union int_degisik
{
    struct 
    {
        unsigned char byte1;
        unsigned char byte2;
        unsigned char byte3;
        unsigned char byte4;
    };
    int int_kekw;
};



int main(int argc, char const *argv[])
{
    union int_degisik zaa;
    zaa.int_kekw = __INT_MAX__;
    printf("%d %d %d %d",zaa.byte1,zaa.byte2,zaa.byte3,zaa.byte4); 
    return 0;
}